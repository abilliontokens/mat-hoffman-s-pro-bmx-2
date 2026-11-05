/* 7 functions from 0x0013C960 to 0x0013D780, found by Ghidra. */
#include "common.h"

struct S_0013C960_Rec {
    char pad0[0x28];
};

int func_001EA426(void *p, int a);

struct S_0013C960_Elem {
    int f0;
    int f4;
    void *f8;
    int fC;
    int f10;
    int f14;
    unsigned int f18;
    int f1C;
};

struct C_0013C960 {
    char pad0[0xc];
    S_0013C960_Rec *fC;
    char pad10[0xe8 - 0x10];
    S_0013C960_Elem *fE8;
    char padEC[4];
    int fF0;
    int fF4;
    char padF8[4];
    int fFC;
    int func_0013B130(int a0);
    int func_0013C3D0(int a0, int a1, int *out);
    void func_0013B040(int a0);
    int func_0013D310(int a0, int a1, int *a2, int *a3, int a4);
    int func_0013B760(S_0013C960_Rec *p, int v);
    int func_0013BBA0(S_0013C960_Rec *p, int a1, int a2, int a3);
    int func_0013C9F0(int a0, int a1);
    int func_0013C960(int a0, int a1, int a2);
};

int C_0013C960::func_0013C960(int a0, int a1, int a2)
{
    S_0013C960_Elem *elem = &fE8[a0];
    S_0013C960_Rec *p = &fC[elem->f0];

    if (func_0013B760(p, elem->fC + elem->f10) == 0) {
        return 0;
    }
    int avail = elem->f14 - elem->f10;
    int n = a2 > avail ? avail : a2;
    if (n < 1) {
        return 0;
    }
    int r = func_0013BBA0(p, elem->f4, a1, n);
    elem->f10 += r;
    return r;
}

int C_0013C960::func_0013C9F0(int a0, int a1)
{
    int local = func_0013B130(a0);
    if (local == -1) {
        if (fFC == 0) {
            return -1;
        }
        if (func_0013C3D0(a0, a1, &local) == 0) {
            return -1;
        }
    }
    func_0013B040(local);
    return local;
}
