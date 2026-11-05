/* 11 functions from 0x0009DA90 to 0x0009E680, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0009DF90 {
    void func_0009DF90(float param_1);
};


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

BmxSmokeParticleEmitter *BmxSmokeParticleEmitter::func_0009DB00(int param_1)
{
    ((C_00169C50 *)this)->func_00169C50(param_1);
    vtbl = &D_0027AA3C;
    f600 = 0;
    f5FC = 0;
    f5F8 = 0;
    f604 = 1.0f;
    f170 = 1000.0f;
    f178 = 0.2f;
    f174 = 2.75f;
    f1F0 = 0;
    f190 = 0x80e;
    f32 *p = f1F4;
    for (int i = 0; i < 0x40; i++) {
        f32 *q = p;
        p += 4;
        for (int j = 0; j < 4; j++) {
            f32 v = (f32)func_001E8833() * D_002754B0;
            *q++ = v + v + D_00275460;
        }
    }
    f5F4 = 0;
    f1AC = 0;
    f1A8 = 0;
    f188 = 0;
    f608 = 100.0f;
    func_001ADCC0((char *)this + 0x6C, 0x104, (const char *)&D_0027AA28, (const char *)&D_002A5558);
    return this;
}

void C_0009DF90::func_0009DF90(float param_1)
{
  int in_ECX = (int)this;
  float fVar1;
  
  fVar1 = D_00275460 - *(float *)(in_ECX + 0x198);
  *(byte *)(in_ECX + 0x1cc) = *(byte *)(in_ECX + 0x1cc) | 2;
  *(float *)(in_ECX + 0x1f0) = D_00275460 - fVar1 * param_1;
  return;
}

