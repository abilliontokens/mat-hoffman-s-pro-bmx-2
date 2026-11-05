/* 24 functions from 0x00148780 to 0x00149620, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001488F0 {
    undefined4 func_001488F0(byte param_1);
};

struct C_00149300 {
    void func_00149300(void);
};

extern int D_00286824;
extern int D_00285C84;
extern int D_00285C78;
extern int D_00284E94;
extern int D_00285CA0;
extern int D_00285C94;
extern int D_00144CD0;

struct C_00149380 {
    void *vtbl;
    void func_001B0F10();
    C_00149380();
};

struct AnimSrc_001487D0 {
    char pad0[0x40];
    int count;
};

struct C_00148780 {
    void *vtbl;
    u32 unk4;
    AnimSrc_001487D0 *unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    void *unk20;
    void func_001AF710();
    void *func_00148780(unsigned int flags);
    void func_001487D0();
};

struct C_00148820 {
    void *vtbl;
    u32 unk4;
    void *unk8;
    u32 unkC;
    void func_00144E70();
    C_00148820(int a1, void *a2);
};


void *C_00148780::func_00148780(unsigned int flags)
{
    void func_001E891B(void *);
    vtbl = &D_00285C84;
    unk1C = (u32)&D_00285C78;
    if (unk20 != 0) {
        func_001E891B(unk20);
    }
    unk1C = (u32)&D_00284E94;
    func_001AF710();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_00148780::func_001487D0()
{
    void *func_001E8A44(int);
    void __stdcall func_00011FF0(void *p, int a1, int a2, int *a3);
    int n = unk8->count;
    if (n == 0) {
        unk20 = 0;
        return;
    }
    void *p = func_001E8A44(n * 0x14);
    if (p != 0) {
        func_00011FF0(p, 0x14, n, &D_00144CD0);
    }
    unk20 = p;
}

undefined4 C_001488F0::func_001488F0(byte param_1)
{
  int func_001452A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001452A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00149300::func_00149300(void)
{
  int* in_ECX = (int*)this;
  
                    
                    
  (**(code **)(*in_ECX + 4))();
  return;
}

C_00149380::C_00149380()
{
    func_001B0F10();
    vtbl = &D_00286824;
}

void func_001493A0(void) {
    int func_001B1010(...);
    func_001B1010();
}
