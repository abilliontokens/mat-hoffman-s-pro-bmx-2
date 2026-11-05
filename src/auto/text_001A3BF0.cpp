/* 18 functions from 0x001A3BF0 to 0x001A4B60, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_00275678[];
extern char D_002A48F8[];

struct C_001A40E0 {
    undefined4 func_001A40E0(byte param_1);
};

struct Obj_001A4A20 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
};

struct Inner_001A4A20 {
    char pad0[0x28];
    Obj_001A4A20 *f28;
    Obj_001A4A20 *f2c;
};

struct C_001A4A20 {
    char pad0[0x24];
    Inner_001A4A20 *f24;
    void func_001A4A20(void);
};

struct S36_1A {
    int f[9];
};

struct S16_1A {
    int a;
    int b;
    int c;
    int d;
};

struct C_001A4590 {
    char pad0[0x2cc];
    int f2cc;
    void func_001A1FB0(int a0, int a1, S36_1A s0, S16_1A s1, S16_1A s2, int a19, int a20, int a21, int a22, int a23);
    int func_001A3DA0(int a0);
    C_001A4590 *func_001A4590(int a0, int a1, int a2, int a3, S36_1A s0, S16_1A s1, S16_1A s2, int a21, int a22, int a23, int a24, int a25);
};

/* local scratch object built on the stack (size 0x4cc) */
struct C_00168280 {
    char data[0x4cc];
    C_00168280 *func_00168280(void);
    int func_00169490(char *buf, int flag);
    void func_001691E0(void);
};

struct C_001A4210 {
    int func_001A4210(C_00168280 *obj, int a1, int a2);
};

struct C_001A4640 {
    int func_001A4640(int a1, int a2, int a3);
};

/* (0, 0, 0, 1) vector, stored z, y, x, w */
struct V4_001A46F0 {
    float x;
    float y;
    float z;
    float w;
    V4_001A46F0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    V4_001A46F0(int) { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

struct C_001A46F0 {
    V4_001A46F0 a;
    V4_001A46F0 b;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    C_001A46F0();
};

struct C_001A4420 {
    undefined4 func_001A4420(byte param_1);
};

struct C_001CFE90 {
    int func_001CFE90(int a1, int a2, int a3, int a4, int a5, int a6);
};

struct C_001A4440_Holder {
    char pad0[0xb4];
    C_001CFE90 *fb4;
};

struct C_001A4440_List {
    int count;
    void **items;
    int base;
    int capacity;
    int func_0015ACA0(int a);
};

struct C_001A4440 {
    undefined4 func_001A4440(int a1, int a2, int *a3);
};

struct C_001A4500 {
    char pad0[0x24];
    int f24;
    char pad28[0x48 - 0x28];
    int f48;
    int f4c;
    char pad50[0x1a4 - 0x50];
    C_001A4440_Holder *f1a4;
    char pad1a8[0x1c0 - 0x1a8];
    char pad1c0[0x14];
    C_001A4440_List list1;
    char pad1e4[4];
    C_001A4440_List list2;
    undefined4 func_001A4500(int a1, int *a2, int a3);
};
struct C_001A4B30 {
    void func_001A4B30(void);
};

struct C_001A3D80 {
    undefined4 func_001A3D80(byte param_1);
};

extern int D_0028B84C;
extern u32 D_002A9F40[4];
extern void *D_002EFE78;

struct V4_001A3BF0 {
    float x, y, z, w;
};

extern float D_002A9F44;
extern float D_002A9F48;
extern float D_002A9F4C;

struct C_00132EB0 {
    void func_00132EB0(int a);
};

struct SphereCollisionObject {
    void *vtbl;
    char pad4[0x4c];
    int f50;
    char pad54[0xa8 - 0x54];
    float fA8;
    float fAC;
    float fB0;
    float fB4;
    char padB8[0x100 - 0xb8];
    float f100;
    float f104;
    float f108;
    float f10C;
    float f110;
    SphereCollisionObject *func_001A4A50(int param);
    void func_001A4AE0(u32 *pos, float *radius);
};

struct Mat_001A4790 {
    char pad0[4];
    void *f4;
};

struct Shape_001A4790 {
    char pad0[0x28];
    void *f28;
    void *f2C;
};

struct VT_001A4790 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(void *a, void *b, int c, int d);
};

struct C_001A4790 {
    u32 vec0[4];
    u32 vec10[4];
    u32 f20;
    void *f24;
    void *f28;
    void *f2C;
    void *f30;
    int f34;
    int f38;
    int f3C;
    void func_001A4790(void *a1, u32 flags, u32 *a3, u32 *a4, int a5, int a6, int a7);
};


undefined4 C_001A3D80::func_001A3D80(byte param_1)
{
  int func_001A2620(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001A2620();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_001A40E0::func_001A40E0(byte param_1)
{
  int func_001A2CF0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_001A2CF0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_001A4420::func_001A4420(byte param_1)
{
  int func_001A3210(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_001A3210();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_001A4440::func_001A4440(int a1, int a2, int *a3)
{
  int func_001E8A44(...);
  int in_ECX = (int)this;
  C_001A4440_List *list;
  int *piVar2;
  int iVar1;
  int iVar3;

  if (a3 != 0) {
    *(int *)(in_ECX + 0x48) = a3[3];
    *(int *)(in_ECX + 0x4c) = a3[4];
  }
  iVar3 = in_ECX + 0x3c;
  iVar1 = ((C_001A4440_Holder *)*(int *)(in_ECX + 0x1a4))->fb4->func_001CFE90(*(int *)(in_ECX + 0x24), a2, 9, 1, iVar3, 0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)func_001E8A44(0x10);
  piVar2[1] = a1;
  *piVar2 = iVar1;
  if (a3 != 0) {
    piVar2[2] = a3[3];
    piVar2[3] = a3[4];
  } else {
    piVar2[2] = 0;
    piVar2[3] = 0;
  }
  list = (C_001A4440_List *)(in_ECX + 0x1c0);
  if (list->count >= list->capacity) {
    if (!list->func_0015ACA0(list->base + list->count)) {
      return 1;
    }
  }
  list->items[list->count] = piVar2;
  list->count++;
  return 1;
}

undefined4 C_001A4500::func_001A4500(int a1, int *a2, int a3)
{
  int in_ECX = (int)this;
  C_001A4440_List *list;
  int iVar1;

  *(int *)(in_ECX + 0x48) = a2[9];
  *(int *)(in_ECX + 0x4c) = a2[10];
  iVar1 = ((C_001A4440_Holder *)*(int *)(in_ECX + 0x1a4))->fb4->func_001CFE90(*(int *)(in_ECX + 0x24), a1, 0x89, 1, in_ECX + 0x3c, 0);
  if (iVar1 == 0) {
    return 0;
  }
  *a2 = iVar1;
  if (a1 != 0) {
    list = (C_001A4440_List *)(in_ECX + 0x1d4);
  } else {
    list = (C_001A4440_List *)(in_ECX + 0x1e8);
  }
  if (list->count >= list->capacity) {
    if (!list->func_0015ACA0(list->base + list->count)) {
      return 1;
    }
  }
  list->items[list->count] = a2;
  list->count++;
  return 1;
}

C_001A4590 *C_001A4590::func_001A4590(int a0, int a1, int a2, int a3, S36_1A s0, S16_1A s1, S16_1A s2, int a21, int a22, int a23, int a24, int a25)
{
    func_001A1FB0(a2, a3, s0, s1, s2, a21, a22, a23, a24, a25);
    f2cc = a1;
    return func_001A3DA0(a0) ? this : 0;
}

int C_001A4640::func_001A4640(int a1, int a2, int a3)
{
    char buf[0x104];
    C_00168280 obj;
    int r;

    obj.func_00168280();
    func_001ADCC0(buf, 0x104, D_00275678, D_002A48F8, a1);
    if (obj.func_00169490(buf, 0) == 0) {
        obj.func_001691E0();
        return 0;
    }
    r = ((C_001A4210 *)this)->func_001A4210(&obj, a2, a3);
    obj.func_001691E0();
    return r;
}

void C_001A4790::func_001A4790(void *a1, u32 flags, u32 *a3, u32 *a4, int a5, int a6, int a7)
{
    V4_001A3BF0 *d;

    f3C = a7;
    if (a1 == 0) {
        a1 = D_002EFE78;
    }
    f2C = a1;
    f30 = a1;
    d = (V4_001A3BF0 *)&vec0[0];
    *d = *(V4_001A3BF0 *)a3;
    d = (V4_001A3BF0 *)&vec10[0];
    *d = *(V4_001A3BF0 *)a4;
    f34 = a5;
    f38 = a6;
    f20 = flags;
    f24 = ((Mat_001A4790 *)a1)->f4;
    f28 = 0;
    if (flags & 1) {
        f28 = ((Shape_001A4790 *)f24)->f28;
    }
    if (f28 == 0 && (flags & 2)) {
        f28 = ((Shape_001A4790 *)f24)->f2C;
    }
    ((VT_001A4790 *)f28)->v11(this, d, a5, a6);
}

void C_001A4A20::func_001A4A20(void)
{
    if (f24->f28 != 0) {
        f24->f28->v14();
    }
    if (f24->f2c != 0 && f24->f2c != f24->f28) {
        f24->f2c->v14();
    }
}

SphereCollisionObject *SphereCollisionObject::func_001A4A50(int param)
{
    u32 *p;

    ((C_00132EB0 *)this)->func_00132EB0(param);
    vtbl = &D_0028B84C;
    p = (u32 *)&fA8;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    fA8 = *(float *)&D_002A9F40[0];
    fAC = D_002A9F44;
    fB0 = D_002A9F48;
    fB4 = D_002A9F4C;
    f100 = 0;
    f104 = 0;
    f108 = 0;
    f10C = 0;
    f110 = 0;
    f50 = 5;
    return this;
}

void SphereCollisionObject::func_001A4AE0(u32 *pos, float *radius)
{
    if (pos != 0) {
        V4_001A3BF0 *p = (V4_001A3BF0 *)&fA8;

        *p = *(V4_001A3BF0 *)pos;
    }
    if (radius != 0) {
        float r = *radius;

        f100 = r;
        f104 = r * r;
    }
}

C_001A46F0::C_001A46F0()
{
    V4_001A46F0 t;

    t.x = -3.402823466e+38f;
    t.y = -3.402823466e+38f;
    t.z = -3.402823466e+38f;
    a = t;
    V4_001A46F0 u(0);
    b = u;
    f20 = 0.0f;
    f24 = 0.0f;
    f28 = 0.0f;
    f34 = 0.0f;
    f38 = 0.0f;
}

void C_001A4B30::func_001A4B30(void)
{
  int func_00133D80(...);
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xa7) = *(byte *)(in_ECX + 0xa7) & 0xdf;
  func_00133D80(*(undefined4 *)(in_ECX + 0x54));
  *(undefined4 *)(*(int *)(in_ECX + 0x54) + 4) = 0;
  return;
}

