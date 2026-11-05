/* 13 functions from 0x00179B40 to 0x0017AA90, found by Ghidra. */
#include "common.h"
struct C_0017A6F0 {
    char pad0[0x134];
    int unk134;
    void func_0017A6F0(int a0);
};

struct C_0017A850 {
    char pad0[0xF4];
    int unkF4;
    void func_0017A850(void);
};


void C_0017A6F0::func_0017A6F0(int a0) {
    unk134 = a0;
}

void C_0017A850::func_0017A850(void) {
    unkF4 = 0;
}
