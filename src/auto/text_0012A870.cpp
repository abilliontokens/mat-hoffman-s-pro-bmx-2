/* 32 functions from 0x0012A870 to 0x0012B7D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct C_0012B1D0 {
    void func_0012B1D0(undefined4 *param_1);
};

struct C_0012B390 {
    undefined4 func_0012B390(undefined4 param_1, undefined4 param_2, undefined4 param_3);
};

struct C_0012B330 {
    undefined4 func_0012B330(byte param_1);
};


extern float D_00275544;
extern int *D_002EFDB8;
extern float D_00284038;
extern float D_0028403C;

void func_0012A380(void *dst, int param);

struct S_0012AB70Vec;
inline void Vec_Normalize(void *dst, int src) { if (src) func_0012A380(dst, src); }

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
    char f70[0x28];
    float f98;
    float f9c;
    char pada0[0x10];
    char fb0[0x40];
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
    void func_00157660(void);
    CameraController *func_0012B550(int a);
    CameraController *func_0012B790(byte flags);
};

struct S_002EFDB8 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    void func_00182830(void *p);
};

struct S_002A8490 {
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
    virtual void v15(void *a, void *b, void *c, void *d);
    virtual void v16(void **p);
};
extern S_002A8490 *D_002A8490;

struct S_Camera28 {
    void func_00193500(void);
};

struct Camera {
    void *vtbl;
    char pad04[0x24];
    S_Camera28 *f28;
    char pad2c[0x1e4];
    int f210;
    char pad214[0x10];
    int f224;
    void func_0012B060(void);
    void func_0012B110(void);
    int func_0012B150(void);
    void func_001576D0(void);
};

extern int D_00284074;


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

void func_0012A380(S_0012AB70Vec *dst, const S_0012AB70Vec *src);
void C_0012AB70R::func_0012AB70(S_0012AB70Vec *param1, int param2, int param3, int *param4, float *param5)
{
    if (param1 != 0) {
        f170 = *param1;
    }
    Vec_Normalize(f180, param2);
    Vec_Normalize(f190, param3);
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

void C_0012AC20::func_0012AC20(S_0012AB70Vec *p1, S_0012AB70Vec *p2, S_0012AB70Vec *p3, int *p4, float *p5)
{
    if (p1) *p1 = f170;
    if (p2) *p2 = f180;
    if (p3) *p3 = f190;
    if (p4) *p4 = f1d4;
    if (p5) *p5 = f1d0;
}

void C_0012B000::func_0012B000(float param1, float param2)
{
    f1fc = param1;
    f200 = param2;
    float f = D_00275460 / (D_00275460 - param1 / param2);
    f98 = f;
    f9c = -(f * param1);
    func_000263B0(ff0, fb0, f70);
}

void Camera::func_0012B060(void)
{
    int func_001E891B(...);
    int func_0014FE50(...);
    S_Camera28 *p = f28;
    void *arr[4];
    int i;

    vtbl = (void *)&D_00284074;
    if (p != 0) {
        p->func_00193500();
        func_001E891B(p);
    }
    if (f224 != 0) {
        func_0014FE50(f224);
    }
    D_002A8490->v16(arr);
    for (i = 0; i < 4; i++) {
        if (arr[i] == (void *)this) {
            arr[i] = 0;
        }
    }
    D_002A8490->v15(arr[0], arr[1], arr[2], arr[3]);
    if (D_002EFDB8 != 0 && D_002EFDB8[1] == (int)this) {
        ((S_002EFDB8 *)D_002EFDB8)->func_00182830(0);
    }
    ((CameraController *)this)->func_00157660();
}

void Camera::func_0012B110(void)
{
    func_001576D0();
    ((S_002EFDB8 *)D_002EFDB8)->func_00182830(this);
    f210 = D_002EFDB8[4] + 1;
}

void func_0012B140(void) {
    int func_001576C0(...);
    func_001576C0();
}

int Camera::func_0012B150(void)
{
    int func_00157AE0(...);
    func_00157AE0();
    f210 = D_002EFDB8[4] + 1;
    return 1;
}

void C_0012B1D0::func_0012B1D0(undefined4 *param_1)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x1e0);
  param_1[2] = *(int *)(in_ECX + 0x1e8) + *(int *)(in_ECX + 0x1e0);
  param_1[1] = *(undefined4 *)(in_ECX + 0x1e4);
  param_1[3] = *(int *)(in_ECX + 0x1ec) + *(int *)(in_ECX + 0x1e4);
  return;
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

undefined4 C_0012B390::func_0012B390(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  int __stdcall func_0012A7C0(int, int, int, int);
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x204) = param_2;
  *(undefined4 *)(in_ECX + 0x208) = param_3;
  *(undefined4 *)(in_ECX + 0x1dc) = param_1;
  func_0012A7C0((int)(0), (int)(0), (int)(param_2), (int)(param_3));
  return 1;
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

CameraController *CameraController::func_0012B550(int a)
{
    func_00157600(a);
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f30 = 0;
    vtbl = (void *)&D_0028411C;
    return this;
}

CameraController *CameraController::func_0012B790(byte flags)
{
    int func_001E8390(...);
    int func_001E891B(...);
    vtbl = (void *)&D_0028411C;
    if (f2c != 0) {
        func_001E8390(f2c);
    }
    func_00157660();
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}

