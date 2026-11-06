/* 17 functions from 0x00196C00 to 0x00197B90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern int D_0028B02C;
extern f32 D_00275544;

struct C_002A8490 {
    char pad0[0x124];
    int f124;
};
extern C_002A8490 *D_002A8490;

struct C_00138330 {
    void func_00138330(int a0);
};

struct C_00197680 {
    void *vtbl;
    C_00197680 *func_00197680(int a0);
};

struct C_00197260 {
    char pad0[0x74];
    unsigned count;
    char pad78[8];
    int *table;
    char pad84[0x34];
    char *buf;
    void func_00197260(int index, char *out);
};

struct C_001975A0 {
    char pad0[0x24];
    f32 f24;
    char pad28[0xC];
    f32 f34;
    f32 f38;
    char pad3C[4];
    f32 f40;
    char pad44[0x7C];
    u8 fC0;
    char padC1[3];
    u32 fC4;
    void func_001963D0();
    void func_00196560();
    void func_001975A0(f32 dt);
    void func_00196C00(f32 dt);
    void func_00157A00(f32 dt);
    int func_00197610(f32 dt);
};
#include <string.h>
extern "C" void *func_001E8A44(unsigned size);

struct C_001972B0 {
    char pad0[0x50];
    char *f50;
    char pad54[0x18];
    unsigned f6C;
    char pad70[8];
    int *f78, *f7C, *f80, *f84, *f88, *f8C, *f90, *f94, *f98, *f9C, *fA0, *fA4, *fA8, *fAC, *fB0, *fB4;
    char *fB8;
    char *fBC;
    u8 fC0;
    char padC1[7];
    unsigned fC8;
    char *fCC;
    void func_00196290();
    C_001972B0 *func_001972B0(unsigned a, unsigned b, u8 c);
};

extern "C" void *func_001E8A44(unsigned size);
extern "C" void *__cdecl memset(void *, int, unsigned int);
#pragma intrinsic(memset)

/* 001972B0 */
struct C_00197290 {
    undefined4 func_00197290(byte param_1);
};

struct C_00197590 {
    void func_00197590(void);
};

struct C_00197250 {
    char pad0[0x2C];
    float unk2C;
    float func_00197250(void);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_00275678[];
extern char D_002A5C90[];

struct S_00197700_Vec4 {
    float x, y, z, w;
    S_00197700_Vec4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct C_0012B3D0 {
    char pad0[0x170];
    float f170;
    float f174;
    float f178;
    void func_0012B3D0();
};

struct V_002EFDB8 {
    void *vtbl;
    C_0012B3D0 *f4;
};
extern V_002EFDB8 *D_002EFDB8;

struct C_001367F0 {
    void func_001367F0(void *v, int a, int b);
};

/* SkyCube */
struct C_00197700 {
    void *vtbl;
    char pad4[0x24];
    C_001367F0 *f28;
    char pad2C[0x798];
    int f7C4;
    char pad7C8[0x14];
    float f7DC;
    void func_00137E50(int a0);
    void func_00137F90();
    int func_00138480(char *name);
    void func_00197700(int a0);
    void func_00197780();
    C_00197700 *func_001976A0(char *name, float f);
};

struct C_00197AA0_Mat {
    void func_000264C0(void *m);
};

struct C_00197AA0 {
    char pad0[0xB0];
    char fB0[0x40];
    char fF0[0x40];
    char pad130[0x40];
    C_00197AA0 *f170;
    C_00197AA0 *f174;
    C_00197AA0 *f178;
    char pad17C[4];
    u8 f180;
    void func_00197AA0();
    void func_00197B10();
};

struct C_00197B40 {
    char pad0[0xB4];
    float fB4;
    float fB8;
    char padBC[8];
    float fC4;
    float fC8;
    char padCC[8];
    float fD4;
    float fD8;
    void func_00197B40(float *a, float *b);
};

void func_0011ACC0(void *out, void *a, void *b);

extern int D_0028B0E4;
extern char D_0028AB70[];
struct C_001BC6E0 {
    char func_001BC6E0(char *name);
};
extern C_001BC6E0 *D_002AAEC8;

struct S_00197820_Mat {
    float m[16];
};

static inline void S_00197820_Identity(S_00197820_Mat *m)
{
    _mm_store_ps(&m->m[0], _mm_setzero_ps());
    _mm_store_ps(&m->m[4], _mm_setzero_ps());
    _mm_store_ps(&m->m[8], _mm_setzero_ps());
    _mm_store_ps(&m->m[12], _mm_setzero_ps());
    m->m[0] = 1.0f;
    m->m[5] = 1.0f;
    m->m[10] = 1.0f;
    m->m[15] = 1.0f;
}

static inline void S_00197820_Zero(S_00197820_Mat *m)
{
    _mm_store_ps(&m->m[0], _mm_setzero_ps());
    _mm_store_ps(&m->m[4], _mm_setzero_ps());
    _mm_store_ps(&m->m[8], _mm_setzero_ps());
    _mm_store_ps(&m->m[12], _mm_setzero_ps());
}

static inline S_00197700_Vec4 *S_00197820_VecInit(S_00197700_Vec4 *v)
{
    v->z = 0.0f;
    v->y = 0.0f;
    v->x = 0.0f;
    v->w = 1.0f;
    return v;
}

struct S_00197820_Hdr {
    u16 f0;
    u8 f2;
    u8 f3;
};

static inline void S_00197820_HdrInit(S_00197820_Hdr *h)
{
    h->f0 = 0;
    h->f2 = 0xff;
    h->f3 &= 0xf8;
}

/* SoultreeObject */
struct C_00197820 {
    void *vtbl;
    char pad4[0x1C];
    u8 f20;
    char pad21[3];
    S_00197820_Hdr f24;
    u8 f28;
    char pad29[0xB0 - 0x29];
    S_00197820_Mat fB0;
    S_00197820_Mat fF0;
    S_00197700_Vec4 f130;
    S_00197700_Vec4 f140;
    S_00197700_Vec4 f150;
    S_00197700_Vec4 f160;
    int f170;
    int f174;
    int f178;
    int f17C;
    u8 f180;
    u8 f181;
    char pad182[0x18C - 0x182];
    int f18C;
    int f190;
    int f194;
    void func_00157600(int a0);
    C_00197820 *func_00197820(int a0);
};


float C_00197250::func_00197250(void) {
    return unk2C;
}

void C_00197260::func_00197260(int index, char *out)
{
    if (index < 0 || index >= count || table[index] != 2)
        return;
    *out = buf[index];
}

undefined4 C_00197290::func_00197290(byte param_1)
{
  int func_00195E70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00195E70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001972B0 *C_001972B0::func_001972B0(unsigned a,unsigned b,u8 c)
{
fC0 ^= (fC0 ^ c) & 1; fC8=b; f6C=a;
f50=(char *)func_001E8A44(fC8);
f78=(int *)func_001E8A44(f6C*4);
f7C=(int *)func_001E8A44(f6C*4);
f80=(int *)func_001E8A44(f6C*4);
memset(f50,0,fC8);
if(fC0&1){fCC=(char *)func_001E8A44(fC8);memset(fCC,0,fC8);}
f84=(int *)func_001E8A44(f6C*4);
f88=(int *)func_001E8A44(f6C*4);
f8C=(int *)func_001E8A44(f6C*4);
for(unsigned i=0;i<f6C;i++)f8C[i]=0;
f90=(int *)func_001E8A44(f6C*4);
f94=(int *)func_001E8A44(f6C*4);
f98=(int *)func_001E8A44(f6C*4);
fA0=(int *)func_001E8A44(f6C*4);
f9C=(int *)func_001E8A44(f6C*4);
fAC=(int *)func_001E8A44(f6C*4);
fB0=(int *)func_001E8A44(f6C*4);
fB4=(int *)func_001E8A44(f6C*4);
fA4=(int *)func_001E8A44(f6C*4);
fA8=(int *)func_001E8A44(f6C*4);
fB8=(char *)func_001E8A44(f6C);
fBC=(char *)func_001E8A44(f6C);
for(unsigned j=0;j<f6C;j++){
f78[j]=0;f7C[j]=0;f84[j]=1;f88[j]=0;f90[j]=0;f94[j]=0;f98[j]=0;fA0[j]=0;f9C[j]=0;fAC[j]=0;fB4[j]=0;fB0[j]=0;fA4[j]=0;fA8[j]=0;fB8[j]=0;
}
func_00196290();return this;
}

void C_00197590::func_00197590(void)
{
  int func_00196290(...);
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xc0) = *(byte *)(in_ECX + 0xc0) & 0x51;
  func_00196290();
  return;
}

void C_001975A0::func_001975A0(f32 dt)
{
    f24 = f24 + dt;
    if (f34 == D_00275544) {
        func_001963D0();
        f38 = f40;
    } else if (f38 <= D_00275544 || fC4 != 0) {
        func_00196560();
        f38 = f40;
    }
    f34 = f34 - dt;
    f38 = f38 - dt;
}

int C_001975A0::func_00197610(f32 dt)
{
    if (D_002A8490->f124 != 0)
        return 1;
    fC0 = fC0 | 0x10;
    if (fC0 & 2)
        func_001975A0(dt);
    if (fC0 & 4)
        func_00196C00(dt);
    fC4 = 0;
    func_00157A00(dt);
    return 1;
}

C_00197680 *C_00197680::func_00197680(int a0)
{
    ((C_00138330 *)this)->func_00138330(a0);
    vtbl = &D_0028B02C;
    return this;
}

C_00197700 *C_00197700::func_001976A0(char *name, float f)
{
    char buf[0x104];

    func_001ADCC0(buf, 0x104, D_00275678, D_002A5C90, name);
    if (func_00138480(buf)) {
        f7DC = f;
        return this;
    }
    return 0;
}

void C_00197700::func_00197700(int a0)
{
    S_00197700_Vec4 v;

    v.x = D_002EFDB8->f4->f170;
    v.y = f7DC + D_002EFDB8->f4->f174;
    v.z = D_002EFDB8->f4->f178;
    f28->func_001367F0(&v, 0, 0);
    func_00137E50(a0);
}

void C_00197700::func_00197780()
{
    if (f7C4 != 0) {
        D_002EFDB8->f4->func_0012B3D0();
    }
    func_00137F90();
}

C_00197820 *C_00197820::func_00197820(int a0)
{
    C_00197820 *volatile self = this;
    S_00197820_Mat *volatile m;
    S_00197820_HdrInit(&self->f24);
    self->func_00157600(a0);
    self->vtbl = &D_0028B0E4;
    S_00197820_VecInit(&self->f130);
    S_00197820_VecInit(&self->f140);
    S_00197820_VecInit(&self->f150);
    S_00197820_VecInit(&self->f160);
    self->f170 = 0;
    self->f174 = 0;
    self->f17C = 0;
    self->f178 = 0;
    m = &self->fB0;
    S_00197820_Identity(m);
    m = &self->fF0;
    S_00197820_Zero(m);
    self->f180 &= 0xfe;
    self->f180 |= 0x80;
    self->f18C = 0;
    self->f24.f3 &= 0xfb;
    self->f180 &= 0xfd;
    self->f180 &= 0xfb;
    self->f180 &= 0xf7;
    self->f180 &= 0xef;
    self->f180 &= 0xdf;
    self->f130.x = 0; self->f130.y = 0; self->f130.z = 0;
    self->f140.x = 0; self->f140.y = 0; self->f140.z = 0;
    self->f180 &= 0xbf;
    self->f150.x = 0; self->f150.y = 0; self->f150.z = 0;
    self->f160.x = 0; self->f160.y = 0; self->f160.z = 0;
    self->f28 = 0;
    self->f190 = 0;
    self->f24.f2 = D_002AAEC8->func_001BC6E0(D_0028AB70);
    self->f20 = self->f24.f2;
    self->f181 |= 1;
    self->f181 &= 0xfd;
    self->f194 = 0;
    return self;
}

void C_00197AA0::func_00197AA0()
{
    if (!(f180 & 1)) {
        if (f170 != 0) {
            f170->func_00197AA0();
            func_0011ACC0(fF0, fB0, f170->fF0);
            f180 |= 1;
        } else {
            ((C_00197AA0_Mat *)fF0)->func_000264C0(fB0);
            f180 |= 1;
        }
    }
}

void C_00197AA0::func_00197B10()
{
    if (f178 != 0) {
        f178->func_00197B10();
    }
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00197B40::func_00197B40(float *a, float *b)
{
    if (a != 0) {
        a[0] = fB8;
        a[1] = fC8;
        a[2] = fD8;
    }
    if (b != 0) {
        b[0] = fB4;
        b[1] = fC4;
        b[2] = fD4;
    }
}

