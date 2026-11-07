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
    __m128 z = _mm_xor_ps(*(__m128 *)m, *(__m128 *)m);
    _mm_store_ps(&m->m[0], z);
    _mm_store_ps(&m->m[4], z);
    _mm_store_ps(&m->m[8], z);
    _mm_store_ps(&m->m[12], z);
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


extern float func_00196290(float v);
extern int func_001968C0(void *self);
extern void func_00195D40(float *out, float a, float b, float c, float d);
extern void func_0015C7D0(float *out, float *a, float *b, float *c, float *d);
extern int func_00016CF0(float v);

#pragma optimize("y", on)
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
#pragma optimize("", on)
