/* 4 functions from 0x0016AE10 to 0x0016B900, found by Ghidra. */
#include "common.h"

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

int func_0016AE10(float dt)
{
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

extern short D_002EFE50;
extern "C" float __cdecl fabsf(float);
extern float D_00278C48, D_00284ECC, D_002754B0;
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
struct SmokeParticleEmitter {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual int func_0016AE10(float dt);
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
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
};

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

