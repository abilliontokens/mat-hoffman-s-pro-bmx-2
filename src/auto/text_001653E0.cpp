/* 9 functions from 0x001653E0 to 0x001662A0, found by Ghidra. */
#include "common.h"

void func_001641B0(void *a, void *b);

struct Vec4_165EF0 {
    f32 x, y, z, w;
};

struct C_001659D0_Obj4 {
    int func_00198330(int a);
};

struct C_001659D0_Elem {
    char pad0[0x34];
    int f34;
    char pad38[0x8];
};

struct C_001659D0 {
    char pad0[0x4];
    C_001659D0_Obj4 *f4;       /* 0x04 */
    char pad8[0x1E0];          /* 0x08 */
    int f1E8;                  /* 0x1E8 */
    C_001659D0_Elem *f1EC;     /* 0x1EC */
    void func_001659D0(int *a, int b, int c);
};

struct C_00165EF0_Obj {
    virtual void v0();
    virtual void v1(f32 a, Vec4_165EF0 *out);
    virtual void v2(f32 a, Vec4_165EF0 *out);
};

struct C_00165EF0_Arg1 {
    char pad0[0x18];
    C_00165EF0_Obj **f18;      /* 0x18 */
    char pad1C[0x1C];          /* 0x1C */
    f32 f38;                   /* 0x38 */
};

struct C_00165EF0 {
    char pad0[0xC];
    void *fC;                  /* 0x0C */
    int func_00164650(int a);
    void func_00165EF0(Vec4_165EF0 *out, C_00165EF0_Arg1 *a1, f32 a2, int a3, void *a4);
};

struct C_00165E20_Node {
    char pad0[0x170];
    int f170;
};

struct C_00165E20_Elem {
    char pad0[0x34];
    C_00165E20_Node *f34;
    char pad38[0x8];
};

struct C_00165E20_Item {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(f32 a, Vec4_165EF0 *out);
    int f4;
};

struct C_00165E20_Arg1 {
    char pad0[0x14];
    C_00165E20_Item **f14;     /* 0x14 */
    char pad18[0x20];          /* 0x18 */
    f32 f38;                   /* 0x38 */
};

void func_001640D0(void *a, int b, void *c, void *d);

struct C_00165E20 {
    char pad0[0x4];
    void *f4;                  /* 0x04 */
    char pad8[0x4];            /* 0x08 */
    void *fC;                  /* 0x0C */
    char pad10[0x1DC];         /* 0x10 */
    C_00165E20_Elem *f1EC;     /* 0x1EC */
    int *f1F0;                 /* 0x1F0 */
    int func_00164650(int a);
    Vec4_165EF0 func_00165E20(C_00165E20_Arg1 *a1, f32 a2, int a3, void *a4);
};

void *func_001E8AA5(unsigned int size);

struct C_00165980 {
    char pad0[0x1e8];
    int unk1E8;
    void func_00165980(int **out, int value);
};

void C_00165980::func_00165980(int **out, int value)
{
    int i;
    *out = (int *)func_001E8AA5(unk1E8 << 2);
    for (i = 0; i < unk1E8; i++) {
        (*out)[i] = value;
    }
}

void C_001659D0::func_001659D0(int *a, int b, int c)
{
    int idx = f4->func_00198330(b);
    int i;
    for (i = 0; i < f1E8; i++) {
        if (f1EC[i].f34 == idx) {
            a[i] = c;
            return;
        }
    }
}

Vec4_165EF0 C_00165E20::func_00165E20(C_00165E20_Arg1 *a1, f32 a2, int a3, void *a4)
{
    Vec4_165EF0 v;
    int idx;
    a2 = a2 * a1->f38;
    idx = (u8)func_00164650(a3);
    v.x = v.y = v.z = 0.0f;
    v.w = 1.0f;
    a1->f14[idx]->v3(a2, &v);
    if (a4)
        func_001640D0(f4, f1EC[f1F0[a1->f14[idx]->f4]].f34->f170, fC, &v);
    return v;
}

void C_00165EF0::func_00165EF0(Vec4_165EF0 *out, C_00165EF0_Arg1 *a1, f32 a2, int a3, void *a4)
{
    Vec4_165EF0 v;
    a2 = a2 * a1->f38;
    C_00165EF0_Obj *o = a1->f18[(u8)func_00164650(a3)];
    o->v2(a2, &v);
    if (a4)
        func_001641B0(fC, &v);
    *out = v;
}

