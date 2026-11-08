/* 12 functions from 0x00051CF0 to 0x00052C10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern float D_00275544;
extern float D_00277924;
extern float D_002A8F40;
extern float D_002756B8, D_002756D0, D_002756E8;
extern float D_00277928, D_0027792C, D_002779FC, D_00277A00;
extern char D_002769DC[], D_00277A24[], D_00277A30[], D_00277A38[], D_00277A44[];
extern char D_00277A48[], D_00277A4C[], D_00277A54[], D_00277A5C[];
extern char D_00275678[], D_002A5870[], D_002A5348[], D_002A5FA8[], D_002A60B0[];
int func_001ADCC0(char *dst, int size, const char *fmt, ...);
void func_00012140();

/* config file reader, 0x4CC bytes */
struct C_00168F40 {
    char pad0[0x4CC];
    C_00168F40 *func_00168280(void);
    int func_00169490(const char *path, int flags);
    void func_001691E0(void);
    ~C_00168F40();
    void func_00169710(const char *name);
    void func_00168C50(const char *key, float def, float *out);
};
typedef C_00168F40 C_00168280;

/* photo-preset widget (0x64 bytes) */
struct Img_51F {
    char pad0[0x14];
    float f14;
    float f18;
    char pad1C[0xC];
    float f28;
    float f2C;
    float f30;
    float f34;
    union {
        unsigned int color;
        struct { unsigned int lo : 24; unsigned int hi : 8; } cb;
    };
    float f3C;
    float f40;
    float f44;
    float f48;
    char pad4C[0xC];
    union {
        u8 flags;
        struct { u8 f58_0 : 1; u8 f58_1 : 1; u8 f58_2 : 1; };
    };
    Img_51F *func_001D5760(void);
    void func_001D5810(const char *name, float x, float y, int z);
};

struct C_00051CF0_74 {
    int func_00030020(const char *name);
    int func_000300C0(const char *name);
    void func_00030160();
    int func_000301D0();
    void func_00030210();
};

struct C_00051CF0_Obj {
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
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18(int a);
    char pad4[0x70];
    C_00051CF0_74 *unk74;
};

struct C_0001C240 {
    void func_0001C240(void);
};

struct C_00052AE0_Obj {
    char pad0[0xA0];
    float fA0[5];
    void func_001BBE20(int a);
};

struct C_00052AE0_Item {
    char pad0[4];
    C_00052AE0_Obj *f4;
};

struct C_00052AE0_List {
    char pad0[0x24];
    int f24;
    C_00052AE0_Item **f28;
};

struct C_00052AE0_Inner {
    char pad0[0x11B0];
    int f11B0;
};

struct C_00052AE0_Ctx {
    char pad0[0x1A8];
    C_00052AE0_Inner *f1A8;
};

struct C_001503E0 {
    void func_001503E0(float a, float b, float c);
};

struct C_00051CF0_64 {
    char pad0[0x3B4];
    C_00052AE0_List *f3B4;
    char pad3B8[0x24];
    C_001503E0 *f3DC;
    char pad3E0[0xA4];
    C_0001C240 *f484;
    char pad488[0x58];
    C_00052AE0_Ctx *f4E0;
    char pad4E4[0x74];
    C_00051CF0_Obj *unk558;
};

struct C_00051CF0;

struct C_00052AE0_1C0 {
    void func_00099750(C_00051CF0 *owner, float a);
    void func_00099600(float lo, float hi);
};

/* object at C_00051CF0::unk1C4: reports a float range, flag byte at 0xC0 */
struct C_000529D0_1C4 {
    char pad0[0xC0];
    unsigned char fC0;
    float func_00026110(void);
    float func_00197250(void);
};

struct C_00051CF0_2A8490 {
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
    virtual void v13();
    virtual void v14();
    virtual void v15(void *a, void *b, int c, int d);
};
extern C_00051CF0_2A8490 *D_002A8490;

struct C_00051CF0_2EFDB8 {
    char pad0[0x30];
    int f30;
};
extern C_00051CF0_2EFDB8 *D_002EFDB8;

struct C_00051CF0_170 {
    void func_00083B00(int a);
};

struct C_00051CF0 {
    void *vtbl;                       /* 0x00 */
    char pad04[0x20];
    void *unk24;                      /* 0x24 */
    C_00051CF0_Obj *unk28;            /* 0x28 */
    char pad2C[0x1C];
    C_00051CF0_Obj *unk48;            /* 0x48 */
    char pad4C[0x18];
    C_00051CF0_64 *unk64;             /* 0x64 */
    char pad68[0xBC];
    float unk124;                     /* 0x124 */
    char pad128[0x48];
    C_00051CF0_170 *unk170;           /* 0x170 */
    char pad174[0x4C];
    C_00052AE0_1C0 *unk1C0;           /* 0x1C0 */
    C_000529D0_1C4 *unk1C4;           /* 0x1C4 */
    int unk1C8;                       /* 0x1C8 */
    int unk1CC;                       /* 0x1CC */
    char pad1D0[0xD8];
    Img_51F *unk2A8;                  /* 0x2A8 */
    Img_51F *unk2AC;                  /* 0x2AC */
    Img_51F *unk2B0;                  /* 0x2B0 */
    Img_51F *unk2B4;                  /* 0x2B4 */
    float unk2B8[4];                  /* 0x2B8 */
    char pad2C8[4];
    int unk2CC;                       /* 0x2CC */
    char pad2D0[8];
    float m1[4][4];                   /* 0x2D8 */
    float m2[4][4];                   /* 0x318 */
    int unk358;                       /* 0x358 */
    void func_00031450();
    void func_00032860();
    void func_00051F10();
    void func_000529D0();
    int func_00052590(int idx);
    void func_00052630(const char *name);
    void func_000526D0();
    void func_00052740(int a);
    void func_00052BD0();
    void func_00052AE0(float threshold);
};

void *func_001E8A44(int size);
struct R_Base { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); };
struct R_Ctl {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10();
};
struct R_Ctl2 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(void *a); };
struct R_Owner;
struct R_A : R_Base { R_A *func_00079790(int a); R_A *func_0005EDC0(void *o); };
struct R_B : R_Base { R_B *func_0006E330(int a); R_B *func_0006ECC0(void *o); };
struct R_C : R_Base { R_C *func_000715B0(int a); R_C *func_00071880(void *o); };
struct R_D : R_Base { R_D *func_0006D590(int a); R_D *func_0006D750(void *o); };
struct R_E : R_Base { R_E *func_00082450(int a); R_E *func_0008DB70(void *a, void *b, int c, int d, int e, int f, int g); };
struct R_F : R_Base { R_F *func_000876B0(int a); R_F *func_00087760(int a, void *b, int c); };
struct R_G : R_Ctl2 { R_G *func_00061300(int a); };
struct R_H { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); R_H *func_00092890(int a); };
extern char D_00080000;
struct R_Items { char pad0[0x1a8]; void *items[1]; };
struct R_Lvl { char pad0[0x4e0]; R_Items *f4e0; };
struct R_S2e0 { int count; int pad4; int unk8; };
struct R_Glob { char pad0[0x2e0]; R_S2e0 *f2e0; };
struct R_00051CF0 {
    void *vtbl;
    char pad4[0x60];
    R_Lvl *f64;
    char pad68[0x24];
    int f8c;
    int f90;
    char pad94[0xcc];
    R_A *f160;
    R_B *f164;
    char pad168[4];
    R_G *f16c;
    R_E *f170[8];
    char pad190[4];
    R_D *f194;
    R_F *f198;
    char pad19c[4];
    R_C *f1a0;
    char pad1a4[0x2c];
    R_H *f1d0;
    char pad1d4[0xc0];
    int f294;
    void func_00031630();
    void func_00051CF0();
};

struct C_00052830_64 {
    char pad0[0x3DC];
    C_001503E0 *f3DC;
    char pad3E0[0x14];
    C_00051CF0_Obj *f3F4[1];
    char pad3F8[0x2C];
    C_00051CF0_Obj *f424[1];
    char pad428[0x64];
    C_00051CF0_Obj **f48C;
    char pad490[4];
    int f494;
    char pad498[0xBC];
    int f554;
    C_00051CF0_Obj *f558;
};

struct C_00052830 {
    char pad0[0x64];
    C_00052830_64 *unk64;
    char pad68[0x108];
    C_00051CF0_Obj *unk170;
    char pad174[0x24];
    C_00051CF0_Obj *unk198;
    char pad19C[0x58];
    int unk1F4;
    void func_00052830(int a);
};

struct C_00052BB0 {
    undefined4 func_00052BB0(byte param_1);
};

struct C_00052BF0 {
    void func_00052BF0(void);
    void func_000314A0(void);
    void func_00052740(int param_1);
};


void R_00051CF0::func_00051CF0()
{
    int i;
    void *p;
    f8c = 0;
    func_00031630();
    p = func_001E8A44(0x358);
    f1d0 = p ? ((R_H *)p)->func_00092890(1) : 0;
    f1d0->v10();
    p = func_001E8A44(0x188);
    f160 = p ? ((R_A *)p)->func_00079790(1) : 0;
    f160->func_0005EDC0(this);
    f160->v4();
    p = func_001E8A44(0x1a0);
    f164 = p ? ((R_B *)p)->func_0006E330(1) : 0;
    f164->func_0006ECC0(this);
    f164->v4();
    p = func_001E8A44(0x140);
    f1a0 = p ? ((R_C *)p)->func_000715B0(1) : 0;
    f1a0->func_00071880(this);
    f1a0->v4();
    p = func_001E8A44(0xfc);
    f194 = p ? ((R_D *)p)->func_0006D590(1) : 0;
    f194->func_0006D750(this);
    f194->v4();
    for (i = 0; i < f90; i++) {
        p = func_001E8A44(0xda4);
        f170[i] = p ? ((R_E *)p)->func_00082450(1) : 0;
        f170[i]->func_0008DB70(f64, f64->f4e0->items[i], ((R_Glob *)D_002A8490)->f2e0->unk8, i, 1, 1, 0);
        f170[i]->v6();
    }
    p = func_001E8A44(0xc8);
    f198 = (p ? ((R_F *)p)->func_000876B0(1) : 0)->func_00087760(((R_Glob *)D_002A8490)->f2e0->unk8, this, 0);
    if (f198)
        f198->v4();
    p = func_001E8A44(0x2f0);
    f16c = p ? ((R_G *)p)->func_00061300(1) : 0;
    f16c->v27(this);
    f294 = (int)func_001E8A44((int)&D_00080000);
}

void C_00051CF0::func_00051F10()
{
    char buf[0x104];
    char secName[0x104];
    C_00168F40 reader;
    C_00051CF0 *self = this;
    Img_51F *p;
    int i;
    float a;
    float b;

    func_00012140();
    reader.func_00168280();
    func_001ADCC0(buf, 0x104, D_00277A5C, D_002A5870);
    if (reader.func_00169490(buf, 0) == 0) {
        return;
    }
    for (i = 0; i < 4; i++) {
        func_001ADCC0(secName, 0x104, D_002769DC, i + 1);
        reader.func_00169710(secName);
        reader.func_00168C50(D_00277A54, 0.0f, &self->m1[0][i]);
        reader.func_00168C50(D_00277A4C, 0.0f, &self->m1[1][i]);
        reader.func_00168C50(D_00277A48, 10.0f, &self->m1[2][i]);
        reader.func_00168C50(D_00277A44, 80.0f, &self->m1[3][i]);
        a = self->m1[0][i];
        if (a > D_002756D0) {
            a -= D_002756B8;
        } else if (a < D_002756E8) {
            a += D_002756B8;
        }
        self->m1[0][i] = a;
        b = self->m1[1][i];
        if (b > D_002756D0) {
            b -= D_002756B8;
        } else if (b < D_002756E8) {
            b += D_002756B8;
        }
        self->m1[1][i] = b;
        self->m2[0][i] = a;
        self->m2[1][i] = b;
        self->m2[2][i] = self->m1[2][i];
        self->m2[3][i] = self->m1[3][i];
    }
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
    p = (Img_51F *)func_001E8A44(0x64);
    self->unk2A8 = p ? p->func_001D5760() : 0;
    self->unk2A8->func_001D5810(D_00277A38, D_00277A00 - D_00277928, D_002779FC - D_0027792C, 0);
    if (self->unk2A8->f28 != D_00277928) { self->unk2A8->f28 = D_00277928; self->unk2A8->f58_0 = 1; }
    if (self->unk2A8->f2C != D_0027792C) { self->unk2A8->f2C = D_0027792C; self->unk2A8->f58_0 = 1; }
    if (self->unk2A8->f34 != D_00275544) { self->unk2A8->f34 = 0.0f; self->unk2A8->f58_0 = 1; }
    self->unk2A8->f58_1 = 1;
    self->unk2A8->cb.hi = 0x20;
    p = (Img_51F *)func_001E8A44(0x64);
    self->unk2AC = p ? p->func_001D5760() : 0;
    self->unk2AC->func_001D5810(D_00277A30, 442.0f, 285.0f, 0);
    if (self->unk2AC->f28 != 197.0f) { self->unk2AC->f28 = 197.0f; self->unk2AC->f58_0 = 1; }
    if (self->unk2AC->f2C != 16.0f) { self->unk2AC->f2C = 16.0f; self->unk2AC->f58_0 = 1; }
    if (self->unk2AC->f34 != D_00275544) { self->unk2AC->f34 = 0.0f; self->unk2AC->f58_0 = 1; }
    p = (Img_51F *)func_001E8A44(0x64);
    self->unk2B0 = p ? p->func_001D5760() : 0;
    self->unk2B0->func_001D5810(D_00277A30, 427.0f, 448.0f, 0);
    if (self->unk2B0->f28 != 147.0f) { self->unk2B0->f28 = 147.0f; self->unk2B0->f58_0 = 1; }
    if (self->unk2B0->f2C != 16.0f) { self->unk2B0->f2C = 16.0f; self->unk2B0->f58_0 = 1; }
    if (self->unk2B0->f14 != 427.0f || self->unk2B0->f18 != 448.0f) {
        self->unk2B0->f14 = 427.0f;
        self->unk2B0->f18 = 448.0f;
        self->unk2B0->f58_0 = 1;
    }
    if (self->unk2B0->f30 != -1.5707964f) { self->unk2B0->f30 = -1.5707964f; self->unk2B0->f58_0 = 1; }
    self->unk2B0->f3C = 1.0f;
    self->unk2B0->f48 = 1.0f;
    self->unk2B0->f40 = 0.0f;
    self->unk2B0->f44 = 0.0f;
    self->unk2B0->f58_2 = 1;
    if (self->unk2B0->f34 != D_00275544) { self->unk2B0->f34 = 0.0f; self->unk2B0->f58_0 = 1; }
    p = (Img_51F *)func_001E8A44(0x64);
    self->unk2B4 = p ? p->func_001D5760() : 0;
    self->unk2B4->func_001D5810(D_00277A24, 427.0f, 285.0f, 0);
    if (self->unk2B4->f34 != D_00275544) { self->unk2B4->f34 = 0.0f; self->unk2B4->f58_0 = 1; }
}

int C_00051CF0::func_00052590(int idx)
{
    int count;
    float *p = unk2B8;
    if (unk1C8 != 0) {
        return 0;
    }
    p[idx] = unk124;
    unk2CC = 1;
    count = 0;
    if (p[0] > D_00275544) {
        count++;
    }
    if (p[1] > D_00275544) {
        count++;
    }
    if (p[2] > D_00275544) {
        count++;
    }
    if (p[3] > D_00275544) {
        count++;
    }
    unk170->func_00083B00(count);
    return 1;
}

void C_00051CF0::func_00052630(const char *name)
{
    if (unk48 != 0) {
        if (unk48->unk74->func_00030020(name) != 0 &&
            unk48->unk74->func_000300C0(name) != 0) {
            unk48->unk74->func_00030160();
        }
        D_002A8490->v15(unk28, unk24, 0, 0);
        unk48->v6();
        unk28->v6();
        unk48->v18(0);
        unk28->v18(0);
        unk358 = 1;
        D_002EFDB8->f30 = 0;
    }
}

void C_00051CF0::func_000526D0()
{
    if (unk48 != 0 && unk48->unk74->func_000301D0() == 0) {
        unk48->unk74->func_00030210();
        D_002A8490->v15(unk24, 0, 0, 0);
        unk48->v4();
        unk28->v4();
        unk358 = 0;
        D_002EFDB8->f30 = 1;
        unk64->unk558->v4();
    }
}

void C_00051CF0::func_00052740(int a)
{
    if (unk48 != 0 && unk358 != 0) {
        if (a != 0) {
            D_002A8490->v15(unk24, 0, 0, 0);
            unk48->v4();
            unk28->v4();
            D_002EFDB8->f30 = 1;
            D_002A8F40 = 1.0f;
            unk64->f3DC->func_001503E0(1000.0f, D_00277924, 64.0f);
            unk64->unk558->v4();
        } else {
            D_002A8490->v15(unk28, unk24, 0, 0);
            unk48->v6();
            unk28->v6();
            D_002EFDB8->f30 = 0;
            D_002A8F40 = 0.25f;
            unk64->f3DC->func_001503E0(256.0f, D_00277924, 64.0f);
        }
    }
}

void C_00052830::func_00052830(int a)
{
    int i;
    if (unk1F4 == 0) {
        if (a != 0) {
            if (unk198 != 0) unk198->v4();
            if (unk170 != 0) unk170->v4();
            D_002A8F40 = 0.25f;
            unk64->f3DC->func_001503E0(256.0f, D_00277924, 64.0f);
            unk64->f554 = 0;
            for (i = 0; i < unk64->f494; i++) {
                if (unk64->f3F4[i] != 0) unk64->f3F4[i]->v4();
                if (unk64->f424[i] != 0) unk64->f424[i]->v4();
            }
            if (unk64->f48C != 0) (*unk64->f48C)->v4();
            unk64->f558->v4();
        } else {
            if (unk198 != 0) unk198->v6();
            if (unk170 != 0) unk170->v6();
            D_002A8F40 = 1.0f;
            unk64->f3DC->func_001503E0(1000.0f, D_00277924, 64.0f);
            unk64->f554 = 1;
            for (i = 0; i < unk64->f494; i++) {
                if (unk64->f3F4[i] != 0) unk64->f3F4[i]->v6();
                if (unk64->f424[i] != 0) unk64->f424[i]->v6();
            }
            if (unk64->f48C != 0) (*unk64->f48C)->v6();
            unk64->f558->v6();
        }
    }
}

void C_00051CF0::func_000529D0()
{
    float hi;
    float lo;
    int i;
    int j;

    if (unk1C8 != 0) {
        hi = unk1C4->func_00026110();
        lo = unk1C4->func_00197250();
        for (i = 0; i < unk64->f3B4->f24; i++) {
            for (j = 0; j < 5; j++) {
                float v = unk64->f3B4->f28[i]->f4->fA0[j];
                if (v < hi && v >= lo) {
                    unk64->f3B4->f28[i]->f4->func_001BBE20(unk64->f4E0->f1A8->f11B0);
                }
            }
        }
        unk1C0->func_00099600(lo, hi);
        if (unk1C4 != 0 && unk1CC != 0 && (unk1C4->fC0 & 0x20) != 0) {
            func_00032860();
        }
    }
}

void C_00051CF0::func_00052AE0(float threshold)
{
    int i;
    int j;

    if (unk1C8 != 0) {
        if (unk64->f484 != 0) {
            unk64->f484->func_0001C240();
        }
        for (i = 0; i < unk64->f3B4->f24; i++) {
            for (j = 0; j < 5; j++) {
                float v = unk64->f3B4->f28[i]->f4->fA0[j];
                if (v < threshold && v >= D_00275544) {
                    unk64->f3B4->f28[i]->f4->func_001BBE20(unk64->f4E0->f1A8->f11B0);
                }
            }
        }
        unk1C0->func_00099750(this, threshold);
    }
}

undefined4 C_00052BB0::func_00052BB0(byte param_1)
{
  int func_00051260(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00051260();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00051CF0::func_00052BD0()
{
    func_00031450();
    func_00052740(1);
}

void C_00052BF0::func_00052BF0(void)
{
    func_000314A0();
    func_00052740(0);
}

