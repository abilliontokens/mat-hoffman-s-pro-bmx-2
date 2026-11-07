/* 5 functions from 0x0014D720 to 0x0014E630, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern int D_002BF278;
extern float D_0027A094, D_002755E8, D_00275544;
void *func_001E83E8(void *, unsigned);
struct EcoCollision { int func_001C5DE0(void *, float *, float *, int); };
extern EcoCollision *D_002AB66C;
struct EcoRender { char pad[0xd4]; int fD4; void func_001B07A0(); };
extern char *D_002A829C;
extern char *D_002F0630;

struct C_0013E9B0 {
    void func_0013E9B0(int param_1);
};

struct C_0014E1C0 {
    char pad0[0x21d8];
    int *unk21D8;
    void func_0014E1C0(C_0013E9B0 **param_1, int param_2);
};

extern int D_00286A1C;

struct SearchableGameObject {
    void func_00192370(int param_1);
};

/* one entry of the system's 600-entry table */
struct EcoEntry {
    int unk0;
    int unk4;
    int unk8;
};

struct C_0014C7D0 {
    void func_0014C7D0(void);
};

struct EcoVirt {
    virtual void Destroy(int flag);
};

void func_001E891B(void *p);
void func_001E8390(void *p);
void __stdcall func_00201100(void *p);

struct EcoSystem {
    void *vtbl;
    char pad4[0x27 - 0x4];
    u8 b27;
    int unk28;
    int unk2C;
    int unk30;
    float f34;
    int unk38;
    int unk3C;
    void *unk40;
    void *unk44;
    void *unk48;
    void *unk4C;
    int unk50;
    C_0014C7D0 *arr54[0x100];
    char pad454[0x558 - 0x454];
    int unk558;
    int unk55C;
    float f560;
    float f564;
    unsigned char f568;
    char pad569[3];
    void *unk56C;
    int unk570;
    void *unk574;
    float f578;
    float f57C;
    int unk580;
    int unk584;
    int f588;
    float f58C;
    float f590;
    int unk594;
    void *unk598;
    int unk59C;
    EcoEntry entries[600];
    int unk21C0;
    int unk21C4;
    EcoVirt *unk21C8;
    EcoVirt *unk21CC;
    int unk21D0;
    int unk21D4;
    void **unk21D8;
    EcoVirt *unk21DC;
    void *unk21E0;
    void *unk21E4;
    void *unk21E8;
    void *unk21EC;
    void *unk21F0;
    void *unk21F4;
    void func_0013ED30(void);
    void func_0013ECF0(void *a1, void *a2, EcoVirt *a3, EcoVirt *a4, void *a5);
    void func_0014E1C0(void *a1, int a2);
    int func_0014E200(void);
    EcoSystem *func_0014E3E0(int param_1);
    void func_0014E4E0(void);
    void func_00157660(void);
    int func_0014D720(void);
    void func_0014D670(void *ent);
};
struct EcoSub4 {
    char pad0[0xF0]; float fF0;
    char padF4[0x170 - 0xF4]; float f170; char pad174[4]; float f178;
    char pad17C[4]; float f180; char pad184[4]; float f188;
    char pad18C[0x200 - 0x18C]; float f200;
};
struct EcoSubB0 { char pad0[0x20]; float f20; char pad24[4]; float f28; float f2C; };
struct F07Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13();
    char pad4[0x890 - 4]; int *f890; char pad894[4]; int f898;
};
extern F07Obj *D_002F07E8;
extern EcoSubB0 *D_002BF274;
extern int D_002BF258;
extern int D_002BF25C;
extern int D_002BF260;
extern int D_002BF264;
extern int D_002BF268;
extern int D_002BF26C;
extern float D_002BF270;
extern float D_002BF280;
extern const float D_00275460;
extern const float D_002869C0;
extern const float D_002869BC;
extern const float D_0027D264;
extern const float D_0027988C;
extern const float D_002869B0;
float func_0001E960(float);
struct Ent14 {
    char pad0[2]; unsigned char f2; char pad3; unsigned short f4; unsigned short f6;
    unsigned short f8; unsigned short fA; unsigned short fC; unsigned char fE; unsigned char fF;
    signed char f10; signed char f11; unsigned char f12 : 1; unsigned char f12rest : 7; char pad13;
    short f14; short f16; int f18;
};

extern EcoSystem *D_002BF250;
extern int D_002BF27C;
extern int D_002A7690;
extern int D_002A7694;
extern int D_002A7698;
extern int D_002A769C;
static int D_002A768C = -1;
extern char D_00286A00[];
extern char D_002869E8[];
extern char D_002869D0[];
extern char D_002869C4[];

/* log object at global root +0x18 */
struct EcoLog {
    char pad0[0x1934];
    int unk1934;
};

struct EcoRoot {
    char pad0[0x18];
    EcoLog *unk18;
};

extern EcoRoot *D_002A8490;

struct EcoGlobal {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(int);
    EcoSub4 *f4;
};

extern EcoGlobal *D_002EFDB8;

void func_0013E1F0(EcoLog *log, int id, const char *fmt, ...);
void func_0013E260(EcoLog *log, int id, const char *fmt, ...);

int EcoSystem::func_0014D720(void)
{
    float q;
    float scale;
    int count;
    int *outp;
    float la, lb, lc;
    if (D_002A7690 == 0 || unk3C == 0) {
        return D_002A7690;
    }
    D_002BF274 = (EcoSubB0 *)((char *)D_002EFDB8->f4 + 0xB0);
    q = D_00275460 / D_002EFDB8->f4->f200;
    f58C = D_002869C0 * q;
    f590 = D_002EFDB8->f4->f200 * D_002869BC;
    scale = q * f590;
    unk56C = 0;
    unk570 = 0;
    unk574 = 0;
    scale = scale * D_0027D264;
    D_002F07E8->v13();
    AsmFloatToInt(f57C * f560, &D_002BF258);
    AsmFloatToInt(f57C * f564, &D_002BF25C);
    D_002BF264 = D_002BF258 * D_002BF258;
    D_002BF260 = D_002BF25C * D_002BF25C;
    AsmFloatToInt(D_002EFDB8->f4->f170 * f57C, &D_002BF268);
    AsmFloatToInt(D_002EFDB8->f4->f178 * f57C, &D_002BF26C);
    D_002BF270 = D_0027988C / (float)(D_002BF258 - D_002BF25C);
    count = 0;
    outp = D_002F07E8->f890;
    la = D_002BF274->f20 * f58C;
    lb = D_002BF274->f28 * f58C;
    lc = D_002BF274->f2C * f58C;
    D_002BF280 = func_0001E960(D_002EFDB8->f4->f180 * D_002EFDB8->f4->f180 + D_002EFDB8->f4->f188 * D_002EFDB8->f4->f188) * D_002869B0;
    unk21C0 = 0x7fffffff;
    unk21C4 = 0;
    unk59C++;
    if (D_002F07E8->f890 != 0) {
        int edi = 0;
        while (edi < D_002F07E8->f898) {
            Ent14 *ent = (Ent14 *)(outp[edi] & 0xfffffffe);
            int raw = outp[edi];
            edi++;
            if (ent == 0) {
                break;
            }
            if (ent->f2 != f568) {
                *outp++ = raw;
                count++;
                continue;
            }
            break;
        }
    }
    (void)scale;
    (void)count;
    (void)la;
    (void)lb;
    (void)lc;
}

void C_0014E1C0::func_0014E1C0(C_0013E9B0 **param_1, int param_2)
{
    for (int i = 0; i < param_2; i++) {
        param_1[i]->func_0013E9B0(unk21D8[i]);
    }
    D_002BF278 += param_2;
}

int EcoSystem::func_0014E200(void)
{
    if (D_002A7690 != 0) {
        D_002BF278 = 0;
        D_002BF27C = 0;
        if (unk56C != 0 || unk574 != 0) {
            func_0013ED30();
        }
        if (D_002A7698 != 0 && unk56C != 0) {
            func_0013ECF0(unk44, unk56C, unk21C8, unk21DC, 0);
        }
        if (D_002A769C != 0 && unk574 != 0) {
            func_0013ECF0(unk4C, unk574, unk21CC, unk21DC, unk21E0);
        }
        if (D_002A7694 != 0 && unk570 != 0) {
            func_0014E1C0(unk48, unk570);
        }
        D_002EFDB8->v7(0);
        EcoLog *log = D_002A8490->unk18;
        if (log != 0) {
            if (D_002A768C < 0) {
                int t = log->unk1934;
                D_002A768C = t;
                log->unk1934 = t + 1;
            }
            func_0013E260(D_002A8490->unk18, D_002A768C, D_00286A00, unk3C);
            func_0013E1F0(D_002A8490->unk18, D_002A768C, D_002869E8, unk56C, unk570);
            func_0013E1F0(D_002A8490->unk18, D_002A768C, D_002869D0, D_002BF27C, D_002BF278);
            func_0013E1F0(D_002A8490->unk18, D_002A768C, D_002869C4, 0);
        }
    }
    return 1;
}

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
EcoSystem *EcoSystem::func_0014E3E0(int param_1)
{
    int i;

    ((SearchableGameObject *)this)->func_00192370(param_1);
    vtbl = (void *)&D_00286A1C;
    unk30 = 0;
    unk2C = 0;
    unk28 = 0;
    f34 = 1.0f;
    _ReadWriteBarrier();
    b27 |= 3;
    unk3C = 0;
    unk40 = 0;
    unk44 = 0;
    unk48 = 0;
    unk4C = 0;
    unk50 = 0;
    unk38 = 0;
    unk558 = 0;
    unk55C = 0x22b;
    memset(arr54, 0, sizeof(arr54));
    D_002BF250 = this;
    f578 = 1.0f;
    f57C = 1.0f;
    unk594 = 0;
    unk598 = 0;
    unk21D8 = 0;
    unk21D4 = 0;
    unk21DC = 0;
    unk21E0 = 0;
    unk21C8 = 0;
    unk21CC = 0;
    unk21D0 = 0;
    unk59C = 0;
    for (i = 0; i < 600; i++) {
        entries[i].unk0 = 0;
        entries[i].unk4 = 0;
    }
    unk21E4 = 0;
    unk21E8 = 0;
    for (i = 0; i < 3; i++) {
        (&unk21EC)[i] = 0;
    }
    return this;
}
void EcoSystem::func_0014E4E0(void)
{
    int i;
    C_0014C7D0 *p;

    vtbl = (void *)&D_00286A1C;
    for (i = 0; i < 0x100; i++) {
        p = arr54[i];
        if (p != 0) {
            p->func_0014C7D0();
            func_001E891B(p);
        }
    }
    if (unk40 != 0) {
        func_001E891B(unk40);
    }
    if (unk44 != 0) {
        func_001E8390(unk44);
    }
    if (unk48 != 0) {
        func_001E8390(unk48);
    }
    if (unk4C != 0) {
        func_001E8390(unk4C);
    }
    if (unk598 != 0) {
        func_001E8390(unk598);
    }
    i = 0;
    D_002BF250 = 0;
    for (; i < unk21D4; i++) {
        func_001E8390(unk21D8[i]);
    }
    if (unk21D8 != 0) {
        func_001E8390(unk21D8);
    }
    if (unk21E0 != 0) {
        func_001E8390(unk21E0);
    }
    if (unk21C8 != 0) {
        unk21C8->Destroy(1);
    }
    if (unk21CC != 0) {
        unk21CC->Destroy(1);
    }
    if (unk21DC != 0) {
        unk21DC->Destroy(1);
    }
    if (unk21E4 != 0) {
        func_00201100(unk21E4);
    }
    if (unk21E8 != 0) {
        func_00201100(unk21E8);
    }
    for (i = 0; i < 3; i++) {
        if ((&unk21EC)[i] != 0) {
            func_00201100((&unk21EC)[i]);
        }
    }
    func_00157660();
}

