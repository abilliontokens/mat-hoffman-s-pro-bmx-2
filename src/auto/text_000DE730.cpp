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

void C_000DE730::func_000DE730()
{
    int i;
    int j;
    int *p;
    int n;

    f294 = 0;
    f298 = 0;
    f2A0 = 0;
    f2BC = 0;
    f29C = 0;
    f2C0 = 1;
    f2D0 = 0;
    f2D4 = 0;
    f2D8 = 0;
    f2E4 = 0;
    f2F0 = 0;
    f2EC = 0;
    f284 = D_002A8490->f2E0->f2FC->func_00094870();
    memset(a2F4, 0, sizeof(a2F4));
    for (i = 0; i < 7; i++) {
        if (D_002A8490->f2E0->f2C0->func_0005C200(i) == 0) {
            a2F4[11 + i] = 1;
        }
    }
    p = a2F4;
    j = 1;
    n = 18;
    do {
        if (*p != 0) {
            D_002A8490->f2E0->f2FC->func_00095110(j);
        } else {
            if (D_002A8490->f2E0->f2FC->func_00095250(j) != 0) {
                D_002A8490->f2E0->f2FC->func_00095160(j);
            }
        }
        p++;
        j++;
        n--;
    } while (n != 0);
    for (i = 0; i < 18; i++) {
        a33C[i] = D_002A8490->f2E0->f2FC->func_000952A0(i + 1);
    }
    for (i = 0, j = 1; i < 18; i++, j++) {
        a894[i]->func_001B17D0(D_002A8490->f2E0->f2FC->func_00095430(j));
        a8DC[i]->func_001B17D0(D_002A8490->f2E0->f2FC->func_00095390(j));
    }
    D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4->f9F0);
    D_002B91AC->func_000BF860(3, 0xE9, 0x184, 0);
    D_002B91AC->f44->func_0005E840(D_002A8490->f2E8->f4->fA00);
    D_002B91AC->f40->func_0005E840(D_002A8490->f2E8->f4->f9F8);
    D_002B91AC->func_000BF860(2, 0x34, 0x184, 0);
    D_002B91AC->func_000BF860(1, 0x17B, 0x184, 0);
    D_002B91AC->f3C->func_0005E840(D_002A8490->f2E8->f4->f838);
}
