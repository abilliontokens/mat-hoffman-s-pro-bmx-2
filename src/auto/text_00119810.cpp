/* 4 functions from 0x00119810 to 0x0011A590, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern int D_00283D5C;
extern int D_0027D3F0;

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() {}
    __forceinline void Set4(const f32 &x_, const f32 &y_, const f32 &z_, const f32 &w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
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

static __forceinline Vec4 MakeVec4_0011A4B0(f32 a, f32 b, f32 c, f32 d)
{
    Vec4 r(a, b, c, d);
    return r;
}

static __forceinline Vec4 PlantPos_0011A4B0(const Vec4 &v, f32 h)
{
    Vec4 r;
    double dy = v.y;
    r.x = 0.0f;
    r.y = (float)dy;
    r.z = v.z + h;
    r.w = 1.0f;
    return r;
}

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

struct C_00198330;

struct S119_Obj {
    void func_00199650(void *a);
    void func_00198F50(void *a, void *b, int c, int d, int e);
    void func_00199C20(int a, void *b);
    void func_0019AD60(int a, void *b);
    void func_0019AC50();
    void func_00026270(float s);
    void func_00133ED0();
    void func_000B6A70(int a);
    C_00198330 *func_00198330(char *name);
    Vec4 *func_00199B00(Vec4 *out, int a);
    void func_001994C0(int a, Vec4 *b, Vec4 *c);
};

struct S119_Cam {
    void func_0011CA60(Vec4 v);
    void func_0009F4C0(int a);
};

struct S119_Entry {
    Vec4 a;
    Vec4 b;
    f32 d;
};

extern float D_002755E8;
extern char D_00283D44[];
extern char D_00282A40[];
extern char D_00282A00[];
extern char D_002829C0[];
extern char D_002829A8[];
extern int D_002B9264;
extern float D_002B9254, D_002B9258, D_002B925C, D_002B9260;
extern float D_002B9244, D_002B9248, D_002B924C, D_002B9250;
extern float D_002B9234, D_002B9238, D_002B923C, D_002B9240;
extern float D_002B9224, D_002B9228, D_002B922C, D_002B9230;
void func_00104A90(void *a, void *b);

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
    return 0;
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
    t.x = h - h;
    double dy = v.y;
    t.y = (float)dy;
    t.z = v.z + h;
    t.w = 1.0f;
    f2C = t;
}

void BmxWallPlantConstraint::func_0011A550(Vec4 *a, Vec4 *b)
{
    f3C = *a;
    f4C = *b;
}
