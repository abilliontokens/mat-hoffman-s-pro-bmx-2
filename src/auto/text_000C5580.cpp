/* 10 functions from 0x000C5580 to 0x000C6550, found by Ghidra. */
#include "common.h"

extern int D_0027E14C;

struct PageObj_5580 {
    virtual void destroy(int flags);
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

struct C_5E40_G {
    char pad0[0x34];
    C_5E40_Dst *f34;
    C_5E40_Dst *f38;
    char pad3C[0x44];
    C_5E40_Dst *f80;
    C_5E40_Dst *f84;
};

extern C_5E40_G *D_002B91AC;

struct BmxUIPageMain {
    char pad0[0x2F0];
    int f2F0;
    void func_000C4CE0();
    void func_000C4FD0();
    void func_000C5580();
    void func_00157960();
};

struct BmxUIPageParkEditor {
    void *vtbl;
    char pad4[0x120];
    C_5E40_A *f124;
    char pad128[0x158];
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
    void func_001BE360(int a);
    BmxUIPageParkEditor *func_000C58E0(int a);
    void func_000C5980();
    void func_000C5E40();
};
