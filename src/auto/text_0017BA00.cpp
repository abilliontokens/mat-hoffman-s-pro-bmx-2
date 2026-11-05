/* 11 functions from 0x0017BA00 to 0x0017C590, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_0017BB50 {
    void func_0017BB50(undefined4 *param_1);
};

struct C_0017BB10 {
    void func_0017BB10(undefined4 *param_1);
};


void C_0017BB10::func_0017BB10(undefined4 *param_1)
{
  undefined4* in_ECX = (undefined4*)this;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  return;
}

void C_0017BB50::func_0017BB50(undefined4 *param_1)
{
  undefined4* in_ECX = (undefined4*)this;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[4];
  in_ECX[3] = param_1[5];
  in_ECX[4] = param_1[8];
  in_ECX[5] = param_1[9];
  in_ECX[6] = param_1[0xc];
  in_ECX[7] = param_1[0xd];
  return;
}

