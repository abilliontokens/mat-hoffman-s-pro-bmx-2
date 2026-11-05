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

struct S_0005DA50_rec {
    int d0;
    int d1;
    int d2;
    int d3;
};

struct C_0005DA50 {
    char pad0[0x78];
    int unk78;
    void func_0005DA50(int a0);
};

struct S_0005DA80_rec {
    int d0;
    int d1;
    int d2;
    int d3;
};

struct C_0005DA80 {
    char pad0[0x7C];
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

void C_0005DA50::func_0005DA50(int a0) {
    unk78 = a0;
    *(S_0005DA50_rec *)((char *)this + 0x38) = *(S_0005DA50_rec *)((char *)this + (a0 + 8) * 16);
}

void C_0005DA80::func_0005DA80(int a0) {
    unk7C = a0;
    *(S_0005DA80_rec *)((char *)this + 0x48) = *(S_0005DA80_rec *)((char *)this + (a0 + 8) * 16);
}

