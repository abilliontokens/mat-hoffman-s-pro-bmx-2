/* 15 functions from 0x00163A50 to 0x001648E0, found by Ghidra. */
#include "common.h"
struct C_00164820 {
    char pad0[0x10];
    int unk10;
    char pad14[0x4];
    int unk18;
    char pad1C[0x14];
    int unk30;
    int unk34;
    void func_00164820(int a0);
};


void C_00164820::func_00164820(int a0) {
    unk10 = 0;
    unk18 = a0;
    unk30 = 0;
    unk34 = 0;
}
