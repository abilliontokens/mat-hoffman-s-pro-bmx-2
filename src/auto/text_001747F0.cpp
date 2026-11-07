/* 8 functions from 0x001747F0 to 0x001755A0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern int D_00288DC4;
void func_001E891B(void *);
void __stdcall func_00171340(int a);

struct Vec4_001747F0 {
    float x, y, z, w;
    Vec4_001747F0() {}
    Vec4_001747F0(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};
struct Vec3_001747F0 {
    float x, y, z;
};

struct Vec4_001747F0_POD {
    float x, y, z, w;
};

struct __declspec(align(16)) Mat4_001747F0 {
    Vec4_001747F0 r0, r1, r2, r3;
};
extern float D_00275544, D_00275460;
extern Vec4_001747F0 D_002A8C18;
struct Body_001747F0 {
    Vec4_001747F0 *func_00197F70(Vec4_001747F0 *out, Vec4_001747F0 *in);
    void func_0019AD60(int a, Mat4_001747F0 *m);
    Vec4_001747F0 *func_00197EC0(Vec4_001747F0 *out, Vec4_001747F0 *in);
    void func_00199CF0(float *d, Vec4_001747F0 v);
    void func_00199960(int a, Vec4_001747F0 *v);
    void func_0019AC50();
};
Vec4_001747F0 *func_0011ADD0(Vec4_001747F0 *out, void *in);
void func_0001C680(Vec4_001747F0 *out, Vec4_001747F0 m, void *p);
Vec4_001747F0 *func_001742F0(Vec4_001747F0 *out, Vec4_001747F0 *a, Vec4_001747F0 *b);
Vec4_001747F0 *func_00174110(Vec4_001747F0 *out, Vec4_001747F0 *in);
Mat4_001747F0 *func_001741C0(Mat4_001747F0 *out, Vec4_001747F0 *in);
float func_00011170(Vec4_001747F0 *v);
struct Emit_001747F0 {
    char pad0[0x234];
    void (*fn)(int, int, Vec4_001747F0 *, Vec4_001747F0 *);
};

struct R_001747F0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36();
    virtual void v37();
    virtual void v38(); virtual void v39(); virtual void v40();
    virtual Vec4_001747F0 *v41(Vec4_001747F0 *out);
    virtual void v42(); virtual void v43();
    virtual Vec4_001747F0 *v44(Vec4_001747F0 *out);
    char pad4[0x4c - 4];
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
    char pad234[4];
    Vec4_001747F0 v238;
    Vec4_001747F0 v248;
    Vec4_001747F0 v258;
    Vec4_001747F0 v268;
    char pad278[0x280 - 0x278];
    int i280, i284, i288, i28C, i290, i294;
    Vec3_001747F0 v298;
    Vec3_001747F0 v2A4;
    Vec3_001747F0 v2B0;
    Vec3_001747F0 v2BC;
    Vec4_001747F0 v2C8;
    Vec4_001747F0 v2D8;
    Vec3_001747F0 v2E8;
    Vec3_001747F0 v2F4;
    int func_001747F0(int a);
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

int R_001747F0::func_001747F0(int a)
{
    Vec4_001747F0 t1;
    Vec4_001747F0 t2;
    Mat4_001747F0 m;
    Mat4_001747F0 mSrc;
    float len2;
    float s;
    float k;
    float dx, dy, dz;

    if (p22C == 0 || i1B4 == 0) return 0;
    v5C = v238;
    v4C = *p22C->func_00197F70(&t1, &v190);
    v1A0 = *func_0011ADD0(&t2, (char *)p22C + 0xf0);
    if (f210 > D_00275544) {
        k = f214;
        v6C = Vec4_001747F0(k * v130.x, k * v130.y, k * v130.z, 1.0f);
        if (i280 == 0) { v238.x = 0; v6C.x = 0; v2BC.x = 0; }
        if (i284 == 0) { v238.y = 0; v6C.y = 0; v2BC.y = 0; }
        if (i288 == 0) { v238.z = 0; v6C.z = 0; v2BC.z = 0; }
        len2 = v6C.x * v6C.x + v6C.y * v6C.y + v6C.z * v6C.z;
        if (len2 > f218) {
            s = AsmSqrtF(f218 / len2);
            v6C.x *= s;
            v6C.y *= s;
            v6C.z *= s;
        }
        v2B0.x = v6C.x;
        v2B0.y = v6C.y;
        v2B0.z = v6C.z;
    } else {
        v6C = D_002A8C18;
        v2B0.x = 0;
        v2B0.y = 0;
        v2B0.z = 0;
    }
    ((Emit_001747F0 *)this)->fn(a, 3, &v238, (Vec4_001747F0 *)&v2B0);

    len2 = v238.x * v238.x + v238.y * v238.y + v238.z * v238.z;
    if (len2 > f220) {
        s = AsmSqrtF(f220 / len2);
        v238.x *= s;
        v238.y *= s;
        v238.z *= s;
    }
    v298.x = v238.x;
    v298.y = v238.y;
    v298.z = v238.z;
    ((Emit_001747F0 *)this)->fn(a, 3, &v4C, (Vec4_001747F0 *)&v298);

    func_0001C680(&v7C, v140, (char *)p22C + 0xf0);

    if (i28C == 0) { v268.x = 0; v7C.x = 0; v2F4.x = v7C.x; }
    if (i290 == 0) { v268.y = 0; v7C.y = 0; v2F4.y = v7C.y; }
    if (i294 == 0) { v268.z = 0; v7C.z = 0; v2F4.z = v7C.z; }

    len2 = v7C.x * v7C.x + v7C.y * v7C.y + v7C.z * v7C.z;
    if (len2 > f21C) {
        s = AsmSqrtF(f21C / len2);
        v7C.x *= s;
        v7C.y *= s;
        v7C.z *= s;
    }
    v2E8.x = v7C.x;
    v2E8.y = v7C.y;
    v2E8.z = v7C.z;
    ((Emit_001747F0 *)this)->fn(a, 3, &v268, (Vec4_001747F0 *)&v2E8);

    len2 = v268.x * v268.x + v268.y * v268.y + v268.z * v268.z;
    if (len2 > f224) {
        s = AsmSqrtF(f224 / len2);
        v268.x *= s;
        v268.y *= s;
        v268.z *= s;
    }
    v2C8 = *func_001742F0(&t2, &v1A0, &v268);
    ((Emit_001747F0 *)this)->fn(a, 4, &v1A0, &v2C8);

    v1A0 = *func_00174110(&t1, &v1A0);
    AsmCopyMatrix(&m, func_001741C0(&mSrc, &v1A0));
    p22C->func_0019AD60(0, &m);
    if (v160.x != 0.0f || v160.y != 0.0f || v160.z != 0.0f) {
        t1 = *p22C->func_00197EC0(&t2, &v160);
        float d = func_00011170(&t1);
        if (d != 0.0f) {
            float inv = 1.0f / d;
            p22C->func_00199CF0(&d, Vec4_001747F0(t1.x * inv, t1.y * inv, t1.z * inv, t1.w));
        }
    }
    t1 = *p22C->func_00197F70(&t1, &v190);
    dx = v150.x - t1.x;
    dy = v150.y - t1.y;
    dz = v150.z - t1.z;
    v4C.x = v4C.x + dx;
    v4C.y = v4C.y + dy;
    v4C.z = v4C.z + dz;
    p22C->func_00199960(0, &v4C);
    p22C->func_0019AC50();
    v248 = *v41(&t2);
    v258 = *v44(&t2);
    v130 = D_002A8C18;
    v140 = D_002A8C18;
    v170 = D_002A8C18;
    v180 = D_002A8C18;
    v150 = D_002A8C18;
    v160 = D_002A8C18;
    v37();
    return 1;
}

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

