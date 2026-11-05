/* 3 functions from 0x001C8960 to 0x001C9920, found by Ghidra. */
#include "common.h"
struct C_001C96E0_Node {
    char pad0[0xd4];
    int fD4;
    void func_001B07A0(void);
};

struct C_001C96E0_Entry {
    int f0;
    C_001C96E0_Node *f4;
    int f8;
    int fC;
};

struct C_001C96E0_Mgr {
    char pad0[0x14];
    C_001C96E0_Entry *f14;
};

struct C_001C96E0_Tbl {
    char pad0[0x10];
    int f10[1];
};

struct C_001C96E0_Cfg {
    char pad0[0x3c];
    int f3c;
};

struct C_001C96E0_Ctx {
    char pad0[0x2c];
    C_001C96E0_Cfg *f2c;
};

struct C_001C96E0_Global {
    char pad0[4];
    C_001C96E0_Ctx *f4;
};

struct C_001C96E0_Slot {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
};

extern C_001C96E0_Global *D_002EFDB8;
extern C_001C96E0_Mgr *D_002A829C;
extern C_001C96E0_Tbl *D_002F0630;

struct C_001C96E0 {
    char pad0[0x108];
    int *f108;
    int f10C;
    char pad110[0x110];
    C_001C96E0_Slot *f220;
    int f224;
    void func_001578D0(void);
    void func_001C96E0(void);
};

void C_001C96E0::func_001C96E0(void) {
    int idx = D_002EFDB8->f4->f2c->f3c;
    C_001C96E0_Node *node;

    if (f108[idx] == 0) {
        f10C = 0;
        func_001578D0();
        return;
    }
    f10C = 1;
    node = D_002A829C->f14[f220[idx].f4].f4;
    node->func_001B07A0();
    f224 = D_002F0630->f10[node->fD4];
    func_001578D0();
}
