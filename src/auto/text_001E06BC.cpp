/* 3 functions from 0x001E06BC to 0x001E148B, found by Ghidra. */
#include "common.h"
#include <excpt.h>

extern "C" unsigned long __readfsdword(unsigned long Offset);
#pragma intrinsic(__readfsdword)
extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *cs);
extern "C" __declspec(dllimport) void __stdcall RtlLeaveCriticalSection(void *cs);
extern "C" __declspec(dllimport) long __stdcall NtFreeVirtualMemory(void **base, u32 *size, u32 type);

struct S_ListEntry {
    S_ListEntry *flink;
    S_ListEntry *blink;
};

struct S_HeapEntry {
    u16 size;
    u16 prevSize;
    u8 tagIndex;
    u8 flags;
    u8 unusedBytes;
    u8 segmentIndex;
    S_ListEntry freeList;
};

struct S_Heap {
    char pad0[0x18];
    u32 flags;                  /* +0x18 */
    char pad1C[0xC];
    u32 deCommitFreeBlockThreshold; /* +0x28 */
    u32 deCommitTotalFreeThreshold; /* +0x2C */
    u32 totalFreeSize;          /* +0x30 */
    char pad34[0x160 - 0x34];
    u8 freeListsInUse[0x20];    /* +0x160 */
    S_ListEntry freeLists[128]; /* +0x180 */
    void *lockVariable;         /* +0x580 */
};

struct S_HeapCallout {
    char pad0[0x14];
    void (__stdcall *notify)(int code, void *data);
};

struct S_HeapParams {
    u32 length, segmentReserve, segmentCommit, deCommitFree, deCommitTotal;
    u32 maxAlloc, virtualThreshold, initialCommit, initialReserve, commitRoutine, lock2, r2;
};
extern "C" long __stdcall NtAllocateVirtualMemory(void **base, u32 zero, u32 *size, u32 type, u32 prot);
extern "C" long __stdcall NtQueryVirtualMemory(void *addr, int cls, void *info, u32 len, u32 *ret);
extern "C" void __stdcall RtlInitializeCriticalSection(void *cs);
extern "C" void *memcpy(void *, const void *, unsigned int);
extern "C" void *memset(void *, int, unsigned int);
extern u32 D_0028FD88, D_002ACBD4, D_002ACBD8, D_002ACBDC, D_002ACBE0;
extern u32 D_000FF000, D_00040000, D_0000FFFF, D_00010000;
extern u8 D_002F6BB1, D_002F6BB2;
u8 __stdcall func_001E016D(S_Heap *heap, void *a, int b, void *c, u32 d, void *e, void *f);
S_HeapEntry *__stdcall func_001DF985(S_Heap *heap, S_HeapEntry *entry, u32 *size, int a3);
void __stdcall func_001E0412(S_Heap *heap, S_HeapEntry *entry, u32 size);
void __stdcall func_001DFC2A(S_Heap *heap, S_HeapEntry *entry, u32 size);

int __stdcall func_001E06BC(u32 flags, void *base, u32 reserve, u32 commit, void *lock, S_HeapParams *params)
{
    S_HeapParams p;
    S_Heap *heap;
    u32 heapSize;
    void *region;
    u32 mbi[8];
    u32 flag;
    u32 *pbase;
    u32 psize;

    heap = 0;
    memset(&p, 0, 0x30);
    if (params) {
        if (params->length == 0x30) {
            memcpy(&p, params, 0x30);
        } else {
            return 1;
        }
    }
    if (D_002F6BB2 & 0x20) {
        flags |= 0x80;
    }
    if (p.segmentReserve == 0) p.segmentReserve = D_002ACBD4;
    if (p.segmentCommit == 0) p.segmentCommit = D_002ACBD8;
    if (p.deCommitFree == 0) p.deCommitFree = D_002ACBE0;
    if (p.deCommitTotal == 0) p.deCommitTotal = D_002ACBDC;
    if (p.maxAlloc == 0) p.maxAlloc = 0x7ffdefff;
    if (p.virtualThreshold != 0 && p.virtualThreshold > D_000FF000) {
        p.virtualThreshold = D_000FF000;
    }
    if (commit == 0) {
        commit = 0x1000;
        if (reserve == 0) {
            reserve = D_00040000;
        } else {
            reserve = (reserve + 0xfff) & 0xfffff000;
        }
    } else {
        commit = (commit + 0xfff) & 0xfffff000;
        if (reserve == 0) {
            reserve = (commit + D_0000FFFF) & 0xffff0000;
        } else {
            reserve = (reserve + 0xfff) & 0xfffff000;
        }
    }
    heapSize = 0x590;
    if (!(flags & 1)) {
        if (lock) {
            flags |= 0x8000;
        } else {
            heapSize = 0x5ac;
            lock = (void *)-1;
        }
    } else {
        if (lock) {
            return 0;
        }
    }
    if (base) {
        if (p.initialCommit != 0) {
            region = (void *)p.initialReserve;
            if (region == 0 || p.initialCommit == 0 || (u32)region > p.initialCommit) {
                return 0;
            }
            if (flags & 2) {
                return 0;
            }
            psize = p.initialCommit;
            pbase = &psize;
            region = base;
            memset(base, 0, 0x1000);
        } else {
            memset(&mbi, 0, 0x20);
            if (NtQueryVirtualMemory(base, 0, &mbi, 0x1c, 0) < 0) {
                return 0;
            }
            if ((void *)mbi[0] != base) {
                return 0;
            }
            if (mbi[4] == D_00010000) {
                return 0;
            }
            region = base;
            if (mbi[4] == 0x1000) {
                memset(base, 0, 0x1000);
            }
            commit = mbi[3];
            if (NtQueryVirtualMemory((char *)base + commit, 0, &mbi, 0x1c, 0) >= 0 && mbi[4] == 0x2000) {
                reserve = commit + mbi[3];
            }
        }
        flag = 1;
        heap = (S_Heap *)base;
    } else {
        if (p.initialCommit != 0) {
            return 0;
        }
        pbase = (u32 *)&heap;
        psize = reserve;
        if (NtAllocateVirtualMemory((void **)&pbase, 0, &psize, 0x2000, 4) < 0) {
            return 0;
        }
        flag = 0;
        if (commit == 0) commit = 0x1000;
        region = heap;
        if (region == heap) {
            psize = commit;
            pbase = (u32 *)&region;
            if (NtAllocateVirtualMemory((void **)&pbase, 0, &psize, 0x1000, 4) < 0) {
                if (base != 0) {
                    return 0;
                }
                NtFreeVirtualMemory((void **)&heap, &reserve, 0x8000);
                return 0;
            }
        }
        region = (char *)region + commit;
    }
    return 1;
}
