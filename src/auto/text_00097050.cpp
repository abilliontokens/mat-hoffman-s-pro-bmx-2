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

struct C_00097C60 {
    undefined4 func_00097C60(void);
};

typedef int (*func_000979C0_hash_t)(undefined4);
typedef int (*func_000979C0_eq_t)(undefined4, undefined4);

struct C_000979C0 {
    int func_000979C0(undefined4 key, undefined4 *out);
};

struct C_00097C20 {
    int func_00097C20(void);
};


undefined4 C_000976A0::func_000976A0(void)
{
  int in_ECX = (int)this;
  
  if (*(int *)(*(int *)(in_ECX + 0x198) + 0x1c8) != 0) {
    return *(undefined4 *)(in_ECX + 0x1c);
  }
  return *(undefined4 *)(in_ECX + 0x18);
}

int C_000976C0::func_000976C0(void)
{
  int in_ECX = (int)this;
  int state = *(int *)(in_ECX + 0x18);

  switch (state) {
  case 1:
    *(int *)(in_ECX + 0x18) = 2;
    return 1;
  case 2:
    *(int *)(in_ECX + 0x18) = 3;
    return 0;
  case 0:
    *(int *)(in_ECX + 0x18) = 1;
  }
  return 1;
}

bool C_00097700::func_00097700(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x18) == 3;
}

undefined4 C_00097710::func_00097710(int param_1)
{
  int in_ECX = (int)this;

  switch (param_1) {
  case 0:
    return *(undefined4 *)(in_ECX + 0xc);
  case 1:
    return *(undefined4 *)(in_ECX + 0x10);
  case 2:
    return *(undefined4 *)(in_ECX + 0x14);
  }
  return 0;
}

undefined4 C_00097740::func_00097740(int param_1)
{
  undefined4 *in_ECX = (undefined4 *)this;

  switch (param_1) {
  case 0:
    return in_ECX[0];
  case 1:
    return in_ECX[1];
  case 2:
    return in_ECX[2];
  }
  return 0;
}

int C_000979C0::func_000979C0(undefined4 key, undefined4 *out)
{
  int in_ECX = (int)this;
  int h;
  int *e;

  h = (*(func_000979C0_hash_t *)(in_ECX + 0x8))(key);
  e = *(int **)(*(int *)in_ECX + ((h < 0 ? -h : h) % *(int *)(in_ECX + 0x4)) * 4);
  while (e != (int *)0x0) {
    if (e[1] == h && (*(func_000979C0_eq_t *)(in_ECX + 0xc))(e[2], key) != 0) {
      *out = e[0];
      return 1;
    }
    e = (int *)e[3];
  }
  return 0;
}

int C_00097C20::func_00097C20(void)
{
  int in_ECX = (int)this;
  int v;

  if (*(int *)(*(int *)(in_ECX + 0x198) + 0x1c8) != 0) {
    v = *(int *)(in_ECX + 0x1c);
  } else {
    v = *(int *)(in_ECX + 0x18);
  }
  switch (v) {
  case 0:
    return *(int *)(in_ECX + 0);
  case 1:
    return *(int *)(in_ECX + 4);
  case 2:
    return *(int *)(in_ECX + 8);
  }
  return 0;
}

undefined4 C_00097C60::func_00097C60(void)
{
  int in_ECX = (int)this;
  int iVar1;

  if (*(int *)(*(int *)(in_ECX + 0x198) + 0x1c8) != 0) {
    iVar1 = *(int *)(in_ECX + 0x1c);
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x18);
  }
  switch (iVar1) {
  case 0:
    return *(undefined4 *)(in_ECX + 0xc);
  case 1:
    return *(undefined4 *)(in_ECX + 0x10);
  case 2:
    return *(undefined4 *)(in_ECX + 0x14);
  }
  return 0;
}

