/* 17 functions from 0x000212A0 to 0x00022060, found by Ghidra. */
#include "common.h"

extern float D_00275544;
extern int D_002760E4;
extern u32 D_002A0F74;
extern u32 D_002A0F78;
extern u32 D_002A0F7C;
extern u32 D_002A0F80;

struct V4_000212A0 {
    float x, y, z, w;
};

struct W4_000212A0 {
    u32 x, y, z, w;
    W4_000212A0 *func_000212A0(u32 *p);
};

struct C_00157600 {
    void func_00157600(int a);
};

struct C_000213F0 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44;
    u32 f48;
    u32 f4c;
    char pad50[4];
    u32 f54;
    u32 f58;
    u32 f5c;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6c;
    char pad70[4];
    u32 f74;
    u32 f78;
    u32 f7c;
    u32 f80;
    u32 f84;
    u32 f88;
    u32 f8c;
    u32 f90;
    u32 f94;
    u32 f98;
    u32 f9c;
    u32 fa0;
    C_000213F0 *func_000213F0(int a);
};

struct S_000216F0_Ent {
    int f0;
    int f4;
    int f8;
    int *fc;
};

struct C_000216F0 {
    char pad0[0x70];
    S_000216F0_Ent **f70;
    void func_000216F0(int a0, int idx, int val);
};

struct C_00021720 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    C_00021720* func_00021720(void);
};


C_00021720* C_00021720::func_00021720(void) {
    unk8 = 0;
    unk4 = 0;
    unk0 = 0;
    unk14 = 0;
    unk10 = 0;
    unkC = 0;
    return this;
}
