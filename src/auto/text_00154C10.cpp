/* 4 functions from 0x00154C10 to 0x00155890, found by Ghidra. */
#include "common.h"

extern int D_00286DD4;

struct C_001C7310 {
    void func_001C7310(void *param);
};

struct C_00155450 {
    void *vtbl;
    char pad4[0x380];
    int f384, f388, f38C, f390, f394, f398, f39C, f3A0;
    int f3A4, f3A8, f3AC, f3B0, f3B4, f3B8;
    char pad3BC[0x28];
    int f3E4;
    C_00155450 *func_00155450(void *param);
};
