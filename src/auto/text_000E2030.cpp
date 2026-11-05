/* 2 functions from 0x000E2030 to 0x000E21E0, found by Ghidra. */
#include "common.h"

extern int D_0027FB3C;

struct DelObjC_000E2 {
    virtual void Destroy(int a0);
};

/* BmxUIPageHorseController */
struct C_000E2140 {
    void *vtbl;
    char pad4[0x320 - 4];
    DelObjC_000E2 *arr320[8];
    DelObjC_000E2 *arr340[8];
    DelObjC_000E2 *arr360[8];
    DelObjC_000E2 *arr380[8];
    DelObjC_000E2 *arr3A0[8];
    DelObjC_000E2 *arr3C0[8];
    DelObjC_000E2 *arr3E0[8];
    DelObjC_000E2 *arr400[8];
    void func_001BE3F0(void);
    void func_000E2140(void);
};
