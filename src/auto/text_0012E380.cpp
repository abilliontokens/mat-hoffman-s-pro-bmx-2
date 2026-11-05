/* 10 functions from 0x0012E380 to 0x0012F0F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void *func_001E8A44(int size);

void func_001E891B(void *p);

struct C_0013B210 {
    void func_0013B210(void *a);
    int func_0013B930(int a, void *b, int c, int d);
    void func_0013C8A0(int a, void *b, int c, int d);
};
extern C_0013B210 *D_002BEAAC;
extern int D_002843F4;
extern char D_002764F0[];
extern "C" int memcmp(const void *a, const void *b, unsigned int n);
extern f32 D_00275460;

struct C_0012C940 {
    void func_0012C940(int a);
};

/* the 0x18-byte block CarProceduralExtended::f414 points to */
struct S_0012E5F0 {
    int count; /* number of 0x18-byte elements in arr */
    u32 f4;
    void *arr;
    u32 fC;
    u32 f10;
};

/* (0, 0, 0, 1) vector, stored z, y, x, w */
struct V4_0012E5F0 {
    float x;
    float y;
    float z;
    float w;
    V4_0012E5F0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

/* 0x18-byte element of S_0012E5F0::arr */
struct S_0012E5F0_Elem {
    u32 f0;
    u32 f4;
    V4_0012E5F0 v;
    static void *operator new[](unsigned int size) { return func_001E8A44(size); }
};

/* reference-counted block pointed to by CarProceduralExtended::f518 / f51c */
struct S_0012EF60_Ref {
    int unk0;
    u32 refs;
    void *data;
    u32 unkC;
    f32 f10;
    int f14;
};

/* CarProceduralExtended vtable, up to slot 47 (offset 0xbc) */
struct C_0012EF30_Vtbl {
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
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47(char *name, void *buf);
};

/* CarProceduralExtended */
struct C_0012EF30 {
    void *vtbl;
    char pad4[0x3FC];
    void *f400;
    char pad404[0x10];
    S_0012E5F0 *f414;
    char pad418[0xF8];
    f32 f510;
    f32 f514;
    S_0012EF60_Ref *f518;
    S_0012EF60_Ref *f51c;
    C_0012EF30 *func_0012EF30(int a);
    C_0012EF30 *func_0012F000(int a1, int a2, int a3, int a4, char *name, int a6, int a7,
                               int a8, int a9, int a10, int a11, int a12, int a13, int a14,
                               int a15, int a16, int a17, int a18, int a19, int a20);
    void func_0012CD10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8,
                       int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16);
    void func_0012EF60();
    void func_0012CCA0();
    void func_0012E5F0(int a);
    void func_0012E6B0(int a);
};

struct C_0012E6F0 {
    undefined4 func_0012E6F0(byte param_1);
};


void __stdcall func_0012E5A0(float t, float *a, float *b, float *c, float *d)
{
    float t2 = t * t;
    float t3 = t * t2;
    float x = (t2 * 3.0f - t3) - t3;
    *a = D_00275460 - x;
    *b = x;
    *c = ((t3 - t2) - t2) + t;
    *d = t3 - t2;
}

void C_0012EF30::func_0012E5F0(int param_1)
{
    S_0012E5F0 *t = (S_0012E5F0 *)func_001E8A44(0x18);
    f414 = t;
    D_002BEAAC->func_0013C8A0(param_1, t, 4, 1);
    f414->arr = new S_0012E5F0_Elem[f414->count];
    D_002BEAAC->func_0013C8A0(param_1, f414->arr, 0x18, f414->count);
    f414->f4 = 1;
    f414->f10 = 0;
    f414->fC = 0;
}

void C_0012EF30::func_0012E6B0(int param_1)
{
    D_002BEAAC->func_0013B930(param_1, f414, 4, 1);
    S_0012E5F0 *t = f414;
    D_002BEAAC->func_0013B930(param_1, t->arr, 0x18, t->count);
}

undefined4 C_0012E6F0::func_0012E6F0(byte param_1)
{
  int func_0012CCA0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012CCA0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0012EF30 *C_0012EF30::func_0012EF30(int a)
{
    ((C_0012C940 *)this)->func_0012C940(a);
    f510 = 0;
    f518 = 0;
    f51c = 0;
    vtbl = (void *)&D_002843F4;
    return this;
}

void C_0012EF30::func_0012EF60()
{
    vtbl = (void *)&D_002843F4;
    if (f518) {
        f518->refs--;
        if (f518->refs <= 0) {
            D_002BEAAC->func_0013B210(f518);
            func_001E891B(f518->data);
            func_001E891B(f518);
        }
    }
    if (f51c) {
        f51c->refs--;
        if (f51c->refs <= 0) {
            D_002BEAAC->func_0013B210(f51c);
            func_001E891B(f51c->data);
            func_001E891B(f51c);
        }
    }
    func_0012CCA0();
}

C_0012EF30 *C_0012EF30::func_0012F000(int a1, int a2, int a3, int a4, char *name, int a6, int a7,
                                   int a8, int a9, int a10, int a11, int a12, int a13, int a14,
                                   int a15, int a16, int a17, int a18, int a19, int a20)
{
    func_0012CD10(a1, a2, a3, a4, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    if (f518) {
        f518->f14 = a18;
        f518->f10 = 16.666667f;
    }
    if (memcmp(name, D_002764F0, 5) != 0) {
        S_0012EF60_Ref *old = f518;
        ((C_0012EF30_Vtbl *)this)->v47(name, (char *)f400 + 0x28);
        f51c = f518;
        f518 = old;
        if (f51c) {
            f51c->f14 = a19;
            f51c->f10 = 16.666667f;
            int t = a20;
            f514 = t;
        }
    }
    return this;
}

