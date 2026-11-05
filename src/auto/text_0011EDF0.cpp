/* 14 functions from 0x0011EDF0 to 0x0011FDF0, found by Ghidra. */
#include "common.h"

float func_0014F510(float x);
float func_0014F550(float x);
float func_0001E960(float x);
void func_0011F010(int a0, float x, float y, float z, int a4, int a5);
void func_0011F400(int a0, int a1, int a2, int a3, int a4, int a5);
void func_0011ACC0(void *out, void *a, void *b);

struct S_0011F4B0_V4 {
    float x, y, z, w;
};

void func_0011F4B0(float *out, S_0011F4B0_V4 *pos, float *m);

struct S_0011F5A0_V3 {
    int x, y, z;
};
extern float D_002B9348;
extern float D_002AB30C;

struct V4_0011EE50 {
    float x;
    float y;
    float z;
    float w;
};

static float fabs_0011EE50(float x)
{
    volatile int tmp;
    tmp = *(int *)&x & 0x7fffffff;
    return *(float *)&tmp;
}

struct C_0011EDF0 {
    float x;
    float y;
    float z;
    float w;
    C_0011EDF0 *func_0011EDF0(s16 *p);
};

C_0011EDF0 *C_0011EDF0::func_0011EDF0(s16 *p)
{
    x = (float)p[0] * D_002AB30C * D_002B9348;
    y = (float)p[1] * D_002AB30C * D_002B9348;
    z = (float)p[2] * D_002AB30C * D_002B9348;
    w = 1.0f;
    return this;
}

void func_0011EE50(V4_0011EE50 *out, V4_0011EE50 *in)
{
    in->x = fabs_0011EE50(in->x);
    in->y = fabs_0011EE50(in->y);
    in->z = fabs_0011EE50(in->z);
    in->w = fabs_0011EE50(in->w);
    *out = *in;
}

void func_0011F400(int a0, int a1, int a2, int a3, int a4, int a5)
{
    float x = *(float *)&a1;
    float y = *(float *)&a2;
    float z = *(float *)&a3;
    float r = func_0001E960(z * z + y * y + x * x);

    func_0011F010(a0, x * r, y * r, z * r, a5, a4);
}

void func_0011F460(int a0, int a1, int a2, int a3, float angle)
{
    float s = func_0014F510(angle);
    float c = func_0014F550(angle);
    func_0011F400(a0, a1, a2, a3, *(int *)&s, *(int *)&c);
}

void func_0011F4B0(float *out, S_0011F4B0_V4 *pos, float *m)
{
    S_0011F4B0_V4 v = *pos;
    float x = v.x - m[3];
    float y = v.y - m[7];
    float z = v.z - m[11];

    out[0] = x * m[0] + y * m[4] + z * m[8];
    out[1] = x * m[1] + y * m[5] + z * m[9];
    out[2] = x * m[2] + y * m[6] + z * m[10];
}

void func_0011F540(S_0011F4B0_V4 *out, S_0011F4B0_V4 pos, float *m)
{
    S_0011F4B0_V4 r;

    r.z = 0.0f;
    r.y = 0.0f;
    r.x = 0.0f;
    r.w = 1.0f;
    func_0011F4B0(&r.x, &pos, m);
    *out = r;
}

void func_0011F5A0(void *m, int a, int b, int c, int d, int e)
{
    __declspec(align(16)) float tmp[16];
    int saved[3];
    int *mi = (int *)m;

    saved[0] = mi[3];
    saved[1] = mi[7];
    saved[2] = mi[11];
    func_0011F400((int)tmp, a, b, c, d, e);
    func_0011ACC0(m, tmp, m);
    mi[3] = saved[0];
    mi[7] = saved[1];
    mi[11] = saved[2];
}

