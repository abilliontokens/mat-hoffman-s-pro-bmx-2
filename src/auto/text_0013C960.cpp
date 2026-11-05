/* 7 functions from 0x0013C960 to 0x0013D780, found by Ghidra. */
#include "common.h"

struct S_0013C960_Rec {
    char pad0[0x28];
};

struct S_0013C960_Elem {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    char pad18[0x20 - 0x18];
};

struct C_0013C960 {
    char pad0[0xc];
    S_0013C960_Rec *fC;
    char pad10[0xe8 - 0x10];
    S_0013C960_Elem *fE8;
    char padEC[0xfc - 0xec];
    int fFC;
    int func_0013B130(int a0);
    int func_0013C3D0(int a0, int a1, int *out);
    void func_0013B040(int a0);
    int func_0013B760(S_0013C960_Rec *p, int v);
    int func_0013BBA0(S_0013C960_Rec *p, int a1, int a2, int a3);
    int func_0013C9F0(int a0, int a1);
    int func_0013C960(int a0, int a1, int a2);
};
