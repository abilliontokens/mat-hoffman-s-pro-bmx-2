/* 8 functions from 0x001747F0 to 0x001755A0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern int D_00288DC4;
void func_001E891B(void *);
void __stdcall func_00171340(int a);

struct Vec4_001747F0 {
    float x, y, z, w;
};
struct Vec3_001747F0 {
    float x, y, z;
};
extern float D_00275544, D_00275460;
extern Vec4_001747F0 D_002A8C18;
struct Body_001747F0 {
    Vec4_001747F0 *func_00197F70(Vec4_001747F0 *out, Vec4_001747F0 *in);
};
Vec4_001747F0 *func_0011ADD0(Vec4_001747F0 *out, void *in);
struct R_001747F0 {
    char pad0[0x4c];
    Vec4_001747F0 v4C;
    Vec4_001747F0 v5C;
    Vec4_001747F0 v6C;
    Vec4_001747F0 v7C;
    char pad8C[0x130 - 0x8c];
    Vec4_001747F0 v130;
    Vec4_001747F0 v140;
    Vec4_001747F0 v150;
    Vec4_001747F0 v160;
    Vec4_001747F0 v170;
    Vec4_001747F0 v180;
    Vec4_001747F0 v190;
    Vec4_001747F0 v1A0;
    char pad1B0[0x1b4 - 0x1b0];
    int i1B4;
    char pad1B8[0x210 - 0x1b8];
    float f210, f214, f218, f21C, f220, f224;
    char pad228[0x22c - 0x228];
    Body_001747F0 *p22C;
    char pad230[0x234 - 0x230];
    void (*fn234)(int, Vec4_001747F0 *, Vec4_001747F0 *);
    Vec4_001747F0 v238;
    Vec4_001747F0 v248;
    Vec4_001747F0 v258;
    Vec4_001747F0 v268;
    char pad278[0x280 - 0x278];
    int i280, i284, i288;
    char pad28C[0x2b0 - 0x28c];
    Vec4_001747F0 v2B0;
    void func_001747F0(int a);
};
struct C_00175170 {
    int unk0;
    void func_00171980(void);
    void *func_00175170(int flags);
};

struct C_00175110 {
    int unk0;
    char pad4[0x1AC];
    int unk1B0;
    char pad1B4[0xCC];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    int unk294;
    char pad298[0x68];
    int unk300;
    void func_00174580(void);
    void *func_00175110(int a);
};

void *C_00175110::func_00175110(int a) {
    func_00171340(a);
    unk0 = (int)&D_00288DC4;
    unk1B0 = 0;
    unk280 = 1;
    unk284 = 1;
    unk288 = 1;
    unk28C = 1;
    unk290 = 1;
    unk294 = 1;
    func_00174580();
    unk300 = 0;
    return this;
}

void *C_00175170::func_00175170(int flags) {
    unk0 = (int)&D_00288DC4;
    func_00171980();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void __fastcall func_001751A0(unsigned char *src, int count, int *dst)
{
    do {
        dst[2] = (unsigned int)src[2] << 16;
        dst[1] = (unsigned int)src[1] << 16;
        dst[0] = (unsigned int)src[0] << 16;
        dst += 3;
        src += 3;
        count--;
    } while (count != 0);
}

void __fastcall func_00175210(u16 *src, int count) {
    int *dst;
    while (1) {
        dst[2] = (*src & 0x7c00) << 9;
        dst[1] = (*src & 0x3e0) << 14;
        dst[0] = ((u8)*src & 0x1f) << 19;
        dst += 3;
        src++;
        if (--count == 0)
            break;
    }
}

u32 func_00175250(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch)
{
    u8 *srow;
    u8 *drow;
    u8 *s;
    u8 *s1;
    u8 *d;
    int x;
    int y;

    srow = src;
    drow = dst;
    for (y = height; y > 0; y--) {
        s = srow;
        d = drow;
        for (x = width; x > 0; x--) {
            s1 = s + srcPitch * 3;
            d[2] = (s1[5] + s[5] + s1[2] + s[2]) >> 2;
            d[1] = (s1[4] + s1[1] + s[4] + s[1]) >> 2;
            d[0] = (s1[3] + s1[0] + s[3] + s[0]) >> 2;
            d += 3;
            s += 6;
        }
        srow += srcPitch * 6;
        drow += dstPitch * 3;
    }
    return 1;
}

int func_00175340(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int unused)
{
    u8 *srow;
    u8 *drow;
    u8 *s;
    u8 *d;
    int x;
    int y;
    int r, g, b, a, n;

    srow = src;
    drow = dst;
    for (y = height; y > 0; y--) {
        s = srow;
        d = drow;
        for (x = width; x > 0; x--) {
            a = r = g = b = n = 0;
            if (s[3]) { b += s[2]; g += s[1]; r += s[0]; a += s[3]; n++; }
            if (s[7]) { b += s[6]; g += s[5]; r += s[4]; a += s[7]; n++; }
            if (s[srcPitch * 4 + 3]) { b += s[srcPitch * 4 + 2]; g += s[srcPitch * 4 + 1]; r += s[srcPitch * 4]; a += s[srcPitch * 4 + 3]; n++; }
            if (s[srcPitch * 4 + 7]) { b += s[srcPitch * 4 + 6]; g += s[srcPitch * 4 + 5]; r += s[srcPitch * 4 + 4]; a += s[srcPitch * 4 + 3]; n++; }
            switch (n) {
            case 0:
                d[2] = 0; d[1] = 0; d[0] = 0; d[3] = 0;
                break;
            case 1:
                d[2] = b; d[1] = g; d[0] = r; d[3] = a;
                break;
            case 2:
                d[2] = b >> 1; d[1] = g >> 1; d[0] = r >> 1; d[3] = a >> 1;
                break;
            case 3:
                d[2] = b / 3; d[1] = g / 3; d[0] = r / 3; d[3] = a / 3;
                break;
            case 4:
                d[2] = b >> 2; d[1] = g >> 2; d[0] = r >> 2; d[3] = a >> 2;
                break;
            }
            d += 4;
            s += 8;
        }
        srow += srcPitch * 8;
        drow += dstPitch * 4;
    }
    return 1;
}

