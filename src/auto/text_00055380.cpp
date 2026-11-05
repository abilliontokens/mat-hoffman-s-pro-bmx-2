/* 8 functions from 0x00055380 to 0x000562C0, found by Ghidra. */
#include "common.h"

extern const float D_00277D04;

extern int D_00277CF4;

/* base class: CameraBehavior */
struct C_0012B540 {
    int unk0;
    void func_0012B540(void);
};

struct S_00055910_Part {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_00055910 : C_0012B540 {
    char pad4[0x10];
    S_00055910_Part *unk14;
    S_00055910_Part *unk18;
    char pad1C[0x30];
    char *unk4C;
    char pad50[0xE0];
    char *unk130;
    char *unk134;
    char pad138[0xD4];
    S_00055910_Part *unk20C;
    S_00055910_Part *unk210;
    S_00055910_Part *unk214;
    S_00055910_Part *unk218;
    void func_00055910(void);
};

struct S_000560A0_Inner {
    char pad0[0x3C];
    float unk3C;
};

struct S_000560A0_Owner {
    char pad0[0x1E0];
    int unk1E0;
    char pad1E4[8];
    S_000560A0_Inner *unk1EC;
};

struct C_000560A0 {
    char pad0[4];
    S_000560A0_Owner *unk4;
    char pad8[4];
    int unkC;
    int unk10;
    char pad14[0x2C];
    int unk40;
    char pad44[0x20];
    float unk64;
    int unk68;
    char pad6C[0x15C];
    int unk1C8;
    int unk1CC;
    int unk1D0;
    int unk1D4;
    int unk1D8;
    char pad1DC[8];
    int unk1E4;
    int unk1E8;
    void func_000559E0(int a0, int a1, float a2);
    void func_000560A0();
};

struct C_00056080 {
    char pad0[0x18C];
    int unk18C;
    int unk190;
    char pad194[0x48];
    int unk1DC;
    void func_00056080(void);
};


void C_000559E0_unused();
void C_00055910::func_00055910(void)
{
    unk0 = (int)&D_00277CF4;
    if (unk130 != 0) {
        delete unk130;
        unk130 = 0;
    }
    if (unk134 != 0) {
        delete unk134;
        unk134 = 0;
    }
    if (unk14 != 0) {
        unk14->v2();
        unk14 = 0;
    }
    if (unk18 != 0) {
        unk18->v2();
        unk18 = 0;
    }
    if (unk20C != 0) {
        unk20C->v2();
        unk20C = 0;
    }
    if (unk210 != 0) {
        unk210->v2();
        unk210 = 0;
    }
    if (unk214 != 0) {
        unk214->v2();
        unk214 = 0;
    }
    if (unk218 != 0) {
        unk218->v2();
        unk218 = 0;
    }
    if (unk4C != 0) {
        delete unk4C;
        unk4C = 0;
    }
    func_0012B540();
}

void C_000560A0::func_000559E0(int a0, int a1, float a2)
{
    unkC = a0;
    unk10 = 0;
    unk64 = a2 * 1.46666f;
    unk68 = a1;
}

void C_00056080::func_00056080(void) {
    unk18C = 0;
    unk190 = 0;
    unk1DC = 0;
}

void C_000560A0::func_000560A0()
{
    float f;
    unk40 = 1;
    unk1C8 = 0;
    unk1CC = 0;
    unk1D0 = 0;
    unk1D4 = 0;
    unk1D8 = 0;
    unk1E4 = 0;
    unk1E8 = 0;
    f = unk4->unk1EC->unk3C * 1.46666f;
    unkC = unk4->unk1E0;
    unk10 = 0;
    unk68 = 0x40400000;
    unk64 = f;
}

