/* 4 functions from 0x00119810 to 0x0011A590, found by Ghidra. */
#include "common.h"

extern int D_00283D5C;
extern int D_0027D3F0;

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

struct C_00198330 {
    char pad0[0x144];
    f32 f144;
    C_00198330 *func_00198330(void *a0);
    void func_00199A70(C_00198330 *a0, Vec4 *a1);
};

struct BmxWallPlantConstraint {
    void *vtbl;          /* 0x00 */
    char pad04[0x24];    /* 0x04 */
    C_00198330 *f28;     /* 0x28 */
    Vec4 f2C;            /* 0x2C */
    Vec4 f3C;            /* 0x3C */
    Vec4 f4C;            /* 0x4C */
    f32 f5C;             /* 0x5C */
    f32 f60;             /* 0x60 */
    f32 f64;             /* 0x64 */
    f32 f68;             /* 0x68 */
    f32 f6C;             /* 0x6C */
    f32 f70;             /* 0x70 */
    BmxWallPlantConstraint *func_0011A440(int param_1);
    void func_0011A4B0();
    void func_0011A550(Vec4 *a, Vec4 *b);
};

BmxWallPlantConstraint *BmxWallPlantConstraint::func_0011A440(int param_1)
{
    u32 *p;
    ((C_00157600 *)this)->func_00157600(param_1);
    vtbl = &D_00283D5C;
    p = (u32 *)&f2C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f3C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f4C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f5C = 0.1f;
    f60 = 0.03490658f;
    f64 = 0.05f;
    f68 = 0.01745329f;
    f70 = 15.707961f;
    f6C = 10.0f;
    return this;
}

void BmxWallPlantConstraint::func_0011A4B0()
{
    Vec4 v;
    v.z = 0.0f;
    v.y = 0.0f;
    v.x = 0.0f;
    v.w = 1.0f;
    C_00198330 *obj = f28->func_00198330(&D_0027D3F0);
    obj->func_00199A70(f28, &v);
    float h = obj->f144;
    Vec4 t;
    t.x = 0.0f;
    t.y = v.y;
    t.z = v.z + h;
    t.w = 1.0f;
    f2C = t;
}

void BmxWallPlantConstraint::func_0011A550(Vec4 *a, Vec4 *b)
{
    f3C = *a;
    f4C = *b;
}
