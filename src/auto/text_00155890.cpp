/* 9 functions from 0x00155890 to 0x00156880, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001567E0 {
    undefined4 func_001567E0(byte param_1);
};

extern int D_00286F6C;
extern int D_00286DD4;
extern int D_002754B8;
extern int D_00150D30;

extern "C" void __stdcall func_001C6DA0(int param_1, int param_2);
void func_001E891B(void *ptr);

struct C_001B59E0 {
    void func_001B59E0(void);
};

struct C_00156800 {
    void *vtbl;
    C_00156800 *func_00156800(void);
};

struct S_00156030_A {
    char pad_0[0x108];
    int unk108;
};

struct S_00156030_B {
    char pad_0[0x10];
    int unk10;
};

struct S_00156030_C {
    void func_0008AB90(int param_1);
};

struct S_00156030_Player {
    char pad_0[0x3c];
    S_00156030_B *unk3C;
    char pad_40[0xc4 - 0x40];
    int unkC4;
    char pad_C8[0x384 - 0xc8];
    S_00156030_C *unk384;
    int unk388;
    char pad_38C[0x39c - 0x38c];
    S_00156030_A *unk39C;
    char pad_3A0[0x3bc - 0x3a0];
    int unk3BC;
    int unk3C0;
};

struct TikiPlayerAirborneState {
    char pad_0[8];
    S_00156030_Player *unk8;
    int func_00156030(int param_1);
};

struct S_00156740_Sub {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
};

struct C_00156740 {
    void *vtbl;
    char pad_4[0x384 - 4];
    S_00156740_Sub *unk384;
    void *unk388;
    void *unk38C;
    void *unk390;
    void *unk394;
    void *unk398;
    void func_00156740(void);
    void func_001C75A0(void);
};

struct S_00156820_Base {
    void func_001BBAA0(void *param_1, int *param_2);
};

struct C_00156820 {
    int func_00156820(int param_1, void *param_2);
};


undefined4 C_001567E0::func_001567E0(byte param_1)
{
  int func_00156740(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00156740();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
