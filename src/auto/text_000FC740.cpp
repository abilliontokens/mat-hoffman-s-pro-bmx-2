/* 3 functions from 0x000FC740 to 0x000FCB00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000FCAE0 {
    undefined4 func_000FCAE0(byte param_1);
};

struct C_000FC740_Widget {
    void func_001B1980(void);
    void func_001B1B30(float a, int b);
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_000FC740 {
    char pad0[0x48c];
    int f48c;
    int f490;
    char pad494[0x30];
    int f4c4;
    int f4c8;
    int f4cc;
    int f4d0;
    float f4d4;
    char pad4d8[0xbc];
    C_000FC740_Widget *f594;
    int f598;
    void func_000FC740(void);
    void func_000FA620(void);
    void func_001BEE50(int a, int b, int c);
    void func_000CEA00(int a);
};


void C_000FC740::func_000FC740(void)
{
    f4c4 = 0xff;
    f4c8 = 0;
    f4cc = 0;
    f4d0 = 0;
    f4d4 = 0.25f;
    func_000FA620();
    func_001BEE50(1, f48c, f490);
    func_000CEA00(f490);
    f594->func_001B1980();
    f594->func_001B1B30(0.75f, 0);
    f594->func_001B2270(0xffcccccc);
    f594->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0, 1.0f, 0, 0.25f, 0, 0);
    f598 = 0;
}

undefined4 C_000FCAE0::func_000FCAE0(byte param_1)
{
  int func_000D0FD0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D0FD0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
