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

int func_00122730(float *p1, float r1, float *m1, float *p2, float r2, float *m2)
{
    Vec4 a;
    Vec4 b;
    float dz;
    float dy;
    float dx;
    float sum;
    float rr;
    float *q2;
    float *q1;

    a.z = 0.0f;
    a.y = 0.0f;
    a.x = 0.0f;
    a.w = 1.0f;
    b.z = 0.0f;
    b.y = 0.0f;
    b.x = 0.0f;
    b.w = 1.0f;
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
    sum = r1 + r2;
    rr = sum * sum;
    dx = q2[0] - q1[0];
    dy = q2[1] - q1[1];
    dz = q2[2] - q1[2];
    if (dz * dz + dy * dy + dx * dx <= rr) {
        return 1;
    }
    return 0;
}
