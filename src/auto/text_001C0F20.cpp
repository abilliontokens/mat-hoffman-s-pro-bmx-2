/* 12 functions from 0x001C0F20 to 0x001C19D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001C10D0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x28];
    int f2c;
    int f30;
    int f34;
    void func_001C10D0(void);
};

struct C_001C1110 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x28];
    int f2c;
    char pad30[8];
    int f38;
    int f3c;
    void func_001C1110(void);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_00157960 {
    void func_00157960(void);
};

struct C_001C1950 {
    char pad0[0x68];
    C_001D5AD0 *f68;
    void func_001C1950(void);
};

struct C_001C1030_Handler {
    void func_001BEB90(int value);
    void func_001BEC10(int value);
    void func_001BEC90(int value, int v);
};

struct C_001C1030_Mid {
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
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31(int a, int b, int c, int d);
    char pad4[0x114];
    C_001C1030_Handler *f118;
};

struct C_001C1030 {
    char pad0[0x24];
    C_001C1030_Mid *f24;
    char pad28[0x40];
    int f68[1];
    void func_001C1030(int slot, int value, int key);
};

extern int D_0028DE54;
extern int D_0028DF04;
extern int D_0028DFE4;
void __stdcall func_00197EA0(void *p);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_001C0730 {
    void func_001C0730(int a, int b);
};

struct S_001C1490_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    void func_00157810(void);
};

struct C_001C1490 {
    char pad0[0x68];
    S_001C1490_Obj *f68;
    char pad6c[0x180];
    int f1ec;
    char pad1f0[0x10];
    int f200;
    int func_001C1490(void);
};

struct C_001C1150 {
    void *vtbl;
    char pad4[0xB4];
    u32 fB8;
    u32 fBC;
    u32 fC0;
    u32 fC4;
    u32 fC8;
    u32 fCC;
    u32 fD0;
    u32 fD4;
    u32 fD8;
    char padDC[0x104];
    u32 f1E0;
    u32 f1E4;
    u32 f1E8;
    u32 f1EC;
    u32 f1F0;
    u32 f1F4;
    u32 f1F8;
    char pad1FC[0x44];
    u32 f240;
    C_001C1150 *func_001C1150(int a, int b);
};

struct C_001C14D0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44[8];
    u32 f64;
    u32 f68;
    C_001C14D0 *func_001C14D0(int a, int b);
};

struct Sub_001C1970 {
    char pad0[0x64];
    void func_001D5760();
};

struct C_001C1970 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44[8];
    u32 f64;
    Sub_001C1970 sub68;
    Sub_001C1970 subCC;
    C_001C1970 *func_001C1970(int a, int b);
};


void C_001C1030::func_001C1030(int slot, int value, int key)
{
  int v = f68[slot];

  switch (v) {
  case -2:
    f24->f118->func_001BEC10(value);
    f24->v31(v, 1, 0, 0);
    return;
  case -1:
    f24->f118->func_001BEB90(value);
    f24->v31(v, 1, 0, 0);
    return;
  }
  if (v > 0) {
    f24->f118->func_001BEC90(value, v);
  }
  if (v != 0) {
    f24->v31(v, 1, 0, 0);
  }
}

void C_001C10D0::func_001C10D0(void)
{
  f2c = 1;
  if (f30 == 0 || f34 == 0) {
    if (f30 != 0) {
      v7();
    }
    if (f34 != 0) {
      v5();
    }
  }
  v7();
}

void C_001C1110::func_001C1110(void)
{
  f2c = 0;
  if (f38 == 0 || f3c == 0) {
    if (f38 != 0) {
      v7();
    }
    if (f3c != 0) {
      v5();
    }
  }
  v5();
}

C_001C1150 *C_001C1150::func_001C1150(int a, int b)
{
    u32 *p;

    ((C_001C0730 *)this)->func_001C0730(a, b);
    vtbl = &D_0028DE54;
    p = (u32 *)&fBC;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&fCC;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    fB8 = 0;
    f240 = 0;
    f1E0 = 0;
    f1E4 = 0;
    f1E8 = 0;
    f1F8 = 0;
    f1EC = 0;
    f1F0 = 0;
    f1F4 = 0;
    return this;
}

int C_001C1490::func_001C1490(void)
{
    if (f68 != 0) {
        f1ec = 1;
        func_00197EA0(&f200);
        f68->func_00157810();
        f68->v2();
        f68 = 0;
    }
    return 1;
}

C_001C14D0 *C_001C14D0::func_001C14D0(int a, int b)
{
    int i;

    ((C_00157600 *)this)->func_00157600(b);
    f24 = a;
    f2c = 0;
    f28 = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3c = 0;
    f40 = 0;
    for (i = 0; i < 8; i++) {
        f44[i] = 0;
    }
    f64 = 0;
    vtbl = &D_0028DF04;
    f68 = 0;
    return this;
}

void C_001C1950::func_001C1950(void)
{
  f68->func_001D5AD0();
  ((C_00157960 *)this)->func_00157960();
}

