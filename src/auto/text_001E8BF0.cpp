/* 2 functions from 0x001E8BF0 to 0x001E8D56, found by Ghidra. */
#include "common.h"

extern int D_002AEA38;
extern unsigned short *D_002AEA30;
int func_001EC5F1(int, int);

#pragma optimize("t", off)
int func_001E8D25(int c)
{
    int upper;
    if (D_002AEA38 > 1) {
        upper = func_001EC5F1(c, 1);
    } else {
        upper = D_002AEA30[c] & 1;
    }
    if (upper) {
        return c + 0x20;
    }
    return c;
}
#pragma optimize("", on)
