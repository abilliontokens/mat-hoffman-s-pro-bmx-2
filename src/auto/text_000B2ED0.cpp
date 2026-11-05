/* 9 functions from 0x000B2ED0 to 0x000B3E10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0027CF8C;
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_00187640 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual int dummy27(int param_1);
    C_00187640 *func_00187640(int param_1);
};

struct C_000B2020 {
    C_000B2020 *func_000B2020(void);
    void func_000B21B0(int param_1);
};

struct S_000B3B40_V4 {
    float x, y, z, w;
};

/* the vehicle record this AI reads its index from */
struct S_000B3B40_Owner {
    char pad0[0x4B8];
    int f4B8;                /* 0x4B8 */
};

/* one entry of the table at C_000B2C80::f4C */
struct S_000B3B40_Item {
    int f0;                  /* 0x00 */
    float f4;                /* 0x04 */
    S_000B3B40_V4 f8;        /* 0x08 */
};

struct S_000B3B40_Elem {
    int f0;                  /* 0x00 count */
    char pad4[4];
    S_000B3B40_Elem **f8;    /* 0x08 */
    char padC[0x3C];
    S_000B3B40_Item **f48;   /* 0x48 */
    int f4C;                 /* 0x4C count */
    int f50;                 /* 0x50 */
};

struct C_000B2C80 {
    char pad0[0x30];
    int f30;                 /* 0x30 */
    char pad34[0x18];
    S_000B3B40_Elem **f4C;   /* 0x4C */
    void func_000B2C80(void *param_1);
};

extern C_000B2C80 *D_002B9134;

struct VehicleAI {
    void *vtbl;
    char pad4[0x38];
    S_000B3B40_Owner *f3C;
    C_000B2020 *f40;
    C_00187640 *f44;
    char pad48[8];
    int f50;
    char pad54[0x1C];
    int f70;
    void func_0018C7F0(void);
    void func_000B3330(int param_1);
    void *func_000B3350(int flags);
    void func_000B3390(int param_1);
    void func_000B2540(int mode, int a, S_000B3B40_V4 *p);
    void func_000B3B40();
};

struct C_000B3DF0 {
    undefined4 func_000B3DF0(byte param_1);
};


void VehicleAI::func_000B3330(int param_1)
{
    f50 = param_1;
    D_002B9134->func_000B2C80(this);
}

void *VehicleAI::func_000B3350(int flags)
{
    vtbl = (void *)&D_0027CF8C;
    if (f44) {
        f44->dummy2();
        f44 = 0;
    }
    func_0018C7F0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void VehicleAI::func_000B3390(int param_1)
{
    void *mem = func_001E8A44(0x2c);
    f44 = mem != 0 ? ((C_00187640 *)mem)->func_00187640(1) : 0;
    if (f44->dummy27(param_1) == 0) {
        f44->dummy2();
        f44 = 0;
    }
    mem = func_001E8A44(0x458);
    f40 = mem != 0 ? ((C_000B2020 *)mem)->func_000B2020() : 0;
    f40->func_000B21B0(param_1);
}

void VehicleAI::func_000B3B40()
{
    int i, j;
    int v = f3C->f4B8;

    for (i = 0; i < D_002B9134->f4C[f50]->f0; i++) {
        for (j = 0; j < D_002B9134->f4C[f50]->f8[i]->f4C; j++) {
            S_000B3B40_Item *item = D_002B9134->f4C[f50]->f8[i]->f48[j];
            if (f50 == item->f0) {
                int c = (int)(item->f4 - v);
                if (c >= D_002B9134->f30 - 1 && c <= D_002B9134->f30) {
                    func_000B2540(D_002B9134->f4C[f50]->f8[i]->f50, (int)item->f4, &item->f8);
                    f70 = 0;
                }
            }
        }
    }
}

undefined4 C_000B3DF0::func_000B3DF0(byte param_1)
{
  int func_000B2E40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000B2E40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
