/* 11 functions from 0x001B3E70 to 0x001B4E20, found by Ghidra. */
#include "common.h"
struct C_001B4B70 {
    int unk0;
    void func_001B4B70(void);
};


void C_001B4B70::func_001B4B70(void) {
    extern int D_0028CA64;
    unk0 = (int)&D_0028CA64;
}
