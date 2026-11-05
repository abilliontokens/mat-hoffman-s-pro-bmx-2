/* 41 functions from 0x00094620 to 0x00095620, found by Ghidra. */
#include "common.h"
struct C_00094F00 {
    char pad0[0x7C];
    int unk7C;
    int func_00094F00(void);
};

struct C_00094890 {
    char pad0[0x38];
    int unk38;
    int func_00094890(void);
};


int C_00094890::func_00094890(void) {
    return unk38;
}

int C_00094F00::func_00094F00(void) {
    return unk7C;
}

