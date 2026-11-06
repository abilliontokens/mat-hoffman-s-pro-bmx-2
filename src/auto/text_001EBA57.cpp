/* 2 functions from 0x001EBA57 to 0x001EC612, found by Ghidra. */
#include "common.h"

extern unsigned short *D_002AEA30;
extern int D_002AEA38;
extern int D_002AEA3C;
extern char D_00295040[];
int func_001EBA41(void *stream);
int func_001EA291(int c);
int func_001F4ED9(int c, void *stream);
int func_001F4F45(int a, void *b, void *c);
int func_001EAAE0(int a, void *b);

#pragma optimize("t", off)
int func_001EC5F1(int c, int mask)
{
    if ((unsigned)(c + 1) <= 256) {
        return D_002AEA30[c] & mask;
    }
    return 0;
}
#pragma optimize("", on)
