/* 10 functions from 0x000A0260 to 0x000A11A0, found by Ghidra. */
#include "common.h"
struct C_000A09F0 {
    char pad0[0x18];
    int unk18;
    int *unk1C;
    int unk20;
    int unk24;
    C_000A09F0* func_000A09F0(void);
    void func_000A0A10(void);
};

void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_002A829C {
    void func_00161680(void);
};

struct C_002AA6C0 {
    void func_001B2640(void);
};

extern C_002A829C *D_002A829C;
extern C_002AA6C0 *D_002AA6C0;

struct S_000A08D0 {
    f32 f0, f1, f2, f3;
};

struct S_000A08D0_5 {
    f32 f0, f1, f2, f3, f4;
};

static S_000A08D0_5 *init_000A08D0(S_000A08D0_5 *p, f32 f1) {
    p->f0 = 0.0f;
    p->f1 = f1;
    p->f3 = 3.402823466e+38f;
    p->f4 = -3.402823466e+38f;
    p->f2 = 1.0f;
    return p;
}

struct C_000A08D0 {
    char pad0[0x38];
    int f38;
    char pad3C[0xA0];
    void *fDC;
    void *fE0;
    void func_000A00A0(S_000A08D0 s, int a5);
    int func_000A08D0(S_000A08D0 s, int a5);
};

struct C_000A0A80 {
    char pad0[0x4E0];
    int f4E0;
    char pad4E4[0x48];
    int f52C;
    int f530;
    int f534;
    int f538;
    int f53C;
    int f540;
    char pad544[0x4];
    int f548;
    int f54C;
    char pad550[0x8];
    int f558;
    char pad55C[0x8];
    int f564;
    int f568;
    int f56C;
    void func_000A0A80(void);
    void func_00182B00(void);
};


int C_000A08D0::func_000A08D0(S_000A08D0 s, int a5) {
    S_000A08D0_5 *p = (S_000A08D0_5 *)func_001E8A44(0x14);
    fDC = p ? init_000A08D0(p, 0.02f) : 0;
    p = (S_000A08D0_5 *)func_001E8A44(0x14);
    fE0 = p ? init_000A08D0(p, 0.2f) : 0;
    func_000A00A0(s, a5);
    f38 = 1;
    return 1;
}

C_000A09F0* C_000A09F0::func_000A09F0(void) {
    unk18 = 0;
    unk1C = 0;
    unk20 = 0;
    unk24 = 0;
    return this;
}

void C_000A09F0::func_000A0A10(void) {
    if (unk20) {
        func_001E891B((void *)unk20);
        unk20 = 0;
    }
    if (unk1C) {
        for (int i = 0; i < unk18; i++) {
            if (unk1C[i]) {
                func_001E891B((void *)unk1C[i]);
                unk1C[i] = 0;
            }
        }
        func_001E891B(unk1C);
        unk1C = 0;
    }
}

void C_000A0A80::func_000A0A80(void) {
    f4E0 = 0;
    f530 = 0;
    f534 = 0;
    f564 = 0;
    f568 = 0;
    f56C = 0;
    f52C = 0;
    f538 = 0;
    f53C = 0;
    f540 = 0;
    f548 = 0;
    f54C = 0;
    f558 = 0;
    func_00182B00();
}

void func_000A0B80(void) {
    D_002A829C->func_00161680();
    D_002AA6C0->func_001B2640();
}

