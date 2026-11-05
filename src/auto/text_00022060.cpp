/* 9 functions from 0x00022060 to 0x00022E30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_002761A4;

struct S_Vec4i_00022320 {
    int x, y, z, w;
};
extern S_Vec4i_00022320 D_002A0F74;
extern int D_002A0F78, D_002A0F7C, D_002A0F80;
extern char D_002A0F94[];
extern char D_002A0FA4[];

struct S_002B9120 {
    char pad0[0x4A8];
    int *f4A8;
    char pad4AC[0x30];
    char *f4DC;
};
extern S_002B9120 *D_002B9120;

void func_001E891B(void *p);

struct V4_000229C0 {
    float x, y, z, w;
};
struct Item_000229C0 {
    char pad0[0x24];
    int f24;
    void func_000223B0(V4_000229C0 pos, float dy);
};
struct L_A { int pad[5]; int count; Item_000229C0 **items; };
struct L_B { L_A *l; };
struct Arg_000229C0 {
    char pad0[0x28];
    V4_000229C0 pos;
};
struct C_000229C0 {
    char pad0[0x28];
    float f28;
    char pad2C[0x44];
    L_B *f70;
    void func_000229C0(Arg_000229C0 *arg);
};
extern double D_00276088;
extern float D_002754B0, D_00275460, D_002756B8;
extern "C" int func_001E8833(void);
extern "C" void func_00158390(V4_000229C0 a, V4_000229C0 b, float c, V4_000229C0 *out);

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

struct Vec4_000223B0 {
    float x, y, z, w;
    Vec4_000223B0() { x = y = z = 0; w = 1; }
};

struct S_000223B0_Obj {
    void func_00199600(Vec4_000223B0 v);
    void func_001983A0(void);
};

struct S_000223B0_State {
    S_Vec4i_00022320 v;
    int f10;
    char pad14[8];
    int f1c;
    char pad20[0x20];
    int f40;
};

struct S_000223B0_Zero {
    char pad0[0xc];
    int f[9];
};

struct C_000223B0 {
    char pad0[0x24];
    int f24;
    char pad28[4];
    S_000223B0_Obj *f2C;
    S_000223B0_State *f30;
    S_000223B0_Zero *f34;
    int func_000223B0(Vec4_000223B0 pos, float dy);
};

extern "C" int func_00134DE0(Vec4_000223B0 *, Vec4_000223B0 *, Vec4_000223B0 *, int, int, int, int, int, int);


extern float D_00275AEC, D_00275994;
struct Group_00022550 {
    char pad0[0x10];
    int count, total;
    C_00022320 **items;
    char pad1c[0x18];
    int f34;
};
struct C_00022550 {
    char pad0[0x44];
    int count;
    char pad48[0x28];
    Group_00022550 **groups;
    void func_001577A0(Obj_00022320 *, int *);
    int func_00022550();
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

int C_000223B0::func_000223B0(Vec4_000223B0 pos, float dy)
{
    Vec4_000223B0 result;
    Vec4_000223B0 hit;
    Vec4_000223B0 line[2];
    S_000223B0_State *s;
    S_000223B0_Zero *z;

    line[0] = pos;
    line[1] = pos;
    result.x = result.y = result.z = 0;
    result.w = 1;
    hit.x = hit.y = hit.z = 0;
    hit.w = 1;
    line[0].y = 200.0f;
    line[1].y = -200.0f;
    if (func_00134DE0(line, &hit, &result, 0, 0, 0, -1, 0, 1) == 0) {
        return 0;
    }
    hit.y += dy;
    f2C->func_00199600(hit);
    f2C->func_001983A0();
    s = f30;
    s->f1c = 0;
    s->v = D_002A0F74;
    s->f40 = 0;
    s->f10 = 1;
    z = f34;
    z->f[0] = 0;
    z->f[1] = 0;
    z->f[2] = 0;
    z->f[3] = 0;
    z->f[4] = 0;
    z->f[5] = 0;
    z->f[6] = 0;
    z->f[7] = 0;
    z->f[8] = 0;
    f24 = 1;
    return 1;
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

