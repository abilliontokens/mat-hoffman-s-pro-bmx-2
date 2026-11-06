/* 6 functions from 0x00054680 to 0x00055380, found by Ghidra. */
#include "common.h"

struct V_000551B0 {
    int x, y, z, w;
    V_000551B0() { x = 0; y = 0; z = 0; w = 0; }
    V_000551B0(int px, int py, int pz, int pw) { x = px; y = py; z = pz; w = pw; }
};
extern int D_002A1A64, D_002A1A68, D_002A1A6C, D_002A1A70;

static __forceinline V_000551B0 vec_000551B0(void)
{
    V_000551B0 v;
    v.x = D_002A1A64; v.y = D_002A1A68; v.z = D_002A1A6C; v.w = D_002A1A70;
    return v;
}
extern int D_002BA160, D_002B9118, D_002B9108, D_002B9114, D_002B9110, D_002B910C;

struct S_00054430_V4 {
    float x, y, z, w;
    S_00054430_V4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    S_00054430_V4(float px, float py, float pz, float pw) { x = px; y = py; z = pz; w = pw; }
};
struct S_00054430_Orient {
    S_00054430_V4 func_00198040(S_00054430_V4 *v);
};
struct S_00054430_Item {
    char pad0[0x230]; S_00054430_Orient *f230;
    char pad234[0x834 - 0x234]; S_00054430_V4 f834;
};
struct S_00054430_Items {
    char pad0[0x1a8]; S_00054430_Item *f1a8[2];
};
struct S_00054430_Ctx {
    char pad0[0x4e0]; S_00054430_Items *f4e0;
};
struct S_00054680_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    void func_00088A40(int a, S_00054430_V4 *v);
};
struct C_00054680 {
    char pad0[0x64]; S_00054430_Ctx *f64;
    char pad68[0x28]; int f90;
    char pad94[0x284 - 0x94]; S_00054680_Obj *f284[8];
    S_00054680_Obj *f2a4[8];
    int f2c4;
    void func_00054680();
};
void func_00053CB0(S_00054430_V4 *out, S_00054430_V4 *in);
float func_0014FBA0(float a, float b);
extern float D_00277240;
extern float D_002755EC;

struct C_000549F0 {
    char pad0[0x1f4]; int f1f4;
    void func_000549F0(float dt);
};
void func_00157A00(float dt);

struct C_000549C0 {
    void *vtbl;
    void *func_000549C0(int flags);
};

struct C_00054960 {
    char pad0[0x90];
    int f90;
    char pad94[0x1f0];
    void *f284[8];
    void *f2a4[1];
    void func_00054960(void);
    void func_001577A0(void *a, int b);
};

void C_00054680::func_00054680()
{
    S_00054430_V4 a;
    S_00054430_V4 b;
    S_00054430_V4 *q;
    S_00054430_V4 *pos;
    float ang;
    int i;

    q = &f64->f4e0->f1a8[0]->f834;
    pos = &f64->f4e0->f1a8[1]->f834;
    a = S_00054430_V4(pos->x - q->x, pos->y - q->y, pos->z - q->z, 1.0f);
    func_00053CB0(&a, &a);
    a = f64->f4e0->f1a8[0]->f230->func_00198040(&a);
    ang = func_0014FBA0(a.x, a.z);
    b = f64->f4e0->f1a8[1]->f834;
    b.y += 3.0f;
    f2a4[0]->func_00088A40((int)(ang * 57.29578f), &b);

    q = &f64->f4e0->f1a8[1]->f834;
    pos = &f64->f4e0->f1a8[0]->f834;
    S_00054430_V4 *pa = &a;
    a = S_00054430_V4(pos->x - q->x, pos->y - q->y, pos->z - q->z, 1.0f);
    func_00053CB0(&a, pa);
    a = f64->f4e0->f1a8[1]->f230->func_00198040(&a);
    ang = func_0014FBA0(a.x, a.z);
    b = f64->f4e0->f1a8[0]->f834;
    b.y += 3.0f;
    f2a4[1]->func_00088A40((int)(ang * 57.29578f), &b);

    for (i = 0; i < f90; i++) {
        if (i == f2c4) {
            f284[i]->v4();
            f2a4[i]->v4();
        } else {
            f284[i]->v6();
            f2a4[i]->v6();
        }
    }
}

void C_00054960::func_00054960(void)
{
    int func_00031640(...);
    int i;

    func_00031640();
    for (i = 0; i < f90; i++) {
        if (f284[i] != 0) {
            func_001577A0(f284[i], -1);
        }
        if (f2a4[i] != 0) {
            func_001577A0(f2a4[i], -1);
        }
    }
}

void *C_000549C0::func_000549C0(int flags) {
    extern int D_00277B74;
    void func_00033220();
    void func_001E891B(void *);
    vtbl = (void *)&D_00277B74;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
