/* 11 functions from 0x001B2910 to 0x001B35D0, found by Ghidra. */
#include "common.h"

int func_001B2910(int param_1);

int func_001B2B90(int param_1)
{
    switch (param_1) {
    case 6:
    case 7:
    case 0x12:
    case 0x1e:
        return 0x20;
    case 2:
    case 3:
    case 4:
    case 5:
        return 0x10;
    case 0x19:
        return 8;
    default:
        return -1;
    }
}

int func_001B2CB0(int param_1)
{
    return func_001B2910(param_1) / 8;
}
