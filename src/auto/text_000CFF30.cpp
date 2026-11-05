/* 5 functions from 0x000CFF30 to 0x000D0E00, found by Ghidra. */
#include "common.h"
struct C_000D0DD0 {
    char pad0[0x53C];
    int unk53C;
    int unk540;
    int unk544;
    int unk548;
    int unk54C;
    char pad550[0x3C];
    int unk58C;
    void func_000D0DD0(void);
};


void C_000D0DD0::func_000D0DD0(void) {
    unk53C = 0;
    unk540 = 178;
    unk544 = 178;
    unk548 = 0;
    unk54C = 1065353216;
    unk58C = 0;
}
