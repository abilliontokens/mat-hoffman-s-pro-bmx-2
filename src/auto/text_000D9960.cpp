/* 7 functions from 0x000D9960 to 0x000DA390, found by Ghidra. */
#include "common.h"
#include <string.h>

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
    char pad4[0x280 - 4];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    int unk294;
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
    int unk2DC;
    int unk2E0;
    int unk2E4;
    int arr2E8[11];
    S_000DA320_Obj *arr314[4];
    S_000DA320_Obj *arr324[2];
    int arr32C[11];
    void func_001BE360(int a0);
    void func_001BE3F0();
    BmxUIPageViewVideosTitle *func_000DA210(int a0);
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

struct S_000D9FE0_Widget {
    void func_001B1980();
    void func_001B17D0(char *s);
    void func_001B1A30(float a, float b, float c);
    void func_001B19A0(int a);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct S_000D9FE0_Res {
    void func_00103350();
};

struct S_000D9FE0_Owner {
    S_000D9FE0_Res *func_000BA9B0(int a);
};

struct C_000DA140 {
    char pad0[0x124];
    S_000D9FE0_Owner *f124;
    char pad128[0x29C - 0x128];
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
    S_000D9FE0_Widget *a2C4[5];
    S_000D9FE0_Widget *a2D8[5];
    char pad2EC[0x18];
    S_000D9FE0_Widget *a304[5];
    void func_000D9DC0();
    void func_000D9FE0();
    void func_001BEE30(int a, int b);
    void func_000D5860();
    void func_00157960();
    void func_000DA140();
};

void C_000DA140::func_000D9FE0()
{
    S_000D9FE0_Owner *owner = f124;
    int i;
    for (i = 0; i < 5; i++) {
        a2C4[i]->func_001B1980();
        a2D8[i]->func_001B1980();
        a2C4[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        a2D8[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        a304[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
    owner->func_000BA9B0(0x21)->func_00103350();
}

void BmxUIPageHOF::func_000DA0C0()
{
    RenderEntryHOF **p = arr2EC;
    int n = 2;
    do {
        RenderEntryHOF *a = p[4];
        a->f38 = ((s32)unk2B8 << 24) | (a->f38 & 0xffffff);
        a->b58 |= 2;
        RenderEntryHOF *b = p[0];
        b->f38 = ((s32)unk2B8 << 24) | (b->f38 & 0xffffff);
        b->b58 |= 2;
        RenderEntryHOF *c = p[2];
        c->f38 = ((s32)unk2B8 << 24) | (c->f38 & 0xffffff);
        c->b58 |= 2;
        p++;
        n--;
    } while (n != 0);
    func_001BF000();
}

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

BmxUIPageViewVideosTitle *BmxUIPageViewVideosTitle::func_000DA210(int a0)
{
    int i;

    func_001BE360(a0);
    vtbl = (void *)&D_0027F5CC;
    unk284 = 0;
    unk294 = 0;
    unk288 = 0;
    unk280 = 0;
    unk28C = 0;
    unk290 = 0;
    unk29C = 0;
    unk2A0 = 0;
    unk298 = 0;
    unk2A4 = 0;
    unk2AC = 0;
    unk2A8 = 0;
    unk2B0 = 0;
    memset(arr2E8, 0, sizeof(arr2E8));
    unk2B4 = 0;
    unk2B8 = -1;
    unk2BC = 1;
    for (i = 0; i < 4; i++) {
        arr314[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        arr324[i] = 0;
    }
    unk2CC = 1;
    unk2C4 = -1;
    unk2C0 = 6;
    unk2C8 = 0;
    for (i = 0; i < 11; i++) {
        arr32C[i] = 0;
    }
    unk2D0 = 0;
    unk2D4 = 0;
    unk2D8 = 0;
    unk2DC = 0;
    unk2E0 = 0;
    unk2E4 = 0;
    return this;
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

