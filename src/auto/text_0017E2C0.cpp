/* 13 functions from 0x0017E2C0 to 0x0017F2B0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern int D_00289134;
extern int D_002891C4;

void func_001E891B(void *p);

struct C_0017EE30 {
    void *vtbl;
    void *func_0017EE30(unsigned int flags);
    void func_00133070();
    void func_00133E60();
};

struct C_0017F050 {
    void *vtbl;
    char pad4[0x4C];
    int unk50;
    char pad54[0x9C];
    u16 unkF0;
    char padF2[2];
    u32 unkF4;
    u32 unkF8;
    void *unkFC;
    void *unk100;
    u32 unk104;
    C_0017F050 *func_0017F050(int a0);
    void func_00132EB0(int a0);
};

struct S_0017F0B0 {
    char pad0[0x70];
    void *unk70, *unk74, *unk78;
    char pad7C[8];
    void *unk84, *unk88, *unk8C, *unk90, *unk94;
};

struct RayCollisionObject {
    char pad0[0x54];
    S_0017F0B0 *unk54;
    char pad58[0xA4];
    void *unkFC, *unk100;
    void func_0017F0B0();
};

struct C_0017F0A0 {
    char pad0[0xA7];
    u8 unkA7;
    void func_0017F0A0(int a0);
    void func_00133020(int a0);
};

struct V4_0017F1B0 { u32 x, y, z, w; };
struct S_0017F1B0 {
    V4_0017F1B0 v0, v10;
    char pad20[0x20];
    V4_0017F1B0 v40, v50, v60;
    char pad70[0x10];
    u32 unk80;
    char pad84[0x10];
    u32 unk94;
};
struct C_0017F1B0 {
    char pad0[0x54];
    S_0017F1B0 *unk54;
    char pad58[0x4F];
    u8 unkA7;
    void func_0017F1B0();
};
extern u32 D_002B92E0, D_002B92F0;
extern V4_0017F1B0 D_002A8EE8;
void func_00133D80(void *p);

extern int D_002A8E7C, D_002A8E80, D_002A8E84, D_002A8E88;

struct RadiusLineCollisionObject {
    void *vtbl;
    char pad4[0x4c];
    int unk50;
    char pad54[0x52];
    unsigned char unkA6;
    unsigned char unkA7;
    char padA8[0x48];
    int fF0, fF4, fF8, fFC;
    int f100, f104, f108, f10C;
    int f110, f114, f118, f11C;
    RadiusLineCollisionObject *func_0017E620(int a0);
    void func_00132EB0(int a0);
    void func_0017E8E0(int param_1);
    void func_0017E7C0();
    void func_00157A00(int param_1);
};

struct Vec4_0017E6F0 { float x, y, z, w; };

struct V4C_0017E7C0 { float x, y, z, w; V4C_0017E7C0() { z = 0; y = 0; x = 0; w = 1.0f; } };
void func_00030AC0(V4C_0017E7C0 *out, void *v, void *m);
void func_0017E5B0(V4C_0017E7C0 *a, V4C_0017E7C0 *b);

__forceinline void Xform_0017E7C0(V4C_0017E7C0 *out, float *m, float *vin)
{
    __m128 v = _mm_loadu_ps(vin);
    __m128 r0 = _mm_load_ps(m);
    _mm_storeh_pi((__m64 *)&out->z, v);
    __m128 r1 = _mm_load_ps(m + 4);
    out->w = 1.0f;
    __m128 r2 = _mm_load_ps(m + 8);
    v = _mm_loadh_pi(v, (__m64 const *)&out->z);
    r0 = _mm_mul_ps(r0, v);
    r1 = _mm_mul_ps(r1, v);
    r2 = _mm_mul_ps(r2, v);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 t = _mm_movehl_ps(r2, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, t);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&out->x, lo);
    out->w = 1.0f;
}

struct C_0017E6F0 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    char pad4[0xAC];
    float mB0[16];
    Vec4_0017E6F0 fF0;
    Vec4_0017E6F0 f100;
    float f110, f114, f118, f11C;
    void func_0017E6F0(Vec4_0017E6F0 a, Vec4_0017E6F0 b, float r);
};

RadiusLineCollisionObject *RadiusLineCollisionObject::func_0017E620(int a0) {
    func_00132EB0(a0);
    vtbl = &D_00289134;
    int *p = &fF0;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f100;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    fF0 = D_002A8E7C;
    fF4 = D_002A8E80;
    fF8 = D_002A8E84;
    fFC = D_002A8E88;
    f100 = D_002A8E7C;
    f104 = D_002A8E80;
    f108 = D_002A8E84;
    f10C = D_002A8E88;
    f110 = 0;
    f114 = 0;
    f118 = 0;
    f11C = 0;
    unk50 = 4;
    return this;
}

void RadiusLineCollisionObject::func_0017E8E0(int param_1)
{
    if (unkA6 != 0) {
        func_0017E7C0();
    }
    unkA7 = unkA7 & 0xef;
    func_00157A00(param_1);
}

void *C_0017EE30::func_0017EE30(unsigned int flags) {
    vtbl = &D_00289134;
    func_00133070();
    func_00133E60();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0017F050 *C_0017F050::func_0017F050(int a0) {
    func_00132EB0(a0);
    unkF0 = 0;
    unkF4 = 0;
    unkF8 = 0;
    unkFC = 0;
    unk100 = 0;
    unk104 = 0;
    vtbl = &D_002891C4;
    unk50 = 2;
    return this;
}

void C_0017F0A0::func_0017F0A0(int a0) {
    unkA7 |= 0x40;
    func_00133020(a0);
}

void RayCollisionObject::func_0017F0B0() {
 if (unkFC) { func_001E891B(unkFC); unkFC = 0; }
 if (unk100) { func_001E891B(unk100); unk100 = 0; }
 S_0017F0B0 *p = unk54;
 if (p) {
 if (p->unk8C) { func_001E891B(p->unk8C); p->unk94 = 0; }
 if (p->unk70) { func_001E891B(p->unk70); p->unk70 = 0; }
 if (p->unk90) { func_001E891B(p->unk90); p->unk90 = 0; }
 if (p->unk74) { func_001E891B(p->unk74); p->unk74 = 0; }
 if (p->unk88) { func_001E891B(p->unk88); p->unk88 = 0; }
 if (p->unk84) { func_001E891B(p->unk84); p->unk84 = 0; }
 if (p->unk78) { func_001E891B(p->unk78); p->unk78 = 0; }
 func_001E891B(unk54); unk54 = 0;
 }
}

void C_0017F1B0::func_0017F1B0()
{
    unkA7 &= 0xdf;
    D_002B92E0 = 0;
    D_002B92F0 = 0;
    func_00133D80(unk54);
    S_0017F1B0 *p = unk54;
    p->v0 = D_002A8EE8;
    p->v10 = D_002A8EE8;
    p->unk94 = 0x3f800000;
    p->unk80 = 0;
    p->v40 = D_002A8EE8;
    p->v50 = D_002A8EE8;
    p->v60 = D_002A8EE8;
}

