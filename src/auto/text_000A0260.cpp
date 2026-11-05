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


C_000A09F0* C_000A09F0::func_000A09F0(void) {
    unk18 = 0;
    unk1C = 0;
    unk20 = 0;
    unk24 = 0;
    return this;
}

void func_000A0B80(void) {
    D_002A829C->func_00161680();
    D_002AA6C0->func_001B2640();
}

