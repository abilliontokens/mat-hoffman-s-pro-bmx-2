/* 9 functions from 0x00144BF0 to 0x001458E0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00145290 {
    int func_00145290(int param_1);
};

void *func_001E8A44(int size);

#pragma intrinsic(memcpy)
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);

extern int D_00285CB0;

struct C_001AFB60 {
    void func_001AFB60(void *a, void *b, void *c);
};

struct C_00144CF0 {
    void func_00144CF0(void);
};

struct C_00144E70 {
    void func_00144E70(void);
};

struct C_00145230 {
    void func_001AFF50(void);
    C_00145230 *func_00145230(void);
};


void C_00144CF0::func_00144CF0(void)
{
  int in_ECX = (int)this;
  int *p;
  int n;

  p = (int *)(in_ECX + 0xc);
  n = 4;
  do {
    if (*p != 0) {
      int base = *(int *)(in_ECX + 0x20);
      ((C_001AFB60 *)*p)->func_001AFB60((void *)(base + 4), (void *)(base + 0x18), (void *)(base + 0x2c));
    }
    p++;
  } while (--n);
}

void C_00144E70::func_00144E70(void)
{
  int in_ECX = (int)this;
  int src = *(int *)(in_ECX + 8);
  int n1 = *(int *)(src + 0x38);
  int *dst1 = (int *)func_001E8A44(n1 * 0xc);
  *(int **)(in_ECX + 0x10) = dst1;
  memcpy(dst1, *(void **)(src + 0x2c), n1 * 0xc);
  int n2 = *(int *)(src + 0x3c);
  int *dst2 = (int *)func_001E8A44(n2 * 8);
  *(int **)(in_ECX + 0x14) = dst2;
  memcpy(dst2, *(void **)(src + 0x30), n2 * 8);
}

int C_00145290::func_00145290(int param_1)
{
  int in_ECX = (int)this;
  
  return (int)*(short *)(in_ECX + 0x18 + param_1 * 2);
}
