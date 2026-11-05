/* 9 functions from 0x00150480 to 0x00151130, found by Ghidra. */
#include "common.h"
struct C_00150F60 {
    char pad0[0x24];
    int unk24;
    int unk28;
    void func_00150F60(int a0, int a1);
};


void C_00150F60::func_00150F60(int a0, int a1) {
    int func_001D3F50(...);
    unk24 = a0;
    unk28 = a1;
    func_001D3F50();
}
