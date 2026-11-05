/* 4 functions from 0x000CC620 to 0x000CCBE0, found by Ghidra. */
#include "common.h"
struct C_000CC6D0 {
    char pad0[0x328];
    int unk328;
    int unk32C;
    int unk330;
    int unk334;
    int unk338;
    int unk33C;
    void func_000CC6D0(void);
};


void C_000CC6D0::func_000CC6D0(void) {
    unk32C = 0;
    unk330 = 178;
    unk334 = 178;
    unk338 = 0;
    unk33C = 1065353216;
    unk328 = 0;
}
