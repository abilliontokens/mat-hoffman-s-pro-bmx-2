/* 5 functions from 0x0008CC50 to 0x0008DB70, found by Ghidra. */
#include "common.h"

struct W_8D910 { virtual ~W_8D910(); };
struct D_8D910 { void func_001D6410(); };
void func_001E891B(void *p);
extern int D_0027915C;

struct C_0008D910 {
    void *vtbl;
    char pad4[0x20];
    D_8D910 *unk24[4];
    char pad34[0x130];
    W_8D910 *unk164;
    W_8D910 *unk168;
    D_8D910 *unk16C;
    W_8D910 *unk170;
    W_8D910 *unk174;
    D_8D910 *unk178;
    char pad17C[0xc];
    W_8D910 *unk188;
    D_8D910 *unk18C;
    W_8D910 *unk190;
    W_8D910 *unk194;
    char pad198[0x70];
    D_8D910 *unk208;
    char pad20C[0xa44];
    D_8D910 *unkC50;
    char pad_c54[0xbc];
    W_8D910 *unkD10;
    W_8D910 *unkD14;
    char padD18[0x24];
    W_8D910 *unkD3C;
    W_8D910 *unkD40;
    W_8D910 *unkD44;
    W_8D910 *unkD48;
    char padD4C[0x30];
    D_8D910 *unkD7C;
    D_8D910 *unkD80;
    W_8D910 *unkD84;
    W_8D910 *unkD88;
    void func_00157660();
    void func_0008D910();
};

struct S_5E { void func_0005E840(char *s); void func_001D6600(); void func_001D5AD0(); };
struct S_64 { char pad[0x574]; int u574; int u578; char pad2[8]; int u584; };
struct S_68 { char pad[0x4d4]; int u4d4; };
extern char D_00277038[];
int func_001ADCC0(char *buf, int n, char *fmt, int v);
int strlen(const char *);
struct S_0008D290 {
    char pad0[0x28];
    S_5E *u28; S_5E *u2c; char pad30[4]; S_5E *u34;
    char pad38[0x10];
    S_5E *u48; S_5E *u4c; char pad50[0x14];
    S_64 *u64; S_68 *u68; char pad6c[4];
    int u70; int u74; int u78;
    void func_0008D290();
};

struct C_001B1980 {
    void func_001B1980(void);
};

struct C_0008D550 {
    char pad0[0x54];
    C_001B1980 *unk54;
    int unk58;
    int unk5C;
    int unk60;
    char pad64[0xc];
    int unk70;
    int unk74;
    int unk78;
    void func_0008D550(void);
};

void C_0008D550::func_0008D550(void)
{
    unk70 = 1000;
    unk74 = 10;
    unk78 = 1000;
    unk58 = 0;
    unk54->func_001B1980();
    unk5C = 1;
    unk60 = 0;
}

void C_0008D910::func_0008D910()
{
    int i;
    D_8D910 *p;
    vtbl = (void *)&D_0027915C;
    for (i = 0; i < 4; i++) {
        p = unk24[i];
        if (p) { p->func_001D6410(); func_001E891B(p); unk24[i] = 0; }
    }
    if (unk164) { delete unk164; unk164 = 0; }
    if (unk168) { delete unk168; unk168 = 0; }
    if (unk170) { delete unk170; unk170 = 0; }
    if (unk174) { delete unk174; unk174 = 0; }
    p = unk16C;
    if (p) { p->func_001D6410(); func_001E891B(p); unk16C = 0; }
    p = unk178;
    if (p) { p->func_001D6410(); func_001E891B(p); unk178 = 0; }
    if (unk188) { delete unk188; unk188 = 0; }
    p = unk18C;
    if (p) { p->func_001D6410(); func_001E891B(p); unk18C = 0; }
    p = unk208;
    if (p) { p->func_001D6410(); func_001E891B(p); unk208 = 0; }
    p = unkC50;
    if (p) { p->func_001D6410(); func_001E891B(p); unkC50 = 0; }
    if (unkD10) { delete unkD10; unkD10 = 0; }
    if (unkD14) { delete unkD14; unkD14 = 0; }
    if (unk194) { delete unk194; unk194 = 0; }
    if (unkD3C) { delete unkD3C; unkD3C = 0; }
    if (unkD40) { delete unkD40; unkD40 = 0; }
    if (unkD44) { delete unkD44; unkD44 = 0; }
    if (unkD48) { delete unkD48; unkD48 = 0; }
    p = unkD7C;
    if (p) { p->func_001D6410(); func_001E891B(p); }
    p = unkD80;
    if (p) { p->func_001D6410(); func_001E891B(p); }
    if (unkD84) { delete unkD84; unkD84 = 0; }
    if (unkD88) { delete unkD88; unkD88 = 0; }
    func_00157660();
}

