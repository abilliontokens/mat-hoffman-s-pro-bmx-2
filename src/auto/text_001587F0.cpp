/* 8 functions from 0x001587F0 to 0x001596C0, found by Ghidra. */
#include "common.h"

struct C_00158BE0 {
    int unk0;
    void *func_00158BE0(int flags);
};

struct C_001594F0 {
    short unk0;
    char unk2;
    unsigned char unk3;
    int unk4;
    char pad8[0x14 - 8];
    int unk14;
    int unk18;
    int unk1c;
    int unk20;
    int unk24;
    int unk28;
    int unk2c;
    int unk30;
    int unk34;
    int unk38;
    int unk3c;
    int unk40;
    int unk44;
    int unk48;
    int unk4c;
    char pad50[0x58 - 0x50];
    int unk58;
    int unk5c;
    int unk60;
    int unk64;
    int unk68;
    int unk6c;
    int unk70;
    int unk74;
    int unk78;
    void func_001594F0(void);
};

struct C_00159560_Sub {
    void func_001A46F0(void);
};

struct C_00159560 {
    int unk0;
    char pad4[0x20];
    int unk24;
    int unk28;
    int unk2c;
    int unk30;
    int unk34;
    int unk38;
    int unk3c;
    C_00159560_Sub sub40;
    C_00159560 *func_00159560(int param_1);
};

void *C_00158BE0::func_00158BE0(int flags) {
    extern int D_002873B4;
    int func_00157660(...);
    void func_001E891B(void *);
    unk0 = (int)&D_002873B4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
