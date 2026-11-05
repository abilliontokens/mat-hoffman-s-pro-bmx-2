/* 3 functions from 0x000CDEB0 to 0x000CEA00, found by Ghidra. */
#include "common.h"
struct C_000CE0A0 {
    char pad0[0x4C4];
    int unk4C4;
    int unk4C8;
    int unk4CC;
    int unk4D0;
    int unk4D4;
    void func_000CE0A0(void);
};


void C_000CE0A0::func_000CE0A0(void) {
    unk4C4 = 255;
    unk4C8 = 0;
    unk4CC = 0;
    unk4D0 = 0;
    unk4D4 = 1048576000;
}
