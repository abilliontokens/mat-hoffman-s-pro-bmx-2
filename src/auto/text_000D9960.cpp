/* 7 functions from 0x000D9960 to 0x000DA390, found by Ghidra. */
#include "common.h"

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

extern int D_0027F5CC;

struct S_000DA320_Obj {
    virtual void destroying(int flag);
};

struct BmxUIPageViewVideosTitle {
    void *vtbl;
    char pad4[0x314 - 4];
    S_000DA320_Obj *arr314[4];
    S_000DA320_Obj *arr324[2];
    void func_001BE3F0();
    void func_000DA320();
};

struct RenderEntryHOF {
    char pad0[0x38];
    u32 f38;
    char pad3C[0x1C];
    u8 b58;
};

struct BmxUIPageHOF {
    void *vtbl;
    char pad4[0x2B8 - 4];
    s16 unk2B8;
    char pad2BA[0x2EC - 0x2BA];
    RenderEntryHOF *arr2EC[2];
    RenderEntryHOF *arr2F4[2];
    RenderEntryHOF *arr2FC[2];
    void func_001BF000();
    void func_000DA0C0();
};

struct C_000DA140 {
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
    void func_000D9DC0();
    void func_000D9FE0();
    void func_001BEE30(int a, int b);
    void func_000D5860();
    void func_00157960();
    void func_000DA140();
};

void C_000DA140::func_000DA140() {
    if (unk29C != 0) {
        unk2AC = 1;
        unk2A8 = 0;
        func_000D9DC0();
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

void BmxUIPageViewVideosTitle::func_000DA320()
{
    int i;
    vtbl = (void *)&D_0027F5CC;
    for (i = 0; i < 4; i++) {
        if (arr314[i] != 0) {
            arr314[i]->destroying(1);
            arr314[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (arr324[i] != 0) {
            arr324[i]->destroying(1);
            arr324[i] = 0;
        }
    }
    func_001BE3F0();
}

