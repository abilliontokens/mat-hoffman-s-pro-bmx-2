/* 6 functions from 0x000DC270 to 0x000DD1B0, found by Ghidra. */
#include "common.h"

extern int D_0027F84C;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

struct DelObjC_000DC {
    virtual void Destroy(int a0);
};

/* BmxUIPageHorseWord */
struct C_000DD130 {
    void *vtbl;
    char pad4[0x2E8];
    DelObjC_000DC *unk2EC;
    char pad2F0[0x40];
    C_001D6410 *unk330;
    char pad334[0xC];
    DelObjC_000DC *arr340[2];
    void func_001BE3F0();
    void func_000DD130();
};

struct C_000DD030 {
    void *vtbl;
    char pad4[0x27C];
    int unk280;
    int unk284;
    int unk288;
    char unk28C;
    char pad28D[7];
    char unk294;
    char pad295[0x27];
    int unk2BC;
    char unk2C0;
    char pad2C1[0xF];
    int unk2D0;
    int unk2D4;
    int unk2D8;
    int unk2DC;
    int unk2E0;
    int unk2E4;
    char pad2E8[4];
    DelObjC_000DC *unk2EC;
    int unk2F0;
    int unk2F4;
    int unk2F8;
    int unk2FC;
    int unk300;
    int unk304;
    int unk308;
    int unk30C;
    int unk310;
    int unk314;
    int unk318;
    int unk31C;
    int unk320;
    int unk324;
    int unk328;
    int unk32C;
    int unk330;
    int unk334;
    int unk338;
    int unk33C;
    int unk340;
    int unk344;
    void func_001BE360(int a);
    C_000DD030 *func_000DD030(int a);
};

struct C_000DCBF0 {
    char pad0[0x2F0];
    int unk2F0;
    int unk2F4;
    int unk2F8;
    int unk2FC;
    int unk300;
    int unk304;
    void func_000DCBF0(void);
};


void C_000DCBF0::func_000DCBF0(void) {
    unk2F0 = 0;
    unk2F4 = 128;
    unk2F8 = 128;
    unk2FC = 0;
    unk300 = 1048576000;
    unk304 = 0;
}

C_000DD030 *C_000DD030::func_000DD030(int a)
{
    func_001BE360(a);
    unk280 = 0;
    unk328 = 0;
    unk32C = 0;
    unk330 = 0;
    unk2EC = 0;
    unk284 = 0;
    unk320 = 0;
    unk324 = 0;
    unk28C = 0;
    unk294 = 0;
    unk2BC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    unk2DC = 0;
    unk2E0 = 0;
    unk2D8 = 0;
    unk2E4 = 0;
    unk2C0 = 0;
    unk2F0 = 0;
    unk2F8 = 0;
    unk2FC = 0;
    unk2F4 = 0;
    unk334 = 0;
    unk30C = 0;
    unk310 = 0;
    unk314 = 0;
    unk31C = 0;
    unk318 = 0;
    unk33C = 0;
    unk338 = 0;
    vtbl = &D_0027F84C;
    unk288 = 1;
    unk340 = 0;
    unk344 = 0;
    unk300 = 0;
    unk308 = 0;
    unk304 = 0;
    return this;
}

void C_000DD130::func_000DD130()
{
    C_001D6410 *p = unk330;
    vtbl = &D_0027F84C;
    if (p != 0) {
        p->func_001D6410();
        func_001E891B(p);
    }
    if (unk2EC != 0) {
        unk2EC->Destroy(1);
        unk2EC = 0;
    }
    for (int i = 0; i < 2; i++) {
        if (arr340[i] != 0) {
            arr340[i]->Destroy(1);
            arr340[i] = 0;
        }
    }
    func_001BE3F0();
}

