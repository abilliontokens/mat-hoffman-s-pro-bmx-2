/* 2 functions from 0x000E2030 to 0x000E21E0, found by Ghidra. */
#include "common.h"

extern int D_0027FB3C;

struct DelObjC_000E2 {
    virtual void Destroy(int a0);
};

/* BmxUIPageHorseController */
struct C_000E2140 {
    void *vtbl;
    char pad4[0x280 - 4];
    int f280, f284, f288, f28C, f290, f294, f298, f29C;
    int f2A0, f2A4, f2A8, f2AC, f2B0, f2B4, f2B8, f2BC;
    int f2C0, f2C4, f2C8, f2CC, f2D0, f2D4, f2D8, f2DC;
    DelObjC_000E2 *arr2E0[8];
    DelObjC_000E2 *arr300[8];
    DelObjC_000E2 *arr320[8];
    DelObjC_000E2 *arr340[8];
    DelObjC_000E2 *arr360[8];
    DelObjC_000E2 *arr380[8];
    DelObjC_000E2 *arr3A0[8];
    DelObjC_000E2 *arr3C0[8];
    DelObjC_000E2 *arr3E0[8];
    DelObjC_000E2 *arr400[8];
    DelObjC_000E2 *arr420[8];
    DelObjC_000E2 *arr440[8];
    C_000E2140 *func_001BE360(int a0);
    C_000E2140 *func_000E2030(int a0);
    void func_001BE3F0(void);
    void func_000E2140(void);
};

C_000E2140 *C_000E2140::func_000E2030(int a0)
{
    int i;

    func_001BE360(a0);
    vtbl = &D_0027FB3C;
    for (i = 0; i < 8; i++) {
        arr2E0[i] = 0;
        arr300[i] = 0;
        arr420[i] = 0;
        arr440[i] = 0;
    }
    f288 = 1;
    f28C = 1;
    f284 = 0;
    f280 = 0;
    f290 = 0;
    f294 = 0;
    for (i = 0; i < 8; i++) {
        arr320[i] = 0;
        arr340[i] = 0;
        arr360[i] = 0;
        arr380[i] = 0;
        arr3A0[i] = 0;
        arr3C0[i] = 0;
        arr3E0[i] = 0;
        arr400[i] = 0;
    }
    f2A4 = 0;
    f2A8 = 0;
    f2A0 = 0;
    f2AC = 0;
    f298 = 0;
    f29C = 0;
    f2B0 = 0;
    f2B4 = 0;
    f2BC = 0;
    f2C0 = -1;
    f2C4 = 0;
    f2C8 = 0;
    f2CC = 0;
    f2D0 = 0;
    f2D4 = 0;
    f2DC = 0;
    f2D8 = 0;
    return this;
}

void C_000E2140::func_000E2140(void)
{
    int i;

    vtbl = &D_0027FB3C;
    for (i = 0; i < 8; i++) {
        if (arr320[i] != 0) {
            arr320[i]->Destroy(1);
        }
        if (arr340[i] != 0) {
            arr340[i]->Destroy(1);
        }
        if (arr360[i] != 0) {
            arr360[i]->Destroy(1);
        }
        if (arr380[i] != 0) {
            arr380[i]->Destroy(1);
        }
        if (arr3A0[i] != 0) {
            arr3A0[i]->Destroy(1);
        }
        if (arr3C0[i] != 0) {
            arr3C0[i]->Destroy(1);
        }
        if (arr3E0[i] != 0) {
            arr3E0[i]->Destroy(1);
        }
        if (arr400[i] != 0) {
            arr400[i]->Destroy(1);
        }
    }
    func_001BE3F0();
}
