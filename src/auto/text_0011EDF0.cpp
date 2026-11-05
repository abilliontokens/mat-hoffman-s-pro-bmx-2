/* 14 functions from 0x0011EDF0 to 0x0011FDF0, found by Ghidra. */
#include "common.h"

float func_0014F510(float x);
float func_0014F550(float x);
void func_0011F400(int a0, int a1, int a2, int a3, int a4, int a5);
extern float D_002B9348;
extern float D_002AB30C;

struct C_0011EDF0 {
    float x;
    float y;
    float z;
    float w;
    void func_0011EDF0(s16 *p);
};

void func_0011F460(int a0, int a1, int a2, int a3, float angle)
{
    float s = func_0014F510(angle);
    float c = func_0014F550(angle);
    func_0011F400(a0, a1, a2, a3, *(int *)&s, *(int *)&c);
}
