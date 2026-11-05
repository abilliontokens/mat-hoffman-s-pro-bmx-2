/* 6 functions from 0x000D4D20 to 0x000D5C70, found by Ghidra. */
#include "common.h"
extern int D_0027F20C;

struct DelObjA_000D4DD0 {
    virtual void Destroy(int a0);
};
struct DelObjB_000D4DD0 {
    virtual void Destroy(int a0);
};
struct DelObjC_000D4DD0 {
    virtual void Destroy(int a0);
};

struct S_000D5B90_Widget {
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct S_000D5B90_Res {
    void func_00103350();
};

struct S_000D5B90_Owner {
    S_000D5B90_Res *func_000BA9B0(int a);
};

struct BmxUIPageHOF {
    void *vtbl;
    char pad4[0x124 - 4];
    S_000D5B90_Owner *f124;
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
    u32 arr2C4[5];
    u32 arr2D8[5];
    DelObjA_000D4DD0 *arr2EC[2];
    DelObjB_000D4DD0 *arr2F4[2];
    DelObjC_000D4DD0 *arr2FC[2];
    u32 arr304[5];
    void func_001BE360(int a0);
    void func_001BE3F0();
    BmxUIPageHOF *func_000D4D20(int a0);
    void func_000D4DD0();
};

BmxUIPageHOF *BmxUIPageHOF::func_000D4D20(int a0)
{
    func_001BE360(a0);
    vtbl = &D_0027F20C;
    void **p = (void **)arr2D8;
    for (int i = 0; i < 5; i++) {
        p[-5] = 0;
        *p = 0;
        p[11] = 0;
        p++;
    }
    arr2EC[0] = 0;
    arr2EC[1] = 0;
    unk280 = 0;
    unk290 = 0;
    unk284 = 0;
    unk288 = 0;
    unk28C = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2AC = 0;
    unk2A8 = 0;
    unk29C = 1;
    arr2FC[0] = 0;
    arr2FC[1] = 0;
    unk2B0 = 0;
    unk2B4 = 0;
    unk2B8 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    return this;
}

void BmxUIPageHOF::func_000D4DD0()
{
    vtbl = &D_0027F20C;
    for (int i = 0; i < 2; i++) {
        if (arr2EC[i] != 0) {
            arr2EC[i]->Destroy(1);
            arr2EC[i] = 0;
        }
        if (arr2F4[i] != 0) {
            arr2F4[i]->Destroy(1);
            arr2F4[i] = 0;
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
