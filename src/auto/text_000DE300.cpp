/* 5 functions from 0x000DE300 to 0x000DE730, found by Ghidra. */
#include "common.h"

struct C_000DE_Widget {
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_000DE_Elem {
    char pad0[0x38];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
};

/* BmxUIPageHorseWord */
struct C_000DE300 {
    char pad0[0x2EC];
    C_000DE_Elem *unk2EC;
    char pad2F0[0x314 - 0x2F0];
    short unk314;
    char pad316[0x328 - 0x316];
    C_000DE_Widget *unk328;
    C_000DE_Widget *unk32C;
    void func_001BF000();
    void func_000DE300();
    void func_000DE390();
};

void C_000DE300::func_000DE390()
{
    C_000DE_Elem *e = unk2EC;
    e->f38 = ((int)unk314 << 24) | (e->f38 & 0xffffff);
    e->b58 |= 2;
    func_001BF000();
}
