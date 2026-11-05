/* 10 functions from 0x000C38B0 to 0x000C4640, found by Ghidra. */
#include "common.h"

extern int D_0027E0A4;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

struct C_001B1980 {
    void func_001B1980(void);
    void func_001B1860(int, float, int, float, int, int, float, int, float, int, int, int, int);
};

struct DelObjC_000C4 {
    virtual void Destroy(int a0);
};

/* BmxUIPageDemo */
struct C_000C4460 {
    char pad0[0x280];
    C_001B1980 *unk280;
    char pad284[0x4];
    int unk288;
    void func_00157960(void);
    void func_000C4460(void);
};

/* BmxUIPageMain */
struct C_000C45E0 {
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
    u32 unk2A0;
    u32 unk2A4;
    char pad2A8[4];
    u32 unk2AC;
    u32 unk2B0;
    u32 unk2B4;
    u32 unk2B8;
    u32 unk2BC;
    u32 unk2C0;
    C_001D6410 *unk2C4;
    u32 unk2C8;
    u32 unk2CC;
    u32 unk2D0;
    u32 unk2D4;
    u32 unk2D8;
    u32 unk2DC;
    u32 unk2E0;
    u32 unk2E4;
    u32 unk2E8;
    u32 unk2EC;
    u32 unk2F0;
    u32 unk2F4;
    DelObjC_000C4 *unk2F8[10];
    u32 arr320[12];
    char pad350[0xc];
    u32 unk35C;
    u32 unk360;
    u32 unk364;
    void func_001BE3F0(void);
    void func_001BE360(int a);
    void func_000C45E0(void);
    C_000C45E0 *func_000C44C0(int a);
};

void C_000C4460::func_000C4460(void)
{
    if (unk288 != 0) {
        unk280->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    } else {
        unk280->func_001B1980();
    }
    func_00157960();
}

void C_000C45E0::func_000C45E0(void)
{
    vtbl = &D_0027E0A4;
    for (int i = 0; i < 10; i++) {
        if (unk2F8[i] != 0) {
            unk2F8[i]->Destroy(1);
        }
        unk2F8[i] = 0;
    }
    C_001D6410 *p = unk2C4;
    if (p != 0) {
        p->func_001D6410();
        func_001E891B(p);
        unk2C4 = 0;
    }
    func_001BE3F0();
}

