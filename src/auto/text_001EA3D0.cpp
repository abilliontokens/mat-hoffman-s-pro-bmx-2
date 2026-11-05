/* 3 functions from 0x001EA3D0 to 0x001EA469, found by Ghidra. */
#include "common.h"

extern int D_002F6A48;
int func_001F3B80(const char *a, const char *b);
int func_001E8D25(int c);

#pragma optimize("t", off)
#pragma optimize("y", on)
int func_001EA410(const unsigned short *s)
{
    const unsigned short *p = s;
    while (*p++) {
    }
    return (p - s) - 1;
}
#pragma optimize("y", off)
