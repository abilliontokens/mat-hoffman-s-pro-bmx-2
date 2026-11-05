/* 16 functions from 0x00097050 to 0x00097FD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000976A0 {
    undefined4 func_000976A0(void);
};

struct C_00097700 {
    bool func_00097700(void);
};

struct C_000976C0 {
    int func_000976C0(void);
};

struct C_00097710 {
    undefined4 func_00097710(int param_1);
};

struct C_00097740 {
    undefined4 func_00097740(int param_1);
};

typedef int (*func_000979C0_hash_t)(undefined4);
typedef int (*func_000979C0_eq_t)(undefined4, undefined4);

struct C_000979C0 {
    int func_000979C0(undefined4 key, undefined4 *out);
};


undefined4 C_000976A0::func_000976A0(void)
{
  int in_ECX = (int)this;
  
  if (*(int *)(*(int *)(in_ECX + 0x198) + 0x1c8) != 0) {
    return *(undefined4 *)(in_ECX + 0x1c);
  }
  return *(undefined4 *)(in_ECX + 0x18);
}

bool C_00097700::func_00097700(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x18) == 3;
}
