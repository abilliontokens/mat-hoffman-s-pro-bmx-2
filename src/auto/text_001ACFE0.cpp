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
