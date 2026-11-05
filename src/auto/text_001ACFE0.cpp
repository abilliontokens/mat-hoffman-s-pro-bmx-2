/* 7 functions from 0x001ACFE0 to 0x001ADFD0, found by Ghidra. */
#include "common.h"

extern int D_0028C1D0;
extern int D_0028C1DC;
extern int D_0028C1F0;
extern int D_002AA2D4;
extern int D_002EFFD0;
extern u16 D_001ADCB0;
extern int D_002AA470;
extern int D_0028C1B0;
extern int D_002ABE74;

struct S_001ACFE0_Range {
    char *cur;
    char *end;
};

int func_001ACFE0(const u16 *fmt, S_001ACFE0_Range *range, int a, void *b);

struct S_func_001ADD80_arg0 {
    char pad0[0x6c];
    int unk6c;
    int unk70;
    int unk74;
    int unk78;
};

struct C_00144640 {
    C_00144640 *func_00144640();
    virtual void v0();
    virtual void v1(int a, int b);
    int unk4;
    int unk8;
    u8 unkC;
    char padD[3];
    void *unk10;
};

struct C_002A829C_Y {
    char pad0[0x18];
    s16 unk18;
};

struct C_002A829C_X {
    char pad0[0x54];
    C_002A829C_Y *unk54;
};

struct C_002A829C_Entry {
    int unk0;
    C_002A829C_X *unk4;
    char pad8[8];
};

struct C_002A829C {
    void func_00161680(void);
    char pad0[0x14];
    C_002A829C_Entry *unk14;
};

extern C_002A829C *D_002A829C;

struct C_002AA6C0 {
    void func_001B2640(void);
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a, int b);
    virtual int v7(int a, int b);
};

extern C_002AA6C0 *D_002AA6C0;

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

int func_001ADCC0(char *buf, int count, int a3, int a4)
{
    S_001ACFE0_Range range;
    int n;

    if (count == 0) {
        return 0;
    }
    range.cur = buf;
    range.end = buf + count - 1;
    n = func_001ACFE0(&D_001ADCB0, &range, a3, &a4);
    *range.cur = 0;
    if (n == -1) {
        n = count;
    }
    return n;
}

int func_001ADD20(char *buf, int count, int a3, void *a4)
{
    S_001ACFE0_Range range;
    int n;

    if (count == 0) {
        return 0;
    }
    range.cur = buf;
    range.end = buf + count - 1;
    n = func_001ACFE0(&D_001ADCB0, &range, a3, a4);
    *range.cur = 0;
    if (n == -1) {
        n = count;
    }
    return n;
}

void func_001ADD80(S_func_001ADD80_arg0 *r)
{
    if (r == 0) {
        return;
    }
    if (r->unk6c < 0 || r->unk74 < 0) {
        r->unk6c = 0;
        r->unk74 = 0x10;
    }
    if (r->unk6c > 0x280 || r->unk74 > 0x280) {
        r->unk6c = 0x270;
        r->unk74 = 0x280;
    }
    if (r->unk70 < 0 || r->unk78 < 0) {
        r->unk70 = 0;
        r->unk78 = 0x10;
    }
    if (r->unk70 > 0x1c0 || r->unk78 > 0x1c0) {
        r->unk70 = 0x1b0;
        r->unk78 = 0x1c0;
    }
}

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

