/* 18 functions from 0x00085630 to 0x00086530, found by Ghidra. */
#include "common.h"
struct C_000861A0 {
    char pad0[0xD0];
    int unkD0;
    int func_000861A0(int a0);
};

struct C_00086150 {
    char pad0[0xC4];
    int unkC4;
    void func_00086150(int a0);
};

struct C_00086140 {
    char pad0[0xF4];
    int unkF4;
    void func_00086140(int a0);
};

struct C_00086130 {
    char pad0[0xF0];
    int unkF0;
    void func_00086130(int a0);
};

struct C_00086190 {
    char pad0[0xC4];
    int unkC4;
    void func_00086190(void);
};

struct C_00086180 {
    char pad0[0xC4];
    int unkC4;
    int func_00086180(void);
};

struct C_00085630_2A8490 {
    char pad0[0x2E0];
    void *f2E0;
};

extern C_00085630_2A8490 *D_002A8490;

extern int D_002796BC;

struct C_00086160 {
    char pad0[0xA4];
    int unkA4[17];
    int unkE8;
    int unkEC;
    void func_00086160(float a);
    bool func_000861C0(int idx);
    void func_00086200(void);
};

struct MountVertOverlay {
    void *vtbl;
    char pad4[0x24];
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    int unk44;
    int unk48;
    int unk50[8];
    int unk70;
    u8 unk74;
    char pad75[0xB];
    int unk80;
    int unk84;
    int unk88;
    int unk8C;
    void func_00157600(int a);
    MountVertOverlay *func_00086470(int a);
};


void C_00086130::func_00086130(int a0) {
    unkF0 = a0;
}

void C_00086140::func_00086140(int a0) {
    unkF4 = a0;
}

void C_00086150::func_00086150(int a0) {
    unkC4 = a0;
}

void C_00086160::func_00086160(float a)
{
    unkEC = (int)a;
}

int C_00086180::func_00086180(void) {
    return unkC4;
}

void C_00086190::func_00086190(void) {
    unkC4 = 0;
}

int C_000861A0::func_000861A0(int a0) {
    unkD0 = a0;
    return 1;
}

