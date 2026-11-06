/* 4 functions from 0x001217F0 to 0x00122730, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
struct V4_001225C0 {
    float x, y, z, w;
};

extern float D_00275544;

static inline float dot_001225C0(const V4_001225C0 &a, const V4_001225C0 &b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

static __forceinline V4_001225C0 sub_001225C0(const V4_001225C0 *a, const V4_001225C0 *b)
{
    V4_001225C0 t = { a->x - b->x, a->y - b->y, a->z - b->z, 1.0f };
    return t;
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
/* 4x3 matrix * (in.xyz,in.w) as one nested expression: no named __m128, so no aligned frame. */
#define XF_V(in, o)   _mm_loadh_pi(_mm_loadu_ps(in), (__m64 *)((o) + 2))
#define XF_R(m, k, v) _mm_mul_ps(_mm_load_ps((m) + 4 * (k)), v)
#define XF_T(m, v)    _mm_unpackhi_ps(XF_R(m, 0, v), XF_R(m, 1, v))
#define XF_A(m, v)    _mm_add_ps(_mm_unpacklo_ps(XF_R(m, 0, v), XF_R(m, 1, v)), XF_T(m, v))
#define XF_B(m, v)    _mm_add_ps(XF_R(m, 2, v), _mm_movehl_ps(XF_R(m, 2, v), XF_R(m, 2, v)))
#define XF_RES(m, v)  _mm_add_ps(_mm_movelh_ps(XF_A(m, v), XF_B(m, v)), _mm_shuffle_ps(_mm_movehl_ps(XF_T(m, v), XF_A(m, v)), XF_B(m, v), 0x14))

V4_001225C0 func_00104A00(const V4_001225C0 &v);
extern "C" V4_001225C0 *func_0011EE50(V4_001225C0 *out, V4_001225C0 *in);
extern "C" V4_001225C0 *func_0011EEE0(V4_001225C0 *out, V4_001225C0 *a, V4_001225C0 *b);

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
