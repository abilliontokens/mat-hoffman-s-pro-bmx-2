/* 5 functions from 0x00013A40 to 0x000149A0, found by Ghidra. */
#include "common.h"

struct S_11FF0_State3 {
    void *vtbl;
    int f4;
    char pad8[8];
    int f10;
    char pad14[8];
    int **f1c;
    void func_00012240(void *arg1, float arg2);
};

struct S_11FF0_StateA {
    void *vtbl;
    char pad4[4];
    int f8;
    char padC[8];
    int f14;
    char pad18[8];
    int **f20;
    void func_000122E0(void *arg1, float arg2);
};

struct S_11FF0_StateB {
    void *vtbl;
    char pad4[8];
    int fC;
    char pad10[8];
    int f18;
    char pad1C[8];
    int **f24;
    void func_00012380(void *arg1, float arg2);
};

struct C_00013F50_Dst {
    char pad0[0x3AC];
    int f3ac;
    char pad3b0[0x31];
    u8 f3e1;
};

struct C_00013F50 {
    char pad0[4];
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int *f1c;
    int *f20;
    int *f24;
    void func_00013F50(C_00013F50_Dst *dst, int kind, void *arg1, float arg2);
};

void C_00013F50::func_00013F50(C_00013F50_Dst *dst, int kind, void *arg1, float arg2)
{
    dst->f3ac = 0;
    switch (kind) {
    case 0:
        if (f20 != 0) {
            ((S_11FF0_StateA *)this)->func_000122E0(arg1, arg2);
            dst->f3ac = f20[f8];
            dst->f3e1 = 1;
        }
        break;
    case 1:
        if (f1c != 0) {
            ((S_11FF0_State3 *)this)->func_00012240(arg1, arg2);
            dst->f3ac = f1c[f4];
            dst->f3e1 = 1;
        }
        break;
    case 2:
        if (f24 != 0) {
            ((S_11FF0_StateB *)this)->func_00012380(arg1, arg2);
            dst->f3ac = f24[fC];
            dst->f3e1 = 1;
        }
        break;
    }
}
