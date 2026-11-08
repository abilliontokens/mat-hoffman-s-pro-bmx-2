/* 32 functions from 0x0012A870 to 0x0012B7D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

static __forceinline float Max_0012AAE0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Min_0012AAE0(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);
extern float D_002A3E34;
extern float D_002A3E38;
extern float D_00284034;
extern float D_002755E4;

struct C_0012B170 {
    int func_00157BF0(int a, int b);
    int func_0012B170(int a, int b);
};

struct C_0012B190 {
    char pad0[0x204];
    int f204;
    int f208;
    void func_0012A7C0(int x, int y, int w, int h);
    int func_0012B190(int x, int y, int w, int h);
};

struct C_0012B210 {
    char pad0[0x1e8];
    u32 f1e8;
    u32 f1ec;
    void func_0012B210(int *out);
};

struct S_0012B2B0_Rect {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10;
    u32 f14;
};

struct C_0012B2B0 {
    char pad0[0x1e0];
    S_0012B2B0_Rect f1e0;
    void func_0012B2B0(S_0012B2B0_Rect *in, S_0012B2B0_Rect *out);
};

struct VT_0012B410 {
    char pad0[0x70];
    void (__fastcall *f70)(void *self);
};

struct C_0012B410 {
    VT_0012B410 *vtbl;
    char pad04[0x1d];
    byte f21;
    char pad22[0x1ba];
    int f1dc;
    char pad1e0[0x24];
    int f204;
    int f208;
    void func_001D3F50(void);
    void func_0012A7C0(int x, int y, int w, int h);
    C_0012B410 *func_0012B410(int a, int b, int c);
};

struct C_0012B750 {
    undefined4 func_0012B750(undefined4 param_1);
};

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
extern int *D_002EFDB8;

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
    S_0012AB70Vec f180;
    S_0012AB70Vec f190;
    char pad1a0[0x30];
    float f1d0;
    int f1d4;
    char pad1d8[0x38];
    int f210;
    void func_0012AB70(S_0012AB70Vec *param1, int param2, int param3, int *param4, float *param5);
    void func_0012AB70(S_0012AB70Vec *param1, S_0012AB70Vec *param2, S_0012AB70Vec *param3, int *param4, float *param5);
};

void func_0012A380(S_0012AB70Vec *dst, const S_0012AB70Vec *src);
static inline void Vec_AssignFrom(S_0012AB70Vec *src, S_0012AB70Vec *dst)
{
    func_0012A380(dst, src);
}

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
    int func_0012B3D0(void);
};

/* The object's vtable: slot 29 (+0x74) takes the two clamped floats. */
struct C_0012AAE0_VCall {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(float a, float b);
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

struct C_0012ACC0 {
    char pad0[0x170];
    float pos[4];
    float forward[4];
    float up[4];
    char pad1a0[0x70];
    int stamp;
    int func_0012ACC0(float x, float y, float z, float w);
};
static __forceinline void Cross_0012ACC0(float * volatile dst, const float *a, const float *b)
{
    const float * volatile pa = a, * volatile pb = b;
    __m128 va = _mm_loadu_ps(pa);
    __m128 vb = _mm_loadu_ps(pb);
    __m128 sa = va, sb = vb;
    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(dst, va);
}

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
    void func_0012B580(void);
    CameraController *func_0012B790(byte flags);
    void func_00157A00(int a);
    void func_0012B5E0(int a);
};

struct S_0012B5E0_Cam {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(int a);
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29();
    virtual void v30(S_0012AB70Vec v);
    void func_0012AC20(S_0012AB70Vec *p1, S_0012AB70Vec *p2, S_0012AB70Vec *p3, int *p4, float *p5);
    void func_0012AB70(S_0012AB70Vec *p1, S_0012AB70Vec *p2, S_0012AB70Vec *p3, int *p4, float *p5);
};

struct S_0012B5E0_Ctl {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(int a, int *flag, S_0012AB70Vec *pos, S_0012AB70Vec *out, float *fov, S_0012AB70Vec *tgt, S_0012AB70Vec *up, int *roll);
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
    int f0;
    int f4;
    void func_00193500(void);
    void func_00193870(void *p);
    void func_00193950(void *a, void *b, void *c, int d);
};

struct S_002EFDB8V {
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
    virtual void v10(int *rect, int flags);
};

struct Camera {
    void *vtbl;
    char pad04[0x20];
    int f24;
    S_Camera28 *f28;
    char pad2c[0x1b4];
    int f1e0;
    int f1e4;
    int f1e8;
    int f1ec;
    char pad1f0[0xc];
    float f1fc;
    float f200;
    char pad204[0x8];
    int f20c;
    int f210;
    char pad214[0x10];
    int f224;
    void func_0012B060(void);
    void func_0012B110(void);
    void func_0012B350(void);
    int func_0012B150(void);
    void func_0012B470(void);
    void func_001576D0(void);
    void func_00157920(void);
};

struct V4_0012A870 {
    float x, y, z, w;
};

struct V4Init_0012A870 : V4_0012A870 {
    V4Init_0012A870(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

struct VT_0012A870 {
    char pad0[0x70];
    void (__fastcall *f70)(void *self);
};

extern int D_002A3E3C;
float func_0014F7E0(float x);

/* Camera::Update (virtual slot 12): tracks velocity/heading deltas, then ticks timers and the attached camera node */
struct C_0012A870 {
    VT_0012A870 *vtbl;
    char pad04[0x1d];
    byte f21;
    char pad22[2];
    int f24;
    S_Camera28 *f28;
    int f2c;
    char pad30[0x140];
    V4_0012A870 f170;
    V4_0012A870 f180;
    char pad190[0x10];
    V4_0012A870 f1a0;
    V4_0012A870 f1b0;
    V4_0012A870 f1c0;
    char pad1d0[0x3c];
    int f20c;
    int f210;
    char pad214[0x2c];
    float f240;
    float f244;
    int func_0012A870(int a);
    void func_00157A00(int a);
};

struct C_0012B5B0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad04[0x2c];
    int f30;
    C_0012B5B0 *func_0012B5B0(int param_1);
};

extern int D_00284074;

float func_0014F600(float x);

struct __declspec(align(16)) S_0012AEC0_Mat {
    float m[16];
    void func_000264C0(S_0012AEC0_Mat *src);
};

S_0012AEC0_Mat *func_00161AE0(S_0012AEC0_Mat *out, S_0012AB70Vec a, S_0012AB70Vec b, S_0012AB70Vec c, int angle);
S_0012AEC0_Mat *func_00161AA0(S_0012AEC0_Mat *out, float a1, float a2, float a3, float a4);

/* Camera: rebuilds the view/projection matrices and the field-of-view factor */
struct C_0012AEC0 {
    char pad0[0x70];
    S_0012AEC0_Mat f70;
    S_0012AEC0_Mat fb0;
    S_0012AEC0_Mat ff0;
    char pad130[0x40];
    S_0012AB70Vec f170;
    S_0012AB70Vec f180;
    S_0012AB70Vec f190;
    char pad1a0[0x30];
    float f1d0;
    int f1d4;
    float f1d8;
    char pad1dc[0xc];
    unsigned int f1e8;
    char pad1ec[0xc];
    float f1f8;
    float f1fc;
    float f200;
    void func_0012AEC0(void);
};


extern "C" float __cdecl sqrtf(float);

void func_0012A380(S_0012AB70Vec *dst, const S_0012AB70Vec *src);

void C_0012AEC0::func_0012AEC0(void)
{
    S_0012AEC0_Mat tmp;
    float num;
    float half;

    fb0.func_000264C0(func_00161AE0(&tmp, f170, f180, f190, f1d4));
    f70.func_000264C0(func_00161AA0(&tmp, f1fc, f200, f1d0 * 0.0174532905f, D_00275460 / f1f8));
    func_000263B0(&ff0, &fb0, &f70);
    num = (float)f1e8 * 0.5f;
    half = f1d0 * 0.5f;
    f1d8 = num / func_0014F600(half * 0.0174532905f);
}

void C_0012B000::func_0012B000(float param1, float param2)
{
    struct Clip2 { float a, b; };
    *(Clip2 *)&f1fc = *(Clip2 *)&param1;
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

int C_0012B170::func_0012B170(int a, int b)
{
    func_00157BF0(a, b);
    return 0;
}

int C_0012B190::func_0012B190(int x, int y, int w, int h)
{
    if (w > f204) {
        w = f204;
    }
    if (h > f208) {
        h = f208;
    }
    func_0012A7C0(x, y, w, h);
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

void C_0012B210::func_0012B210(int *out)
{
    int *p;
    float f;

    out[0] = 0;
    p = &out[2];
    f = (float)(int)this->f1e8;
    if ((int)this->f1e8 < 0) f += D_002755E4;
    f = f / D_002A3E34;
    AsmFloatToInt(f, p);

    out[1] = 0;
    p = &out[3];
    f = (float)(int)this->f1ec;
    if ((int)this->f1ec < 0) f += D_002755E4;
    f = f / D_002A3E38;
    AsmFloatToInt(f, p);
}

void C_0012B2B0::func_0012B2B0(S_0012B2B0_Rect *in, S_0012B2B0_Rect *out)
{
    if (out != 0) {
        memcpy(out, &f1e0, 0x18);
        out->f4 = (int)((float)out->f4 - D_00284034);
    }
    memcpy(&f1e0, in, 0x18);
    f1e0.f4 = (int)((float)f1e0.f4 + D_00284034);
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

void Camera::func_0012B350(void)
{
    int func_001E891B(...);
    if (f28 != 0) {
        f28->func_00193870(&f24);
        S_Camera28 *p = f28;
        if (p != 0) {
            p->func_00193500();
            func_001E891B(p);
        }
        f28 = 0;
    }
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

int C_0012AAE0::func_0012B3D0(void)
{
    if (f200 != D_0028403C || f1fc != D_00284038) {
        func_0012AAE0(D_00284038, D_0028403C);
    }
    return 1;
}

C_0012B410 *C_0012B410::func_0012B410(int a, int b, int c)
{
    func_001D3F50();
    f204 = b;
    f208 = c;
    f1dc = a;
    func_0012A7C0(0, 0, b, c);
    vtbl->f70(this);
    if (f21 & 1) {
        ((S_002EFDB8 *)D_002EFDB8)->func_00182830(this);
    }
    return this;
}

void Camera::func_0012B470(void)
{
    int rect[4];

    if (f20c != 0) {
        rect[0] = f1e0;
        rect[1] = f1e4;
        rect[2] = f1e0 + f1e8;
        rect[3] = f1e4 + f1ec;
        ((S_002EFDB8V *)D_002EFDB8)->v10(rect, 0);
    }
    if (f200 != D_0028403C || f1fc != D_00284038) {
        ((C_0012AAE0 *)this)->func_0012AAE0(D_00284038, D_0028403C);
    }
    func_00157920();
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

void CameraController::func_0012B580(void)
{
    int func_001E8390(...);
    vtbl = (void *)&D_0028411C;
    if (f2c != 0) {
        func_001E8390(f2c);
    }
    func_00157660();
}

C_0012B5B0 *C_0012B5B0::func_0012B5B0(int param_1)
{
    int func_001D3F50(...);

    if (func_001D3F50() != 0) {
        if (param_1 != 0) {
            f30 = param_1;
            return this;
        }
        v2();
    }
    return 0;
}

void CameraController::func_0012B5E0(int a)
{
    S_0012AB70Vec pos;
    S_0012AB70Vec up;
    S_0012AB70Vec tgt;
    S_0012AB70Vec out;
    int flag;
    int roll;
    float fov;

    *(float *)&pos.v2 = 0.0f; *(float *)&pos.v1 = 0.0f; *(float *)&pos.v0 = 0.0f; *(float *)&pos.v3 = 1.0f;
    *(float *)&up.v2 = 0.0f; *(float *)&up.v1 = 0.0f; *(float *)&up.v0 = 0.0f; *(float *)&up.v3 = 1.0f;
    *(float *)&tgt.v2 = 0.0f; *(float *)&tgt.v1 = 0.0f; *(float *)&tgt.v0 = 0.0f; *(float *)&tgt.v3 = 1.0f;
    *(float *)&out.v2 = 0.0f; *(float *)&out.v1 = 0.0f; *(float *)&out.v0 = 0.0f; *(float *)&out.v3 = 1.0f;
    flag = 1;
    ((S_0012B5E0_Cam *)f30)->func_0012AC20(&pos, &tgt, &up, &roll, &fov);
    ((S_0012B5E0_Ctl **)f2c)[f28]->v3(a, &flag, &pos, &out, &fov, &tgt, &up, &roll);
    if (flag) {
        ((S_0012B5E0_Cam *)f30)->func_0012AB70(&pos, 0, &up, &roll, &fov);
        ((S_0012B5E0_Cam *)f30)->v30(out);
    } else {
        ((S_0012B5E0_Cam *)f30)->func_0012AB70(&pos, &tgt, &up, &roll, &fov);
    }
    ((S_0012B5E0_Cam *)f30)->v12(a);
    func_00157A00(a);
}

undefined4 C_0012B750::func_0012B750(undefined4 param_1)
{
  int func_001E83E8(...);
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = func_001E83E8(*(undefined4 *)(in_ECX + 0x2c),*(int *)(in_ECX + 0x24) * 4 + 4);
  *(int *)(in_ECX + 0x2c) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + *(int *)(in_ECX + 0x24) * 4) = param_1;
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
  return 1;
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
