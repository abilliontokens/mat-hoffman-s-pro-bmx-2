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

struct S_HeapLookaside {
    char pad0[0x40];
    S_HeapEntry *lastEntry;     /* +0x40 */
};

struct S_Heap {
    char pad0[0x14];
    u32 flags14;                /* +0x14 */
    u32 flags;                  /* +0x18 */
    u32 maximumAllocationSize;  /* +0x1C */
    char pad20[8];
    u32 deCommitFreeBlockThreshold; /* +0x28 */
    u32 deCommitTotalFreeThreshold; /* +0x2C */
    u32 totalFreeSize;          /* +0x30 */
    char pad34[0x60 - 0x34];
    S_HeapLookaside *lookaside[0x40]; /* +0x60 */
    u8 freeListsInUse[0x20];    /* +0x160 */
    S_ListEntry freeLists[128]; /* +0x180 */
    void *lockVariable;         /* +0x580 */
};

extern "C" void __stdcall RtlRaiseException(void *record);
u8 __fastcall func_001E2770(u32 mask);
S_HeapEntry *__stdcall func_001E028B(S_Heap *heap, u32 size);

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
    u32 code = 0;

    heap = 0;
    memset(&p, 0, 0x30);
    __try {
        if (params) {
            if (params->length == 0x30) {
                memcpy(&p, params, 0x30);
            } else {
                return 1;
            }
        }
    } __except (code = GetExceptionCode(), EXCEPTION_EXECUTE_HANDLER) {
        return 1;
    }
    if ((int)code < 0) {
        return 0;
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

void *__stdcall func_001E0AE0(S_Heap *heapArg, u32 flagsArg, u32 sizeArg)
{
    S_Heap *heap = heapArg;
    u32 flags;
    u32 allocSize;
    u32 index;
    u8 locked = 0;
    S_HeapEntry *entry;
    S_ListEntry *listHead;
    u8 entryFlags;
    void *result;

    flags = flagsArg | heap->flags;
    flagsArg = flags;
    if (sizeArg == 0) {
        sizeArg = 1;
    }
    allocSize = (sizeArg + 0x1f) & 0xfffffff0;
    index = allocSize >> 4;
    __try {
        if (!(flags & 1)) {
            RtlEnterCriticalSection(heap->lockVariable);
            locked = 1;
        }
        if (index < 0x80) {
            listHead = &heap->freeLists[index];
            if (listHead->flink != listHead) {
                entry = (S_HeapEntry *)((char *)listHead->blink - 8);
                entryFlags = entry->flags;
                {
                    S_ListEntry *fl = entry->freeList.flink;
                    S_ListEntry *bl = entry->freeList.blink;
                    bl->flink = fl;
                    fl->blink = bl;
                    if (fl == bl) {
                        u32 bit = entry->size;
                        u32 byteIndex = bit >> 3;
                        u32 mask = 1 << (bit & 7);
                        heap->freeListsInUse[byteIndex] ^= (u8)mask;
                    }
                }
                heap->totalFreeSize -= index;
                entry->flags = (u8)((entryFlags & 0x10) | 1);
                entry->unusedBytes = (u8)(allocSize - sizeArg);
                entry->segmentIndex = 0;
                result = entry + 1;
                goto done;
            }
        } else {
            u32 word = index >> 5;
            u32 *inUse = (u32 *)&heap->freeListsInUse[word * 4];
            u32 bits = *inUse & ~((1u << (index & 0x1f)) - 1);
            inUse++;
            switch (word) {
            case 0:
                if (bits != 0) {
                    listHead = &heap->freeLists[0];
                    break;
                }
                bits = *inUse++;
                if (bits != 0) {
                    listHead = &heap->freeLists[32];
                    break;
                }
                bits = *inUse++;
                if (bits != 0) {
                    listHead = &heap->freeLists[64];
                    break;
                }
                bits = *inUse++;
                if (bits == 0) {
                    goto bigBlock;
                }
                listHead = &heap->freeLists[96];
                break;
            case 1:
                bits = *inUse++;
                if (bits != 0) {
                    listHead = &heap->freeLists[32];
                    break;
                }
                bits = *inUse++;
                if (bits != 0) {
                    listHead = &heap->freeLists[64];
                    break;
                }
                bits = *inUse++;
                if (bits == 0) {
                    goto bigBlock;
                }
                listHead = &heap->freeLists[96];
                break;
            case 2:
                bits = *inUse++;
                if (bits != 0) {
                    listHead = &heap->freeLists[64];
                    break;
                }
                bits = *inUse++;
                if (bits == 0) {
                    goto bigBlock;
                }
                listHead = &heap->freeLists[96];
                break;
            case 3:
                bits = *inUse++;
                if (bits == 0) {
                    goto bigBlock;
                }
                listHead = &heap->freeLists[96];
                break;
            default:
                goto bigBlock;
            }
            listHead = listHead + (signed char)func_001E2770(bits);
            entry = (S_HeapEntry *)((char *)listHead->blink - 8);
            {
                S_ListEntry *fl = entry->freeList.flink;
                S_ListEntry *bl = entry->freeList.blink;
                bl->flink = fl;
                fl->blink = bl;
                if (fl == bl) {
                    u32 bit = entry->size;
                    u32 byteIndex = bit >> 3;
                    u32 mask = 1 << (bit & 7);
                    heap->freeListsInUse[byteIndex] ^= (u8)mask;
                }
            }
            goto haveEntry;
        }
bigBlock:
        if (index > heap->maximumAllocationSize) {
            goto tooBig;
        }
        listHead = &heap->freeLists[0];
        {
            S_ListEntry *cur = listHead->blink;
            while (listHead != cur) {
                entry = (S_HeapEntry *)((char *)cur - 8);
                if (entry->size >= index) {
                    goto foundLarge;
                }
                cur = listHead->flink;
                if (listHead == cur) {
                    break;
                }
                for (;;) {
                    entry = (S_HeapEntry *)((char *)cur - 8);
                    if (entry->size >= index) {
                        S_ListEntry *fl = entry->freeList.flink;
                        S_ListEntry *bl = entry->freeList.blink;
                        bl->flink = fl;
                        fl->blink = bl;
                        goto haveEntry;
                    }
                    cur = cur->flink;
                }
            }
        }
        entry = func_001E028B(heap, allocSize);
        if (entry == 0) {
            goto noMemory;
        }
        {
            S_ListEntry *fl = entry->freeList.flink;
            S_ListEntry *bl = entry->freeList.blink;
            bl->flink = fl;
            fl->blink = bl;
        }
foundLarge:
haveEntry:
        entryFlags = entry->flags;
        heap->totalFreeSize -= entry->size;
        entry->flags = 1;
        {
            u32 extra = entry->size - index;
            entry->size = (u16)index;
            entry->unusedBytes = (u8)(allocSize - sizeArg);
            entry->segmentIndex = 0;
            if (extra != 0) {
                if (extra == 1) {
                    entry->size = (u16)(entry->size + 1);
                    entry->unusedBytes = (u8)(entry->unusedBytes + 0x10);
                } else {
                    S_HeapEntry *split = (S_HeapEntry *)((char *)entry + index * 16);
                    split->flags = entryFlags;
                    split->prevSize = (u16)index;
                    split->unusedBytes = entry->unusedBytes;
                    split->size = (u16)extra;
                    if (entryFlags & 0x10) {
                        func_001DFC2A(heap, split, extra);
                        entryFlags = 0;
                        if (split->flags & 0x10) {
                            heap->lookaside[split->unusedBytes]->lastEntry = split;
                        }
                    } else {
                        func_001DFC2A(heap, split, extra);
                    }
                }
            }
        }
        if (entryFlags & 0x10) {
            entry->flags |= 0x10;
        }
        result = entry + 1;
done:
        ;
    } __finally {
        if (locked) {
            RtlLeaveCriticalSection(heap->lockVariable);
            locked = 0;
        }
    }
    if (flagsArg & 8) {
        memset(result, 0, sizeArg);
    }
    return result;
tooBig:
noMemory:
    return 0;
}

extern char D_0000FF00;
#pragma optimize("s", on)
u8 __stdcall func_001E1297(S_Heap *heap, u32 flags, void *base)
{
    S_Heap *h = heap;
    u8 locked = 0;
    u8 result = 1;
    S_HeapEntry *entry;
    S_HeapCallout *callout;
    struct { void *base; u32 a; u32 b; } rec;
    u32 size;
    long status;

    if (base == 0)
        return 1;
    rec.base = base;
    rec.a = 0;
    rec.b = 0;
    callout = *(S_HeapCallout **)(__readfsdword(0x20) + 0x250);
    if (callout != 0)
        callout->notify(0xb, &rec);
    flags |= heap->flags;
    entry = (S_HeapEntry *)base - 1;
    __try {
        if (!(flags & 1)) {
            RtlEnterCriticalSection(heap->lockVariable);
            locked = 1;
        }
        if (!(entry->flags & 8)) {
            size = entry->size;
            entry = func_001DF985(heap, entry, &size, 0);
            if (size < 0x80) {
                S_ListEntry *head;
                entry->flags &= 0x10;
                head = &heap->freeLists[(u16)size];
                if (head->flink == head) {
                    u32 idx = entry->size >> 3;
                    u32 bit = 1 << (entry->size & 7);
                    heap->freeListsInUse[idx] |= bit;
                }
                {
                    S_ListEntry *list = head;
                    S_ListEntry *blink = list->blink;
                    entry->freeList.flink = list;
                    entry->freeList.blink = blink;
                    blink->flink = &entry->freeList;
                    list->blink = &entry->freeList;
                }
                h->totalFreeSize += size;
            } else if (size >= heap->deCommitFreeBlockThreshold &&
                       heap->totalFreeSize + size >= heap->deCommitTotalFreeThreshold) {
                func_001E0412(heap, entry, size);
            } else if (size <= (unsigned int)&D_0000FF00) {
                S_ListEntry *head;
                S_ListEntry *next;
                entry->flags &= 0x10;
                head = &heap->freeLists[0];
                next = head->flink;
                while (head != next) {
                    S_HeapEntry *e = (S_HeapEntry *)((char *)next - 8);
                    if ((u16)size <= e->size)
                        break;
                    next = next->flink;
                }
                {
                    S_ListEntry *list = next;
                    S_ListEntry *blink = list->blink;
                    entry->freeList.flink = list;
                    entry->freeList.blink = blink;
                    blink->flink = &entry->freeList;
                    list->blink = &entry->freeList;
                }
                h->totalFreeSize += size;
            } else {
                func_001DFC2A(heap, entry, size);
            }
        } else {
            S_ListEntry *block = (S_ListEntry *)((char *)entry - 0x20);
            S_ListEntry *flink = block->flink;
            S_ListEntry *blink = block->blink;
            blink->flink = flink;
            flink->blink = blink;
            if (locked) {
                RtlLeaveCriticalSection(heap->lockVariable);
                locked = 0;
            }
            size = 0;
            status = NtFreeVirtualMemory((void **)&block, &size, 0x8000);
            if (status < 0)
                result = 0;
        }
    } __finally {
        if (locked)
            RtlLeaveCriticalSection(h->lockVariable);
    }
    return result;
}
#pragma optimize("", on)

