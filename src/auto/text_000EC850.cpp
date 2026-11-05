/* 8 functions from 0x000EC850 to 0x000ED850, found by Ghidra. */
#include "common.h"
struct C_000ECD90 {
    char pad0[0x364];
    int unk364;
    char pad368[0x18];
    int unk380;
    int unk384;
    int unk388;
    int unk38C;
    int unk390;
    void func_000ECD90(void);
};


void C_000ECD90::func_000ECD90(void) {
    unk380 = 0;
    unk384 = 255;
    unk388 = unk364;
    unk38C = 0;
    unk390 = 1048576000;
}
