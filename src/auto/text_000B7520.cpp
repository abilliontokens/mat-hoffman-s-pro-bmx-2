/* 1 function from 0x000B7520 to 0x000B8AD0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

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

extern float D_002755E8;
extern float D_002A303C;
extern float D_00275544;
extern float D_002A3038;
extern float D_002A3034;
extern void *D_002B910C;
int C_000B7520::func_000B7520(int a)
{
    S_000B7520_Vec4 v[8];
    S_000B7520_Vec4 t;
    S_000B7520_Vec4 r;
    float *f88p;
    int i;

    func_000B67C0();
    for (i = 0; i < 8; i++) {
        v[i].w = 1.0f;
    }
    if (f50 != 0) {
        if (f54 == 0) {
            if (f38 != 0 && f3c != 0) {
                if (f40 != 0 && f44 != 0) {
                    f88p = (float *)f88;
                    f1a0 = f190 + f1a0;
                    f1a4 = f194 + f1a4;
                    f1a8 = f198 + f1a8;
                    t.x = f1a0 * D_002755E8;
                    t.y = f1a4 * D_002755E8;
                    t.z = f1a8 * D_002755E8;
                    t.w = 1.0f;
                    v[0] = t;
                    r.x = f1a4 * f88p[0x134 / 4] - f1a8 * f88p[0x138 / 4];
                    r.y = f1a8 * f88p[0x130 / 4] - f1a0 * f88p[0x138 / 4];
                    r.z = f1a0 * f88p[0x134 / 4] - f1a4 * f88p[0x130 / 4];
                    r.w = 1.0f;
                    AsmVec3Cross(&v[1].x, &f1a0, &r.x);
                }
            }
        }
    }
    return 1;
}
