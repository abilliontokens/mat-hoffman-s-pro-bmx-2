/* 17 functions from 0x00196C00 to 0x00197B90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028B02C;
extern f32 D_00275544;

struct C_002A8490 {
    char pad0[0x124];
    int f124;
};
extern C_002A8490 *D_002A8490;

struct C_00138330 {
    void func_00138330(int a0);
};

struct C_00197680 {
    void *vtbl;
    C_00197680 *func_00197680(int a0);
};

struct C_00197260 {
    char pad0[0x74];
    unsigned count;
    char pad78[8];
    int *table;
    char pad84[0x34];
    char *buf;
    void func_00197260(int index, char *out);
};

struct C_001975A0 {
    char pad0[0x24];
    f32 f24;
    char pad28[0xC];
    f32 f34;
    f32 f38;
    char pad3C[4];
    f32 f40;
    char pad44[0x7C];
    u8 fC0;
    char padC1[3];
    u32 fC4;
    void func_001963D0();
    void func_00196560();
    void func_001975A0(f32 dt);
    void func_00196C00(f32 dt);
    void func_00157A00(f32 dt);
    int func_00197610(f32 dt);
};
struct C_00197290 {
    undefined4 func_00197290(byte param_1);
};

struct C_00197590 {
    void func_00197590(void);
};

struct C_00197250 {
    char pad0[0x2C];
    float unk2C;
    float func_00197250(void);
};


float C_00197250::func_00197250(void) {
    return unk2C;
}

undefined4 C_00197290::func_00197290(byte param_1)
{
  int func_00195E70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00195E70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00197590::func_00197590(void)
{
  int func_00196290(...);
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xc0) = *(byte *)(in_ECX + 0xc0) & 0x51;
  func_00196290();
  return;
}

C_00197680 *C_00197680::func_00197680(int a0)
{
    ((C_00138330 *)this)->func_00138330(a0);
    vtbl = &D_0028B02C;
    return this;
}

