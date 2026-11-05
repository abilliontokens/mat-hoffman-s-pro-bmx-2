/* 12 functions from 0x000B5260 to 0x000B6180, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
struct C_000B6080 {
    void func_000B6080(int param_1);
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

extern int D_0027D37C;
extern float D_002A2EC8;

struct V4_000B5260 {
    float x, y, z, w;
};


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
  float d[4];
  float row[4];
  int v;
  void func_0001E9E0(float *out, float *in);

  v = (**(code **)(*(int *)in_ECX + 0x6c))();
  (**(code **)(*(int *)in_ECX + 0x70))(vec4);
  ((C_00197F70 *)*(int *)(in_ECX + 0x30))->func_00197F70(vec3, vec4);
  d[0] = vec3[0] - *(float *)(v + 0x20);
  d[1] = vec3[1] - *(float *)(v + 0x24);
  d[2] = vec3[2] - *(float *)(v + 0x28);
  *(V4_000B5260 *)row = *(V4_000B5260 *)(v + 0x40);
  func_0001E9E0(w, row);
  *(float *)(in_ECX + 0x54) = d[0] * row[0] + d[1] * row[1] + d[2] * row[2];
}

int C_000B5950::func_000B5950(void)
{
  int in_ECX = (int)this;
  float f;
  int tmp;

  f = *(float *)((**(code **)(*(int *)in_ECX + 0x6c))() + 0x44);
  tmp = *(int *)&f & 0x7fffffff;
  if (*(float *)&tmp > D_002A2EC8) {
    return 1;
  }
  return 0;
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

