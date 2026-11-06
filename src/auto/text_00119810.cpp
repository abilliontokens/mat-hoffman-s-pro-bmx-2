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
    void Set(f32 x_, f32 y_, f32 z_, f32 w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
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

struct S119_UI {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int vf5(int a, int b, int c);
};
struct S119_G8 {
    char pad0[0x38];
    S119_UI *f38;
};
struct S119_Obj1C4 {
    char pad0[0xe0];
    char fe0;
    void func_001048E0();
};
struct S119_Veh138 {
    char pad0[0x138];
    float f138;
};
struct S119_P2A4 {
    char pad0[0x170];
    S119_Veh138 *list[21];
    S119_Obj1C4 *f1c4;
    int f1c8;
};
struct S_002A8490_119810 {
    char pad0[8];
    S119_G8 *f8;
    char padC[0x124 - 0xC];
    int f124;
    char pad128[0x2a4 - 0x128];
    S119_P2A4 *f2a4;
};
extern S_002A8490_119810 *D_002A8490;
extern float D_00275460;

struct S119_Obj {
    void func_00199650(void *a);
    void func_00198F50(void *a, void *b, int c, int d, int e);
    void func_00199C20(int a, void *b);
    void func_0019AD60(int a, void *b);
    void func_0019AC50();
    void func_00026270(float s);
    void func_00133ED0();
};

#define VF(off, T) (*(T *)((char *)self + (off)))
#define VP(off) ((char *)self + (off))

struct BmxVehicle {
    int func_00119810(int a);
    void func_00027D40();
    int func_001091D0();
    void func_0010DC00();
    int func_0010DAB0();
    void func_00112A80(int a);
    void func_0010C210();
    void func_00105890();
    void func_00118840(int a);
    void func_0002EE30(int a);
    void func_00119680(int a);
    void func_00111C60(int a);
    void func_00105AA0();
    void func_001184E0(int a);
    void func_00113290(int a);
    void func_00105B30(int a);
    void func_00105CB0();
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

int BmxVehicle::func_00119810(int a)
{
    char *self = (char *)this;

    if (D_002A8490->f124 != 0) {
        if (*(char *)(self + 0x12a8) < 0) {
            int func_0010DAB0();
            if (func_0010DAB0()) {
                return 1;
            }
        }
        if (*(int *)(*(int *)((char *)D_002A8490 + 0x2a4) + 0x1c8) == 0) {
            if (*(int *)(self + 0x209c) != 0 && *(int *)(self + 0x1178) != 0 && *(int *)(self + 0x11f4) == 1 && *(int *)(self + 0x454) == 0 && *(int *)(self + 0x468) == 0) {
                *(int *)(self + 0x20a0) = 1;
                *(int *)(self + 0x209c) = 0;
            }
            if (*(int *)(self + 0x20a0) != 0) {
                *(int *)(self + 0x99c) = 0;
                *(int *)(self + 0x9bc) = 0;
                *(int *)(self + 0x964) = 0;
                *(int *)(self + 0x968) = 0;
                *(int *)(self + 0x9e0) = 1;
                func_00027D40();
                if (func_001091D0()) {
                    *(float *)(self + 0x9a0) = 1.0f;
                } else {
                    *(int *)(self + 0x9a0) = 0;
                }
                if (*(int *)(self + 0x20a4) == 0 && *(int *)(self + 0x15d8) == 1) {
                    if (*(float *)(self + 0x15f4) >= 1.0f || *(int *)(self + 0x1130) != 0) {
                        *(int *)(self + 0x20a4) = 1;
                        func_0010DC00();
                    }
                }
            }
        }
    }
    return 1;
}

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
    f32 h = obj->f144;
    Vec4 t;
    t.y = v.y;
    t.z = v.z + h;
    t.x = 0.0f;
    t.w = 1.0f;
    f2C = t;
}

void BmxWallPlantConstraint::func_0011A550(Vec4 *a, Vec4 *b)
{
    f3C = *a;
    f4C = *b;
}
