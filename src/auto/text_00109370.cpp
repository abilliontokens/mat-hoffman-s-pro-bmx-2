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

struct C_00109400 {
    char pad0[0x34];
    int f34;
    char pad38[0x320];
    int f358[1];
    void func_00109400(int param_1);
};

struct C_001093B0 {
    char pad0[0x34];
    int f34;
    int f38[200];
    int f358[200];
    int func_001093B0(int a, int b);
};

struct C_00109420 {
    int v[0x100];
    int func_00109420(void);
};

struct C_001094F0 {
    int v[0x55];
    int func_001094F0(int a, int b);
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

void C_00109400::func_00109400(int param_1)
{
    if (f34 >= 0) {
        f358[f34] = param_1;
    }
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

void C_00109520::func_00109550(int p) {
    if (count < 0x14 && count >= 1) {
        c[count - 1] = p;
    }
}

int C_00109570::func_00109570(void) {
    return unk0;
}

int C_00109520::func_00109580(int idx) {
    if (idx >= count) {
        return -1;
    }
    return a[idx];
}

void C_00109F30::func_00109F30(void) {
    fA40 = 0;
    fA48 = 0;
    fA4C = 0;
    fA54 = 0;
    f1058 = 0;
    f105C = 0;
    fA58 = 0;
    fA5C = 0;
    fA60->func_001094B0();
    fA64->func_001094B0();
}

