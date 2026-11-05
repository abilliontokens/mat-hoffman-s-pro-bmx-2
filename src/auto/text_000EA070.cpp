/* 6 functions from 0x000EA070 to 0x000EAC40, found by Ghidra. */
#include "common.h"

extern int D_00281A74;

struct DelObjHOFTitle {
    virtual void Destroy(int a0);
};

/* BmxUIPageHOFTitle */
struct C_000EA910 {
    void *vtbl;
    char pad4[0x284 - 4];
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    char pad294[4];
    int unk298;
    int unk29C;
    int unk2A0;
    int unk2A4;
    int unk2A8;
    int unk2AC;
    int unk2B0;
    int unk2B4;
    int unk2B8;
    int unk2BC;
    int unk2C0;
    int unk2C4;
    int unk2C8;
    int unk2CC;
    DelObjHOFTitle *arr2D0[12];
    void func_001BE360(int a);
    void func_001BE3F0();
    C_000EA910 *func_000EA910(int a);
    void func_000EA9B0();
};
