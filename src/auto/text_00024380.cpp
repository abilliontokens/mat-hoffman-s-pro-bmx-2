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
    int f10;
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

void __stdcall func_00024380(void *p)
{
    (void)p;
}
