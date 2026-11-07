/* 2 functions from 0x00122730 to 0x001236A0, found by Ghidra. */
#include "common.h"

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() { x = y = z = 0.0f; w = 1.0f; }
};

void func_00030AC0(float *out, float *v, float *m);

static __forceinline float DistSq_00122730(const float *a, const float *b)
{
    float dx = b[0] - a[0];
    float dy = b[1] - a[1];
    float dz = b[2] - a[2];
    return dx * dx + dy * dy + dz * dz;
}

struct S_00122810_V4 {
    float x, y, z, w;
};
struct S_00122810_V3 {
    float x, y, z, w;
    S_00122810_V3() { z = 0; y = 0; x = 0; }
    S_00122810_V3(float a, float b, float c) { x = a; y = b; z = c; }
    S_00122810_V3 operator+(const S_00122810_V3 &o) const { return S_00122810_V3(x + o.x, y + o.y, z + o.z); }
    S_00122810_V3 operator-(const S_00122810_V3 &o) const { return S_00122810_V3(x - o.x, y - o.y, z - o.z); }
    S_00122810_V3 operator*(float s) const { return S_00122810_V3(x * s, y * s, z * s); }
};
struct S_00122810_Box {
    S_00122810_V4 min;
    S_00122810_V4 max;
};
void func_0011F540(S_00122810_V3 *out, S_00122810_V4 pos, float *m);
extern float D_002755E8;
extern volatile float D_00275544;
void func_0011EFA0(float *out, float *in);
S_00122810_V3 *func_0001E9B0(S_00122810_V3 *out, S_00122810_V3 *a, S_00122810_V3 *b);
static __forceinline float Dot_00122810(const S_00122810_V3 &a, const S_00122810_V3 &b)
{
    return a.y * b.y + a.x * b.x + a.z * b.z;
}
static __forceinline float Fabs_00122810(volatile float f)
{
    volatile float result;
    *(int *)&result = *(volatile int *)&f & 0x7fffffff;
    return result;
}

int func_00122730(float *p1, float r1, float *m1, float *p2, float r2, float *m2)
{
    Vec4 a;
    Vec4 b;
    float *q2;
    float *q1;

    if (m1 != 0) {
        q1 = &a.x;
        func_00030AC0(&a.x, p1, m1);
    } else {
        q1 = p1;
    }
    if (m2 != 0) {
        q2 = &b.x;
        func_00030AC0(&b.x, p2, m2);
    } else {
        q2 = p2;
    }
    float sum = r1 + r2;
    float dx = q2[0] - q1[0];
    float dy = q2[1] - q1[1];
    float dz = q2[2] - q1[2];
    float dist = dx * dx + dy * dy + dz * dz;
    if (dist <= sum * sum) {
        return 1;
    }
    return 0;
}

int func_00122810(float *p, float *half, S_00122810_Box *box, float eps, float unused, float *m)
{
    S_00122810_V3 a;
    S_00122810_V3 b;

    func_0011F540(&a, box->min, m);
    func_0011F540(&b, box->max, m);
    a.x -= p[0];
    a.y -= p[1];
    a.z -= p[2];
    b.x -= p[0];
    b.y -= p[1];
    b.z -= p[2];
    S_00122810_V3 c = (b + a) * D_002755E8;
    S_00122810_V3 h = c - a;
    if (Fabs_00122810(h.x) + half[0] + eps < Fabs_00122810(c.x)) {
        return 0;
    }
    if (Fabs_00122810(h.y) + half[1] + eps < Fabs_00122810(c.y)) {
        return 0;
    }
    if (Fabs_00122810(h.z) + half[2] + eps < Fabs_00122810(c.z)) {
        return 0;
    }
    return 1;
}

