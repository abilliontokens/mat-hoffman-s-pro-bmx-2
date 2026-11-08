/* 12 functions from 0x000B5260 to 0x000B6180, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
struct C_000B6080 {
    void func_000B6080(int param_1);
};

struct C_000B5260 {
    char pad0[0x54];
    float unk54;
    int func_000B5260(float dt);
};

struct C_000B5870 {
    char pad0[0x24];
    int unk24;
    int func_000B5870(void);
};

struct V16_000B5260 {
    int a, b, c, d;
};

struct C_000B5880 {
    char pad0[0x34];
    V16_000B5260 unk34;
    V16_000B5260 func_000B5880(void);
};

struct C_000B58B0 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void *v27();
    virtual void v28(void *);
    void func_000B58B0(void);
};

struct C_000B5950 {
    int func_000B5950(void);
};

struct C_000B60A0 {
    int unk0;
    void *func_000B60A0(int flags);
};

struct C_00197F70 {
    float *func_00197F70(float *param_1, float *param_2);
};

struct C_000B5990 {
    int vtbl;
    char pad0[0x54];
    float unk58;
    float unk5c;
    float unk60;
    float unk64;
    float unk68;
    float unk6c;
    C_000B5990 *func_000B5990(int param_1);
};

struct C_000B5120 {
    void func_000B5120(void);
};

struct C_000B51C0 {
    void func_000B51C0(void);
};

struct C_001D3F50 {
    void func_001D3F50(void);
};

struct C_000B6050 {
    char pad0[0x2c];
    int unk2c;
    int unk30;
    void func_000B6050(int param_1);
};

extern int D_0027D40C;

extern int D_0027D37C;
extern float D_002A2EC8;

struct V4_000B5260 {
    float x, y, z, w;
};

struct Vecs_000B5260 {
    float d[4];
    float a[4];
    float b[4];
    float c[4];
    float e[4];
    float local[4];
    float scaled[4];
    float n[4];
};

struct C_000B59E0_f30 {
    void func_00199900(float *a);
    void func_00197B40(float *a, float *b);
    float *func_00198040(float *a, float *b);
    void func_00199CF0(V4_000B5260 v, float f);
};
float *func_0001C610(float *out, float *a, float *b);
float func_0014F7E0(float x);
extern float D_00275544, D_00275F58;

struct Obj_000B58B0 {
    float pad0[8];
    V4_000B5260 pos;
    float pad1[4];
    V4_000B5260 dir;
};


int C_000B5260::func_000B5260(float dt)
{
    float local[4];
    float len;
    float d[4];
    float a[4];
    float b[4];
    float c[4];
    float e[4];
    float scaled[4];
    float n[4];
    float dot, ang, t, sgn, absang;
    void func_0001E9E0(float *out, float *v);

    ((C_00197F70 *)*(int *)((char *)this + 0x30))->func_00197F70(local, (float *)((char *)this + 0x34));
    {
        float *mm = (float *)*(int *)((char *)this + 0x24);
        float s = unk54;
        float p0 = s * mm[16] + mm[8];
        float p1 = s * mm[17] + mm[9];
        float p2 = s * mm[18] + mm[10];
        d[0] = p0 - local[0];
        d[1] = p1 - local[1];
        d[2] = p2 - local[2];
    }
    d[3] = 1.0f;
    e[0] = 0.0f; e[1] = 1.0f; e[2] = 0.0f; e[3] = 1.0f;
    a[0] = 0.0f; a[1] = 0.0f; a[2] = 0.0f; a[3] = 1.0f;
    b[0] = 0.0f; b[1] = 0.0f; b[2] = 0.0f; b[3] = 1.0f;
    len = AsmSqrtF(d[2] * d[2] + d[1] * d[1] + d[0] * d[0]);
    if (len > *(float *)((char *)this + 0x60)) {
        if (len > *(float *)((char *)this + 0x58)) {
            t = dt * *(float *)((char *)this + 0x68);
            len = AsmMinF(len, t);
        }
        func_0001E9E0(n, d);
        scaled[0] = n[0] * len;
        scaled[1] = n[1] * len;
        scaled[2] = n[2] * len;
        scaled[3] = 1.0f;
        ((C_000B59E0_f30 *)*(int *)((char *)this + 0x30))->func_00199900(scaled);
    }
    ((C_000B59E0_f30 *)*(int *)((char *)this + 0x30))->func_00197B40(a, b);
    func_0001C610(n, e, (float *)*(int *)((char *)this + 0x24) + 16);
    func_0001E9E0(d, n);
    dot = d[0] * a[0] + d[1] * a[1] + d[2] * a[2];
    if (!(dot > D_00275544)) {
        d[0] *= D_00275F58;
        d[1] *= D_00275F58;
        d[2] *= D_00275F58;
    }
    func_0001E9E0(n, a);
    a[0] = n[0]; a[1] = n[1]; a[2] = n[2]; a[3] = n[3];
    func_0001E9E0(scaled, d);
    d[0] = scaled[0]; d[1] = scaled[1]; d[2] = scaled[2]; d[3] = scaled[3];
    func_0001E9E0(e, func_0001C610(n, d, a));
    ang = func_0014F7E0(d[0] * a[0] + d[1] * a[1] + d[2] * a[2]);
    *(int *)&absang = *(int *)&ang & 0x7fffffff;
    if (absang > *(float *)((char *)this + 0x64)) {
        if (absang > *(float *)((char *)this + 0x5c)) {
            sgn = ang < D_00275544 ? -1.0f : 1.0f;
            *(int *)&len = *(int *)&ang & 0x7fffffff;
            t = dt * *(float *)((char *)this + 0x6c);
            len = AsmMinF(len, t);
            ang = len * sgn;
        }
    }
    ((C_000B59E0_f30 *)*(int *)((char *)this + 0x30))->func_00198040(d, c);
    ((C_000B59E0_f30 *)*(int *)((char *)this + 0x30))->func_00199CF0(*(V4_000B5260 *)d, ang);
    ((C_000B59E0_f30 *)*(int *)((char *)this + 0x30))->func_00197B40(a, b);
    func_0001E9E0(n, b);
    b[0] = n[0]; b[1] = n[1]; b[2] = n[2]; b[3] = n[3];
    func_0001E9E0(scaled, e);
    e[0] = scaled[0]; e[1] = scaled[1]; e[2] = scaled[2]; e[3] = scaled[3];
    func_0001C610(n, c, e);
    func_0001E9E0(d, n);
    c[0] = d[0]; c[1] = d[1]; c[2] = d[2]; c[3] = d[3];
    ang = func_0014F7E0(e[0] * b[0] + e[1] * b[1] + e[2] * b[2]);
    *(int *)&absang = *(int *)&ang & 0x7fffffff;
    if (absang > *(float *)((char *)this + 0x64)) {
        if (absang > *(float *)((char *)this + 0x5c)) {
            sgn = ang < D_00275544 ? -1.0f : 1.0f;
            *(int *)&len = *(int *)&ang & 0x7fffffff;
            t = dt * *(float *)((char *)this + 0x6c);
            len = AsmMinF(len, t);
            ang = len * sgn;
        }
        ((C_000B59E0_f30 *)*(int *)((char *)this + 0x30))->func_00198040(e, c);
        ((C_000B59E0_f30 *)*(int *)((char *)this + 0x30))->func_00199CF0(*(V4_000B5260 *)d, ang);
    }
    return 1;
}

int C_000B5870::func_000B5870(void) {
    return unk24;
}

V16_000B5260 C_000B5880::func_000B5880(void)
{
  return unk34;
}

void C_000B58B0::func_000B58B0(void)
{
  int in_ECX = (int)this;
  float w[4];
  float vec4[4];
  float vec3[4];
  float row[4];
  V4_000B5260 d;
  float *m;
  V4_000B5260 *r;
  float t;
  void func_0001E9E0(float *out, float *in);

  m = (float *)v27();
  v28(vec4);
  ((C_00197F70 *)*(int *)(in_ECX + 0x30))->func_00197F70(vec3, vec4);
  d.x = vec3[0] - m[8];
  d.y = vec3[1] - m[9];
  d.z = vec3[2] - m[10];
  r = (V4_000B5260 *)(m + 16);
  *(V4_000B5260 *)row = *r;
  func_0001E9E0(w, row);
  t = d.y * r->y;
  t += d.x * r->x;
  t += d.z * r->z;
  *(float *)(in_ECX + 0x54) = t;
}

int C_000B5950::func_000B5950(void)
{
  struct {
    volatile int self;
    volatile float f;
    volatile int tmp;
  } s;
  int bits;

  s.self = (int)this;
  s.f = *(float *)(((int (__fastcall *)(C_000B5950 *))(*(int *)(*(volatile int *)this + 0x6c)))(this) + 0x44);
  bits = *(volatile int *)&s.f;
  bits &= 0x7fffffff;
  s.tmp = bits;
  if (*(float *)&s.tmp > D_002A2EC8) {
    return 1;
  }
  return 0;
}

C_000B5990 *C_000B5990::func_000B5990(int param_1)
{
  void __stdcall func_000B50B0(int);

  func_000B50B0(param_1);
  vtbl = (int)&D_0027D40C;
  unk58 = 0.1f;
  unk5c = 0.03490658104419708251953125f;
  unk60 = 0.05f;
  unk64 = 0.017453290522098541259765625f;
  unk6c = 15.70796108245849609375f;
  unk68 = 10.0f;
  return this;
}

int __fastcall func_000B59E0(char *thiz, int, float dt)
{
    char * volatile self = thiz;
    float len, ang, t, step, absang, sgn, dot, s;
    float ax[4];
    float w[4];
    float d[4];
    float V[4];
    float m[16];
    float vec2[4];
    float *ap, *o;
    V4_000B5260 fin;
    float *func_0001E9E0(float *out, float *v);

    ((C_00197F70 *)*(int *)(thiz + 0x30))->func_00197F70(m + 12, (float *)(thiz + 0x44));
    d[3] = 1.0f;
    o = *(float **)(self + 0x28);
    s = *(float *)(self + 0x54);
    {
        float p0_ = s * o[16] + o[8];
        float p1_ = s * o[17] + o[9];
        float p2_ = s * o[18] + o[10];
        d[0] = p0_ - m[12];
        d[1] = p1_ - m[13];
        d[2] = p2_ - m[14];
    }
    m[0] = 0.0f; m[1] = 1.0f; m[2] = 0.0f; m[3] = 1.0f;
    m[4] = 0.0f; m[5] = 0.0f; m[6] = 0.0f; m[7] = 1.0f;
    m[8] = 0.0f; m[9] = 0.0f; m[10] = 0.0f; m[11] = 1.0f;
    ap = func_0001E9E0(m + 13, m);
    m[0] = ap[0]; m[1] = ap[1]; m[2] = ap[2]; m[3] = ap[3];
    len = AsmSqrtF(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
    if (!(len > *(float *)(self + 0x60))) {
        return 1;
    }
    if (!(len < *(float *)(self + 0x58))) {
        t = dt * *(float *)(self + 0x68);
        len = AsmMinF(len, t);
    }
    func_0001E9E0(w, d);
    V[0] = len * w[0];
    V[1] = len * w[1];
    V[2] = len * w[2];
    V[3] = 1.0f;
    ((C_000B59E0_f30 *)*(int *)(self + 0x30))->func_00199900(V);
    ((C_000B59E0_f30 *)*(int *)(self + 0x30))->func_00197B40(m + 8, m + 4);
    func_0001E9E0(d, ((C_000B59E0_f30 *)*(int *)(self + 0x30))->func_00198040(ax, m));
    func_0001E9E0(V, func_0001C610(ax, V, d));
    ang = func_0014F7E0(d[1] * D_00275544 + d[0] * D_00275544 + d[2]);
    len = ang;
    *(int *)&absang = *(int *)&ang & 0x7fffffff;
    if (absang > *(float *)(self + 0x64)) {
        if (absang < *(float *)(self + 0x5c)) {
            step = ang;
        } else {
            sgn = ang < D_00275544 ? -1.0f : 1.0f;
            *(int *)&len = *(int *)&ang & 0x7fffffff;
            t = dt * *(float *)(self + 0x6c);
            len = AsmMinF(len, t);
            step = len * sgn;
        }
        ((C_000B59E0_f30 *)*(int *)(self + 0x30))->func_00199CF0(*(V4_000B5260 *)V, step);
    }
    ((C_000B59E0_f30 *)*(int *)(self + 0x30))->func_00197B40(m + 8, m + 4);
    V[0] = 0.0f; V[1] = 0.0f; V[2] = 1.0f; V[3] = 1.0f;
    w[0] = 0.0f; w[1] = 1.0f; w[2] = 0.0f; w[3] = 1.0f;
    o = *(float **)(self + 0x28);
    func_0001E9E0(vec2, func_0001C610(ax, o + 16, m));
    dot = vec2[0] * m[4] + vec2[1] * m[5] + vec2[2] * m[6];
    if (!(dot > D_00275544)) {
        vec2[0] *= D_00275F58;
        vec2[1] *= D_00275F58;
        vec2[2] *= D_00275F58;
    }
    func_0001E9E0(V, ((C_000B59E0_f30 *)*(int *)(self + 0x30))->func_00198040(ax, vec2));
    func_0001C610(ax, V, w);
    fin = *(V4_000B5260 *)func_0001E9E0(w + 1, ax);
    ang = func_0014F7E0(V[0] * D_00275544 + V[1] + V[2] * D_00275544);
    len = ang;
    *(int *)&absang = *(int *)&ang & 0x7fffffff;
    if (absang > *(float *)(self + 0x64)) {
        if (absang < *(float *)(self + 0x5c)) {
            step = ang;
        } else {
            sgn = ang < D_00275544 ? -1.0f : 1.0f;
            *(int *)&len = *(int *)&ang & 0x7fffffff;
            t = dt * *(float *)(self + 0x6c);
            len = AsmMinF(len, t);
            step = len * sgn;
        }
        ((C_000B59E0_f30 *)*(int *)(self + 0x30))->func_00199CF0(fin, step);
    }
    return 1;
}

void C_000B6050::func_000B6050(int param_1)
{
  int in_ECX = (int)this;

  unk2c = param_1;
  unk30 = *(int *)(param_1 + 0x22c);
  ((C_000B5120 *)in_ECX)->func_000B5120();
  ((C_000B51C0 *)in_ECX)->func_000B51C0();
  ((C_001D3F50 *)in_ECX)->func_001D3F50();
}

void C_000B6080::func_000B6080(int param_1)
{
  int func_000B58B0(...);
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x34);
  func_000B58B0();
  return;
}

void *C_000B60A0::func_000B60A0(int flags)
{
  void func_00157660();
  void func_001E891B(void *);

  unk0 = (int)&D_0027D37C;
  func_00157660();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

void func_000B60D0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void func_000B6140(int param_1, int param_2)
{
    int p = *(int *)(param_1 + 0x60);
    *(int *)(p + 0x1e4) = param_2;
    *(int *)(p + 0x8c) = *(int *)(param_2 + 0x64);
}

