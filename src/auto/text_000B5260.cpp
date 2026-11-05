/* 12 functions from 0x000B5260 to 0x000B6180, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000B6080 {
    void func_000B6080(int param_1);
};

struct C_000B5870 {
    char pad0[0x24];
    int unk24;
    int func_000B5870(void);
};

struct C_000B5880 {
    char pad0[0x34];
    int unk34;
    int unk38;
    int unk3c;
    int unk40;
    void func_000B5880(int *param_1);
};

struct C_000B58B0 {
    void func_000B58B0(void);
};

struct C_000B5950 {
    int func_000B5950(void);
};

struct C_000B60A0 {
    int unk0;
    void *func_000B60A0(int flags);
};

struct C_00197F70 {
    float *func_00197F70(float *param_1, float *param_2);
};

extern int D_0027D37C;
extern float D_002A2EC8;


int C_000B5870::func_000B5870(void) {
    return unk24;
}

void C_000B6080::func_000B6080(int param_1)
{
  int func_000B58B0(...);
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x34);
  func_000B58B0();
  return;
}

void *C_000B60A0::func_000B60A0(int flags)
{
  void func_00157660();
  void func_001E891B(void *);

  unk0 = (int)&D_0027D37C;
  func_00157660();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

