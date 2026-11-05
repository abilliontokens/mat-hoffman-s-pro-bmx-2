/* 14 functions from 0x00016CF0 to 0x00017CE0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

static inline void FloatToInt(int *out, float f)
{
    *out = _mm_cvttss_si32(_mm_load_ss(&f));
}

extern float D_002756D0;
extern float D_002756B8;
extern float D_002756E8;
extern float D_002756EC;

struct C_00016E40_Vec {
    float x;
    float y;
    float z;
    float w;
};

extern C_00016E40_Vec D_002A0718;

struct C_00199B00 {
    C_00016E40_Vec func_00199B00(int a0);
};

struct C_00016E40_B {
    char pad0[4];
    C_00199B00 *f4;
};

struct C_00016E40_A {
    char pad0[0x1A4];
    C_00016E40_B *f1A4;
};

struct C_00016E40 {
    char pad0[0x2C];
    C_00016E40_A *f2C;
    C_00016E40_Vec func_00016E40(void);
};
