/* 5 functions from 0x000A1EF0 to 0x000A2ED0, found by Ghidra. */
#include "common.h"

struct C_000229C0 {
    virtual void vfunc0();
    virtual void vfunc4();
    virtual void vfunc8();
    int func_00022550();
    int func_00025240();
};

extern C_000229C0 *D_002B7E18;

struct C_002B9134 {
    virtual void vfunc0();
    virtual void vfunc4();
    virtual void vfunc8();
    int func_000B5020(void);
};

extern C_002B9134 *D_002B9134;

struct S_002A8490 {
    char pad0[0x2E0];
    int *f2E0;
};

extern S_002A8490 *D_002A8490;

struct C_0019ABA0 {
    void func_0019ABA0(int a, int b);
};

struct S_000A2620_Info {
    char pad0[4];
    C_0019ABA0 *f4;
};

struct C_000A2620_Child {
    char pad0[0x3C];
    S_000A2620_Info *f3C;
    void func_000114D0(int a);
};

struct C_000A2620 {
    char pad0[0x4A8];
    int *f4A8;
    char pad4AC[0xCC];
    int f578;
    C_000A2620_Child **f57C;
    void func_001577A0(C_000A2620_Child *child, int a);
    void func_000A2620(void);
};

void func_000A25E0(void)
{
    if (D_002B7E18) {
        if ((D_002B7E18->func_00025240() | D_002B7E18->func_00022550()) == 0) {
            if (D_002B7E18) {
                D_002B7E18->vfunc8();
                D_002B7E18 = 0;
            }
        }
    }
}

void C_000A2620::func_000A2620(void)
{
    int i;
    if (D_002B9134 != 0 && D_002B9134->func_000B5020() == 0) {
        D_002B9134->vfunc8();
        D_002B9134 = 0;
    }
    if (*D_002A8490->f2E0 == 1) {
        for (i = 0; i < f578; i++) {
            C_000A2620_Child *child = f57C[i];
            func_001577A0(child, -1);
            child->f3C->f4->func_0019ABA0(*f4A8, 2);
            child->func_000114D0(1);
        }
    }
}

