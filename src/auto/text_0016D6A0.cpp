/* 8 functions from 0x0016D6A0 to 0x0016E320, found by Ghidra. */
#include "common.h"

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
    float f210[4];
    float f220[4];
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
};

struct C_0016A1D0 {
    int func_0016A3A0(S_0016D8D0_Stream *stream);
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
    int func_0016D8D0(S_0016D8D0_Stream *stream);
};

C_0016D6A0 *C_0016D6A0::func_0016D6A0(void *a, char *name, void *b, u32 *c)
{
    volatile float tmp[4];

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
        tmp[1] = 0.0f;
        float y = tmp[1];
        tmp[0] = -1.0f;
        f210[0] = tmp[0];
        f210[1] = y;
        tmp[2] = -1.0f;
        f210[2] = tmp[2];
        tmp[3] = 1.0f;
        f210[3] = tmp[3];
        tmp[0] = 1.0f;
        f220[0] = tmp[0];
        tmp[1] = 0.0f;
        f220[1] = tmp[1];
        tmp[2] = 1.0f;
        f220[2] = tmp[2];
        tmp[3] = 1.0f;
        f220[3] = tmp[3];
    } else {
        f64 = a;
        strcpy(&f6C, D_002A5558);
        if (!name) {
            ((ParticleEmitterResetVT *)this)->v2();
            return 0;
        }
        strcat(&f6C, name);
        if (((C_0016A330 *)this)->func_0016A330(&f6C)) return this;
        tmp[1] = 0.0f;
        float y = tmp[1];
        tmp[0] = -1.0f;
        f210[0] = tmp[0];
        f210[1] = y;
        tmp[2] = -1.0f;
        f210[2] = tmp[2];
        tmp[3] = 1.0f;
        f210[3] = tmp[3];
        tmp[0] = 1.0f;
        f220[0] = tmp[0];
        tmp[1] = 0.0f;
        f220[1] = tmp[1];
        tmp[2] = 1.0f;
        f220[2] = tmp[2];
        tmp[3] = 1.0f;
        f220[3] = tmp[3];
    }
    f170 = 5000.0f;
    f174 = 0.0f;
    f17C = 500.0f;
    f190 = 0x2005;
    return this;
}

void C_0016D8A0::func_0016D8A0(int a, int b, int c, int d)
{
    f54.Set(a, b, c, d);
}

int C_0016D8D0::func_0016D8D0(S_0016D8D0_Stream *stream)
{
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
        S_0016D8D0_Elem *e = f64->f134;
        if (e != 0) {
            S_0016D8D0_Elem *sub = &e[f1B0];
            if (sub != 0) {
                f1AC = sub->f8;
                f188 = f1A8 = sub->f4;
                return 1;
            }
        }
        f1AC = 0x2f;
        v = 0x20;
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

