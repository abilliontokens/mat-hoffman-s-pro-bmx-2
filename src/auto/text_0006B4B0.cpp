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
    int unk6C;
    int unk70;
    int unk74[2];
    int unk7C[5];
    int unk90[5];
    int unkA4;
    int unkA8;
    int unkAC;
    int unkB0;
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
