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
    char pad560[0x578 - 0x560];
    float f578;
    float f57C;
    char pad580[0x594 - 0x580];
    int unk594;
    int unk598;
    int unk59C;
    EcoEntry entries[600];
    int unk21C0;
    int unk21C4;
    int unk21C8;
    int unk21CC;
    int unk21D0;
    int unk21D4;
    int unk21D8;
    int unk21DC;
    int unk21E0;
    int unk21E4;
    int unk21E8;
    int unk21EC;
    int unk21F0;
    int unk21F4;
    EcoSystem *func_0014E3E0(int param_1);
};

extern EcoSystem *D_002BF250;

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

