/* 14 functions from 0x0001A5A6 to 0x0001B440, found by Ghidra. */
#include "common.h"
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
    int t;
    t = _mm_cvtss_si32(_mm_set_ss(D_00275AFC * v->x));
    r = (s8)t;
    t = _mm_cvtss_si32(_mm_set_ss(D_00275AFC * v->y));
    g = (s8)t;
    t = _mm_cvtss_si32(_mm_set_ss(D_00275AFC * v->z));
    b = (s8)t;
    return this;
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
