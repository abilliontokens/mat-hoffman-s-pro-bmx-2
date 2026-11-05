/* 19 functions from 0x00093620 to 0x00094620, found by Ghidra. */
#include "common.h"

struct C_001B17D0 {
    void func_001B17D0(int v);
};

/* Per-slot settings table (offsets are the game's). */
struct S_00093620_Cfg {
    char pad0[0xb00];
    int fB00;
    char padB04[4];
    int fB08;
    char padB0C[4];
    int fB10;
    char padB14[4];
    int fB18;
    char padB1C[4];
    int fB20;
    char padB24[4];
    int fB28;
    char padB2C[4];
    int fB30;
    char padB34[4];
    int fB38;
    char padB3C[4];
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
    char padB9C[4];
    int fBA0;
    char padBA4[4];
    int fBA8;
    char padBAC[4];
    int fBB0;
    char padBB4[4];
    int fBB8;
    char padBBC[4];
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
    char padC34[4];
    int fC38;
    char padC3C[4];
    int fC40;
    char padC44[4];
    int fC48;
    char padC4C[4];
    int fC50;
    char padC54[0x24];
    int fC78;
    char padC7C[4];
    int fC80;
    char padC84[4];
    int fC88;
    char padC8C[4];
    int fC90;
    char padC94[4];
    int fC98;
    char padC9C[4];
    int fCA0;
    char padCA4[4];
    int fCA8;
    char padCAC[4];
    int fCB0;
    char padCB4[4];
    int fCB8;
    char padCBC[4];
    int fCC0;
    char padCC4[4];
    int fCC8;
    char padCCC[4];
    int fCD0;
    char padCD4[0x34];
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
    char padF94[0x1d4];
    int f1168;
    char pad116C[4];
    int f1170;
    char pad1174[0xc];
    int f1180;
    char pad1184[0x44];
    int f11C8;
    char pad11CC[4];
    int f11D0;
    char pad11D4[4];
    int f11D8;
    char pad11DC[0x14];
    int f11F0;
    char pad11F4[4];
    int f11F8;
    char pad11FC[4];
    int f1200;
    char pad1204[4];
    int f1208;
    char pad120C[4];
    int f1210;
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
extern char D_00275630[];

struct C_00093140 {
    char pad0[0x24];
    C_001B17D0 *f24;
    C_001B17D0 *f28;
    C_001B17D0 *f2c;
    C_001B17D0 *f30;
    C_001B17D0 *f34;
    C_001B17D0 *f38;
    void func_00093890(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_000943A0(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00094570(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093E80(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093F30(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00094000(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093140(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    void func_00093C80(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093970(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093AD0(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093CF0(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093A00(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093DA0(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_000940D0(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_000942F0(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00094410(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_000944C0(int a1, int a2, int a3, int a4, int a5, int a6);
};

void C_00093140::func_00093970(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fD08);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fD10);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fD18);
    func_00093140(a1, a2, a3, 3, a4, a5, a6);
}

void C_00093140::func_00093A00(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fB28);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fB30);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fB38);
    f30->func_001B17D0((int)D_00275630);
    f34->func_001B17D0(D_002A8490->f2e8->f4->f11C8);
    f38->func_001B17D0(D_002A8490->f2e8->f4->f11D0);
    func_00093140(a1, a2, a3, 6, a4, a5, a6);
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
    func_00093140(a1, a2, a3, 4, a4, a5, a6);
}

void C_00093140::func_00093F30(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fBF0);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fBF8);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fC00);
    f30->func_001B17D0(D_002A8490->f2e8->f4->f11D8);
    f34->func_001B17D0(D_002A8490->f2e8->f4->fC08);
    func_00093140(a1, a2, a3, 5, a4, a5, a6);
}

void C_00093140::func_00094000(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fC10);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fC18);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fC20);
    f30->func_001B17D0(D_002A8490->f2e8->f4->fC28);
    f34->func_001B17D0(D_002A8490->f2e8->f4->fC30);
    func_00093140(a1, a2, a3, 5, a4, a5, a6);
}

void C_00093140::func_000940D0(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fC38);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fC40);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fC48);
    f30->func_001B17D0(D_002A8490->f2e8->f4->fC50);
    f34->func_001B17D0(D_002A8490->f2e8->f4->f11F0);
    func_00093140(a1, a2, a3, 5, a4, a5, a6);
}

void C_00093140::func_000942F0(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fC78);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fC80);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fC88);
    f30->func_001B17D0(D_002A8490->f2e8->f4->f11F8);
    func_00093140(a1, a2, a3, 4, a4, a5, a6);
}

void C_00093140::func_000943A0(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fF88);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fF90);
    func_00093140(a1, a2, a3, 2, a4, a5, a6);
}

void C_00093140::func_00094410(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fC90);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fC98);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fCA0);
    f30->func_001B17D0(D_002A8490->f2e8->f4->f1200);
    func_00093140(a1, a2, a3, 4, a4, a5, a6);
}

void C_00093140::func_000944C0(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fCA8);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fCB0);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fCB8);
    f30->func_001B17D0(D_002A8490->f2e8->f4->f1208);
    func_00093140(a1, a2, a3, 4, a4, a5, a6);
}

void C_00093140::func_00094570(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fCC0);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fCC8);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->fCD0);
    f30->func_001B17D0(D_002A8490->f2e8->f4->f1210);
    func_00093140(a1, a2, a3, 4, a4, a5, a6);
}

