/* 2 functions from 0x000F2CC0 to 0x000F3C70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#define F(p,o) (*(int*)((char*)(p)+(o)))
#define P(p,o) (*(char**)((char*)(p)+(o)))
struct C_000F2CC0 {
    void func_000F2CC0();
    void func_001BEFC0(int a, int b);
    void func_000C4CE0();
};
struct X_any {
    int func_0005C1D0(int);
    int func_0005C1E0(int);
    int func_0001B3C0(int);
    void func_00093120();
    int func_00094F00();
    int func_00094EE0();
    void func_00094C60();
    void func_00094A10(void*, int);
    void func_0005E840(int);
    void func_000BF860(int, int, int, int);
    int func_0005C0E0();
    int func_0005C700();
    int func_0005C0F0();
    char* func_0005C020(int);
    void func_0005C100();
    void func_0005C710();
    void func_0005C110();
    int func_0005C330(int);
    void func_0005C340(int);
};
extern "C" char* D_002A8490;
extern "C" char* D_002B91AC;
extern "C" char D_0027DDEC;
#define LST ((X_any*)P(P(D_002A8490,0x2e0),0x2c0))
struct C_000F3C50 {
    undefined4 func_000F3C50(byte param_1);
};


undefined4 C_000F3C50::func_000F3C50(byte param_1)
{
  int func_000C5980(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000C5980();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
