/* 5 functions from 0x0011FDF0 to 0x00120B20, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

static __forceinline float Min_0011FDF0(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_0011FDF0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

extern float D_00275544;

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
