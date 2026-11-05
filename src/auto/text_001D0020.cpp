/* 16 functions from 0x001D0020 to 0x001D0FD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D0DE0 {
    undefined4 func_001D0DE0(byte param_1);
};

extern int D_0028F154;
extern int D_0028F004;
extern int D_0028F100;
extern int D_0026D94C;

void func_001E891B(void *p);
void *func_001E8A44(int size);
unsigned __stdcall func_0026EBC5(void *p);

struct C_00156FC0 {
    void func_00156FC0(void);
};

struct XboxGame_001D0E60 {
    void *vtbl;
    char pad4[0x29C];
    int f2A0;
    void func_001D0E60(void);
};

struct C_001CF2A0 {
    void func_001CF2A0(void);
};

struct C_0001C920 {
    void func_0001C920(void);
};

struct XboxSoundGroup_001D0870 {
    void *vtbl;
    char pad4[0x30];
    void *f34;
    XboxSoundGroup_001D0870 *func_001D0870(unsigned int flags);
};

struct C_00135E00 {
    void func_00135E00(void);
};

struct ControllerPort_001D14C0 {
    virtual void v0();
    virtual void v1(int flags);
    ControllerPort_001D14C0 *func_001D14C0(int port);
    int func_001D1550(int port);
};

struct XboxControlInterface_001D0C30 {
    void *vtbl;
    int f4;
    char pad8[0xC];
    ControllerPort_001D14C0 *f14[4];
    char pad24[0x14];
    int f38;
    char pad3C[0xD04 - 0x3C];
    int fD04;
    int fD08;
    int fD0C[4];
    XboxControlInterface_001D0C30 *func_001D0C30(void);
    int func_001D0C70(int unused);
};


undefined4 C_001D0DE0::func_001D0DE0(byte param_1)
{
  int func_001D0D30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D0D30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void XboxGame_001D0E60::func_001D0E60(void)
{
    vtbl = (void *)&D_0028F154;
    if (f2A0 != 0) {
        f2A0 = 0;
    }
    ((C_00156FC0 *)this)->func_00156FC0();
}

