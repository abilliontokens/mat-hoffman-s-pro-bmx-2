/* 8 functions from 0x001587F0 to 0x001596C0, found by Ghidra. */
#include "common.h"

struct S_Inner { char pad[0x538]; int f538; int f53c; int f540; int f544; };
struct S_Arg2 { char pad[0x388]; S_Inner *p388; };
struct S_B { virtual void v0(); virtual void v1(); virtual void v2(); S_B *func_0017D5A0(int, int, int, int, int, int, int); };
struct S_A {
    S_A *func_00192900(int);
    void func_00192A90(S_B *);
    void func_00192AC0(S_B *);
};
struct S_C { S_C *func_00193490(void); void *vtbl; int unk4; S_B *unk8; };
struct C_001595A0 {
    char pad0[0x24];
    int unk24;
    char pad28[0xc];
    int *unk34;
    S_A *unk38;
    S_C *unk3c;
    void func_001577A0(S_A *, int);
    C_001595A0 *func_001595A0(int n, S_Arg2 *arg2);
};
extern "C" void *func_001E8AA5(int);
extern "C" void *func_001E8A44(int);
extern int D_00287520;

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

