/* 5 functions from 0x0008CC50 to 0x0008DB70, found by Ghidra. */
#include "common.h"

struct C_001B1980 {
    void func_001B1980(void);
};

struct C_0008D550 {
    char pad0[0x54];
    C_001B1980 *unk54;
    int unk58;
    int unk5C;
    int unk60;
    char pad64[0xc];
    int unk70;
    int unk74;
    int unk78;
    void func_0008D550(void);
};

void C_0008D550::func_0008D550(void)
{
    unk70 = 1000;
    unk74 = 10;
    unk78 = 1000;
    unk58 = 0;
    unk54->func_001B1980();
    unk5C = 1;
    unk60 = 0;
}
