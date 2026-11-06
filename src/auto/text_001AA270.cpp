/* 1 function from 0x001AA270 to 0x001AB670, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
#include <xmmintrin.h>

extern float D_00276278;
extern float D_002755F4;
extern float D_00275544;
extern float D_00275460;
extern float D_002AA248, D_002AA24C, D_002AA250, D_002AA254;

struct V4_001AA270 {
    float x, y, z, w;
    V4_001AA270() { x = y = z = 0.0f; w = 1.0f; }
};

void func_00030A30(V4_001AA270 *out, V4_001AA270 v, void *m);
void func_00030AC0(V4_001AA270 *out, V4_001AA270 *a, void *m);
void func_00030B20(V4_001AA270 *out, V4_001AA270 v, void *m);
V4_001AA270 *func_000267F0(V4_001AA270 *out, V4_001AA270 *a, void *m);
void func_00198040(V4_001AA270 *out, V4_001AA270 *a);

struct C_001AA270 {
    char pad0[0x24];
    void *f24;
    char pad28[0x58 - 0x28];
    int f58;
    char pad5c[0x68 - 0x5c];
    int f68;
    char pad6c[0xbc - 0x6c];
    float fbc;
    float fc0;
    float fc4;
    char padc8[0x114 - 0xc8];
    float f114, f118, f11c;
    float f124, f128, f12c;
    void func_001AA270(float a0, float a1, float a2, float a3, void *a4, void *a5, void *a6, void *a7, void *a8, int a9, int a10);
};
