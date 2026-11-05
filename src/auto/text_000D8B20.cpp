/* 9 functions from 0x000D8B20 to 0x000D9960, found by Ghidra. */
#include "common.h"
extern int D_0027F49C;

struct RenderEntryHOF {
    char pad0[0x38];
    u32 f38;
    char pad3C[0x1C];
    u8 b58;
};

struct BmxUIPageHOF5 {
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
    u32 arr2EC[2];
    u32 arr2F4[2];
    void *arr2FC[2];
    u32 arr304[5];
    void func_001BE360(int a0);
    BmxUIPageHOF5 *func_000D8C70(int a0);
};

struct BmxUIPageHOF4 {
    void *vtbl;
    char pad4[0x2C0 - 4];
    s16 unk2C0;
    char pad2C2[0x2F4 - 0x2C2];
    RenderEntryHOF *arr2F4[2];
    RenderEntryHOF *arr2FC[2];
    RenderEntryHOF *arr304[2];
    void func_001BF000();
    void func_000D8B20();
};
#include "ghidra.h"

struct C_001D6600 {
    void func_001D6600();
};

struct S_002B91AC {
    char pad0[0x34];
    C_001D6600 *unk34;
    int unk38;
    C_001D6600 *unk3C;
};

extern S_002B91AC *D_002B91AC;

void __stdcall func_001BEE30(int a, int b);

struct C_000D9750 {
    char pad0[0x29C];
    int unk29C;
    int unk2A0;
    int unk2A4;
    int unk2A8;
    int unk2AC;
    int unk2B0;
    int unk2B4;
    int unk2B8;
    int unk2BC;
    float unk2C0;
    void func_000D9530();
    void func_000D9FE0();
    void func_000D5860();
    void func_00157960();
    void func_000D9750();
};

void C_000D9750::func_000D9750() {
    if (unk29C != 0) {
        unk2AC = 1;
        unk2A8 = 0;
        func_000D9530();
        unk2B0 = 0xff;
        unk2B4 = 0;
        unk2B8 = 0;
        unk2BC = 0;
        unk2C0 = 0.25f;
        func_001BEE30(0, 1);
        unk29C = 0;
    }
    if (unk2A0 != 0) {
        func_000D9FE0();
        unk2B0 = 0;
        unk2B4 = 0xff;
        unk2B8 = 0xff;
        unk2BC = 0;
        unk2C0 = 0.25f;
        unk2A0 = 0;
    }
    D_002B91AC->unk34->func_001D6600();
    D_002B91AC->unk3C->func_001D6600();
    func_000D5860();
    func_00157960();
}
