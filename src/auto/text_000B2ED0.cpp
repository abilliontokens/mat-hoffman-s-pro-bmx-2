/* 9 functions from 0x000B2ED0 to 0x000B3E10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0027CF8C;
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_00187640 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual int dummy27(int param_1);
    C_00187640 *func_00187640(int param_1);
};

struct C_000B2020 {
    C_000B2020 *func_000B2020(void);
    void func_000B21B0(int param_1);
};

struct C_000B2C80 {
    void func_000B2C80(void *param_1);
};

extern C_000B2C80 *D_002B9134;

struct VehicleAI {
    void *vtbl;
    char pad4[0x3c];
    C_000B2020 *f40;
    C_00187640 *f44;
    char pad48[8];
    int f50;
    void func_0018C7F0(void);
    void func_000B3330(int param_1);
    void *func_000B3350(int flags);
    void func_000B3390(int param_1);
};

struct C_000B3DF0 {
    undefined4 func_000B3DF0(byte param_1);
};


undefined4 C_000B3DF0::func_000B3DF0(byte param_1)
{
  int func_000B2E40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000B2E40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
