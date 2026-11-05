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


struct C_00149280 {
    void *vtbl;
    void *func_00149280(int a0);
};

struct C_00148850 {
    void *vtbl;
    u32 unk4;
    void *unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    void *func_00148850(unsigned int flags);
};

struct C_001488B0 {
    void *vtbl;
    u32 unk4;
    void *unk8;
    u32 unkC;
    void func_00144E70();
    void *func_001488B0(C_001488B0 *a);
};

struct C_001AC790 {
    void func_001AC790(int param_1);
};

struct C_00149040 {
    void *vtbl;
    u32 unk4;
    void *unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    void func_001B01A0();
    void *func_00149040(unsigned int flags);
};

struct C_00149450 {
    void *vtbl;
    void func_001B0F70();
    void *func_00149450(unsigned int flags);
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
        unk20 = p;
    } else {
        p = 0;
        unk20 = p;
    }
}

void *C_00148850::func_00148850(unsigned int flags)
{
  void func_001E891B(void *);
  extern int D_00285C00;

  vtbl = (void *)&D_00285CA0;
  unkC = (u32)&D_00285C94;
  if (unk10 != 0) {
    func_001E891B((void *)unk10);
  }
  if (unk14 != 0) {
    func_001E891B((void *)unk14);
  }
  unkC = (u32)&D_00284E94;
  vtbl = (void *)&D_00285C00;
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

void *C_001488B0::func_001488B0(C_001488B0 *a)
{
  extern int D_00285C00;

  *(volatile void **)&vtbl = (void *)&D_00285C00;
  *(volatile u32 *)&unk4 = a->unk4;
  *(volatile void **)&unk8 = a->unk8;
  *(volatile u32 *)&unkC = (u32)&D_00284E94;
  *(volatile void **)&vtbl = (void *)&D_00285CA0;
  *(volatile u32 *)&unkC = (u32)&D_00285C94;
  func_00144E70();
  return this;
}

C_00148820::C_00148820(int a1, void *a2)
{
    *(volatile u32 *)&unk4 = 0;
    *(volatile void **)&unk8 = a2;
    *(volatile int *)((char *)this + 0xC) = (int)&D_00284E94;
    *(volatile void **)&vtbl = (void *)&D_00285CA0;
    *(volatile u32 *)&unkC = (u32)&D_00285C94;
    func_00144E70();
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

void *C_00149040::func_00149040(unsigned int flags)
{
  void func_001E891B(void *);
  extern int D_0028617C;
  extern int D_00286170;
  extern C_001AC790 *D_002A71C0;
  extern C_001AC790 *D_002A71C4;

  vtbl = (void *)&D_0028617C;
  unkC = (u32)&D_00286170;
  if (unk10 != 0) {
    D_002A71C0->func_001AC790(-(int)unk10);
  }
  if (unk14 != 0) {
    D_002A71C4->func_001AC790(-(int)unk14);
  }
  unkC = (u32)&D_00284E94;
  func_001B01A0();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

void *C_00149280::func_00149280(int a0)
{
  int __stdcall func_001B0E60(int);
  extern int D_00286808;

  func_001B0E60(a0);
  vtbl = (void *)&D_00286808;
  return this;
}

void C_00149300::func_00149300(void)
{
  int* in_ECX = (int*)this;
  
                    
                    
  (**(code **)(*in_ECX + 4))();
  return;
}

void func_00149350(void)
{
  int __stdcall func_001FF940(int, int);
  extern undefined4 D_002EFDB8;
  int __stdcall func_00200230(int);
  func_001FF940((int)(*(undefined4 *)(D_002EFDB8 + 0x58)), (int)(*(undefined4 *)(D_002EFDB8 + 0x5c)));
  func_00200230((int)(*(int *)(D_002EFDB8 + 4) + 0x1e0));
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
