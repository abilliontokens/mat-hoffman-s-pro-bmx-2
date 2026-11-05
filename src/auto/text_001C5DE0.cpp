/* 9 functions from 0x001C5DE0 to 0x001C6DA0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

struct S_001C6820_Pair {
    f32 time;
    int value;
};

struct S_001C6820_Elem {
    char pad0[0x4C];
    S_001C6820_Pair *pairs;
    int count;
};

struct C_001C6820 {
    char pad0[0xC0];
    S_001C6820_Elem *elems;
    int idx;
    int func_001C6820(f32 param_1);
};

struct C_001C67C0VT {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void func_vtbl3(int a, Vec4 *out);
};

struct C_001C67C0 {
    char pad0[0x10];
    C_001C67C0VT *obj10;
    void func_001C67C0(Vec4 *out, int param_2);
};
