/* 3 functions from 0x0005A0E0 to 0x0005A8F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0018C640 {
    void func_0018C640(void);
};

struct C_001D0E60 {
    void func_001D0E60(void);
};

struct C_0005A8A0 {
    undefined4 *func_0005A8A0(byte param_1);
};

undefined4 *C_0005A8A0::func_0005A8A0(byte param_1)
{
  extern int D_00277FD4;
  void func_001E891B(void *);
  undefined4 *in_ECX = (undefined4 *)this;
  C_0018C640 *p = (C_0018C640 *)in_ECX[0xbb];

  *in_ECX = (undefined4)&D_00277FD4;
  if (p != 0) {
    p->func_0018C640();
    func_001E891B(p);
  }
  ((C_001D0E60 *)in_ECX)->func_001D0E60();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
