/* 3 functions from 0x000C9940 to 0x000CA940, found by Ghidra. */
#include "common.h"

struct SetterObj_C9 {
    void func_001B1980(void);
    void func_001B17D0(int v);
};

struct GObj4_C9 {
    char pad0[0xf78];
    int f78;
    char padf7c[4];
    int f80;
};

struct GObj2E8_C9 {
    char pad0[4];
    GObj4_C9 *p4;
};

struct GObjRoot_C9 {
    char pad0[0x2e8];
    GObj2E8_C9 *p2E8;
};

extern GObjRoot_C9 *D_002A8490;

struct C_000CA8D0 {
    char pad0[0x2e0];
    SetterObj_C9 *unk2E0;
    char pad2e4[4];
    int unk2E8;
    void func_000CA8D0(void);
};

void C_000CA8D0::func_000CA8D0(void)
{
    unk2E0->func_001B1980();
    switch (unk2E8) {
    case 0:
        unk2E0->func_001B17D0(D_002A8490->p2E8->p4->f78);
        break;
    case 1:
        unk2E0->func_001B17D0(D_002A8490->p2E8->p4->f80);
        break;
    }
}
