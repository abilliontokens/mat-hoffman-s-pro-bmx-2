/* 4 functions from 0x001217F0 to 0x00122730, found by Ghidra. */
#include "common.h"
struct V4_001225C0 {
    float x, y, z, w;
};

extern float D_00275544;

static inline float dot_001225C0(const V4_001225C0 &a, const V4_001225C0 &b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

static inline V4_001225C0 sub_001225C0(const V4_001225C0 &a, const V4_001225C0 &b)
{
    V4_001225C0 t;
    t.x = a.x - b.x;
    t.y = a.y - b.y;
    t.z = a.z - b.z;
    t.w = 1.0f;
    return t;
}
extern "C" void func_0011F4B0(float *out, V4_001225C0 *pos, float *m);
extern "C" V4_001225C0 *func_0011EE50(V4_001225C0 *out, V4_001225C0 *in);
extern "C" V4_001225C0 *func_0011EEE0(V4_001225C0 *out, V4_001225C0 *a, V4_001225C0 *b);
