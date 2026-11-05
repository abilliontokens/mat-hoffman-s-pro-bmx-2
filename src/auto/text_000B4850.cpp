/* 5 functions from 0x000B4850 to 0x000B5260, found by Ghidra. */
#include "common.h"

extern int D_0027D37C;
extern int D_0027D3F0;
extern int D_0027D3FC;

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() {}
    Vec4(f32 x_, f32 y_, f32 z_, f32 w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_001577A0 {
    void func_001577A0(void *p, int n);
};

struct C_00198330 {
    char pad0[0x144];
    f32 f144;
    C_00198330 *func_00198330(void *a0);
    void func_00199A70(C_00198330 *a0, Vec4 *a1);
};

struct C_000B3E10 {
    void func_000B3E10(void);
};

struct C_000B3410 {
    void func_000B3410(int a0);
};

struct C_000B1350 {
    int func_000B1350(void);
};

struct C_000B5020 {
    char pad0[0x28];
    int f28;
    char pad2C[0x8];
    int f34;
    int f38;
    char pad3C[0x8];
    C_000B3E10 **f44;
    C_000B3410 **f48;
    int func_000B5020(void);
};

struct BmxStallConstraint {
    void *vtbl;          /* 0x00 */
    char pad04[0x2c];    /* 0x04 */
    C_00198330 *f30;     /* 0x30 */
    Vec4 f34;            /* 0x34 */
    Vec4 f44;            /* 0x44 */
    f32 f54;             /* 0x54 */
    f32 f58;             /* 0x58 */
    f32 f5C;             /* 0x5C */
    f32 f60;             /* 0x60 */
    f32 f64;             /* 0x64 */
    f32 f68;             /* 0x68 */
    f32 f6C;             /* 0x6C */
    BmxStallConstraint *func_000B50B0(int param_1);
    void func_000B5120(void);
    void func_000B51C0(void);
};

int C_000B5020::func_000B5020(void)
{
    int i;
    for (i = 0; i < f34; i++) {
        f44[i]->func_000B3E10();
        ((C_001577A0 *)this)->func_001577A0(f44[i], -1);
    }
    for (i = 0; i < f38; i++) {
        f48[i]->func_000B3410(f28);
        ((C_001577A0 *)this)->func_001577A0(f48[i], -1);
    }
    if (f38 > 0 || f34 > 0) {
        ((C_000B1350 *)this)->func_000B1350();
        return 1;
    }
    return 0;
}

BmxStallConstraint *BmxStallConstraint::func_000B50B0(int param_1)
{
    u32 *p;
    ((C_00157600 *)this)->func_00157600(param_1);
    vtbl = &D_0027D37C;
    p = (u32 *)&f34;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f44;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f54 = 0;
    f58 = 0.1f;
    f5C = 0.03490658f;
    f60 = 0.05f;
    f64 = 0.01745329f;
    f6C = 15.707961f;
    f68 = 10.0f;
    return this;
}

void BmxStallConstraint::func_000B5120(void)
{
    Vec4 v;
    v.z = 0.0f;
    v.y = 0.0f;
    v.x = 0.0f;
    v.w = 1.0f;
    C_00198330 *obj = f30->func_00198330(&D_0027D3F0);
    obj->func_00199A70(f30, &v);
    Vec4 t;
    t.x = 0.0f;
    t.y = -obj->f144 + v.y;
    t.z = v.z;
    t.w = 1.0f;
    f34 = t;
}

void BmxStallConstraint::func_000B51C0(void)
{
    Vec4 v;
    v.z = 0.0f;
    v.y = 0.0f;
    v.x = 0.0f;
    v.w = 1.0f;
    C_00198330 *obj = f30->func_00198330(&D_0027D3FC);
    obj->func_00199A70(f30, &v);
    Vec4 t;
    t.x = 0.0f;
    t.y = -obj->f144 + v.y;
    t.z = v.z;
    t.w = 1.0f;
    f44 = t;
}

