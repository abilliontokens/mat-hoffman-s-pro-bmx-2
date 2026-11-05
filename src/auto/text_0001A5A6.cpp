/* 14 functions from 0x0001A5A6 to 0x0001B440, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>

extern float D_00275AFC;
extern float D_00275B00;
extern float D_00275460;
extern float D_00275544;

float func_0014F890(float x);
float func_0014F450(float x);

struct Quat {
    float w, x, y, z;
};

struct Vec3 {
    float x, y, z;
};

/* object with a virtual base class that has virtual slots (slot 5 at +0x14) */
struct VBase_0001B360 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};

struct VDerived_0001B360 : virtual VBase_0001B360 {
};

struct S_0001B360 {
    char pad0[0x1A4];
    VDerived_0001B360 *obj;
};

extern float D_00275B04;
extern float D_00275B40;
extern int D_00275B54;
extern float D_002B7C74;
extern float D_002B7C78;
extern float D_002AF46C[];
extern float D_002B346C[];
extern float D_002B3470[];
extern float D_002B386C[];
extern float D_002B3870[];
extern float D_002B3C6C[];

struct C_00157600 {
    void func_00157600(int a);
};

struct C_0001B380 {
    void *vtbl;
    char pad4[0x24 - 4];
    int f24;
    float f28;
    int f2c;
    C_0001B380 *func_0001B380(int a);
};
extern C_0001B380 *D_002B7C88;

/* quaternion packed in 4 bytes: angle index + 3 axis components */
struct PackedQuat {
    u8 angle;
    s8 x, y, z;
};

struct C_0001B0A0 {
    C_0001B0A0 *func_0001B0A0(void);
};

/* float rgb -> 8-bit rgb */
struct C_0001AE60 {
    s8 r, g, b;
    C_0001AE60* func_0001AE60(const Vec3* v);
};

/* float rgb -> 16-bit rgb */
struct C_0001AF00 {
    s16 r, g, b;
    C_0001AF00* func_0001AF00(const Vec3* v);
};

struct C_0001B3B0 {
    char pad0[0x2C];
    int unk2C;
    C_0001B3B0* func_0001B3B0(int a0);
};


C_0001AE60* C_0001AE60::func_0001AE60(const Vec3* v) {
    C_0001AE60 * volatile self = this;
    int tmp;
    int * volatile p;
    float t;
    p = &tmp;
    t = D_00275AFC * v->x;
    *p = _mm_cvtss_si32(*(__m128 *)&t);
    self->r = (s8)tmp;
    p = &tmp;
    t = D_00275AFC * v->y;
    *p = _mm_cvtss_si32(*(__m128 *)&t);
    self->g = (s8)tmp;
    p = &tmp;
    t = D_00275AFC * v->z;
    *p = _mm_cvtss_si32(*(__m128 *)&t);
    self->b = (s8)tmp;
    return self;
}

C_0001AF00* C_0001AF00::func_0001AF00(const Vec3* v) {
    int t;
    t = _mm_cvtss_si32(_mm_set_ss(D_00275B00 * v->x));
    r = (s16)t;
    t = _mm_cvtss_si32(_mm_set_ss(D_00275B00 * v->y));
    g = (s16)t;
    t = _mm_cvtss_si32(_mm_set_ss(D_00275B00 * v->z));
    b = (s16)t;
    return this;
}

void func_0001B020(Quat *q, float *angle, Vec3 *axis) {
    float t = func_0014F890(q->w);
    *angle = t;
    if (t != D_00275544) {
        float s = D_00275460 / func_0014F450(t);
        axis->x = s * q->x;
        axis->y = s * q->y;
        axis->z = s * q->z;
    } else {
        axis->x = 1.0f;
        axis->y = 0.0f;
        axis->z = 0.0f;
    }
    *angle += *angle;
}

void func_0001B360(int a0, int a1, S_0001B360 *a2, int a3) {
    if (a3 != 0) {
        a2->obj->v5();
    }
}

C_0001B3B0* C_0001B3B0::func_0001B3B0(int a0) {
    unk2C = a0;
    return this;
}
