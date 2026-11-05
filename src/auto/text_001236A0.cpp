/* 10 functions from 0x001236A0 to 0x00123F20, found by Ghidra. */
#include "common.h"

extern int D_002B92F4;

struct C_002B92A0 {
    void func_000264C0(int param_1);
};
extern C_002B92A0 D_002B92A0;

#pragma optimize("y", off)
void func_00123770(int a1, int a2, int a3, int a4, int a5, int a6) {
    int func_0011AC30(...);
    int func_0011ACC0(...);
    int func_00120FF0(...);
    D_002B92A0.func_000264C0(a3);
    func_0011AC30(&D_002B92A0, &D_002B92A0);
    func_0011ACC0(&D_002B92A0, a6, &D_002B92A0);
    func_00120FF0(a1, a2, a4, a5, &D_002B92A0);
}
#pragma optimize("", on)

void func_00123940(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    int func_001237D0(...);
    D_002B92F4 = a7;
    func_001237D0(a1, a2, a3, a4, a5, a6, a8);
}

void func_00123C50(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    int func_00123AF0(...);
    D_002B92F4 = a7;
    func_00123AF0(a1, a2, a3, a4, a5, a6);
}

void func_00123EF0(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    int func_00123DE0(...);
    D_002B92F4 = a7;
    func_00123DE0(a1, a2, a3, a4, a5, a6);
}

