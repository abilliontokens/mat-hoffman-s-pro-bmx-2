/* 13 functions from 0x0019A8C0 to 0x0019B890, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0019B6D0 {
    undefined4 func_0019B6D0(byte param_1);
};

extern int D_0028B0E4;
void *func_001E8A44(int size);
void func_001E891B(void *ptr);

struct S_0019A8C0_Mgr {
    void func_0019A210(void *self);
};

struct C_0019B6F0 {
    u16 f0;
    u16 f2;
    u16 f4;
    C_0019B6F0 *func_0019B6F0(void);
};

struct S_0019A8C0_Child {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad4[0x174];
    S_0019A8C0_Child *f178;
};

struct S_0019A8C0_Cam {
    S_0019A8C0_Cam *func_00193490(void);
    void func_00193500(void);
    void func_001938C0(void *a, int b, int c, void *vecA, void *vecB, int d);
    void func_00193950(void *a, void *vecA, void *vecB, int d);
};

struct C_00157660_19A8C0 {
    void func_00157660(void);
};

struct SoultreeObject {
    void *vtbl;
    char pad4[0x20];
    int f24;
    char pad28[0x170 - 0x28];
    S_0019A8C0_Mgr *f170;
    S_0019A8C0_Child *f174;
    char pad178[0x188 - 0x178];
    int f188;
    S_0019A8C0_Cam *f18c;
    void func_0019A8C0(void *vecA, void *vecB);
    void func_0019ABA0(int a1, int a2);
    void func_0019AC50(void);
    void func_0019ACE0(void);
};


undefined4 C_0019B6D0::func_0019B6D0(byte param_1)
{
  int func_0019ACE0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0019ACE0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0019B6F0 *C_0019B6F0::func_0019B6F0(void)
{
    f4 = 0;
    f2 = 0;
    f0 = 0;
    return this;
}

