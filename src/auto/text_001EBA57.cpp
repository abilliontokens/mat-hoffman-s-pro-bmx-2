/* 2 functions from 0x001EBA57 to 0x001EC612, found by Ghidra. */
#include "common.h"

extern unsigned short *D_002AEA30;

#pragma optimize("t", off)
int func_001EC5F1(int c, int mask)
{
    if ((unsigned)(c + 1) <= 256) {
        return D_002AEA30[c] & mask;
    }
    return 0;
}
#pragma optimize("", on)
