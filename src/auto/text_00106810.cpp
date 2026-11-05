/* 4 functions from 0x00106810 to 0x00107380, found by Ghidra. */
#include "common.h"
int func_001E8833(void);

struct S_106E30_Fx {
    void func_001B3E70(void *a, void *b, float c, float d, float e);
    void func_001B4970(void);
};
struct S_106E30_Cfg {
    char pad0[0x1ac];
    int f1ac;
    char pad1b0[4];
    int f1b4;
    int f1b8;
    int f1bc;
    char v1c0[0x10];
    char v1d0[0x10];
    char v1e0[0x10];
    char v1f0[0x10];
    char v200[0x10];
    char v210[0x10];
};
struct C_00106E30 {
    char pad0[0x950];
    S_106E30_Cfg *f950;
    char pad954[0x1238 - 0x954];
    S_106E30_Fx *f1238;
    S_106E30_Fx *f123c;
    S_106E30_Fx *f1240;
    void func_00106E30(void);
};
