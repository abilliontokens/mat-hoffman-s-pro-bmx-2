/* 4 functions from 0x000E5FF0 to 0x000E6EF0, found by Ghidra. */
#include "common.h"

struct C_001B1980 {
    void func_001B1980(void);
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
    char pad128[0x218];
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
    C_001B1980 *f62C[1];
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

