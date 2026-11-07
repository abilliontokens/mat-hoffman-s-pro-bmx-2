/* 28 functions from 0x001D47C0 to 0x001D5760, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
#include <xmmintrin.h>
#include <string.h>

void __stdcall func_00200230(int a);
struct InitResource {
    InitResource *func_001C37F0(int);
    InitResource *func_001C3810(int);
    InitResource *func_0014A610();
    InitResource *func_00142CF0();
    InitResource *func_0014A520(void *);
    InitResource *func_00142C70();
    void func_0014A560(void *, int);
    void func_00142C80(void *, int);
};
struct XboxRenderTarget {
    virtual void v0(int);
    int f4, f8, fC;
    char pad10[0x14];
    int f24;
    float f28;
    char pad2C[0x28];
    int f54, f58, f5C, f60;
    InitResource *f64, *f68, *f6C, *f70;
    char pad74[0x10];
    InitResource *f84, *f88;
    void *f8C;
    XboxRenderTarget *func_001D4980(int);
    int func_001D4FF0(int a);
    int func_001D4B40(int *rect, int *src, int *dst, int unused);
};
int __stdcall func_001FFE40(int);
int func_00200210();
void __stdcall func_002011F0(int, void *);
int func_001B2C40(int);
int func_001B2B90(int);
extern "C" char D_0028F5BC[], D_00276274[];
extern "C" int D_002F0B8C;
void func_001B29F0(int format, int *a, int *r, int *g, int *b);
void func_001B3AF0(int bits, int w, int h, int pitch, int mask, const char *name, int bpp);
void func_001B39B0(int bits, int w, int h, int pitch, const char *name, int bpp);
void func_001B3A50(int bits, int w, int h, int pitch, const char *name, int bpp);
void __stdcall func_00201210(int surface, void *lock, int rect, int flags);

/* the Xbox surface description func_002011F0 fills in */
struct S_001D5190_Desc {
    unsigned int Format;
    unsigned int Type;
    unsigned int Usage;
    unsigned int Size;
    unsigned int MultiSampleType;
    unsigned int Width;
    unsigned int Height;
};

struct S_001D5190_Lock {
    int Pitch;
    int pBits;
};
void func_0014A7B0(void *, void *);
extern char D_00010000[];
extern char D_002ABD08[], D_002F0A80[], D_0028C1F0[], D_0028C1DC[];


struct S_001D5610_Obj {
    virtual void v0(int flags);
};

void *__stdcall func_001FF3C0(int size);
void *func_001E8A44(int size);

/* the quad vertex func_001D4B40 fills */
struct S_001D4B40_Vtx {
    float x, y, z;
    unsigned int color;
    float u, v;
};

struct S_001D4B40_Dev {
    char pad0[0x1e0];
    int f1e0;
    int f1e4;
};

extern float D_002ABD1C, D_002ABD20, D_0028F570;
extern int D_0020C6DC, D_0020C6E0, D_0020C6E4, D_0020C6EC, D_0020C6F0;
extern int D_0020CA50, D_0020C710, D_0020C718, D_0020C71C, D_0020C720;
extern char D_00040300[], D_00040304[], D_00040344[], D_00040348[];
void __fastcall func_001FD020(int state, int value);
void __stdcall func_001FE490(int a);
void *__stdcall func_001FF410(void *buf, int n);
void __stdcall func_00200A90(int a, int b, int c);
void __fastcall func_001FEC30(int n, void *p);

/* 0x10-byte aligned 4x4 float matrix */
struct __declspec(align(16)) S_001D5660_Mat {
    float m[16];
    __forceinline void identity(void)
    {
        __m128 z = _mm_setzero_ps();
        ((__m128 *)m)[0] = z;
        ((__m128 *)m)[1] = z;
        ((__m128 *)m)[2] = z;
        ((__m128 *)m)[3] = z;
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
    void alloc(int count);
    void func_001D5660(int count, int arg2);
    void func_001D5720(void);
};

__forceinline void C_001D5660::alloc(int count)
{
    int i;
    f8 = count;
    fC = count;
    f14 = func_001FF3C0(f8 * 0x18);
    f64 = (short *)func_001E8A44(fC * 2);
    for (i = 0; i < fC; i++) {
        f64[i] = (short)i;
    }
}

extern int D_0028F578;
extern int D_00284E94;
extern int D_0028F584;

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

/* RenderTarget base: its constructor is _func_001827B0 */
struct C_001827B0 {
    int vtbl;
    char pad4[0x50];
    C_001827B0(void);
};

/* the vtable store lands between the base constructor and the member constructors */
struct C_001D48E0Base : C_001827B0 {
    __forceinline C_001D48E0Base() { vtbl = (int)&D_0028F584; }
};

struct V4_001D48E0 {
    float x, y, z, w;
    V4_001D48E0() { z = 0; y = 0; x = 0; w = 1.0f; }
};

/* XboxRenderTarget */
struct C_001D48E0 : C_001D48E0Base {
    int f54, f58, f5C, f60, f64, f68, f6C, f70;
    V4_001D48E0 v74;
    int f84, f88, f8C, f90;
    int idx[300];
    C_001D48E0(void);
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

struct C_001C3BD0 { void func_001C3BD0(); };
struct C_001C3C80 { void func_001C3C80(); };
struct C_0014A540 { void func_0014A540(); };
struct C_00012140 { void func_00012140(); };
struct C_001D5500 {
    void *vtbl;
    char pad4[0x50];
    void *f54, *f58, *f5c;
    int f60;
    C_001C3BD0 *f64;
    C_001C3C80 *f68;
    C_0014A630 *f6c;
    C_001B65E0 *f70;
    char pad74[0x10];
    C_0014A540 *f84;
    C_00012140 *f88;
    void *f8c;
    void func_001D5500();
    void func_00182800();
};
extern int D_002F0BB8;
void __stdcall func_00201100(void *);
void func_001E891B(void *);

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


extern "C" int func_001ADCC0(char*, int, const char*, ...);
extern "C" void* func_0014FDF0(const char*, const char*);
extern "C" int func_0014FE90(void*, const char*, ...);
extern "C" int func_0014FE50(void*);
extern "C" int* D_002A83E0;
extern "C" int D_002F0A70;
extern "C" char D_0028F554[], D_00284C4C[], D_0028F54C[], D_0028F540[], D_0028F534[], D_002869B4[], D_0028F52C[], D_0028F520[];
extern "C" void func_001D47C0()
{
    char buf[0x104];
    void* f;
    int total;
    int i;
    int n;
    D_002F0A70++;
    func_001ADCC0(buf, 0x104, D_0028F554, D_002F0A70);
    f = func_0014FDF0(buf, D_00284C4C);
    if (f) {
        func_0014FE90(f, D_0028F54C);
        func_0014FE90(f, D_0028F540);
        total = 0;
        n = D_002A83E0[0];
        for (i = 0; i < n; i++) {
            func_0014FE90(f, D_0028F534, ((int**)D_002A83E0)[2][i], ((char**)D_002A83E0)[1] + i * 0x80);
            total += ((int**)D_002A83E0)[2][i];
        }
        func_0014FE90(f, D_002869B4);
        func_0014FE90(f, D_0028F520, total, D_0028F52C);
        func_0014FE50(f);
    }
}

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

C_001D48E0::C_001D48E0(void)
{
    *(volatile int *)&f60 = 0x1b02;
    *(volatile int *)&f54 = 0; *(volatile int *)&f58 = 0; *(volatile int *)&f5C = 0;
    *(volatile int *)&f68 = 0; *(volatile int *)&f64 = 0;
    *(volatile int *)&f6C = 0; *(volatile int *)&f70 = 0;
    *(volatile float *)&v74.w = 1.0f;
    v74.x = 0; v74.y = 0; v74.z = 0;
    memset(idx, 0, sizeof(idx));
    for (int i = 0; i < 300; i++) idx[i] = i;
    *(volatile int *)&f90 = -1;
    *(volatile int *)&f8C = 0;
    f84 = 0; f88 = 0;
}

XboxRenderTarget *XboxRenderTarget::func_001D4980(int a) {
 int desc[7];
 f54=func_001FFE40(-1);
 f58=func_001FFE40(0);
 f5C=func_00200210();
 if (!f5C) goto fail;
 func_002011F0(f58,desc);
 f8=640; fC=448;
 f24=func_001B2C40(desc[0]); f28=1.0f;
 { InitResource *p=(InitResource *)func_001E8A44(16);
 f64=p?p->func_001C37F0((int)D_00010000):0; }
 if (!f64) goto fail;
 { InitResource *p=(InitResource *)func_001E8A44(16);
 f68=p?p->func_001C3810(0x2000):0; }
 if (!f68) goto fail;
 { InitResource *p=(InitResource *)func_001E8A44(12);
 f6C=p?p->func_0014A610():0; }
 if (!f6C) goto fail;
 { InitResource *p=(InitResource *)func_001E8A44(4);
 f70=p?p->func_00142CF0():0; }
 if (!f70) { fail: v0(1); return 0; }
 f8C=func_001FF3C0(96);
 func_0014A7B0(D_002F0A80,D_002ABD08);
 { InitResource *p=(InitResource *)func_001E8A44(12);
 f84=p?p->func_0014A520(D_002F0A80):0; }
 f84->func_0014A560(D_0028C1F0,0);
 { InitResource *p=(InitResource *)func_001E8A44(240);
 f88=p?p->func_00142C70():0; }
 f88->func_00142C80(D_0028C1DC,0);
 return this;
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

int XboxRenderTarget::func_001D4B40(int *rect, int *src, int *dst, int unused)
{
    XboxRenderTarget * volatile p = this;
    S_001D5660_Mat mat;
    S_001D5660_Mat * volatile pm = &mat;
    int v[4];
    int r[4];
    float u0, u1, v0, v1;
    float f0, f1, f2, f3;
    int flag;
    int w, h;
    S_001D4B40_Vtx *vt;

    pm->identity();
    if (dst) {
        v[0] = dst[0];
        v[2] = dst[2];
        v[1] = dst[1];
        v[3] = dst[3];
    } else {
        v[0] = 0;
        v[2] = src[2];
        v[1] = 0;
        v[3] = src[3];
    }
    if (rect) {
        r[0] = (int)((float)rect[0] * D_002ABD1C);
        r[2] = (int)((float)rect[2] * D_002ABD1C);
        r[1] = (int)((float)rect[1] * D_002ABD20);
        r[3] = (int)((float)rect[3] * D_002ABD20);
    } else {
        r[0] = 0;
        r[2] = 0x280;
        r[1] = 0;
        r[3] = 0x1c0;
    }

    D_0020C6DC |= 1;
    D_0020C6E0 = 3;
    D_0020C6E4 = 3;
    D_0020C6EC = 1;
    D_0020C6F0 = 1;
    func_001FD020((int)D_00040304, 1);
    func_001FD020((int)D_00040344, 0x302);
    func_001FD020((int)D_00040348, 0x303);
    D_0020C6DC |= 0x2000;
    D_0020CA50 = 0;
    func_001FD020((int)D_00040300, 0);
    func_001FE490(0);
    D_0020C6DC |= 0x800;
    D_0020C710 = 4;
    D_0020C718 = 2;
    D_0020C71C = 0;
    D_0020C720 = 1;
    func_00200390(0, *(int *)((char *)src + 0xb8));

    f0 = (float)r[0];
    f2 = (float)r[2];
    f1 = (float)r[1];
    f3 = (float)r[3];

    flag = 1;
    switch (*(int *)((char *)src + 0xa4)) {
    case 6:
    case 12:
    case 14:
    case 15:
        flag = 0;
        break;
    case 18:
    case 30:
        flag = 1;
        break;
    }

    w = (int)D_0028F570;
    h = 0;
    if (p->f4) {
        h = ((S_001D4B40_Dev *)p->f4)->f1e0;
        w = ((S_001D4B40_Dev *)p->f4)->f1e4;
    }
    mat.m[3] = (float)h;
    mat.m[7] = (float)w;

    if (flag) {
        u0 = (float)v[0];
        u1 = (float)v[2];
        v0 = (float)v[1];
        v1 = (float)v[3];
    } else {
        u0 = (float)v[0] / (float)src[2];
        u1 = (float)v[2] / (float)src[2];
        v0 = (float)v[1] / (float)src[3];
        v1 = (float)v[3] / (float)src[3];
    }

    vt = (S_001D4B40_Vtx *)func_001FF410(p->f8C, 0);
    vt[0].x = f0; vt[0].y = f3; vt[0].z = 0.5f; vt[0].color = 0xffffffff; vt[0].u = u0; vt[0].v = v1;
    vt[1].x = f0; vt[1].y = f1; vt[1].z = 0.5f; vt[1].color = 0xffffffff; vt[1].u = u0; vt[1].v = v0;
    vt[2].x = f2; vt[2].y = f3; vt[2].z = 0.5f; vt[2].color = 0xffffffff; vt[2].u = u1; vt[2].v = v1;
    vt[3].x = f2; vt[3].y = f1; vt[3].z = 0.5f; vt[3].color = 0xffffffff; vt[3].u = u1; vt[3].v = v0;

    ((C_0014A650 *)p->f6C)->func_0014A650((int)p->f84);
    ((C_00142D00 *)p->f70)->func_00142D00((int)p->f88);
    func_001FEC30(0x22, &mat);
    func_001FEE00(0, (int)p->f8C, 0x18);
    func_00200A90(6, 0, 4);
    func_001FE490(1);
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

#pragma optimize("y", off)
int XboxRenderTarget::func_001D4FF0(int a) { func_00200230(a); return 1; }
#pragma optimize("", on)

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

void __stdcall func_001D5190(int surface)
{
    char path[0x104];
    int mr;
    int mb;
    int ma;
    S_001D5190_Desc desc;
    int mg;
    S_001D5190_Lock lock;
    void *file;
    int bpp;

    func_001ADCC0(path, 0x104, D_0028F5BC, D_002F0B8C);
    file = func_0014FDF0(path, D_00276274);
    while (file) {
        func_0014FE50(file);
        func_001ADCC0(path, 0x104, D_0028F5BC, ++D_002F0B8C);
        file = func_0014FDF0(path, D_00276274);
    }
    func_002011F0(surface, &desc);
    func_00201210(surface, &lock, 0, 0x40);
    bpp = func_001B2B90(desc.Format);
    if (bpp == 0x10) {
        func_001B29F0(func_001B2C40(desc.Format), &ma, &mr, &mg, &mb);
        func_001B3AF0(lock.pBits, desc.Width, desc.Height, lock.Pitch, mg, path, 0x20);
    } else if (bpp == 0x18) {
        func_001B39B0(lock.pBits, desc.Width, desc.Height, lock.Pitch, path, 0x20);
    } else if (bpp == 0x20) {
        func_001B3A50(lock.pBits, desc.Width, desc.Height, lock.Pitch, path, bpp);
    }
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

void C_001D5500::func_001D5500()
{
    vtbl = &D_0028F584;
    if (f54) { func_00201100(f54); f54 = 0; }
    if (f58) { func_00201100(f58); f58 = 0; }
    if (f5c) { func_00201100(f5c); f5c = 0; }
    if (f64) { C_001C3BD0 *p = f64; p->func_001C3BD0(); func_001E891B(p); f64 = 0; }
    if (f68) { C_001C3C80 *p = f68; p->func_001C3C80(); func_001E891B(p); f68 = 0; }
    if (f6c) { C_0014A630 *p = f6c; p->func_0014A630(); func_001E891B(p); f6c = 0; }
    if (f70) { C_001B65E0 *p = f70; p->func_001B65E0(); func_001E891B(p); f70 = 0; }
    D_002F0BB8 = 0;
    if (f8c) func_00201100(f8c);
    if (f84) { C_0014A540 *p = f84; p->func_0014A540(); func_001E891B(p); }
    if (f88) { C_00012140 *p = f88; p->func_00012140(); func_001E891B(p); }
    func_00182800();
}

void C_001D5600::func_001D5600(void) {
    void __stdcall func_001D5190(int);
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
    void **slot;
    int i;

    f8 = count;
    fC = count;
    slot = &f14;
    *slot = func_001FF3C0(f8 * 0x18);
    f64 = (short *)func_001E8A44(2 * fC);
    for (i = 0; i < fC; i++) {
        f64[i] = (short)i;
    }
    f10 = arg2;
    AsmIdentityMatrix(&f20);
}

void C_001D5660::func_001D5720(void)
{
    void __fastcall func_001FEC30(int n, void *p);
    void __stdcall func_00200B30(int a, int b, void *c);
    func_001FEC30(0x22, &f20);
    func_001FEE00(0, (int)f14, 0x18);
    if (fC > 0) {
        func_00200B30(f10, fC, f64);
    }
}

/* end */
