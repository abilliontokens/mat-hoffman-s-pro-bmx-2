/* 28 functions from 0x001D47C0 to 0x001D5760, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct S_001D5610_Obj {
    virtual void v0(int flags);
};

void *__stdcall func_001FF3C0(int size);
void *func_001E8A44(int size);

/* 0x10-byte aligned 4x4 float matrix */
struct __declspec(align(16)) S_001D5660_Mat {
    float m[16];
    __forceinline void identity(void)
    {
        _mm_store_ps(&m[0], _mm_setzero_ps());
        _mm_store_ps(&m[4], _mm_setzero_ps());
        _mm_store_ps(&m[8], _mm_setzero_ps());
        _mm_store_ps(&m[12], _mm_setzero_ps());
        m[0] = 1.0f;
        m[5] = 1.0f;
        m[10] = 1.0f;
        m[15] = 1.0f;
    }
};

struct C_001D5610 {
    void *vtbl;
    S_001D5610_Obj *f4;
    void *func_001D5610(int flags);
};

struct C_001D5660 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    void *f14;
    char pad18[8];
    S_001D5660_Mat f20;
    int f60;
    short *f64;
    void func_001D5660(int count, int arg2);
    void func_001D5720(void);
};

extern int D_0028F578;
extern int D_00284E94;
extern int D_0028F584;

static __forceinline void Init_001D48E0(int *p)
{
    p[0x20] = 0x3f800000;
    p[0x1f] = 0;
    p[0x1e] = 0;
    p[0x1d] = 0;
    for (int i = 0; i < 300; i++) {
        p[0x25 + i] = 0;
    }
    for (int i = 0; i < 300; i++) {
        p[0x25 + i] = i;
    }
}

extern int D_002ABD04;

void func_001FFBB0(void);
void __stdcall func_00200390(int index, int value);
void __stdcall func_00200510(int index, int value);
void __stdcall func_001FEE00(int index, int ptr, int size);
void __stdcall func_001FF8D0(int *out);
void __stdcall func_001FF900(int *out);
int __stdcall func_00201A90(int a, int *out);
int __stdcall func_00201B50(int a, int b, int c, int d, int e, int f);

struct C_001446B0 {
    void func_001446B0(int a0, int a1, int a2);
};

struct C_0014A650 {
    void func_0014A650(int a0);
};

struct C_00142D00 {
    void func_00142D00(int a0);
};

struct C_00149480 {
    void func_00149480(void);
};
extern C_00149480 *D_002F0630;

struct C_001D54F0 {
    int unk0;
    C_001446B0 *unk4;
    void func_001D54F0(void);
};

extern int D_002AA470;
extern int D_0028F5CC;
void *func_001E8A44(int size);

struct C_00144640 {
    C_00144640 *func_00144640(void);
    virtual void v0(int flags);
    virtual void v1(int a, int b);
    int unk4;
    int unk8;
    u8 unkC;
    char padD[3];
    void *unk10;
};

struct S_0012B2B0_Rect {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fC;
    u32 f10;
    u32 f14;
};

struct C_0012B2B0 {
    void func_0012B2B0(S_0012B2B0_Rect *in, S_0012B2B0_Rect *out);
};

struct S_002EFDB8 {
    int unk0;
    C_0012B2B0 *unk4;
};
extern S_002EFDB8 *D_002EFDB8;

/* XboxRenderQueueTweak */
struct C_001D5490 {
    int unk0;
    C_00144640 *unk4;
    void func_001D5490(void);
    void func_001D54B0(int a);
};

struct C_001D48A0;

/* XboxViewportChangeSurfaceData */
struct C_001D53A0 {
    C_00144640 *unk0;
    C_001D48A0 *unk4;
    void func_001D53A0(int a);
    void func_001D5430(S_0012B2B0_Rect *in, S_0012B2B0_Rect *out, int c);
};

struct C_001D4F40 {
    char pad0[0x6c];
    C_0014A650 *f6c;
    C_00142D00 *f70;
    void func_001D4F40(void);
};

struct C_001D5640 {
    int func_001D5640(u8 param_1);
};

struct C_001D48A0 {
    int unk0;
    int unk4;
    C_001D48A0* func_001D48A0(u8 param_1);
};

struct C_001D48E0 {
    int *func_001D48E0(void);
};

struct C_0014A630 {
    void func_0014A630();
};

struct C_001B65E0 {
    void func_001B65E0();
};

struct C_001D4B00 {
    char pad0[0x6c];
    C_0014A630 *f6c;
    C_001B65E0 *f70;
    int func_001D4B00(void);
};
struct C_001D5480 {
    int unk0;
    int unk4;
    C_001D5480* func_001D5480(void);
};

struct C_001D5350 {
    int unk0;
    int unk4;
    C_001D5350* func_001D5350(void);
};

struct C_001D5600 {
    char pad0[0x58];
    int unk58;
    void func_001D5600(void);
};

extern float D_00275460;
extern float D_00275F58;
int func_001B2BF0(int param_1);

struct C_001D5470 {
    C_001446B0 *unk0;
    int unk4;
    void func_001D5470(void);
};

struct C_001D5170 {
    int func_001D5110(int param);
    int func_001D5170(int param_1);
};

struct C_001D52F0 {
    char pad0[0x28];
    float unk28;
    char pad2C[0x4c - 0x2c];
    float unk4C;
    float unk50;
    char pad54[0x74 - 0x54];
    float unk74;
    float unk78;
    void func_001D52F0(float a, float b);
};

struct S_001D5360_Obj {
    virtual void Destroy(int flag);
    char pad4[8];
    unsigned char flagsC;
};

struct C_001D5360 {
    S_001D5360_Obj *unk0;
    S_001D5360_Obj *unk4;
    void func_001D5360(void);
};


C_001D48A0* C_001D48A0::func_001D48A0(u8 param_1)
{
  int func_001E891B(...);

  unk0 = (int)&D_0028F578;
  if (unk4 != 0) {
    func_001E891B(unk4);
  }
  unk0 = (int)&D_00284E94;
  if ((param_1 & 1) != 0) {
    func_001E891B(this);
  }
  return this;
}

int *C_001D48E0::func_001D48E0(void)
{
  int func_001827B0(...);
  int *in_ECX = (int *)this;

  func_001827B0();
  *in_ECX = (int)&D_0028F584;
  in_ECX[0x1f] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x20] = 0x3f800000;
  in_ECX[0x18] = 0x1b02;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  Init_001D48E0(in_ECX);
  in_ECX[0x24] = 0xffffffff;
  in_ECX[0x23] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  return in_ECX;
}

int C_001D4B00::func_001D4B00(void)
{
  f6c->func_0014A630();
  f70->func_001B65E0();
  return 1;
}

int func_001D4B20(void)
{
    if (D_002F0630 != 0 && D_002ABD04 != 0) {
        D_002F0630->func_00149480();
    }
    return 1;
}

void C_001D4F40::func_001D4F40(void)
{
    func_001FFBB0();
    func_00200390(0, 0);
    func_00200390(1, 0);
    func_00200390(2, 0);
    func_00200390(3, 0);
    func_00200510(0, 0);
    func_00200510(1, 0);
    func_00200510(2, 0);
    func_00200510(3, 0);
    func_001FEE00(0, 0, 0);
    func_001FEE00(1, 0, 0);
    func_001FEE00(2, 0, 0);
    func_001FEE00(3, 0, 0);
    func_001FEE00(4, 0, 0);
    func_001FEE00(5, 0, 0);
    f6c->func_0014A650(0);
    f70->func_00142D00(0);
}

int __stdcall func_001D5110(int param)
{
    int a[1];
    int b[4];
    int c[5];

    func_001FF8D0(a);
    func_001FF900(b);
    if (func_00201A90(b[0], c) != 0) {
        return 0;
    }
    return func_00201B50(b[0], b[1], c[4], 0, 3, param) >= 0;
}

int C_001D5170::func_001D5170(int param_1)
{
    return func_001D5110(func_001B2BF0(param_1));
}

void C_001D52F0::func_001D52F0(float a, float b)
{
    float r;

    unk50 = b;
    unk4C = a;
    r = D_00275460 / (b - a);
    unk74 = D_00275F58 * r;
    unk78 = r * b;
    unk28 = D_00275460 - D_00275460 / b;
}

C_001D5350* C_001D5350::func_001D5350(void) {
    unk0 = 0;
    unk4 = 0;
    return this;
}

void C_001D5360::func_001D5360(void)
{
    if (!(unk0->flagsC & 1)) {
        if (unk4 != 0) {
            unk4->Destroy(1);
            unk4 = 0;
        }
    }
    if (unk0 != 0) {
        unk0->Destroy(1);
        unk0 = 0;
    }
}

void C_001D53A0::func_001D53A0(int a)
{
    C_00144640 *p = (C_00144640 *)func_001E8A44(0x14);
    C_001D48A0 *q;

    unk0 = p != 0 ? p->func_00144640() : 0;
    unk0->v1(a, D_002AA470);
    unk0->unkC |= 1;
    unk0->unkC &= 0xfe;
    q = (C_001D48A0 *)func_001E8A44(8);
    if (q != 0) {
        q->unk0 = (int)&D_0028F578;
        q->unk4 = (int)func_001E8A44(0x18);
    } else {
        q = 0;
    }
    unk4 = q;
    unk0->unk10 = q;
}

void C_001D53A0::func_001D5430(S_0012B2B0_Rect *in, S_0012B2B0_Rect *out, int c)
{
    D_002EFDB8->unk4->func_0012B2B0(in, out);
    if (unk4 != 0) {
        *(S_0012B2B0_Rect *)unk4->unk4 = *in;
    }
}

void C_001D5470::func_001D5470(void)
{
    unk0->func_001446B0(unk4, 0, -1);
}

C_001D5480* C_001D5480::func_001D5480(void) {
    extern int D_0028F5CC;
    unk0 = (int)&D_0028F5CC;
    unk4 = 0;
    return this;
}

void C_001D5490::func_001D5490(void)
{
    unk0 = (int)&D_0028F5CC;
    if (unk4 != 0) {
        unk4->v0(1);
    }
}

void C_001D5490::func_001D54B0(int a)
{
    C_00144640 *p = (C_00144640 *)func_001E8A44(0x14);

    unk4 = p != 0 ? p->func_00144640() : 0;
    unk4->v1(a, D_002AA470);
}

void C_001D54F0::func_001D54F0(void)
{
    unk4->func_001446B0(0, 0, -1);
}

void C_001D5600::func_001D5600(void) {
    int __stdcall func_001D5190(int);
    func_001D5190(unk58);
}

void *C_001D5610::func_001D5610(int flags)
{
    int func_001E891B(...);
    extern int D_0028F5CC;
    vtbl = &D_0028F5CC;
    if (f4) {
        f4->v0(1);
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_001D5640::func_001D5640(u8 param_1)
{
  int func_001D5500(...);
  int func_001E891B(...);
  int in_ECX = (int)this;

  func_001D5500();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001D5660::func_001D5660(int count, int arg2)
{
    void *__stdcall func_001FF3C0(int size);
    void *func_001E8A44(int size);
    C_001D5660 * volatile self = this;
    S_001D5660_Mat * volatile p;
    S_001D5660_Mat *q;
    __m128 *v;
    int i;

    self->f8 = count;
    self->fC = count;
    self->f14 = func_001FF3C0(self->f8 * 0x18);
    self->f64 = (short *)func_001E8A44(self->fC * 2);
    for (i = 0; i < self->fC; i++) {
        self->f64[i] = (short)i;
    }
    self->f10 = arg2;
    p = &self->f20;
    q = p;
    v = (__m128 *)q;
    v[0] = _mm_setzero_ps();
    v[1] = _mm_setzero_ps();
    v[2] = _mm_setzero_ps();
    v[3] = _mm_setzero_ps();
    q->m[0] = 1.0f;
    q->m[5] = 1.0f;
    q->m[10] = 1.0f;
    q->m[15] = 1.0f;
}

/* end */
