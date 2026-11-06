/* 5 functions from 0x0016C870 to 0x0016D6A0, found by Ghidra. */
#include "common.h"

extern int D_0028877C;
extern int D_002886E4;

struct C_00169C50 {
    void func_00169C50(void *param);
};

struct C_Quad {
    float a;
    float b;
    float c;
    float d;
};

struct C_0016CE80 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x150];
    int f194;
    char pad198[0x24];
    int f1BC;
    char pad1C0[0x30];
    int f1F0, f1F4, f1F8, f1FC, f200, f204, f208, f20C;
    char pad210[4];
    int f214;
    C_0016CE80 *func_0016CE80(void *param);
};

struct C_0016D620 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x150];
    int f194;
    char pad198[0x78];
    int f210, f214, f218, f21C, f220, f224, f228, f22C;
    C_0016D620 *func_0016D620(void *param);
};

extern char D_002A5558[];
extern "C" char * __cdecl strcpy(char *, const char *);
extern "C" char * __cdecl strcat(char *, const char *);

struct V4u_0016CF10 {
    u32 x, y, z, w;
};

struct V4s_0016CF10 {
    u32 x, y, z, w;
    void Set(u32 a, u32 b, u32 c, u32 d) { x = a; y = b; z = c; w = d; }
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

struct C_0016CF10 {
    void *vtbl;
    char pad4[0x40];
    u32 f44;
    u32 f48;
    u32 f4C;
    u32 f50;
    char pad54[0x10];
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
    C_0016CF10 *func_0016CF10(void *a, char *name, void *b, u32 *c);
};

#include <xmmintrin.h>

extern u16 D_002EFE50;
extern int D_002EFB6C;
extern float D_002754B0;
extern float D_002755E8;
extern float D_0027AA20;
extern float D_00275460;
extern float D_00275544;
extern "C" int __cdecl func_001E8833(void);
extern "C" int __cdecl func_00011260(int a, int b);

struct Particle_0016D140 {
    C_Quad pos;
    C_Quad f10;
    char pad20[8];
    int f28;
    u32 f2C;
    float f30;
    float f34;
    u32 f38, f3C;
    float f40;
    u32 f44;
    void *f48;
    u32 f4C;
};

struct Pool_0016D140 {
    char pad0[0x11C];
    int count;
    char pad120[4];
    int max;
    char pad128[4];
    Particle_0016D140 **items;
};

struct Owner_0016D140 {
    char pad0[0x90];
    u16 f90;
};

struct Ref_0016D140 {
    char pad0[4];
    Owner_0016D140 *f4;
};

struct Parent_0016D140 {
    char pad0[0x18C];
    Ref_0016D140 *f18C;
};

static inline void RoundToInt(float f, int *out) { *out = _mm_cvtss_si32(_mm_set_ss(f)); }
static inline void TruncToInt(float f, int *out) { *out = _mm_cvttss_si32(_mm_set_ss(f)); }

struct C_0016D140 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    char pad34[0x20];
    C_Quad f54;
    Pool_0016D140 *f64;
    Parent_0016D140 *f68;
    char pad6C[0x104];
    float f170;
    float f174;
    u32 f178;
    float f17C;
    float f180;
    char pad184[8];
    u32 f18C;
    u32 f190;
    char pad194[4];
    u32 f198;
    char pad19C[0xC];
    int f1A8, f1AC;
    char pad1B0[4];
    float f1B4;
    char pad1B8[4];
    int *f1BC;
    int f1C0;
    int f1C4, f1C8;
    char pad1CC[0x24];
    float f1F0[4];
    float f200[4];
    float f210;
    int f214;
    int func_00169E10(float dt);
    int func_0016D140(float dt);
};

C_0016CE80 *C_0016CE80::func_0016CE80(void *param)
{
    u32 *p;
    ((C_00169C50 *)this)->func_00169C50(param);
    vtbl = (void *)&D_002886E4;
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
    f1BC = 0;
    f214 = 1;
    return this;
}

C_0016CF10 *C_0016CF10::func_0016CF10(void *a, char *name, void *b, u32 *c)
{
    ((C_001D3F50 *)this)->func_001D3F50();
    f64 = a;
    if (b) {
        f68 = b;
        if (c) *(V4u_0016CF10 *)&f44 = *(V4u_0016CF10 *)c;
    }
    if (!a) {
        f1A8 = 0x55;
        f188 = 0x55;
        f1F0 = V4f(-1.0f, 0.0f, -1.0f, 1.0f);
        f1AC = 0x64;
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

C_0016D620 *C_0016D620::func_0016D620(void *param)
{
    u32 *p;
    ((C_00169C50 *)this)->func_00169C50(param);
    vtbl = (void *)&D_0028877C;
    p = (u32 *)&f210;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f220;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f34 = f24;
    f194 = 0;
    return this;
}
struct C_0016C870 {
    char pad0[0x24];
    float unk24, unk28, unk2c;
    char pad30[0x34 - 0x30];
    float unk34, unk38, unk3c, unk40;
    char pad44[0x54 - 0x44];
    float unk54, unk58, unk5c, unk60;
    int func_00169E10(void *p);
    int func_0016C870(void *p);
};
