/* 1 function from 0x001EA600 to 0x001EA61F, found by Ghidra. */
#include "common.h"

unsigned __int64 __fastcall func_001EA600(unsigned __int64 value, unsigned int shift) {
    if (shift >= 64)
        return 0;
    if (shift >= 32)
        return (unsigned __int64)((unsigned int)(value >> 32) >> (shift & 31));
    return value >> shift;
}
