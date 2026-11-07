/* 1 function from 0x00131510 to 0x001324B0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

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
    void func_000269B0(float, float, float);
    float func_00026A10(float, float);
};

struct S_Sub_00131510 {
    void func_000BA430(V4_00131510 *a, int b, int c, int d);
    void func_00199A70(int, V4_00131510*);
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
    S_Sub_00131510 *f6C;
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
extern float D_002755EC, D_002A4274;
extern char* D_002A8490;
extern int D_002A9A68;
extern char D_00284574[],D_0028455C[],D_00284544[],D_0028452C[],D_00284524[];
void func_0013E260(void*,int,const char*);
void func_0013E1F0(void*,int,const char*,...);
float func_0014FBA0(float,float);

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

static __forceinline void Cross_00131510(V4_00131510 *out, V4_00131510 *a, V4_00131510 *b)
{
    V4_00131510* volatile pa=a;
    V4_00131510* volatile pb=b;
    V4_00131510* volatile dest=out;
    __m128 av = _mm_loadu_ps(&pa->x);
    __m128 bv = _mm_loadu_ps(&pb->x);
    __m128 as = av;
    __m128 bs = bv;
    as = _mm_shuffle_ps(as, as, 0xc9);
    bs = _mm_shuffle_ps(bs, bs, 0xc9);
    bv = _mm_mul_ps(bv, as);
    av = _mm_mul_ps(av, bs);
    av = _mm_sub_ps(av, bv);
    av = _mm_shuffle_ps(av, av, 0xc9);
    _mm_storeu_ps(&out->x, av);
}

static __forceinline float Track_00131510(S_Node_00131510 *n, float target, float dt)
{
    float limit = n->f4;
    float m = Min_00131510(dt, limit);
    n->f8 = D_00275460 / n->f4 * m;
    n->f0 = (target - n->f0) * n->f8 + n->f0;
    return n->f0;
}

void C_00131510::func_00131510(float dt, int a1, int a2, int a3, float *p18, V4_00131510 *p1c, V4_00131510 *p20, int a7)
{
    if (f74 != 0 && f98 != 0) {
        float negC8 = -fC8;
        float c4 = fC4;
        Vec4_00131510 a;
        Vec4_00131510 b;
        AsmVec3Cross(&a.x, &p20->x, &p1c->x);
        if (f9C == 0) {
            a.y = 0;
        }
        func_001310E0(&a, &a);
        if (p1c->x < D_00275544 && p1c->z < D_00275544) {
            b.x = p20->x;
            b.y = p20->y;
            b.z = p20->z;
            b.w = p20->w;
        } else {
            b.x = p1c->x;
            b.y = p1c->y;
            b.z = p1c->z;
            b.w = p1c->w;
        }
        if (f9C == 0) {
            b.y = 0;
        }
        func_001310E0(&b, &b);
        float s = c4 * dt;
        float s2 = negC8 * dt;
        float k = f5C;
        V4_00131510 r;
        r.x = b.x * s2 * k + f14.x + a.x * s * k;
        r.y = b.y * s2 * k + f14.y + a.y * s * k;
        r.z = b.z * s2 * k + f14.z + a.z * s * k;
        r.w = 1.0f;
        f14 = r;
    }
}
