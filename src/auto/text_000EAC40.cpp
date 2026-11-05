/* 9 functions from 0x000EAC40 to 0x000EBB70, found by Ghidra. */
#include "common.h"

extern int D_00281B34;

struct BmxUIPageHOFTitle {
    void func_000C5E40(void);
    void func_000EB1F0(void);
    void func_00157960(void);
    void func_000EB350(void);
};

struct S_000EB420_Obj {
    virtual void destroying(int flag);
};

struct BmxUIPageMedia {
    void *vtbl;
    char pad_4[0x280 - 4];
    S_000EB420_Obj *unk280[4];
    int unk290;
    char pad_294[4];
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
    int unk2D0;
    int unk2D4;
    int unk2D8;
    BmxUIPageMedia *func_000EB370(void *param_1);
    void func_000EB420(void);
    void func_001BE360(void *param_1);
    void func_001BE3F0(void);
};

void BmxUIPageHOFTitle::func_000EB350(void)
{
    func_000C5E40();
    func_000EB1F0();
    func_00157960();
}

BmxUIPageMedia *BmxUIPageMedia::func_000EB370(void *param_1)
{
    func_001BE360(param_1);
    unk298 = 0;
    unk29C = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2A8 = 0;
    unk2AC = 0;
    unk2B0 = 0;
    unk2B4 = 0;
    unk2B8 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    unk2C4 = 0;
    vtbl = (void *)&D_00281B34;
    unk290 = 1;
    unk280[0] = 0;
    unk280[1] = 0;
    unk280[2] = 0;
    unk280[3] = 0;
    unk2C8 = 0;
    unk2CC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    unk2D8 = 0;
    return this;
}

void BmxUIPageMedia::func_000EB420(void)
{
    int i;
    vtbl = (void *)&D_00281B34;
    for (i = 0; i < 4; i++) {
        if (unk280[i] != 0) {
            unk280[i]->destroying(1);
            unk280[i] = 0;
        }
    }
    func_001BE3F0();
}

