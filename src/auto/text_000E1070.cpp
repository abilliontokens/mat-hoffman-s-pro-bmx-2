/* 12 functions from 0x000E1070 to 0x000E2030, found by Ghidra. */
#include "common.h"

extern int D_0027FAA4;
extern int D_00277038;

void func_001ADCC0(char *buf, int size, char *fmt, int val);
void func_001AC330(char *dest, char *fmt, char *arg);

struct DelObjNumHorse {
    virtual void Destroy(int a0);
};

struct C_NumHorse_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
    void func_001B17D0(char *s);
};

struct C_NumHorse_Obj4 {
    char pad0[0xA28];
    char *fA28;
};

struct C_NumHorse_Obj2E8 {
    char pad0[4];
    C_NumHorse_Obj4 *p4;
};

struct C_NumHorse_Root {
    char pad0[0x2E8];
    C_NumHorse_Obj2E8 *p2E8;
};

extern C_NumHorse_Root *D_002A8490;

/* BmxUIPageNumHorsePlayers */
struct C_000E1770 {
    void *vtbl;
    char pad4[0x27C];
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    int f294;
    C_NumHorse_Widget *f298;
    int f29C;
    char pad2A0[8];
    int f2A8;
    int f2AC;
    char pad2B0[8];
    int f2B8;
    int f2BC;
    int f2C0;
    int f2C4;
    int f2C8;
    int f2CC;
    int f2D0;
    DelObjNumHorse *arr2D4[2];
    void func_001BE360(int a);
    void func_001BE3F0();
    C_000E1770 *func_000E1770(int a);
    void func_000E1810();
    void func_000E1C20();
    void func_000E1EA0();
};

C_000E1770 *C_000E1770::func_000E1770(int a)
{
    func_001BE360(a);
    vtbl = &D_0027FAA4;
    f28C = 0;
    f290 = 0;
    f288 = 0;
    f294 = 0;
    f280 = 0;
    f284 = 0;
    f298 = 0;
    f29C = 2;
    f2AC = 0;
    f2A8 = 0;
    f2BC = 0;
    f2B8 = 0;
    for (int i = 0; i < 2; i++) {
        arr2D4[i] = 0;
    }
    f2C0 = 0;
    f2C4 = 0;
    f2C8 = 0;
    f2CC = 0;
    f2D0 = 0;
    return this;
}

void C_000E1770::func_000E1810()
{
    int i;
    vtbl = &D_0027FAA4;
    for (i = 0; i < 2; i++) {
        if (arr2D4[i] != 0) {
            arr2D4[i]->Destroy(1);
            arr2D4[i] = 0;
        }
    }
    func_001BE3F0();
}

void C_000E1770::func_000E1C20()
{
    char dest[0x40];
    char buf[4];

    func_001ADCC0(buf, 3, (char *)&D_00277038, f29C);
    func_001AC330(dest, D_002A8490->p2E8->p4->fA28, buf);
    f298->func_001B17D0(dest);
}

void C_000E1770::func_000E1EA0()
{
    f298->func_001B1980();
    func_000E1C20();
    f298->func_001B2270(0xffbfa35a);
    f298->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
}

