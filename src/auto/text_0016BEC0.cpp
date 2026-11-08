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
    u32 f11C;
    char pad120[4];
    u32 f124;
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
int func_00169E10(float dt);
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

extern "C" float __cdecl sqrtf(float);

C_0016BEC0 *C_0016BEC0::func_0016BEC0(void *a, char *name, void *b, u32 *c)
{
    ((C_001D3F50 *)this)->func_001D3F50();
    f64 = a;
    if (b) {
        f68 = b;
        if (c) *(V4u *)&f44 = *(V4u *)c;
    }
    if (!a) {
        f1A8 = 0x20;
        f188 = 0x20;
        f1F4 = V4f(-1.0f, 0.0f, -1.0f, 1.0f);
        f1AC = 0x2f;
        f204 = V4f(1.0f, 0.0f, 1.0f, 1.0f);
    } else {
        f64 = a;
        strcpy(&f6C, D_002A5558);
        if (!name) {
            ((ParticleEmitterResetVT *)this)->v2();
            return 0;
        }
        strcat(&f6C, name);
        if (((C_0016A330 *)this)->func_0016A330(&f6C)) return this;
        f1F4 = V4f(-1.0f, 0.0f, -1.0f, 1.0f);
        f204 = V4f(1.0f, 0.0f, 1.0f, 1.0f);
    }
    f170 = 325.0f;
    f174 = 0.0f;
    f17C = 2500.0f;
    f190 = 0xc;
    return this;
}

int C_0016C0D0::func_0016C0D0(float dt)
{
    C_Particle *p;
    float r1, r2, r3;
    float px, py, pz;
    float sq, len, f, maxv, v;
    int i;

    if (((C_00169E10 *)this)->func_00169E10(dt)) return 1;
    if (f194 > D_00278C48) {
        f34 = f24;
        return 1;
    }
    if (f68) {
        void *o = *(void **)((char *)f68 + 0x18C);
        if (o) {
            if (D_002EFE50 != *(u16 *)(*(char **)((char *)o + 4) + 0x90)) {
                if (*(void **)((char *)f68 + 0x18C)) goto done;
            }
        }
    }
    sq = f5C * f5C + f58 * f58 + f54 * f54;
    len = AsmSqrtF(sq);
    f = dt * f17C;
    if (len < D_00275548 && f1F0) {
        if (len < D_002755E8)
            f = D_00275544;
        else
            f = (len * D_00275F64) * f;
    }
    maxv = AsmMaxF(*(float *)&f180, f);
    i = 0;
    if (D_00275544 < maxv) {
        do {
            r1 = func_001E8833() * D_002754B0;
            r2 = func_001E8833() * D_002754B0;
            r3 = func_001E8833() * D_002754B0;
            px = (f204.x - f1F4.x) * r1 + f1F4.x;
            py = (f204.y - f1F4.y) * r2 + f1F4.y;
            pz = (f204.z - f1F4.z) * r3 + f1F4.z;
            if (f64->f11C == f64->f124) goto done;
            p = f64->f12C[f64->f11C];
            p->f2C = 0;
            p->f0 = f24;
            p->f28 = f188;
            v = func_001E8833() * D_002754B0 * f174;
            p->f40 = v;
            if (v <= D_00275544) {
                p->f44 &= ~8;
                p->f38 = f178;
                p->f48 = this;
                p->f3C = f178;
            }
            v = func_001E8833() * D_002754B0 * f170;
            p->f30 = v;
            p->f34 = D_00275460 / v;
            p->f10 = V4f(px + f54, py + f58, pz + f5C, 1.0f);
            p->f44 = f190;
            if (r1 != D_002755E8 && f1C4) p->f44 |= 0x4000; else p->f44 &= ~0x4000;
            if (r2 != D_002755E8 && f1C8) p->f44 |= 0x8000; else p->f44 &= ~0x8000;
            f64->f11C++;
            f188++;
            if (f188 > f1AC) f188 = f1A8;
            i++;
        } while (i < maxv);
    }
done:
    f184 = f178;
    f194 = 0;
    return 1;
}

C_0016C5B0 *C_0016C5B0::func_0016C5B0(void *param)
{
    u32 *p;
    ((C_00169C50 *)this)->func_00169C50(param);
    vtbl = (void *)&D_0028862C;
    p = (u32 *)&f1F0;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f200;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f34 = f24;
    f194 = 0;
    f214 = 0;
    f218 = 1;
    return this;
}

C_0016C640 *C_0016C640::func_0016C640(void *a, char *name, void *b, u32 *c)
{
    ((C_001D3F50 *)this)->func_001D3F50();
    f64 = a;
    if (b) {
        f68 = b;
        if (c) *(V4u *)&f44 = *(V4u *)c;
    }
    if (!a) {
        f1A8 = 0x30;
        f188 = 0x30;
        f1F0 = V4f(-1.0f, 0.0f, -1.0f, 1.0f);
        f1AC = 0x44;
        f200 = V4f(1.0f, 0.0f, 1.0f, 1.0f);
    } else {
        f64 = a;
        strcpy(&f6C, D_002A5558);
        if (!name) {
            ((ParticleEmitterResetVT *)this)->v2();
            return 0;
        }
        strcat(&f6C, name);
        if (((C_0016A330 *)this)->func_0016A330(&f6C)) return this;
        f1F0 = V4f(-1.0f, 0.0f, -1.0f, 1.0f);
        f200 = V4f(1.0f, 0.0f, 1.0f, 1.0f);
    }
    f190 |= 4;
    f170 = 750.0f;
    f178 = 1.0f;
    f17C = 350.0f;
    f210 = 10.0f;
    f1C4 = 1;
    f1C8 = 1;
    f1B4 = 7.0f;
    return this;
}
