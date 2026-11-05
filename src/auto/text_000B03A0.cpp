/* 4 functions from 0x000B03A0 to 0x000B1350, found by Ghidra. */
#include "common.h"

extern int D_0027CE64;

struct C_002A8490 {
    char pad0[0x124];
    int f124;
};
extern C_002A8490 *D_002A8490;

void __stdcall func_00157A00(float);

struct C_000B1320 {
    int func_000B1320(float dt);
};

struct C_000B11C0 {
    void *vtbl;
    char pad04[0x30];
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    void func_00157600(int a0);
    C_000B11C0 *func_000B11C0(int param_1);
};

C_000B11C0 *C_000B11C0::func_000B11C0(int param_1) {
    func_00157600(param_1);
    unk44 = 0;
    unk48 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    unk4C = 0;
    unk50 = 0;
    unk40 = 0;
    vtbl = &D_0027CE64;
    return this;
}

int __stdcall func_000B1320(int param_1) {
    if (D_002A8490->f124 == 0) {
        func_00157A00(param_1);
    }
    return 1;
}
