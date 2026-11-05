/* 10 functions from 0x00049470 to 0x0004A360, found by Ghidra. */
#include "common.h"

extern int D_0027718C;

struct C_00198390 {
    void func_00198390(void);
};

struct S_00049A20_Inner {
    int unk0;
    C_00198390 *f4;
};

struct S_00049A20_Holder {
    S_00049A20_Inner *f0;
};

struct S_00049A20_Arg {
    char pad0[0x2e4];
    S_00049A20_Holder *f2E4;
    S_00049A20_Holder *f2E8;
};

struct C_00030F90 {
    void func_00030F90(int param_1);
};

struct C_00049C00 {
    void *vtbl;
    char pad4[0x2c4];
    u32 f2C8;
    u32 f2CC;
    u32 f2D0;
    u32 f2D4;
    u32 f2D8;
    u32 f2DC;
    u32 f2E0;
    u32 f2E4;
    u32 f2E8;
    C_00049C00 *func_00049C00(int param_1);
};

struct C_00049BD0 {
    int unk0;
    int unk4;
    char pad8[0x78];
    int unk80;
    int unk84;
    int unk88;
    int unk8C;
    C_00049BD0* func_00049BD0(void);
};


void func_00049A20(S_00049A20_Arg *arg) {
    arg->f2E4->f0->f4->func_00198390();
    arg->f2E8->f0->f4->func_00198390();
}

C_00049BD0* C_00049BD0::func_00049BD0(void) {
    extern int D_00277184;
    unk0 = (int)&D_00277184;
    unk4 = 0;
    unk80 = 0;
    unk84 = 0;
    unk88 = 0;
    unk8C = 0;
    return this;
}
