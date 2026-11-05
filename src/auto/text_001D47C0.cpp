/* 28 functions from 0x001D47C0 to 0x001D5760, found by Ghidra. */
#include "common.h"
struct C_001D5480 {
    int unk0;
    int unk4;
    C_001D5480* func_001D5480(void);
};

struct C_001D5350 {
    int unk0;
    int unk4;
    C_001D5350* func_001D5350(void);
};

struct C_001D5600 {
    char pad0[0x58];
    int unk58;
    void func_001D5600(void);
};


C_001D5350* C_001D5350::func_001D5350(void) {
    unk0 = 0;
    unk4 = 0;
    return this;
}

C_001D5480* C_001D5480::func_001D5480(void) {
    extern int D_0028F5CC;
    unk0 = (int)&D_0028F5CC;
    unk4 = 0;
    return this;
}

void C_001D5600::func_001D5600(void) {
    int __stdcall func_001D5190(int);
    func_001D5190(unk58);
}
/* end */
