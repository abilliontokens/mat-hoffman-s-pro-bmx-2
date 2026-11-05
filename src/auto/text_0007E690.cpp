/* 10 functions from 0x0007E690 to 0x0007EE80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_0007EB00 {
    undefined4 func_0007EB00(byte param_1);
};

struct C_0007EAE0 {
    undefined4 func_0007EAE0(byte param_1);
};

struct C_0007EC80 {
    undefined4 func_0007EC80(byte param_1);
};

struct C_0007EE00 {
    undefined4 func_0007EE00(byte param_1);
};

struct C_0007EE40 {
    undefined4 func_0007EE40(byte param_1);
};

struct C_0007EE20 {
    void func_00078620(void);
    void func_000782C0(void);
    void func_00157960(void);
    void func_0007EE20(void);
};


undefined4 C_0007EAE0::func_0007EAE0(byte param_1)
{
  int func_00072D30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00072D30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0007EB00::func_0007EB00(byte param_1)
{
  int func_00073C30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00073C30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0007EC80::func_0007EC80(byte param_1)
{
  int func_00075C70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  func_00075C70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0007EE00::func_0007EE00(byte param_1)
{
  int func_00077890(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  func_00077890();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_0007EE20::func_0007EE20(void) {
    func_00078620();
    func_000782C0();
    func_00157960();
}

