/* 4 functions from 0x001217F0 to 0x00122730, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
struct V4_001225C0 {
    float x, y, z, w;
};

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

extern "C" int func_00122090(float *center, float *ext, float *p0, float *p1, float *m)
{
    V4_001225C0 a = { 0.0f, 0.0f, 0.0f, 1.0f };
    V4_001225C0 b = { 0.0f, 0.0f, 0.0f, 1.0f };
    V4_001225C0 mid, d, ad, e;
    float f;
    int i;

    xform_00122090(&a.x, p0, m);
    xform_00122090(&b.x, p1, m);
    mid.w = 1.0f;
    d.w = 1.0f;
    a.x -= center[0];
    a.y -= center[1];
    a.z -= center[2];
    b.x -= center[0];
    b.y -= center[1];
    b.z -= center[2];
    mid.x = (b.x + a.x) * D_002755E8;
    mid.y = (b.y + a.y) * D_002755E8;
    mid.z = (b.z + a.z) * D_002755E8;
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

