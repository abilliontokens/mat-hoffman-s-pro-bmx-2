/* 13 functions from 0x0008AED0 to 0x0008BCD0, found by Ghidra. */
#include "common.h"

extern int *D_002A8490;
extern int D_00275630;
extern int D_00279DEC;
extern int D_00279E74;

struct C_00157600 {
    void func_00157600(int a0);
};

struct S_0008BB50_Child {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
};

struct C_0008B6F0 {
    char pad0[0x34];
    int f34;
    char pad38[0x1c];
    int f54;
    void func_0008B6F0(void);
};

struct C_0008B820 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 pad28;
    u32 f2C;
    u32 f30;
    u32 f34;
    C_0008B820 *func_0008B820(int unused);
};

struct C_0008BB50 {
    char pad0[0x30];
    int f30;
    S_0008BB50_Child *f34;
    void func_0008BB50(int param_1);
};

struct C_0008BB80 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    u32 f40;
    u32 f44;
    u32 f48;
    u32 f4C;
    u32 f50;
    u32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6C;
    u32 f70;
    u32 pad74;
    u32 f78;
    u32 f7C;
    C_0008BB80 *func_0008BB80(int unused);
};

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

void C_0008B6F0::func_0008B6F0(void) {
    f54 = 2;
    ((C_0005E840 *)f34)->func_0005E840((int)&D_00275630);
}

C_0008B820 *C_0008B820::func_0008B820(int unused) {
    ((C_00157600 *)this)->func_00157600(1);
    f24 = 0;
    f2C = 0;
    f30 = 0;
    f34 = 0;
    vtbl = &D_00279DEC;
    return this;
}

void C_0008BB50::func_0008BB50(int param_1) {
    if (param_1 >= 0 && f30 != param_1) {
        f34->v5(0);
    }
    f30 = param_1;
}

