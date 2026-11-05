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
    int func_00109C70(C_00109520 *src);

    int GetB(int idx) { if (idx >= count) return 0; return b[idx]; }
    int GetC(int idx) { if (idx >= count) return 0; return c[idx]; }
    int GetD(int idx) { if (idx >= count) return 0; return d[idx]; }
    int GetE(int idx) { if (idx >= count) return -1; return e[idx]; }
    void SetD(int p) { if (count >= 1) d[count - 1] = p; }
    void SetE(int p) { if (count >= 1) e[count - 1] = p; }
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

int C_001093B0::func_001093B0(int a, int b)
{
    int i;

    for (i = 0; i < f34; i++) {
        if (f38[i] == a && f358[i] == b) {
            return 1;
        }
    }
    return 0;
}

void C_00109400::func_00109400(int param_1)
{
    if (f34 >= 0) {
        f358[f34] = param_1;
    }
}

int C_00109420::func_00109420(void)
{
    int i;

    for (;;) {
        if (v[0] <= 0 || v[11] != -1) {
            return 0;
        }
        v[11] = v[1];
        v[12] = v[6];
        for (i = v[0] - 1; i > 0; i--) {
            v[i] = v[i + 1];
            v[i + 5] = v[i + 6];
        }
        v[v[0]] = -1;
        v[v[0] + 5] = 0;
        v[0]--;
        if (v[11] < 1000 || v[0] <= 0) {
            break;
        }
        v[11] = -1;
        v[12] = 0;
    }
    if (v[11] < 1000) {
        v[14 + ++v[13]] = v[11];
    }
    return 1;
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

int C_001094F0::func_001094F0(int a, int b)
{
    if (v[0] >= 0x14) {
        return 0;
    }
    v[v[0] + 0x14] = a;
    v[v[0]] = b;
    return 1;
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

int C_00109520::func_00109C70(C_00109520 *src)
{
    int i;
    int n;
    int v;

    ((C_001094B0 *)this)->func_001094B0();
    n = src->count;
    for (i = 0; i < n; i++) {
        func_00109520(i < src->count ? src->b[i] : 0, i < src->count ? src->a[i] : -1);
        func_00109550(i < src->count ? src->c[i] : 0);
        v = i < src->count ? src->d[i] : 0;
        if (count >= 1) {
            d[count - 1] = v;
        }
        v = i < src->count ? src->e[i] : -1;
        if (count >= 1) {
            e[count - 1] = v;
        }
    }
    return 1;
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

