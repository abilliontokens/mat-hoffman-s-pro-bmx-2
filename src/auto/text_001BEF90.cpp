/* 31 functions from 0x001BEF90 to 0x001BFF40, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001BF070 {
    undefined4 func_001BF070(byte param_1);
};

struct C_001BF030 {
    undefined4 func_001BF030(void);
};

struct C_001BF050 {
    undefined4 func_001BF050(int param_1);
};

struct C_001BF6A0 {
    char pad0[0x40];
    int unk40;
    void func_001BF6A0(void);
};

struct C_001BF6B0 {
    void func_001BF6B0(void);
};


undefined4 C_001BF030::func_001BF030(void)
{
  int __stdcall func_001577A0(int, int);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x16c) != 0) {
    func_001577A0((int)(*(int *)(in_ECX + 0x16c)), (int)(0xffffffff));
    return 1;
  }
  return 0;
}

undefined4 C_001BF050::func_001BF050(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x140) + param_1 * 4) + 0x30);
}

undefined4 C_001BF070::func_001BF070(byte param_1)
{
  int func_001BE3F0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001BE3F0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001BF6A0::func_001BF6A0(void) {
    unk40 = 1;
}

void C_001BF6B0::func_001BF6B0(void)
{
  int* in_ECX = (int*)this;
  
                    
                    
  (**(code **)(*in_ECX + 0x1c))();
  return;
}
