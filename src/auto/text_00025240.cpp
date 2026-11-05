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

