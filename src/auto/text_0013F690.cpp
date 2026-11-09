/* 23 functions from 0x0013F690 to 0x00140680, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
struct C_0013C8A0 {
    void func_0013C8A0(int key, void *out, int size, int flag);
};
extern C_0013C8A0 *D_002BEAAC;
void *func_001E8A44(int size);
struct C_001449B0 {
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
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void load(int key);
    char pad4[0x2c];
    void func_001449B0(int flag);
    C_001449B0(int flag = 1);
    ~C_001449B0();
    static void *operator new[](unsigned int size) { return func_001E8A44(size); }
};
struct DXInstanceData {
    void *vtbl;
    int count;
    C_001449B0 *items;
    void func_0013FAC0(int key);
};

void __fastcall func_001FEC30(int n, void *p);
int __fastcall func_001FEBD0(int n, void *p);

struct __declspec(align(16)) S_001401C0_Mat {
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
    __forceinline void zero(void)
    {
        __m128 z = _mm_setzero_ps();

        _mm_store_ps(&m[0], z);
        _mm_store_ps(&m[4], z);
        _mm_store_ps(&m[8], z);
        _mm_store_ps(&m[12], z);
    }
    /* this = transpose(*src) */
    __forceinline void transpose(const S_001401C0_Mat *src)
    {
        const float *s = src->m;
        __m128 a, b, c, d;

        a = _mm_loadl_pi(a, (const __m64 *)&s[0]);
        a = _mm_loadh_pi(a, (const __m64 *)&s[4]);
        b = _mm_loadl_pi(b, (const __m64 *)&s[2]);
        b = _mm_loadh_pi(b, (const __m64 *)&s[6]);
        c = _mm_loadl_pi(c, (const __m64 *)&s[8]);
        c = _mm_loadh_pi(c, (const __m64 *)&s[12]);
        d = _mm_loadl_pi(d, (const __m64 *)&s[10]);
        d = _mm_loadh_pi(d, (const __m64 *)&s[14]);
        _mm_store_ps(&m[0], _mm_shuffle_ps(a, c, 0x88));
        _mm_store_ps(&m[4], _mm_shuffle_ps(a, c, 0xdd));
        _mm_store_ps(&m[8], _mm_shuffle_ps(b, d, 0x88));
        _mm_store_ps(&m[12], _mm_shuffle_ps(b, d, 0xdd));
    }
    /* *out = (*in as a point) * this, w forced to 1 */
    __forceinline void xform(float *in, float *out)
    {
        __m128 v = _mm_loadu_ps(in);
        __m128 r0 = _mm_load_ps(&m[0]);
        _mm_storeh_pi((__m64 *)(out + 2), v);
        __m128 r1 = _mm_load_ps(&m[4]);
        out[3] = 1.0f;
        __m128 r2 = _mm_load_ps(&m[8]);
        v = _mm_loadh_pi(v, (const __m64 *)(out + 2));
        r0 = _mm_mul_ps(r0, v);
        r1 = _mm_mul_ps(r1, v);
        r2 = _mm_mul_ps(r2, v);
        __m128 lo = _mm_unpacklo_ps(r0, r1);
        __m128 hi = _mm_unpackhi_ps(r0, r1);
        __m128 junk;
        junk = _mm_movehl_ps(junk, r2);
        lo = _mm_add_ps(lo, hi);
        r2 = _mm_add_ps(r2, junk);
        hi = _mm_movehl_ps(hi, lo);
        lo = _mm_movelh_ps(lo, r2);
        hi = _mm_shuffle_ps(hi, r2, 0x14);
        lo = _mm_add_ps(lo, hi);
        _mm_storeu_ps(out, lo);
        out[3] = 1.0f;
    }
};

static __forceinline void Mat_Copy_0013FD50(S_001401C0_Mat * volatile dst, const S_001401C0_Mat * volatile src)
{
    const S_001401C0_Mat *s = src;
    S_001401C0_Mat *d = dst;
    __m128 a = *(const __m128 *)&s->m[0];
    __m128 b = *(const __m128 *)&s->m[4];
    __m128 c = *(const __m128 *)&s->m[8];
    __m128 e = *(const __m128 *)&s->m[12];
    *(__m128 *)&d->m[0] = a;
    *(__m128 *)&d->m[4] = b;
    *(__m128 *)&d->m[8] = c;
    *(__m128 *)&d->m[12] = e;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct S_001401C0_Info {
    char pad0[0x30];
    int f30;
};

/* DXMeshVertexShaderItem */
struct C_001401C0 {
    void *vtbl;
    char pad4[0xC];
    char f10[0x40];
    char f50[0x40];
    char f90[0x80];
    char f110[0x40];
    char f150[0x40];
    char f190[0x10];
    S_001401C0_Info *f1A0;
    void func_001401C0(void);
    C_001401C0 *func_0013FD50(S_001401C0_Info *info);
};

struct C_0013FBD0 {
    void *vtbl;
    void *func_0013FBD0(int flags);
};

struct C_0013FC00 {
    void *vtbl;
    char pad0[0xc];
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void func_0013FC00();
};

extern int D_00284F70;
extern int D_00284F8C;
extern int D_00284E94;
extern int D_00284F7C;
extern int D_002AA46C;
void *func_001E8A44(int size);

struct C_0013FC60 {
    void *vtbl;
    int f4;
    int f8;
    int f0c;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    short *f20;
    int f24;
    int f28;
    C_0013FC60() {
        vtbl = (void *)&D_00284F70;
        f4 = 0;
        f8 = 0;
        f10 = 0;
        f14 = 0;
        f18 = 0;
        f1c = 0;
        f20 = 0;
        f0c = 6;
        f28 = 0;
        f24 = 0;
    }
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
    void func_0013FC60(int count);
};

struct DXVSStreams {
    virtual void v0(int flags);
    virtual void v1(int arg, int d);
    char pad4[8];
    unsigned char fC;
    char padD[3];
    void *f10;
    DXVSStreams *func_00144640();
};

extern int D_00284EC4;
void *__stdcall func_001FF3C0(int size);
int *__stdcall func_001FF410(void *p, int align);

/* 0xC-byte object stored in DXVSStreams::f10 by func_0013F7D0 */
struct S_0013F7D0_Stream {
    void *vtbl;
    int f4;
    int f8;
    S_0013F7D0_Stream() { vtbl = (void *)&D_00284EC4; }
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
};

/* Eco2DSurfaceDataItem */
struct C_0013F7D0 {
    char pad0[0x21E4];
    void *f21E4;
    void *f21E8;
    void *f21EC[3];
    int f21F8;
    short f21FC;
    short f21FE;
    short f2200;
    short f2202;
    short f2204;
    short f2206;
    DXVSStreams *func_0013F7D0(int key);
};

/* DXMeshSurfaceData */
struct C_001402C0 {
    DXVSStreams *a;
    C_0013FC60 *b;
    void func_001402C0(int arg1, int arg2);
    void func_00140360(int n);
};

struct C_001403D0 {
    void func_001403D0(int a, int b, int c);
};

struct C_00162610 {
    void func_00162610(int a);
};

struct C_001446B0 {
    void func_001446B0(int a0, int a1, int a2);
};

void func_000263B0(float *out, float *a, float *b);
void func_00030AC0(float *out, float *v, float *m);
void func_0011ACC0(void *out, void *a, void *b);

struct S_0013FF50_Info {
    char pad0[0x30];
    int f30;
    char pad34[5];
    unsigned char f39;
    char pad3A[0x12];
    int f4C;
    float f50;
    float f54;
    float f58;
    float f5C;
};

/* DXMeshVertexShaderItem */
struct C_0013FF50 {
    void *vtbl;
    char pad4[0xC];
    char f10[0x40];
    char f50[0x40];
    char f90[0x40];
    char fD0[0x40];
    char f110[0x40];
    char f150[0x40];
    float f190[4];
    S_0013FF50_Info *f1A0;
    void func_0013FF50(int a0);
};

struct C_00140400_Slot {
    int f0;
    int f4;
};

struct C_00140400_Obj {
    char pad0[0x24];
    unsigned char f24;
};

struct C_00140400_Mgr {
    char pad0[0x54];
    C_00140400_Obj *f54;
};

struct C_00140400_Entry {
    int f0;
    C_00140400_Mgr *f4;
    char pad8[8];
};

struct C_00140400_Global {
    char pad0[0x14];
    C_00140400_Entry *f14;
};

struct C_00140400_Engine {
    int f0;
    int f4;
};

struct C_00140400_Child {
    C_001446B0 *obj;
    int f4;
};

extern C_00140400_Global *D_002A829C;
extern C_00140400_Engine *D_002EFDB8;

struct V3_00140520 { int x, y, z; };

/* DXMesh */
struct C_00140390 {
    void *vtbl;
    char pad4[0x20];
    C_00140400_Slot *f24;
    char pad28[0x11];
    unsigned char f39;
    char pad3A[2];
    C_00140400_Child *f3C;
    int f40;
    int f44;
    C_0013FF50 *f48;
    int f4C;
    int f50;
    int f54;
    int f58;
    int f5C;
    C_00140390 *func_00140390(int a);
    int func_00140400(void);
    int func_00157960(void);
    void func_00140520(int i, int j, int *v);
};

struct C_00162720 {
    void func_00162720(unsigned int a0);
};

extern float D_00284758;

struct C_00140480 {
    char pad0[0x50];
    float f50;
    float f54;
    float f58;
    float f5C;
    void func_00140480(unsigned int color);
};

struct C_0013FCF0 {
    void *vtbl;
    int f4;
    int f8;
    int f0c;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void func_0013FCF0();
};

struct C_00140660 {
    undefined4 func_00140660(byte param_1);
};

struct C_0013FA70 {
    undefined4 func_0013FA70(undefined4 param_1);
};


struct C_0013FA10 {
    void *vtbl;
    void *func_0013FA10(int a0);
};

struct C_0013F7B0 {
    void *vtbl;
};

extern int D_00284EAC;
void *__stdcall func_001FF3C0(int size);
int *__stdcall func_001FF410(void *p, int align);

/* Eco2DDataItem: 0x14 bytes, vtable + vec4 */
struct S_0013F690_Item {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
};

struct S_0013F690_Shader {
    char pad0[0x1b8];
    int f1B8;
    int f1BC;
    int f1C0;
    int f1C4;
    int f1C8;
    char pad1CC[0x3c];
    void *f208;
};

struct C_0013F690 {
    char pad0[0x54];
    S_0013F690_Shader *shaders[16];
    S_0013F690_Item *func_0013F690(void);
};

struct C_0013FA30_Data {
    void *vtbl;
    int f4;
    int f8;
    void func_0015B150();
};

struct C_0013FA30_VT {
    virtual void vfunc0();
    virtual int vfunc1();
};

struct C_0013FA30 {
    char pad0[0x24];
    C_0013FA30_Data *f24;
    void func_0013FA30(void);
};

struct C_0013FA90 {
    void *vtbl;
    void func_0015B170();
    void *func_0013FA90(int flags);
};

S_0013F690_Item *C_0013F690::func_0013F690(void)
{
    S_0013F690_Item *item;
    S_0013F690_Item *p;
    S_0013F690_Shader *s;
    int i;
    int *q;
    void *buf;

    p = (S_0013F690_Item *)func_001E8A44(0x14);
    if (p != 0) {
        p->vtbl = (void *)&D_00284EAC;
        p->fC = 0;
        p->f8 = 0;
        p->f4 = 0;
        p->f10 = 0x3f800000;
        item = p;
    } else {
        item = 0;
    }
    for (i = 0; i < 16; i++) {
        s = shaders[i];
        if (s != 0) {
            s->f208 = func_001FF3C0(0x48);
            buf = shaders[i]->f208;
            q = func_001FF410(buf, 0x10);
            *q++ = shaders[i]->f1C8;
            *q++ = shaders[i]->f1C4;
            *q++ = shaders[i]->f1B8;
            *q++ = shaders[i]->f1C4;
            *q++ = shaders[i]->f1B8;
            *q++ = shaders[i]->f1C0;
            *q++ = shaders[i]->f1C8;
            *q++ = shaders[i]->f1C0;
            *q++ = shaders[i]->f1BC;
            *q++ = shaders[i]->f1C0;
            *q++ = shaders[i]->f1BC;
            *q++ = shaders[i]->f1C4;
        }
    }
    return item;
}

C_0013F7B0 *func_0013F7B0(void)
{
  void *func_001E8A44(int size);
  extern int D_00284EB8;
  C_0013F7B0 *p;

  p = (C_0013F7B0 *)func_001E8A44(4);
  if (p != 0) {
    p->vtbl = (void *)&D_00284EB8;
    return p;
  }
  return 0;
}

DXVSStreams *C_0013F7D0::func_0013F7D0(int key)
{
    void *m = func_001E8A44(0x14);
    DXVSStreams *s = m ? ((DXVSStreams *)m)->func_00144640() : 0;
    int *q;
    int i;

    s->v1(key, D_002AA46C);
    S_0013F7D0_Stream *st = new S_0013F7D0_Stream;
    s->f10 = st;
    s->fC |= 1;
    f21E4 = func_001FF3C0(0x48);
    q = func_001FF410(f21E4, 0x10);
    *q++ = 0;
    *q++ = 0x3f800000;
    *q++ = 0;
    *q++ = 0x3f800000;
    *q++ = 0x3f800000;
    *q++ = 0x3f800000;
    *q++ = 0x3f800000;
    *q++ = 0x3f800000;
    *q++ = 0x3f800000;
    *q++ = 0;
    *q++ = 0x3f800000;
    *q++ = 0;
    *q++ = 0;
    *q++ = 0x3f800000;
    *q++ = 0;
    *q++ = 0;
    *q++ = 0x3f800000;
    *q++ = 0;
    f21E8 = func_001FF3C0(0x48);
    q = func_001FF410(f21E8, 0x10);
    *q++ = 0;
    *q++ = 0;
    *q++ = 0;
    *q++ = 0;
    *q++ = 0;
    *q++ = 0;
    *q++ = 0;
    *q++ = 0x3f800000;
    *q++ = 0;
    *q++ = 0;
    *q++ = 0x3f800000;
    *q++ = 0;
    *q++ = 0x3f800000;
    *q++ = 0x3f800000;
    *q++ = 0x3f800000;
    *q++ = 0x3f800000;
    *q++ = 0;
    *q++ = 0x3f800000;
    for (i = 0; i < 3; i++) {
        f21EC[i] = func_001FF3C0(0x18);
    }
    f21F8 = 0;
    f21FC = 0;
    f21FE = 1;
    f2200 = 2;
    f2202 = 3;
    f2204 = 4;
    f2206 = 5;
    return s;
}

void *C_0013FA10::func_0013FA10(int a0)
{
  int __stdcall func_0015B1A0(int);
  extern int D_00284EF4;

  func_0015B1A0(a0);
  vtbl = (void *)&D_00284EF4;
  return this;
}

void C_0013FA30::func_0013FA30(void)
{
  void *func_001E8A44(int size);
  extern int D_00284EE4;
  C_0013FA30_Data *p;
  C_0013FA30_Data *q;

  p = (C_0013FA30_Data *)func_001E8A44(0xc);
  if (p != 0) {
    p->func_0015B150();
    p->vtbl = (void *)&D_00284EE4;
    q = p;
  } else {
    q = 0;
  }
  f24 = q;
  ((C_0013FA30_VT *)q)->vfunc1();
}

undefined4 C_0013FA70::func_0013FA70(undefined4 param_1)
{
  int __stdcall func_0015B210(int);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015B210((int)(param_1));
  return in_ECX;
}

void *C_0013FA90::func_0013FA90(int flags)
{
  extern int D_00284EE4;
  void func_001E891B(void *);

  vtbl = (void *)&D_00284EE4;
  func_0015B170();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

void DXInstanceData::func_0013FAC0(int key)
{
    D_002BEAAC->func_0013C8A0(key, &count, 4, 1);
    items = new C_001449B0[count];
    for (int i = 0; i < count; ++i) {
        items[i].load(key);
    }
}

void *C_0013FBD0::func_0013FBD0(int flags)
{
  extern int D_00284EF4;
  void func_0015B1C0();
  void func_001E891B(void *);

  vtbl = (void *)&D_00284EF4;
  func_0015B1C0();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

void C_0013FC00::func_0013FC00()
{
  extern int D_00284F70;
  extern int D_00284E94;
  void __stdcall func_00201100(void *);
  void func_001E891B(void *);

  vtbl = (void *)&D_00284F70;
  if (f10 != 0) {
    func_00201100(f10);
  }
  if (f14 != 0) {
    func_00201100(f14);
  }
  if (f18 != 0) {
    func_00201100(f18);
  }
  if (f1c != 0) {
    func_00201100(f1c);
  }
  if (f20 != 0) {
    func_001E891B(f20);
  }
  vtbl = (void *)&D_00284E94;
}

void C_0013FC60::func_0013FC60(int count)
{
  void *__stdcall func_001FF3C0(int size);
  void *func_001E8A44(int size);
  int n;
  int i;

  f28 = count;
  f24 = count;
  f4 = count;
  n = count * 12;
  f10 = func_001FF3C0(n);
  n = f4 * 12;
  f14 = func_001FF3C0(n);
  n = f4 * 4;
  f18 = func_001FF3C0(n);
  n = f4 * 8;
  f1c = func_001FF3C0(n);
  f8 = f24;
  n = f24 * 2;
  f20 = (short *)func_001E8A44(n);
  for (i = 0; i < f8; i++) {
    f20[i] = (short)i;
  }
  f0c = 6;
}

void C_0013FCF0::func_0013FCF0()
{
  void __stdcall func_001FEE00(int index, void *ptr, int size);
  void __stdcall func_00200B30(int a, int b, void *c);

  if (f10 != 0) {
    func_001FEE00(0, f10, 0xc);
  }
  if (f14 != 0) {
    func_001FEE00(1, f14, 0xc);
  }
  if (f18 != 0) {
    func_001FEE00(2, f18, 4);
  }
  if (f1c != 0) {
    func_001FEE00(3, f1c, 8);
  }
  func_00200B30(f0c, f8, f20);
}

C_001401C0 *C_001401C0::func_0013FD50(S_001401C0_Info *info)
{
 S_001401C0_Mat id,m;
 *(void * volatile *)&vtbl=&D_00284E94;
 vtbl=&D_00284F7C;
 unsigned int *p=(unsigned int *)this->f190;
 p[2]=0;p[1]=0;p[0]=0;p[3]=0x3f800000;
 AsmIdentityMatrix(&id);
 m=id;
 f1A0=info;
 {S_001401C0_Mat *d=(S_001401C0_Mat *)this->f10; AsmCopyMatrix(d,&m);}
 {S_001401C0_Mat *d=(S_001401C0_Mat *)this->f50; AsmCopyMatrix(d,&m);}
 {S_001401C0_Mat *d=(S_001401C0_Mat *)this->f90; AsmCopyMatrix(d,&m);}
 {S_001401C0_Mat *d=(S_001401C0_Mat *)(this->f90 + 0x40); AsmCopyMatrix(d,&m);}
 {S_001401C0_Mat *d=(S_001401C0_Mat *)this->f150; AsmCopyMatrix(d,&m);}
 {S_001401C0_Mat *d=(S_001401C0_Mat *)this->f110; AsmCopyMatrix(d,&m);}
 return this;
}

void C_0013FF50::func_0013FF50(int a0)
{
    int p = a0;
    S_001401C0_Mat m;
    S_001401C0_Mat t;
    AsmIdentityMatrix(&m);
    AsmTransposeMatrix((float *)&t, (float *)&m);
    if (f1A0->f4C != 0) {
        func_000263B0((float *)f90, (float *)&m, (float *)(p + 0x290));
    } else {
        func_000263B0((float *)f90, (float *)&m, (float *)(p + 0x250));
    }
    f190[0] = *(float *)(a0 + 0x170) - m.m[3];
    f190[1] = *(float *)(a0 + 0x174) - m.m[7];
    f190[2] = *(float *)(a0 + 0x178) - m.m[11];
    AsmTransformPoint(f190, f190, (float *)&t);
    if (f1A0->f30 == 0) {
        func_00030AC0((float *)f150, (float *)fD0, (float *)&t);
    } else if (f1A0->f39 & 1) {
        AsmZeroMatrix(f110);
        ((float *)f110)[3] = f1A0->f50;
        ((float *)f110)[7] = f1A0->f54;
        ((float *)f110)[11] = f1A0->f58;
        ((float *)f110)[15] = f1A0->f5C;
        f1A0->f39 &= 0xfe;
    }
    func_0011ACC0(f10, &m, (void *)(a0 + 0xb0));
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void C_001401C0::func_001401C0(void)
{
    S_001401C0_Mat m;
    AsmIdentityMatrix(&m);
    S_001401C0_Mat m2 = m;
    func_001FEC30(0x10, this->f50);
    func_001FEC30(0x18, this->f90);
    func_001FEC30(0x1c, &m2);
    func_001FEBD0(2, this->f190);
    func_001FEC30(0x14, this->f10);
    C_001401C0 *obj = this;
    switch (obj->f1A0->f30) {
    case 0: func_001FEC30(4, obj->f150); func_001FEC30(8, this->f110); return;
    case 2: func_001FEC30(8, obj->f110); return;
    }
}
void C_001402C0::func_001402C0(int arg1, int arg2)
{
    if (a != 0) {
        a->v0(1);
        a = 0;
    }
    void *m = func_001E8A44(0x14);
    a = m ? ((DXVSStreams *)m)->func_00144640() : 0;
    a->v1(arg1, D_002AA46C);
    C_0013FC60 *p = new C_0013FC60;
    b = p;
    a->f10 = p;
    b->func_0013FC60(arg2);
}

void C_001402C0::func_00140360(int n)
{
    C_0013FC60 *p = b;
    if (n % 2 == 0 && n < p->f28) {
        p->f24 = n;
        p->f4 = n;
        p->f8 = n;
    }
}

C_00140390 *C_00140390::func_00140390(int a)
{
    unsigned int *p;
    ((C_00162610 *)this)->func_00162610(a);
    vtbl = (void *)&D_00284F8C;
    p = (unsigned int *)&f50;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f3C = 0;
    f40 = 0;
    f44 = 0;
    f48 = 0;
    f4C = -1;
    return this;
}

void C_001403D0::func_001403D0(int a, int b, int c)
{
}

int C_00140390::func_00140400(void)
{
    int i;

    if (f4C == -1) {
        f4C = (D_002A829C->f14[f24->f4].f4->f54->f24 >> 3) & 1;
    }
    if ((f39 & 2) == 0) {
        f48->func_0013FF50(D_002EFDB8->f4);
        for (i = 0; i < f40; i++) {
            f3C[i].obj->func_001446B0((int)f48, 0, -1);
        }
        return func_00157960();
    }
    return 1;
}

void C_00140480::func_00140480(unsigned int color)
{
    ((C_00162720 *)this)->func_00162720(color);
    f50 = (float)(color >> 16 & 0xff) * D_00284758;
    f54 = (float)(color >> 8 & 0xff) * D_00284758;
    f58 = (float)(color & 0xff) * D_00284758;
    f5C = (float)(color >> 24) * D_00284758;
}

void C_00140390::func_00140520(int i, int j, int *v)
{
    if (i < f40) {
        int *o = (int *)f3C[i].f4;
        if (j < o[9]) {
            void *buf = (void *)o[4];
            V3_00140520 *p = (V3_00140520 *)func_001FF410(buf, 0x10) + j;
            if (p)
                *p = *(V3_00140520 *)v;
        }
    }
}

undefined4 C_00140660::func_00140660(byte param_1)
{
  int func_0013FC00(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0013FC00();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

