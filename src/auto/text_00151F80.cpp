/* 5 functions from 0x00151F80 to 0x00152E30, found by Ghidra. */
#include "common.h"
struct Vec1521 { float x, y, z, w; Vec1521() { x = y = z = 0; w = 1; } };
struct C1521 { char pad[0x34]; float height; void func_001521D0(Vec1521*, Vec1521*); };
extern int D_002B9110, D_002B911C;
extern "C" void func_00134DE0(Vec1521*, Vec1521*, Vec1521*, int, int, int, int, int, int);

void C1521::func_001521D0(Vec1521* pos, Vec1521* out)
{
 float h = 0;
 Vec1521 result;
 Vec1521 hit;
 Vec1521 line[2];
 line[0] = *pos;
 line[0].y += height;
 line[1] = *pos;
 hit.x = hit.y = hit.z = 0; hit.w = 1;
 result.x = result.y = result.z = 0; result.w = 1;
 line[1].y = 0;
 func_00134DE0(line, &hit, &result, 0, 0, 0, -1, 0, 1);
 h = (D_002B9110 | D_002B911C) ? hit.y : h;
 if (out) *out = result;
 pos->y = h;
}
