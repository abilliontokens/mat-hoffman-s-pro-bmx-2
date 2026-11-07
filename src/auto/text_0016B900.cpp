/* 6 functions from 0x0016B900 to 0x0016C870, found by Ghidra. */
#include "common.h"

extern int D_0028856C;
extern int D_0028862C;

extern char D_002A5558[];
extern "C" char * __cdecl strcpy(char *, const char *);
extern "C" char * __cdecl strcat(char *, const char *);

struct V4u {
    u32 x, y, z, w;
};

struct C_001D3F50 {
    void func_001D3F50(void);
};

struct C_0016A330 {
    int func_0016A330(char *buf);
};

struct ParticleEmitterResetVT {
    virtual void v0(); virtual void v1(); virtual void v2();
};

struct V4f {
    float x, y, z, w;
    V4f(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"

extern float D_00278C48;
extern u16 D_002EFE50;
extern float D_002754B0;
extern float D_00275460;
extern float D_00275544;
extern float D_00275548;
extern float D_002755E8;
extern float D_00275F64;
int func_001E8833(void);

struct C_00169E10 {
    int func_00169E10(float dt);
};

struct C_Particle {
    V4f f0;
    V4f f10;
    char pad20[8];
    u32 f28;
    u32 f2C;
    float f30;
    float f34;
    u32 f38, f3C;
    float f40;
    u32 f44;
    void *f48;
    u32 f4C;
};

struct C_Pool {
    char pad0[0x11C];
    int f11C;
    char pad120[4];
    int f124;
    char pad128[4];
    C_Particle **f12C;
};

struct S_0016B900_68 { char pad0[0x18C]; void *f18C; };
struct S_0016B900_This {
    void *vtbl;
    char pad04[0x20];
    V4f f24;
    V4f f34;
    char pad44[0x10];
    float f54, f58, f5C;
    char pad60[4];
    C_Pool *f64;
    S_0016B900_68 *f68;
    char pad6C[0x104];
    float f170;
    float f174;
    float f178;
    float f17C;
    float f180;
    float f184;
    int f188;
    void *f18C;
    int f190;
    char pad194[0x14];
    int f1A8, f1AC;
    int f1B0;
    char pad1B4[0x3c];
    float f1F0;
    int f1F4;
};
static __forceinline float Sqrt_0016B900(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }
static __forceinline float Max_0016B900(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
extern float D_002A8734, D_002A8730, D_002A8738, D_002A873C, D_002A8740, D_002A8744, D_002A8748;
extern float D_0027AA24, D_00275F5C, D_002756DC;
extern int D_002EFB64;
int __stdcall func_00169E10(float dt);
int func_0016A3A0(int a);
struct C_0016C0D0 {
    void *vtbl;
    char pad04[0x20];
    V4f f24;
    V4f f34;
    char pad44[0x10];
    float f54, f58, f5C;
    char pad60[4];
    C_Pool *f64;
    void *f68;
    char pad6C[0x104];
    float f170;
    float f174;
    u32 f178;
    float f17C;
    u32 f180;
    u32 f184;
    u32 f188;
    u32 f18C;
    u32 f190;
    float f194;
    char pad198[0x10];
    u32 f1A8, f1AC;
    char pad1B0[0x14];
    u32 f1C4, f1C8;
    char pad1CC[0x24];
    u32 f1F0;
    V4f f1F4;
    V4f f204;
    int func_0016C0D0(float dt);
};

struct C_0016BEC0 {
    void *vtbl;
    char pad4[0x40];
    u32 f44;
    char pad48[0x1C];
    void *f64;
    void *f68;
    char f6C;
    char pad6D[0x103];
    float f170;
    float f174;
    char pad178[4];
    float f17C;
    char pad180[8];
    u32 f188;
    u32 f18C;
    u32 f190;
    char pad194[0x14];
    u32 f1A8, f1AC;
    char pad1B0[0x44];
    V4f f1F4;
    V4f f204;
    C_0016BEC0 *func_0016BEC0(void *a, char *name, void *b, u32 *c);
};

struct C_0016C640 {
    void *vtbl;
    char pad4[0x40];
    u32 f44;
    char pad48[0x1C];
    void *f64;
    void *f68;
    char f6C;
    char pad6D[0x103];
    float f170;
    char pad174[4];
    float f178;
    float f17C;
    char pad180[8];
    u32 f188;
    char pad18C[4];
    u32 f190;
    char pad194[0x14];
    u32 f1A8, f1AC;
    char pad1B0[4];
    float f1B4;
    char pad1B8[0xC];
    u32 f1C4, f1C8;
    char pad1CC[0x24];
    V4f f1F0;
    V4f f200;
    float f210;
    C_0016C640 *func_0016C640(void *a, char *name, void *b, u32 *c);
};

struct C_00169C50 {
    void func_00169C50(void *param);
};

struct C_Quad {
    float a;
    float b;
    float c;
    float d;
};

struct C_0016BE40 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x150];
    int f194;
    char pad198[0x58];
    int f1F0;
    int f1F4, f1F8, f1FC, f200, f204, f208, f20C, f210;
    C_0016BE40 *func_0016BE40(void *param);
};

struct C_0016C5B0 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x150];
    int f194;
    char pad198[0x58];
    int f1F0, f1F4, f1F8, f1FC, f200, f204, f208, f20C;
    char pad210[4];
    int f214;
    int f218;
    C_0016C5B0 *func_0016C5B0(void *param);
};

int __fastcall func_0016B900(S_0016B900_This *self, int unused, float a)
{
    float dx, dy, dz, len, inv, x, t, rate, acc;
    int count, i;

    if (func_00169E10(a)) return 1;
    if (self->f68 != 0) {
        void *q = self->f68->f18C;
        if (q != 0) {
            if (D_002EFE50 != *(u16 *)(*(int *)((char *)q + 4) + 0x90)) return 1;
        }
    }
    dx = self->f24.x - self->f34.x;
    dy = self->f24.y - self->f34.y;
    dz = self->f24.z - self->f34.z;
    len = AsmSqrtF(dx * dx + dy * dy + dz * dz);
    inv = len / a;
    if (len < D_002A8734) {
        if (self->f1F0 == D_00275544)
            self->f178 = inv * D_0027AA24;
        else
            self->f178 = self->f1F0 * D_0027AA24 * inv;
        if (self->f178 < D_002756DC) self->f178 = 0.1f;
        if (self->f178 > D_002A8730) self->f178 = D_002A8730;
        x = self->f178 * self->f170 * len * 2.0f;
        if (x < D_00275F5C) x = 500.0f;
        if (x > self->f170 && D_002A8734 * D_002755E8 < len) x = self->f170;
        t = len * len / ((self->f184 + self->f178) * D_002A8738);
        t = AsmMaxF(t, 0.05f);
        rate = (self->f178 - self->f184) / (t * D_002A8744);
        self->f184 = self->f178;
        dx = dx * rate + self->f34.x;
        dy = dy * rate + self->f34.y;
        dz = dz * rate + self->f34.z;
        acc = rate + self->f178;
        if (acc > D_00275460) {
            AsmFloatToInt(acc, &count);
            self->f1F4 = 0;
        } else {
            *(float *)&self->f1F4 = *(float *)&self->f1F4 + acc;
            if (*(float *)&self->f1F4 > D_00275460) {
                AsmFloatToInt(*(float *)&self->f1F4, &count);
                self->f1F4 = 0;
            } else {
                count = 0;
            }
        }
        count = AsmMinI(count, 4);
        {
            float fc = (float)count;
            AsmFloatToInt(AsmMaxF(*(float *)&self->f180, fc), &count);
        }
        if (count > 0) {
            i = 0;
            int idx = D_002EFB64;
            do {
                C_Pool *pool = self->f64;
                C_Particle *p;
                if (pool->f11C >= pool->f124) break;
                p = pool->f12C[pool->f11C];
                p->f0.x = dx;
                p->f0.y = dy;
                p->f0.z = dz;
                p->f0.w = 1.0f;
                *(float *)&p->f2C = D_002A873C * x;
                p->f28 = self->f188;
                *(float *)&p->f3C = D_002A873C * x;
                *(float *)&p->f38 = D_002A873C * x;
                p->f48 = self;
                idx++;
                p->f30 = x - (float)((idx & 3) + 2) * D_002A8748 * x;
                p->f34 = D_00275460 / p->f30;
                p->f44 = self->f190;
                p->f40 = D_002A8740 * p->f30;
                if (p->f40 == D_00275544) p->f44 &= ~8;
                p->f4C = *(u32 *)&self->f18C;
                p->f10 = *(V4f *)((char *)self + 0x54);
                dx += rate;
                dy += rate;
                dz += rate;
                pool->f11C++;
                self->f188++;
                if (self->f188 >= self->f1AC) self->f188 = self->f1A8;
                i++;
            } while (i < count);
            D_002EFB64 = idx;
        }
    }
    return 1;
}

C_0016BE40 *C_0016BE40::func_0016BE40(void *param)
{
    u32 *p;
    ((C_00169C50 *)this)->func_00169C50(param);
    vtbl = (void *)&D_0028856C;
    p = (u32 *)&f1F4;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f204;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f34 = f24;
    f194 = 0;
    f1F0 = 0;
    return this;
}

extern "C" float __cdecl sqrtf(float);

