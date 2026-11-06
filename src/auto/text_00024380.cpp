/* 1 function from 0x00024380 to 0x00025240, found by Ghidra. */
#include "common.h"

struct V4_24380 { float x, y, z, w; };

struct Ini_24380 {
    int func_00169710(const char *name);
    void func_00168C20(const char *key, int def, void *out);
    void func_00168C50(const char *key, float def, void *out);
    void func_00168CB0(const char *key, void *def, void *out);
    void func_00168BE0(const char *key, const char *def, char *out, int size);
};

struct Debris_24380 {
    float f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    V4_24380 f1C;
    unsigned char f2C;
    unsigned char f2D;
    unsigned char f2E;
    unsigned char f2F;
    char f30[0x104];
};

struct Seg_24380 {
    int f0;
    int f4;
    int f8;
    int fC;
    void *f10;
};

struct Obj20C_24380;

struct Obj20C_Vtbl_24380 {
    void *f0;
    void *f4;
    void *f8;
    void *fC;
    void (*v10)(int a, int b, int c, int d, char *buf);
};

struct Obj20C_24380 {
    void *vtbl;
    Obj20C_24380 *func_001CF740(void *a, int b, int c);
};

struct Seg5C_24380 {
    int f0;
    Obj20C_24380 *f4;
};

struct D217F0_24380 {
    void *vtbl;
    char pad4[0x70];
    char f7a;
    char f7b;
    D217F0_24380 *func_000217F0(int a);
    void func_001D3F50();
    void func_00021890(Ini_24380 *stream, int base);
    void func_001578D0();
};

struct Obj138_24380 {
    void *vtbl;
    int f4;
    int f8;
    void **fC;
    int f10;
    int f14;
    void **f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    char f34[0x104];
};

struct AmbientDebris {
    char pad0[0x28];
    Ini_24380 *f28;
    char pad2c[4];
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    char pad48[8];
    int f50;
    char pad54[8];
    Seg5C_24380 **f5C;
    D217F0_24380 **f60;
    Debris_24380 **f64;
    Seg_24380 **f68;
    int (*f6C)[2];
    Obj138_24380 **f70;
    AmbientDebris *func_00024140(int a, int b);
    void func_00024380(Ini_24380 *ini);
};

void *func_001E8A44(int size);
void *func_001E83E8(void *p, int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_00011FF0(void *dst, int size, int count, const void *src);

extern char D_00276510[];
extern char D_00276504[];
extern char D_002764F8[];
extern char D_002764F0[];
extern char D_002764EC[];
extern char D_002764DC[];
extern char D_002764D8[];
extern char D_002764C8[];
extern char D_002764B4[];
extern char D_002764A8[];
extern char D_0027649C[];
extern char D_00276490[];
extern char D_00276488[];
extern char D_0027647C[];
extern char D_00276470[];
extern char D_00276464[];
extern char D_00276454[];
extern char D_00276444[];
extern char D_0027643C[];
extern char D_0027642C[];
extern V4_24380 D_002A0FA4;
extern char D_00021290[];

void AmbientDebris::func_00024380(Ini_24380 *ini)
{
    char buf[0x104];
    int cnt;
    int n;
    int start;
    int i;
    int t;
    int idx;

    idx = -1;
    if (!ini->func_00169710(D_00276510))
        return;
    ini->func_00168C20(D_00276504, 0, &cnt);
    if (cnt <= 0)
        return;
    if (f64 == 0) {
        f34 = cnt;
        n = f34;
        start = 0;
        idx = 0;
        f64 = (Debris_24380 **)func_001E8A44(n * 4);
    } else {
        start = f34;
        f34 = start + cnt;
        n = f34;
        f64 = (Debris_24380 **)func_001E83E8(f64, n * 4);
        idx = n;
    }
    if (start >= n)
        return;
    for (i = start; i < n; i++) {
        void *m = func_001E8A44(0x134);
        Debris_24380 *o;
        if (m) {
            o = (Debris_24380 *)m;
            o->f1C.x = 0.0f;
            o->f1C.y = 0.0f;
            o->f1C.z = 0.0f;
            o->f1C.w = 1.0f;
        } else {
            o = 0;
        }
        f64[i] = o;
        func_001ADCC0(buf, 0x20, D_002764F8, i - start + 1);
        ini->func_00169710(buf);
        ini->func_00168BE0(D_002764EC, D_002764F0, o->f30, 0x104);
        ini->func_00168C20(D_002764DC, 1, &idx);
        o->f2C = (unsigned char)idx;
        ini->func_00168C50(D_002764D8, 60.0f, &o->f0);
        ini->func_00168CB0(D_002764C8, &D_002A0FA4, &o->f1C);
        ini->func_00168C20(D_002764B4, 0, &t);
        o->f2E = (unsigned char)t;
        ini->func_00168C20(D_002764A8, 0, &t);
        o->f8 = t - 1;
        if (o->f8 != -1)
            o->f8 += start;
        ini->func_00168C20(D_0027649C, 0, &t);
        o->fC = t - 1;
        ini->func_00168C20(D_00276490, 0, &t);
        o->f10 = t - 1;
        if (o->f10 != -1)
            o->f10 += start;
        ini->func_00168C20(D_00276488, 0, &t);
        o->f14 = t - 1;
        o->f18 = 0;
        o->f4 = 0;
        o->f2D = 0;
        o->f2F = 0;
    }
}
