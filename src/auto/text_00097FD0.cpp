/* 5 functions from 0x00097FD0 to 0x00098EE0, found by Ghidra. */
#include "common.h"

struct C_00096930 {
    char pad0[0x1a8];
    int unk1a8;
    char pad1ac[0x48e0 - 0x1ac];
    int unk48e0;
    void func_00096930(void);
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

int C_00097FD0::func_00097FD0(void) {
    int flag = unk198->unk1c8;
    C_00096930 **list;
    int count;
    int i;
    int mode;

    mode = flag ? mode1 : mode0;
    if (mode == 3) {
        return 1;
    }
    mode = flag ? mode1 : mode0;
    switch (mode) {
    case 0:
        list = arr0;
        break;
    case 1:
        list = arr1;
        break;
    case 2:
        list = arr2;
        break;
    default:
        list = 0;
        break;
    }
    mode = flag ? mode1 : mode0;
    switch (mode) {
    case 0:
        count = cnt0;
        break;
    case 1:
        count = cnt1;
        break;
    case 2:
        count = cnt2;
        break;
    default:
        count = 0;
        break;
    }
    for (i = 0; i < count; i++) {
        if (list[i]->unk1a8 == 0 && list[i]->unk48e0 == 0) {
            return 0;
        }
    }
    return 1;
}

void C_00097FD0::func_00098E80(int idx) {
    C_00096930 **list;
    int count;
    int i;

    switch (idx) {
    case 0:
        list = arr0;
        break;
    case 1:
        list = arr1;
        break;
    case 2:
        list = arr2;
        break;
    default:
        list = 0;
        break;
    }
    switch (idx) {
    case 0:
        count = cnt0;
        break;
    case 1:
        count = cnt1;
        break;
    case 2:
        count = cnt2;
        break;
    default:
        count = 0;
        break;
    }
    for (i = 0; i < count; i++) {
        list[i]->func_00096930();
    }
}
