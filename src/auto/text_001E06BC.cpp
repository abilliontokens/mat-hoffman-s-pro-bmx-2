/* 3 functions from 0x001E06BC to 0x001E148B, found by Ghidra. */
#include "common.h"

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
