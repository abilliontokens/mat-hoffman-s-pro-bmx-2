/* 18 functions from 0x001D0FD0 to 0x001D1BD0, found by Ghidra. */
#include "common.h"
struct C_001D1A40 {
    char pad0[0x10];
    int unk10;
    void func_001D1A40(void);
};

struct C_001D1480 {
    int unk0;
    void func_001D1480(void);
};


void C_001D1480::func_001D1480(void) {
    extern int D_0028F1F0;
    int func_0015A940(...);
    unk0 = (int)&D_0028F1F0;
    func_0015A940();
}

int __stdcall func_001D1A30(int a0) {
    return 0;
}

void C_001D1A40::func_001D1A40(void) {
    unk10 = 4;
}

int __stdcall func_001D1A50(int a0, int a1, int a2) {
    return 0;
}

