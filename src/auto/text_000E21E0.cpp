/* 1 function from 0x000E21E0 to 0x000E35E0, found by Ghidra. */
#include "common.h"

/* element of C_000E21E0::f2e0[] */
struct S_000E21E0_Elem {
    void func_001B1980(void);
};

/* object with the three-stat/label slots hanging off D_002B91AC */
struct S_000E21E0_Tgt {
    void func_0005E840(int arg);
};

struct S_000E21E0_UI {
    char pad0[0x34];
    S_000E21E0_Tgt *f34;
    S_000E21E0_Tgt *f38;
    S_000E21E0_Tgt *f3C;
    void func_000BF860(int a, int b, int c, int d);
};

struct S_000E21E0_Data {
    char pad0[0x7C8];
    int f7C8;
    char pad7CC[0x6C];
    int f838;
    char pad83C[0x274];
    int fAB0;
};

struct S_000E21E0_Mgr {
    int f0;
    S_000E21E0_Data *f4;
};

struct S_000E21E0_Root {
    char pad0[0x2E0];
    int *f2E0;
    char pad2E4[4];
    S_000E21E0_Mgr *f2E8;
};

extern S_000E21E0_Root *D_002A8490;
extern S_000E21E0_UI *D_002B91AC;

/* BmxUIPageHorseController */
struct C_000E21E0 {
    char pad0[0x280];
    int f280;
    int f284;
    char pad288[0x1C];
    int f2A4;
    int f2A8;
    int f2AC;
    int f2B0;
    char pad2B4[8];
    int f2BC;
    int f2C0;
    int f2C4;
    int f2C8;
    int f2CC;
    int f2D0;
    int f2D4;
    int f2D8;
    int f2DC;
    S_000E21E0_Elem *f2E0[8];
    void func_000E21E0(void);
};

void C_000E21E0::func_000E21E0(void)
{
    f2A4 = 0;
    f2A8 = 0;
    f2AC = 0;
    f2B0 = 1;
    f2BC = 0;
    f280 = *D_002A8490->f2E0;
    f2C0 = -1;
    f2DC = 0;
    f2D8 = 0;
    f2C4 = 0;
    f2C8 = 0;
    f2CC = 0;
    f2D0 = 0;
    f2D4 = 0;
    f284 = 0;
    for (int i = 0; i < 8; i++) {
        f2E0[i]->func_001B1980();
    }
    D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4->fAB0);
    D_002B91AC->func_000BF860(0, 0x1EB, 0x184, 0);
    D_002B91AC->f38->func_0005E840(D_002A8490->f2E8->f4->f7C8);
    D_002B91AC->func_000BF860(1, 0x17B, 0x184, 0);
    D_002B91AC->f3C->func_0005E840(D_002A8490->f2E8->f4->f838);
}
