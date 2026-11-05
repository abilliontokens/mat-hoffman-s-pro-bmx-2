/* 4 functions from 0x00126DD0 to 0x00127DD0, found by Ghidra. */
#include "common.h"

void func_00126A80(float *verts, int count, float *center, float *extent, float *volume, float *radius, float *matrix);

float func_00127190(float *verts, int count)
{
    float center[4];
    float extent[4];
    float volume;
    float radius;
    extent[2] = 0.0f;
    extent[1] = 0.0f;
    extent[0] = 0.0f;
    extent[3] = 1.0f;
    func_00126A80(verts, count, center, extent, &volume, &radius, 0);
    return volume;
}
