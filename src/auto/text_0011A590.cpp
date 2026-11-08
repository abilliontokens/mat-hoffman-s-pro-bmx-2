/* 11 functions from 0x0011A590 to 0x0011B240, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

extern int D_00283D5C;

void func_001E891B(void *p);
float func_0014F7E0(float x);
float func_0014F510(float x);
float func_0014F550(float x);

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

struct BmxWallPlantConstraint {
    char pad0[0x28];
    void *f28;
    int pad2c[4];
    float f3c, f40, f44;
    int pad48;
    float f4c[4];
    float f5c, f60, f64, f68, f6c, f70;
    int func_0011A590(float dt);
};

struct C_0011AB60 {
    void *vtbl;
    void func_00157660();
    void *func_0011AB60(int flags);
};

struct C_0011AB90Arg {
    char pad0[0x22c];
    int f22c;
};

struct C_0011AB90 {
    char pad0[0x24];
    C_0011AB90Arg *f24;
    int f28;
    void func_0011A4B0();
    void func_001D3F50();
    void func_0011AB90(C_0011AB90Arg *arg);
};

void func_0011AC30(float *out, float *in);
void func_0011ACC0(void *a, void *b, float *m);

extern float D_00275544;
extern float D_00275F58;
extern const float D_00275460;
extern const float D_00278C48;

struct C_0011A590_f28 {
    void func_00197F70(void *a, void *b);
    void func_00199900(void *a);
    void func_00197B40(void *a, void *b);
    void func_00198040(void *a, void *b);
    void func_00199CF0(Vec4 v, float a);
};
float *func_0001E9E0(float *out, float *v);
Vec4 func_0001C610(float *a, float *b);

int BmxWallPlantConstraint::func_0011A590(float dt)
{
    Vec4 local;
    Vec4 d;
    Vec4 n;
    Vec4 scaled;
    Vec4 a;
    Vec4 b;
    Vec4 c;
    Vec4 e;
    Vec4 g;
    float len;
    float dot;
    float ang;

    ((C_0011A590_f28 *)f28)->func_00197F70(&local, pad2c);
    d.x = f3c - local.x;
    d.y = f40 - local.y;
    d.z = f44 - local.z;
    d.w = 1.0f;
    a.x = 0.0f;
    a.y = 0.0f;
    a.z = 0.0f;
    a.w = 1.0f;
    b.x = 0.0f;
    b.y = 0.0f;
    b.z = 0.0f;
    b.w = 1.0f;
    len = AsmSqrtF(d.z * d.z + d.y * d.y + d.x * d.x);
    if (len < f64) {
        if (!(len > f5c)) {
            float t = dt * f6c;
            len = AsmMinF(len, t);
        }
        func_0001E9E0((float *)&n, (float *)&d);
        scaled.x = n.x * len;
        scaled.y = n.y * len;
        scaled.z = n.z * len;
        scaled.w = 1.0f;
        ((C_0011A590_f28 *)f28)->func_00199900(&scaled);
    }
    ((C_0011A590_f28 *)f28)->func_00197B40(&b, &a);
    dot = f4c[0] * a.x + f4c[1] * a.y + f4c[2] * a.z;
    if (!(dot > D_00275544)) {
        a.x *= D_00275F58;
        a.y *= D_00275F58;
        a.z *= D_00275F58;
    }
    func_0001E9E0((float *)&c, (float *)&a);
    func_0001E9E0((float *)&e, (float *)&b);
    g = func_0001C610((float *)&e, (float *)&c);
    ang = func_0014F7E0(g.x * a.x + g.y * a.y + g.z * a.z);
    return 1;
}

void *C_0011AB60::func_0011AB60(int flags)
{
    vtbl = (void *)&D_00283D5C;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0011AB90::func_0011AB90(C_0011AB90Arg *arg)
{
    f24 = arg;
    f28 = arg->f22c;
    func_0011A4B0();
    func_001D3F50();
}

void func_0011ABC0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void func_0011AC30(float *out, float *in)
{
    __m128 r0 = _mm_load_ps(in);
    __m128 r1 = _mm_load_ps(in + 4);
    __m128 r2 = _mm_load_ps(in + 8);
    __m128 r3 = _mm_load_ps(in + 12);
    __m128 a, b, c, t;
    a = _mm_movehl_ps(a, r0);
    b = _mm_movehl_ps(b, r1);
    c = _mm_movehl_ps(c, r2);
    a = _mm_shuffle_ps(a, a, 0x55);
    b = _mm_shuffle_ps(b, b, 0x55);
    c = _mm_shuffle_ps(c, c, 0x55);
    t = _mm_setzero_ps();
    a = _mm_mul_ps(a, r0);
    b = _mm_mul_ps(b, r1);
    c = _mm_mul_ps(c, r2);
    t = _mm_sub_ps(t, a);
    b = _mm_add_ps(b, c);
    t = _mm_sub_ps(t, b);
    a = _mm_movehl_ps(a, r0);
    b = _mm_movehl_ps(b, r1);
    c = _mm_movehl_ps(c, r2);
    r0 = _mm_unpacklo_ps(r0, r1);
    _mm_store_ss(out + 3, t);
    _mm_storel_pi((__m64 *)(out + 6), t);
    _mm_storeh_pi((__m64 *)(out + 11), t);
    ((int *)out)[2] = ((int *)in)[8];
    ((int *)out)[6] = ((int *)in)[9];
    _mm_storel_pi((__m64 *)out, r0);
    _mm_storeh_pi((__m64 *)(out + 4), r0);
    _mm_store_ss(out + 8, a);
    _mm_store_ss(out + 9, b);
    _mm_store_ss(out + 10, c);
    _mm_store_ps(out + 12, r3);
}

void func_0011ACC0(void *a, void *b, float *m)
{
    __m128 *out = (__m128 *)a;
    __m128 *in = (__m128 *)b;
    __m128 r0, r1, r2;

    r0 = _mm_mul_ps(_mm_load1_ps(m), in[0]);
    r1 = _mm_mul_ps(_mm_load1_ps(m + 4), in[0]);
    r2 = _mm_mul_ps(_mm_load1_ps(m + 8), in[0]);
    r0 = _mm_add_ps(r0, _mm_mul_ps(_mm_load1_ps(m + 1), in[1]));
    r1 = _mm_add_ps(r1, _mm_mul_ps(_mm_load1_ps(m + 5), in[1]));
    r2 = _mm_add_ps(r2, _mm_mul_ps(_mm_load1_ps(m + 9), in[1]));
    r0 = _mm_add_ps(r0, _mm_mul_ps(_mm_load1_ps(m + 2), in[2]));
    r1 = _mm_add_ps(r1, _mm_mul_ps(_mm_load1_ps(m + 6), in[2]));
    r2 = _mm_add_ps(r2, _mm_mul_ps(_mm_load1_ps(m + 10), in[2]));
    r0 = _mm_add_ps(r0, _mm_mul_ps(_mm_load1_ps(m + 3), in[3]));
    r1 = _mm_add_ps(r1, _mm_mul_ps(_mm_load1_ps(m + 7), in[3]));
    r2 = _mm_add_ps(r2, _mm_mul_ps(_mm_load1_ps(m + 11), in[3]));
    out[0] = r0;
    out[1] = r1;
    out[2] = r2;
    out[3] = in[3];
}

void func_0011ADA0(void *a, void *b, float *m)
{
    __declspec(align(16)) float inv[16];
    func_0011AC30(inv, m);
    func_0011ACC0(a, b, inv);
}

Vec4 *func_0011ADD0(Vec4 *out, float *m)
{
    Vec4 q;
    float t0, t1, t2, t3;
    float s, inv;

    t0 = (m[5] + m[0] + m[10] + 1.0f) * 0.25f;
    t1 = (((m[0] + 1.0f) - m[5]) - m[10]) * 0.25f;
    t2 = (((1.0f - m[0]) + m[5]) - m[10]) * 0.25f;
    t3 = (((1.0f - m[0]) - m[5]) + m[10]) * 0.25f;
    if (t0 > t1 && t0 > t2 && t0 > t3) {
        s = sqrtf(t0);
        inv = 0.25f / s;
        q.x = s;
        q.y = (m[9] - m[6]) * inv;
        q.z = (m[2] - m[8]) * inv;
        q.w = (m[4] - m[1]) * inv;
    } else if (t1 > t2 && t1 > t3) {
        s = sqrtf(t1);
        inv = 0.25f / s;
        q.y = s;
        q.x = (m[9] - m[6]) * inv;
        q.z = (m[4] + m[1]) * inv;
        q.w = (m[8] + m[2]) * inv;
    } else if (t2 > t3) {
        s = sqrtf(t2);
        inv = 0.25f / s;
        q.z = s;
        q.x = (m[2] - m[8]) * inv;
        q.y = (m[4] + m[1]) * inv;
        q.w = (m[9] + m[6]) * inv;
    } else {
        s = sqrtf(t3);
        inv = 0.25f / s;
        q.w = s;
        q.x = (m[4] - m[1]) * inv;
        q.y = (m[8] + m[2]) * inv;
        q.z = (m[9] + m[6]) * inv;
    }
    *out = q;
    return out;
}

struct BoundsSource {
    char pad0[0x40];
    float f40, f44, f48;
    char pad4c[0x24];
    float *f70;
    char pad74[0xc];
    int f80;
    char pad84[8];
    float *f8c;
};

struct BoundsAccum {
    char pad0[0x154];
    float f154, f158, f15c;
    char pad160[4];
    int f164;
    float f168, f16c, f170;
    char pad174[4];
    float f178, f17c, f180;
};

struct BoundsOwner {
    char pad0[0x54];
    BoundsSource *f54;
    char pad58[8];
    BoundsAccum *f60;
};

int func_0011AFF0(BoundsOwner *self)
{
    BoundsSource *src = self->f54;
    BoundsAccum *acc = self->f60;
    for (int i = 0; i < src->f80; i++) {
        float *p = src->f70 + i * 8;
        Vec4 d(p[0] - p[4], p[1] - p[5], p[2] - p[6], 1.0f);
        float w = src->f8c[i];
        w = D_00275460 - w;
        Vec4 r(d.x * w, d.y * w, d.z * w, 1.0f);
        if (r.x > acc->f178) acc->f178 = r.x;
        if (r.y > acc->f17c) acc->f17c = r.y;
        if (r.z > acc->f180) acc->f180 = r.z;
        if (r.x < acc->f168) acc->f168 = r.x;
        if (r.y < acc->f16c) acc->f16c = r.y;
        if (r.z < acc->f170) acc->f170 = r.z;
    }
    *(volatile float *)&acc->f154 = acc->f154 + src->f40;
    *(volatile float *)&acc->f158 = acc->f158 + src->f44;
    *(volatile float *)&acc->f15c = acc->f15c + src->f48;
    return ++*(volatile int *)&acc->f164;
}

float func_0011B180(float a, float b)
{
    float r = func_0014F7E0(b);
    if (!(a > 0.0f)) {
        r = 6.2831855f - r;
    }
    return r;
}

Vec4 func_0011B1B0(float angle)
{
    Vec4 r;
    if (angle > 3.1415927f) {
        angle -= 6.2831855f;
    } else if (angle < -3.1415927f) {
        angle += 6.2831855f;
    }
    r.w = 1.0f;
    r.y = 0.0f;
    r.z = func_0014F510(angle);
    r.x = func_0014F550(angle);
    return r;
}

