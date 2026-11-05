/* 25 functions from 0x00160D30 to 0x00161C70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00161600 {
    undefined4 func_00161600(byte param_1);
};

struct C_00161850 {
    undefined4 func_00161850(int param_1);
};

extern int D_00287AF4;
extern int D_00287AD8;
extern int D_002EB254;
extern int D_002E2978;
extern int D_002EB250;
extern int D_002EB268;
extern int D_002EBE68;
extern int D_002EBE70;
extern int D_002EBE78;
extern void **D_002EBE7C;

void func_001E891B(void *p);
int __stdcall func_001DCA56(void *a, void *b);
void func_001613B0(void);

struct S_002A8490 {
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
    virtual int v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    void func_001D13D0(char *a0);
};
extern S_002A8490 *D_002A8490;

struct C_00161870 {
    void *vtbl;
    char pad4[0x28];
    void *func_00161870(unsigned int flags);
    void func_00161620();
    void func_001AC3D0();
};

struct S_00161170 {
    int unk0;
    int unk4;
    int unk8;
};

struct S_001B22E0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    void func_001B22E0();
};

struct C_00161580 {
    void *vtbl;
    int unk4;
    S_001B22E0 sub8;
    int unk18;
    void *func_00161580(void);
    void func_0001DFE0();
};


undefined4 C_00161600::func_00161600(byte param_1)
{
  int func_001615B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001615B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void func_00161670(void) {
    int func_001AC440(...);
    func_001AC440();
}

void func_00161840(void) {
    int func_001AC750(...);
    func_001AC750();
}

undefined4 C_00161850::func_00161850(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(param_1 * 0x10 + 8 + *(int *)(in_ECX + 0x14));
}

