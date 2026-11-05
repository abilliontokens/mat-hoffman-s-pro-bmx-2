/* 8 functions from 0x001747F0 to 0x001755A0, found by Ghidra. */
#include "common.h"

extern int D_00288DC4;
void func_001E891B(void *);
void __stdcall func_00171340(int a);

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

void __fastcall func_00175210(u16 *src, int count) {
    register int *dst;
    do {
        dst[2] = (*src & 0x7c00) << 9;
        dst[1] = (*src & 0x3e0) << 14;
        dst[0] = ((u8)*src & 0x1f) << 19;
        dst += 3;
        src++;
        count--;
    } while (count != 0);
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

