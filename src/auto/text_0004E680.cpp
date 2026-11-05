/* 16 functions from 0x0004E680 to 0x0004F5E0, found by Ghidra. */
#include "common.h"

struct C_0004ED80 {
    int unk0;
    void func_00033220(void);
    void *func_0004ED80(int flags);
};

void func_001E891B(void *ptr);

struct C_0004EC40Item {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void func_0004EC40(void);
};

struct C_0004F5B0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct C_0004F5B0 {
    char pad0[0x2A8];
    C_0004F5B0_Obj *f2A8;
    void func_000314A0(void);
    void func_0004F5B0(void);
};

struct C_0004EBA0 {
    char pad0[0x64];
    void *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x1f8];
    int f28c;
    char pad290[0xaa0];
    void *fD30[9];
    int fD54;
    void *fD58[1];
    void func_00031640(void);
    void func_00034090(void);
    void func_00031450(void);
    void func_0004EA20(int a);
    void func_001577A0(void *p, int n);
    int func_0004EBA0(void);
    void func_0004EBE0(void);
    void func_0004EC40(void);
};

int C_0004EBA0::func_0004EBA0(void)
{
    fD54 = 0;
    func_0004EA20(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x64) + 0x3b4) + 0x28) + f28c * 4) + 4));
    func_00034090();
    return 1;
}

void C_0004EBA0::func_0004EBE0(void)
{
    int i;

    func_00031640();
    for (i = 0; i < f90; i++) {
        if (fD30[i] != 0) {
            func_001577A0(fD30[i], -1);
        }
        if (fD58[i] != 0) {
            func_001577A0(fD58[i], -1);
        }
    }
}

void C_0004EBA0::func_0004EC40(void)
{
    int i;

    for (i = 0; i < f90; i++) {
        if (fD58[i] != 0) {
            ((C_0004EC40Item *)fD58[i])->func_0004EC40();
        }
    }
    func_00031450();
}

void *C_0004ED80::func_0004ED80(int flags) {
    extern int D_00277644;
    unk0 = (int)&D_00277644;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0004F5B0::func_0004F5B0(void)
{
    func_000314A0();
    if (f2A8 != 0) {
        f2A8->v6();
    }
}

int func_0004F5D0(void) {
    int func_00031F30(...);
    func_00031F30();
    return 1;
}
