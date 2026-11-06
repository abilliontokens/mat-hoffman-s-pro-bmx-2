/* 1 function from 0x00124760 to 0x00125540, found by Ghidra. */
#include "common.h"

struct Vec4 {
    float x, y, z, w;
    Vec4() { x = 0; y = 0; z = 0; w = 1.0f; }
    Vec4(float ax, float ay, float az) { x = ax; y = ay; z = az; w = 1.0f; }
};

extern float D_002755E8;
extern float D_00275460;
void func_0011EFA0(Vec4 *out, Vec4 *in);

static inline void EdgeEval(Vec4 &P, Vec4 &N, float *v0, float *v1, float *n0, float *n1, float *n, float t)
{
    float mx = (n1[0] + n0[0]) * D_002755E8;
    float my = (n1[1] + n0[1]) * D_002755E8;
    float mz = (n1[2] + n0[2]) * D_002755E8;
    float d = (my * n[1] + mx * n[0] + mz * n[2]);
    float rx, ry, rz, s;
    d = d + d;
    rx = n[0] * d - mx;
    ry = n[1] * d - my;
    rz = n[2] * d - mz;
    s = D_00275460 - t;
    P = Vec4(v1[0] * t + v0[0] * s, v1[1] * t + v0[1] * s, v1[2] * t + v0[2] * s);
    N = Vec4(rx * t * s + v0[0] * s * s + n1[0] * t, ry * t * s + n0[1] * s * s + n1[1] * t, rz * t * s + n0[2] * s * s + n1[2] * t);
}
