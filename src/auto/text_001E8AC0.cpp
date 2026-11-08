/* 1 function from 0x001E8AC0 to 0x001E8AED, found by Ghidra. */
#include "common.h"
#include <string.h>

extern "C" char* __cdecl func_001E8AC0(const char* s, int c)
{
    const char* r = 0;
    do {
        if (*s == (char)c) r = s;
    } while (*s++);
    return (char*)r;
}
