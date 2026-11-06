/* 1 function from 0x000B7520 to 0x000B8AD0, found by Ghidra. */
#include "common.h"

struct S_000B7520_Vec4 {
    float x, y, z, w;
    S_000B7520_Vec4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct C_000B7520 {
    char pad0[0x38];
    int f38, f3c, f40, f44, f48, f4c, f50, f54;
    char pad58[0x24];
    float f7c;
    char pad80[8];
    void *f88;
    char pad8c[0x94];
    float f120, f124, f128;
    float f130, f134, f138;
    char pad13c[0x44];
    float f180, f184, f188;
    float f190, f194, f198;
    float f1a0, f1a4, f1a8;
    int func_000B67C0();
    int func_000B7520(int a);
};

int __stdcall func_000B7520(int a)
{
    (void)a;
    return 0;
}
