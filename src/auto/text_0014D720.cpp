/* 5 functions from 0x0014D720 to 0x0014E630, found by Ghidra. */
#include "common.h"

extern int D_002BF278;

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
    char pad560[0x56c - 0x560];
    void *unk56C;
    int unk570;
    void *unk574;
    float f578;
    float f57C;
    char pad580[0x594 - 0x580];
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
};

extern EcoSystem *D_002BF250;
extern int D_002BF27C;
extern int D_002A7690;
extern int D_002A7694;
extern int D_002A7698;
extern int D_002A769C;
extern int D_002A768C;
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
};

extern EcoGlobal *D_002EFDB8;

void func_0013E1F0(EcoLog *log, int id, const char *fmt, ...);
void func_0013E260(EcoLog *log, int id, const char *fmt, ...);

void C_0014E1C0::func_0014E1C0(C_0013E9B0 **param_1, int param_2)
{
    for (int i = 0; i < param_2; i++) {
        param_1[i]->func_0013E9B0(unk21D8[i]);
    }
    D_002BF278 += param_2;
}

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
EcoSystem *EcoSystem::func_0014E3E0(int param_1)
{
    int i;

    ((SearchableGameObject *)this)->func_00192370(param_1);
    vtbl = (void *)&D_00286A1C;
    unk30 = 0;
    unk2C = 0;
    unk28 = 0;
    f34 = 1.0f;
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
    unk21EC = 0;
    unk21F0 = 0;
    unk21F4 = 0;
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

