/* 9 functions from 0x00095620 to 0x00096450, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_00095A00_Vt {
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
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual int v30(int a, int b);
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual int v41(int a);
};

struct S_00095A00_Sub {
    int count;
    void *data;
    void func_001CDED0(int n);
    void func_001CBCF0(int n);
};

struct C_00095A00 {
    char pad0[0x30];
    int f30;
    int f34;
    int f38;
    char pad3C[0x14];
    S_00095A00_Vt *f50;
    char pad54[0x14];
    S_00095A00_Sub f68;
    int func_00095A00(int n);
    int func_000952F0(void);
};

struct C_00095620 {
    undefined4 func_00095620(byte param_1);
};


undefined4 C_00095620::func_00095620(byte param_1)
{
  int func_00095060(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00095060();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
