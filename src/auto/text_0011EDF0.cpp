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
extern float D_002B9348;
extern float D_002AB30C;

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

void func_0011F400(int a0, int a1, int a2, int a3, int a4, int a5)
{
    float x = *(float *)&a1;
    float y = *(float *)&a2;
    float z = *(float *)&a3;
    float r = func_0001E960(x * x + y * y + z * z);

    func_0011F010(a0, x * r, y * r, z * r, a5, a4);
}

void func_0011F460(int a0, int a1, int a2, int a3, float angle)
{
    float s = func_0014F510(angle);
    float c = func_0014F550(angle);
    func_0011F400(a0, a1, a2, a3, *(int *)&s, *(int *)&c);
}
