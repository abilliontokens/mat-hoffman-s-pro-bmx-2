/* 5 functions from 0x00097FD0 to 0x00098EE0, found by Ghidra. */
#include "common.h"

struct C_00096930 {
    void func_00096930(void);
};

struct S_00097FD0_elem {
    char pad0[0x1a8];
    int unk1a8;
    char pad1ac[0x48e0 - 0x1ac];
    int unk48e0;
};

struct S_00097FD0_owner {
    char pad0[0x1c8];
    int unk1c8;
};

struct C_00097FD0 {
    C_00096930 **arr0;
    C_00096930 **arr1;
    C_00096930 **arr2;
    int cnt0;
    int cnt1;
    int cnt2;
    int mode0;
    int mode1;
    char pad20[0x198 - 0x20];
    S_00097FD0_owner *unk198;
    void func_00098E80(int idx);
    int func_00097FD0(void);
};
