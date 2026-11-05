/* 2 functions from 0x00012B00 to 0x00013A40, found by Ghidra. */
#include "common.h"

struct S_13910_Vec { float x, y, z, w; };
struct S_13910_Obj2 { S_13910_Vec *func_00199B00(S_13910_Vec *out, int a); };
struct S_13910_Sub { char pad[0xbc]; int fbc; };
struct S_13910_Ent {
    char pad[0x834]; S_13910_Vec f834;
    char pad2[0x950 - 0x844]; S_13910_Sub *f950;
    char pad3[0xa00 - 0x954]; struct S_13910_Pl *fa00;
};
struct S_13910_Pl { char pad[4]; S_13910_Obj2 *f4; };
struct S_13910_Row { char pad[8]; float f8; };
struct S_13910_G {
    char pad[0x4e0]; struct S_13910_Arr *f4e0;
    char pad2[0x588 - 0x4e4]; S_13910_Row **f588;
};
struct S_13910_Arr { char pad[0x1a8]; S_13910_Ent *ents[1]; };
struct S_13910_Owner {
    char pad1[0x3b4]; int f3b4; char pad2[0x3d8 - 0x3b8]; int f3d8; char pad3[0x41c - 0x3dc]; int f41c;
    void func_00011BE0(int *a, int *b);
    int func_000119D0(S_13910_Vec *v);
    float func_00012510(int *p, int w);
    void func_001C6DA0(int a, int b);
};
struct AIPedFightState { void *vtbl; char pad[4]; S_13910_Owner *f8; int fC; void func_00013910(); };
extern S_13910_G *D_002B9120;
