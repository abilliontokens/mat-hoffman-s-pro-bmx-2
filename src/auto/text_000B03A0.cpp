/* 4 functions from 0x000B03A0 to 0x000B1350, found by Ghidra. */
#include "common.h"

extern int D_0027CE64;

struct C_002A8490 {
    char pad0[0x124];
    int f124;
};
extern C_002A8490 *D_002A8490;

void __stdcall func_00157A00(int);

struct C_000B1320 {
    int func_000B1320(int param_1);
};

struct C_000B11C0 {
    void *vtbl;
    char pad04[0x30];
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    void func_00157600(int a0);
    C_000B11C0 *func_000B11C0(int param_1);
};
