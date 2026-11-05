/* 5 functions from 0x001EA470 to 0x001EA5FE, found by Ghidra. */
#include "common.h"

unsigned __int64 __stdcall func_001EA470(unsigned int lo1, unsigned int hi1, unsigned int lo2, unsigned int hi2)
{
    if (hi2 == 0 && hi1 == 0) {
        return (unsigned __int64)lo1 * lo2;
    }
    return ((unsigned __int64)(((unsigned int)(((unsigned __int64)lo1 * lo2) >> 32)) + hi1 * lo2 + lo1 * hi2) << 32) | (unsigned int)((unsigned __int64)lo1 * lo2);
}

#pragma optimize("y", on)
#pragma optimize("t", off)
unsigned short *func_001EA4A4(unsigned short *dest, const unsigned short *source, unsigned int count)
{
    unsigned short *start = dest;
    while (count && (*dest++ = *source++)) {
        count--;
    }
    if (count) {
        while (--count) {
            *dest++ = 0;
        }
    }
    return start;
}
#pragma optimize("", on)

