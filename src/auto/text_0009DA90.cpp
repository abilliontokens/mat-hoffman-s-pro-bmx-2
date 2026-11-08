/* 11 functions from 0x0009DA90 to 0x0009E680, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
struct C_0009DF90 {
    void func_0009DF90(float param_1);
};


extern int D_0027AA3C;
extern f32 D_002754B0;
extern f32 D_00275460;
extern int D_0027AA28;
extern int D_002A5558;
extern int D_0027AB9C;
extern int D_0027AB88;
extern f32 D_002A2528;
extern f32 D_002A252C;
extern f32 D_002A2530;
extern f32 D_002A2534;

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

struct C_0009DC00 {
    char pad0[0x64];
    S_0009E590_Owner *f64;
    char pad68[4];
    char buf6C[0x104];
    char pad170[0x18];
    u32 f188;
    char pad18C[0x1c];
    u32 f1A8;
    u32 f1AC;
    C_0009DC00 *func_0009DC00(int a1, int a2, int a3);
};

/* BmxSparkParticleEmitter */
struct C_0009E590 {
    void *vtbl;
    char pad4[0x60];
    S_0009E590_Owner *f64;
    char pad68[4];
    char buf6C[0x104];
    f32 f170;
    f32 f174;
    f32 f178;
    f32 f17C;
    char pad180[8];
    u32 f188;
    char pad18C[4];
    u32 f190;
    char pad194[0x14];
    u32 f1A8;
    u32 f1AC;
    char pad1B0[0x1c];
    u8 f1CC;
    char pad1CD[0x23];
    f32 f1F0;
    u32 f1F4;
    u32 f1F8;
    f32 f1FC;
    f32 f200;
    f32 f204;
    f32 f208;
    int f20C;
    int f210;
    int f214;
    int f218;
    C_0009E590 *func_0009E590(int a1, int a2, int a3);
    C_0009E590 *func_0009E480(int param_1);
    int func_0009E5F0(S_0009E5F0_Stream *stream);
};

struct S_0009E0C0_Sub {
    char pad0[4];
    u32 f4;
    u32 f8;
};

struct S_0009E0C0_Item {
    char pad0[0x30];
    S_0009E0C0_Sub sub;
};

struct S_0009E0C0_Owner {
    char pad0[0x134];
    S_0009E0C0_Item *f134;
};

/* BmxTireFireParticleEmitter */
struct C_0009E0C0 {
    char pad0[0x64];
    S_0009E0C0_Owner *f64;
    char pad68[0x120];
    u32 f188;
    char pad18C[0x1c];
    u32 f1A8;
    u32 f1AC;
    C_0009E0C0 *func_0009E0C0(int a1, int a2, int a3);
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

extern int D_0027AAEC;
extern int D_0027AAD0;

/* BmxTireFireParticleEmitter: same layout as BmxSmokeParticleEmitter */
struct C_0009DFC0 {
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
    C_0009DFC0 *func_0009DFC0(int param_1);
};

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void func_0009DA90(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

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
        register int j = 4;
        f32 *q = p;
        p += j;
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
C_0009DC00 *C_0009DC00::func_0009DC00(int a1, int a2, int a3)
{
    ((C_0016A1D0 *)this)->func_0016A1D0(a1, a2, a3);
    S_0009E590_Sub *item = (S_0009E590_Sub *)f64->f134;
    if (item != 0) {
        f1AC = item->f8;
        f1A8 = item->f4;
        f188 = f1A8;
        ((C_0016A1D0 *)this)->func_0016A330(buf6C);
    }
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

C_0009DFC0 *C_0009DFC0::func_0009DFC0(int param_1)
{
    ((C_00169C50 *)this)->func_00169C50(param_1);
    vtbl = &D_0027AAEC;
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
        p += 4;
        for (int j = 4; j != 0; --j) {
            f32 v = (f32)func_001E8833() * D_002754B0;
            *q++ = v + v + D_00275460;
        }
    } while (--i);
    f5F4 = 0;
    f1AC = 0;
    f1A8 = 0;
    f188 = 0;
    f608 = 100.0f;
    func_001ADCC0((char *)this + 0x6C, 0x104, (const char *)&D_0027AAD0, (const char *)&D_002A5558);
    return this;
}

C_0009E0C0 *C_0009E0C0::func_0009E0C0(int a1, int a2, int a3)
{
    ((C_0016A1D0 *)this)->func_0016A1D0(a1, a2, a3);
    S_0009E0C0_Item *item = f64->f134;
    if (item != 0) {
        S_0009E0C0_Sub *sub = &item->sub;
        if (sub != 0) {
            f1AC = sub->f8;
            f188 = f1A8 = sub->f4;
            ((C_0016A1D0 *)this)->func_0016A330((char *)this + 0x6C);
        }
    }
    return this;
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
            f32 v = (f32)func_001E8833() * D_002754B0;
            *q++ = v * f174 + D_00275460;
        } while (--j);
    } while (--i);
    return 0;
}

int BmxSmokeParticleEmitter::func_0009E470(void) {
    ((C_0016A1D0 *)this)->func_0016A330((char *)this + 0x6C);
    return 1;
}

C_0009E590 *C_0009E590::func_0009E480(int param_1)
{
    ((C_00169C50 *)this)->func_00169C50(param_1);
    vtbl = &D_0027AB9C;
    f32 *p = &f1FC;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    f1AC = 0;
    f1A8 = 0;
    f188 = 0;
    f1F4 = 0;
    f1F8 = 0;
    f170 = 400.0f;
    f178 = 0.015f;
    f174 = 0.5f;
    f190 = 0x2826;
    f1CC |= 1;
    f1F0 = 1000.0f;
    f17C = 5.0f;
    f1FC = D_002A2528;
    f200 = D_002A252C;
    f204 = D_002A2530;
    f208 = D_002A2534;
    *(f32 *)&f218 = 5.0f;
    *(f32 *)&f20C = 10.0f;
    *(f32 *)&f210 = 6.0f;
    *(f32 *)&f214 = 0.8f;
    func_001ADCC0(buf6C, 0x104, (const char *)&D_0027AB88, (const char *)&D_002A5558);
    return this;
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

int C_0009E590::func_0009E5F0(S_0009E5F0_Stream *stream) {
    ((C_0016A1D0 *)this)->func_0016A3A0(stream);
    if (stream != 0) {
        stream->func_00169710(D_00277298);
        stream->func_00168C50(D_0027AC68, f20C, &f20C);
        stream->func_00168C50(D_0027AC58, f210, &f210);
        stream->func_00168C50(D_0027AC48, f214, &f214);
        stream->func_00168C50(D_0027AC30, f218, &f218);
        return 1;
    }
    return 0;
}

