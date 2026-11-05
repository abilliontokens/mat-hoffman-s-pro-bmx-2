/* 24 functions from 0x00157810 to 0x001587F0, found by Ghidra. */
#include "common.h"

struct S_00157810_Audio {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
};

extern S_00157810_Audio *D_002EFDB8;

/* child in the intrusive list headed at C_00157810::f10, linked through fC */
struct S_00157810_Child {
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
    virtual void v11(int a);
    virtual void v12(int a);
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18(int a);
    virtual void v19();
    virtual void v20();
    char pad4[8];
    S_00157810_Child *fC;
    char pad10[8];
    unsigned char f18;
    char pad19[8];
    unsigned char f21;
};

struct C_00157810 {
    void *vtbl;
    char pad4[0xc];
    S_00157810_Child *f10;
    char pad14[8];
    char f1C;
    char pad1D[3];
    char f20;
    unsigned char f21_b0 : 1;
    unsigned char f21_b1 : 1;
    unsigned char f21_b2 : 1;
    int func_00157960(void);
    int func_001579B0(void);
    int func_00157A00(int a);
    int func_00157A50(int a);
    int func_00157A90(int a);
    int func_00157AE0(void);
    int func_00157B10(void);
};

struct C_00158360 {
    void *vtbl;
    void func_0001DFF0(void);
    void *func_00158360(int flags);
};

void func_001E891B(void *p);

int C_00157810::func_00157960(void)
{
    if (f1C & 8) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8) && (c->f18 & 8)) {
                D_002EFDB8->v7(0);
                c->v16();
            }
        }
    }
    return 1;
}

int C_00157810::func_001579B0(void)
{
    if (f1C & 0x10) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8) && (c->f18 & 0x10)) {
                D_002EFDB8->v7(0);
                c->v17();
            }
        }
    }
    return 1;
}

int C_00157810::func_00157A00(int a)
{
    if (f1C & 2) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 0xc) && (c->f18 & 2)) {
                D_002EFDB8->v7(0);
                c->v12(a);
            }
        }
    }
    return 1;
}

int C_00157810::func_00157A50(int a)
{
    if (f1C & 1) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 0xc) && (c->f18 & 1)) {
                c->v11(a);
            }
        }
    }
    return 1;
}

int C_00157810::func_00157AE0(void)
{
    if (f1C & 0x80) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if (!(c->f21 & 8)) {
                c->v20();
            }
        }
    }
    return 1;
}

void *C_00158360::func_00158360(int flags)
{
    extern int D_002DF94C;
    extern int D_0028715C;
    D_002DF94C--;
    vtbl = (void *)&D_0028715C;
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

