/* 1 function from 0x001E9040 to 0x001E9086, found by Ghidra. */
#include "common.h"
extern "C" unsigned char __cdecl _bittest(long const *, long);
extern "C" unsigned char __cdecl _bittestandset(long *, long);
#pragma intrinsic(_bittest, _bittestandset)

int func_001E9040(char *str, char *control)
{
    unsigned long map[8] = {0};
    int count;
    unsigned char c;

    while (*control) {
        _bittestandset((long *)map, *control);
        control++;
    }
    count = -1;
    for (;;) {
        count++;
        c = *str;
        if (c == 0) {
            return count;
        }
        str++;
        if (_bittest((long *)map, c)) {
            return count;
        }
    }
}
