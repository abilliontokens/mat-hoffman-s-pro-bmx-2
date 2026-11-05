/* 7 functions from 0x0017AA90 to 0x0017BA00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0017AA90;

struct C_0017AA90_Child {
    virtual void v0();
    virtual void v1(C_0017AA90 *owner);
};

struct C_0017AA90_Xform {
    char pad0[0x250];
    int f250;
};

struct C_0017AA90_Dest {
    char pad0[0x18];
    int f18;
};

struct C_0017AA90_Res {
    char pad0[0x4c];
    C_0017AA90_Dest *f4C;
};

struct C_0017AA90_Node {
    int f0;
    C_0017AA90_Res *f4;
    int f8;
    int fC;
};

struct C_0017AA90_Mgr {
    char pad0[0x14];
    C_0017AA90_Node *f14;
};

extern int D_002EFD5C;
extern int D_002A8CDC;
extern C_0017AA90_Mgr *D_002A829C;
void func_000263B0(void *a, void *b, void *c);

struct C_0017AA90 {
    void *vtbl;
    char pad4[0xEC];
    C_0017AA90_Child **fF0;
    int fF4;
    char padF8[4];
    char *fFC;
    char pad100[0x50];
    int f150;
    int f154;
    char pad158[8];
    int f160;
    int func_0017AA90();
};

struct C_0017ABC0 {
    undefined4 func_0017ABC0(byte param_1);
};

struct C_0017B9E0 {
    int unk0;
    int unk4;
    C_0017B9E0* func_0017B9E0(int a0, int a1);
};

struct C_0017AB70 {
    char pad0[0x158];
    int *unk158;
    int unk15C;
    int func_0017AB70(int param_1);
};


int C_0017AB70::func_0017AB70(int param_1)
{
    if (unk158 == 0) {
        return 1;
    }
    for (int i = 0; i < unk15C; i++) {
        if (unk158[i] == param_1) {
            return 0;
        }
    }
    return 1;
}

undefined4 C_0017ABC0::func_0017ABC0(byte param_1)
{
  int func_0017A640(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0017A640();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0017B9E0* C_0017B9E0::func_0017B9E0(int a0, int a1) {
    unk0 = a0;
    unk4 = a1;
    return this;
}
