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

struct C_0005C600 {
    int func_0005C600(int a, int b);
};

struct C_00083970 {
    int func_00083970(int a, int b, int c);
    void func_000836A0(int a);
};

struct S_00118410_Inner {
    char pad0[0x68];
    C_0005C600 *f68;
    char pad6C[0x104];
    C_00083970 *a170[34];
    int f1F8;
};

struct S_00118410_Obj {
    char pad0[0x2D8];
    int f2D8;
};

struct S_00118410_Global {
    char pad0[0x2A4];
    S_00118410_Inner *f2A4;
    char pad2A8[0x38];
    S_00118410_Obj *f2E0;
};

extern S_00118410_Global *D_002A8490;

struct C_00118380 {
    char pad0[0x5C8];
    int f5C8;
    char pad5CC[0x460];
    int fA2C;
    char padA30[8];
    int fA38;
    char padA3C[0x618];
    int f1054;
    char pad1058[0x19C];
    int f11F4;
    char pad11F8[0x20];
    int f1218;
    char pad121C[0xDF4];
    int f2010;
    char pad2014[0x8C];
    int f20A0;
    int func_00118380(int a, int b);
    void func_00118410(int a, int b, int c);
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

void C_00118380::func_00118410(int a, int b, int c)
{
    if (f11F4 == 1) {
        f1054 = 1;
        if (D_002A8490->f2A4->a170[fA2C] != 0) {
            if (D_002A8490->f2A4->a170[fA2C]->func_00083970(a, c, b) != 0) {
                if (b != -1 && D_002A8490->f2A4->f1F8 != 0) {
                    D_002A8490->f2A4->f68->func_0005C600(D_002A8490->f2E0->f2D8, b);
                }
                if (f2010 == 0 && fA38 != 0 && D_002A8490->f2A4->a170[fA2C] != 0) {
                    D_002A8490->f2A4->a170[fA2C]->func_000836A0(c);
                }
            }
        }
    }
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

