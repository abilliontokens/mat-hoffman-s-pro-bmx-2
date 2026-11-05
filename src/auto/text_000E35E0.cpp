/* 10 functions from 0x000E35E0 to 0x000E4220, found by Ghidra. */
#include "common.h"

extern int D_00277038;

void func_001ADCC0(char *buf, int size, char *fmt, int val);
void func_001AC330(char *dest, char *fmt, char *arg);

struct S_000E35E0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual int v16();
};

struct S_000E3790_Gfx {
    char padA30[0xA30];
    char *fA30;
};

struct S_000E3790_Sub {
    char pad0[4];
    S_000E3790_Gfx *p4;
};

struct S_000E35E0_Root {
    char pad0[8];
    S_000E35E0_Obj **f8;
    char padC[0x2DC];
    S_000E3790_Sub *p2E8;
};

extern S_000E35E0_Root *D_002A8490;

struct C_000E3C90_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B17D0(char *s);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_000E35E0 {
    char pad0[0x280];
    int f280;
    int f284;
    char pad288[0x58];
    C_000E3C90_Widget *f2E0[10];
    char pad308[0x118];
    int f420[2];
    void func_000E35E0(int param_1);
    void func_000E3790(void);
    void func_000E3C90(void);
};

void C_000E35E0::func_000E35E0(int param_1) {
    int i;

    for (i = 8; i >= 0; i--) {
        if (i != f420[param_1 == 0]) {
            S_000E35E0_Obj *obj = D_002A8490->f8[i + 5];
            if (obj != 0 && obj->v16() == 1) {
                f420[param_1] = i;
            }
        }
    }
}

void C_000E35E0::func_000E3790(void) {
    char dest[0x40];
    char buf[4];
    int i;

    for (i = 0; i < f280; i++) {
        func_001ADCC0(buf, 3, (char *)&D_00277038, i + 1);
        func_001AC330(dest, D_002A8490->p2E8->p4->fA30, buf);
        f2E0[i]->func_001B17D0(dest);
    }
}

