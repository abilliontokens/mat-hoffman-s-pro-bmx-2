/* 6 functions from 0x00178C60 to 0x00179B40, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

extern int D_00288ED4;
int func_001B2CB0(int a);
void *func_001E8A44(int size);
unsigned int func_00177370(void *a, void *b, int c, int d, int e, int f, int g, int h);
unsigned int func_00178180(void *a, void *b, int c, int d, int e, int f);
unsigned int func_00177CA0(void *a, void *b, int c, int d, int e, int f, int g, int h);
unsigned int func_00176CD0(void *a, void *b, int c, int d, int e, int f);
unsigned int func_00177780(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_00178AE0(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_001780F0(void *a, void *b, int c, int d, int e, int f);
unsigned int func_001774E0(void *a, void *b, int c, int d, int e, int f, int g, int h);
unsigned int func_00177E50(void *a, void *b, int c, int d, int e, int f, int g, int h);
unsigned int func_00178040(void *a, void *b, int c, int d, int e, int f);
unsigned int func_00177F50(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_00178990(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_00178330(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_00177650(void *a, void *b, int c, int d, int e, int f, int g, int h);
unsigned int func_001782B0(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_00178210(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_001779C0(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_00177AB0(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_00177BA0(void *a, void *b, int c, int d, int e, int f, int g, int h);
unsigned int func_00176630(void *a, int b, int c, int d, int e, int f, void *g, int h, int i, int j, int k);
unsigned int func_00176D60(void *a, void *b, int c, int d, int e, int f);
unsigned int func_00177000(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_001785C0(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_00178470(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_00178540(void *a, void *b, int c, int d, int e, int f);
unsigned int func_001783B0(void *a, void *b, int c, int d, int e, int f);
unsigned int func_00176EA0(void *a, void *b, int c, int d, int e, int f, int g);
unsigned int func_00178890(void *a, void *b, int c, int d, int e, int f, int g, int h);

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

static __forceinline Vec4 make_179950(float x, float y, float z) {
    Vec4 r;
    r.x = x; r.y = y; r.z = z; r.w = 1.0f;
    return r;
}

static __forceinline void sub_179950(float *out, Vec4 *a, Vec4 *b)
{
    float z = a->z - b->z;
    float y = a->y - b->y;
    float x = a->x - b->x;
    out[0] = x;
    out[1] = y;
    out[2] = z;
    out[3] = 1.0f;
}

static __forceinline __m128 norm_ps_179950(__m128 v)
{
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_add_ss(_mm_movehl_ps(sq, sq), sq), _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_00288EC0);
    len = _mm_add_ss(len, _mm_and_ps(_mm_cmplt_ss(len, minv), minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_00288EA0)),
                              _mm_sub_ss(_mm_load_ss(&D_00288EB0), _mm_mul_ss(_mm_mul_ss(len, r), r)));
    return _mm_mul_ps(_mm_shuffle_ps(scale, scale, 0), v);
}

static __forceinline void norm_179950(float *out, float *in)
{
    _mm_storeu_ps(out, norm_ps_179950(_mm_loadu_ps(in)));
}
void func_00179370(Vec4 *out, Vec4 *in);

static __forceinline __m128 cross_ps_179950(__m128 va, __m128 vb)
{
    __m128 sa = _mm_shuffle_ps(va, va, 0xc9);
    __m128 sb = _mm_shuffle_ps(vb, vb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    return _mm_shuffle_ps(va, va, 0xc9);
}

static __forceinline Vec4 vecsub2_179950(Vec4 *a, Vec4 *b)
{
    Vec4 r;
    r.x = a->x - b->x;
    r.y = a->y - b->y;
    r.z = a->z - b->z;
    r.w = 1.0f;
    return r;
}

static __forceinline Vec4 vecsub_179950(Vec4 *a, Vec4 *b)
{
    Vec4 r;
    r.z = a->z - b->z;
    r.y = a->y - b->y;
    r.x = a->x - b->x;
    return r;
}

static __forceinline Vec4 vecsubw_179950(Vec4 *a, Vec4 *b)
{
    Vec4 r;
    r.z = a->z - b->z;
    r.y = a->y - b->y;
    r.x = a->x - b->x;
    r.w = 1.0f;
    return r;
}

static __forceinline void cross_179950(float *out, float *a, float *b)
{
    AsmVec3Cross(out, a, b);
}

struct S_1793E0 { Vec4 a, b, c; };

static __forceinline int edge_1793E0(Vec4 *p, Vec4 *q, Vec4 *r, Vec4 *n)
{
    S_1793E0 v;
    Vec4 t;
    t.x = q->x - p->x;
    t.y = q->y - p->y;
    t.z = q->z - p->z;
    t.w = 1.0f;
    v.a = t;
    t.x = r->x - p->x;
    t.y = r->y - p->y;
    t.z = r->z - p->z;
    t.w = 1.0f;
    v.b = t;
    cross_179950(&v.c.x, &v.a.x, &v.b.x);
    float d = v.c.y * n->y + v.c.x * n->x + v.c.z * n->z;
    return *(int *)&d >= 0;
}

int func_00178C60(void *a, void *b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m)
{
    void *dst = a;
    int flag = 0;
    if (m != 0) {
        int es = func_001B2CB0(g);
        dst = func_001E8A44(es * d * e);
        if (dst == 0)
            return 0;
    }
    switch (h) {
    case 0x235:
        switch (g) {
        case 0x235: func_00177370(dst, b, c, d, e, f, 0, 2); break;
        case 0x22b: func_00178180(dst, b, c, d, e, f); break;
        case 0x8: func_00177CA0(dst, b, c, d, e, f, i, j); break;
        case 0x378: func_00176CD0(dst, b, c, d, e, f); break;
        case 0x613: func_00178AE0(dst, b, c, d, e, f, l); break;
        case 0x22b8: func_00177780(dst, b, c, d, e, f, l); break;
        default: break;
        }
        break;
    case 0x22b:
        switch (g) {
        case 0x235: func_001780F0(dst, b, c, d, e, f); break;
        case 0x22b: func_001774E0(dst, b, c, d, e, f, 0, 2); break;
        case 0x8: func_00177E50(dst, b, c, d, e, f, i, j); break;
        case 0x378: func_00178040(dst, b, c, d, e, f); break;
        case 0x613: func_00177F50(dst, b, c, d, e, f, l); break;
        case 0x22b8: func_00178990(dst, b, c, d, e, f, l); break;
        default: break;
        }
        break;
    case 0x8:
        switch (g) {
        case 0x22b: func_00178330(dst, b, c, d, e, f, j); break;
        case 0x235: func_00177650(dst, b, c, d, e, 0, f, j); break;
        case 0x8: func_001782B0(dst, b, c, d, e, f, j); break;
        case 0x378: func_00178210(dst, b, c, d, e, f, j); break;
        default: break;
        }
        break;
    case 0x378:
        switch (g) {
        case 0x235: func_001779C0(dst, b, c, d, e, f, i); break;
        case 0x22b: func_00177AB0(dst, b, c, d, e, f, i); break;
        case 0x8: func_00177BA0(dst, b, c, d, e, f, i, j); break;
        case 0x378:
            if (i == 0)
                func_00176D60(dst, b, c, d, e, f);
            else
                func_00176630(b, 0x378, c, d, f, e, dst, 0, 0, 0, 0);
            break;
        case 0x613: func_00177000(dst, b, c, d, e, f, l); flag = 1; break;
        case 0x22b8: func_001785C0(dst, b, c, d, e, f, l); break;
        default: break;
        }
        break;
    case 0x22b8:
        switch (g) {
        case 0x613: func_00178470(dst, b, c, d, e, f, k); break;
        case 0x378: func_00178540(dst, b, c, d, e, f); break;
        case 0x115c: func_001783B0(dst, b, c, d, e, f); break;
        case 0x22b8: func_00176EA0(dst, b, c, d, e, f, 0); break;
        default: break;
        }
        break;
    case 0x115c:
        switch (g) {
        case 0x235: func_00178890(dst, b, c, d, e, f, i, j); break;
        default: break;
        }
        break;
    default:
        break;
    }
    return flag;
}

void func_00179370(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

int func_001793E0(Vec4 *a0, Vec4 *a1, Vec4 *a2, Vec4 *a3, Vec4 *a4, Vec4 *a5)
{
    if (!edge_1793E0(a2, a3, a0, a1)) return 0;
    if (!edge_1793E0(a3, a4, a0, a1)) return 0;
    if (!edge_1793E0(a4, a5, a0, a1)) return 0;
    return edge_1793E0(a5, a2, a0, a1);
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
 float d1[3]={v24[2].x-v24[0].x,v24[2].y-v24[0].y,v24[2].z-v24[0].z};
 float d2[4]={v24[3].x-v24[1].x,v24[3].y-v24[1].y,v24[3].z-v24[1].z,v24[3].w-v24[1].w};
 float a=AsmSqrtF((d1[1]*d1[1]+d1[0]*d1[0])+d1[2]*d1[2]);
 float b=AsmSqrtF((d2[1]*d2[1]+d2[0]*d2[0])+d2[2]*d2[2]);
 fB4=AsmMaxF(a,b);
}

#pragma optimize("y", on)
void C_00179820::func_00179950(void) {
    Vec4 b, u;
    int i;
    sub_179950(&u.x, &v24[1], &v24[0]);
    sub_179950(&b.x, &v24[2], &v24[0]);
    AsmVec3Cross(&v64.x, &u.x, &b.x);
    func_00179370(&v64, &v64);
    for (i = 0; i < 4; i++) {
        u = vecsub2_179950(&v24[(i + 1) % 4], &v24[i]);
        AsmVec3Cross(&v74[i].x, &u.x, &v64.x);
        AsmVec3Normalize(&v74[i].x, &v74[i].x);
    }
}
#pragma optimize("", on)
