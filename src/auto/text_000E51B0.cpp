/* 1 function from 0x000E51B0 to 0x000E5FF0, found by Ghidra. */
#include "common.h"

struct C_000E51B0_W {
    int w[0x60 / 4];
    void func_001D5760();
    void func_001D5810(int a, int b, int c, int d);
};

struct C_000E51B0_G {
    char pad0[0x2ec];
    int *f2ec;
    char pad2f0[0x10];
    int *f300;
};

struct BmxUIPageRiderOps {
    int w[0x900 / 4];
    void func_001BE4F0(int a, int b, int c);
    void *func_000E51B0(int a1, int a2, int a3);
};
