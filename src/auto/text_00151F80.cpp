/* 5 functions from 0x00151F80 to 0x00152E30, found by Ghidra. */
#include "common.h"
struct Vec1521 { float x, y, z, w; Vec1521() { x = y = z = 0; w = 1; } };
struct C1521 { char pad[0x34]; float height; void func_001521D0(Vec1521*, Vec1521*); };
extern int D_002B9110, D_002B911C;
extern "C" void func_00134DE0(Vec1521*, Vec1521*, Vec1521*, int, int, int, int, int, int);
