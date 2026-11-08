/* 1 function from 0x001E9040 to 0x001E9086, found by Ghidra. */
#include "common.h"
extern "C" unsigned char __cdecl _bittest(long const *, long);
extern "C" unsigned char __cdecl _bittestandset(long *, long);
#pragma intrinsic(_bittest, _bittestandset)

#pragma intrinsic(_bittest, _bittestandset)
int func_001E9040(char *str, char *control)
{
    unsigned char map[32];
    int i;
    int count;

    for (i = 0; i < 32; i++) {
        map[i] = 0;
    }
    while (*control) {
        map[(unsigned char)*control >> 3] |= 1 << (*control & 7);
        control++;
    }
    count = -1;
    for (;;) {
        count++;
        if (*str == 0 || (map[(unsigned char)*str >> 3] & (1 << (*str & 7))))
            break;
        str++;
    }
    return count;
}
