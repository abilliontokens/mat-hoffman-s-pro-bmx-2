/* 17 functions from 0x00086530 to 0x000874E0, found by Ghidra. */
#include "common.h"

extern int D_00279734;
void func_001E891B(void *p);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct BestScoreOverlay_24 {
    void func_001D6410(void);
};

struct BestScoreOverlay_V {
    virtual void Destroy(int flag);
};

struct BestScoreOverlay {
    void *vtbl;
    char pad4[0x20];
    BestScoreOverlay_24 *f24;
    BestScoreOverlay_24 *f28;
    BestScoreOverlay_V *f2C;
    BestScoreOverlay_V *f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    u32 f40;
    u32 f44;
    char pad48[0x3C];
    int f84;
    BestScoreOverlay *func_00086DC0(int a0);
    void func_00086E00(void);
    void func_00086C40(float a0);
};

struct C_00086C70 {
    char pad0[0x70];
    int unk70;
    int func_00086C70(int a0);
};

struct C_00086C20 {
    char pad0[0x8C];
    int unk8C;
    void func_00086C20(int a0);
};

struct C_00086C10 {
    char pad0[0x88];
    int unk88;
    void func_00086C10(int a0);
};

struct C_000874D0 {
    char pad0[0x40];
    int unk40;
    void func_000874D0(void);
};

struct C_00086C30 {
    char pad0[0x44];
    int unk44;
    void func_00086C30(int a0);
};

struct C_00086C60 {
    char pad0[0x44];
    int unk44;
    int func_00086C60(void);
};


void C_00086C10::func_00086C10(int a0) {
    unk88 = a0;
}

void C_00086C20::func_00086C20(int a0) {
    unk8C = a0;
}

void C_00086C30::func_00086C30(int a0) {
    unk44 = a0;
}

void BestScoreOverlay::func_00086C40(float a0) {
    f84 = (int)a0;
}

int C_00086C60::func_00086C60(void) {
    return unk44;
}

int C_00086C70::func_00086C70(int a0) {
    unk70 = a0;
    return 1;
}

BestScoreOverlay *BestScoreOverlay::func_00086DC0(int a0) {
    ((C_00157600 *)this)->func_00157600(1);
    f24 = 0;
    f28 = 0;
    f2C = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3C = 0;
    f40 = 0;
    f44 = 0;
    vtbl = (void *)&D_00279734;
    return this;
}

void C_000874D0::func_000874D0(void) {
    unk40 = 0;
}

