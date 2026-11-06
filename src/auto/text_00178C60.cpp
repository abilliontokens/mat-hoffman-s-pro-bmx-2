/* 6 functions from 0x00178C60 to 0x00179B40, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>

extern int D_00288ED4;

struct C_00157600 {
    void func_00157600(int a0);
};

struct Vec4 {
    float x;
    float y;
    float z;
    float w;
};

struct C_00179820 {
    void *vtbl;
    char pad4[0x20];
    Vec4 v24[4];
    Vec4 v64;
    Vec4 v74[4];
    float fB4;
    C_00179820 *func_00179820(int a0);
    void func_00179880(void);
    void func_00179950(void);
};

extern float D_00288EC0;
extern float D_00288EB0;
extern float D_00288EA0;

static __forceinline void sub_179950(float *out, Vec4 *a, Vec4 *b)
{
    out[2] = a->z - b->z;
    out[1] = a->y - b->y;
    out[0] = a->x - b->x;
    out[3] = 1.0f;
}

static __forceinline void norm_179950(float *out, float *in)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_00288EC0);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_00288EA0)), _mm_sub_ss(_mm_load_ss(&D_00288EB0), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}
void func_00179370(Vec4 *out, Vec4 *in);

static __forceinline void cross_179950(float *out, float *a, float *b)
{
    __m128 va = _mm_loadu_ps(a);
    __m128 vb = _mm_loadu_ps(b);
    __m128 sa = va;
    __m128 sb = vb;
    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(out, va);
}

static __forceinline int edge_1793E0(Vec4 *p, Vec4 *q, Vec4 *r, Vec4 *n)
{
    Vec4 a;
    Vec4 b;
    Vec4 c;
    Vec4 t;
    t.x = q->x - p->x;
    t.y = q->y - p->y;
    t.z = q->z - p->z;
    t.w = 1.0f;
    a = t;
    t.x = r->x - p->x;
    t.y = r->y - p->y;
    t.z = r->z - p->z;
    t.w = 1.0f;
    b = t;
    cross_179950(&c.x, &a.x, &b.x);
    float d = c.y * n->y + c.x * n->x + c.z * n->z;
    return *(int *)&d >= 0;
}

C_00179820 *C_00179820::func_00179820(int a0) {
    u32 *p;
    int n;

    ((C_00157600 *)this)->func_00157600(a0);
    vtbl = &D_00288ED4;
    p = (u32 *)v24;
    n = 4;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--n != 0);
    p = (u32 *)&v64;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)v74;
    n = 4;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--n != 0);
    return this;
}

void C_00179820::func_00179880(void) {
    float dx1 = v24[2].x - v24[0].x;
    float dy1 = v24[2].y - v24[0].y;
    float dz1 = v24[2].z - v24[0].z;
    float dx2 = v24[3].x - v24[1].x;
    float dy2 = v24[3].y - v24[1].y;
    float dz2 = v24[3].z - v24[1].z;
    float a;
    float b;
    float m;
    _mm_store_ss(&a, _mm_sqrt_ss(_mm_set_ss(dy1 * dy1 + dx1 * dx1 + dz1 * dz1)));
    _mm_store_ss(&b, _mm_sqrt_ss(_mm_set_ss(dy2 * dy2 + dx2 * dx2 + dz2 * dz2)));
    _mm_store_ss(&m, _mm_max_ss(_mm_set_ss(a), _mm_set_ss(b)));
    fB4 = m;
}

