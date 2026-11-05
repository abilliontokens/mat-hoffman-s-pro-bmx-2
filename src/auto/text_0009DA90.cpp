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

extern char D_00277298[];
extern char D_0027AC68[];
extern char D_0027AC58[];
extern char D_0027AC48[];
extern char D_0027AC30[];

struct S_0009E5F0_Stream {
    int func_00169710(const char *name);
    int func_00168C50(const char *name, int value, int *ptr);
};

struct C_0016A1D0 {
    int func_0016A1D0(int a1, int a2, int a3);
    int func_0016A330(char *buf);
    int func_0016A3A0(S_0009E5F0_Stream *stream);
};

struct S_0009E590_Sub {
    char pad0[4];
    u32 f4;
    u32 f8;
};

struct S_0009E590_Item {
    char pad0[0x18];
    S_0009E590_Sub sub;
};

struct S_0009E590_Owner {
    char pad0[0x134];
    S_0009E590_Item *f134;
};

/* BmxSparkParticleEmitter */
struct C_0009E590 {
    void *vtbl;
    char pad4[0x60];
    S_0009E590_Owner *f64;
    char pad68[4];
    char buf6C[0x104];
    char pad170[0x18];
    u32 f188;
    char pad18C[0x1c];
    u32 f1A8;
    u32 f1AC;
    char pad1B0[0x5c];
    int f20C;
    int f210;
    int f214;
    int f218;
    C_0009E590 *func_0009E590(int a1, int a2, int a3);
    int func_0009E5F0(S_0009E5F0_Stream *stream);
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
    f32 f1F4[0x40][4];
    u32 f5F4;
    u32 f5F8;
    u32 f5FC;
    u32 f600;
    f32 f604;
    f32 f608;
    BmxSmokeParticleEmitter *func_0009DB00(int param_1);
    int func_0009E400(S_0009E5F0_Stream *stream);
    int func_0009E470(void);
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
    int i = 0x40;
    f32 *p = f1F4[0];
    do {
        f32 *q = p;
        int j = 4;
        p += 4;
        do {
            f32 v = (f32)func_001E8833() * D_002754B0;
            *q++ = v + v + D_00275460;
        } while (--j);
    } while (--i);
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

int BmxSmokeParticleEmitter::func_0009E400(S_0009E5F0_Stream *stream) {
    ((C_0016A1D0 *)this)->func_0016A3A0(stream);
    int i = 0x40;
    f32 *p = f1F4[0];
    do {
        f32 *q = p;
        int j = 4;
        p += 4;
        do {
            *q++ = (f32)func_001E8833() * D_002754B0 * f174 + D_00275460;
        } while (--j);
    } while (--i);
    return 0;
}

int BmxSmokeParticleEmitter::func_0009E470(void) {
    ((C_0016A1D0 *)this)->func_0016A330((char *)this + 0x6C);
    return 1;
}

C_0009E590 *C_0009E590::func_0009E590(int a1, int a2, int a3) {
    ((C_0016A1D0 *)this)->func_0016A1D0(a1, a2, a3);
    S_0009E590_Item *item = f64->f134;
    if (item != 0) {
        S_0009E590_Sub *sub = &item->sub;
        if (sub != 0) {
            f1AC = sub->f8;
            f188 = f1A8 = sub->f4;
            ((C_0016A1D0 *)this)->func_0016A330(buf6C);
        }
    }
    return this;
}

