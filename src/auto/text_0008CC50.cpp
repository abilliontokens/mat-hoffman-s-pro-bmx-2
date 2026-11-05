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
