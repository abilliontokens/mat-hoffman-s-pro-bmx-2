/* 1 function from 0x00131510 to 0x001324B0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct V4_00131510 {
    float x, y, z, w;
};

struct Vec4_00131510 : V4_00131510 {
    Vec4_00131510() { x = y = z = 0; w = 1; }
};

/* a tracked value: current value, a time constant, and the smoothing ratio */
struct S_Node_00131510 {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
};

struct S_Sub_00131510 {
    void func_000BA430(V4_00131510 *a, int b, int c, int d);
};

/* CinematographerCam */
struct C_00131510 {
    void *vtbl;
    V4_00131510 f4;
    V4_00131510 f14;
    V4_00131510 f24;
    V4_00131510 f34;
    float f44;
    float f48;
    float f4C;
    int f50;
    int f54;
    int f58;
    float f5C;
    float f60;
    int f64;
    int f68;
    int f6C;
    int f70;
    int f74;
    int f78;
    int f7C;
    S_Node_00131510 *f80;
    S_Node_00131510 *f84;
    S_Node_00131510 *f88;
    S_Node_00131510 *f8C;
    S_Node_00131510 *f90;
    S_Node_00131510 *f94;
    int f98;
    int f9C;
    float fA0;
    int fA4;
    float fA8;
    int fAC;
    int fB0;
    int fB4;
    int fB8;
    int fBC;
    int fC0;
    float fC4;
    float fC8;
    float fCC;
    float fD0;
    void func_00131510(float dt, int a1, int a2, int a3, float *p18, V4_00131510 *p1c, V4_00131510 *p20, int a7);
};

extern float D_00275544, D_002A4278, D_00275460, D_0028458C, D_00284588, D_002B9D6C;
extern V4_00131510 D_002A4220, D_002A4230, D_002A4240;

void func_001310E0(V4_00131510 *a, V4_00131510 *b);
float func_00016D60(float x);
void func_00158390(float angle, V4_00131510 axis, V4_00131510 v, V4_00131510 *out);
void func_000BA430(void *obj, V4_00131510 *a, int b, int c, int d);

static __forceinline float Min_00131510(float a, float b)
{
    float r;
    _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b)));
    return r;
}

static __forceinline void Cross_00131510(V4_00131510 * volatile out, V4_00131510 * a, V4_00131510 * b)
{
    __m128 va = _mm_loadu_ps(&a->x);
    __m128 vb = _mm_loadu_ps(&b->x);
    __m128 sa = va, sb = vb;
    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(&out->x, va);
}

static __forceinline float Track_00131510(S_Node_00131510 *n, float target, float dt)
{
    float limit = n->f4;
    float m = Min_00131510(dt, limit);
    n->f8 = D_00275460 / n->f4 * m;
    n->f0 = (target - n->f0) * n->f8 + n->f0;
    return n->f0;
}
