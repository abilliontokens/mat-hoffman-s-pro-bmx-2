/* 9 functions from 0x00022060 to 0x00022E30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_002761A4;

struct S_Vec4i_00022320 {
    int x, y, z, w;
};
extern S_Vec4i_00022320 D_002A0F74;
extern char D_002A0F94[];
extern char D_002A0FA4[];

struct S_002B9120 {
    char pad0[0x4A8];
    int *f4A8;
};
extern S_002B9120 *D_002B9120;

void func_001E891B(void *p);

struct C_00157660 {
    void func_00157660(void);
};

struct C_00022530 {
    undefined4 func_00022530(byte param_1);
};

struct Obj_00022320 {
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
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35(int a, int b, int c);
    void func_00199600(S_Vec4i_00022320 v);
    void func_00198F50(char *a, char *b, int c, int d, int e);
    void func_0019ABA0(int a, int b);
};

struct PageObj_00022DF0 {
    virtual void destroy(int flags);
};

struct C_00022DF0 {
    void *vtbl;
    char pad4[0x24];
    PageObj_00022DF0 *f28;
    void *func_00022DF0(int flags);
};

struct C_00022320 {
    char pad0[0x28];
    int f28;
    Obj_00022320 *f2C;
    Obj_00022320 *func_00022320(int a);
};


Obj_00022320 *C_00022320::func_00022320(int a)
{
    f2C->v35(a, 1, 0);
    f2C->func_00199600(D_002A0F74);
    f2C->func_00198F50(D_002A0FA4, D_002A0F94, 0, 1, 0);
    f2C->func_0019ABA0(*D_002B9120->f4A8, 2);
    f28 = 1;
    return f2C;
}

undefined4 C_00022530::func_00022530(byte param_1)
{
  int func_000214B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000214B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *C_00022DF0::func_00022DF0(int flags)
{
    vtbl = (void *)&D_002761A4;
    if (f28 != 0) {
        f28->destroy(1);
    }
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

