/* 5 functions from 0x0016C870 to 0x0016D6A0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern int D_0028877C;
extern int D_002886E4;

struct C_0016C870 {
    char pad0[0x24];
    float unk24, unk28, unk2c;
    char pad30[0x34 - 0x30];
    float unk34, unk38, unk3c;
    int unk40;
    char pad44[0x54 - 0x44];
    float unk54, unk58, unk5c, unk60;
    void *unk64;
    int unk68;
    char pad6C[0x170 - 0x6C];
    float unk170, unk174;
    int unk178;
    float unk17C, unk180;
    char pad184[4];
    int unk188;
    int unk18C, unk190;
    char pad194[0x1A8 - 0x194];
    int unk1A8, unk1AC, unk1B0;
    float unk1B4;
    char pad1B8[4];
    int *unk1BC;
    int unk1C0, unk1C4, unk1C8;
    char pad1CC[0x1F0 - 0x1CC];
    float unk1F0, unk1F4, unk1F8, unk1FC, unk200, unk204, unk208, unk20C;
    float unk210, unk214;
    int unk218;
    int func_00169E10(float dt);
    int func_0016C870(float dt);
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
extern float D_002756CC;
extern float D_0027AB80;
extern float D_0027AB84;
extern float D_002886C0;
extern int D_002EFB68;
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

static inline void RoundToInt(float f, int * volatile out) { AsmFloatToIntRound(f, (int *)out); }
static inline void TruncToInt(float f, int * volatile out) { AsmFloatToInt(f, (int *)out); }

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

int C_0016C870::func_0016C870(float dt)
{
    Parent_0016D140 *parent;
    Ref_0016D140 *ref;
    float *out;
    float one, d0, d1, d2, inv, v, t, len, sc, clamp, fv, r0, r1, r2, x, z;
    int n, i, idx, k, found, j, e0, e1;

    if (func_00169E10(dt))
        return 1;

    one = 1.0f;
    out = &unk54;
    d0 = unk24 - unk34;
    d1 = unk28 - unk38;
    d2 = unk2c - unk3c;
    inv = D_00275460 / dt;
    v = d1 * inv;
    *(u32 *)out = *(u32 *)&v;
    v = d0 * inv;
    *(u32 *)&out[1] = *(u32 *)&v;
    v = d2 * inv;
    *(u32 *)&out[2] = *(u32 *)&v;
    *(u32 *)&out[3] = *(u32 *)&one;

    parent = (Parent_0016D140 *)unk68;
    if (parent) {
        ref = parent->f18C;
        if (ref && D_002EFE50 != ref->f4->f90)
            return 1;
    }

    len = AsmSqrtF(unk54 * unk54 + unk58 * unk58 + unk5c * unk5c);
    sc = len * D_002886C0;
    clamp = AsmMinF(one, sc);

    t = dt * unk17C * D_002756CC;
    if (t > D_00275460) {
        AsmFloatToInt(t, &n);
        unk214 = 0.0f;
    } else {
        unk214 += t;
        if (unk214 != D_00275544 && unk214 > D_00275460) {
            AsmFloatToInt(unk214, &n);
            unk214 = 0.0f;
        } else {
            n = 0;
        }
    }
    fv = AsmMaxF(unk180, (float)n);
    AsmFloatToInt(fv, &n);

    for (i = 0; i < n; i++) {
        Particle_0016D140 *p;

        if (((Pool_0016D140 *)unk64)->count >= ((Pool_0016D140 *)unk64)->max)
            break;
        D_002EFB68++;
        r0 = (float)func_001E8833() * D_002754B0;
        r1 = (float)func_001E8833() * D_002754B0;
        r2 = (float)func_001E8833() * D_002754B0;
        idx = 0;
        x = (unk200 - unk1F0) * r0 + unk1F0;
        z = (unk208 - unk1F8) * r2 + unk1F8;
        if (r2 > D_0027AB84)
            idx = 1;
        if (r2 > D_0027AB80)
            idx = 2;
        if (unk1BC) {
            int *a = unk1BC;
            found = 0;
            for (k = unk1C0; k > 0; k--) {
                if (idx == *a)
                    found = 1;
                a++;
            }
            if (!found) {
                AsmFloatToIntRound((float)(unk1C0 - 1) * r2, &j);
                idx = unk1BC[j];
            }
        }
        p = ((Pool_0016D140 *)unk64)->items[((Pool_0016D140 *)unk64)->count];
        p->pos = *(C_Quad *)(void *)&unk34;
        p->pos.a += x;
        p->pos.c += z;
        p->f38 = unk178;
        p->f3C = unk178;
        p->f48 = (void *)this;
        fv = unk170 - (float)(D_002EFB68 & 3) * unk170 * D_0027AA20;
        p->f30 = fv;
        *(float *)(void *)&p->f2C = fv * clamp * D_002755E8;
        p->f28 = (int)((float)idx * *(float *)(void *)&unk1B4 + unk1A8);
        p->f34 = D_00275460 / p->f30;
        p->f40 = unk174;
        if (unk174 == D_00275544)
            p->f44 &= ~8;
        p->f4C = unk18C;
        p->f44 = unk190;
        e0 = r0 > D_002755E8;
        e1 = r1 > D_002755E8;
        if (e0 && unk1C4)
            p->f44 |= 0x4000;
        else
            p->f44 &= ~0x4000;
        if (e1 && unk1C8)
            p->f44 |= 0x8000;
        else
            p->f44 &= ~0x8000;
        p->f10 = *(C_Quad *)(void *)&unk54;
        if (unk218)
            p->f10.b += r1 * unk210;
        ((Pool_0016D140 *)unk64)->count++;
    }
    return 1;
}

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

int C_0016D140::func_0016D140(float dt)
{
    Ref_0016D140 *ref;
    int n;
    int i;
    int idx;
    int k;
    float f;
    float r0, r1, r2, x, z;
    Particle_0016D140 *p;

    if (func_00169E10(dt))
        return 1;
    ref = this->f68 ? this->f68->f18C : 0;
    if (ref && D_002EFE50 != ref->f4->f90)
        return 1;
    RoundToInt(dt * this->f17C, &n);
    n = AsmMaxI(1, n);
    f = AsmMaxF(this->f180, (float)n);
    TruncToInt(f, &n);
    for (i = 0; i < n; i++) {
        Pool_0016D140 *pool = this->f64;
        if (pool->count >= pool->max)
            break;
        D_002EFB6C++;
        r0 = func_001E8833() * D_002754B0;
        r1 = func_001E8833() * D_002754B0;
        r2 = func_001E8833() * D_002754B0;
        idx = 0;
        x = (this->f200[0] - this->f1F0[0]) * r0 + this->f1F0[0];
        z = (this->f200[2] - this->f1F0[2]) * r2 + this->f1F0[2];
        if (r2 > D_002755E8)
            idx = 1;
        if (this->f1BC) {
            int found = 0;
            int *a = this->f1BC;
            for (k = this->f1C0; k > 0; k--) {
                if (idx == *a)
                    found = 1;
                a++;
            }
            if (!found) {
                int j;
                RoundToInt((float)(this->f1C0 - 1) * r2, &j);
                idx = this->f1BC[j];
            }
        }
        p = this->f64->items[this->f64->count];
        p->pos = this->f24;
        p->pos.a += x;
        p->pos.c += z;
        p->f38 = this->f178;
        p->f3C = this->f178;
        p->f48 = (void *)this;
        p->f30 = this->f170 - (float)(D_002EFB6C & 3) * this->f170 * D_0027AA20;
        p->f2C = this->f198;
        if (this->f190 & 0x400)
            p->f28 = (int)((float)idx * this->f1B4 + this->f1A8);
        else
            p->f28 = func_00011260(this->f1A8, this->f1AC);
        p->f34 = D_00275460 / p->f30;
        p->f40 = this->f174;
        if (this->f174 != D_00275544)
            p->f44 &= ~8;
        p->f4C = this->f18C;
        p->f44 = this->f190;
        if (r0 > D_002755E8 && this->f1C4)
            p->f44 |= 0x4000;
        else
            p->f44 &= ~0x4000;
        if (r1 > D_002755E8 && this->f1C8)
            p->f44 |= 0x8000;
        else
            p->f44 &= ~0x8000;
        p->f10 = this->f54;
        if (this->f214)
            p->f10.b += r1 * this->f210;
        this->f64->count++;
    }
    return 1;
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
/* C_0016C870 is declared at the top of the file, above its first function. */
