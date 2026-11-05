/* 4 functions from 0x00126DD0 to 0x00127DD0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
extern float D_002755E8;

struct S_00126DD0_Vec { float x, y, z, w; S_00126DD0_Vec() { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; } };
struct S_00126DD0_Mat { float m[4][4]; };
struct S_00126DD0_Tri { int idx[3]; float f[10]; };

static inline void Xform_00126DD0(S_00126DD0_Vec *out, const S_00126DD0_Mat *mat, const float *v)
{
    __m128 t = _mm_loadu_ps(v);
    _mm_storeh_pi((__m64 *)&out->z, t);
    out->w = 1.0f;
    t = _mm_loadh_pi(t, (__m64 *)&out->z);
    __m128 r0 = _mm_mul_ps(_mm_load_ps(mat->m[0]), t);
    __m128 r1 = _mm_mul_ps(_mm_load_ps(mat->m[1]), t);
    __m128 r2 = _mm_mul_ps(_mm_load_ps(mat->m[2]), t);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 junk = _mm_movehl_ps(r2, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, junk);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&out->x, lo);
    out->w = 1.0f;
}

static __forceinline float Sqrt_00126DD0(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x)); return r; }
static __forceinline float Max_00126DD0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Abs_00126DD0(float f) { int i = *(int *)&f & 0x7fffffff; return *(float *)&i; }

void func_00126A80(float *verts, int count, float *center, float *extent, float *volume, float *radius, float *matrix);

float func_00127190(float *verts, int count)
{
    float center[4];
    float extent[4];
    float volume;
    float radius;
    extent[2] = 0.0f;
    extent[1] = 0.0f;
    extent[0] = 0.0f;
    extent[3] = 1.0f;
    func_00126A80(verts, count, center, extent, &volume, &radius, 0);
    return volume;
}
