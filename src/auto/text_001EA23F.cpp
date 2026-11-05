/* 4 functions from 0x001EA23F to 0x001EA3CB, found by Ghidra. */
#include "common.h"

extern int D_002AEA38;
extern unsigned short *D_002AEA30;
int func_001EC5F1(int, int);

extern int D_002AEA38;
extern unsigned short *D_002AEA30;
int func_001EC5F1(int, int);

#pragma optimize("t", off)
int func_001EA23F(int c)
{
    if (D_002AEA38 > 1) {
        return func_001EC5F1(c, 2);
    }
    return *(unsigned char *)&D_002AEA30[c] & 2;
}
#pragma optimize("", on)

#pragma optimize("t", off)
int func_001EA268(int c)
{
    if (D_002AEA38 > 1) {
        return func_001EC5F1(c, 4);
    }
    return *(unsigned char *)&D_002AEA30[c] & 4;
}
#pragma optimize("", on)

#pragma optimize("t", off)
int func_001EA291(int c)
{
    if (D_002AEA38 > 1) {
        return func_001EC5F1(c, 8);
    }
    return D_002AEA30[c] & 8;
}
#pragma optimize("", on)

