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
    S_0012AB70Vec *f180p(void) { return &f180; }
    S_0012AB70Vec *f190p(void) { return &f190; }
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
int C_0012A870::func_0012A870(int a)
{
    f1c0 = V4Init_0012A870(f170.x - f1a0.x, f170.y - f1a0.y, f170.z - f1a0.z, 1.0f);
    f240 = sqrtf(f1c0.x * f1c0.x + f1c0.y * f1c0.y + f1c0.z * f1c0.z);
    f1a0 = f170;
    f244 = func_0014F7E0(f180.x * f1b0.x + f180.y * f1b0.y + f180.z * f1b0.z);
    if (f244 < D_00275544) {
        f244 = -f244;
    }
    f1b0 = f180;
    if (f21 & 4) {
        return 1;
    }
    if (f210 != 0) {
        f210--;
    }
    if (f20c != 0) {
        f20c--;
    }
    vtbl->f70(this);
    if (f28 != 0) {
        f28->func_00193950(&f24, &f170, &D_002A3E3C, 0);
        f2c = f28->f4;
    }
    func_00157A00(a);
}

void C_0012AAB0::func_0012AAB0(float param)
{
    if (param != D_00275544) {
        f1d0 = param;
    }
    f210 = D_002EFDB8[4] + 1;
}

void C_0012AAE0::func_0012AAE0(float param1, float param2)
{
    f1fc = AsmMaxF(D_00284038, param1);
    f200 = AsmMinF(D_0028403C, param2);
    ((C_0012AAE0_VCall *)this)->v29(f1fc, f200);
}

void func_0012A380(S_0012AB70Vec *dst, const S_0012AB70Vec *src);
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void C_0012AB70R::func_0012AB70(S_0012AB70Vec *param1, S_0012AB70Vec *param2, S_0012AB70Vec *param3, int *param4, float *param5)
{
    if (param1 != 0) {
        f170 = *param1;
    }
    if (param2 != 0) {
        func_0012A380(f180p(), param2);
    }
    if (param3 != 0) {
        func_0012A380(f190p(), param3);
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
void C_0012AC20::func_0012AC20(S_0012AB70Vec *p1, S_0012AB70Vec *p2, S_0012AB70Vec *p3, int *p4, float *p5)
{
    if (p1) *p1 = f170;
    if (p2) *p2 = f180;
    if (p3) *p3 = f190;
    if (p4) *p4 = f1d4;
    if (p5) *p5 = f1d0;
}

