/* 9 functions from 0x00098EE0 to 0x00099E50, found by Ghidra. */
#include "common.h"

struct C_00096870 {
    char pad0[0x1a4];
    f32 f1a4;
    char pad1a8[0xc];
    int f1b4;
    void func_00096870(const char *name);
};

struct S_00097FD0_owner {
    char pad0[0x1c8];
    int unk1c8;
};

struct C_00097FD0 {
    C_00096870 **arr0;
    C_00096870 **arr1;
    C_00096870 **arr2;
    int cnt0;
    int cnt1;
    int cnt2;
    int mode0;
    int mode1;
    char pad20[0x198 - 0x20];
    S_00097FD0_owner *unk198;
    void func_00098E80(int idx);
    void func_000999B0(void);
    void func_00099500(const char *name);
    void func_00099590(void);
    void func_000999E0(void);
};

void C_00097FD0::func_00099500(const char *name) {
    C_00096870 **list;
    int count;
    int i;
    int flag;
    int mode;

    if (mode0 < 3) {
        flag = unk198->unk1c8;
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
            list[i]->func_00096870(name);
        }
    }
}

void C_00097FD0::func_000999B0(void) {
    int i;

    if (unk198->unk1c8 == 0) {
        for (i = 0; i < 3; i++) {
            func_00098E80(i);
        }
    }
}
