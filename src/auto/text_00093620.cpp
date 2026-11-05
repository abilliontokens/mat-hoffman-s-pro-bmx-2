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
    char padB9C[0x24];
    int fBC0;
    char padBC4[4];
    int fBC8;
    char padBCC[0x24];
    int fBF0;
    char padBF4[4];
    int fBF8;
    char padBFC[4];
    int fC00;
    char padC04[4];
    int fC08;
    char padC0C[4];
    int fC10;
    char padC14[4];
    int fC18;
    char padC1C[4];
    int fC20;
    char padC24[4];
    int fC28;
    char padC2C[4];
    int fC30;
    char padC34[0xd4];
    int fD08;
    char padD0C[4];
    int fD10;
    char padD14[4];
    int fD18;
    char padD1C[0x224];
    int fF40;
    char padF44[0x44];
    int fF88;
    char padF8C[4];
    int fF90;
    char padF94[0x244];
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
    C_001B17D0 *f34;
    void func_000943A0(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093E80(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093F30(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00094000(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093140(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    void func_00093C80(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093970(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093AD0(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093CF0(int a1, int a2, int a3, int a4, int a5, int a6);
};

void C_00093140::func_00093970(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fD08);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fD10);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fD18);
    func_00093140(a1, a2, a3, 3, a4, a5, a6);
}

void C_00093140::func_00093AD0(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fB40);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fB48);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fB50);
    f30->func_001B17D0(D_002A8490->f2e8->f4->fB58);
    func_00093140(a1, a2, a3, 4, a4, a5, a6);
}

void C_00093140::func_00093C80(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fB78);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fB80);
    func_00093140(a1, a2, a3, 2, a4, a5, a6);
}

void C_00093140::func_00093CF0(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fB88);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fB90);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fB98);
    f30->func_001B17D0(D_002A8490->f2e8->f4->f11D8);
    func_00093140(a1, a2, a3, 4, a4, a5, a6);
}

void C_00093140::func_00093E80(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fBC0);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fBC8);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fF40);
    f30->func_001B17D0(D_002A8490->f2e8->f4->f11D8);
    func_00093140(a3, a2, a1, 4, a4, a5, a6);
}

void C_00093140::func_00093F30(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fBF0);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fBF8);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fC00);
    f30->func_001B17D0(D_002A8490->f2e8->f4->f11D8);
    f34->func_001B17D0(D_002A8490->f2e8->f4->fC08);
    func_00093140(a3, a2, a1, 5, a4, a5, a6);
}

void C_00093140::func_00094000(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fC10);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fC18);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fC20);
    f30->func_001B17D0(D_002A8490->f2e8->f4->fC28);
    f34->func_001B17D0(D_002A8490->f2e8->f4->fC30);
    func_00093140(a3, a2, a1, 5, a4, a5, a6);
}

void C_00093140::func_000943A0(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fF88);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fF90);
    func_00093140(a1, a2, a3, 2, a4, a5, a6);
}

