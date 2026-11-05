/* 20 functions from 0x001B4E20 to 0x001B5D90, found by Ghidra. */
#include "common.h"
struct C_001B59E0 {
    int unk0;
    int unk4;
    char unk8;
    C_001B59E0* func_001B59E0(void);
};


C_001B59E0* C_001B59E0::func_001B59E0(void) {
    extern int D_0028CC28;
    unk0 = (int)&D_0028CC28;
    unk4 = 0;
    unk8 = 0;
    return this;
}
