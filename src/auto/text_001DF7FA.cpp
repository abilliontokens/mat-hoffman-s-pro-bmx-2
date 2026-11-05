/* 9 functions from 0x001DF7FA to 0x001E06BC, found by Ghidra. */
#include "common.h"

struct S_HeapRoot {
    unsigned short firstSize;   /* 0x00 */
    char pad02[0x12];
    unsigned int flags;         /* 0x14 */
    char pad18[8];
    unsigned int reserveSize;   /* 0x20 */
    unsigned int commitSize;    /* 0x24 */
    char pad28[0x38];
    unsigned char *bucket[0x40];    /* 0x60, indexed by block bucket */
    char pad160[0x584 - 0x160];
    long (__stdcall *commit)(S_HeapRoot *root, unsigned int *base, unsigned int *size); /* 0x584, optional */
};

/* free-region list node of the kernel heap (address, size, next) */
struct S_FreeNode {
    S_FreeNode *next;
    unsigned int addr;
    unsigned int size;
};

/* chunk header inside a heap block (16-byte granules) */
struct S_HeapEntry {
    unsigned short size;
    unsigned short prevSize;
    unsigned char bucket;
    unsigned char flags;
};

/* kernel heap block header (16-byte granules) */
struct S_HeapBlock {
    unsigned short size;        /* 0x00, in granules */
    unsigned short prevSize;    /* 0x02 */
    unsigned char bucket;       /* 0x04 */
    unsigned char flags;        /* 0x05 */
    char pad06[0x0a];
    unsigned int tag;           /* 0x10 */
    int f14;                    /* 0x14 */
    S_HeapRoot *root;           /* 0x18 */
    unsigned int f1c;           /* 0x1c */
    unsigned char *base;        /* 0x20 */
    int pages;                  /* 0x24 */
    unsigned char *tail;        /* 0x28 */
    unsigned char *limit;       /* 0x2c */
    int spare;                  /* 0x30 */
    int count;                  /* 0x34, free nodes */
    S_FreeNode *head;           /* 0x38 */
    char pad3c[4];
    unsigned char *next;        /* 0x40 */
};

extern "C" __declspec(dllimport) long __stdcall NtAllocateVirtualMemory(void *baseAddress, unsigned int zeroBits, unsigned int *size, unsigned int allocType, unsigned int protect);
extern "C" long (__stdcall *__imp__NtAllocateVirtualMemory)(void *baseAddress, unsigned int zeroBits, unsigned int *size, unsigned int allocType, unsigned int protect);
extern "C" long (__stdcall *__imp__NtFreeVirtualMemory)(void **baseAddress, unsigned int *size, unsigned int freeType);
unsigned char *__stdcall func_001DF7FA(S_HeapRoot *root, S_HeapBlock *blk, unsigned int *size, int a3);
unsigned char *__stdcall func_001DF985(S_HeapRoot *root, unsigned char *entry, unsigned int *size, int a3);
void __stdcall func_001DF746(S_HeapBlock *blk, S_FreeNode *node);
void __stdcall func_001DF767(S_HeapBlock *blk, unsigned int addr, unsigned int size);
void __stdcall func_001DFC2A(S_HeapRoot *root, unsigned char *blk, int granules);

#pragma optimize("sy", on)
unsigned char *__stdcall func_001DFD24(unsigned char *p)
{
    unsigned char *r;
    if (p[5] & 8) {
        r = p - 0x18;
    } else {
        r = p + *(unsigned short *)p * 16 - 0x10;
    }
    return r;
}
int __stdcall func_001E013E(int a, int b, unsigned char *p)
{
    int r;
    unsigned char flags = p[-0xb];
    if (!(flags & 1)) {
        r = -1;
    } else if (flags & 8) {
        r = *(int *)(p - 0x18) - *(unsigned short *)(p - 0x10);
    } else {
        r = *(unsigned short *)(p - 0x10) * 16 - p[-0xa];
    }
    return r;
}

unsigned char __stdcall func_001E016D(S_HeapRoot *root, unsigned int blkAddr, unsigned char bucket, int a3, unsigned char *base, unsigned int start, unsigned int end)
{
    S_HeapBlock *blk = (S_HeapBlock *)blkAddr;
    int pages = (int)(end - (unsigned int)base) / 0x1000;
    unsigned char *tail = (unsigned char *)((blkAddr + 0x57) & 0xfffffff0);
    unsigned short prev;
    int granules;
    int rest;
    unsigned int cur = start;

    if ((unsigned char *)root == base) {
        prev = root->firstSize;
    } else {
        prev = 0;
    }
    granules = (int)((unsigned int)tail - blkAddr) >> 4;
    if ((unsigned int)tail + 0x10 >= cur) {
        if ((unsigned int)tail + 0x10 >= end) {
            return 0;
        }
        blkAddr = (unsigned int)tail - cur + 0x10;
        if (__imp__NtAllocateVirtualMemory(&start, 0, &blkAddr, 0x1000, 4) < 0) {
            return 0;
        }
        cur = start += blkAddr;
    }
    rest = (int)(end - cur) / 0x1000;
    blk->prevSize = prev;
    blk->size = (unsigned short)granules;
    blk->f14 = a3;
    blk->root = root;
    blk->base = base;
    blk->limit = base + pages * 0x1000;
    blk->flags = 1;
    blk->bucket = bucket;
    blk->tag = 0xffeeffee;
    blk->tail = tail;
    blk->pages = pages;
    blk->spare = rest;
    if (rest != 0) {
        func_001DF767(blk, cur, rest << 12);
    }
    root->bucket[bucket] = (unsigned char *)blk;
    tail[5] = 0x10;
    blk->next = tail;
    *(unsigned short *)(tail + 2) = blk->size;
    tail[4] = bucket;
    func_001DFC2A(root, tail, (int)(cur - (unsigned int)tail) >> 4);
    return 1;
}

unsigned char *__stdcall func_001E028B(S_HeapRoot *heap, unsigned int size)
{
    unsigned int allocSize;
    unsigned int pages = (size + 0xfff) >> 12;
    unsigned int bytes = pages << 12;
    unsigned char firstFree = 0x40;
    unsigned char i;
    S_HeapBlock *cur;
    unsigned int commit;
    long status;
    unsigned char *r;

    for (i = 0; i < 0x40; i++) {
        cur = (S_HeapBlock *)heap->bucket[i];
        if (cur != 0) {
            if (pages <= (unsigned int)cur->spare && bytes <= cur->f1c) {
                r = func_001DF7FA(heap, cur, &bytes, 0);
                if (r != 0) {
                    bytes >>= 4;
                    r = func_001DF985(heap, r, &bytes, 0);
                    func_001DFC2A(heap, r, bytes);
                    return r;
                }
            }
        } else {
            if (firstFree == 0x40) {
                firstFree = i;
            }
        }
    }
    if (firstFree == 0x40 || !(heap->flags & 2)) {
        return 0;
    }
    cur = 0;
    size = allocSize = size + 0x1000;
    if (size <= heap->reserveSize) {
        allocSize = heap->reserveSize;
    }
    status = NtAllocateVirtualMemory(&cur, 0, &allocSize, 0x2000, 4);
    while (status < 0) {
        if (allocSize == size) {
            break;
        }
        allocSize >>= 1;
        if (allocSize < size) {
            allocSize = size;
        }
        status = NtAllocateVirtualMemory(&cur, 0, &allocSize, 0x2000, 4);
    }
    if (status < 0) {
        return 0;
    }
    heap->reserveSize += allocSize;
    commit = size;
    if (size <= heap->commitSize) {
        commit = heap->commitSize;
    }
    status = NtAllocateVirtualMemory(&cur, 0, &commit, 0x1000, 4);
    if (status >= 0) {
        if (!func_001E016D(heap, (unsigned int)cur, firstFree, 0, (unsigned char *)cur, (unsigned int)cur + commit, (unsigned int)cur + allocSize)) {
            status = 0xc0000017;
        }
        if (status >= 0) {
            return cur->tail;
        }
    }
    __imp__NtFreeVirtualMemory((void **)&cur, &allocSize, 0x8000);
    return 0;
}

