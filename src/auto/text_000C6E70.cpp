/* 4 functions from 0x000C6E70 to 0x000C7DF0, found by Ghidra. */
#include "common.h"

extern int D_0027E28C;

struct S_000C7_Obj {
    virtual void destroying(int flag);
};

struct BmxUIPageTwoPlayer {
    void *vtbl;
    char pad4[0x280 - 4];
    u32 unk280;
    u32 unk284;
    u32 unk288;
    u32 unk28C;
    u32 unk290;
    u32 unk294;
    u32 unk298;
    u32 unk29C;
    char pad2A0[8];
    u32 unk2A8;
    u32 unk2AC;
    u32 unk2B0;
    u32 unk2B4;
    u32 unk2B8;
    u32 unk2BC;
    u32 unk2C0;
    u32 unk2C4;
    u32 unk2C8;
    u32 unk2CC;
    u32 unk2D0;
    u32 unk2D4;
    u32 unk2D8;
    u32 unk2DC;
    int unk2E0;
    int unk2E4;
    int unk2E8;
    u32 unk2EC;
    u32 unk2F0;
    u32 unk2F4;
    u32 unk2F8;
    u32 unk2FC;
    char pad300[4];
    float unk304;
    S_000C7_Obj *arr308[4];
    S_000C7_Obj *arr318[2];
    u32 arr320[9];
    u32 arr344[9];
    u32 arr368[9];
    void func_001BE3F0(void);
    void func_001BE360(int a);
    void func_000C7900(void);
    BmxUIPageTwoPlayer *func_000C77D0(int a);
};

void BmxUIPageTwoPlayer::func_000C7900(void)
{
    int i;
    vtbl = (void *)&D_0027E28C;
    for (i = 0; i < 4; i++) {
        if (arr308[i] != 0) {
            arr308[i]->destroying(1);
            arr308[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (arr318[i] != 0) {
            arr318[i]->destroying(1);
            arr318[i] = 0;
        }
    }
    func_001BE3F0();
}
