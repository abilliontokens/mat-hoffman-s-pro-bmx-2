/* 8 functions from 0x001662A0 to 0x001670C0, found by Ghidra. */
#include "common.h"

void func_001E891B(void *p);

struct S_00166C80_Arg {
    char pad0[0x3c];
    int f3c;
};

int __stdcall func_00164840(S_00166C80_Arg *param_1, int param_2, int param_3);

struct C_002EF7D0 {
    int func_00162B20(int param_1, int param_2);
};

extern C_002EF7D0 *D_002EF7D0;

struct C_00166C50 {
    char pad0[0x10];
    int f10;
    char pad14[4];
    int f18;
    char pad1c[0x30 - 0x1c];
    int f30;
    int f34;
    void func_00166C50(int param_1);
};

struct C_00166E70_Outer;

struct C_00166E70 {
    void func_00164520(void);
    void func_00157660(void);
    void *func_00166E70(int flags);
};

struct C_00166E70_Outer {
    char pad0[0x220];
    C_00166E70 sub220;
};

void C_00166C50::func_00166C50(int param_1)
{
    int r = D_002EF7D0->func_00162B20(param_1, 1);
    f10 = 0;
    f18 = r;
    f30 = 0;
    f34 = 0;
}

void __stdcall func_00166C80(S_00166C80_Arg *param_1, int param_2)
{
    func_00164840(param_1, (int)param_1->f3c, param_2);
}

void *C_00166E70::func_00166E70(int flags)
{
    C_00166E70_Outer *outer = (C_00166E70_Outer *)((char *)this - 0x220);
    outer->sub220.func_00164520();
    outer->sub220.func_00157660();
    if (flags & 1) {
        func_001E891B(outer);
    }
    return outer;
}

