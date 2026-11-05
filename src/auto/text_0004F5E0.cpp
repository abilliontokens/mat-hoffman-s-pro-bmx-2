/* 8 functions from 0x0004F5E0 to 0x0004FE60, found by Ghidra. */
#include "common.h"

struct C_0002EF70 {
    void func_0002EF70(int a, int b);
};

struct C_00030240 {
    void func_00030240(int a, int b, int c, int d, int e);
};

struct C_0012A770 {
    void func_0012A770(int a, int b);
};

struct C_00031C90 {
    void func_00031C90(void);
};

struct C_0004FE30 {
    int unk0;
    char pad4[0x20];
    void *f24;
    char pad28[0x1C];
    void *f44;
    char pad48[0x1C];
    void *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x1F0];
    int f284;
    int f288;
    void func_00033220(void);
    void func_000324E0(int id);
    void *func_0004FE30(int flags);
    void func_0004F7B0(void);
    void func_0004FA60(int id);
};

void C_0004FE30::func_0004F7B0(void)
{
    if (f284 == 9) {
        int v = *(int *)((char *)f64 + 0x4e0);
        if (v != 0) {
            v = *(int *)(v + 0x1a8);
            if (v != 0) {
                ((C_0002EF70 *)f44)->func_0002EF70(v, 0);
            }
        }
        ((C_00030240 *)f44)->func_00030240(*(int *)((char *)f64 + 0x3e4), 0, 0, 0, 0);
        ((C_0012A770 *)f24)->func_0012A770(**(int **)((char *)f64 + 0x4a8), 2);
        return;
    }
    ((C_00031C90 *)this)->func_00031C90();
}

void *C_0004FE30::func_0004FE30(int flags) {
    extern int D_0027777C;
    void func_001E891B(void *);
    unk0 = (int)&D_0027777C;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
