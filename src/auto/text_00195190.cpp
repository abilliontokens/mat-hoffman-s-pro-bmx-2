/* 9 functions from 0x00195190 to 0x001960F0, found by Ghidra. */
#include "common.h"
struct C_001955D0 {
    char pad0[0x70];
    int unk70;
    char pad74[0x4];
    int unk78;
    int func_001955D0(int a0, int a1);
};


int C_001955D0::func_001955D0(int a0, int a1) {
    unk70 = a0;
    unk78 = a1;
    return 1;
}
