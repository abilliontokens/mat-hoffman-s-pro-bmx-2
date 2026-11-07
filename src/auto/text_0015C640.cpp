/* 24 functions from 0x0015C640 to 0x0015D340, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
struct C_0015CE00 {
 void *vtbl; char pad4[0x20]; unsigned short f24; unsigned char f26, f27; int u[42];
   void func_00157600(int a0);
   C_0015CE00 *func_0015CE00(int a0);
};
struct C_001BC6E0 { unsigned char func_001BC6E0(void *p); };
extern C_001BC6E0 *D_002AAEC8;
extern int D_002E293C, D_002878B4, D_002878A0;
extern unsigned char D_002A8010;
struct V3_0015D0A0 {
    float x, y, z;
    V3_0015D0A0() {}
    V3_0015D0A0(float a, float b, float c) { x = a; y = b; z = c; }
};

struct V4_0015D0A0 {
    float x, y, z, w;
    V4_0015D0A0() {}
    V4_0015D0A0(const V3_0015D0A0 &v, float d) { *(V3_0015D0A0 *)&x = v; w = d; }
    void Set(const V3_0015D0A0 &v, float d) { *(V3_0015D0A0 *)&x = v; w = d; }
    static void Init(V4_0015D0A0 *out, const V3_0015D0A0 &v, float d) { *(V3_0015D0A0 *)&out->x = v; out->w = d; }
};

struct L_0015D0A0 {
    V4_0015D0A0 pos;
    V4_0015D0A0 scl;
    V3_0015D0A0 t;
    float w;
};

struct C_001938C0 {
    char pad0[0x28];
    C_001938C0 *func_00193490(void);
    void func_001938C0(void *a0, int a1, int a2, V4_0015D0A0 *a3, V4_0015D0A0 *a4, float a5);
};

extern const float D_002755E8 = 0.5f;

struct C_0015D0A0 {
    char pad0[0x24];
    char f24[0x8];
    int f2c;
    char pad30[0x3c];
    float f6c;
    float f70;
    float f74;
    float f78;
    char pad7c[0x18];
    V4_0015D0A0 f94;
    char padA4[0x20];
    C_001938C0 *fc4;
    int fc8;
    void func_0015D0A0(int a0, int a1);
};

struct C_0015CB40 {
    char pad0[0x8];
    int unk8;
    int unkC;
    char pad10[0x4];
    int unk14;
    void func_0015CB40(int a0, int a1);
};

struct S_0015CD70_Vec4 {
    int v0;
    int v1;
    int v2;
    int v3;
};

struct C_0015CD70 {
    char pad0[0x24];
    S_0015CD70_Vec4 f24;
    void func_0015CD70(S_0015CD70_Vec4 *p);
};

struct S_0015CA10_Key {
    float t;
    u16 q[4];
};

struct Quat_0015CA10 {
    float w, x, y, z;
};

struct C_0015CA10 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int n);
    int f4;
    int f8;
    int fC;
    int f10;
    S_0015CA10_Key *f14;
    void func_0015CA10(Quat_0015CA10 *q, float t);
};

void func_0001B250(void *out, Quat_0015CA10 *q);
int func_0015CAB0(S_0015CA10_Key *arr, int n, float t);

struct C_0015CFE0 {
    void func_0015CFE0(undefined4 param_1);
};

struct C_0015CD50 {
    void func_0015CD50(uint param_1);
};


struct C_0015C6C0 {
    char pad_0[8];
    int unk8;
    int unkC;
    char pad_10[4];
    int unk14;
    void func_0015C6C0(int param_1, int param_2);
};
extern float D_00275998;
void *func_001E8A44(int size);

struct C_0015D070 {
    char pad0[0x8c];
    float f8c;
    float f90;
    void func_0015D070(float a0, float a1);
};

struct S_0015CF60_Cell {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
};

struct C_0015CF60 {
    char pad0[0x28];
    int f28;
    char pad2c[0x4];
    float f30;
    float f34;
    float f38;
    float f3c;
    char pad40[0x10];
    float f50;
    float f54;
    float f58;
    float f5c;
    char pad60[0x6c];
    S_0015CF60_Cell *fcc;
    unsigned int func_0015CF60(void);
    void func_0015D000(int a0, int a1, int a2);
};

extern int D_00287934;
extern int D_002A801C;
extern int D_002A8020;
extern int D_002A8024;
extern int D_002A8028;

/* LightManager */
struct C_0015D1B0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    char pad40[0x10];
    int f50;
    char pad54[0x10];
    int f64;
    int f68;
    int f6C;
    int f70;
    int f74;
    int f78;
    int f7C;
    int f80;
    int f84;
    int f88;
    int f8C;
    int f90;
    void func_00157600(int a0);
    C_0015D1B0 *func_0015D1B0(void);
    void func_0015D250(void);
};

struct C_Obj_0015D250 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

void func_001E891B(void *p);

extern C_0015D1B0 *D_002E2930;

int func_0015CAB0(float *base, int hi, float v);
int func_0015CCC0(float *base, float v, int hi, float **lo, float **up, float *t);
void func_0015CC50(float *param_1, int param_2);
void func_0001B2E0(void *in, float *out);
void func_0015C7D0(float *a, float *b, float *out, float t);
extern float D_00287848;
extern float D_00287844;
extern float D_00287840;
extern float D_00275460;
extern float D_00275544;
extern float D_002A8318;
float func_0014F7E0(float x);
float func_0015C900(float param_1);

int func_0015C640(float *arr, int n, float t)
{
    int mid;
    int lo;
    int hi;

    if (n == 0) {
        return 0;
    }
    if (t >= arr[(n - 1) * 2]) {
        return n;
    }
    if (t < arr[0]) {
        return 0;
    }
    lo = 0;
    hi = n;
    for (;;) {
        mid = (hi + lo) >> 1;
        if (t >= arr[mid * 2]) {
            if (t < arr[(mid + 1) * 2]) {
                return mid + 1;
            }
            lo = mid;
        } else {
            if (t >= arr[(mid - 1) * 2]) {
                return mid;
            }
            hi = mid;
        }
    }
}

struct S_0015C6F0_Key {
    float t;
    u8 q[4];
};

void func_0015C6F0(float *base, float v, int n, S_0015C6F0_Key *up, float *out);
void func_0015C7D0(float *a, float *b, float *out, float t);
void func_0015C930(float *param_1, int param_2);
int func_0015C9A0(float *base, float v, int n, float **lo, float **up, float *t);

void C_0015C6C0::func_0015C6C0(int param_1, int param_2)
{
    func_0015C6F0((float *)unk14, *(float *)&param_1, unkC, (S_0015C6F0_Key *)unk8, (float *)param_2);
}

void func_0015C6F0(float *base, float v, int n, S_0015C6F0_Key *volatile up, float *out)
{
    int func_0001B1D0(...);
    S_0015C6F0_Key *lo;
    float t;
    float q1[4];
    float q0[4];
    if (up != 0 && n > 1) {
        if (func_0015C9A0(base, v, n, (float **)&lo, (float **)&up, &t) != 0) {
            func_0001B1D0(lo->q, q0);
            func_0001B1D0(up->q, q1);
            func_0015C7D0(q0, q1, out, t);
            func_0015C930(out, (int)up + 4);
            return;
        }
        func_0001B1D0(up->q, out);
        return;
    }
    func_0001B1D0(base + func_0015C640(base, n, v) * 2 - 1, out);
}

void func_0015C7D0(float *a, float *b, float *out, float t)
{
    float c;
    float sign;
    float theta;
    float inv;
    float sa;

    c = a[2] * b[2] + a[1] * b[1] + b[3] * a[3] + a[0] * b[0];
    if (c < D_00275544) {
        c = -c;
        sign = -1.0f;
    } else {
        sign = 1.0f;
    }
    if (c < D_002A8318) {
        theta = func_0014F7E0(c);
        inv = D_00275460 / func_0015C900(theta);
        sign = func_0015C900(theta * t) * inv * sign;
        sa = func_0015C900(theta - theta * t) * inv;
        out[0] = sa * a[0] + sign * b[0];
        out[1] = sa * a[1] + sign * b[1];
        out[2] = sa * a[2] + sign * b[2];
        out[3] = sa * a[3] + sign * b[3];
    } else {
        out[0] = a[0];
        out[1] = a[1];
        out[2] = a[2];
        out[3] = a[3];
    }
}

#pragma auto_inline(off)
float func_0015C900(float param_1)
{
    float lVar1;
    lVar1 = param_1 * param_1;
    return (((D_00287844 - D_00287848 * lVar1) * lVar1 - D_00287840) * lVar1 + D_00275460) * param_1;
}
#pragma auto_inline(on)

void func_0015C930(float *param_1, int param_2)
{
    int func_0001B1D0(...);
    float sum;
    float locals[4];
    func_0001B1D0(param_2, locals);
    sum = locals[0] * param_1[0];
    sum = sum + locals[1] * param_1[1];
    sum = sum + locals[3] * param_1[3];
    sum = sum + locals[2] * param_1[2];
    if (sum < D_00275544) {
        param_1[1] = -param_1[1];
        param_1[2] = -param_1[2];
        param_1[3] = -param_1[3];
        *param_1 = -*param_1;
    }
}

int func_0015C9A0(float *base, float v, int n, float **lo, float **up, float *t)
{
    int i = func_0015C640(base, n, v);
    if (i != n) {
        float *a = &base[i * 2];
        float *b = &base[(i - 1) * 2];
        *lo = b;
        *up = a;
        *t = (v - b[0]) / (a[0] - b[0]);
        return 1;
    }
    *lo = &base[(n - 2) * 2];
    float *p = &base[(n - 1) * 2];
    *up = p;
    *t = (v - p[0]) / (base[(i - 1) * 2] - base[(i - 2) * 2]);
    return 0;
}

void C_0015CA10::func_0015CA10(Quat_0015CA10 *q, float t)
{
    S_0015CA10_Key key;
    S_0015CA10_Key *arr;
    int n;
    int pos;
    int i;

    if (fC >= f10) {
        v6(f10 + 1);
    }
    func_0001B250(key.q, q);
    key.t = t;
    n = fC;
    arr = f14;
    pos = func_0015CAB0(arr, n, t);
    for (i = n; i > pos; i++) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    fC++;
}

int func_0015CAB0(S_0015CA10_Key *arr, int n, float t)
{
    int mid;
    int lo;
    int hi;

    if (n == 0) {
        return 0;
    }
    if (t >= arr[n - 1].t) {
        return n;
    }
    if (t < arr[0].t) {
        return 0;
    }
    lo = 0;
    hi = n;
    for (;;) {
        mid = (hi + lo) >> 1;
        if (t >= arr[mid].t) {
            if (t < arr[mid + 1].t) {
                return mid + 1;
            }
            lo = mid;
        } else {
            if (t >= arr[mid - 1].t) {
                return mid;
            }
            hi = mid;
        }
    }
}

void C_0015CB40::func_0015CB40(int a0, int a1) {
    int func_0015CB70(...);
    func_0015CB70(unk14, a0, unkC, unk8, a1);
}

void func_0015CB70(float *base, float v, int n, float *volatile up, float *out)
{
    float *lo;
    float t;
    float qb[4];
    float qa[4];

    if (up != 0 && n > 1) {
        if (func_0015CCC0(base, v, n, &lo, (float **)&up, &t) != 0) {
            func_0001B2E0(lo + 1, qa);
            func_0001B2E0(up + 1, qb);
            func_0015C7D0(qa, qb, out, t);
            func_0015CC50(out, (int)(up + 1));
            return;
        }
        func_0001B2E0(up + 1, out);
        return;
    }
    func_0001B2E0(&base[func_0015CAB0(base, n, v) * 3 - 2], out);
}

void func_0015CC50(float *param_1, int param_2)
{
    int func_0001B2E0(...);
    float sum;
    float locals[4];
    func_0001B2E0(param_2, locals);
    sum = locals[0] * param_1[0];
    sum = sum + locals[1] * param_1[1];
    sum = sum + locals[3] * param_1[3];
    sum = sum + locals[2] * param_1[2];
    if (sum < D_00275544) {
        param_1[1] = -param_1[1];
        param_1[2] = -param_1[2];
        param_1[3] = -param_1[3];
        *param_1 = -*param_1;
    }
}

int func_0015CCC0(float *base, float v, int hi, float **lo, float **up, float *t)
{
    int i = func_0015CAB0(base, hi, v);
    if (i != hi) {
        float *a = &base[i * 3];
        float *b = &base[(i - 1) * 3];
        *lo = b;
        *up = a;
        *t = (v - b[0]) / (a[0] - b[0]);
        return 1;
    }
    *lo = &base[(hi - 2) * 3];
    float *p = &base[(hi - 1) * 3];
    *up = p;
    *t = (v - p[0]) / (base[(i - 1) * 3] - base[(i - 2) * 3]);
    return 0;
}

void C_0015CD50::func_0015CD50(uint param_1)
{
  int in_ECX = (int)this;
  
  *(uint *)(in_ECX + 0xcc) = param_1 & 0xffffff;
  return;
}

void C_0015CD70::func_0015CD70(S_0015CD70_Vec4 *p)
{
    f24 = *p;
}

void func_0015CD90(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

C_0015CE00 *C_0015CE00::func_0015CE00(int a0)
{
 func_00157600(a0);
 unsigned char *q=&f26; *q=255; f24=0; f27 &= 0xf8;
 int value=D_002E293C;
 vtbl=&D_002878B4;
 int *p=&u[27]; p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
 p=&u[31]; p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
 u[0]=0; u[35]=0; u[36]=0; u[41]=0; u[1]=3;
 u[2]=0x3f800000; u[3]=0x3f800000; u[4]=0x3f800000; u[5]=0;
 u[6]=0x3f800000; u[7]=0x3f800000; u[8]=0x3f800000; u[9]=0;
 u[10]=0x3f800000; u[11]=0x3f800000; u[12]=0x3f800000; u[13]=0;
 u[14]=0; u[15]=0; u[16]=0; u[17]=0x3f800000; u[18]=0; u[19]=0;
 u[20]=value; u[21]=0x3f800000; u[22]=0x3f800000; u[23]=0; u[24]=0;
 u[26]=0x3fc90fdb; u[25]=0x3f490fdb; u[38]=0xbf800000; u[37]=-1;
 u[27]=D_002A801C; u[28]=D_002A8020; u[29]=D_002A8024; u[30]=D_002A8028;
 u[39]=0; u[40]=0;
 if(D_002A8010==255) D_002A8010=D_002AAEC8->func_001BC6E0(&D_002878A0);
 f26=D_002A8010;
 return this;
}

unsigned int C_0015CF60::func_0015CF60(void)
{
    unsigned int r;
    if (f28 == 4) {
        r = (int)f50 & 0xff;
        r |= (int)f5c << 8;
        r <<= 8;
        r |= (int)f54 & 0xff;
        r <<= 8;
        return ((int)f58 & 0xff) | r;
    } else {
        r = (int)f30 & 0xff;
        r |= (int)f3c << 8;
        r <<= 8;
        r |= (int)f34 & 0xff;
        r <<= 8;
        return ((int)f38 & 0xff) | r;
    }
}

void C_0015CFE0::func_0015CFE0(undefined4 param_1)
{
  int __stdcall func_001577A0(int, int);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0xb8) == 0) {
    *(undefined4 *)(in_ECX + 0xb8) = param_1;
    func_001577A0((int)(param_1), (int)(0));
  }
  return;
}

void C_0015CF60::func_0015D000(int a0, int a1, int a2)
{
    if (fcc == 0) {
        fcc = (S_0015CF60_Cell *)func_001E8A44(0x14);
    }
    fcc->f0 = a0;
    fcc->f8 = a1;
    fcc->f10 = a2;
    fcc->fc = 0;
    fcc->f4 = func_0015CF60();
}

void C_0015D070::func_0015D070(float a0, float a1)
{
    f8c = a0 * 0.017453290522098541259765625f;
    f90 = a1 * 0.017453290522098541259765625f;
}

void C_0015D0A0::func_0015D0A0(int a0, int a1)
{
    L_0015D0A0 l;
    float s = f78 * 0.5f;
    l.pos = f94;
    l.w = 1.0f;
    if (f2c == 3) {
        l.pos.x += s * f6c;
        l.pos.y += s * f70;
        l.pos.z += s * f74;
        l.t.x=s; l.t.y=s; l.t.z=s;
        *(V3_0015D0A0 *)&l.scl = l.t; *(int *)&l.scl.w = *(int *)&l.w;
    } else {
        l.t.x=f78; l.t.y=f78; l.t.z=f78;
        *(V3_0015D0A0 *)&l.scl = l.t; *(int *)&l.scl.w = *(int *)&l.w;
    }
    C_001938C0 *obj = (C_001938C0 *)func_001E8A44(0x28);
    if (obj) obj = obj->func_00193490();
    else obj = 0;
    fc8 = a0;
    fc4 = obj;
    obj->func_001938C0(f24,a0,a1,&l.pos,&l.scl,f78);
}

C_0015D1B0 *C_0015D1B0::func_0015D1B0(void)
{
    int *p;

    func_00157600(1);
    vtbl = &D_00287934;
    p = &f24;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    D_002E2930 = this;
    f24 = D_002A801C;
    f28 = D_002A8020;
    f2C = D_002A8024;
    f30 = D_002A8028;
    f34 = 0;
    f68 = 0;
    f78 = 0;
    f7C = 0;
    f80 = 0;
    f84 = 0;
    f88 = 0;
    f8C = 0;
    f74 = 0;
    f70 = 0;
    f6C = 0;
    f50 = 0;
    f64 = 0;
    f3C = 0;
    f38 = 0;
    f90 = -1;
    return this;
}

void C_0015D1B0::func_0015D250(void)
{
    int i;
    if (f6C != 0) {
        for (i = 0; i < f78; i++)
            ((C_Obj_0015D250 **)f6C)[i]->v2();
        func_001E891B((void *)f6C);
        f6C = 0;
    }
    if (f70 != 0) {
        for (i = 0; i < f78; i++)
            ((C_Obj_0015D250 **)f70)[i]->v2();
        func_001E891B((void *)f70);
        f70 = 0;
    }
    if (f74 != 0) {
        for (i = 0; i < f78; i++)
            ((C_Obj_0015D250 **)f74)[i]->v2();
        func_001E891B((void *)f74);
        f74 = 0;
    }
    f78 = 0;
    if (f50 != 0) {
        func_001E891B((void *)f50);
        f50 = 0;
    }
    if (f64 != 0) {
        func_001E891B((void *)f64);
        f64 = 0;
    }
    if (f3C != 0) {
        func_001E891B((void *)f3C);
        f3C = 0;
    }
    if (f38 != 0) {
        func_001E891B((void *)f38);
        f38 = 0;
    }
}
