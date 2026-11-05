/* 10 functions from 0x0013B9C0 to 0x0013C960, found by Ghidra. */
#include "common.h"

void func_00012140(void *p);
int func_0014FED0(void *a, int b, int c);
extern "C" int D_0014FEE0(void *a);
void func_0014FE50(void *a);

struct S_0013B9C0_Ent28 {
    int f0;
    int f4;
    int f8;
    int fC;
    void *f10;
    void *f14;
    char pad18[0x10];
};

struct S_0013B9C0_Ent20 {
    int f0;
    int f4;
    char pad8[8];
    void *f10;
    void *f14;
    int f18;
    int f1C;
};

struct C_0013B9C0 {
    char pad0[0xC];
    S_0013B9C0_Ent28 *fC;
    int f10;
    char pad14[0x10];
    int *f24;
    int *f28;
    char pad2C[0x40];
    int f6C;
    int f70;
    int f74;
    int f78;
    char pad7C[0x64];
    int fE0;
    S_0013B9C0_Ent20 *fE8;
    int fEC;
    int func_0013C1D0(int a);
    int func_0013C110(int a);
    int func_0013C5D0(S_0013B9C0_Ent28 *a, int b);
    int func_0013C660(int a);
    void func_0013B440(void *a);
    int func_0013B3E0(void *a, int b);
    void func_0013AEC0(int a);
    void func_0013B840(void *a);
};

int C_0013B9C0::func_0013C1D0(int arg)
{
    int *q;
    int r;

    if (f6C != -1) {
        if (fC[f6C].f10 != 0) {
            func_00012140(fC[f6C].f10);
        }
        f74 = -1;
        f78 = -1;
        f6C = -1;
    }
    q = f24;
    do {
        *q = -1;
        q++;
    } while (q <= f28);
    func_0013B440((void *)((char *)this + 0x2c));
    r = func_0013B3E0((void *)((char *)this + 0x2c), arg);
    if (r == 0) {
        f70 = 0;
        return 0;
    }
    return 1;
}
