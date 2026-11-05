/* 14 functions from 0x000B21B0 to 0x000B2ED0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern float D_002755E8;
extern char D_0027D0D8[];
extern char D_0027D0E8[];

int __stdcall func_0018C890(int);

struct VehicleV4 {
    u32 x, y, z, w;
};

struct VehicleAIOwner {
    char pad0[0x4B8];
    int f4B8;
    int func_0012FCF0(int a, int b);
};

struct C_002B9134 {
    char pad0[0x3C];
    int f3C;
};

extern C_002B9134 *D_002B9134;

struct VehicleAIIface {
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
    virtual int v17();
};

struct VehicleAIBody {
    char pad0[0x1A0];
    u8 f1A0;
    char pad1A1[0x1B];
    VehicleAIIface *f1BC;
    void func_001A1C70(int a);
};

struct VehicleAIB {
    char pad0[8];
    VehicleAIBody *f8;
};

struct VehicleAIA {
    char pad0[0x28];
    VehicleAIB *f28;
};

struct VehicleAI {
    void *vtbl;
    char pad4[0x38];
    VehicleAIOwner *f3C;
    char pad40[4];
    VehicleAIA *f44;
    char pad48[8];
    s32 f50;
    s32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    char pad64[4];
    u32 f68;
    char pad6C[0xC];
    u32 f78;
    char pad7C[0x10];
    u32 f8C;
    char pad90[0x111];
    u8 f1A1;
    char pad1A2[0x106];
    u8 f2A8;
    void SetState(int s) {
        if (f5C != s) {
            f1A1 = 1;
            f58 = s;
        }
    }
    void func_000B2450(float a);
    void func_000B2540(int mode, int a, VehicleV4 *p);
    void func_000B2C20(int a, int b);
};
struct C_000B2C60 {
    undefined4 func_000B2C60(byte param_1);
};

struct C_000B2510 {
    void func_000B2510(int param_1);
};

struct C_000B2530 {
    undefined4 func_000B2530(void);
};


void C_000B2510::func_000B2510(int param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x5c) != param_1) {
    *(undefined1 *)(in_ECX + 0x1a1) = 1;
    *(int *)(in_ECX + 0x58) = param_1;
  }
  return;
}

undefined4 C_000B2530::func_000B2530(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x4b8);
}

void VehicleAI::func_000B2C20(int a, int b)
{
    if (f54 >= 0 && f54 < D_002B9134->f3C) {
        if (f3C->func_0012FCF0(a, b)) {
            int t = f54;
            f54 = f50;
            f50 = t;
        }
    }
}

undefined4 C_000B2C60::func_000B2C60(byte param_1)
{
  int func_000B1200(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000B1200();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

