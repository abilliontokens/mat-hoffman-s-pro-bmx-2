/* 1 function from 0x0011B240 to 0x0011BBB0, found by Ghidra. */
#include "common.h"
struct V4_0011B240 { float x, y, z, w; V4_0011B240() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; } };
struct Obj_0011B240 {
    char pad_00[0x60];
    void *f60;
    char pad_64[0x9c - 0x64];
    void *f9c;
    char pad_a0[0x110 - 0xa0];
    Obj_0011B240 *func_0017F050(int a);
    void func_0017F0A0(int a);
    void func_00180E00(int n, void *verts, int a, int b);
    void func_00133140(void *tex, int a);
    void func_00133660(void *tex);
    void func_00086C20(int a);
};
struct Glob_0011B240 {
    char pad_00[0x348];
    int f348;
    char pad_34c[0x4a8 - 0x34c];
    void **f4a8;
};
extern float D_002A3BBC, D_002A3BC0, D_002A3BC4, D_002A3BC8;
extern float D_002A3BDC, D_002A3BE0, D_002A3BE4;
extern float D_00283E10;
extern double D_00283E08;
extern float D_00276288;
extern float D_00283E00;
extern float D_00278C48;
extern float D_002755EC;
extern Glob_0011B240 *D_002B9120;
extern void *D_002BA154;
extern void *D_002B911C;
extern int D_0011B150;
void *func_001E8A44(int size);
void func_0011AFF0();
extern "C" double __cdecl cos(double);
extern "C" double __cdecl sin(double);
#pragma intrinsic(cos, sin)
struct S_0011B240 {
    char pad[0x9c];
    Obj_0011B240 *a;
    Obj_0011B240 *b;
    Obj_0011B240 *c;
    void func_001577A0(void *obj, int a);
    void func_0011B240(float x, float y);
};
