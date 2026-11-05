/* 9 functions from 0x001DF7FA to 0x001E06BC, found by Ghidra. */
#include "common.h"

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

