/* 2 functions from 0x0009CAD0 to 0x0009DA90, found by Ghidra. */
#include "common.h"

extern float D_00275460;

static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
