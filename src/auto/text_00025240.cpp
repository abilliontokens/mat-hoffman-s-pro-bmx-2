/* 13 functions from 0x00025240 to 0x000261F0, found by Ghidra. */
#include "common.h"
struct C_00025E10 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    C_00025E10* func_00025E10(void);
};

struct C_00026120 {
    char pad0[0x20];
    int unk20;
    void func_00026120(int a0);
};

struct C_00026110 {
    char pad0[0x28];
    float unk28;
    float func_00026110(void);
};

struct C_00026100 {
    char pad0[0x14];
    float unk14;
    float func_00026100(void);
};

struct C_000260F0 {
    char pad0[0xC];
    float unkC;
    float func_000260F0(void);
};

struct Vec4_257E0 { float x, y, z, w; };
struct C_00199B00 { void func_00199B00(Vec4_257E0 *out, int a1); };
struct C_257E0_1A4 { char pad0[4]; C_00199B00 *unk4; };
struct C_257E0_28 { char pad0[0x1A4]; C_257E0_1A4 *unk1A4; };
struct C_0001B440 { void func_0001B440(void *a0, int a1); };
struct C_002B9120 { char pad0[0x484]; C_0001B440 *unk484; };
struct C_002B7E18 { char pad0[0x2C]; int unk2C; };
struct C_0001CE80 { void func_0001CE80(void *a, void *b, void *c, float d, float e); };
struct C_002A8490 {
    char pad0[4];
    C_0001CE80 *unk4;
    char pad8[0x124 - 8];
    int unk124;
    char pad128[0x238 - 0x128];
    int unk238;
};
extern C_002A8490 *D_002A8490;
extern C_002B7E18 *D_002B7E18;
extern C_002B9120 *D_002B9120;
extern f32 D_00275600;
int func_00011260(int a0, int a1);

struct AmbientBird {
    void *vtbl;
    char pad4[0x24];
    C_257E0_28 *unk28;
    char pad2C[0x20];
    float unk4C;
    float unk50;
    float unk54;
    float unk58;
    Vec4_257E0 unk5C;
    u32 unk6C;
    char pad70[8];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    void func_00157A00(int a0);
    void func_00023340(void);
    void func_000235C0(void);
    void func_000239F0(int a0);
    int func_000257E0(int a0);
};

extern int D_00276294;
extern f32 D_002754B0;
extern f32 D_00275460;
extern f32 D_002756DC;
extern char D_002765C4[];
extern char D_002765B8[];
extern char D_002765AC[];
extern char D_0027659C[];
extern char D_00276580[];
extern char D_0027656C[];
extern char D_0027655C[];

int func_001E8833(void);
void func_001E891B(void *p);

struct C_00168B90 {
    int func_00168B90(const char *name, void *out);
};

extern float D_00275544, D_00276520;
extern char D_002A0F74[];
int func_001E8858(float f);
double __cdecl sqrt(double);

struct S_000255D0_Part {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
};

struct S_000255D0_Id {
    int id;
};

/* one bird-like instance held in the manager's list at +0x60 */
struct S_000255D0_Item {
    char pad0[4];
    S_000255D0_Part *f4;
    char pad8[0x2c];
    int f34;
    char pad38[0xc];
    int f44;
    char pad48[0x14];
    float f5c, f60, f64;
    char pad68[0x10];
    char f78;
    char f79;
    void func_00023340();
    void func_000235C0();
};

struct C_000255D0 {
    char pad0[0x24];
    float f24;
    char pad28[8];
    int f30;
    char pad34[0xc];
    int f40;
    char pad44[0x14];
    int f58;
    S_000255D0_Id **f5c;
    S_000255D0_Item **f60;
    char pad64[0x10];
    Vec4_257E0 f74;
    void func_000255D0(Vec4_257E0 *pos, float radius, float t, int chance);
};

struct AmbientDebris {
    void *vtbl;
    float unk4;
    float unk8;
    float unkC;
    float unk10;
    float unk14;
    float unk18;
    float unk1C;
    float unk20;
    float unk24;
    float unk28;
    float unk2C;
    void *unk30;
    void *unk34;
    float unk38;
    void func_00157660(void);
    void func_00026130(void);
    void *func_00025920(unsigned int flags);
    void func_00026170(C_00168B90 *cfg);
};


void *AmbientDebris::func_00025920(unsigned int flags)
{
    vtbl = &D_00276294;
    if (unk30 != 0) {
        func_001E891B(unk30);
    }
    unk30 = 0;
    if (unk34 != 0) {
        func_001E891B(unk34);
    }
    unk34 = 0;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_00025E10* C_00025E10::func_00025E10(void) {
    extern int D_00276534;
    unk0 = (int)&D_00276534;
    unk20 = 0;
    unkC = 0;
    unk14 = 0;
    unk10 = 0;
    unk18 = 0;
    unk4 = 0;
    unk8 = 0;
    unk24 = 0;
    unk28 = 0;
    unk2C = 0;
    unk1C = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    return this;
}

float C_000260F0::func_000260F0(void) {
    return unkC;
}

float C_00026100::func_00026100(void) {
    return unk14;
}

float C_00026110::func_00026110(void) {
    return unk28;
}

void C_00026120::func_00026120(int a0) {
    unk20 = a0;
}

void AmbientDebris::func_00026130(void)
{
    unk18 = unk1C;
    unk4 = unk24;
    unk14 = 0;
    f32 v = (f32)func_001E8833() * D_002754B0;
    unkC = (v + v - D_00275460) * D_002756DC;
}

void AmbientDebris::func_00026170(C_00168B90 *cfg)
{
    cfg->func_00168B90(D_002765C4, &unk8);
    cfg->func_00168B90(D_002765B8, &unk24);
    cfg->func_00168B90(D_002765AC, &unk28);
    cfg->func_00168B90(D_0027659C, &unk2C);
    cfg->func_00168B90(D_00276580, &unk34);
    cfg->func_00168B90(D_0027656C, &unk38);
    cfg->func_00168B90(D_0027655C, &unk1C);
}