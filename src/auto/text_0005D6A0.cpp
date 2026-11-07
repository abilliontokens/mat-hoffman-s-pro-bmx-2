/* 7 functions from 0x0005D6A0 to 0x0005E600, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
extern "C" void *__cdecl memcpy(void *, const void *, unsigned int);
extern "C" void *__cdecl memset(void *, int, unsigned int);
#pragma intrinsic(memcpy, memset)
struct S_002A8490_4 { char pad0[0xB4]; int fB4; };
struct S_001577A0 { void func_001577A0(void *a, int b); };
struct S_002A8490 { char pad0[0x4]; S_002A8490_4 *f4; char pad8[0xC]; S_001577A0 *f14; char pad18[0x2CC]; int f2E4; };
extern S_002A8490 *D_002A8490;
extern char D_0027829C[], D_002782AC[], D_00278438[], D_00278138[], D_000149F0[];
extern char D_002A47F0[], D_002A5348[], D_00275678[], D_002A48F8[], D_0027842C[];
int func_001ADCC0(char *buf, int n, const char *fmt, ...);
void *func_001E8A44(unsigned int n);
struct S_0005CBD0 { void func_0005CBD0(void); };
struct S_001D3F60 { void *func_001D3F60(void); };
struct S_00094F40 {
    S_00094F40 *func_00094F40(S_002A8490_4 *a);
    void func_00095640(char *buf, int a, int b);
};
struct C_0005D6A0 { C_0005D6A0 *func_0005D6A0(void); };

struct Vec4_5DAB0 {
    float x;
    float y;
    float z;
    float w;
};

struct Node_5DAB0 {
    char pad0[0x20];
    float f20;
    float f24;
    float f28;
    char pad2C[0x40 - 0x2C];
    float f40;
    float f44;
    float f48;
};

extern float D_00275544;
struct Obj22C_5DAB0 {
    Vec4_5DAB0 *func_00197F70(void *out, void *in);
    Vec4_5DAB0 *func_00198040(void *out, void *in);
    void func_001994C0(int a, void *b, void *c);
    void func_00199960(int a, void *b);
    void func_00199E50(Vec4_5DAB0 a, Vec4_5DAB0 b, float c);
    Vec4_5DAB0 *func_00197F70(void *a);
    void func_001994C0(void *a, void *b, int c);
    void func_00199960(void *a, int b);
};

struct Holder_5DAB0 {
    char pad0[0x22c];
    Obj22C_5DAB0 *f22C;
};

struct BmxGrindConstraint {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    int func_0005DAB0();
    char pad34[0x58 - 0x34];
    float f58;
    float f5C;
    float f60;
    int f64;
    float f68;
    float f6C;
    float f70;
    int f74;
    char pad78[0xC0 - 0x78];
    int fC0;
    float fC4;
    char padC8[0xCC - 0xC8];
    int fCC;
    int fD0;
    int fD4;
    int fD8;
    int fDC;
    int f24;
    int f28;
    Holder_5DAB0 *f2C;
    Node_5DAB0 *f30;
    Node_5DAB0 *f34;
    int f38;
    int f3C;
    int f40;
    int f44;
};
struct C_0005DA30 {
    char pad0[0x2C];
    int unk2C;
    void func_0005DA30(int a0);
};

struct C_0005DA40 {
    char pad0[0x34];
    int unk34;
    void func_0005DA40(int a0);
};

struct S_0005DA50_rec {
    int d0;
    int d1;
    int d2;
    int d3;
};

struct C_0005DA50 {
    char pad0[0x78];
    int unk78;
    void func_0005DA50(int a0);
};

struct S_0005DA80_rec {
    int d0;
    int d1;
    int d2;
    int d3;
};

struct C_0005DA80 {
    char pad0[0x7C];
    int unk7C;
    void func_0005DA80(int a0);
};


C_0005D6A0 *C_0005D6A0::func_0005D6A0(void)
{
    char *p = (char *)this;
    char buf[0x104];
    int i;
    *(int *)(p + 0x4) = 1;
    *(int *)(p + 0x0) = 1;
    *(int *)(p + 0x14) = 1;
    *(int *)(p + 0x460) = 1;
    *(int *)(p + 0x38c) = 1;
    *(int *)(p + 0x324) = 0;
    *(int *)(p + 0x2d8) = 0;
    *(int *)(p + 0x320) = 0;
    *(int *)(p + 0x328) = 0;
    *(int *)(p + 0x458) = 0;
    *(int *)(p + 0x45c) = 0;
    *(int *)(p + 0x8) = 0;
    *(int *)(p + 0xc) = 2;
    *(float *)(p + 0x10) = 120.0f;
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x24) = 0;
    *(int *)(p + 0x18) = 50;
    *(int *)(p + 0x1c) = 100;
    *(int *)(p + 0x464) = 0;
    *(int *)(p + 0x390) = 0;
    *(int *)(p + 0x394) = 0;
    *(int *)(p + 0x48) = 0;
    memcpy(p + 0x4c, D_0027829C, 9);
    for (i = 0; i < 8; i++) {
        *(int *)(p + 0x190 + i * 4) = 0;
        *(int *)(p + 0x150 + i * 8) = 0x74616d;
        *(int *)(p + 0x1b0 + i * 4) = 0;
        memcpy(p + 0x1f4 + i * 8, D_002782AC, 6);
        *(int *)(p + 0x398 + i * 0x18) = 0;
        *(int *)(p + 0x39c + i * 0x18) = 0;
        *(int *)(p + 0x3a0 + i * 0x18) = 0;
        *(int *)(p + 0x3a4 + i * 0x18) = 0;
        *(int *)(p + 0x3a8 + i * 0x18) = 0;
        *(int *)(p + 0x3ac + i * 0x18) = 0;
    }
    *(int *)(p + 0x1f0) = 0;
    *(int *)(p + 0x2d0) = 0;
    *(int *)(p + 0x2d4) = 0;
    if (D_002A8490->f2E4 == 0) {
        *(int *)(p + 0x194) = 5;
        *(int *)(p + 0x158) = 0x6b696d;
        *(int *)(p + 0x198) = 2;
        *(int *)(p + 0x160) = 0x656f6a;
        *(int *)(p + 0x19c) = 9;
        *(int *)(p + 0x168) = 0x76656b;
    }
    for (i = 0; i < 8; i++) {
        *(int *)(p + 0x2dc + i * 4) = 0;
        *(int *)(p + 0x32c + i * 4) = 0;
        *(int *)(p + 0x34c + i * 4) = 0;
        *(int *)(p + 0x36c + i * 4) = 0;
    }
    for (i = 0; i < 8; i++) {
        func_001ADCC0(p + 0x25f + i * 11, 11, D_00278438, i + 1);
    }
    for (i = 0; i < 8; i++) {
        *(int *)(p + 0x300 + i * 4) = -1;
    }
    memcpy(p + 0x254, D_00278138, 6);
    *(int *)(p + 0x2bc) = 1;
    *(int *)(p + 0x2b8) = 0;
    *(int *)(p + 0x2c0) = 0;
    *(int *)(p + 0x2c4) = 0;
    *(int *)(p + 0x2c8) = 0;
    void *m = func_001E8A44(0x1a8);
    *(void **)(p + 0x2c8) = m;
    memset(m, 0, 0x1a8);
    *(int *)(p + 0x2cc) = 0;
    if (*(int *)(p + 0x2c0) == 0) {
        S_0005CBD0 *o = (S_0005CBD0 *)func_001E8A44((unsigned int)D_000149F0);
        if (o != 0) {
            o->func_0005CBD0();
        } else {
            o = 0;
        }
        *(S_0005CBD0 **)(p + 0x2c0) = o;
    }
    if (*(int *)(p + 0x2cc) == 0) {
        S_001D3F60 *o = (S_001D3F60 *)func_001E8A44(0xc);
        *(void **)(p + 0x2cc) = o ? o->func_001D3F60() : 0;
    }
    *(int *)(p + 0x468) = 0;
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
    func_001ADCC0(buf, 0x104, D_0027842C, D_002A48F8);
    S_00094F40 *t = (S_00094F40 *)func_001E8A44(0x98);
    *(S_00094F40 **)(p + 0x2fc) = t ? t->func_00094F40(D_002A8490->f4) : 0;
    (*(S_00094F40 **)(p + 0x2fc))->func_00095640(buf, D_002A8490->f4->fB4, 1);
    D_002A8490->f14->func_001577A0(*(void **)(p + 0x2fc), -1);
    return this;
}

void func_0005D9C0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void C_0005DA30::func_0005DA30(int a0) {
    int func_001D3F50(...);
    unk2C = a0;
    func_001D3F50();
}

void C_0005DA40::func_0005DA40(int a0) {
    unk34 = a0;
}

void C_0005DA50::func_0005DA50(int a0) {
    unk78 = a0;
    *(S_0005DA50_rec *)((char *)this + 0x38) = *(S_0005DA50_rec *)((char *)this + (a0 + 8) * 16);
}

void C_0005DA80::func_0005DA80(int a0) {
    unk7C = a0;
    *(S_0005DA80_rec *)((char *)this + 0x48) = *(S_0005DA80_rec *)((char *)this + (a0 + 8) * 16);
}

extern float D_002784F0;
extern float D_002A1CA4;
extern "C" double sqrt(double x);
int BmxGrindConstraint::func_0005DAB0()
{
    char *self = (char *)this;
    volatile Vec4_5DAB0 v0;
    volatile Vec4_5DAB0 v1;
    volatile Vec4_5DAB0 v2;
    volatile Vec4_5DAB0 v3;
    volatile Vec4_5DAB0 v4;
    volatile Vec4_5DAB0 v5;
    volatile Vec4_5DAB0 v6;
    volatile Vec4_5DAB0 v7;
    volatile float one = 1.0f;
    Node_5DAB0 *node;
    Vec4_5DAB0 *r;
    float dx, dy, dz;
    float len;
    int flag;

    v0.x = 0; v0.y = 0; v0.z = 0; v0.w = 1;
    v1.x = 0; v1.y = 0; v1.z = 0; v1.w = 1;
    v2.x = 0; v2.y = 0; v2.z = 0; v2.w = 1;
    v3.x = 0; v3.y = 0; v3.z = 0; v3.w = 1;
    v4.x = 0; v4.y = 0; v4.z = 0; v4.w = 1;
    v5.x = 0; v5.y = 0; v5.z = 0; v5.w = 1;
    v6.x = 0; v6.y = 0; v6.z = 0; v6.w = 1;
    v7.x = 0; v7.y = 0; v7.z = 0; v7.w = 1;
    node = *(Node_5DAB0 **)(self + 0x30);
    *(Vec4_5DAB0 *)(self + 0xd0) = *(Vec4_5DAB0 *)((char *)node + 0x40);
    (*(Holder_5DAB0 **)(self + 0x2c))->f22C->func_001994C0((void *)&v7, (void *)&v6, 0);
    r = (*(Holder_5DAB0 **)(self + 0x2c))->f22C->func_00197F70((void *)(self + 0x38));
    *(Vec4_5DAB0 *)(self + 0x58) = *r;
    dx = node->f20 - *(float *)(self + 0x58);
    dy = node->f24 - *(float *)(self + 0x5c);
    dz = node->f28 - *(float *)(self + 0x60);
    v0.x = dz * node->f44 + dy * node->f40;
    v0.y = 0;
    flag = (v0.x == D_002784F0);
    *(float *)(self + 0x38) = dx;
    *(float *)(self + 0x3c) = dy;
    *(float *)(self + 0x40) = dz;
    *(float *)(self + 0x44) = 1.0f;
    len = (float)sqrt(dx * dx + dz * dz + dy * dy);
    if (flag && len != D_002A1CA4) {
        *(int *)(self + 0x24) = 0;
        (*(Holder_5DAB0 **)(self + 0x2c))->f22C->func_00199960((void *)(self + 0x38), 0);
        r = (*(Holder_5DAB0 **)(self + 0x2c))->f22C->func_00197F70((void *)(self + 0x38));
        *(Vec4_5DAB0 *)(self + 0x58) = *r;
        r = (*(Holder_5DAB0 **)(self + 0x2c))->f22C->func_00197F70((void *)(self + 0x48));
        *(Vec4_5DAB0 *)(self + 0x68) = *r;
    }
    v1.x = v6.x + v5.x + v4.x + v3.x + v2.x + v1.x;
    return 1;
}

