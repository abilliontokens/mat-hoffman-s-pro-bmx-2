/* 15 functions from 0x00134A10 to 0x001358A0, found by Ghidra. */
#include "common.h"
struct C_00135400 {
    char pad0[0x10];
    int unk10;
    int func_00135400(void);
};


int C_00135400::func_00135400(void) {
    return (int)&unk10;
}
