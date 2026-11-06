/* 4 functions from 0x000C6E70 to 0x000C7DF0, found by Ghidra. */
#include "common.h"

extern int D_0027E28C;

struct S_000C7_Obj {
    virtual void destroying(int flag);
    char pad4[0x24];
    u32 unk28;
    char pad2C[12];
    u32 unk38;
    float unk3C, unk40, unk44, unk48;
    char pad4C[12];
    unsigned char flags;
    S_000C7_Obj *func_001D5760();
    void func_001D5810(const char *, float, float, int);
    void depth(u32 v) { if (unk28 != v) { unk28 = v; flags |= 1; } }
    void color() { unk38 = (unk38 & 0xffbfa35a) | 0xbfa35a; flags |= 2; }
    void coords(float a,float b,float c,float d) { unk3C=a; unk40=b; unk44=c; unk48=d; flags |= 4; }

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

BmxUIPageTwoPlayer *BmxUIPageTwoPlayer::func_000C77D0(int a)
{
    int i;

    func_001BE360(a);
    vtbl = (void *)&D_0027E28C;
    unk28C = 0;
    unk294 = 0;
    unk284 = 0;
    unk290 = 0;
    unk288 = 0;
    unk280 = 0;
    unk298 = 0;
    unk29C = 0;
    unk2A8 = 0;
    unk2AC = 0;
    unk2B4 = 0;
    unk2B0 = 0;
    for (i = 0; i < 4; i++) {
        arr308[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        arr318[i] = 0;
    }
    unk2B8 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    unk2C4 = 0;
    unk2C8 = 0;
    unk2CC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    unk2D8 = 0;
    unk2E4 = -1;
    unk2E8 = 6;
    unk2F0 = 1;
    unk2F4 = 0;
    unk2EC = 0;
    unk2FC = 0;
    unk2F8 = 0;
    for (i = 0; i < 9; i++) {
        arr320[i] = 0;
        arr344[i] = 0;
        arr368[i] = 0;
    }
    unk2DC = 0;
    unk2E0 = -1;
    unk304 = 1.0f;
    return this;
}

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
