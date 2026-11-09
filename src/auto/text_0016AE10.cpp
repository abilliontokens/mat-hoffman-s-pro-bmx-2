/* 4 functions from 0x0016AE10 to 0x0016B900, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern short D_002EFE50;
extern "C" float __cdecl fabsf(float);
float sqrtf(float);
extern float D_00278C48, D_00284ECC, D_002754B0, D_00275460;
int func_001E8833();
int func_00011260(int a, int b);

struct V4f_AE {
    float x, y, z, w;
};
V4f_AE func_0001E9E0(V4f_AE *in);
V4f_AE func_0001C610(V4f_AE *a, V4f_AE *b);

struct AE_Pool {
    char pad0[0x11C];
    int f11C;
    char pad120[4];
    int f124;
    char pad128[4];
    float **f12C;
};
struct AE_Base {
    int func_00169E10(float dt);
};
struct AE_Self {
    void *vtbl;
    char pad4[0x24 - 4];
    float f24, f28, f2C;
    u32 f30;
    float f34, f38, f3C;
    char pad40[0x54 - 0x40];
    float f54, f58, f5C;
    u32 f60;
    AE_Pool *f64;
    void *f68;
    char pad6C[0x174 - 0x6C];
    float f174;
    char pad178[0x180 - 0x178];
    u32 f180;
    char pad184[4];
    u32 f188, f18C, f190;
    char pad194[0x1A8 - 0x194];
    u32 f1A8, f1AC;
    char pad1B0[0x1F0 - 0x1B0];
    float f1F0, f1F4, f1F8, f1FC, f200, f204, f208, f20C, f210, f214, f218, f21C, f220, f224, f228, f22C;
    float f230, f234, f238;
    u32 f23C;
    float f240, f244, f248;
    u32 f24C;
    int func_0016AE10(float dt);
};

extern int D_002884D4;
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

struct ParticleEmitterLoader {
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
    float f174;
    float f178;
    float f17C;
    char pad180[8];
    u32 f188;
    char pad18C[4];
    u32 f190;
    char pad194[4];
    float f198;
    char pad19C[0xC];
    u32 f1A8, f1AC;
    ParticleEmitterLoader *func_0016B7A0(void *a, char *name, void *b, u32 *c);
};

struct C_00169C50 {
    void func_00169C50(void *param);
};

struct C_0016B770 {
    void *vtbl;
    char pad4[0x1EC];
    int f1F0;
    int f1F4;
    C_0016B770 *func_0016B770(void *param);
};

struct C_Quad {
    float a;
    float b;
    float c;
    float d;
};

struct C_0016B8B0 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x1AC];
    int f1F0;
    void func_0016B8B0(int a, int b, int c, int d, int e);
};

int AE_Self::func_0016AE10(float dt)
{
    if (((AE_Base *)this)->func_00169E10(dt) != 0) return 1;
    if (f68 != 0) {
        void *p = *(void **)((char *)f68 + 0x18C);
        if (p != 0) {
            void *q = *(void **)((char *)p + 4);
            if (D_002EFE50 != *(short *)((char *)q + 0x90)) return 1;
        }
    }
    {
        V4f_AE d;
        V4f_AE orient;
        float len;
        float rate;
        float a;
        float b;
        float c;
        float fv;
        int counti;
        int i;
        int n;
        float nf;
        V4f_AE pos;
        float w30;
        V4f_AE step;
        V4f_AE q2;
        V4f_AE t1;
        V4f_AE t2;
        d.x = f24 - f34;
        d.y = f28 - f38;
        d.z = f2C - f3C;
        d.w = 1.0f;
        len = AsmSqrtF(d.z * d.z + d.y * d.y + d.x * d.x);
        rate = len / dt;
        if (len > D_00278C48) {
            V4f_AE q;
            V4f_AE up;
            q = func_0001E9E0(&d);
            orient = q;
            if (fabsf(q.x) >= D_00284ECC || fabsf(q.z) >= D_00284ECC) {
                up.x = 0.0f; up.y = 1.0f; up.z = 0.0f; up.w = 1.0f;
            } else {
                up.x = 1.0f; up.y = 0.0f; up.z = 0.0f; up.w = 1.0f;
            }
            t1 = func_0001C610(&up, &q);
            t1 = func_0001E9E0(&t1);
            t2 = func_0001C610(&q, &t1);
            q2 = func_0001E9E0(&t2);
            orient.x = t1.x * f54 + q2.x * f58 + t2.x * f5C;
            orient.y = t1.y * f54 + q2.y * f58 + t2.y * f5C;
            orient.z = t1.z * f54 + q2.z * f58 + t2.z * f5C;
            orient.w = 1.0f;
        } else {
            orient.x = f54;
            orient.y = f58;
            orient.z = f5C;
            orient.w = *(float *)&f60;
        }
        if (f22C < rate) return 1;
        a = rate * f200;
        if (a < f1F8) a = f1F8;
        else if (a > f1FC) a = f1FC;
        b = rate * f214;
        if (b < f204) b = f204;
        else if (b > f208) b = f208;
        c = rate * f228 + len * f224;
        {
            float lo = dt * f21C;
            float hi = dt * f220;
            if (lo <= c) c = (hi < c) ? hi : c;
            else c = lo;
        }
        counti = 0;
        fv = c * f1F4 + f1F0;
        if (fv > 1.0f) {
            AsmFloatToInt(fv, &counti);
            fv = fv - (float)counti;
            f1F0 = fv;
        } else {
            f1F0 = fv + f1F0;
        }
        pos.x = f24;
        pos.y = f28;
        pos.z = f2C;
        w30 = *(float *)&f30;
        nf = *(float *)&f180;
        nf = AsmMaxF(nf, (float)counti);
        AsmFloatToInt(nf, &n);
        if (n <= 0) return 1;
        {
            float inv = 1.0f / (float)n;
            step.x = d.x * inv;
            step.y = d.y * inv;
            step.z = d.z * inv;
        }
        for (i = 0; i < n; i++) {
            float *pf;
            int *pi;
            float r;
            float rr;
            if (f64->f124 <= f64->f11C) return 1;
            pf = f64->f12C[f64->f11C];
            pi = (int *)pf;
            pf[11] = b * f218;
            pf[0] = pos.x;
            pf[1] = pos.y;
            pf[2] = pos.z;
            pf[3] = w30;
            pi[10] = (int)f188;
            pf[15] = a;
            pi[18] = (int)this;
            pf[14] = a;
            r = (float)func_001E8833() * D_002754B0;
            rr = ((1.0f - f20C) * (1.0f / (r * f210 + 1.0f)) + f20C) * b;
            pf[12] = rr;
            pf[13] = 1.0f / rr;
            pi[17] = (int)f190;
            pf[16] = a * f174;
            if (pf[16] == 0.0f) pi[17] &= 0xfffffff7;
            pi[19] = (int)f18C;
            pf[4] = (f240 - f230) * ((float)func_001E8833() * D_002754B0) + f230 + orient.x;
            pf[5] = (f244 - f234) * ((float)func_001E8833() * D_002754B0) + f234 + orient.y;
            pf[6] = (f248 - f238) * ((float)func_001E8833() * D_002754B0) + f238 + orient.z;
            pf[7] = 1.0f;
            pos.x -= step.x;
            pos.y -= step.y;
            pos.z -= step.z;
            f64->f11C++;
            f188 = func_00011260(f1A8, f1AC);
        }
    }
    return 1;
}

C_0016B770 *C_0016B770::func_0016B770(void *param)
{
    ((C_00169C50 *)this)->func_00169C50(param);
    f1F0 = 0;
    f1F4 = 0;
    vtbl = (void *)&D_002884D4;
    return this;
}

ParticleEmitterLoader *ParticleEmitterLoader::func_0016B7A0(void *a, char *name, void *b, u32 *c)
{
    ((C_001D3F50 *)this)->func_001D3F50();
    f64 = a;
    if (b) {
        f68 = b;
        if (c) *(V4u *)&f44 = *(V4u *)c;
    }
    if (!a) {
        f1AC = 31;
        f1A8 = 16;
        f188 = 16;
    } else {
        f64 = a;
        strcpy(&f6C, D_002A5558);
        if (!name) {
            ((ParticleEmitterResetVT *)this)->v2();
            return 0;
        }
        strcat(&f6C, name);
        if (((C_0016A330 *)this)->func_0016A330(&f6C)) return this;
    }
    u32 flags = f190 | 0x100C;
    f170 = 8000.0f;
    f198 = 1000.0f;
    f178 = 1.0f;
    f174 = 6.0f;
    f17C = 10.0f;
    f190 = flags;
    return this;
}

void C_0016B8B0::func_0016B8B0(int a, int b, int c, int d, int e)
{
    f34 = f24;
    C_Quad *p = &f24;
    p->a = *(float *)&a;
    p->b = *(float *)&b;
    p->c = *(float *)&c;
    p->d = *(float *)&d;
    f1F0 = e;
}

