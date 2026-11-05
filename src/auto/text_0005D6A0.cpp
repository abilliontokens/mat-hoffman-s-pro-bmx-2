/* 7 functions from 0x0005D6A0 to 0x0005E600, found by Ghidra. */
#include "common.h"
struct C_0005DA30 {
    char pad0[0x2C];
    int unk2C;
    void func_0005DA30(int a0);
};

struct C_0005DA40 {
    char pad0[0x34];
    int unk34;
    void func_0005DA40(int a0);
};

struct C_0005DA50 {
    char pad0[0x38];
    int unk38[4];
    char pad48[0x30];
    int unk78;
    void func_0005DA50(int a0);
};

struct C_0005DA80 {
    char pad0[0x48];
    int unk48[4];
    char pad58[0x24];
    int unk7C;
    void func_0005DA80(int a0);
};


void C_0005DA30::func_0005DA30(int a0) {
    int func_001D3F50(...);
    unk2C = a0;
    func_001D3F50();
}

void C_0005DA40::func_0005DA40(int a0) {
    unk34 = a0;
}
