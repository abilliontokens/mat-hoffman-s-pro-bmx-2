/* 32 functions from 0x0012A870 to 0x0012B7D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct C_0012B330 {
    undefined4 func_0012B330(byte param_1);
};


extern float D_00275544;
extern int *D_002EFDB8;
extern float D_00284038;
extern float D_0028403C;

void func_0012A380(void *dst, int param);

struct S_0012AB70Vec {
    int v0;
    int v1;
    int v2;
    int v3;
};

struct C_0012AB70R {
    char pad0[0x170];
    S_0012AB70Vec f170;
    int f180[4];
    int f190[4];
    char pad1a0[0x30];
    float f1d0;
    int f1d4;
    char pad1d8[0x38];
    int f210;
    void func_0012AB70(S_0012AB70Vec *param1, int param2, int param3, int *param4, float *param5);
};

struct C_0012B510 {
    int unk0;
    void func_0012B510(void);
};

struct C_0012AAB0 {
    char pad0[0x1d0];
    float f1d0;
    char pad1d4[0x3c];
    int f210;
    void func_0012AAB0(float param);
};

struct C_0012AAE0 {
    char pad0[0x1fc];
    float f1fc;
    float f200;
    void func_0012AAE0(float param1, float param2);
};

struct C_0012AB70 {
    char pad0[0x170];
    int f170[4];
    char pad180[0x50];
    float f1d0;
    int f1d4;
    char pad1d8[0x38];
    int f210;
    void func_0012AB70(int *param1, int param2, int param3, int *param4, float *param5);
};
struct C_0012B510R {
    int unk0;
    C_0012B510R *func_0012B510(void);
};

struct C_0012B540 {
    int unk0;
    void func_0012B540(void);
};

extern float D_00275460;
extern int D_0028411C;

void func_000263B0(void *a, void *b, void *c);

struct C_0012AC20 {
    char pad0[0x170];
    S_0012AB70Vec f170;
    S_0012AB70Vec f180;
    S_0012AB70Vec f190;
    char pad1a0[0x30];
    float f1d0;
    int f1d4;
    void func_0012AC20(S_0012AB70Vec *p1, S_0012AB70Vec *p2, S_0012AB70Vec *p3, int *p4, float *p5);
};

struct C_0012B000 {
    char pad0[0x70];
    char f70[0x40];
    char fb0[0x40];
    char fspan[0x40];
    char ff0[0x10c];
    float f1fc;
    float f200;
    void func_0012B000(float param1, float param2);
};

struct CameraController {
    void *vtbl;
    char pad04[0x20];
    int f24;
    int f28;
    void *f2c;
    void *f30;
    void func_00157600(int a);
    CameraController *func_0012B550(int a);
};


void C_0012AAB0::func_0012AAB0(float param)
{
    if (param != D_00275544) {
        f1d0 = param;
    }
    f210 = D_002EFDB8[4] + 1;
}

void C_0012AAE0::func_0012AAE0(float param1, float param2)
{
    float r;
    _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&D_00284038), _mm_set_ss(param1)));
    f1fc = r;
    _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&D_0028403C), _mm_set_ss(param2)));
    f200 = r;
}

void C_0012AB70R::func_0012AB70(S_0012AB70Vec *param1, int param2, int param3, int *param4, float *param5)
{
    if (param1 != 0) {
        f170 = *param1;
    }
    if (param2 != 0) {
        func_0012A380(f180, param2);
    }
    if (param3 != 0) {
        func_0012A380(f190, param3);
    }
    if (param4 != 0) {
        f1d4 = *param4;
    }
    if (param5 != 0) {
        float v;
        v = *param5;
        if (v != D_00275544) {
            f1d0 = v;
        }
        f210 = D_002EFDB8[4] + 1;
    }
}

void func_0012B140(void) {
    int func_001576C0(...);
    func_001576C0();
}

undefined4 C_0012B330::func_0012B330(byte param_1)
{
  int func_0012B060(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012B060();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0012B510R *C_0012B510R::func_0012B510(void)
{
    extern int D_002840FC;
    unk0 = (int)&D_002840FC;
    return this;
}

void __stdcall func_0012B520(undefined4 *param_1)
{
  int iVar1;
  
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

void C_0012B540::func_0012B540(void) {
    extern int D_002840FC;
    unk0 = (int)&D_002840FC;
}

