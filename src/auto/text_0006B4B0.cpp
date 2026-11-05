/* 5 functions from 0x0006B4B0 to 0x0006C470, found by Ghidra. */
#include "common.h"

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_001B1980 {
    void func_001B1980(void);
};

extern int D_0027850C;
extern int D_002789F4;

struct C_0006C380 {
    void *vtbl;
    char pad4[0x14];
    int unk18;
    char pad1C[8];
    int unk24[8];
    int unk44[8];
    int unk64[2];
    void *unk6C;
    void *unk70;
    int unk74[2];
    int unk7C[5];
    int unk90[5];
    void *unkA4;
    void *unkA8;
    void *unkAC;
    void *unkB0;
    char padB4[4];
    int unkB8;
    int unkBC;
    int unkC0;
    int unkC4;
    int unkC8;
    int unkCC;
    int unkD0;
    int unkD4;
    int unkD8;
    float unkDC;
    int unkE0;
    int unkE4;
    int unkE8;
    void func_00157600(int a0);
    C_0006C380 *func_0006C380(int a0);
};

struct C_0006BB90 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    char pad4[0x64 - 4];
    C_001B1980 *unk64[8];
    char pad84[0x150 - 0x84];
    int unk150;
    char pad154[0x1b4 - 0x154];
    int unk1b4;
    int unk1b8;
    void func_0006BB90(void);
};

void C_0006BB90::func_0006BB90(void) {
    D_002EFDB8->vf7(1);
    unk1b4 = 0;
    unk1b8 = 0;
    D_002EFDB8->vf8();
    unk150 = 0;
    for (int i = 0; i < 8; i++) {
        unk64[i]->func_001B1980();
    }
    vf4();
}

C_0006C380 *C_0006C380::func_0006C380(int a0)
{
    int i;

    func_00157600(a0);
    vtbl = &D_0027850C;
    for (i = 0; i < 8; i++) {
        unk24[i] = 0;
        unk44[i] = 0;
    }
    vtbl = &D_002789F4;
    unkCC = 0;
    unkD0 = 0;
    unk18 = -1;
    unkC8 = 0;
    unkC4 = 0;
    for (i = 0; i < 2; i++) {
        unk64[i] = 0;
        unk74[i] = 0;
    }
    unkD4 = 0;
    unkDC = 0.5f;
    unkB8 = -1;
    unk6C = 0;
    unk70 = 0;
    unkBC = 0;
    unkC0 = 0;
    unkE0 = 0;
    unkD8 = 0;
    unkE8 = 1;
    unkE4 = -1;
    for (i = 0; i < 5; i++) {
        unk7C[i] = 0;
        unk90[i] = 0;
    }
    unkA4 = 0;
    unkA8 = 0;
    unkAC = 0;
    unkB0 = 0;
    return this;
}

