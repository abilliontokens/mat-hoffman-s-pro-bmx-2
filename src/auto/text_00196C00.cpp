/* 17 functions from 0x00196C00 to 0x00197B90, found by Ghidra. (probe) */
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
    void func_00196290();
    int func_001968C0();
    void func_00157A00(f32 dt);
    int func_00197610(f32 dt);
};
#include <string.h>
#include "asm_helpers.h"
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
    int func_001968C0();
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


extern float func_00196290(float v);
extern int func_001968C0(void *self);
extern void func_00195D40(float *out, float a, float b, float c, float d);
extern void func_0015C7D0(float *out, float *a, float *b, float *c, float *d);
extern int func_00016CF0(float v);
struct V_00196C00 { int x,y,z,w; };
extern V_00196C00 *func_00195D40(V_00196C00 *out, int a, int b, int c, int d);
extern void func_0015C7D0(V_00196C00 *out, V_00196C00 *a, V_00196C00 *b, float t);
void __fastcall func_00196C00(char *self, int, float dt)
{
    C_001972B0 *o = (C_001972B0 *)self;
    unsigned i;

    *(float *)(self + 0x2c) = *(float *)(self + 0x28);
    if (*(unsigned char *)(self + 0xc0) & 8) {
        float v = *(float *)(self + 0x28);
        o->func_00196290();
        *(float *)(self + 0x28) = v - dt * *(float *)(self + 0x44);
        *(float *)(self + 0x28) = AsmMaxF(*(float *)(self + 0x28), 0.0f);
    } else {
        *(float *)(self + 0x28) += dt * *(float *)(self + 0x44);
    }

    if (*(unsigned char *)(self + 0xc0) & 0x20) return;

    do {
        if (*(float *)(self + 0x28) >= *(float *)(self + 0x48)) {
            int r = func_001968C0(self);
            *(unsigned char *)(self + 0xc0) ^= (r << 5) & 0x20;
        }
    } while (!(*(unsigned char *)(self + 0xc0) & 0x20));

    if (*(float *)(self + 0x48) == *(float *)(self + 0x30)) return;

    float t = (*(float *)(self + 0x28) - *(float *)(self + 0x30)) /
              (*(float *)(self + 0x48) - *(float *)(self + 0x30));
    if (*(unsigned *)(self + 0x74) == 0) return;

    for (i = 0; i < *(unsigned *)(self + 0x74); i++) {
        char *p = ((char **)(self + 0x7c))[i];
        if (p == 0) continue;
        if (((int *)(self + 0x84))[i] == 0) continue;
        if (((int *)(self + 0x80))[i] != 0) {
            if (((int *)(self + 0x8c))[i] != 0) {
                *(int *)p = ((int *)(self + 0xa0))[i];
                continue;
            }
        } else {
            if (((int *)(self + 0x8c))[i] != 0) {
                *(int *)p = ((int *)(self + 0xa0))[i];
                continue;
            }
            {
                int ty = ((int *)(self + 0x88))[i];
                if (ty == 3) {
                    float q1[4], q2[4], q3[4];
                    func_00195D40(q1,
                                  ((float *)(self + 0x9c))[i * 4],
                                  ((float *)(self + 0x9c))[i * 4 + 1],
                                  ((float *)(self + 0x9c))[i * 4 + 2],
                                  ((float *)(self + 0x9c))[i * 4 + 3]);
                    func_00195D40(q2,
                                  ((float *)(self + 0xa0))[i * 4],
                                  ((float *)(self + 0xa0))[i * 4 + 1],
                                  ((float *)(self + 0xa0))[i * 4 + 2],
                                  ((float *)(self + 0xa0))[i * 4 + 3]);
                    func_0015C7D0(q3, q1, q2, 0, 0);
                    ((float *)(self + 0x7c))[i * 4] = q3[0];
                    continue;
                }
                if (ty == 0) {
                    *(float *)p = ((float *)(self + 0xa0))[i];
                    continue;
                }
                if (ty == 1) {
                    *(float *)p = ((float *)(self + 0x9c))[i] +
                                  (((float *)(self + 0xa0))[i] - ((float *)(self + 0x9c))[i]) * t;
                    continue;
                }
            }
        }
    }
}

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

void func_001977B0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

