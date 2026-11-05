/* 11 functions from 0x001B2910 to 0x001B35D0, found by Ghidra. */
#include "common.h"

struct S_001B3560 {
    char pad0[0x12];
    char kind;
    char pad13;
    void *f14;
    char pad18[4];
    char f1c;
};

int func_001B2910(int param_1);
S_001B3560 *func_001B33A0(int a, int b);
int func_001B2CD0(S_001B3560 *item, int a);
int func_001B2F10(S_001B3560 *item, int a);
int func_001B3150(S_001B3560 *item, int a);
void func_001E8390(void *ptr);

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

int func_001B2BF0(int param_1)
{
    switch (param_1) {
    case 8:
        return 0x19;
    case 0x235:
        return 5;
    case 0x613:
        return 2;
    case 0x115c:
        return 4;
    case 0x22b8:
        return 6;
    default:
        return -1;
    }
}

int func_001B2C40(int param_1)
{
    switch (param_1) {
    case 6:
    case 7:
    case 0x12:
        return 0x22b8;
    case 5:
        return 0x235;
    case 2:
    case 3:
        return 0x613;
    case 4:
        return 0x115c;
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
