/* 8 functions from 0x0016D6A0 to 0x0016E320, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern int D_00288084;
extern int D_00288894;
extern float D_00275460;
extern float D_00275544;
extern float D_00275F58;
extern float D_00276098;

struct C_0016DD70 {
    char pad0[0x224];
    float f224;
    float f228;
    char pad22C[4];
    float f230;
    u8 f234;
    int func_0016DD70(float a0);
    int func_00169E10(float a0);
};

void func_001E891B(void *p);

struct C_00169C50 {
    void func_00169C50(void *param);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_Quad {
    float a;
    float b;
    float c;
    float d;
};

struct C_IntQuad {
    int a, b, c, d;
    void Set(int a_, int b_, int c_, int d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

struct C_0016D8A0 {
    char pad0[0x54];
    C_IntQuad f54;
    void func_0016D8A0(int a, int b, int c, int d);
    void func_0016D8A0(C_IntQuad v);
};

struct C_0016DA40 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x150];
    int f194;
    char pad198[0x58];
    int f1F0, f1F4, f1F8, f1FC, f200, f204, f208, f20C;
    C_0016DA40 *func_0016DA40(void *param);
};

struct C_0016E2E0 {
    void *vtbl;
    char pad4[0x1B8];
    void *f1BC;
    void *func_0016E2E0(unsigned int flags);
};

extern char D_002A5558[];
extern "C" char * __cdecl strcpy(char *, const char *);
extern "C" char * __cdecl strcat(char *, const char *);

struct V4u_0016D6A0 {
    u32 x, y, z, w;
};

struct V4f_0016D6A0 {
    float x, y, z, w;
    void Set(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
    V4f_0016D6A0(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

struct V4f {
    float x, y, z, w;
    V4f(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

struct Particle_0016DEA0 {
    V4f_0016D6A0 pos;
    V4f_0016D6A0 vel;
    char pad20[8];
    int f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
    int f40;
    u32 f44;
    void *f48;
    int f4C;
};

struct Pool_0016DEA0 {
    char pad0[0x11c];
    int count;
    char pad120[4];
    int max;
    char pad128[4];
    Particle_0016DEA0 **items;
};

extern float D_002754B0;
extern float D_002755E8;
int func_001E8833(void);
int func_00011260(int lo, int hi);
static __forceinline float Rand01_0016DEA0(void) { return (float)func_001E8833() * D_002754B0; }

struct C_0016DEA0 {
    void *vtbl;
    char pad4[0x20];
    float f24, f28, f2c;
    char pad30[0x34];
    Pool_0016DEA0 *f64;
    char pad68[0x108];
    float f170;
    int f174;
    int f178;
    float f17C;
    float f180;
    int f184;
    int f188;
    int f18C;
    int f190;
    int f194;
    float f198;
    char pad19C[0xC];
    int f1A8, f1AC;
    char pad1B0[0x14];
    void *f1C4, *f1C8;
    char pad1CC[0x24];
    float f1F0, f1F4, f1F8, f1FC;
    float f200, f204, f208, f20C;
    float f210[2];
    float f218, f21C;
    float f220[4];
    void func_0016DEA0(void);
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

struct C_0016D6A0 {
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
    char pad178[4];
    float f17C;
    char pad180[8];
    u32 f188;
    char pad18C[4];
    u32 f190;
    char pad194[0x14];
    u32 f1A8, f1AC;
    char pad1B0[0x60];
    V4f f210;
    V4f f220;
    C_0016D6A0 *func_0016D6A0(void *a, char *name, void *b, u32 *c);
};

extern char D_00277298[];
extern char D_00288880[];
extern char D_00288870[];
extern char D_00288860[];
extern char D_00288850[];
extern char D_00288834[];
extern char D_00288820[];
extern char D_00288810[];
extern char D_0028860C[];
extern char D_00288600[];
extern char D_00288618[];
extern float D_002A8754[];

struct S_0016D8D0_Stream {
    int func_00169710(const char *name);
    int func_00168C50(const char *name, float def, float *out);
    int func_00168C20(const char *name, int def, int *out);
    int func_00168CB0(const char *name, const float *def, float *out);
};

struct S_0016D8D0_Elem {
    int f0;
    int f4;
    int f8;
};

struct S_0016D8D0_Owner {
    char pad0[0x134];
    S_0016D8D0_Elem *f134;
    __forceinline S_0016D8D0_Elem *GetElem(int i)
    {
        S_0016D8D0_Elem *p = f134;
        if (p == 0) {
            return 0;
        }
        return &p[i];
    }
};

struct C_0016A1D0 {
    void func_0016A3A0(S_0016D8D0_Stream *stream);
};

/* FireworkParticleEmitter (virtual slot 34: load from stream) */
struct C_0016D8D0 {
    void *vtbl;
    char pad4[0x60];
    S_0016D8D0_Owner *f64;
    char pad68[0x120];
    int f188;
    char pad18C[0x1c];
    int f1A8;
    int f1AC;
    int f1B0;
    char pad1B4[0x3c];
    float f1F0;
    float f1F4;
    float f1F8;
    float f1FC;
    float f200;
    float f204;
    int f208;
    int f20C;
    float f210[4];
    float f220[4];
    __forceinline S_0016D8D0_Elem *CurElem(void)
    {
        S_0016D8D0_Elem *p = f64->f134;
        if (p == 0) {
            return 0;
        }
        return &p[f1B0];
    }
    int func_0016D8D0(S_0016D8D0_Stream *stream);
};

struct C_0016DAC0_Ref {
    void func_00199A70(int a, C_Quad *out);
    C_Quad *func_00197EC0(C_Quad *out, V4u_0016D6A0 *v);
};

static inline void Copy_0016DAC0(void *d, const void *s)
{
    *(V4u_0016D6A0 *)d = *(const V4u_0016D6A0 *)s;
}

static inline void Set_0016DAC0(float *p, float a, float b, float c, float d)
{
    volatile float tmp[4];
    tmp[1] = b;
    float y = tmp[1];
    tmp[0] = a;
    p[0] = tmp[0];
    p[1] = y;
    tmp[2] = c;
    p[2] = tmp[2];
    tmp[3] = d;
    p[3] = tmp[3];
}

static inline void AddTo_0016DAC0(C_Quad *d, const C_Quad *s)
{
    d->a += s->a;
    d->b += s->b;
    d->c += s->c;
}

struct C_0016DAC0 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    V4u_0016D6A0 f44;
    char pad54[0x10];
    void *f64;
    C_0016DAC0_Ref *f68;
    char f6C;
    char pad6D[0x103];
    float f170;
    char pad174[4];
    float f178;
    float f17C;
    char pad180[8];
    u32 f188;
    char pad18C[0x1C];
    u32 f1A8, f1AC;
    char pad1B0[0x14];
    int f1C4, f1C8;
    char pad1CC[0x24];
    struct V4 {
        float x, y, z, w;
        V4(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
    } f1F0, f200;
    char pad210[8];
    float f218, f21C, f220;
    C_0016DAC0 *func_0016DAC0(void *a, char *name, C_0016DAC0_Ref *b, V4u_0016D6A0 *c);
};

C_0016D6A0 *C_0016D6A0::func_0016D6A0(void *a, char *name, void *b, u32 *c)
{
    ((C_001D3F50 *)this)->func_001D3F50();
    f64 = a;
    if (b) {
        f68 = b;
        if (c) *(V4u_0016D6A0 *)&f44 = *(V4u_0016D6A0 *)c;
    }
    if (!a) {
        f1AC = 0x68;
        f1A8 = 0x68;
        f188 = 0x68;
        f210 = V4f(-1.0f, 0.0f, -1.0f, 1.0f);
        f220 = V4f(1.0f, 0.0f, 1.0f, 1.0f);
    } else {
        f64 = a;
        strcpy(&f6C, D_002A5558);
        if (!name) {
            ((ParticleEmitterResetVT *)this)->v2();
            return 0;
        }
        strcat(&f6C, name);
        if (((C_0016A330 *)this)->func_0016A330(&f6C)) return this;
        f210 = V4f(-1.0f, 0.0f, -1.0f, 1.0f);
        f220 = V4f(1.0f, 0.0f, 1.0f, 1.0f);
    }
    f170 = 5000.0f;
    f174 = 0.0f;
    f17C = 500.0f;
    f190 = 0x2005;
    return this;
}

void C_0016D8A0::func_0016D8A0(C_IntQuad v)
{
    f54 = v;
}

int C_0016D8D0::func_0016D8D0(S_0016D8D0_Stream *stream)
{
    S_0016D8D0_Elem *e;
    int v;

    if (stream != 0) {
        stream->func_00169710(D_00277298);
        stream->func_00168C50(D_00288880, 3.0f, &f1F0);
        stream->func_00168C50(D_00288870, 5.0f, &f1F4);
        stream->func_00168C50(D_00288860, 1.0f, &f200);
        stream->func_00168C50(D_00288850, 2.0f, &f204);
        stream->func_00168C50(D_00288834, 1.5f, &f1F8);
        stream->func_00168C50(D_00288820, 0.6f, &f1FC);
        stream->func_00168C20(D_00288810, 1, &f208);
        stream->func_00168CB0(D_0028860C, D_002A8754, f210);
        stream->func_00168CB0(D_00288600, D_002A8754, f220);
        stream->func_00168C20(D_00288618, 0, &f20C);
        ((C_0016A1D0 *)this)->func_0016A3A0(stream);
        e = CurElem();
        if (e != 0) {
            f1AC = e->f8;
            v = e->f4;
        } else {
            f1AC = 0x2f;
            v = 0x20;
        }
        f188 = f1A8 = v;
        return 1;
    }
    return 0;
}

C_0016DA40 *C_0016DA40::func_0016DA40(void *param)
{
    u32 *p;
    ((C_00169C50 *)this)->func_00169C50(param);
    vtbl = (void *)&D_00288894;
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
    return this;
}

C_0016DAC0 *C_0016DAC0::func_0016DAC0(void *a,char *name,C_0016DAC0_Ref *b,V4u_0016D6A0 *c){((C_001D3F50*)this)->func_001D3F50();f64=a;if(b){f68=b;if(c){C_Quad t;Copy_0016DAC0(&f44,c);b->func_00199A70(0,&f24);AddTo_0016DAC0(&f24,f68->func_00197EC0(&t,&f44));Copy_0016DAC0(&f34,&f24);}else{Copy_0016DAC0(&f24,c);Copy_0016DAC0(&f34,c);}}if(!a){f1A8=0x55;f188=0x55;f1F0=V4(-1,0,-1,1);f1AC=100;f200=V4(1,0,1,1);}else{f64=a;strcpy(&f6C,D_002A5558);if(!name){((ParticleEmitterResetVT*)this)->v2();return 0;}strcat(&f6C,name);if(((C_0016A330*)this)->func_0016A330(&f6C))return this;f1F0=V4(-1,0,-1,1);f200=V4(1,0,1,1);}f170=750;f178=1;f17C=350;f1C4=1;f1C8=1;f218=40000;f21C=-1;f220=100;return this;}

int C_0016DD70::func_0016DD70(float dt)
{
    u8 flags;
    float t;

    if (f224 != -1.0f) {
        flags = f234;
        if (flags & 1) {
            f228 = dt + f228;
        } else {
            f228 = f228 - dt;
        }
        t = D_00275460 / f224;
        t = t * f228;
        f230 = t;
        if (f228 >= D_00275544) {
            if (t > D_00275460) {
                flags &= 0xfe;
                f228 = f224 - *(volatile float *)&f224 * D_00276098;
                f234 = flags;
            }
        } else if (t < D_00275F58) {
            flags |= 1;
            f228 = *(volatile float *)&f224 * D_00276098 - f224;
            f234 = flags;
        }
    }
    func_00169E10(dt);
    return 1;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void C_0016DEA0::func_0016DEA0(void)
{
    int i;
    int count;
    float r1, r2, r3;
    Particle_0016DEA0 *p;

    for (i = 0; i < f64->count; i++) {
        if (f64->items[i]->f48 == this) {
            f64->items[i]->f44 &= ~0x80u;
            f64->items[i]->f2C = f64->items[i]->f30;
        }
    }
    f220[0] = AsmMaxF(f180, f220[0]);
    for (count = 0; (float)count < f220[0]; count++) {
        float base[3];
        if (f64->count >= f64->max) {
            break;
        }
        r1 = Rand01_0016DEA0();
        r2 = Rand01_0016DEA0();
        r3 = Rand01_0016DEA0();
        p = f64->items[f64->count];
        base[0] = (f200 - f1F0) * r1 + f1F0;
        base[1] = (f204 - f1F4) * r2 + f1F4;
        base[2] = (f208 - f1F8) * r3 + f1F8;
        p->pos = V4f_0016D6A0(base[0] + f24, base[1] + f28, base[2] + f2c, 1.0f);
        if (f220[1] != -1.0f) {
            float *rate = &f220[3];
            float a = Rand01_0016DEA0();
            float b = Rand01_0016DEA0();
            float c = Rand01_0016DEA0();
            float vx = b * *rate;
            float vy = a * *rate;
            float vz = c * *rate;
            if (Rand01_0016DEA0() > D_002755E8) {
                vx = vx * D_00275F58;
            }
            if (Rand01_0016DEA0() > D_002755E8) {
                vy = vy * D_00275F58;
            }
            if (Rand01_0016DEA0() > D_002755E8) {
                vz = vz * D_00275F58;
            }
            p->vel = V4f_0016D6A0(vx, vy, vz, 1.0f);
        }
        {
            float life = (f210[1] - f210[0]) * Rand01_0016DEA0() + f210[0];
            p->f38 = life;
            p->f3C = life;
        }
        p->f48 = this;
        p->f30 = f170;
        _ReadWriteBarrier();
        p->f34 = D_00275460 / p->f30;
        p->f2C = f198;
        p->f28 = f188;
        p->f40 = 0;
        p->f4C = f18C;
        p->f44 = f190;
        {
            int b1 = r1 > D_002755E8;
            int b2 = r2 > D_002755E8;
            if (b1 && f1C4) {
                p->f44 |= 0x4000;
            } else {
                p->f44 &= ~0x4000u;
            }
            if (b2 && f1C8) {
                p->f44 |= 0x8000;
            } else {
                p->f44 &= ~0x8000u;
            }
        }
        f64->count++;
        f188 = func_00011260(f1A8, f1AC);
    }
}
void *C_0016E2E0::func_0016E2E0(unsigned int flags)
{
    vtbl = (void *)&D_00288084;
    if (f1BC != 0) {
        func_001E891B(f1BC);
    }
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

