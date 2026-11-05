/* 7 functions from 0x001ACFE0 to 0x001ADFD0, found by Ghidra. */
#include "common.h"

extern int D_0028C1D0;
extern int D_0028C1DC;
extern int D_0028C1F0;
extern int D_002AA2D4;
extern int D_002EFFD0;

int __stdcall func_001FCF20(int a, int b, int c, int d, int e, int f, int g);
int __stdcall func_001FCE50(int a, int b);
void *__stdcall func_001FF3C0(int size);
void *func_001E8A44(int size);
int func_0014A7B0(int *entries, int *tokens);

struct C_0014A520 {
    C_0014A520 *func_0014A520(int a);
    void func_0014A560(int a, int b);
};

struct C_00142C70 {
    C_00142C70 *func_00142C70(void);
    void func_00142C80(int a, int b);
};

struct SpriteTweak {
    void *vtbl;
    void *unk4;
    int unk8;
    int unkC;
    C_0014A520 *unk10;
    C_00142C70 *unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    float unk3C;
    float unk40;
    int unk44;
    float unk48;
    int unk4C;
    float unk50;
    int unk54;
    int unk58;
    int unk5C;
    int unk60;
    char unk64;
    int unk68;
    SpriteTweak *func_001ADEB0(void);
    void func_001ADDF0(int a);
    void func_001ADF30(int a, int b);
};

SpriteTweak *SpriteTweak::func_001ADEB0(void)
{
    unk4 = 0;
    vtbl = &D_0028C1D0;
    unk40 = 1.0f;
    unk3C = 1.0f;
    unk50 = 1.0f;
    unk48 = 1.0f;
    unk38 = 0;
    unk34 = 0;
    unk4C = 0;
    unk44 = 0;
    unk68 = 0;
    unk64 = (char)0xff;
    unk60 = 0x80808080;
    unk5C = 0x80808080;
    unk58 = 0x80808080;
    unk54 = 0x80808080;
    unk10 = 0;
    unk14 = 0;
    unk1C = func_001FCF20(0x280, 0x1e0, 1, 1, 1, 0x12, 3);
    unk20 = func_001FCE50(unk1C, 0);
    return this;
}

void SpriteTweak::func_001ADF30(int a, int b)
{
    func_001ADDF0(a);
    unk18 = b;
    unk28 = (int)func_001FF3C0(0x60);
    func_0014A7B0(&D_002EFFD0, &D_002AA2D4);
    C_0014A520 *p = (C_0014A520 *)func_001E8A44(0xc);
    p = p != 0 ? p->func_0014A520((int)&D_002EFFD0) : 0;
    unk10 = p;
    p->func_0014A560((int)&D_0028C1F0, 0);
    C_00142C70 *q = (C_00142C70 *)func_001E8A44(0xf0);
    q = q != 0 ? q->func_00142C70() : 0;
    unk14 = q;
    q->func_00142C80((int)&D_0028C1DC, 0);
}

