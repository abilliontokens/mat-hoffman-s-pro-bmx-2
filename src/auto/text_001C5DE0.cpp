/* 9 functions from 0x001C5DE0 to 0x001C6DA0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

struct S_001C6820_Pair {
    f32 time;
    int value;
};

struct S_001C6820_Elem {
    char pad0[0x4C];
    S_001C6820_Pair *pairs;
    int count;
    char pad54[4];
};

struct C_001C6820 {
    char pad0[0xC0];
    S_001C6820_Elem *elems;
    int idx;
    int func_001C6820(f32 param_1);
};

struct C_001C67C0VT {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void func_vtbl3(int a, Vec4 *out);
};

struct C_001C67C0 {
    char pad0[0x10];
    C_001C67C0VT *obj10;
    void func_001C67C0(Vec4 *out, int param_2);
};

void func_001C63F0(Vec4 *out, Vec4 *vin, f32 *m)
{
    Vec4 q;
    Vec4 *pq = &q;
    u32 *p = (u32 *)pq;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    __m128 v = _mm_loadu_ps(&vin->x);
    __m128 r0 = _mm_load_ps(m);
    _mm_storeh_pi((__m64 *)&pq->z, v);
    __m128 r1 = _mm_load_ps(m + 4);
    pq->w = 1.0f;
    __m128 r2 = _mm_load_ps(m + 8);
    v = _mm_loadh_pi(v, (__m64 const *)&pq->z);
    r0 = _mm_mul_ps(r0, v);
    r1 = _mm_mul_ps(r1, v);
    r2 = _mm_mul_ps(r2, v);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 t;
    t = _mm_movehl_ps(t, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, t);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&pq->x, lo);
    pq->w = 1.0f;
    out->x = q.x;
    out->y = q.y;
    out->z = q.z;
    out->w = q.w;
}

void C_001C67C0::func_001C67C0(Vec4 *out, int param_2)
{
    Vec4 local;
    u32 *p = (u32 *)&local;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    this->obj10->func_vtbl3(param_2, &local);
    out->x = local.x;
    out->y = local.y;
    out->z = local.z;
    out->w = local.w;
}

int C_001C6820::func_001C6820(f32 param_1)
{
    S_001C6820_Elem *e = &this->elems[this->idx];
    S_001C6820_Pair *p = e->pairs;
    int count = e->count;
    int result = 0;
    int i;
    for (i = 0; i < count; i++, p++) {
        if (param_1 > p->time) {
            result = p->value;
        } else {
            break;
        }
    }
    return result;
}
