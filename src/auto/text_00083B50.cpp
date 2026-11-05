/* 9 functions from 0x00083B50 to 0x000849F0, found by Ghidra. */
#include "common.h"
struct C_000843C0 {
    char pad0[0xC5C];
    int unkC5C;
    char padC60[0x4];
    char unkC64;
    char padC65[0x3B];
    int unkCA0;
    void func_000843C0(void);
};

struct C_000847A0 {
    char pad0[0x120];
    int unk120;
    char pad124[0x10];
    int unk134;
    void func_000847A0(void);
};


void C_000843C0::func_000843C0(void) {
    unkC5C = 0;
    unkC64 = 0;
    unkCA0 = 0;
}

void C_000847A0::func_000847A0(void) {
    unk134 = 0;
    unk120 = 0;
}
