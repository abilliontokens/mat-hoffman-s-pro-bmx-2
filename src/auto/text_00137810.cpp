/* 11 functions from 0x00137810 to 0x00138800, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_001387E0 {
    undefined4 func_001387E0(byte param_1);
};

struct C_00138790 {
    undefined4 func_00138790(byte param_1);
};

struct C_001387D0 {
    C_001387D0* func_001387D0(int a0);
};

extern int D_002849BC;
extern int D_00284924;
extern int D_002A67D8;
extern int D_002BDE8C;

struct CubeTextureMap {
    void *vtbl;
    void func_001D6AD0(int a);
    void *func_001387B0(int a);
};

struct DrawableCubeVirt {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_0014A540 {
    void func_0014A540(void);
};

struct C_00012140 {
    void func_00012140(void);
};

struct C_00193500 {
    void func_00193500(void);
};

extern void *D_002BDE9C;
extern int D_002BDEA0;
void func_001E891B(void *p);
void func_001E8390(void *p);
void __stdcall func_00201100(void *p);

struct DrawableCube {
    void *vtbl;
    char pad4[0x23];
    u8 f27;
    int f28;
    DrawableCubeVirt **f2c;
    int f30;
    int f34;
    int f38;
    void *f3c;
    char pad40[0x780];
    DrawableCubeVirt *f7c0;
    C_00193500 *f7c4;
    int f7c8;
    int f7cc;
    C_0014A540 *f7d0;
    C_00012140 *f7d4;
    void *f7d8;
    void func_00136FE0();
    void func_00137810();
    void func_00157660();
    void func_00192370(int a);
    void func_00138390(void);
    int func_001382B0(void);
    DrawableCube *func_00138330(int a);
};


int DrawableCube::func_001382B0(void)
{
    if (D_002A67D8 != 0) {
        if (D_002BDE8C != 0)
            func_00136FE0();
        func_00137810();
    }
    return 1;
}

DrawableCube *DrawableCube::func_00138330(int a)
{
    func_00192370(a);
    f27 |= 3;
    f28 = 0;
    f2c = 0;
    f30 = 0;
    f34 = 0;
    f3c = 0;
    f38 = 0;
    f7c8 = 0;
    f7c0 = 0;
    f7c4 = 0;
    f7d0 = 0;
    f7d4 = 0;
    f7d8 = 0;
    vtbl = (void *)&D_00284924;
    return this;
}

void DrawableCube::func_00138390(void)
{
    int i;
    C_0014A540 *p0;
    C_00012140 *p1;
    C_00193500 *p2;
    DrawableCubeVirt *v;

    vtbl = (void *)&D_00284924;
    p0 = f7d0;
    if (p0) {
        p0->func_0014A540();
        func_001E891B(p0);
    }
    p1 = f7d4;
    if (p1) {
        p1->func_00012140();
        func_001E891B(p1);
    }
    if (f7d8) {
        func_00201100(f7d8);
    }
    if (D_002BDE9C) {
        func_001E8390(D_002BDE9C);
    }
    v = f7c0;
    D_002BDE9C = 0;
    D_002BDEA0 = 0;
    if (v) {
        v->v2();
    }
    for (i = 0; i < f7c8; i++) {
        if (f2c[i]) {
            f2c[i]->v2();
        }
    }
    p2 = f7c4;
    if (p2) {
        p2->func_00193500();
        func_001E891B(p2);
    }
    if (f2c) {
        func_001E891B(f2c);
    }
    if (f3c) {
        func_001E891B(f3c);
    }
    func_00157660();
}

undefined4 C_00138790::func_00138790(byte param_1)
{
  int func_00138390(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00138390();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *CubeTextureMap::func_001387B0(int a)
{
    func_001D6AD0(a);
    vtbl = (void *)&D_002849BC;
    return this;
}

C_001387D0* C_001387D0::func_001387D0(int a0) {
    return this;
}

undefined4 C_001387E0::func_001387E0(byte param_1)
{
  int func_001D6B00(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D6B00();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

