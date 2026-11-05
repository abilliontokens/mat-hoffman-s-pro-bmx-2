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

struct S_000D6A60_Widget {
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct S_000D6A60_Res {
    void func_00103350();
};

struct S_000D6A60_Owner {
    S_000D6A60_Res *func_000BA9B0(int a);
};

struct BmxUIPageHOF2 {
    void *vtbl;
    char pad4[0x124 - 4];
    S_000D6A60_Owner *f124;
    char pad128[0x280 - 0x128];
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
    S_000D6A60_Widget *arr2D4[5];
    S_000D6A60_Widget *arr2E8[5];
    ElemHOF2 *arr2FC[2];
    S_000D6A60_Widget *arr304[5];
    void func_001BE360(int a0);
    void func_001BE3F0();
    void func_001BF000();
    BmxUIPageHOF2 *func_000D5D40(int a0);
    void func_000D5E00();
    void func_000D6B40();
    void func_000D5860();
    void func_000D59A0();
    void func_000D5B90();
    void func_001BEE30(int a, int b);
    void func_00157960();
    void func_000D5C70();
};

struct NodeHOF2 {
    void func_001D6600();
};

struct MgrHOF2 {
    char pad0[0x34];
    NodeHOF2 *unk34;
    char pad38[4];
    NodeHOF2 *unk3C;
};
extern MgrHOF2 *D_002B91AC;

void BmxUIPageHOF2::func_000D5C70()
{
    D_002B91AC->unk34->func_001D6600();
    D_002B91AC->unk3C->func_001D6600();
    func_000D5860();
    if (unk29C != 0) {
        unk2AC = 1;
        unk2A8 = 0;
        func_000D59A0();
        unk2B0 = 0xff;
        unk2B4 = 0;
        unk2B8 = 0;
        unk2BC = 0;
        unk2C0 = 0x3e800000;
        func_001BEE30(0, 1);
        unk29C = 0;
    }
    if (unk2A0 != 0) {
        func_000D5B90();
        unk2B0 = 0;
        unk2B4 = 0xff;
        unk2B8 = 0xff;
        unk2BC = 0;
        unk2C0 = 0x3e800000;
        unk2A0 = 0;
    }
    func_00157960();
}

BmxUIPageHOF2 *BmxUIPageHOF2::func_000D5D40(int a0)
{
    func_001BE360(a0);
    vtbl = &D_0027F2D4;
    void **p = (void **)arr2E8;
    for (int i = 0; i < 5; i++) {
        p[-5] = 0;
        *p = 0;
        p[7] = 0;
        p++;
    }
    unk280 = 0;
    unk290 = 0;
    unk284 = 0;
    unk288 = 0;
    unk28C = 0;
    void **q = (void **)arr2CC;
    for (int i = 0; i < 2; i++) {
        q[-2] = 0;
        *q = 0;
        q++;
    }
    unk29C = 0;
    unk2A0 = 0;
    unk2AC = 0;
    unk2A8 = 0;
    unk2A4 = 1;
    arr2FC[0] = 0;
    arr2FC[1] = 0;
    unk2B0 = 0;
    unk2B4 = 0;
    unk2B8 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    return this;
}

void BmxUIPageHOF2::func_000D5E00()
{
    vtbl = &D_0027F2D4;
    for (int i = 0; i < 2; i++) {
        if (arr2C4[i] != 0) {
            arr2C4[i]->Destroy(1);
            arr2C4[i] = 0;
        }
        if (arr2CC[i] != 0) {
            arr2CC[i]->Destroy(1);
            arr2CC[i] = 0;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (arr2FC[i] != 0) {
            arr2FC[i]->Destroy(1);
            arr2FC[i] = 0;
        }
    }
    func_001BE3F0();
}

void BmxUIPageHOF2::func_000D6B40()
{
    ElemHOF2 **p = arr2C4;
    int n = 2;
    do {
        ElemHOF2 *a = p[0x38 / 4];
        a->f38 = ((short)unk2B8 << 24) | (a->f38 & 0xffffff);
        a->b58 |= 2;
        ElemHOF2 *b = p[0];
        b->f38 = ((short)unk2B8 << 24) | (b->f38 & 0xffffff);
        b->b58 |= 2;
        ElemHOF2 *c = p[2];
        c->f38 = ((short)unk2B8 << 24) | (c->f38 & 0xffffff);
        c->b58 |= 2;
        p++;
        n--;
    } while (n != 0);
    func_001BF000();
}

