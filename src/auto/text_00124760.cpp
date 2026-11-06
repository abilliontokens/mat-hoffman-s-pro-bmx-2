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
