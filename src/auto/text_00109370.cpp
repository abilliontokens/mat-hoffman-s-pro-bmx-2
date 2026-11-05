/* 17 functions from 0x00109370 to 0x00109F80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001094B0 {
    undefined4 func_001094B0(void);
};

/* fixed-size queue of 0x14 entries, parallel arrays */
struct C_00109520 {
    int count;
    int a[0x14];
    int b[0x14];
    int c[0x14];
    int d[0x14];
    int e[0x14];
    int func_00109520(int p1, int p2);
    void func_00109550(int p);
    int func_00109580(int idx);
};

struct C_00109F30 {
    char pad0[0xA40];
    int fA40;
    char padA44[4];
    int fA48;
    int fA4C;
    char padA50[4];
    int fA54;
    int fA58;
    int fA5C;
    C_001094B0 *fA60;
    C_001094B0 *fA64;
    char padA68[0x5F0];
    int f1058;
    int f105C;
    void func_00109F30(void);
};

struct C_001093A0 {
    undefined4 func_001093A0(int param_1);
};

struct C_00109390 {
    undefined4 func_00109390(int param_1);
};

struct C_00109380 {
    undefined4 func_00109380(int param_1);
};

struct C_00109370 {
    int func_00109370(void);
};

struct C_00109570 {
    int unk0;
    int func_00109570(void);
};


int C_00109370::func_00109370(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x34) + 1;
}

undefined4 C_00109380::func_00109380(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x38 + param_1 * 4);
}

undefined4 C_00109390::func_00109390(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x1c8 + param_1 * 4);
}

undefined4 C_001093A0::func_001093A0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x358 + param_1 * 4);
}

undefined4 C_001094B0::func_001094B0(void)
{
  undefined4* in_ECX = (undefined4*)this;
  undefined4 *puVar1;
  int iVar2;
  
  *in_ECX = 0;
  iVar2 = 0x14;
  puVar1 = in_ECX;
  do {
    puVar1[0x15] = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[0x29] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x51] = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  return *in_ECX;
}

int C_00109520::func_00109520(int p1, int p2) {
    if (count >= 0x14) {
        return 0;
    }
    b[count] = p1;
    a[count] = p2;
    count++;
    return 1;
}

int C_00109570::func_00109570(void) {
    return unk0;
}
