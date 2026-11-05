/* 24 functions from 0x0015C640 to 0x0015D340, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0015CD50 {
    void func_0015CD50(uint param_1);
};


struct C_0015C6C0 {
    char pad_0[8];
    int unk8;
    int unkC;
    char pad_10[4];
    int unk14;
    void func_0015C6C0(int param_1, int param_2);
};
extern float D_00287848;
extern float D_00287844;
extern float D_00287840;
extern float D_00275460;
extern float D_00275544;

void C_0015CD50::func_0015CD50(uint param_1)
{
  int in_ECX = (int)this;
  
  *(uint *)(in_ECX + 0xcc) = param_1 & 0xffffff;
  return;
}
