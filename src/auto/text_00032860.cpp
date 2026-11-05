/* 12 functions from 0x00032860 to 0x00033680, found by Ghidra. */
#include "common.h"
struct C_00032A00 {
    char pad0[0x1C8];
    int unk1C8;
    void func_00032A00(void);
};


void C_00032A00::func_00032A00(void) {
    extern int D_002AADF8;
    unk1C8 = 0;
    D_002AADF8 = 1;
}
