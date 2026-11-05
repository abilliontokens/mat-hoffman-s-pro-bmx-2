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
    int unk40;
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    void *arr54[0x100];
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
