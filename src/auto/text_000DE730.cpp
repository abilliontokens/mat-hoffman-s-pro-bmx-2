/* 1 function from 0x000DE730 to 0x000DF570, found by Ghidra. */
#include "common.h"
#include <string.h>

struct DE_Obj {
    int func_00094870();
    int func_0005C200(int a);
    int func_00095110(int a);
    int func_00095250(int a);
    int func_00095160(int a);
    int func_000952A0(int a);
    int func_00095430(int a);
    int func_00095390(int a);
    void func_001B17D0(int a);
    void func_0005E840(int a);
};
struct DE_B91 {
    char pad0[0x34];
    DE_Obj *f34;
    DE_Obj *f38;
    DE_Obj *f3C;
    DE_Obj *f40;
    DE_Obj *f44;
    void func_000BF860(int a, int b, int c, int d);
};
extern DE_B91 *D_002B91AC;
struct DE_G4 {
    char pad0[0x838];
    int f838;
    char pad83C[0x9F0 - 0x83C];
    int f9F0;
    int f9F4;
    int f9F8;
    char pad9FC[4];
    int fA00;
};
struct DE_2E8 {
    char pad0[4];
    DE_G4 *f4;
};
struct DE_Mid {
    char pad0[0x2C0];
    DE_Obj *f2C0;
    char pad2C4[0x2FC - 0x2C4];
    DE_Obj *f2FC;
};
struct DE_Root {
    char pad0[0x2E0];
    DE_Mid *f2E0;
    char pad2E4[4];
    DE_2E8 *f2E8;
};
extern DE_Root *D_002A8490;

struct C_000DE730 {
    char pad0[0x284];
    int f284;
    char pad288[0x294 - 0x288];
    int f294;
    int f298;
    int f29C;
    int f2A0;
    char pad2A4[0x2BC - 0x2A4];
    int f2BC;
    int f2C0;
    char pad2C4[0x2D0 - 0x2C4];
    int f2D0;
    int f2D4;
    int f2D8;
    char pad2DC[0x2E4 - 0x2DC];
    int f2E4;
    int f2E8;
    int f2EC;
    int f2F0;
    int a2F4[18];
    int a33C[18];
    char pad384[0x894 - 0x384];
    DE_Obj *a894[18];
    DE_Obj *a8DC[18];
    void func_000DE730();
};
