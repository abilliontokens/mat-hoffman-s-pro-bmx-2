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
