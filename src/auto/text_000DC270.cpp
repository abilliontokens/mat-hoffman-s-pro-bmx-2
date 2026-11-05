/* 6 functions from 0x000DC270 to 0x000DD1B0, found by Ghidra. */
#include "common.h"
struct C_000DCBF0 {
    char pad0[0x2F0];
    int unk2F0;
    int unk2F4;
    int unk2F8;
    int unk2FC;
    int unk300;
    int unk304;
    void func_000DCBF0(void);
};


void C_000DCBF0::func_000DCBF0(void) {
    unk2F0 = 0;
    unk2F4 = 128;
    unk2F8 = 128;
    unk2FC = 0;
    unk300 = 1048576000;
    unk304 = 0;
}
