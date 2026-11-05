/* 13 functions from 0x0008AED0 to 0x0008BCD0, found by Ghidra. */
#include "common.h"

extern int *D_002A8490;

struct C_0005E840 {
    void func_0005E840(int param_1);
};

struct C_0008B670 {
    char pad0[0x24];
    int f24;
    void func_0008B670(int param_1);
};

struct C_0008B680 {
    char pad0[0x38];
    int f38;
    void func_0008B680(int param_1);
};

struct C_0008B690 {
    char pad0[0x34];
    int f34;
    char pad38[0x1c];
    int f54;
    void func_0008B690(void);
};

struct C_0008B6C0 {
    char pad0[0x34];
    int f34;
    char pad38[0x1c];
    int f54;
    void func_0008B6C0(void);
};

void C_0008B670::func_0008B670(int param_1) {
    ((C_0005E840 *)f24)->func_0005E840(param_1);
}

void C_0008B680::func_0008B680(int param_1) {
    ((C_0005E840 *)f38)->func_0005E840(param_1);
}

void C_0008B690::func_0008B690(void) {
    f54 = 0;
    ((C_0005E840 *)f34)->func_0005E840(*(int *)(*(int *)(*(int *)((char *)D_002A8490 + 0x2e8) + 4) + 0x10d0));
}

void C_0008B6C0::func_0008B6C0(void) {
    f54 = 1;
    ((C_0005E840 *)f34)->func_0005E840(*(int *)(*(int *)(*(int *)((char *)D_002A8490 + 0x2e8) + 4) + 0x10d8));
}

