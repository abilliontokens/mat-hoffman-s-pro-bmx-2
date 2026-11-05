/* 17 functions from 0x00142180 to 0x00142F30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00142BF0 {
    undefined4 func_00142BF0(byte param_1);
};

struct C_00142C70 {
    undefined4 func_00142C70(void);
};

struct C_00142CF0 {
    int unk0;
    C_00142CF0* func_00142CF0(void);
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct C_0013B210 {
    int func_0013C9F0(int param_1, int *param_2);
    void func_0013C8A0(int param_1, void *param_2, int param_3, int param_4);
    void func_0013C110(int param_1);
};

struct C_00142C80 {
    int func_00142C80(int param_1, int param_2);
};

struct C_00142D90_Elem {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
};

struct C_00012140 {
    void func_00012140(void);
};

struct C_00142D90 {
    char pad_0[0x14];
    C_00142D90_Elem *unk14;
    void func_00142D90(int param_1);
    void func_001AC790(int param_1);
};

struct C_00142560_Elem {
    int unk0;
    char pad_4[0x10];
    float unk14;
    char pad_18[0x34 - 0x18];
};

struct C_00142560 {
    char pad_0[0x14];
    C_00142560_Elem *unk14;
    int unk18;
    int unk1C;
    int unk20;
    char pad_24[0xa8 - 0x24];
    int unkA8;
    void func_00142560(void);
};

struct C_00142C10 {
    char pad_0[0x20];
    int unk20;
    int unk24;
    char pad_28[0xa8 - 0x28];
    int unkA8;
    int unkAC;
    int unkB0;
    char pad_B4[0xd4 - 0xb4];
    int unkD4;
    int unkD8;
    int unkDC;
    int unkE0;
    char pad_E4[0xec - 0xe4];
    int unkEC;
};

void func_00142C10(C_00142C10 *param_1);


undefined4 C_00142BF0::func_00142BF0(byte param_1)
{
  int func_00142720(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00142720();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00142C70::func_00142C70(void)
{
  int func_00142C10(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00142C10(in_ECX);
  return in_ECX;
}

C_00142CF0* C_00142CF0::func_00142CF0(void) {
    unk0 = 0;
    return this;
}

void C_00142D90::func_00142D90(int param_1)
{
    void func_001E891B(int);
    int value;
    func_001AC790(param_1);
    if (unk14[param_1].unkC == 0) {
        value = unk14[param_1].unk4;
        if (value != 0) {
            ((C_00012140 *)value)->func_00012140();
            func_001E891B(value);
            unk14[param_1].unk4 = 0;
        }
    }
}

