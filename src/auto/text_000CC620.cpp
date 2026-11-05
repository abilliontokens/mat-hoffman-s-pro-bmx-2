/* 4 functions from 0x000CC620 to 0x000CCBE0, found by Ghidra. */
#include "common.h"
extern int D_0027E54C;

struct ElemC {
    char pad0[0x38];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
};

struct DelObjC_000CC {
    virtual void Destroy(int a0);
};

/* BmxUIPageMemCard */
struct BmxUIPageMemCard {
    void *vtbl;
    char pad4[0x2A0 - 4];
    ElemC *arr2A0[4];
    char pad2B0[0x3A0 - 0x2B0];
    short unk3A0;
    void func_001BF000();
    void func_000CC620();
};

/* BmxUIPageRider */
struct BmxUIPageRider {
    void *vtbl;
    char pad4[0x390 - 4];
    DelObjC_000CC *arr390[8];
    DelObjC_000CC *arr3B0[8];
    char pad3D0[0x3F8 - 0x3D0];
    DelObjC_000CC *arr3F8[2];
    DelObjC_000CC *arr400[16];
    char pad440[0x550 - 0x440];
    DelObjC_000CC *unk550;
    void func_001BE3F0();
    void func_000CCB10();
};

struct C_000CC6D0 {
    char pad0[0x328];
    int unk328;
    int unk32C;
    int unk330;
    int unk334;
    int unk338;
    int unk33C;
    void func_000CC6D0(void);
};


void BmxUIPageMemCard::func_000CC620()
{
    for (int i = 0; i < 4; i++) {
        ElemC *e = arr2A0[i];
        e->f38 = ((int)unk3A0 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
    }
    func_001BF000();
}

void C_000CC6D0::func_000CC6D0(void) {
    unk32C = 0;
    unk330 = 178;
    unk334 = 178;
    unk338 = 0;
    unk33C = 1065353216;
    unk328 = 0;
}
