/* 10 functions from 0x001C9920 to 0x001CA480, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct S_002A8490 {
    char pad0[0x124];
    int unk124;
};
extern S_002A8490 *D_002A8490;
extern int D_002AB7F0;
extern float D_002F0BCC;
int func_001B2910(int a0);

/* Water */
struct C_001C99A0 {
    int func_00157A00(int a0);
    int func_001C99A0(int a0);
};

struct C_001C9920_28 {
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
    virtual int v16(int a0, int *a1, int a2);
    virtual void v17(int a0);
    char pad4[0xA0];
    int unkA4;
};

struct S_001C9920_arg {
    char pad0[0x28];
    C_001C9920_28 *unk28;
};

struct C_001C9920 {
    char pad0[0x44];
    int unk44;
    char pad48[0x70];
    int unkB8;
    char padBC[4];
    float unkC4;
    char padC8[4];
    S_001C9920_arg *unkCC;
    char padD0[0x14C];
    int unk21C;
    void func_001C9920(int a0);
};

struct C_001C9AF0 {
    undefined4 func_001C9AF0(byte param_1);
};

struct C_001CA1D0 {
    char pad0[0x24];
    int unk24;
    char pad28[0x28];
    int unk50;
    C_001CA1D0* func_001CA1D0(int a0, int a1, int a2, int a3, int a4, int a5);
};

struct C_001CA1C0 {
    int unk0;
    void func_001CA1C0(void);
};


void func_001C99D0(void) {
    int func_00157BF0(...);
    func_00157BF0();
}

undefined4 C_001C9AF0::func_001C9AF0(byte param_1)
{
  int func_001C8740(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001C8740();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001CA1C0::func_001CA1C0(void) {
    extern int D_0028EC24;
    int func_00157660(...);
    unk0 = (int)&D_0028EC24;
    func_00157660();
}

C_001CA1D0* C_001CA1D0::func_001CA1D0(int a0, int a1, int a2, int a3, int a4, int a5) {
    unk24 = a0;
    unk50 = a2;
    return this;
}

