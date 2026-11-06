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
    void func_00157A00(float dt);
};

struct C_000B1200_Entry {
    int unk0;
    int unk4;
    void *unk8;
    void *unkC;
};

extern "C" void func_001E891B(void *p);

struct C_000B11C0 {
    void *vtbl;
    char pad04[0x30];
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    void *unk44;
    void *unk48;
    C_000B1200_Entry **unk4C;
    void **unk50;
    void func_00157600(int a0);
    void func_00157660(void);
    void func_000B1200(void);
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

void C_000B11C0::func_000B1200(void)
{
    int i;

    vtbl = &D_0027CE64;
    if (unk50 != 0) {
        for (i = 0; i < unk40; i++) {
            func_001E891B(unk50[i]);
        }
        if (unk50 != 0) {
            func_001E891B(unk50);
            unk50 = 0;
            unk40 = 0;
        }
    }
    if (unk4C != 0) {
        for (i = 0; i < unk3C; i++) {
            if (unk4C[i]->unk8 != 0) {
                func_001E891B(unk4C[i]->unk8);
                unk4C[i]->unk8 = 0;
                unk4C[i]->unk0 = 0;
            }
            if (unk4C[i]->unkC != 0) {
                func_001E891B(unk4C[i]->unkC);
                unk4C[i]->unkC = 0;
                unk4C[i]->unk4 = 0;
            }
            func_001E891B(unk4C[i]);
        }
        if (unk4C != 0) {
            func_001E891B(unk4C);
            unk4C = 0;
            unk3C = 0;
        }
    }
    if (unk44 != 0) {
        func_001E891B(unk44);
        unk44 = 0;
        unk34 = 0;
    }
    if (unk48 != 0) {
        func_001E891B(unk48);
        unk48 = 0;
        unk38 = 0;
    }
    func_00157660();
}

int C_000B1320::func_000B1320(float dt) {
    if (D_002A8490->f124 == 0) {
        func_00157A00(dt);
    }
    return 1;
}
