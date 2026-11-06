/* 2 functions from 0x0003D220 to 0x0003D910, found by Ghidra. */
#include "common.h"

struct Obj3D { char pad[0x2cc]; int flag2cc; int func_0003D220(); };

#include <xmmintrin.h>
static __forceinline void S_3D7B0_Round(int *out, float f)
{
    int * volatile p = out;

    *p = _mm_cvtss_si32(*(__m128 *)&f);
}
struct S_3D7B0_Vec4 { float x, y, z, w; };
struct C_3D7B0 {
    char pad0[0x428]; int f428; int f42c; int f430;
    char pad1[0x44c - 0x434]; int f44c; int f450; int f454;
    char pad2[0x45c - 0x458]; int f45c; int f460;
    char pad3[0x49c - 0x464]; int *f49c;
    char pad4[0x564 - 0x4a0]; int f564;
    int func_000389C0(int cell);
    int func_0003D7B0(S_3D7B0_Vec4 v);
};
