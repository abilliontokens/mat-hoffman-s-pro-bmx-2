/* 3 functions from 0x000E7AD0 to 0x000E8740, found by Ghidra. */
#include "common.h"

struct C_001B1980 {
    void func_001B1980(void);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6,
                       int a7, int a8, float a9, int a10, float a11, int a12, int a13);
    void func_001B2270(int a);
    void func_001B1A30(float a, float b, int c);
    void func_001B19C0(int a, int b, int c);
    void func_001B17D0(void *a);
};

extern char D_0027E83C[];
extern char D_00281A48[];
int memcmp(const void *a, const void *b, unsigned int n);

struct E7_GObj {
    void func_0005E840(int a);
    void func_001D6600();
};
struct E7_G4 {
    char pad0[0xA38];
    int fA38;
    char padA3C[0xF50 - 0xA3C];
    int fF50;
    char padF54[0x1120 - 0xF54];
    int f1120;
};
struct E7_G2E8 {
    char pad0[4];
    E7_G4 *f4;
};
struct E7_Root {
    char pad0[0x2E8];
    E7_G2E8 *f2E8;
};
extern E7_Root *D_002A8490;
struct E7_B91 {
    char pad0[0x34];
    E7_GObj *f34;
    E7_GObj *f38;
    E7_GObj *f3C;
    E7_GObj *f40;
    E7_GObj *f44;
};
extern E7_B91 *D_002B91AC;

struct E7_124 {
    char pad0[0x27C];
    char *f27C;
    int f284;
    char pad288[4];
    int f28C;
    int func_000BBDF0();
};

struct C_000E7AD0 {
    char pad0[0x124];
    E7_124 *f124;
    char pad128[0x284 - 0x128];
    int f284;
    char pad288[0x2AC - 0x288];
    int f2AC;
    char pad2B0[0x340 - 0x2B0];
    C_001B1980 *f340;
    C_001B1980 *f344;
    C_001B1980 *f348;
    C_001B1980 *f34C;
    C_001B1980 *f350;
    char pad354[0x4A4 - 0x354];
    int f4A4;
    int f4A8;
    int f4AC;
    int f4B0;
    int f4B4;
    int f4B8;
    char pad4BC[0x4C4 - 0x4BC];
    int f4C4;
    int f4C8;
    int f4CC;
    char pad4D0[0x500 - 0x4D0];
    C_001B1980 *f500;
    char pad504[4];
    int f508;
    void func_000E7AD0();
};

struct C_000E86C0 {
    char pad0[0x474];
    int unk474;
    char pad478[4];
    int unk47C;
    int unk480;
    int unk484;
    int unk488;
    float unk48C;
    char pad490[0xE8];
    C_001B1980 *unk578[5];
    void func_000E86C0(void);
    void func_000E8630(void);
};

void C_000E86C0::func_000E8630(void) {
    int i;

    unk474 = 1;
    unk47C = 0xff;
    unk480 = 0;
    unk484 = 0;
    unk488 = 0;
    unk48C = 0.25f;
    for (i = 0; i < 5; i++) {
        unk578[i]->func_001B1980();
        unk578[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.0f, 0, 0.25f, 0, 0);
    }
}

void C_000E86C0::func_000E86C0(void) {
    int i;

    unk47C = 0;
    unk480 = 0xff;
    unk484 = 0xff;
    unk488 = 0;
    unk48C = 0.25f;
    for (i = 0; i < 5; i++) {
        unk578[i]->func_001B1980();
        unk578[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.0f, 0, 0.25f, 0, 0);
    }
}
