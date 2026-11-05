/* 8 functions from 0x000D5C70 to 0x000D6BC0, found by Ghidra. */
#include "common.h"
extern int D_0027F2D4;

struct ElemHOF2 {
    virtual void Destroy(int a0);
    char pad4[0x34];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
};

struct BmxUIPageHOF2 {
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
    ElemHOF2 *arr2C4[2];
    ElemHOF2 *arr2CC[2];
    u32 arr2D4[5];
    u32 arr2E8[5];
    ElemHOF2 *arr2FC[2];
    u32 arr304[5];
    void func_001BE360(int a0);
    void func_001BE3F0();
    void func_001BF000();
    BmxUIPageHOF2 *func_000D5D40(int a0);
    void func_000D5E00();
    void func_000D6B40();
};
