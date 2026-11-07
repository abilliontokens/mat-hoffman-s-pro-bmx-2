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
    float f120;
    float f124, f128, f12c;
    int func_001AA270(float depth, V4_001AA270 normal, V4_001AA270 point, void *other, int mask);
    void func_001A96D0(void *body, V4_001AA270 impulse, V4_001AA270 point, int scale);
    void func_001AA270(float a0, float a1, float a2, float a3, void *a4, void *a5, void *a6, void *a7, void *a8, int a9, int a10);
};

void C_001AA270::func_001AA270(float a0, float a1, float a2, float a3, void *a4, void *a5, void *a6, void *a7, void *a8, int a9, int a10)
{
    V4_001AA270 v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17;
    V4_001AA270 d;
    float x;

    if (a4) {
        if (*(float *)((char *)a4 + 0x210) > D_00276278) {
            x = 0.25f;
        } else {
            x = fc4;
        }
    } else {
        if (a1 > D_002755F4) {
            x = fc0;
        } else {
            x = fbc;
        }
    }
    if (f58) {
        v0.x = D_002AA248;
        v0.y = D_002AA24C;
        v0.z = D_002AA250;
        v0.w = D_002AA254;
        v1 = v0;
    }
    d.x = a0 - f114;
    d.y = a1 - f118;
    d.z = a2 - f11c;
    func_00030A30(&v2, d, (char *)*(void **)((char *)f24 + 0x22c) + 0xf0);
    if (a8) {
        func_00030AC0(&v3, (V4_001AA270 *)((char *)a8 + 0x190), (char *)*(void **)((char *)a8 + 0x22c) + 0xf0);
    }
    v4.x = x;
}
struct Xf_001AA270 {
 V4_001AA270 func_00198040(V4_001AA270 *v);
 V4_001AA270 func_00197EC0(V4_001AA270 *v);
};
struct Body_001AA270 {
 void func_00030B20(V4_001AA270 v);
 void func_00030B90(V4_001AA270 v);
 void func_00171BA0(V4_001AA270 v);
 void func_00171D00(V4_001AA270 v);
};
V4_001AA270 *func_000110B0(V4_001AA270 *a, V4_001AA270 *b);
