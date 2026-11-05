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
