/* 24 functions from 0x0015C640 to 0x0015D340, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0015CB40 {
    char pad0[0x8];
    int unk8;
    int unkC;
    char pad10[0x4];
    int unk14;
    void func_0015CB40(int a0, int a1);
};

struct S_0015CD70_Vec4 {
    int v0;
    int v1;
    int v2;
    int v3;
};

struct C_0015CD70 {
    char pad0[0x24];
    S_0015CD70_Vec4 f24;
    void func_0015CD70(S_0015CD70_Vec4 *p);
};

struct S_0015CA10_Key {
    float t;
    u16 q[4];
};

struct Quat_0015CA10 {
    float w, x, y, z;
};

struct C_0015CA10 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int n);
    int f4;
    int f8;
    int fC;
    int f10;
    S_0015CA10_Key *f14;
    void func_0015CA10(Quat_0015CA10 *q, float t);
};

void func_0001B250(void *out, Quat_0015CA10 *q);
int func_0015CAB0(S_0015CA10_Key *arr, int n, float t);

struct C_0015CFE0 {
    void func_0015CFE0(undefined4 param_1);
};

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
extern float D_00275998;
void *func_001E8A44(int size);

struct C_0015D070 {
    char pad0[0x8c];
    float f8c;
    float f90;
    void func_0015D070(float a0, float a1);
};

struct S_0015CF60_Cell {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
};

struct C_0015CF60 {
    char pad0[0x28];
    int f28;
    char pad2c[0x4];
    float f30;
    float f34;
    float f38;
    float f3c;
    char pad40[0x10];
    float f50;
    float f54;
    float f58;
    float f5c;
    char pad60[0x6c];
    S_0015CF60_Cell *fcc;
    unsigned int func_0015CF60(void);
    void func_0015D000(int a0, int a1, int a2);
};

int func_0015CAB0(float *base, int hi, float v);
extern float D_00287848;
extern float D_00287844;
extern float D_00287840;
extern float D_00275460;
extern float D_00275544;

int func_0015C640(float *param_1, int param_2, float param_3)
{
    int iVar1;
    if (param_2 != 0) {
        if (param_3 >= param_1[param_2 * 2 - 2]) {
            return param_2;
        }
        if (param_3 >= *param_1) {
            int iVar2;
            iVar2 = 0;
            do {
                while (iVar1 = (param_2 + iVar2) >> 1, param_3 >= param_1[iVar1 * 2]) {
                    iVar2 = iVar1;
                    if (param_3 < param_1[iVar1 * 2 + 2]) {
                        return iVar1 + 1;
                    }
                }
                param_2 = iVar1;
            } while (param_3 < param_1[iVar1 * 2 - 2]);
            return iVar1;
        }
    }
    return 0;
}

void C_0015C6C0::func_0015C6C0(int param_1, int param_2)
{
    int func_0015C6F0(...);
    func_0015C6F0(unk14, param_1, unkC, unk8, param_2);
}

float func_0015C900(float param_1)
{
    float lVar1;
    lVar1 = param_1 * param_1;
    return (((D_00287844 - D_00287848 * lVar1) * lVar1 - D_00287840) * lVar1 + D_00275460) * param_1;
}

void func_0015C930(float *param_1, int param_2)
{
    int func_0001B1D0(...);
    float sum;
    float locals[4];
    func_0001B1D0(param_2, locals);
    sum = locals[0] * param_1[0];
    sum = sum + locals[1] * param_1[1];
    sum = sum + locals[3] * param_1[3];
    sum = sum + locals[2] * param_1[2];
    if (sum < D_00275544) {
        param_1[1] = -param_1[1];
        param_1[2] = -param_1[2];
        param_1[3] = -param_1[3];
        *param_1 = -*param_1;
    }
}

int func_0015C9A0(float *base, float v, int n, float **lo, float **up, float *t)
{
    int i = func_0015C640(base, n, v);
    if (i != n) {
        float *a = &base[i * 2];
        float *b = &base[(i - 1) * 2];
        *lo = b;
        *up = a;
        *t = (v - b[0]) / (a[0] - b[0]);
        return 1;
    }
    *lo = &base[(n - 2) * 2];
    float *p = &base[(n - 1) * 2];
    *up = p;
    *t = (v - p[0]) / (base[(i - 1) * 2] - base[(i - 2) * 2]);
    return 0;
}

void C_0015CA10::func_0015CA10(Quat_0015CA10 *q, float t)
{
    S_0015CA10_Key key;
    S_0015CA10_Key *arr;
    int n;
    int pos;
    int i;

    if (fC >= f10) {
        v6(f10 + 1);
    }
    func_0001B250(key.q, q);
    key.t = t;
    n = fC;
    arr = f14;
    pos = func_0015CAB0(arr, n, t);
    for (i = n; i > pos; i++) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    fC++;
}

int func_0015CAB0(S_0015CA10_Key *arr, int n, float t)
{
    int mid;
    int lo;

    if (n != 0) {
        if (t >= arr[n - 1].t) {
            return n;
        }
        if (t >= arr[0].t) {
            lo = 0;
            do {
                while (mid = (n + lo) >> 1, t >= arr[mid].t) {
                    lo = mid;
                    if (t < arr[mid + 1].t) {
                        return mid + 1;
                    }
                }
                n = mid;
            } while (t < arr[mid - 1].t);
            return mid;
        }
    }
    return 0;
}

void C_0015CB40::func_0015CB40(int a0, int a1) {
    int func_0015CB70(...);
    func_0015CB70(unk14, a0, unkC, unk8, a1);
}

void func_0015CC50(float *param_1, int param_2)
{
    int func_0001B2E0(...);
    float sum;
    float locals[4];
    func_0001B2E0(param_2, locals);
    sum = locals[0] * param_1[0];
    sum = sum + locals[1] * param_1[1];
    sum = sum + locals[3] * param_1[3];
    sum = sum + locals[2] * param_1[2];
    if (sum < D_00275544) {
        param_1[1] = -param_1[1];
        param_1[2] = -param_1[2];
        param_1[3] = -param_1[3];
        *param_1 = -*param_1;
    }
}

int func_0015CCC0(float *base, float v, int hi, float **lo, float **up, float *t)
{
    int i = func_0015CAB0(base, hi, v);
    if (i != hi) {
        float *a = &base[i * 3];
        float *b = &base[(i - 1) * 3];
        *lo = b;
        *up = a;
        *t = (v - b[0]) / (a[0] - b[0]);
        return 1;
    }
    *lo = &base[(hi - 2) * 3];
    float *p = &base[(hi - 1) * 3];
    *up = p;
    *t = (v - p[0]) / (base[(i - 1) * 3] - base[(i - 2) * 3]);
    return 0;
}

void C_0015CD50::func_0015CD50(uint param_1)
{
  int in_ECX = (int)this;
  
  *(uint *)(in_ECX + 0xcc) = param_1 & 0xffffff;
  return;
}

void C_0015CD70::func_0015CD70(S_0015CD70_Vec4 *p)
{
    f24 = *p;
}

unsigned int C_0015CF60::func_0015CF60(void)
{
    int a, b, c, d;
    if (f28 == 4) {
        a = (int)f50;
        b = (int)f5c;
        c = (int)f54;
        d = (int)f58;
    } else {
        a = (int)f30;
        b = (int)f3c;
        c = (int)f34;
        d = (int)f38;
    }
    return ((((a & 0xff) | (b << 8)) << 8 | (c & 0xff)) << 8) | (d & 0xff);
}

void C_0015CFE0::func_0015CFE0(undefined4 param_1)
{
  int __stdcall func_001577A0(int, int);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0xb8) == 0) {
    *(undefined4 *)(in_ECX + 0xb8) = param_1;
    func_001577A0((int)(param_1), (int)(0));
  }
  return;
}

void C_0015CF60::func_0015D000(int a0, int a1, int a2)
{
    if (fcc == 0) {
        fcc = (S_0015CF60_Cell *)func_001E8A44(0x14);
    }
    fcc->f0 = a0;
    fcc->f8 = a1;
    fcc->f10 = a2;
    fcc->fc = 0;
    fcc->f4 = func_0015CF60();
}

void C_0015D070::func_0015D070(float a0, float a1)
{
    f8c = D_00275998 * a0;
    f90 = D_00275998 * a1;
}

