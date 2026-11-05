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
    unsigned int *p = (unsigned int *)this;
    *(short *)p = 0;
    *((char *)p + 2) = (char)0xff;
    *((unsigned char *)p + 3) &= 0xf8;
    p[10] = 0;
    p[9] = 0;
    p[8] = 0;
    p[11] = 0x3f800000;
    p[14] = 0;
    p[13] = 0;
    p[12] = 0;
    p[15] = 0x3f800000;
    p[18] = 0;
    p[17] = 0;
    p[16] = 0;
    p[19] = 0x3f800000;
    p[24] = 0;
    p[23] = 0;
    p[22] = 0;
    p[25] = 0x3f800000;
    p[28] = 0;
    p[27] = 0;
    p[26] = 0;
    p[29] = 0x3f800000;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[1] = 0;
    p[30] = 0;
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

