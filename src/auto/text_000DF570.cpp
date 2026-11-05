/* 7 functions from 0x000DF570 to 0x000E00F0, found by Ghidra. */
#include "common.h"

struct S_000DFC90_Obj {
    void func_000951B0(int i);
    void func_00095200(int i);
};

struct S_000DFC90_Mid {
    char pad0[0x2fc];
    S_000DFC90_Obj *p2fc;
};

struct S_000DFC00_Data {
    char pad0[0xa00];
    int fa00;
    char pada04[4];
    int fa08;
};

struct S_000DFC00_Mid {
    char pad0[4];
    S_000DFC00_Data *p4;
};

struct S_000DFC00_Widget {
    char pad0[0x48];
    u32 unk48;
    char pad4c[2];
    u8 unk4e;
    void func_0005E840(int v);
};

struct S_000DFC00_Root {
    char pad0[0x44];
    S_000DFC00_Widget *unk44;
};

struct S_002A8490_DF {
    char pad0[0x2e0];
    S_000DFC90_Mid *p2e0;
    char pad2e4[4];
    S_000DFC00_Mid *p2e8;
};

extern S_002A8490_DF *D_002A8490;
extern S_000DFC00_Root *D_002B91AC;

struct C_000DFC00 {
    char pad0[0x280];
    int unk280;
    char pad284[0xB4];
    int unk338[19];
    void func_000DFC00();
    void func_000DFC90();
};
