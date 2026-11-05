/* 30 functions from 0x0015A660 to 0x0015B660, found by Ghidra. */
#include "common.h"
struct C_0015B150 {
    int unk0;
    int unk4;
    int unk8;
    C_0015B150* func_0015B150(void);
};


C_0015B150* C_0015B150::func_0015B150(void) {
    extern int D_002876E0;
    unk0 = (int)&D_002876E0;
    unk4 = 0;
    unk8 = 0;
    return this;
}
