/* 19 functions from 0x00093620 to 0x00094620, found by Ghidra. */
#include "common.h"

struct C_001B17D0 {
    void func_001B17D0(int v);
};

/* Per-slot settings table (offsets are the game's). */
struct S_00093620_Cfg {
    char pad0[0xb40];
    int fB40;
    char padB44[4];
    int fB48;
    char padB4C[4];
    int fB50;
    char padB54[4];
    int fB58;
    char padB5C[0x1c];
    int fB78;
    char padB7C[4];
    int fB80;
    char padB84[4];
    int fB88;
    char padB8C[4];
    int fB90;
    char padB94[4];
    int fB98;
    char padB9C[0x16c];
    int fD08;
    char padD0C[4];
    int fD10;
    char padD14[4];
    int fD18;
    char padD1C[0x4bc];
    int f11D8;
};

struct S_00093620_Mid {
    int f0;
    S_00093620_Cfg *f4;
};

struct S_00093620_Root {
    char pad0[0x2e8];
    S_00093620_Mid *f2e8;
};

extern S_00093620_Root *D_002A8490;

struct C_00093140 {
    char pad0[0x24];
    C_001B17D0 *f24;
    C_001B17D0 *f28;
    C_001B17D0 *f2c;
    C_001B17D0 *f30;
    void func_00093140(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    void func_00093C80(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093970(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093AD0(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093CF0(int a1, int a2, int a3, int a4, int a5, int a6);
};
