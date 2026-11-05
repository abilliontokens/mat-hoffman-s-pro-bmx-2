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

void C_0016D8A0::func_0016D8A0(int a, int b, int c, int d)
{
    f54.Set(a, b, c, d);
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
                f228 = f224 - D_00276098 * f224;
                f234 = flags;
            }
        } else if (t < D_00275F58) {
            flags |= 1;
            f228 = D_00276098 * f224 - f224;
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

