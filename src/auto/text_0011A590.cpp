/* 11 functions from 0x0011A590 to 0x0011B240, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>

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

struct C_0011A590_f28 {
    void func_00197F70(void *a, void *b);
    void func_00199900(void *a);
    void func_00197B40(void *a, void *b);
    void func_00198040(void *a, void *b);
    void func_00199CF0(float a, Vec4 v);
};
float *func_0001E9E0(float *out, float *v);
Vec4 func_0001C610(float *a, float *b);

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

void func_0011ADA0(void *a, void *b, float *m)
{
    __declspec(align(16)) float inv[16];
    func_0011AC30(inv, m);
    func_0011ACC0(a, b, inv);
}

void func_0011ADD0(Vec4 *out, float *m)
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
}

extern float D_00275460;
void func_0011AFF0(char *arg)
{
 char *a=*(char **)(arg+0x54);
 float *b=*(float **)(arg+0x60);
 for(int i=0;i<*(int *)(a+0x80);i++){
 float *p=(float *)(*(char **)(a+0x70)+i*32);
 Vec4 d;
 d.x=p[0]-p[4]; d.y=p[1]-p[5]; d.z=p[2]-p[6];
 float w=(*(float **)(a+0x8c))[i];
 w=D_00275460-w;
 Vec4 r;
 r.x=d.x*w; r.y=d.y*w; r.z=d.z*w;
 if(r.x>b[94]) b[94]=r.x;
 if(r.y>b[95]) b[95]=r.y;
 if(r.z>b[96]) b[96]=r.z;
 if(r.x<b[90]) b[90]=r.x;
 if(r.y<b[91]) b[91]=r.y;
 if(r.z<b[92]) b[92]=r.z;
 }
 b[85]+=*(float *)(a+0x40);
 b[86]+=*(float *)(a+0x44);
 b[87]+=*(float *)(a+0x48);
 ++((volatile int *)b)[89];
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

