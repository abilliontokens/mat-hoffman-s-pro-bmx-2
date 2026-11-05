/* 33 functions from 0x001B19C0 to 0x001B2910, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001B2270 {
    void func_001B2270(undefined4 param_1);
};

struct C_001B1BF0 {
    void func_001B1BF0(float param_1);
};

struct C_001B2350 {
    undefined4 func_001B2350(void);
};

struct C_001B1C10 {
    void func_001B1C10(int param_1);
};

struct C_001B22E0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_001B22E0* func_001B22E0(void);
};

struct C_001B1B20 {
    int func_001B1B20(void);
};

struct C_001B2340 {
    char pad0[0x4];
    int unk4;
    int unk8;
    void func_001B2340(void);
};

struct C_001B2330 {
    int unk0;
    char pad4[0x4];
    int unk8;
    void func_001B2330(void);
};

struct C_001D6410 {
    void func_001D6410(void);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_001B22A0 {
    undefined4 *func_001B22A0(byte param_1);
};

struct C_001B1B30_Obj {
    char pad0[0x34];
    float f34;
    float getF34() { return f34; }
};

struct C_001B1B30 {
    char pad0[0x24];
    C_001B1B30_Obj *f24;
    char pad28[0x70];
    float f98;
    float f9C;
    int fA0;
    int fA4;
    char padA8[0x18];
    int fC0;
    void setTarget(float v, int t)
    {
        fA4 = t;
        f9C = v;
        fA0 = 0;
    }
    void func_001B1B30(float param_1, undefined4 param_2);
};

struct C_001B1B80 {
    void func_001B1B80(undefined4 param_1, float param_2, float param_3,
                       undefined4 param_4, undefined4 param_5, undefined4 param_6);
};

struct C_001B22F0_Node {
    char pad0[0x98];
    C_001B22F0_Node *next;
    int f9c;
};

struct C_001B22F0 {
    int f0;
    char pad4[4];
    C_001B22F0_Node *f8;
    void func_001B22F0(void);
};


struct C_001B2370_Node {
    char pad0[0x98];
    C_001B2370_Node *next;
    C_001B2370_Node *prev;
};

struct C_001B2370 {
    C_001B2370_Node *head;
    C_001B2370_Node *tail;
    char pad8[0x4];
    int count;
    void func_001B2370(C_001B2370_Node *node);
};

struct C_001B2690_Entry {
    char pad0[0x8];
    int data;
    int refCount;
};

struct C_001B2690 {
    char pad0[0x14];
    C_001B2690_Entry *f14;
    void func_001AC750(int index, int data);
    void func_001B2690(int index, int data);
};

struct C_001B2700 {
    void *vtbl;
    void func_001AC830();
    void *func_001B2700(unsigned int flags);
};

struct C_001B19C0_Vec {
    float x;
    float y;
    float z;
    float w;
};

void func_001E8390(void *p);
void *func_001E8A44(int size);
void *func_001E8AA5(unsigned int size);
extern int D_0028C87C;

struct C_00157600 {
    void func_00157600(int a);
};

struct C_001D3F50 {
    void func_001D3F50(void);
};

struct C_00161580 {
    C_00161580 *func_00161580(void);
};

struct C_001B23D0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

/* TextureMapManager */
struct C_001B23D0 {
    void *vtbl;
    char pad4[0x20];
    C_001B23D0_Obj *f24;
    void *f28;
    void *f2c;
    unsigned int f30;
    int f34;
    C_001B23D0 *func_001B23D0(void);
    void func_001B2400(void);
    void func_001B2450(void);
    void *func_001B2480(unsigned int size);
};

struct C_001B19C0 {
    char pad0[0x2C];
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
    float f40;
    char pad44[0x8];
    C_001B19C0_Vec f4C;
    int f5C;
    float f60;
    char pad64[0x5C];
    int fC0;
    void func_001B19C0(float a1, float a2, float a3);
    void func_001B1A30(float a1, float a2, float a3);
};

struct C_001B1AB0 {
    char pad0[0x24];
    char *f24;
    char pad28[0x5C];
    int f84;
    int f88;
    int f8C;
    int f90;
    int f94;
    char pad98[0x28];
    int fC0;
    void func_001B1AB0(int a1, int a2);
};

void C_001B19C0::func_001B19C0(float a1, float a2, float a3)
{
    if (fC0 != 0) {
        return;
    }
    f60 = a3;
    f4C.x = a1;
    f4C.y = a2;
    f3C = f2C;
    f40 = f30;
    f5C = 0;
    if (a3 == 0.0f) {
        *(C_001B19C0_Vec *)&f2C = f4C;
    }
}

void C_001B19C0::func_001B1A30(float a1, float a2, float a3)
{
    if (fC0 != 0) {
        return;
    }
    f60 = a3;
    f5C = 0;
    *(int *)&f4C.x = (int)a1;
    *(int *)&f4C.y = (int)a2;
    f3C = f2C;
    f40 = f30;
    if (a3 == 0.0f) {
        *(C_001B19C0_Vec *)&f2C = f4C;
    }
}

void C_001B1AB0::func_001B1AB0(int a1, int a2)
{
    if (fC0 != 0) {
        return;
    }
    f94 = a2;
    f90 = 0;
    f88 = a1;
    if (a1 > 0xff) {
        f88 = 0xff;
        f84 = *(short *)(f24 + 0x4c);
        return;
    }
    if (a1 < 0) {
        f88 = 0;
    }
    f84 = *(short *)(f24 + 0x4c);
}

int C_001B1B20::func_001B1B20(void)
{
  int in_ECX = (int)this;
  
  return (int)*(short *)(*(int *)(in_ECX + 0x24) + 0x4c);
}

void C_001B1B30::func_001B1B30(float param_1, undefined4 param_2)
{
    if (fC0 == 0) {
        setTarget(param_1, param_2);
        if (param_1 < 0.0f) {
            f9C = 0;
        }
        f98 = f24->getF34();
    }
}

void C_001B1B80::func_001B1B80(undefined4 param_1, float param_2, float param_3,
                               undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  int in_ECX = (int)this;
  int iVar1;

  if (*(int *)(in_ECX + 0xc0) == 0) {
    *(undefined4 *)(in_ECX + 0xa8) = param_1;
    iVar1 = *(int *)(in_ECX + 0x24);
    *(undefined4 *)(in_ECX + 0xb4) = param_6;
    *(undefined4 *)(in_ECX + 0xb0) = 0;
    if (*(float *)(iVar1 + 0x24) != param_2 || *(float *)(iVar1 + 0x28) != param_3) {
      *(float *)(iVar1 + 0x24) = param_2;
      *(float *)(iVar1 + 0x28) = param_3;
    }
  }
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x38);
  return;
}

void C_001B1BF0::func_001B1BF0(float param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if (*(float *)(iVar1 + 0x3c) != param_1) {
    *(float *)(iVar1 + 0x3c) = param_1;
    *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) | 4;
  }
  return;
}

void C_001B1C10::func_001B1C10(int param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if (*(int *)(iVar1 + 0x44) != param_1) {
    *(int *)(iVar1 + 0x44) = param_1;
    *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) | 6;
  }
  return;
}

void C_001B2270::func_001B2270(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0xc0) == 0) {
    *(undefined4 *)(in_ECX + 0x174) = 1;
    *(undefined4 *)(in_ECX + 0x164) = param_1;
  }
  return;
}

undefined4 *C_001B22A0::func_001B22A0(byte param_1)
{
  extern int D_0028C7EC;
  void func_001E891B(void *);
  undefined4 *in_ECX = (undefined4 *)this;
  C_001D6410 *p = (C_001D6410 *)in_ECX[9];

  *in_ECX = (undefined4)&D_0028C7EC;
  if (p != 0) {
    p->func_001D6410();
    func_001E891B(p);
  }
  ((C_00157660 *)in_ECX)->func_00157660();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001B22E0* C_001B22E0::func_001B22E0(void) {
    unk8 = 0;
    unk4 = 0;
    unk0 = 0;
    unkC = 0;
    return this;
}

void C_001B22F0::func_001B22F0(void)
{
  int *in_ECX = (int *)this;
  int iVar1;

  iVar1 = *in_ECX;
  in_ECX[2] = iVar1;
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[2] + 0x98);
    *(undefined4 *)(in_ECX[2] + 0x98) = 0;
    *(undefined4 *)(in_ECX[2] + 0x9c) = 0;
    in_ECX[2] = iVar1;
  }
  return;
}

void C_001B2330::func_001B2330(void) {
    unk8 = unk0;
}

void C_001B2340::func_001B2340(void) {
    unk8 = unk4;
}

undefined4 C_001B2350::func_001B2350(void)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 8) != 0) {
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x98);
  }
  return *(undefined4 *)(in_ECX + 8);
}

C_001B23D0 *C_001B23D0::func_001B23D0(void)
{
    ((C_00157600 *)this)->func_00157600(1);
    f24 = 0;
    f28 = 0;
    f30 = 0;
    f2c = 0;
    f34 = 0;
    vtbl = &D_0028C87C;
    return this;
}

void C_001B23D0::func_001B2400(void)
{
    vtbl = &D_0028C87C;
    if (f24 != 0) {
        f24->v2();
        f24 = 0;
    }
    if (f28 != 0) {
        func_001E8390(f28);
    }
    if (f2c != 0) {
        func_001E8390(f2c);
    }
    ((C_00157660 *)this)->func_00157660();
}

void C_001B23D0::func_001B2450(void)
{
    C_00161580 *p = (C_00161580 *)func_001E8A44(0x1c);

    f24 = p ? (C_001B23D0_Obj *)p->func_00161580() : 0;
    ((C_001D3F50 *)this)->func_001D3F50();
}

void *C_001B23D0::func_001B2480(unsigned int size)
{
    if (f30 < size) {
        if (f28 != 0) {
            func_001E8390(f28);
            f28 = 0;
        }
        f28 = func_001E8AA5(size);
        if (f28 == 0) {
            return 0;
        }
        f30 = size;
    }
    return f28;
}

void C_001B2690::func_001B2690(int index, int data)
{
    func_001AC750(index, data | f14[index].data);
}

void *C_001B2700::func_001B2700(unsigned int flags)
{
    extern int D_0028C90C;
    void func_001B25E0();
    void func_001E891B(void *);
    vtbl = (void *)&D_0028C90C;
    func_001B25E0();
    func_001AC830();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

