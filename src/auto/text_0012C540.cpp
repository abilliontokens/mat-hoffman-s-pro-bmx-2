/* 8 functions from 0x0012C540 to 0x0012D460, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
extern int D_00284274;

struct C_0013B210 {
    void func_0013B210(void *);
};
extern C_0013B210 *D_002BEAAC;
void func_001E891B(void *);

struct C_0012C8F0 {
    undefined4 func_0012C8F0(byte param_1);
};

struct C_0012C910 {
    void func_0012C540(int a, int b);
    void func_001D3F50();
    void func_0012C910(int a, int b);
};

struct C_0012CC20 {
    char pad0[0x228];
    int unk228;
    void func_0012CC20(int a);
};

struct C_0012CCA0_Ref {
    int unk0;
    u32 unk4;
    void *unk8;
};

struct C_0012CCA0 {
    void *vtbl;
    char pad4[0x410];
    C_0012CCA0_Ref *unk414;
    char pad418[0xE8];
    void *unk500;
    void func_00170B50();
    void func_0012CCA0();
};


undefined4 C_0012C8F0::func_0012C8F0(byte param_1)
{
  int func_0012C4E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012C4E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
