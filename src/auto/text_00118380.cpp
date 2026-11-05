/* 4 functions from 0x00118380 to 0x001188F0, found by Ghidra. */
#include "common.h"

extern int D_002A1030;
extern int D_002B9210;
extern int D_002B9214;
extern int D_002B9218;
extern int D_00283D0C;
extern int D_00283D1C;

int func_00135C70(int a, int b, int c, int d);

struct C_00157BF0 {
    int func_00157BF0(int a, int b);
};

struct C_0010E2A0 {
    void func_0010E2A0();
};

struct C_001160C0 {
    void func_001160C0(int a);
};

struct C_00117160 {
    void func_00117160(int a);
};

struct CreatorObj {
    int func_00026500(int a, int b);
};

extern CreatorObj *D_002A7CB8;

struct C_00118380 {
    char pad0[0x5C8];
    int f5C8;
    char pad5CC[0xC4C];
    int f1218;
    char pad121C[0xE84];
    int f20A0;
    int func_00118380(int a, int b);
    void func_00118840(int a);
};

int C_00118380::func_00118380(int a, int b)
{
    if (f1218 == 0) {
        return ((C_00157BF0 *)this)->func_00157BF0(a, b);
    }
    if (func_00135C70(0x11, 0, a, 0x80000000) != 0) {
        ((C_0010E2A0 *)this)->func_0010E2A0();
        return 1;
    }
    if (func_00135C70(0x22, 0, a, 0x80) != 0) {
        D_002A1030 = (D_002A1030 == 0);
    }
    return ((C_00157BF0 *)this)->func_00157BF0(a, b);
}

void C_00118380::func_00118840(int a)
{
    if (f1218 != 0 && f5C8 == 0 && f20A0 == 0) {
        if ((D_002B9218 & 1) == 0) {
            D_002B9218 |= 1;
            D_002B9214 = D_002A7CB8->func_00026500((int)&D_00283D1C, -1);
        }
        ((C_001160C0 *)this)->func_001160C0(a);
    }
    if ((D_002B9218 & 2) == 0) {
        D_002B9218 |= 2;
        D_002B9210 = D_002A7CB8->func_00026500((int)&D_00283D0C, -1);
    }
    ((C_00117160 *)this)->func_00117160(a);
}

