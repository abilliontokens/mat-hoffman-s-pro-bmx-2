/* 4 functions from 0x000E5FF0 to 0x000E6EF0, found by Ghidra. */
#include "common.h"
extern char D_0027DB68[], D_00281A08[], D_002819DC[], D_002819B4[], D_0028198C[], D_00281960[], D_00281934[], D_0028190C[], D_002818E4[], D_002818BC[], D_00281894[], D_00281868[], D_00281844[], D_0028181C[], D_002817F8[], D_002817D4[], D_002817B0[], D_0028178C[], D_00281770[], D_00281740[], D_00281714[], D_002816E8[], D_002816B8[], D_00281684[], D_00281650[], D_0028161C[], D_002815EC[], D_002815BC[], D_00281590[], D_00281560[], D_00281538[], D_00281510[], D_002814E4[], D_002814B8[], D_0028148C[], D_00281460[], D_00281434[], D_00281408[];

struct C_001B1980 {
    void func_001B1980(void);
    void func_001B17D0(char *s);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6,
                       float a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_001C4D50 {
    void func_001C4D50(int a);
};

struct C_000E6D00_Owner {
    char pad0[0x268];
    C_001C4D50 *f268;
};

struct C_000E6D00 {
    char pad0[0x124];
    C_000E6D00_Owner *f124;
    char pad128[0x284 - 0x128];
    int f284;
    char pad288[0x340 - 0x288];
    C_001B1980 *f340;
    C_001B1980 *f344;
    C_001B1980 *f348;
    C_001B1980 *f34C;
    C_001B1980 *f350;
    char pad354[0x90];
    int f3E4;
    char pad3E8[0xE0];
    int f4C8;
    int f4CC;
    char pad4D0[0x30];
    C_001B1980 *f500;
    int f504;
    int f508;
    char pad50C[0x94];
    C_001B1980 *f5A0[35];
    C_001B1980 *f62C[19];
    void func_000E5FF0(void);
    void func_000E6D00(void);
    void func_000E6DC0(void);
    void func_000E6E20(void);
};

void C_000E6D00::func_000E6D00(void)
{
    int i;

    for (i = 0; i < f3E4; i++) {
        f5A0[i]->func_001B1860(0, -1.0f, 0xff, 0.9f, 0, 0, 0, 0, 0.9f, 0, 0.25f, 0, 0);
    }
    for (i = 0; i < f504; i++) {
        f62C[i]->func_001B1860(0, -1.0f, 0, 0.9f, 0, 0, 0, 0xff, 0.9f, 0, 0.25f, 0, 0);
    }
    f508 = 1;
    f500->func_001B1980();
}

void C_000E6D00::func_000E6DC0(void)
{
    f124->f268->func_001C4D50(500);
    f340->func_001B1980();
    f344->func_001B1980();
    f348->func_001B1980();
    f34C->func_001B1980();
    f350->func_001B1980();
}

void C_000E6D00::func_000E6E20(void)
{
    int i;

    f124->f268->func_001C4D50(500);
    f340->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f4C8 = f4CC = 1;
    for (i = 0; i < f3E4; i++) {
        f5A0[i]->func_001B1980();
    }
    for (i = 0; i < f504; i++) {
        f62C[i]->func_001B1980();
    }
    f500->func_001B1980();
}

