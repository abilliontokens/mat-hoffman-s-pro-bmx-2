/* 6 functions from 0x001800A0 to 0x00180E00, found by Ghidra. */
#include "common.h"
struct C_001805F0 {
    char pad0[0x104];
    int unk104;
    void func_001805F0(void);
};


void C_001805F0::func_001805F0(void) {
    extern int D_002B9344;
    int func_0017F550(...);
    D_002B9344 = unk104;
    func_0017F550();
}
