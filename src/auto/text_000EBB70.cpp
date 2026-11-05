/* 11 functions from 0x000EBB70 to 0x000EC850, found by Ghidra. */
#include "common.h"

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern int D_00281BF4;

struct DelObjC_000EB {
    virtual void Destroy(int a0);
};

struct C_001D6600 {
    void func_001D6600();
};

struct S_002B91AC {
    char pad0[0x34];
    C_001D6600 *unk34;
    C_001D6600 *unk38;
    C_001D6600 *unk3C;
};
extern S_002B91AC *D_002B91AC;

struct C_000EB_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct S_000EB_unk124 {
    char pad0[0x138];
    int unk138;
};

/* BmxUIPageMedia */
struct C_000EBCD0 {
    void func_000C5E40();
    void func_000EBB70();
    void func_00157960();
    void func_000EBCD0();
};

/* BmxUIPageExistingEditorLevels */
struct C_000EBE30 {
    void *vtbl;
    char pad4[0x120];
    S_000EB_unk124 *unk124;
    char pad128[0x158];
    C_000EB_Widget *unk280[8];
    DelObjC_000EB *arr2A0[16];
    int arr2E0[8];
    int unk300;
    int unk304;
    int unk308;
    int unk30C;
    int unk310;
    int unk314;
    int unk318;
    int unk31C;
    DelObjC_000EB *unk320;
    int unk324;
    int unk328;
    int unk32C;
    int unk330;
    int unk334;
    C_000EB_Widget *unk338;
    int unk33C;
    int unk340;
    int unk344;
    int unk348;
    int unk34C;
    int unk350;
    int unk354;
    int unk358;
    int unk35C;
    int unk360;
    int unk364;
    int unk368;
    int unk36C;
    int unk370;
    int unk374;
    int unk378;
    int unk37C;
    int unk380;
    int unk384;
    int unk388;
    int unk38C;
    int unk390;
    int unk394;
    int unk398;
    int unk39C;
    void func_001BE360(int a0);
    C_000EBE30 *func_000EBCF0(int a0);
    void func_001BE3F0();
    void func_000EBE30();
    void func_000EC4A0();
    void func_000EC580();
    void func_000EC5E0();
    void func_000EC6F0();
    void func_000EC7E0();
};

void C_000EBCD0::func_000EBCD0()
{
    func_000C5E40();
    func_000EBB70();
    func_00157960();
}

void C_000EBE30::func_000EBE30()
{
    vtbl = &D_00281BF4;
    if (unk320 != 0) {
        unk320->Destroy(1);
        unk320 = 0;
    }
    for (int i = 0; i < 16; i++) {
        if (arr2A0[i] != 0) {
            arr2A0[i]->Destroy(1);
            arr2A0[i] = 0;
        }
    }
    func_001BE3F0();
}

void C_000EBE30::func_000EC4A0()
{
    int i;

    for (i = 0; i < unk324; i++) {
        unk280[i]->func_001B1980();
        if (i == unk33C) {
            unk280[i]->func_001B2270(0xffbfa35a);
            unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
        } else if (i == unk37C) {
            unk280[i]->func_001B2270(0xffcccccc);
            unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0.0f, 0.2f, 0);
        } else {
            unk280[i]->func_001B2270(0xffcccccc);
            unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0xbf800000, 0xff, 1.0f, 0, 0.0f, 0.0f, 0);
        }
    }
}

void C_000EBE30::func_000EC580()
{
    unk338->func_001B1980();
    unk338->func_001B2270(0xffbfa35a);
    unk338->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
}

void C_000EBE30::func_000EC5E0()
{
    int i;

    if (unk324 == 0) {
        unk338->func_001B1980();
        unk338->func_001B2270(0xffbfa35a);
        unk338->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
    } else {
        for (i = 0; i < unk324; i++) {
            unk280[i]->func_001B1980();
            if (i == unk33C) {
                unk280[i]->func_001B2270(0xffbfa35a);
                unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.0f, 0.2f, 0);
            } else {
                unk280[i]->func_001B2270(0xffcccccc);
                unk280[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0.0f, 0);
            }
        }
    }
}

void C_000EBE30::func_000EC6F0()
{
    int i;

    if (unk324 == 0) {
        unk338->func_001B1980();
        unk338->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0, 1.45f, 0, 0.25f, 0.2f, 0);
    } else {
        for (i = 0; i < unk324; i++) {
            unk280[i]->func_001B1980();
            if (i == unk33C) {
                unk280[i]->func_001B2270(0xffbfa35a);
                unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0, 1.45f, 0, 0.25f, 0.0f, 0);
            } else {
                unk280[i]->func_001B2270(0xffcccccc);
                unk280[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0.0f, 0);
            }
        }
    }
}

void C_000EBE30::func_000EC7E0()
{
    if (unk330 != 0) {
        return;
    }
    if (unk324 > 0 || unk35C != 0) {
        D_002B91AC->unk38->func_001D6600();
        if (unk35C != 0) {
            return;
        }
    }
    if (unk124->unk138 != 0) {
        return;
    }
    D_002B91AC->unk3C->func_001D6600();
    D_002B91AC->unk34->func_001D6600();
}

