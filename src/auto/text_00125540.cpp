/* 1 function from 0x00125540 to 0x00125F00, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern void **D_002B92F4;
extern float D_00275544;
extern float D_00275460;
extern int D_002B9344;

struct V4_00125540 {
    float x, y, z, w;
    V4_00125540() { x = y = z = 0.0f; w = 1.0f; }
    V4_00125540(float px, float py, float pz) { x = px; y = py; z = pz; w = 1.0f; }
    __forceinline V4_00125540 &operator=(const V4_00125540 &v) {
        ((int *)this)[0] = ((const volatile int *)&v)[0];
        ((int *)this)[1] = ((const volatile int *)&v)[1];
        ((int *)this)[2] = ((const volatile int *)&v)[2];
        ((int *)this)[3] = ((const volatile int *)&v)[3];
        return *this;
    }
};

void func_0011F0E0(V4_00125540 *a, V4_00125540 *b, V4_00125540 *c, unsigned short *indices, void **data);
void func_0011F210(V4_00125540 *a, V4_00125540 *b, V4_00125540 *c, unsigned short *indices, void **data);
void func_00123F20(V4_00125540 *outNormal, V4_00125540 *outHit, V4_00125540 *n, V4_00125540 *a, V4_00125540 *b, V4_00125540 *c, V4_00125540 *a2, V4_00125540 *b2, V4_00125540 *c2);
void func_00124760(V4_00125540 *outNormal, V4_00125540 *outHit, V4_00125540 *n, V4_00125540 *a, V4_00125540 *b, V4_00125540 *c, V4_00125540 *a2, V4_00125540 *b2, V4_00125540 *c2);
void func_0011EFA0(float *out, float *in);

static __forceinline void Cross_00125540(float * volatile out, float * volatile a, float * volatile b)
{
    float *pa = a, *pb = b;
    __m128 va = _mm_loadu_ps(pa);
    __m128 vb = _mm_loadu_ps(pb);
    __m128 sa = va, sb = vb;
    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(out, va);
}

static __forceinline float Abs_00125540(float f)
{
    int i = *(int *)&f & 0x7fffffff;
    return *(float *)&i;
}

static __forceinline int InTri2D_00125540(float au, float av, float bu, float bv, float cu, float cv, float pu, float pv)
{
    float u1, u2;

    if (pv <= av && pv >= bv) {
        if (pv > cv) {
            u1 = (bu - au) * (pv - av) / (bv - av) + au;
            u2 = (cu - au) * (pv - av) / (cv - av) + au;
        } else {
            u1 = (bu - au) * (pv - av) / (bv - av) + au;
            u2 = (cu - bu) * (pv - bv) / (cv - bv) + bu;
        }
    } else if (pv <= bv && pv >= av) {
        if (pv <= cv) {
            u1 = (bu - au) * (pv - av) / (bv - av) + au;
            u2 = (cu - au) * (pv - av) / (cv - av) + au;
        } else {
            u1 = (bu - au) * (pv - av) / (bv - av) + au;
            u2 = (cu - bu) * (pv - bv) / (cv - bv) + bu;
        }
    } else if (pv <= cv && pv >= bv) {
        if (pv > av) {
            u1 = (cu - bu) * (pv - bv) / (cv - bv) + bu;
            u2 = (cu - au) * (pv - av) / (cv - av) + au;
        } else {
            u1 = (bu - au) * (pv - av) / (bv - av) + au;
            u2 = (cu - bu) * (pv - bv) / (cv - bv) + bu;
        }
    } else if (pv <= bv && pv >= cv) {
        if (pv <= av) {
            u1 = (cu - au) * (pv - av) / (cv - av) + au;
            u2 = (cu - bu) * (pv - bv) / (cv - bv) + bu;
        } else {
            u1 = (bu - au) * (pv - av) / (bv - av) + au;
            u2 = (cu - bu) * (pv - bv) / (cv - bv) + bu;
        }
    } else if (pv <= av && pv >= cv) {
        if (pv > bv) {
            u1 = (bu - au) * (pv - av) / (bv - av) + au;
            u2 = (cu - au) * (pv - av) / (cv - av) + au;
        } else {
            u1 = (cu - au) * (pv - av) / (cv - av) + au;
            u2 = (cu - bu) * (pv - bv) / (cv - bv) + bu;
        }
    } else if (pv <= cv && pv >= av) {
        if (pv <= bv) {
            u1 = (bu - au) * (pv - av) / (bv - av) + au;
            u2 = (cu - au) * (pv - av) / (cv - av) + au;
        } else {
            u1 = (cu - bu) * (pv - bv) / (cv - bv) + bu;
            u2 = (cu - au) * (pv - av) / (cv - av) + au;
        }
    } else {
        return 0;
    }
    return (pu <= u1 && pu >= u2) || (pu <= u2 && pu >= u1);
}
