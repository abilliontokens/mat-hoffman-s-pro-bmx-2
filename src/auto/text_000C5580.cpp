/* 10 functions from 0x000C5580 to 0x000C6550, found by Ghidra. */
#include "common.h"

struct BmxUIPageMain {
    char pad0[0x2F0];
    int f2F0;
    void func_000C4CE0();
    void func_000C4FD0();
    void func_000C5580();
    void func_00157960();
    void func_000C58A0(void);
};

void BmxUIPageMain::func_000C58A0(void)
{
    if (f2F0 != 0) {
        func_000C4CE0();
        f2F0 = 0;
    }
    func_000C4FD0();
    func_000C5580();
    func_00157960();
}

extern int D_0027E14C;

struct PageObj_5580 {
    virtual void destroy(int flags);
    char pad4[0x24];
    int f28;
    char pad2C[0x10];
    int f3C, f40, f44, f48;
    char pad4C[0xC];
    unsigned char f58;
    PageObj_5580 *func_001D5760();
    void func_001D5810(void *, float, float, int);
};

struct C_5E40_C {
    int func_000301D0();
};

struct C_5E40_B {
    char pad0[0x74];
    C_5E40_C *f74;
};

struct C_5E40_A {
    char pad0[0x25C];
    C_5E40_B *f25C;
};

struct C_5E40_Dst {
    void func_001D6600();
};

struct C_6420_Q {
    char pad0[0x30];
    int f30;
};

struct C_6420_P {
    int f0;
    C_6420_Q *f4;
};

struct C_6420_Elem {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char b58;
    void func_001D5AD0();
};

struct C_5E40_G {
    char pad0[0x24];
    C_6420_Elem *f24;
    C_6420_Elem *f28;
    C_6420_Elem *f2C;
    C_6420_Elem *f30;
    C_5E40_Dst *f34;
    C_5E40_Dst *f38;
    char pad3C[0x14];
    C_6420_Elem *f50;
    char pad54[0x14];
    C_6420_Elem *f68;
    char pad6C[0x14];
    C_5E40_Dst *f80;
    C_5E40_Dst *f84;
    C_6420_Elem *f88;
    C_6420_Elem *f8C;
    C_6420_Elem *f90;
    C_6420_Elem *f94;
};

extern C_5E40_G *D_002B91AC;

struct BmxUIPageParkEditor {
    void *vtbl;
    char pad4[0x120];
    C_5E40_A *f124;
    char pad128[0x18];
    C_6420_P *f140;
    char pad144[0x13C];
    int f280;
    int f284;
    char pad288[4];
    int f28C;
    int f290;
    int f294;
    int f298;
    int f29C;
    int f2A0;
    int f2A4;
    char pad2A8[8];
    int f2B0;
    char pad2B4[8];
    int f2BC;
    int f2C0;
    int f2C4;
    int f2C8;
    int f2CC;
    PageObj_5580 *f2D0[4];
    void func_000C6420();
    void func_001BE360(int a);
    void func_001BE3F0();
    BmxUIPageParkEditor *func_000C58E0(int a);
    void func_000C5980();
    void func_000C5E40();
};

BmxUIPageParkEditor *BmxUIPageParkEditor::func_000C58E0(int a)
{
    int i;

    func_001BE360(a);
    vtbl = (void *)&D_0027E14C;
    for (i = 0; i < 4; i++)
        f2D0[i] = 0;
    f280 = 0;
    f284 = 0;
    f290 = 0;
    f28C = 0;
    f294 = 0;
    f298 = 0;
    f29C = 0;
    f2A0 = 0;
    f2A4 = 0;
    f2BC = 0;
    f2C0 = 0;
    f2C4 = 0;
    f2C8 = 0;
    f2CC = 0;
    f2B0 = 1;
    return this;
}

void BmxUIPageParkEditor::func_000C5980(void)
{
    int i;

    vtbl = (void *)&D_0027E14C;
    for (i = 0; i < 4; i++) {
        if (f2D0[i] != 0) {
            f2D0[i]->destroy(1);
            f2D0[i] = 0;
        }
    }
    func_001BE3F0();
}

void BmxUIPageParkEditor::func_000C5E40(void)
{
    C_5E40_B *b = this->f124->f25C;

    if (b->f74->func_000301D0() == 0)
        D_002B91AC->f38->func_001D6600();
    D_002B91AC->f80->func_001D6600();
    D_002B91AC->f84->func_001D6600();
    D_002B91AC->f34->func_001D6600();
}

