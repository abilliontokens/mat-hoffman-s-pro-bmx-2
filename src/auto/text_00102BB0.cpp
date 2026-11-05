/* 12 functions from 0x00102BB0 to 0x00103B60, found by Ghidra. */
#include "common.h"

extern int D_002826B4;
extern int D_00282754;
void func_001E891B(void *p);

struct S_00103350_unk24 {
    char pad0[0x34];
    int unk34;
};

struct C_001B1980 {
    char pad0[0x24];
    S_00103350_unk24 *unk24;
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, float a11, int a12, int a13);
    void func_001B2270(int a);
};

struct C_001C01B0 {
    void func_001C01B0();
};

struct C_001C0110 {
    void func_001C0110(void *a, void *b);
};

/* BmxUIWidgetOverlayText */
struct C_00103AE0 {
    void *vtbl;
    char pad4[0x1AC];
    void *unk1B0;
    void *func_00103AE0(unsigned int flags);
};

/* BmxRotateOverlayText */
struct C_001033D0 {
    void *vtbl;
    char pad4[0x16C];
    int unk170;
    char pad174[0x38];
    int unk1AC;
    C_001B1980 **unk1B0;
    char pad1B4[0x20C];
    int unk3C0;
    char pad3C4[8];
    int unk3CC;
    int unk3D0;
    int unk3D4;
    int unk3D8;
    int unk3DC;
    float unk3E0;
    char pad3E4[4];
    int unk3E8;
    int unk3EC;
    int unk3F0;
    int unk3F4;
    C_001033D0 *func_001033D0(void *a, void *b);
    void func_00103350();
    void func_00103A70();
};
