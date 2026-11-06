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

struct AmbientDebris {
    char pad0[0x28];
    Ini_24380 *f28;
    char pad2c[8];
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    char pad48[8];
    int f50;
    char pad54[8];
    void *f5C;
    void *f60;
    Debris_24380 **f64;
    Seg_24380 **f68;
    void *f6C;
    void *f70;
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
    int idx;
    int lim;
    int k;

    lim = -1;
    if (!ini->func_00169710(D_00276510))
        return;
    ini->func_00168C20(D_00276504, 0, &cnt);
    if (cnt <= 0)
        return;
    if (f64 == 0) {
        f34 = cnt;
        n = f34;
        start = 0;
        lim = 0;
        idx = n;
        f64 = (Debris_24380 **)func_001E8A44(n * 4);
    } else {
        start = f34;
        f34 = start + cnt;
        n = f34;
        f64 = (Debris_24380 **)func_001E83E8(f64, n * 4);
        idx = start;
        lim = n;
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
        ini->func_00168C20(D_002764DC, 1, &lim);
        o->f2C = (unsigned char)lim;
        ini->func_00168C50(D_002764D8, 60.0f, &o->f0);
        ini->func_00168CB0(D_002764C8, &D_002A0FA4, &o->f1C);
        ini->func_00168C20(D_002764B4, 0, &lim);
        o->f2E = (unsigned char)lim;
        ini->func_00168C20(D_002764A8, 0, &lim);
        o->f8 = lim - 1;
        if (o->f8 != -1)
            o->f8 += start;
        ini->func_00168C20(D_0027649C, 0, &lim);
        o->fC = lim - 1;
        ini->func_00168C20(D_00276490, 0, &lim);
        o->f10 = lim - 1;
        if (o->f10 != -1)
            o->f10 += start;
        ini->func_00168C20(D_00276488, 0, &lim);
        o->f14 = lim - 1;
        o->f18 = 0;
        o->f4 = 0;
        o->f2D = 0;
        o->f2F = 0;
    }
}
