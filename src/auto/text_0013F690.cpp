/* 23 functions from 0x0013F690 to 0x00140680, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct C_0013FBD0 {
    void *vtbl;
    void *func_0013FBD0(int flags);
};

struct C_0013FC00 {
    void *vtbl;
    char pad0[0xc];
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void func_0013FC00();
};

extern int D_00284F70;
extern int D_00284F8C;
extern int D_002AA46C;
void *func_001E8A44(int size);

struct C_0013FC60 {
    void *vtbl;
    int f4;
    int f8;
    int f0c;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    short *f20;
    int f24;
    int f28;
    C_0013FC60() {
        vtbl = (void *)&D_00284F70;
        f4 = 0;
        f8 = 0;
        f10 = 0;
        f14 = 0;
        f18 = 0;
        f1c = 0;
        f20 = 0;
        f0c = 6;
        f28 = 0;
        f24 = 0;
    }
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
    void func_0013FC60(int count);
};

struct DXVSStreams {
    virtual void v0(int flags);
    virtual void v1(int arg, int d);
    char pad4[0xC];
    C_0013FC60 *f10;
    DXVSStreams *func_00144640();
};

/* DXMeshSurfaceData */
struct C_001402C0 {
    DXVSStreams *a;
    C_0013FC60 *b;
    void func_001402C0(int arg1, int arg2);
    void func_00140360(int n);
};

struct C_001403D0 {
    void func_001403D0(int a, int b, int c);
};

struct C_00162610 {
    void func_00162610(int a);
};

struct C_001446B0 {
    void func_001446B0(int a0, int a1, int a2);
};

struct C_0013FF50 {
    void func_0013FF50(int a0);
};

struct C_00140400_Slot {
    int f0;
    int f4;
};

struct C_00140400_Obj {
    char pad0[0x24];
    unsigned char f24;
};

struct C_00140400_Mgr {
    char pad0[0x54];
    C_00140400_Obj *f54;
};

struct C_00140400_Entry {
    int f0;
    C_00140400_Mgr *f4;
    char pad8[8];
};

struct C_00140400_Global {
    char pad0[0x14];
    C_00140400_Entry *f14;
};

struct C_00140400_Engine {
    int f0;
    int f4;
};

struct C_00140400_Child {
    C_001446B0 *obj;
    int f4;
};

extern C_00140400_Global *D_002A829C;
extern C_00140400_Engine *D_002EFDB8;

/* DXMesh */
struct C_00140390 {
    void *vtbl;
    char pad4[0x20];
    C_00140400_Slot *f24;
    char pad28[0x11];
    unsigned char f39;
    char pad3A[2];
    C_00140400_Child *f3C;
    int f40;
    int f44;
    C_0013FF50 *f48;
    int f4C;
    int f50;
    int f54;
    int f58;
    int f5C;
    C_00140390 *func_00140390(int a);
    int func_00140400(void);
    int func_00157960(void);
};

struct C_00162720 {
    void func_00162720(unsigned int a0);
};

extern float D_00284758;

struct C_00140480 {
    char pad0[0x50];
    float f50;
    float f54;
    float f58;
    float f5C;
    void func_00140480(unsigned int color);
};

struct C_0013FCF0 {
    void *vtbl;
    int f4;
    int f8;
    int f0c;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void func_0013FCF0();
};

struct C_00140660 {
    undefined4 func_00140660(byte param_1);
};

struct C_0013FA70 {
    undefined4 func_0013FA70(undefined4 param_1);
};


struct C_0013FA10 {
    void *vtbl;
    void *func_0013FA10(int a0);
};

struct C_0013F7B0 {
    void *vtbl;
};

struct C_0013FA30_Data {
    void *vtbl;
    int f4;
    int f8;
    void func_0015B150();
};

struct C_0013FA30_VT {
    virtual void vfunc0();
    virtual int vfunc1();
};

struct C_0013FA30 {
    char pad0[0x24];
    C_0013FA30_Data *f24;
    void func_0013FA30(void);
};

struct C_0013FA90 {
    void *vtbl;
    void func_0015B170();
    void *func_0013FA90(int flags);
};

C_0013F7B0 *func_0013F7B0(void)
{
  void *func_001E8A44(int size);
  extern int D_00284EB8;
  C_0013F7B0 *p;

  p = (C_0013F7B0 *)func_001E8A44(4);
  if (p != 0) {
    p->vtbl = (void *)&D_00284EB8;
    return p;
  }
  return 0;
}

void *C_0013FA10::func_0013FA10(int a0)
{
  int __stdcall func_0015B1A0(int);
  extern int D_00284EF4;

  func_0015B1A0(a0);
  vtbl = (void *)&D_00284EF4;
  return this;
}

void C_0013FA30::func_0013FA30(void)
{
  void *func_001E8A44(int size);
  extern int D_00284EE4;
  C_0013FA30_Data *p;
  C_0013FA30_Data *q;

  p = (C_0013FA30_Data *)func_001E8A44(0xc);
  if (p != 0) {
    p->func_0015B150();
    p->vtbl = (void *)&D_00284EE4;
    q = p;
  } else {
    q = 0;
  }
  f24 = q;
  ((C_0013FA30_VT *)q)->vfunc1();
}

undefined4 C_0013FA70::func_0013FA70(undefined4 param_1)
{
  int __stdcall func_0015B210(int);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015B210((int)(param_1));
  return in_ECX;
}

void *C_0013FA90::func_0013FA90(int flags)
{
  extern int D_00284EE4;
  void func_001E891B(void *);

  vtbl = (void *)&D_00284EE4;
  func_0015B170();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

void *C_0013FBD0::func_0013FBD0(int flags)
{
  extern int D_00284EF4;
  void func_0015B1C0();
  void func_001E891B(void *);

  vtbl = (void *)&D_00284EF4;
  func_0015B1C0();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

void C_0013FC00::func_0013FC00()
{
  extern int D_00284F70;
  extern int D_00284E94;
  void __stdcall func_00201100(void *);
  void func_001E891B(void *);

  vtbl = (void *)&D_00284F70;
  if (f10 != 0) {
    func_00201100(f10);
  }
  if (f14 != 0) {
    func_00201100(f14);
  }
  if (f18 != 0) {
    func_00201100(f18);
  }
  if (f1c != 0) {
    func_00201100(f1c);
  }
  if (f20 != 0) {
    func_001E891B(f20);
  }
  vtbl = (void *)&D_00284E94;
}

void C_0013FC60::func_0013FC60(int count)
{
  void *__stdcall func_001FF3C0(int size);
  void *func_001E8A44(int size);
  int n;
  int i;

  f28 = count;
  f24 = count;
  f4 = count;
  n = count * 12;
  f10 = func_001FF3C0(n);
  n = f4 * 12;
  f14 = func_001FF3C0(n);
  n = f4 * 4;
  f18 = func_001FF3C0(n);
  n = f4 * 8;
  f1c = func_001FF3C0(n);
  f8 = f24;
  n = f24 * 2;
  f20 = (short *)func_001E8A44(n);
  for (i = 0; i < f8; i++) {
    f20[i] = (short)i;
  }
  f0c = 6;
}

void C_0013FCF0::func_0013FCF0()
{
  void __stdcall func_001FEE00(int index, void *ptr, int size);
  void __stdcall func_00200B30(int a, int b, void *c);

  if (f10 != 0) {
    func_001FEE00(0, f10, 0xc);
  }
  if (f14 != 0) {
    func_001FEE00(1, f14, 0xc);
  }
  if (f18 != 0) {
    func_001FEE00(2, f18, 4);
  }
  if (f1c != 0) {
    func_001FEE00(3, f1c, 8);
  }
  func_00200B30(f0c, f8, f20);
}

void C_001402C0::func_001402C0(int arg1, int arg2)
{
    if (a != 0) {
        a->v0(1);
        a = 0;
    }
    void *m = func_001E8A44(0x14);
    a = m ? ((DXVSStreams *)m)->func_00144640() : 0;
    a->v1(arg1, D_002AA46C);
    C_0013FC60 *p = new C_0013FC60;
    b = p;
    a->f10 = p;
    b->func_0013FC60(arg2);
}

void C_001402C0::func_00140360(int n)
{
    C_0013FC60 *p = b;
    if (n % 2 == 0 && n < p->f28) {
        p->f24 = n;
        p->f4 = n;
        p->f8 = n;
    }
}

C_00140390 *C_00140390::func_00140390(int a)
{
    unsigned int *p;
    ((C_00162610 *)this)->func_00162610(a);
    vtbl = (void *)&D_00284F8C;
    p = (unsigned int *)&f50;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f3C = 0;
    f40 = 0;
    f44 = 0;
    f48 = 0;
    f4C = -1;
    return this;
}

void C_001403D0::func_001403D0(int a, int b, int c)
{
}

int C_00140390::func_00140400(void)
{
    int i;

    if (f4C == -1) {
        f4C = (D_002A829C->f14[f24->f4].f4->f54->f24 >> 3) & 1;
    }
    if (f39 & 2) {
        return 1;
    }
    f48->func_0013FF50(D_002EFDB8->f4);
    for (i = 0; i < f40; i++) {
        f3C[i].obj->func_001446B0((int)f48, 0, -1);
    }
    return func_00157960();
}

void C_00140480::func_00140480(unsigned int color)
{
    ((C_00162720 *)this)->func_00162720(color);
    f50 = (float)(color >> 16 & 0xff) * D_00284758;
    f54 = (float)(color >> 8 & 0xff) * D_00284758;
    f58 = (float)(color & 0xff) * D_00284758;
    f5C = (float)(color >> 24) * D_00284758;
}

undefined4 C_00140660::func_00140660(byte param_1)
{
  int func_0013FC00(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0013FC00();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

