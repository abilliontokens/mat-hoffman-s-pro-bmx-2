/* 5 functions from 0x0011FDF0 to 0x00120B20, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

static __forceinline float Min_0011FDF0(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_0011FDF0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

extern float D_00275544;
extern float D_002B9348;
extern void **D_002B92F4;
struct S_0011F4B0_V4 { float x, y, z, w; };
static __forceinline S_0011F4B0_V4 sub_00120470(S_0011F4B0_V4 &a, S_0011F4B0_V4 &b)
{
    S_0011F4B0_V4 r;
    r.x = a.x - b.x; r.y = a.y - b.y; r.z = a.z - b.z; r.w = 1.0f;
    return r;
}
static S_0011F4B0_V4 mul_00120470(S_0011F4B0_V4 &a, float f)
{
    S_0011F4B0_V4 r;
    r.x = a.x * f; r.y = a.y * f; r.z = a.z * f; r.w = 1.0f;
    return r;
}
void func_0011F540(S_0011F4B0_V4 *out, S_0011F4B0_V4 pos, float *m);
void func_0011F0E0(void *a, void *b, void *c, void *indices, void **data);
int func_0011FF30(S_0011F4B0_V4 *p, void *tri);
float func_0011FDF0(void *p, void *a, void *b);
static float fabs_00120470(float v)
{
    volatile float x = v;
    volatile int t = *(volatile int *)&x & 0x7fffffff;
    return *(float *)&t;
}

float func_0011FDF0(float *p, float *a, float *b)
{
    float dx = b[0] - a[0];
    float dy = b[1] - a[1];
    float dz = b[2] - a[2];
    float t = ((p[2] - a[2]) * dz + ((p[0] - a[0]) * dx + (p[1] - a[1]) * dy)) / (dy * dy + dx * dx + dz * dz);
    float ex;
    float ey;
    float ez;
    float r;

    t = Max_0011FDF0(Min_0011FDF0(t, 1.0f), 0.0f);
    ex = p[0] - (t * dx + a[0]);
    ey = p[1] - (dy * t + a[1]);
    ez = p[2] - (dz * t + a[2]);
    _mm_store_ss(&r, _mm_sqrt_ss(_mm_set_ss(ez * ez + ey * ey + ex * ex)));
    return r;
}

int func_001209F0(float *a, float *b, float *p, float r2)
{
    float d[4];
    float s[4];
    float dd, t, t2, ex, ey, ez;
    d[0] = p[0] - a[0];
    d[1] = p[1] - a[1];
    d[2] = p[2] - a[2];
    dd = d[1] * d[1] + (d[0] * d[0] + d[2] * d[2]);
    ex = p[0] - b[0];
    ey = p[1] - b[1];
    ez = p[2] - b[2];
    if (dd <= r2 || ex * ex + ey * ey + ez * ez <= r2)
        return 1;
    s[0] = b[0] - a[0];
    s[1] = b[1] - a[1];
    s[2] = b[2] - a[2];
    t = s[2] * d[2] + (s[0] * d[0] + s[1] * d[1]);
    t2 = t * t;
    if (t < D_00275544)
        return 0;
    if (dd - r2 > t2)
        return 0;
    if (s[0] * s[0] + s[1] * s[1] + s[2] * s[2] > t2)
        return 1;
    return 0;
}
