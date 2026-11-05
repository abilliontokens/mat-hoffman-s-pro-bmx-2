/* 5 functions from 0x0018EB70 to 0x0018F980, found by Ghidra. */
#include "common.h"
extern char D_00275630[];
struct C_00191470 {
    void func_00191470(unsigned int b);
};
struct C_0018F4D0 {
    char pad0[0x20];
    int f20;
    int f24;
    char *f28;
    char f2C;
    char pad2D[0x12C - 0x2D];
    int f12C;
    int f130;
    int f134;
    int f138;
    int f13C;
    char f140;
    char pad141[0x150 - 0x141];
    void func_0018E250(char *a, unsigned int b);
    void func_0018F4D0(unsigned int a);
};
struct C_0018F350 {
    char pad0[0x18];
    int unk18;
    int unk1C;
    char pad20[0x148];
    int unk168;
    int unk16C;
    int unk170;
    int unk174;
    int unk178;
    int unk17C;
    C_0018F350* func_0018F350(void);
};


C_0018F350* C_0018F350::func_0018F350(void) {
    unk178 = 0;
    unk174 = 0;
    unk170 = 0;
    unk17C = 1065353216;
    unk18 = 0;
    unk1C = 0;
    unk168 = 0;
    unk16C = 0;
    return this;
}
