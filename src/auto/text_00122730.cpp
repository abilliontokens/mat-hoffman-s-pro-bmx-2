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
static __forceinline float Fabs_00122810(volatile float f)
{
    int i = *(volatile int *)&f & 0x7fffffff;
    return *(float *)&i;
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
    return dx * dx + dy * dy + dz * dz <= sum * sum ? 1 : 0;
}

int func_00122810(float *p, float *half, S_00122810_Box *box, float eps, float unused, float *m)
{
    S_00122810_V3 a;
    S_00122810_V3 b;
    float cx, cy, cz;
    float hx, hy, hz;

    func_0011F540(&a, box->min, m);
    func_0011F540(&b, box->max, m);
    a.x -= p[0];
    a.y -= p[1];
    a.z -= p[2];
    b.x -= p[0];
    b.y -= p[1];
    b.z -= p[2];
    cx = (b.x + a.x) * D_002755E8;
    cy = (b.y + a.y) * D_002755E8;
    cz = (b.z + a.z) * D_002755E8;
    hx = cx - a.x;
    hy = cy - a.y;
    hz = cz - a.z;
    if (Fabs_00122810(hx) + half[0] + eps < Fabs_00122810(cx)) {
        return 0;
    }
    if (Fabs_00122810(hy) + half[1] + eps < Fabs_00122810(cy)) {
        return 0;
    }
    if (Fabs_00122810(hz) + half[2] + eps < Fabs_00122810(cz)) {
        return 0;
    }
    return 1;
}

