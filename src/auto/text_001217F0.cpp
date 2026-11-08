/* 4 functions from 0x001217F0 to 0x00122730, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
struct V4_001225C0 {
    float x, y, z, w;
};

struct V4s_001217F0 : V4_001225C0 {
    V4s_001217F0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct V4t_001217F0 {
    float x, y, z, w;
    V4t_001217F0(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

extern float D_002B9348;
extern void **D_002B92F4;
extern V4_001225C0 D_002B9350[13];
extern V4_001225C0 D_002A3C3C[3];
void func_0011F0E0(void *a, void *b, void *c, void *indices, void **data);
void func_0001C680(V4_001225C0 *out, V4_001225C0 v, float *m);
void func_0001C680(V4_001225C0 *out, V4t_001217F0 v, float *m);
void func_0011EFA0(float *out, float *in);

extern float D_00275544;
extern float D_002755E8;

static inline float dot_001225C0(const V4_001225C0 &a, const V4_001225C0 &b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

static __forceinline V4_001225C0 sub_001225C0(const V4_001225C0 *a, const V4_001225C0 *b)
{
    V4_001225C0 t;
    t.w = 1.0f;
    t.x = a->x - b->x;
    t.y = a->y - b->y;
    t.z = a->z - b->z;
    return t;
}
struct V4c_001225C0 : V4_001225C0 {
    V4c_001225C0() {}
    V4c_001225C0(const V4c_001225C0 &o)
    {
        x = o.x;
        y = o.y;
        z = o.z;
        w = o.w;
    }
};

static __forceinline V4c_001225C0 subc_001225C0(const V4_001225C0 *a, const V4_001225C0 *b)
{
    V4c_001225C0 t;
    t.x = a->x - b->x;
    t.y = a->y - b->y;
    t.z = a->z - b->z;
    t.w = 1.0f;
    return t;
}

static __forceinline V4_001225C0 &subs_001225C0(V4_001225C0 &a, float f)
{
    a.x -= f;
    a.y -= f;
    a.z -= f;
    return a;
}
extern "C" void func_0011F4B0(float *out, V4_001225C0 *pos, float *m);

static __forceinline void xform_00122090(float *out, const float *in, const float *m)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 r0 = _mm_load_ps(m);
    _mm_storeh_pi((__m64 *)(out + 2), v);
    __m128 r1 = _mm_load_ps(m + 4);
    out[3] = 1.0f;
    __m128 r2 = _mm_load_ps(m + 8);
    v = _mm_loadh_pi(v, (__m64 *)(out + 2));
    r0 = _mm_mul_ps(r0, v);
    r1 = _mm_mul_ps(r1, v);
    r2 = _mm_mul_ps(r2, v);
    __m128 t = r0;
    r0 = _mm_unpacklo_ps(r0, r1);
    t = _mm_unpackhi_ps(t, r1);
    __m128 h = _mm_movehl_ps(r2, r2);
    r0 = _mm_add_ps(r0, t);
    r2 = _mm_add_ps(r2, h);
    t = _mm_movehl_ps(t, r0);
    r0 = _mm_movelh_ps(r0, r2);
    t = _mm_shuffle_ps(t, r2, 0x14);
    r0 = _mm_add_ps(r0, t);
    _mm_storeu_ps(out, r0);
    out[3] = 1.0f;
}
V4_001225C0 func_00104A00(const V4_001225C0 &v);
extern "C" V4_001225C0 *func_0011EE50(V4_001225C0 *out, V4_001225C0 *in);
extern "C" V4_001225C0 *func_0011EEE0(V4_001225C0 *out, V4_001225C0 *a, V4_001225C0 *b);

extern int D_002B9CE4;
extern V4_001225C0 D_002B9CD4, D_002B9CC4, D_002B9CB4, D_002B9CA4, D_002B9C94;
extern V4_001225C0 D_002B9C84, D_002B9C74, D_002B9C64, D_002B9C54, D_002B9C44;
extern "C" int func_001217F0(int a0, int a1, short *tri, float *m, int a4, int a5, float *pos, float *ext)
{
    V4_001225C0 t, r;
    V4_001225C0 *ax;
    float dx, dy, dz, proj, d;
    int i;
    int f;

    f = D_002B9CE4;
    if (!(f & 1)) {
        f |= 1;
        D_002B9CE4 = f;
        D_002B9CD4.z = 0.0f;
        D_002B9CD4.y = 0.0f;
        D_002B9CD4.x = 0.0f;
        D_002B9CD4.w = 1.0f;
    }
    if (!(f & 2)) {
        f |= 2;
        D_002B9CE4 = f;
        D_002B9CC4.z = 0.0f;
        D_002B9CC4.y = 0.0f;
        D_002B9CC4.x = 0.0f;
        D_002B9CC4.w = 1.0f;
    }
    if (!(f & 4)) {
        f |= 4;
        D_002B9CE4 = f;
        D_002B9CB4.z = 0.0f;
        D_002B9CB4.y = 0.0f;
        D_002B9CB4.x = 0.0f;
        D_002B9CB4.w = 1.0f;
    }
    if (!(f & 8)) {
        f |= 8;
        D_002B9CE4 = f;
        D_002B9CA4.z = 0.0f;
        D_002B9CA4.y = 0.0f;
        D_002B9CA4.x = 0.0f;
        D_002B9CA4.w = 1.0f;
    }
    if (!(f & 0x10)) {
        f |= 0x10;
        D_002B9CE4 = f;
        D_002B9C94.z = 0.0f;
        D_002B9C94.y = 0.0f;
        D_002B9C94.x = 0.0f;
        D_002B9C94.w = 1.0f;
    }
    if (!(f & 0x20)) {
        f |= 0x20;
        D_002B9CE4 = f;
        D_002B9C84.z = 0.0f;
        D_002B9C84.y = 0.0f;
        D_002B9C84.x = 0.0f;
        D_002B9C84.w = 1.0f;
    }
    if (!(f & 0x40)) {
        f |= 0x40;
        D_002B9CE4 = f;
        D_002B9C74.z = 0.0f;
        D_002B9C74.y = 0.0f;
        D_002B9C74.x = 0.0f;
        D_002B9C74.w = 1.0f;
    }
    if (!(f & 0x80)) {
        f |= 0x80;
        D_002B9CE4 = f;
        D_002B9C64.z = 0.0f;
        D_002B9C64.y = 0.0f;
        D_002B9C64.x = 0.0f;
        D_002B9C64.w = 1.0f;
    }
    if (!(f & 0x100)) {
        f |= 0x100;
        D_002B9CE4 = f;
        D_002B9C54.z = 0.0f;
        D_002B9C54.y = 0.0f;
        D_002B9C54.x = 0.0f;
        D_002B9C54.w = 1.0f;
    }
    if (!(f & 0x200)) {
        f |= 0x200;
        D_002B9CE4 = f;
        D_002B9C44.z = 0.0f;
        D_002B9C44.y = 0.0f;
        D_002B9C44.x = 0.0f;
        D_002B9C44.w = 1.0f;
    }
    func_0011F0E0(&D_002B9C94, &D_002B9C84, &D_002B9C74, tri, D_002B92F4);
    AsmTransformPoint(&D_002B9CD4.x, &D_002B9C94.x, m);
    AsmTransformPoint(&D_002B9CC4.x, &D_002B9C84.x, m);
    AsmTransformPoint(&D_002B9CB4.x, &D_002B9C74.x, m);
    func_0001C680(&D_002B9CA4, V4t_001217F0((float)tri[6] * D_002B9348, (float)tri[7] * D_002B9348, (float)tri[8] * D_002B9348, 1.0f), m);
    dx = D_002B9CD4.x - pos[0];
    dy = D_002B9CD4.y - pos[1];
    dz = D_002B9CD4.z - pos[2];
    ax = D_002B9350;
    for (i = 0; i < 13; i++, ax++) {
        switch (i) {
        case 0:
            *ax = D_002B9CA4;
            break;
        case 1:
            *ax = D_002A3C3C[0];
            break;
        case 2:
            *ax = D_002A3C3C[1];
            break;
        case 3:
            *ax = D_002A3C3C[2];
            break;
        case 4:
            ax->y = -D_002B9C64.z;
            ax->z = D_002B9C64.y;
            break;
        case 5:
            ax->x = D_002B9C64.z;
            ax->z = -D_002B9C64.x;
            break;
        case 6:
            ax->y = D_002B9C64.x;
            ax->x = -D_002B9C64.y;
            break;
        case 7:
            ax->y = -D_002B9C54.z;
            ax->z = D_002B9C54.y;
            break;
        case 8:
            ax->x = D_002B9C54.z;
            ax->z = -D_002B9C54.x;
            break;
        case 9:
            ax->y = D_002B9C54.x;
            ax->x = -D_002B9C54.y;
            break;
        case 10: {
            V4_001225C0 e;
            e.x = D_002B9CB4.x - D_002B9CC4.x;
            e.y = D_002B9CB4.y - D_002B9CC4.y;
            e.z = D_002B9CB4.z - D_002B9CC4.z;
            e.w = 1.0f;
            func_0011EFA0(&D_002B9C44.x, &e.x);
            ax->z = D_002B9C44.y;
            ax->y = -D_002B9C44.z;
            break;
        }
        case 11:
            ax->x = D_002B9C44.z;
            ax->z = -D_002B9C44.x;
            break;
        case 12:
            ax->y = D_002B9C44.x;
            ax->x = -D_002B9C44.y;
            break;
        }
        t.x = ax->x * ext[0];
        t.y = ax->y * ext[1];
        t.z = ax->z * ext[2];
        t.w = 1.0f;
        func_0011EE50((V4_001225C0 *)&r, &t);
        proj = t.z + t.y + t.x;
        d = dx * ax->x + dy * ax->y + dz * ax->z;
        if (i == 0) {
            int bits = *(int *)&d & 0x7fffffff;
            if (*(float *)&bits > proj)
                return 0;
            V4_001225C0 e1;
            e1.x = D_002B9CD4.x - D_002B9CC4.x;
            e1.y = D_002B9CD4.y - D_002B9CC4.y;
            e1.z = D_002B9CD4.z - D_002B9CC4.z;
            e1.w = 1.0f;
            D_002B9C64 = e1;
            V4_001225C0 e2;
            e2.x = D_002B9CD4.x - D_002B9CB4.x;
            e2.y = D_002B9CD4.y - D_002B9CB4.y;
            e2.z = D_002B9CD4.z - D_002B9CB4.z;
            e2.w = 1.0f;
            D_002B9C54 = e2;
        } else {
            float p7 = d - (D_002B9C64.x * ax->x + D_002B9C64.y * ax->y + D_002B9C64.z * ax->z);
            float p8 = d - (D_002B9C54.x * ax->x + D_002B9C54.y * ax->y + D_002B9C54.z * ax->z);
            float lo = AsmMinF(p7, p8);
            if (proj < AsmMinF(d, lo))
                return 0;
            float hi = AsmMaxF(p7, p8);
            if (-proj > AsmMaxF(d, hi))
                return 0;
        }
    }
    return 1;
}

extern "C" int func_00122090(float *center, float *ext, float *p0, float *p1, float *m)
{
    float f;
    int i;
    V4s_001217F0 a, b;
    V4_001225C0 e, mid, ad, d;
    float sx, sy, sz;

    AsmTransformPoint(&a.x, p0, m);
    AsmTransformPoint(&b.x, p1, m);
    mid.w = 1.0f;
    d.w = 1.0f;
    a.x -= center[0];
    a.y -= center[1];
    a.z -= center[2];
    b.x -= center[0];
    b.y -= center[1];
    b.z -= center[2];
    sx = b.x + a.x;
    sy = b.y + a.y;
    sz = b.z + a.z;
    mid.x = sx * D_002755E8;
    mid.y = sy * D_002755E8;
    mid.z = sz * D_002755E8;
    d.x = mid.x - a.x;
    d.y = mid.y - a.y;
    d.z = mid.z - a.z;
    ad = func_00104A00(d);
    e = func_00104A00(mid);
    e.x -= ext[0];
    e.y -= ext[1];
    e.z -= ext[2];
    e.x -= ad.x;
    e.y -= ad.y;
    e.z -= ad.z;
    if (e.x > D_00275544 || e.y > D_00275544 || e.z > D_00275544)
        return 0;
    f = d.z * mid.y - d.y * mid.z;
    i = *(int *)&f & 0x7fffffff;
    if (ad.y * ext[2] + ad.z * ext[1] < *(float *)&i)
        return 0;
    f = mid.x * d.z - d.x * mid.z;
    i = *(int *)&f & 0x7fffffff;
    if (ad.x * ext[2] + ad.z * ext[0] < *(float *)&i)
        return 0;
    f = mid.x * d.y - d.x * mid.y;
    i = *(int *)&f & 0x7fffffff;
    if (ad.x * ext[1] + ad.y * ext[0] < *(float *)&i)
        return 0;
    return 1;
}

extern "C" int func_00122400(float *pa, float *pb, V4_001225C0 *pos, float f, float radius, float *m)
{
    V4_001225C0 v = { 0.0f, 0.0f, 0.0f, 1.0f };

    v.x = m[0] * pos->x + m[1] * pos->y + m[2] * pos->z + m[3];
    v.y = m[4] * pos->x + m[5] * pos->y + m[6] * pos->z + m[7];
    v.z = m[8] * pos->x + m[9] * pos->y + m[10] * pos->z + m[11];
    v.x -= pa[0];
    v.y -= pa[1];
    v.z -= pa[2];

    V4_001225C0 t;
    t.w = 1.0f;
    func_0011EE50(&t, &v);
    t.x -= pb[0];
    t.y -= pb[1];
    t.z -= pb[2];

    V4_001225C0 u = t;
    u.x -= f;
    u.y -= f;
    u.z -= f;
    if (u.x <= D_00275544 && u.y <= D_00275544 && u.z <= D_00275544) {
        func_0011EEE0(&t, &v, (V4_001225C0 *)pb);
        v.x -= t.x;
        v.y -= t.y;
        v.z -= t.z;
        if (v.x * v.x + v.y * v.y + v.z * v.z < radius)
            return 1;
    }
    return 0;
}

int func_001225C0(V4_001225C0 *a0, V4_001225C0 *a1, V4_001225C0 *pos, float r, float maxDist, float *m)
{
    V4_001225C0 v;
    V4_001225C0 *mn;
    float dx, dy, dz;

    v.z = 0.0f;
    v.y = 0.0f;
    v.x = 0.0f;
    v.w = 1.0f;
    func_0011F4B0(&v.x, pos, m);
    v.x -= a0->x;
    v.y -= a0->y;
    v.z -= a0->z;
    {
        V4_001225C0 t;
        func_0011EE50(&t, &v);
    }
    V4_001225C0 e = sub_001225C0(&v, a1);
    subs_001225C0(e, r);
    if (e.x > D_00275544 || e.y > D_00275544 || e.z > D_00275544)
        return 0;
    {
        V4_001225C0 t;
        mn = func_0011EEE0(&t, &v, a1);
    }
    dx = v.x - mn->x;
    dy = v.y - mn->y;
    dz = v.z - mn->z;
    float lenSq = dy * dy;
    lenSq += dz * dz;
    lenSq += dx * dx;
    if (maxDist > lenSq)
        return 1;
    return 0;
}

