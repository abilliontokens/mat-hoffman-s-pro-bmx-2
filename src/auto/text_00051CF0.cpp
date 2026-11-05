/* 12 functions from 0x00051CF0 to 0x00052C10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern float D_00275544;

struct C_00051CF0_74 {
    int func_00030020(const char *name);
    int func_000300C0(const char *name);
    void func_00030160();
    int func_000301D0();
    void func_00030210();
};

struct C_00051CF0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18(int a);
    char pad4[0x70];
    C_00051CF0_74 *unk74;
};

struct C_0001C240 {
    void func_0001C240(void);
};

struct C_00052AE0_Obj {
    char pad0[0xA0];
    float fA0[5];
    void func_001BBE20(int a);
};

struct C_00052AE0_Item {
    char pad0[4];
    C_00052AE0_Obj *f4;
};

struct C_00052AE0_List {
    char pad0[0x24];
    int f24;
    C_00052AE0_Item **f28;
};

struct C_00052AE0_Inner {
    char pad0[0x11B0];
    int f11B0;
};

struct C_00052AE0_Ctx {
    char pad0[0x1A8];
    C_00052AE0_Inner *f1A8;
};

struct C_00051CF0_64 {
    char pad0[0x3B4];
    C_00052AE0_List *f3B4;
    char pad3B8[0xCC];
    C_0001C240 *f484;
    char pad488[0x58];
    C_00052AE0_Ctx *f4E0;
    char pad4E4[0x74];
    C_00051CF0_Obj *unk558;
};

struct C_00051CF0;

struct C_00052AE0_1C0 {
    void func_00099750(C_00051CF0 *owner, float a);
};

struct C_00051CF0_2A8490 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15(void *a, void *b, int c, int d);
};
extern C_00051CF0_2A8490 *D_002A8490;

struct C_00051CF0_2EFDB8 {
    char pad0[0x30];
    int f30;
};
extern C_00051CF0_2EFDB8 *D_002EFDB8;

struct C_00051CF0_170 {
    void func_00083B00(int a);
};

struct C_00051CF0 {
    void *vtbl;                       /* 0x00 */
    char pad04[0x20];
    void *unk24;                      /* 0x24 */
    C_00051CF0_Obj *unk28;            /* 0x28 */
    char pad2C[0x1C];
    C_00051CF0_Obj *unk48;            /* 0x48 */
    char pad4C[0x18];
    C_00051CF0_64 *unk64;             /* 0x64 */
    char pad68[0xBC];
    float unk124;                     /* 0x124 */
    char pad128[0x48];
    C_00051CF0_170 *unk170;           /* 0x170 */
    char pad174[0x54];
    int unk1C8;                       /* 0x1C8 */
    char pad1CC[0xEC];
    float unk2B8[4];                  /* 0x2B8 */
    char pad2C8[4];
    int unk2CC;                       /* 0x2CC */
    char pad2D0[0x88];
    int unk358;                       /* 0x358 */
    void func_00031450();
    int func_00052590(int idx);
    void func_00052630(const char *name);
    void func_000526D0();
    void func_00052740(int a);
    void func_00052BD0();
};

struct C_00052BB0 {
    undefined4 func_00052BB0(byte param_1);
};

struct C_00052BF0 {
    void func_00052BF0(void);
    void func_000314A0(void);
    void func_00052740(int param_1);
};


int C_00051CF0::func_00052590(int idx)
{
    int count;
    float *p = unk2B8;
    if (unk1C8 != 0) {
        return 0;
    }
    p[idx] = unk124;
    unk2CC = 1;
    count = 0;
    if (p[0] > D_00275544) {
        count++;
    }
    if (p[1] > D_00275544) {
        count++;
    }
    if (p[2] > D_00275544) {
        count++;
    }
    if (p[3] > D_00275544) {
        count++;
    }
    unk170->func_00083B00(count);
    return 1;
}

void C_00051CF0::func_00052630(const char *name)
{
    if (unk48 != 0) {
        if (unk48->unk74->func_00030020(name) != 0 &&
            unk48->unk74->func_000300C0(name) != 0) {
            unk48->unk74->func_00030160();
        }
        D_002A8490->v15(unk28, unk24, 0, 0);
        unk48->v6();
        unk28->v6();
        unk48->v18(0);
        unk28->v18(0);
        unk358 = 1;
        D_002EFDB8->f30 = 0;
    }
}

void C_00051CF0::func_000526D0()
{
    if (unk48 != 0 && unk48->unk74->func_000301D0() == 0) {
        unk48->unk74->func_00030210();
        D_002A8490->v15(unk24, 0, 0, 0);
        unk48->v4();
        unk28->v4();
        unk358 = 0;
        D_002EFDB8->f30 = 1;
        unk64->unk558->v4();
    }
}

undefined4 C_00052BB0::func_00052BB0(byte param_1)
{
  int func_00051260(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00051260();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00051CF0::func_00052BD0()
{
    func_00031450();
    func_00052740(1);
}

void C_00052BF0::func_00052BF0(void)
{
    func_000314A0();
    func_00052740(0);
}

