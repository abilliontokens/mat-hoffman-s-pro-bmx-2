/* 12 functions from 0x000B5260 to 0x000B6180, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
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
    float vec3[4];
    float d[4];
    float *m;
    float len;

    ((C_00197F70 *)*(int *)((char *)this + 0x30))->func_00197F70(vec3, (float *)((char *)this + 0x34));
    m = (float *)*(int *)((char *)this + 0x24);
    d[0] = unk54 * m[16] + m[8];
    d[1] = unk54 * m[17] + m[9];
    d[2] = unk54 * m[18] + m[10];
    d[0] -= vec3[0];
    d[1] -= vec3[1];
    d[2] -= vec3[2];
    len = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
    if (len > *(float *)((char *)this + 0x60))
        return 1;
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
    float len, ang, t, step, absang;
    float m[16];
    float V[4];
    float d[4];
    float w[4];
    float ax[4];
    float *ap, *o;
    float *func_0001E9E0(float *out, float *v);

    ((C_00197F70 *)*(int *)(self + 0x30))->func_00197F70(m + 12, (float *)(self + 0x44));
    o = *(float **)(self + 0x28);
    d[0] = (*(float *)(self + 0x54) * o[16] + o[8]) - m[12];
    d[1] = (*(float *)(self + 0x54) * o[17] + o[9]) - m[13];
    d[2] = (*(float *)(self + 0x54) * o[18] + o[10]) - m[14];
    d[3] = 1.0f;
    ap = func_0001E9E0(m + 13, m);
    m[0] = ap[0]; m[1] = ap[1]; m[2] = ap[2]; m[3] = ap[3];
    len = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
    if (!(len > *(float *)(self + 0x60))) {
        return 1;
    }
    if (!(len < *(float *)(self + 0x58))) {
        t = dt * *(float *)(self + 0x68);
        len = len < t ? len : t;
    }
    func_0001E9E0(w, d);
    V[0] = len * w[0];
    V[1] = len * w[1];
    V[2] = len * w[2];
    V[3] = 1.0f;
    ((C_000B59E0_f30 *)*(int *)(self + 0x30))->func_00199900(V);
    ((C_000B59E0_f30 *)*(int *)(self + 0x30))->func_00197B40(m + 8, m + 4);
    func_0001E9E0(V, func_0001C610(ax, V, d));
    ang = func_0014F7E0(d[1] * D_00275544 + d[0] * D_00275544 + d[2]);
    len = ang;
    *(int *)&absang = *(int *)&ang & 0x7fffffff;
    if (absang > *(float *)(self + 0x64)) {
        step = len;
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

void func_000B6140(int param_1, int param_2)
{
    int p = *(int *)(param_1 + 0x60);
    *(int *)(p + 0x1e4) = param_2;
    *(int *)(p + 0x8c) = *(int *)(param_2 + 0x64);
}

