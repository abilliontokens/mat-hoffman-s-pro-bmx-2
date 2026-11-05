/* 2 functions from 0x00035E80 to 0x000363E0, found by Ghidra. */
#include "common.h"

struct Vec4_000361F0 {
    float x, y, z, w;
    Vec4_000361F0() { x = y = z = 0; w = 1; }
};

/* the light/colour object a page owns (f44->f5C) */
struct S_000361F0_Gfx {
    char pad0[4];
    int f4;
    void func_00194E60(Vec4_000361F0 v);
    void func_00194EE0(Vec4_000361F0 v);
    void func_00194F10(Vec4_000361F0 *out);
};

struct S_000361F0_Owner {
    char pad0[0x5C];
    S_000361F0_Gfx *f5C;
};

extern float D_002A14D4;
extern float D_002A14D8;
extern float D_002A14DC;

struct C_000361F0 {
    char pad0[0x44];
    S_000361F0_Owner *f44;
    char pad48[0x428 - 0x48];
    int f428;
    char pad42C[4];
    int f430;
    int f434;
    char pad438[4];
    int f43C;
    float f440;
    char pad444[0x46C - 0x444];
    float f46C;
    float f470;
    char pad474[0x4A4 - 0x474];
    int f4A4;
    char pad4A8[4];
    Vec4_000361F0 f4AC;
    char pad4BC[0x52C - 0x4BC];
    Vec4_000361F0 f52C;
    void func_000361F0(int flag);
};
