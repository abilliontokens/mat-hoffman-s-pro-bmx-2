/* 12 functions from 0x0019B890 to 0x0019C710, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00123C50(void *a1, void *a2, void *a3, int a4, void *a5, void *a6, void *a7);

struct __declspec(align(16)) S_Matrix16 {
    f32 m[16];
};

struct C_00199C20 {
    void func_00199C20(int a, S_Matrix16 *m);
};

struct C_000264C0 {
    void func_000264C0(void *a);
};

struct S_0019C690_Arg {
    char f0[8];
    s16 f8;
    s16 fA;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    s16 f20;
    char pad22[0xE];
    char f30[0x40];
    int f70;
};

struct C_0019C2F0_VT {
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
    virtual void v31(S_Matrix16 *m);
};

/* SoultreeCollisionObject */
struct SoultreeCollisionObject {
    char pad0[0xB0];
    char fB0[0x40];
    __declspec(align(16)) char fF0[0x40];
    char pad130[0x80];
    int f1B0;
    int f1B4;
    int f1B8;
    s16 f1BC;
    s16 f1BE;
    int f1C0;
    int f1C4;
    int f1C8;
    s16 f1CC;
    s16 f1CE;
    char pad1D0[4];
    void *f1D4;
    void func_0019C1E0(void);
    void func_0019BB80(void *a);
    void func_0019C2F0(void);
    void func_0019C690(int a1, S_0019C690_Arg *a2);
    void func_0019C0E0(S_Matrix16 *m);
};

struct C_0019C320 {
    void func_0019C320(undefined4 *param_1);
};


void SoultreeCollisionObject::func_0019BB80(void *arg1)
{
    struct {
        int a;
        int b;
    } p;

    p.a = f1C4;
    p.b = f1C8;
    func_00123C50((char *)arg1 + 0xf0, (char *)arg1 + 0x100, (char *)arg1 + 0xb0, 0,
                  &p, (char *)this + 0xb0, (char *)this + 0x1b0);
}

void SoultreeCollisionObject::func_0019C1E0(void)
{
    S_Matrix16 m;

    ((C_00199C20 *)f1C0)->func_00199C20(0, &m);
    func_0019C0E0(&m);
}

void C_0019C320::func_0019C320(undefined4 *param_1)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x13c);
  param_1[1] = *(undefined4 *)(in_ECX + 0x14c);
  param_1[2] = *(undefined4 *)(in_ECX + 0x15c);
  return;
}
