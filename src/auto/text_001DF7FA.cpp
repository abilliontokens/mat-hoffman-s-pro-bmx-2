/* 9 functions from 0x001DF7FA to 0x001E06BC, found by Ghidra. */
#include "common.h"

struct S_HeapRoot {
    unsigned short firstSize;   /* 0x00 */
    char pad02[0x5e];
    unsigned char *bucket[1];   /* 0x60, indexed by block bucket */
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
    char pad1c[4];
    unsigned char *base;        /* 0x20 */
    int pages;                  /* 0x24 */
    unsigned char *tail;        /* 0x28 */
    unsigned char *limit;       /* 0x2c */
    int spare;                  /* 0x30 */
    char pad34[0xc];
    unsigned char *next;        /* 0x40 */
};

extern "C" long (__stdcall *__imp__NtAllocateVirtualMemory)(void *baseAddress, unsigned int zeroBits, unsigned int *size, unsigned int allocType, unsigned int protect);
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

