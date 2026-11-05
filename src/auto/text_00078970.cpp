/* 6 functions from 0x00078970 to 0x00079800, found by Ghidra. */
#include "common.h"

extern int D_00278EDC;

struct S_00079790_Obj {
    virtual void destroying(int flag);
};

struct C_00078D60_Sound {
    void func_00031610(int a0, int a1);
};

struct C_00078D60 {
    char pad0[0x9C];
    float f9C;
    int fA0;
    int fA4;
    char padA8[0xD8 - 0xA8];
    C_00078D60_Sound *fD8;
    char padDC[0xE8 - 0xDC];
    int fE8;
    int fEC;
    int func_00157BF0(int *a0, int a1);
    int func_00078D60(int *param_1, int param_2);
};

struct C_0005ECA0 {
    void func_0005ECA0(void *param);
};

struct C_00079790 {
    void *vtbl;
    char pad4[0x158];
    S_00079790_Obj *f15C[10];
    int f184;
    C_00079790 *func_00079790(void *param);
    void func_000797C0(void);
    void func_00078E60(void);
};

int C_00078D60::func_00078D60(int *param_1, int param_2) {
    int func_001361E0(int, int, int *, int);
    if (fA0 == 0 && fA4 == 0) {
        if (func_001361E0(4, 2, param_1, -2147483648) == 0 &&
            func_001361E0(23, 2, param_1, -2147483648) == 0) {
            if (func_001361E0(5, 2, param_1, -2147483648) == 0 &&
                func_001361E0(24, 2, param_1, -2147483648) == 0) {
                return func_00157BF0(param_1, param_2);
            }
            if (fE8 != 0 || fEC != 0) {
                return 0;
            }
            fD8->func_00031610(4, 1);
            fA4 = 1;
            f9C = 0.0f;
            return 0;
        }
        fD8->func_00031610(4, 1);
        fA0 = 1;
        f9C = 0.0f;
    }
    return 0;
}

C_00079790 *C_00079790::func_00079790(void *param)
{
    int i;
    ((C_0005ECA0 *)this)->func_0005ECA0(param);
    vtbl = (void *)&D_00278EDC;
    for (i = 0; i < 10; i++) {
        f15C[i] = 0;
    }
    f184 = 0;
    return this;
}

void C_00079790::func_000797C0(void)
{
    int i;
    vtbl = (void *)&D_00278EDC;
    for (i = 0; i < 10; i++) {
        if (f15C[i] != 0) {
            f15C[i]->destroying(1);
            f15C[i] = 0;
        }
    }
    func_00078E60();
}

