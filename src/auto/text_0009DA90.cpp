/* 11 functions from 0x0009DA90 to 0x0009E680, found by Ghidra. */
#include "common.h"

extern int D_0027AA3C;
extern f32 D_002754B0;
extern f32 D_00275460;
extern int D_0027AA28;
extern int D_002A5558;

int func_001E8833(void);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct C_00169C50 {
    void func_00169C50(int param);
};

struct BmxSmokeParticleEmitter {
    void *vtbl;
    char pad4[0x16C];
    f32 f170;
    f32 f174;
    f32 f178;
    char pad17C[0xC];
    u32 f188;
    char pad18C[4];
    u32 f190;
    char pad194[0x14];
    u32 f1A8;
    u32 f1AC;
    char pad1B0[0x40];
    u32 f1F0;
    f32 f1F4[0x100];
    u32 f5F4;
    u32 f5F8;
    u32 f5FC;
    u32 f600;
    f32 f604;
    f32 f608;
    BmxSmokeParticleEmitter *func_0009DB00(int param_1);
};
