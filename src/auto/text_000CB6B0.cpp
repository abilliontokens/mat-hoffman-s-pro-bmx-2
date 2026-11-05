/* 5 functions from 0x000CB6B0 to 0x000CC620, found by Ghidra. */
#include "common.h"

extern int D_0028F5E0;

struct C_000CB6B0_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B19A0(int v);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_00093120 {
    void func_00093120();
};

struct C_000CC2B0 {
    char pad0[0x298];
    C_000CB6B0_Widget *f298[2];
    char pad2A0[0x1c];
    int f2BC;
    char pad2C0[0x38];
    C_00093120 *f2F8;
    void func_000CC2B0();
};

void C_000CC2B0::func_000CC2B0()
{
    int i;

    f2F8->func_00093120();
    for (i = 0; i < 2; i++) {
        f298[i]->func_001B1980();
        if (i == f2BC) {
            f298[i]->func_001B2270(0xffbfa35a);
            f298[i]->func_001B19A0(D_0028F5E0);
            f298[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.45f, 0, 0.25f, 0, 0);
        } else {
            f298[i]->func_001B2270(0xffcccccc);
            f298[i]->func_001B19A0(D_0028F5E0);
            f298[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        }
    }
}
