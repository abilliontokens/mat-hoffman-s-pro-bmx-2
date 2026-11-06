/* 10 functions from 0x0009E680 to 0x0009F620, found by Ghidra. */
#include "common.h"

extern int D_0027AC78;
extern int D_002A5558;
extern f32 D_002A2528;
extern f32 D_002A252C;
extern f32 D_002A2530;
extern f32 D_002A2534;
extern int D_0027AC8C;
extern float D_00277F40, D_002A24DC, D_002756DC, D_002754B0, D_002755E8, D_00275460;
struct Root9E { char pad0[0x124]; int f124; };
extern Root9E *D_002A8490;
struct Vec4f { float x, y, z, w; };
struct Pool9E {
    char pad0[0x11C];
    int count11C;
    char pad120[4];
    int cap124;
    char pad128[4];
    int **arr12C;
};
struct Particle9E {
    char pad0[0x10];
    Vec4f v10;
    int f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    int f40;
    int f44;
    int f48;
};
float func_00011170(float *v);
void func_0009DA90(float *a, float *b);
float func_0014F7E0(float a);
void func_0001EAB0(float *a, float *b, float *c);
int func_001E8833();
Vec4f *func_0009DA50(float *a, float *b, float c);
void func_00158390(Vec4f a, Vec4f b, float c, void *d);
void func_001ADCC0(void *dst, int n, void *src, void *x);

struct C_0009EDF0 {
    void *vtbl;
    char pad4[0x20];
    Vec4f v24;
    Vec4f v34;
    char pad44[0x20];
    Pool9E *f64;
    char pad68[4];
    char f6c[0x104];
    float f170, f174, f178, f17c;
    char pad180[8];
    int f188;
    char pad18c[4];
    int f190;
    char pad194[0x14];
    int f1a8, f1ac;
    char pad1b0[0x1c];
    unsigned char f1cc;
    char pad1cd[0x23];
    float f1f0;
    int f1f4, f1f8;
    f32 f1fc, f200, f204, f208;
    float f20c, f210, f214, f218;
    C_0009EDF0 *func_0009EDF0(int a);
    int func_0009E680(C_0009EDF0 *arg);
    void func_00169C50(int a);
    C_0009EDF0 *func_0009EF00(int a, int b, int c);
    void func_0016A1D0(int a, int b, int c);
    void func_0016A330(void *a);
};

struct C_0009F580 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F580(int flags);
};

void func_001E891B(void *ptr);

struct C_0009F550 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F550(int flags);
};

extern int D_0027AA3C;
extern int D_0027AAEC;

struct C_0009F4F0 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F4F0(int flags);
};

struct C_0009F520 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F520(int flags);
};

struct Vec4i {
    int x, y, z, w;
};

struct C_0009EDB0 {
    char pad0[0x24];
    Vec4i v24;
    Vec4i v34;
    char pad44[0x188];
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 6;
    char pad1cd[0xf];
    int unk1dc;
    void func_0009EDB0(char param_1);
    void func_0009F4C0(char param_1);
};

void C_0009EDB0::func_0009EDB0(char param_1) {
    if (!(b1)) {
        v34 = v24;
    }
    b1 = param_1;
}

C_0009EDF0 *C_0009EDF0::func_0009EDF0(int a) {
    func_00169C50(a);
    vtbl = &D_0027AC8C;
    f32 *p = &f1fc;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 1.0f;
    f1ac = 0;
    f1a8 = 0;
    f188 = 0;
    f170 = 1000.0f;
    f178 = 0.015f;
    f174 = 0.5f;
    f190 = 0x26;
    f1cc |= 1;
    f1f0 = 1000.0f;
    f1f4 = 0;
    f1f8 = 0;
    f17c = 5.0f;
    f1fc = D_002A2528;
    f200 = D_002A252C;
    f204 = D_002A2530;
    f208 = D_002A2534;
    f218 = 5.0f;
    f20c = 10.0f;
    f210 = 6.0f;
    f214 = 0.8f;
    func_001ADCC0(f6c, 0x104, &D_0027AC78, &D_002A5558);
    return this;
}

void C_0009EDB0::func_0009F4C0(char param_1) {
    b1 = param_1;
    unk1dc = 0;
}

void *C_0009F4F0::func_0009F4F0(int flags) {
    unk0 = (int)&D_0027AA3C;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0009F520::func_0009F520(int flags) {
    unk0 = (int)&D_0027AAEC;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0009F550::func_0009F550(int flags) {
    extern int D_0027AB9C;
    void func_001E891B(void *);
    unk0 = (int)&D_0027AB9C;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0009F580::func_0009F580(int flags) {
    extern int D_0027AC8C;
    unk0 = (int)&D_0027AC8C;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

