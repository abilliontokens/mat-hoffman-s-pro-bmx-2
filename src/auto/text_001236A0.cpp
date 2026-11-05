/* 10 functions from 0x001236A0 to 0x00123F20, found by Ghidra. */
#include "common.h"

extern int D_002B92F4;

struct S_001236A0_Vec3 {
    float x, y, z;
};

struct S_001236A0_Vec4 {
    float x, y, z, w;
};

struct S_001236A0_Node {
    int unk0;
    int unk4;
    unsigned short left;
    unsigned short right;
    S_001236A0_Vec3 v0;
    S_001236A0_Vec3 v1;
};

struct S_001236A0_Leaf32 {
    S_001236A0_Vec4 v0;
    S_001236A0_Vec4 v1;
};

struct S_001236A0_Leaf20 {
    int unk[5];
};

struct S_002B92E8 {
    S_001236A0_Node *nodes;
    S_001236A0_Leaf32 *leaves;
};

struct S_002B9290 {
    S_001236A0_Node *nodes;
    S_001236A0_Leaf20 *leaves;
};

extern S_002B92E8 *D_002B92E8;
extern S_002B9290 *D_002B9290;
extern int D_002B9300;

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

