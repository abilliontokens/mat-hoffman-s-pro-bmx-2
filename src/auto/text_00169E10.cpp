/* 9 functions from 0x00169E10 to 0x0016AE10, found by Ghidra. */
#include "common.h"

extern char D_00276274[];
extern char D_002A5558[];
extern "C" char * __cdecl strcpy(char *, const char *);
extern "C" char * __cdecl strcat(char *, const char *);
struct ParticleEmitterResetVT {
    virtual void v0(); virtual void v1(); virtual void v2();
};

int func_0014FDF0(void *a, const void *b);
void func_0014FE50(void *p);

struct C_001D3F50 {
    void func_001D3F50(void);
};

/* local scratch object built on the stack (size 0x4cc) */
struct C_00168280 {
    char data[0x4cc];
    C_00168280 *func_00168280(void);
    int func_00169490(char *buf, int flag);
    void func_001691E0(void);
};

/* virtual slots 34 and 35 of ParticleEmitter */
struct ParticleEmitterVT {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33();
    virtual void v34(void *a);
    virtual void v35(void *a);
};

struct V4u {
    u32 x, y, z, w;
};

struct V4f {
    float x, y, z, w;
};

extern int D_002882EC;
extern char *D_002A8490;
extern float D_00275544;
float func_00011240();
struct EmitterTransform {
    void func_00199A70(int, void *);
    V4f *func_00197EC0(V4f *, void *);
};

void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_0016A910 {
    char pad0[0x24];
    V4u v24, v34, v44, v54;
    u32 f64, f68;
    char name[0x104];
    u32 f170, f174, f178, f17C;
    char pad180[4];
    u32 f184, f188, f18C, f190, f194, f198, f19C, f1A0, f1A4, f1A8, f1AC, f1B0, f1B4, f1B8;
    int *f1BC;
    int f1C0;
    u32 f1C4, f1C8;
    unsigned char b0 : 1, b1 : 1, b2 : 1;
    char pad1CD[3];
    u32 f1D0, f1D4, f1D8, f1DC, f1E0, f1E4, f1E8, f1EC;
    void func_0016A910(C_0016A910 *src, int flag);
};

/* SmokeParticleEmitter */
struct C_0016ABE0 {
    void *vtbl;
    char pad4[0x1EC];
    float f1F0, f1F4, f1F8, f1FC;
    float f200, f204, f208, f20C;
    float f210, f214, f218, f21C;
    float f220, f224, f228, f22C;
    V4f v230;
    V4f v240;
    void func_00169C50(int a);
    C_0016ABE0 *func_0016ABE0(int a);
};

struct ParticleEmitter {
    void *vtbl;
    char pad4[0x40];
    u32 f44;
    u32 f48;
    u32 f4C;
    u32 f50;
    char pad54[0x10];
    void *f64;
    void *f68;
    u32 f6C;
    char pad70[0x104];
    u32 f174;
    char pad178[0x10];
    u32 f188;
    char pad18C[4];
    u32 f190;
    char pad194[0x14];
    u32 f1A8, f1AC;
    char pad1B0[0x1c];
    unsigned char flags;
    char pad1CD[3];
    int mode;
    float delay, f1D8, timer, low0, high0, low1, high1;
    int func_00169E10(float dt);
    ParticleEmitter *func_0016AD20(void *a, char *name, void *b, u32 *c);
    ParticleEmitter *func_0016A1D0(void *a, void *b, u32 *c);
    int func_0016A330(char *buf);
    int func_0016A8D0(void);
    void func_0016A220(void *a, u32 *b);
};

ParticleEmitter *ParticleEmitter::func_0016A1D0(void *a, void *b, u32 *c) {
    ((C_001D3F50 *)this)->func_001D3F50();
    f64 = a;
    if (b != 0) {
        f68 = b;
        if (c != 0) {
            *(V4u *)&f44 = *(V4u *)c;
        }
    }
    return this;
}

void ParticleEmitter::func_0016A220(void *a, u32 *b) {
    f68 = a;
    if (b != 0) {
        *(V4u *)&f44 = *(V4u *)b;
    }
}

int ParticleEmitter::func_0016A330(char *buf) {
    C_00168280 obj;

    if (buf != 0) {
        obj.func_00168280();
        if (obj.func_00169490(buf, 0) != 0) {
            ((ParticleEmitterVT *)this)->v34(&obj);
            obj.func_001691E0();
            return 1;
        }
        obj.func_001691E0();
    }
    return 0;
}

int ParticleEmitter::func_0016A8D0(void) {
    void *p = (void *)func_0014FDF0(&f6C, D_00276274);
    if (p != 0) {
        func_0014FE50(p);
        ((ParticleEmitterVT *)this)->v35(&f6C);
    }
    return 1;
}

void C_0016A910::func_0016A910(C_0016A910 *s, int flag) {
    if (flag) {
        v24 = s->v24;
        v34 = s->v34;
        v44 = s->v44;
        f68 = s->f68;
    }
    v54 = s->v54;
    b0 = s->b0;
    f64 = s->f64;
    strcpy(name, s->name);
    f170 = s->f170;
    f174 = s->f174;
    f178 = s->f178;
    f17C = s->f17C;
    f184 = s->f184;
    b1 = s->b1;
    f1C4 = s->f1C4;
    f1C8 = s->f1C8;
    f188 = s->f188;
    b2 = s->b2;
    f18C = s->f18C;
    f190 = s->f190;
    f194 = s->f194;
    f198 = s->f198;
    f1A8 = s->f1A8;
    f1AC = s->f1AC;
    f1B0 = s->f1B0;
    f19C = s->f19C;
    f1A0 = s->f1A0;
    f1A4 = s->f1A4;
    f1D0 = s->f1D0;
    f1D4 = s->f1D4;
    f1D8 = s->f1D8;
    f1DC = s->f1DC;
    f1E0 = s->f1E0;
    f1E4 = s->f1E4;
    f1E8 = s->f1E8;
    f1EC = s->f1EC;
    f1B4 = s->f1B4;
    f1B8 = s->f1B8;
    f1C0 = s->f1C0;
    if (f1BC) {
        func_001E891B(f1BC);
        f1BC = 0;
    }
    if (f1C0 > 0) {
        f1BC = (int *)func_001E8A44(f1C0 * 4);
        for (int i = 0; i < f1C0; i++)
            f1BC[i] = s->f1BC[i];
    }
}

C_0016ABE0 *C_0016ABE0::func_0016ABE0(int a)
{
    unsigned int *p;
    V4f t;

    func_00169C50(a);
    vtbl = (void *)&D_002882EC;
    p = (unsigned int *)&v230;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (unsigned int *)&v240;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f1F0 = 0;
    f1F4 = 1.0f;
    f1F8 = 0;
    f1FC = 5.0f;
    f200 = 0.01f;
    f204 = 500.0f;
    f208 = 3500.0f;
    f20C = 0.5f;
    f210 = 1.0f;
    f214 = 5.0f;
    f218 = 0;
    f21C = 0;
    f220 = 1.0f;
    f224 = 0.01f;
    f228 = 0;
    f22C = 25.0f;
    t.x = 0;
    t.y = 0;
    t.z = 0;
    t.w = 1.0f;
    v230 = t;
    t.x = 0;
    t.y = 0;
    t.z = 0;
    t.w = 1.0f;
    v240 = t;
    return this;
}

ParticleEmitter *ParticleEmitter::func_0016AD20(void *a, char *name, void *b, u32 *c) {
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
        strcpy((char *)&f6C, D_002A5558);
        if (!name) {
            ((ParticleEmitterResetVT *)this)->v2();
            return 0;
        }
        strcat((char *)&f6C, name);
        if (func_0016A330((char *)&f6C)) return this;
    }
    u32 flags = f190 | 0x100E;
    f174 = 0x40000000;
    f190 = flags;
    return this;
}

