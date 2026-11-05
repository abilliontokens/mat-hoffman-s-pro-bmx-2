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
    virtual void v21();
    virtual int v22(int a, int b);
    virtual int v23(int a, int b);
    virtual int v24(int a, int b, int c, int d, int e);
    virtual void v25();
    int pad4;
    S_00157810_Child *f8;
    S_00157810_Child *fC;
    S_00157810_Child *f10;
    S_00157810_Child *f14;
    unsigned int f18;
    unsigned int f1C;
    char pad20;
    unsigned char f21;
    unsigned int func_00157770(void);
};

struct C_00157810 {
    void *vtbl;
    int pad4;
    S_00157810_Child *f8;
    S_00157810_Child *fC;
    S_00157810_Child *f10;
    S_00157810_Child *f14;
    char pad18[4];
    int f1C;
    char f20;
    unsigned char f21_b0 : 1;
    unsigned char f21_b1 : 1;
    unsigned char f21_b2 : 1;
    unsigned char f21_b3 : 1;
    int func_00157810(void);
    void func_001578A0(void);
    int func_001578D0(void);
    int func_00157920(void);
    int func_00157960(void);
    int func_001579B0(void);
    int func_00157A00(int a);
    int func_00157A50(int a);
    int func_00157A90(int a);
    int func_00157AE0(void);
    int func_00157B10(void);
    int func_00157B90(int a, int b);
    int func_00157BF0(int a, int b);
    int func_00157C50(int a, int b, int c, int d, int e);
};

/* node with a parent link (f8) and a child link (fC), unlinked by func_00157CB0 */
struct C_00157CB0 {
    virtual void v0();
    virtual void v1();
    virtual int v2();
    int f4;
    C_00157CB0 *f8;
    C_00157CB0 *fC;
    int func_00157CB0(void);
};

extern int D_002DF948;

struct C_00158360 {
    void *vtbl;
    void func_0001DFF0(void);
    void *func_00158360(int flags);
};

void func_001E891B(void *p);

extern int D_002DF948;

struct S_00158510_Vec4 {
    int x, y, z, w;
};

struct S_00158510_Src {
    char pad0[0x20];
    S_00158510_Vec4 f20;
    char pad30[0x48];
    S_00158510_Vec4 *f78;
};

struct S_00158510_Dst {
    char pad0[0x7c];
    S_00158510_Vec4 f7C;
    S_00158510_Vec4 f8C;
    unsigned char f9C;
};

struct S_00158510_Arg0 {
    char pad0[0x54];
    S_00158510_Src *f54;
    char pad58[8];
    S_00158510_Dst *f60;
};

struct S_00158510_Arg1 {
    char pad0[0x68];
    int f68;
};

extern int D_002BA160;
extern int D_002B9118;
extern int D_002B9108;
extern int D_002BA148;

/* node of the GameObject tree: prev/next siblings, first child, parent */
struct C_00157CF0 {
    void *vtbl;
    int refs;
    C_00157CF0 *f8;
    C_00157CF0 *fC;
    C_00157CF0 *f10;
    C_00157CF0 *f14;
    int func_00157CB0(void);
    int func_00157CF0(void);
    int func_0001E010(void);
};

int C_00157810::func_00157810(void)
{
    S_00157810_Child *p;
    S_00157810_Child *c;
    unsigned int r;

    if (D_002DF948 != 0) {
        return 0;
    }
    if (f8 != 0) {
        f8->fC = fC;
    }
    if (fC != 0) {
        fC->f8 = f8;
    }
    if (f14 != 0 && f14->f10 == (S_00157810_Child *)this) {
        f14->f10 = fC;
    }
    p = (S_00157810_Child *)this;
    while (p->f14 != 0) {
        p = p->f14;
    }
    r = 0;
    for (c = p->f10; c != 0; c = c->fC) {
        r |= c->func_00157770();
    }
    p->f1C = r;
    f14 = 0;
    fC = 0;
    f8 = 0;
    return 1;
}

void C_00157810::func_001578A0(void)
{
    S_00157810_Child *c;

    for (c = f10; c != 0; c = c->fC) {
        c->v25();
    }
    f21_b3 = 1;
}

int C_00157810::func_001578D0(void)
{
    if (f1C & 0x1000) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8) && (c->f18 & 0x1000)) {
                D_002EFDB8->v7(0);
                c->v14();
            }
        }
    }
    return 1;
}

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

int C_00157810::func_00157A90(int a)
{
    f21_b2 = a;
    if (f1C & 0x20) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8) && (c->f18 & 0x20)) {
                c->v18(a);
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

int C_00157810::func_00157B10(void)
{
    if (f1C & 0x40) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if (!(c->f21 & 8)) {
                c->v19();
            }
        }
    }
    return 1;
}

int C_00157810::func_00157B90(int a, int b)
{
    if (f1C & 0x200) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8)) {
                if (c->v22(a, b)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int C_00157810::func_00157BF0(int a, int b)
{
    if (f1C & 0x400) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8)) {
                if (c->v23(a, b)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int C_00157810::func_00157C50(int a, int b, int c, int d, int e)
{
    if (f1C & 0x800) {
        for (S_00157810_Child *ch = f10; ch != 0; ch = ch->fC) {
            if ((ch->f21 & 2) && !(ch->f21 & 8)) {
                if (ch->v24(a, b, c, d, e)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int C_00157CB0::func_00157CB0(void)
{
    if (D_002DF948 != 0) {
        return 0;
    }
    if (fC != 0) {
        fC->func_00157CB0();
    }
    if (f8 != 0) {
        f8->fC = 0;
    }
    fC = 0;
    return v2();
}

int C_00157CF0::func_00157CF0(void)
{
    if (D_002DF948 != 0) {
        return 0;
    }
    if (f10 != 0) {
        f10->func_00157CB0();
    }
    if (f8 != 0) {
        f8->fC = fC;
    }
    if (fC != 0) {
        fC->f8 = f8;
    }
    if (f14 != 0 && f14->f10 == this) {
        f14->f10 = fC;
    }
    return func_0001E010();
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

void func_00158510(S_00158510_Arg0 *a, S_00158510_Arg1 *b)
{
    int v = b->f68;

    if ((v == D_002BA160 || v == D_002B9118 || v == D_002B9108) && v != D_002BA148) {
        S_00158510_Dst *dst = a->f60;
        S_00158510_Src *src = a->f54;

        dst->f7C = *src->f78;
        dst->f8C = src->f20;
        dst->f9C |= 1;
    }
}

