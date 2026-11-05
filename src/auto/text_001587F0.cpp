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
    float unk20;
    float unk24;
    float unk28;
    float unk2c;
    float unk30;
    float unk34;
    float unk38;
    float unk3c;
    float unk40;
    float unk44;
    float unk48;
    float unk4c;
    char pad50[0x58 - 0x50];
    float unk58;
    float unk5c;
    float unk60;
    float unk64;
    float unk68;
    float unk6c;
    float unk70;
    float unk74;
    int unk78;
    C_001594F0(void);
    C_001594F0 *func_001594F0(void);
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

C_001594F0 *C_001594F0::func_001594F0(void)
{
    unk3 &= 0xf8;
    unk0 = 0;
    unk2 = (char)0xff;
    unk28 = 0;
    unk24 = 0;
    unk20 = 0;
    unk2c = 0x3f800000;
    unk38 = 0;
    unk34 = 0;
    unk30 = 0;
    unk3c = 0x3f800000;
    unk48 = 0;
    unk44 = 0;
    unk40 = 0;
    unk4c = 0x3f800000;
    unk60 = 0;
    unk5c = 0;
    unk58 = 0;
    unk64 = 0x3f800000;
    unk70 = 0;
    unk6c = 0;
    unk68 = 0;
    unk74 = 0x3f800000;
    unk14 = 0;
    unk18 = 0;
    unk1c = 0;
    unk4 = 0;
    unk78 = 0;
    return this;
}

C_00159560 *C_00159560::func_00159560(int param_1) {
    extern int D_002874B4;
    void __stdcall func_00157600(int);
    func_00157600(param_1);
    unk0 = (int)&D_002874B4;
    sub40.func_001A46F0();
    unk24 = 0;
    unk28 = 0;
    unk2c = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3c = 0;
    return this;
}

