/* 6 functions from 0x000D4D20 to 0x000D5C70, found by Ghidra. */
#include "common.h"
extern int D_0027F20C;

struct DelObj_000D4DD0 {
    virtual ~DelObj_000D4DD0();
};

struct BmxUIPageHOF {
    void *vtbl;
    char pad4[0x280 - 4];
    u32 unk280;
    u32 unk284;
    u32 unk288;
    u32 unk28C;
    u32 unk290;
    char pad294[8];
    u32 unk29C;
    u32 unk2A0;
    u32 unk2A4;
    u32 unk2A8;
    u32 unk2AC;
    u32 unk2B0;
    u32 unk2B4;
    s32 unk2B8;
    u32 unk2BC;
    u32 unk2C0;
    u32 arr2C4[5];
    u32 arr2D8[5];
    DelObj_000D4DD0 *arr2EC[2];
    DelObj_000D4DD0 *arr2F4[2];
    DelObj_000D4DD0 *arr2FC[2];
    u32 arr304[5];
    void func_001BE360(int a0);
    void func_001BE3F0();
    BmxUIPageHOF *func_000D4D20(int a0);
    void func_000D4DD0();
};
