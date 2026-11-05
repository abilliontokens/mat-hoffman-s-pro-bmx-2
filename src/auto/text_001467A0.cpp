/* 8 functions from 0x001467A0 to 0x00147550, found by Ghidra. */
#include "common.h"

extern int D_0028634C;
extern int D_00284E94;
extern int D_0028617C;
extern int D_00286170;
extern int D_002862FC;
extern int D_002862F0;

struct C_001B01D0 { void func_001B01D0(); };
struct C_001B0180 { void func_001B0180(); };
struct C_001B01B0 { void func_001B01B0(); };

void __stdcall func_00200390(int a, int b);

struct S_002EFDB8 {
    char pad0[0x54];
    int *f54;
    int *f58;
};
extern S_002EFDB8 *D_002EFDB8;

struct C_00147490 {
    void *vtbl;
    C_00147490 *func_00147490();
};

struct C_00146E20 {
    void *vtbl;
    char pad4[0x8];
    void *vtbl2;
    char pad10[0x8];
    int unk18;
    C_00146E20 *func_00146E20();
};

struct C_00147280 {
    void *vtbl;
    void *vtbl2;
    void *unk8;
    C_00147280 *func_00147280();
};

struct C_00146DC0 {
    char pad0[0xA];
    u8 unkA;
    char padB[0xD];
    short unk18;
    char pad1A[0x2A];
    int unk44;
    int unk48;
    void func_00146DC0();
};

void C_00146DC0::func_00146DC0()
{
    int i = 0;
    short *p;
    if (0 < unkA) {
        p = &unk18;
        do {
            int v = *p;
            if (v == -3) {
                func_00200390(i, 0);
                *D_002EFDB8->f58 = unk48;
            } else if (v == -4) {
                func_00200390(i, 0);
                *D_002EFDB8->f54 = unk44;
            }
            i++;
            p++;
        } while (i < unkA);
    }
}

C_00146E20 *C_00146E20::func_00146E20()
{
    ((C_001B0180 *)this)->func_001B0180();
    vtbl2 = (void *)&D_00284E94;
    vtbl = (void *)&D_0028617C;
    vtbl2 = (void *)&D_00286170;
    unk18 = 0;
    return this;
}

C_00147280 *C_00147280::func_00147280()
{
    ((C_001B01B0 *)this)->func_001B01B0();
    vtbl2 = (void *)&D_00284E94;
    vtbl = (void *)&D_002862FC;
    vtbl2 = (void *)&D_002862F0;
    unk8 = 0;
    return this;
}

C_00147490 *C_00147490::func_00147490()
{
    ((C_001B01D0 *)this)->func_001B01D0();
    vtbl = (void *)&D_0028634C;
    return this;
}
