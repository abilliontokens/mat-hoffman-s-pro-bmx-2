/* 3 functions from 0x000E7AD0 to 0x000E8740, found by Ghidra. */
#include "common.h"

struct C_001B1980 {
    void func_001B1980(void);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6,
                       int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_000E86C0 {
    char pad0[0x474];
    int unk474;
    char pad478[4];
    int unk47C;
    int unk480;
    int unk484;
    int unk488;
    float unk48C;
    char pad490[0xE8];
    C_001B1980 *unk578[5];
    void func_000E86C0(void);
    void func_000E8630(void);
};

void C_000E86C0::func_000E86C0(void) {
    int i;

    unk47C = 0;
    unk480 = 0xff;
    unk484 = 0xff;
    unk488 = 0;
    unk48C = 0.25f;
    for (i = 0; i < 5; i++) {
        unk578[i]->func_001B1980();
        unk578[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.0f, 0, 0.25f, 0, 0);
    }
}
