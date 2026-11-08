/* 7 functions from 0x00130C90 to 0x00131510, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
struct C_001314E0 {
    void func_001314E0(undefined4 *param_1);
};

struct S_001313C0_Data {
    int w[10];
};

struct S_Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

/* the 32-byte key func_00131400 copies from */
struct S_00131400_In {
    S_Vec4 f0;
    S_Vec4 f10;
};

/* a 0x14-byte tracked value: current value, a time, and its limits */
struct S_KeyNode {
    f32 f0;
    f32 f4;
    u32 f8;
    u32 fC;
    u32 f10;
};

void *func_001E8A44(int size);

/* CarProceduralExtended: loads its key-frame track from a text file */
struct S_00130C90_Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

/* one 0x28-byte key: time plus two vectors */
struct S_00130C90_Key {
    f32 time;
    int f4;
    S_00130C90_Vec4 v8;
    S_00130C90_Vec4 v18;
};

/* the 0x18-byte reference-counted block CarProceduralExtended::f518 points to */
struct S_00130C90_Track {
    int count;
    int refs;
    S_00130C90_Key *keys;
    int fC;
    int f10;
    int f14;
};

struct S_00130C90_File {
    int func_0013D310(char *name, char *key, int *h, int *node, int flag);
    int func_0013AFB0(int h);
    char *func_0013C6E0(int h, char *buf, int size);
    void func_0013AFF0(int h, int off, int mode);
    void func_0013C110(int h);
    void func_0013B1F0(int h, void *obj);
};

struct C_00130C90VT {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(int h);
    virtual void v49();
    virtual void v50();
};

struct C_00130C90 {
    void *vtbl;
    char pad4[0x400];
    int f404;
    char pad408[0x110];
    S_00130C90_Track *f518;
    int func_00130C90(char *name, int arg);
};

extern S_00130C90_File *D_002BEAAC;
extern char D_002843B0[], D_002843A8[], D_00275FB4[], D_0028422C[], D_00276274[];
extern char D_0027626C[], D_00276260[], D_00279058[], D_00276234[], D_00284398[];
extern float D_002755E4;
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_00030F30(char *dst, const char *src);
int func_001E8BB0(char *a, char *b, unsigned int n);
void func_001E8B76(char *str, char *fmt, ...);
int func_001EA426(const char *a, const char *b);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);
void func_0012F460(void);

static S_KeyNode *initKeyNode(S_KeyNode *n, f32 value, f32 time)
{
    n->f0 = value;
    n->f4 = time;
    n->fC = 0x7f7fffff;
    n->f10 = 0xff7fffff;
    n->f8 = 0x3f800000;
    return n;
}

/* CinematographerCam */
struct C_001313C0 {
    void *vtbl;
    S_Vec4 f4;
    S_Vec4 f14;
    S_Vec4 f24;
    S_Vec4 f34;
    f32 f44;
    f32 f48;
    f32 f4C;
    int f50;
    int f54;
    int f58;
    f32 f5C;
    f32 f60;
    int f64;
    int f68;
    int f6C;
    int f70;
    int f74;
    int f78;
    int f7C;
    S_KeyNode *f80;
    S_KeyNode *f84;
    S_KeyNode *f88;
    S_KeyNode *f8C;
    S_KeyNode *f90;
    S_KeyNode *f94;
    u32 f98;
    int f9C;
    f32 fA0;
    int fA4;
    int fA8;
    S_001313C0_Data fAC;
    C_001313C0 *func_00131150(void);
    int func_00131260(int a1, f32 a2, int a3, int a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9);
    void func_001313C0(S_001313C0_Data *src);
    void func_00131400(S_00131400_In *in, int param_2);
    void func_0012B510(void);
};

extern int D_00284514;

f32 func_0014F870(f32 a);
f32 func_0014FBA0(f32 a, f32 b);
void func_001310E0(S_Vec4 *a, S_Vec4 *b);


int C_00130C90::func_00130C90(char *name, int arg)
{
    char big[0x400];
    char s1[0x100];
    char line[0x400];
    char buf[0x100];
    char s2[0x100];
    int tmp[8];
    S_00130C90_Vec4 vv[2];
    int node;
    int h;
    int i;
    S_00130C90_Key *keys;
    int count;

    func_001ADCC0(buf, 0x100, D_002843B0, arg);
    func_00030F30(name, D_002843A8);
    h = -1;
    node = 0;
    if (D_002BEAAC->func_0013D310(name, D_00275FB4, &h, &node, 1)) {
        if (node != 0) {
cached:
            f518 = (S_00130C90_Track *)node;
            f518->refs++;
            return 1;
        }
        ((C_00130C90VT *)this)->v48(h);
        D_002BEAAC->func_0013B1F0(h, f518);
        D_002BEAAC->func_0013C110(h);
        f404 = 1;
        return 1;
    } else {
        func_00030F30(name, D_0028422C);
        h = -1;
        node = 0;
        if (D_002BEAAC->func_0013D310(name, D_00276274, &h, &node, 1)) {
            if (node == 0) {
                f518 = (S_00130C90_Track *)func_001E8A44(0x18);
                f518->count = 0;
                f518->fC = 0;
                while (!D_002BEAAC->func_0013AFB0(h)) {
                    D_002BEAAC->func_0013C6E0(h, line, 0x400);
                    if (func_001E8BB0(line, D_0027626C, 5) == 0) {
                        f518->count++;
                    }
                }
                D_002BEAAC->func_0013AFF0(h, 0, 0);
                count = f518->count;
                keys = (S_00130C90_Key *)func_001E8A44(count * 0x28);
                if (keys != 0) {
                    func_00011FF0(keys, 0x28, count, (void *)func_0012F460);
                } else {
                    keys = 0;
                }
                f518->keys = keys;
                i = -1;
                while (!D_002BEAAC->func_0013AFB0(h)) {
                    D_002BEAAC->func_0013C6E0(h, line, 0x400);
                    if (func_001E8BB0(line, D_0027626C, 5) == 0) {
                        i++;
                        func_001E8B76(line, D_00279058, big, &tmp[0]);
                        f32 t = (f32)tmp[0];
                        if (tmp[0] < 0) {
                            t += D_002755E4;
                        }
                        f518->keys[i].time = t;
                    } else if (func_001E8BB0(line, D_00276260, 9) == 0) {
                        vv[1].x = vv[1].y = vv[1].z = 0;
                        vv[0].x = vv[0].y = vv[0].z = 0;
                        vv[1].w = 1.0f;
                        vv[0].w = 1.0f;
                        func_001E8B76(line, D_00276234, s1, s2, &tmp[2], &tmp[3], &tmp[4], &tmp[5], &tmp[6], &tmp[7], &vv[0].x, &vv[0].z, &vv[0].y, &vv[1].x, &vv[1].z, &vv[1].y);
                        if (func_001EA426(s2, buf) != 0 || func_001EA426(s2, D_00284398) != 0) {
                            f518->keys[i].v8 = vv[1];
                            f518->keys[i].v18 = vv[0];
                        }
                    }
                }
                ((C_00130C90VT *)this)->v50();
                f518->refs = 1;
                D_002BEAAC->func_0013B1F0(h, f518);
                D_002BEAAC->func_0013C110(h);
                f404 = 1;
                return 1;
            }
            goto cached;
        }
    }
    return 0;
}

void func_001310E0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

C_001313C0 *C_001313C0::func_00131150(void)
{
    S_Vec4 v;
    int *p;

    func_0012B510();
    vtbl = &D_00284514;
    p = (int *)&f4;  p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = (int *)&f14; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = (int *)&f24; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = (int *)&f34; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    v.w = 1.0f;
    v.x = 1500.0f;
    v.y = 100.0f;
    v.z = 1500.0f;
    f4 = v;
    f14 = v;
    f44 = 1.5707964f;
    fA0 = 80.0f;
    f78 = 1;
    f5C = 90.0f;
    f60 = 25.0f;
    f98 = 1;
    f48 = 0;
    f4C = 0;
    f6C = 0;
    f70 = 0;
    f74 = 0;
    f9C = 0;
    f80 = 0;
    f84 = 0;
    f88 = 0;
    f8C = 0;
    f90 = 0;
    f94 = 0;
    f64 = 0;
    f68 = 0;
    f7C = 0;
    f50 = 0;
    f54 = 0;
    f58 = 0;
    return this;
}

int C_001313C0::func_00131260(int a1, f32 a2, int a3, int a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9)
{
    S_KeyNode *n;

    n = (S_KeyNode *)func_001E8A44(0x14);
    f80 = n ? initKeyNode(n, f4.x, a8) : 0;
    n = (S_KeyNode *)func_001E8A44(0x14);
    f88 = n ? initKeyNode(n, f4.z, a8) : 0;
    n = (S_KeyNode *)func_001E8A44(0x14);
    f84 = n ? initKeyNode(n, f4.y, a9) : 0;
    n = (S_KeyNode *)func_001E8A44(0x14);
    f8C = n ? initKeyNode(n, f48, a7) : 0;
    n = (S_KeyNode *)func_001E8A44(0x14);
    f90 = n ? initKeyNode(n, f4C, a7) : 0;
    n = (S_KeyNode *)func_001E8A44(0x14);
    f94 = n ? initKeyNode(n, fA0, a2) : 0;
    fA8 = a4;
    fA4 = a3;
    f74 = a1;
    f5C = a5;
    f60 = a6;
    return 1;
}

void C_001313C0::func_001313C0(S_001313C0_Data *src)
{
    if (src->w[4] != 0) {
        f9C = (f9C == 0);
    }
    fAC = *src;
}

void C_001313C0::func_00131400(S_00131400_In *in, int param_2)
{
    f14 = in->f0;
    f4 = in->f0;
    *(f32 *)f80 = f14.x;
    *(f32 *)f84 = f14.y;
    *(f32 *)f88 = f14.z;
    S_Vec4 v = in->f10;
    f48 = func_0014F870(-v.y);
    v.y = 0;
    func_001310E0(&v, &v);
    f4C = func_0014FBA0(v.x, v.z);
    f98 = 1;
}

void C_001314E0::func_001314E0(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = *(undefined4 *)(in_ECX + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = 0;
  return;
}
