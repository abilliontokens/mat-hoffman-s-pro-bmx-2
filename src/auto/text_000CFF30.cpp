/* 5 functions from 0x000CFF30 to 0x000D0E00, found by Ghidra. */
#include "common.h"

extern int D_0028F5E0;

struct C_000D0D_Obj {
    void func_00093120();
    void func_00094620(int a1, int a2, int a3, int a4, int a5, int a6);
};

struct C_000D0D_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_000D0DD0 {
    char pad0[0x4BC];
    int unk4BC;
    char pad4C0[0x38];
    C_000D0D_Obj *unk4F8;
    char pad4FC[0x40];
    int unk53C;
    int unk540;
    int unk544;
    int unk548;
    int unk54C;
    char pad550[0x3C];
    int unk58C;
    char pad590[4];
    C_000D0D_Widget *unk594;
    int unk598;
    void func_000D0DD0(void);
    void func_000D0D20(void);
    void func_000D0D60(void);
};


void C_000D0DD0::func_000D0D20(void)
{
    unk4F8->func_00093120();
    unk4F8->func_00094620(0x43a00000, 0x42c80000, D_0028F5E0, 0, 0, 0);
}

void C_000D0DD0::func_000D0DD0(void) {
    unk53C = 0;
    unk540 = 178;
    unk544 = 178;
    unk548 = 0;
    unk54C = 1065353216;
    unk58C = 0;
}
