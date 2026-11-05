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

S_HeapEntry *__stdcall func_001DF985(S_Heap *heap, S_HeapEntry *entry, u32 *size, int a3);
void __stdcall func_001E0412(S_Heap *heap, S_HeapEntry *entry, u32 size);
void __stdcall func_001DFC2A(S_Heap *heap, S_HeapEntry *entry, u32 size);
