/* 17 functions from 0x00193240 to 0x001941F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Pool_00193240 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    Pool_00193240 *func_0001E740(u32 size, u32 count);
    void func_0001E790(void *p);
};

extern Pool_00193240 *D_002EFE70;
extern int D_002EFE74;
void *func_001E8A44(int size);

struct Handler_00193240 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6(void *a, void *b, int c);
    virtual void v7(void *a, int b, void *c, void *d);
    virtual void v8(void *a, int b, void *c, void *d);
    virtual void v9(void *a, int b);
};

struct Node_00193240 {
    Node_00193240 *f0;
    void *f4;
    Handler_00193240 *f8;
    void *fC;
    void *f10;
    int f14;
    float f18;
    float f1C;
    float f20;
    float f24;
    Node_00193240 *func_00193490(void);
    void func_001937F0(void *a1, void *a2, void *a3);
    void func_00193870(void *a);
};
struct C_00194110 {
    undefined4 func_00194110(byte param_1);
};

extern int D_0028AD14;
extern f32 D_00275BF8;
extern f32 D_002A98DC;
extern u32 D_002A9904;
extern u32 D_002A9908;
extern u32 D_002A990C;
extern u32 D_002A9910;

void func_001E8390(void *p);

struct C_00157600 {
    void func_00157600(int a0);
    void func_00157660(void);
};

struct C_00192B50 {
    Handler_00193240 *func_00192B50(int a0);
};

struct S_00193240_V4 {
    f32 x;
    f32 y;
    f32 z;
    int w;
};

struct DelObj_00193240 {
    virtual void Destroy(int a0);
};

/* SegmentedCord */
struct C_00193B50 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    u32 f40;
    u32 f44;
    u32 f48;
    void *f4C;
    u32 f50;
    DelObj_00193240 **f54;
    void *f58;
    C_00193B50 *func_00193B50(int a0);
    void func_00193BC0(void);
};

struct S_00193AF0 {
    char pad0[0x2c];
    f32 f2C;
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
};

struct V4_00194130 {
    float x, y, z, w;
};

extern int D_0028AD8C;
extern V4_00194130 D_002A9970;
extern float D_002A9974;
extern float D_002A9978;
extern float D_002A997C;

/* SelectiveGravityModel */
struct C_00194130 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    float f2c;
    V4_00194130 f30;
    int f40;
    void func_00157600(int a0);
    C_00194130 *func_00194130(int a0);
};


Node_00193240 *Node_00193240::func_00193490(void)
{
    Pool_00193240 *pool = D_002EFE70;
    u32 *p;

    p = (u32 *)&f18;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    if (pool == 0) {
        pool = (Pool_00193240 *)func_001E8A44(0x30);
        D_002EFE70 = pool != 0 ? pool->func_0001E740(0x18, 0x1000) : 0;
    }
    f0 = 0;
    f4 = 0;
    f8 = 0;
    fC = 0;
    f10 = 0;
    f14 = 0;
    D_002EFE74++;
    return this;
}

void func_00193500(void)
{
    if (--D_002EFE74 == 0 && D_002EFE70 != 0) {
        D_002EFE70->v2();
        D_002EFE70 = 0;
    }
}

void Node_00193240::func_001937F0(void *a1, void *a2, void *a3)
{
    int r;
    Handler_00193240 *h;

    h = f8;
    r = h->v6(a2, a3, f14);
    if (r != f14) {
        h->v9(a1, f14);
        if (r != 0) {
            h->v7(a1, r, a2, a3);
        }
        f14 = r;
    } else {
        f8->v8(a1, r, a2, a3);
        f14 = r;
    }
}

void Node_00193240::func_00193870(void *a)
{
    Node_00193240 *n;

    f8->v9(a, f14);
    n = f0;
    while (n != 0) {
        Node_00193240 *next;

        n->f8->v9(a, n->f14);
        next = n->f0;
        D_002EFE70->func_0001E790(n);
        n = next;
    }
}

undefined4 C_00194110::func_00194110(byte param_1)
{
  int func_00193BC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00193BC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_00194130 *C_00194130::func_00194130(int a0)
{
    u32 *p;

    func_00157600(a0);
    vtbl = (void *)&D_0028AD8C;
    p = (u32 *)&f30;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f28 = 0;
    f24 = 0;
    f2c = 32.2f;
    f30.x = D_002A9970.x;
    f30.y = D_002A9974;
    f30.z = D_002A9978;
    f30.w = D_002A997C;
    f40 = 0;
    return this;
}

