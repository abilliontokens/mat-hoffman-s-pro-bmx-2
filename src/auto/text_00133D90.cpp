/* 10 functions from 0x00133D90 to 0x00134A10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>

extern float D_00275544;
extern int D_0028464C;

void func_001E8390(void *p);
void func_001E891B(void *p);

struct C_001349F0 {
    undefined4 func_001349F0(byte param_1);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00193500 {
    void func_00193500(void);
};

struct C_00133210 {
    void func_00133210(void);
};

struct Coll_00133D90 {
    char pad0[0x28];
    float f28;
    float f2C;
    float f30;
    char pad34[0x48 - 0x34];
    float f48;
};

struct C_00133E60 {
    void *vtbl;
    char pad4[0x74];
    void *f78;
    char pad7C[0x84 - 0x7C];
    void *f84;
    char pad88[0x90 - 0x88];
    void *f90;
    char pad94[0x98 - 0x94];
    C_00193500 *f98;
    void func_00133E60(void);
};

struct Obj_00133ED0 {
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
    virtual void v31(int a);
    virtual void v32();
    void func_00133ED0(void);
    void func_00133EF0(int a);
};

/* identity-style unit vector (0, 0, 0, 1) */
struct V4_00134980 {
    float x;
    float y;
    float z;
    float w;
    V4_00134980() { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

struct C_00134980 {
    V4_00134980 a[2];
    V4_00134980 b;
    V4_00134980 c;
    V4_00134980 d;
    V4_00134980 e;
    V4_00134980 f;
    C_00134980();
};


float func_00133D90(Coll_00133D90 *obj, float *p, float r)
{
    float rad = r + obj->f48;
    float dx = obj->f28 - p[0];
    float dz = obj->f30 - p[2];
    float d;
    float res;

    _mm_store_ss(&d, _mm_sqrt_ss(_mm_set_ss(dz * dz + dx * dx)));
    res = d - rad;
    if (res <= D_00275544) {
        res = D_00275544;
    }
    return res;
}

float func_00133DF0(Coll_00133D90 *a, Coll_00133D90 *b)
{
    float rad = a->f48 + b->f48;
    float dx = a->f28 - b->f28;
    float dy = a->f2C - b->f2C;
    float dz = a->f30 - b->f30;
    float d;
    float res;

    _mm_store_ss(&d, _mm_sqrt_ss(_mm_set_ss(dz * dz + dy * dy + dx * dx)));
    res = d - rad;
    if (res <= D_00275544) {
        res = D_00275544;
    }
    return res;
}

void C_00133E60::func_00133E60(void)
{
    vtbl = (void *)&D_0028464C;
    if (f98 != 0) {
        f98->func_00193500();
        func_001E891B(f98);
    }
    if (f78 != 0) {
        func_001E8390(f78);
    }
    if (f84 != 0) {
        func_001E8390(f84);
    }
    if (f90 != 0) {
        func_001E8390(f90);
    }
    ((C_00157660 *)this)->func_00157660();
}

void Obj_00133ED0::func_00133ED0(void)
{
    v32();
    ((C_00133210 *)this)->func_00133210();
}

undefined4 C_001349F0::func_001349F0(byte param_1)
{
  int func_00133E60(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00133E60();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
