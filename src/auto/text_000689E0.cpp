/* 2 functions from 0x000689E0 to 0x00069340, found by Ghidra. */
#include "common.h"
struct Sprite_69 {
    char pad0[0x10];
    float f10, f14;
    Sprite_69 *func_001D5AA0();
};
struct Mid_69 { Sprite_69 *func_0018C070(); };
struct Lookup_69 { int *func_0018C160(int); };
struct Mgr_69 { char pad0[0x2EC]; Lookup_69 *f2EC; };
extern Mgr_69 *D_002A8490;
extern float D_00275AEC;
extern char D_002786A0[], D_00278690[], D_00278678[];

struct C_00069080 {
    char pad0[0x80];
    Sprite_69 *f80[2];
    char pad88[0x30];
    Sprite_69 *fB8[18];
    Sprite_69 *f100[14];
    Sprite_69 *f138;
    void func_00069080();
    void func_001578D0();
};
#define CLAMP(p) { Sprite_69 *o = (p)->func_001D5AA0(); if (D_00275AEC > o->f10) o->f10 = 10.0f; if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f; }
