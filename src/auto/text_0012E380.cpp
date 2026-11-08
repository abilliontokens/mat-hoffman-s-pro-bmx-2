/* 10 functions from 0x0012E380 to 0x0012F0F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"

void *func_001E8A44(int size);

void func_001E891B(void *p);

struct C_0013B210 {
    void func_0013B210(void *a);
    int func_0013B930(int a, void *b, int c, int d);
    void func_0013C8A0(int a, void *b, int c, int d);
    int func_0013D310(char *name, char *key, int *h, int *node, int flag);
    int func_0013AFB0(int h);
    char *func_0013C6E0(int h, char *buf, int size);
    void func_0013AFF0(int h, int off, int mode);
    void func_0013B1F0(int h, void *obj);
    void func_0013C110(int h);
};
extern char D_002843B0[], D_002843A8[], D_0028422C[], D_00275FB4[], D_00276274[], D_0027626C[], D_00276260[], D_00276234[], D_00284398[], D_00279058[];
extern f32 D_002755E4;
int func_001ADCC0(char *buf, int size, char *fmt, ...);
void func_00030F30(char *name, char *key);
int func_001E8BB0(char *a, char *b, int n);
int func_001E8B76(char *a, char *b, ...);
int func_001E8AF0(char *a, char *b);
void func_00011FF0(void *a, int b, int c, void *d);
void func_0012D460(void);
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

struct VV_0012E710 {
    float x;
    float y;
    float z;
    float w;
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
    virtual void v48(int a);
    virtual void v49();
    virtual void v50();
};

/* CarProceduralExtended */
struct C_0012EF30 {
    void *vtbl;
    char pad4[0x3FC];
    void *f400;
    char pad404[0x10];
    S_0012E5F0 *f414;
    char pad418[0xA0];
    u32 f4b8;
    u32 pad4bc;
    f32 f4c0;
    f32 f4c4;
    char pad4c8[0x48];
    f32 f510;
    u32 f514;
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
    int func_0012E710(char *name, char *arg);
    float func_0012E380(float time, float dist);
};

/* S_0012E5F0_Elem read as a key: time, length */
struct K_0012E380 {
    f32 t;
    f32 len;
    u32 pad[4];
};
extern f32 D_00275544;

static inline float Abs_0012E380(float x)
{
    u32 b = *(u32 *)&x & 0x7fffffff;
    return *(float *)&b;
}

struct C_0012E6F0 {
    undefined4 func_0012E6F0(byte param_1);
};


float C_0012EF30::func_0012E380(float time, float dist)
{
    float t = time * f4c0;
    u32 i;
    for (i = f4b8 + 1; i < (u32)f414->count && t > ((K_0012E380 *)f414->arr)[i].t; i++)
        f4b8++;
    for (; f4b8 > 0 && t < ((K_0012E380 *)f414->arr)[f4b8].t; i--)
        f4b8--;
    if (dist > D_00275544) {
        int j = f4b8;
        float v = (t - ((K_0012E380 *)f414->arr)[j].t) / (((K_0012E380 *)f414->arr)[i].t - ((K_0012E380 *)f414->arr)[j].t) * ((K_0012E380 *)f414->arr)[j].len;
        while (v < dist) {
            j--;
            if (j < 0)
                j += f414->count;
            v += ((K_0012E380 *)f414->arr)[j].len;
        }
        K_0012E380 *kj = &((K_0012E380 *)f414->arr)[j];
        if (kj->len != D_00275544)
            return ((((K_0012E380 *)f414->arr)[(j + 1) % (u32)f414->count].t - kj->t) * ((v - dist) / kj->len) + kj->t) * f4c4;
    } else {
        u32 j = f4b8;
        float w = (((K_0012E380 *)f414->arr)[i].t - t) / (((K_0012E380 *)f414->arr)[i].t - ((K_0012E380 *)f414->arr)[j].t) * ((K_0012E380 *)f414->arr)[j].len;
        while (w < Abs_0012E380(dist)) {
            j = (j + 1) % (u32)f414->count;
            w += ((K_0012E380 *)f414->arr)[j].len;
        }
        K_0012E380 *kj = &((K_0012E380 *)f414->arr)[j];
        if (kj->len != D_00275544) {
            K_0012E380 *n = &((K_0012E380 *)f414->arr)[(j + 1) % (u32)f414->count];
            return ((D_00275460 - (w + dist) / kj->len) * (n->t - kj->t) + n->t) * f4c4;
        }
    }
    return D_00275544;
}

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

int C_0012EF30::func_0012E710(char *name, char *arg)
{
    char big[0x400];
    char s1[0x100];
    char line[0x400];
    char buf[0x100];
    char s2[0x100];
    int tmp[9];
    u32 t0;
    VV_0012E710 vec;
    int node;
    int h;
    int i;

    func_001ADCC0(buf, 0x100, D_002843B0, arg);
    func_00030F30(name, D_002843A8);
    h = -1;
    node = 0;
    if (D_002BEAAC->func_0013D310(name, D_00275FB4, &h, &node, 1)) {
        if (node != 0) {
            f414 = (S_0012E5F0 *)node;
            f414->f4++;
            return 1;
        }
        ((C_0012EF30_Vtbl *)this)->v48(h);
        D_002BEAAC->func_0013B1F0(h, f414);
        D_002BEAAC->func_0013C110(h);
        *(int *)((char *)this + 0x404) = 1;
        return 1;
    }
    func_00030F30(name, D_0028422C);
    h = -1;
    node = 0;
    if (D_002BEAAC->func_0013D310(name, D_00276274, &h, &node, 1)) {
        if (node != 0) {
            f414 = (S_0012E5F0 *)node;
            f414->f4++;
            return 1;
        }
        f414 = (S_0012E5F0 *)func_001E8A44(0x18);
        f414->count = 0;
        f414->f10 = 0;
        f414->fC = 0;
        while (!D_002BEAAC->func_0013AFB0(h)) {
            D_002BEAAC->func_0013C6E0(h, line, 0x400);
            if (func_001E8BB0(line, D_0027626C, 5) == 0) {
                f414->count++;
            }
        }
        D_002BEAAC->func_0013AFF0(h, 0, 0);
        f414->arr = new S_0012E5F0_Elem[f414->count];
        i = -1;
        while (!D_002BEAAC->func_0013AFB0(h)) {
            D_002BEAAC->func_0013C6E0(h, line, 0x400);
            if (func_001E8BB0(line, D_0027626C, 5) == 0) {
                i++;
                func_001E8B76(line, D_00279058, big, &t0);
                *(f32 *)&((S_0012E5F0_Elem *)f414->arr)[i].f0 = (f32)t0;
            } else if (func_001E8BB0(line, D_00276260, 9) == 0) {
                vec.x = vec.y = vec.z = 0;
                vec.w = 1.0f;
                func_001E8B76(line, D_00276234, s1, s2, &tmp[0], &tmp[1], &tmp[2], &tmp[3], &tmp[4], &tmp[5], &tmp[6], &tmp[7], &tmp[8], &vec.x, &vec.z, &vec.y);
                if (func_001E8AF0(s2, buf) != 0 || func_001E8AF0(s2, D_00284398) != 0) {
                    ((S_0012E5F0_Elem *)f414->arr)[i].v = *(V4_0012E5F0 *)&vec;
                }
            }
        }
        ((C_0012EF30_Vtbl *)this)->v50();
        f414->f4 = 1;
        D_002BEAAC->func_0013B1F0(h, f414);
        D_002BEAAC->func_0013C110(h);
        *(int *)((char *)this + 0x404) = 1;
        return 1;
    }
    return 0;
}

void func_0012EEC0(float *out, float *in) {
    AsmVec3Normalize(out, in);
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

extern "C" int strcmp(const char *a, const char *b);
C_0012EF30 *C_0012EF30::func_0012F000(int a1,int a2,int a3,int a4,char *name,int a6,int a7,int a8,int a9,int a10,int a11,int a12,int a13,int a14,int a15,int a16,int a17,int a18,int a19,int a20)
{
 func_0012CD10(a1,a2,a3,a4,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17);
 if(f518) { f518->f14=a18; f518->f10=16.666667f; }
 if(strcmp(name,"none") != 0) {
 S_0012EF60_Ref *old=f518;
 ((C_0012EF30_Vtbl *)this)->v47(name,(char *)f400+0x28);
 f51c=f518; f518=old;
 if(f51c) { f51c->f14=a19; *(volatile int *)&f51c->f10=0x41855556; }
 }
 f514=*(volatile int *)&a20;
 return this;
}

