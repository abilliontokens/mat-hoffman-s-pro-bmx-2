/* 18 functions from 0x00050D70 to 0x00051CF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00051180 {
    void func_00051180(float param_1);
};

struct C_00051160 {
    void func_00051160(float param_1);
};

struct C_00051140 {
    void func_00051140(float param_1);
};

struct C_00051120 {
    void func_00051120(short param_1);
};


void C_00051120::func_00051120(short param_1)
{
  int in_ECX = (int)this;
  
  *(uint *)(in_ECX + 0x38) = (int)param_1 << 0x18 | *(uint *)(in_ECX + 0x38) & 0xffffff;
  *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 2;
  return;
}

void C_00051140::func_00051140(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x28) != param_1) {
    *(float *)(in_ECX + 0x28) = param_1;
    *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 1;
  }
  return;
}

void C_00051160::func_00051160(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x2c) != param_1) {
    *(float *)(in_ECX + 0x2c) = param_1;
    *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 1;
  }
  return;
}

void C_00051180::func_00051180(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x34) != param_1) {
    *(float *)(in_ECX + 0x34) = param_1;
    *(byte *)(in_ECX + 0x58) = *(byte *)(in_ECX + 0x58) | 1;
  }
  return;
}

