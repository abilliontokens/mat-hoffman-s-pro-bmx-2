/* 10 functions from 0x000716F0 to 0x000725B0, found by Ghidra. */
#include "common.h"
/* a drawable the page owns: func_001D5AD0 draws it, f38/b58 are its colour and dirty flag */
struct Sprite_724E0 {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char b58;
    void func_001D5AD0();
};

struct C_000724E0 {
    char pad0[0x64];
    int unk64;
    char pad68[0x78 - 0x68];
    Sprite_724E0 *unk78;
    Sprite_724E0 *unk7C;
    Sprite_724E0 *unk80;
    char pad84[0x98 - 0x84];
    int unk98;
    char pad9C[0xEC - 0x9C];
    Sprite_724E0 *arrEC[8];
    Sprite_724E0 *arr10C[5];
    Sprite_724E0 *arr120[5];
    Sprite_724E0 *unk134;
    Sprite_724E0 *unk138;
    void func_000724E0(void);
};

struct C_00072590 {
    char pad0[0xC0];
    int unkC0;
    int unkC4;
    int unkC8;
    void func_00072590(int a0);
};


void C_00072590::func_00072590(int a0) {
    unkC4 = a0;
    unkC0 = 1;
    unkC8 = 1;
}
