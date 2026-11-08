/* 32 functions from 0x001941F0 to 0x00195190, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
extern int D_002A99B0;
extern const float D_00275544;
extern const float D_00275460;
extern const float D_00278784;
extern const float D_0028AE80;
struct C_00194520 {
 char pad0[0x34]; float f34, f38; char pad3C[0x10]; unsigned f4C, f50, f54; float f58; char pad5C[0x28]; float f84, f88, f8C, f90; char pad94[0x18]; int fAC; char padB0[0x30]; float fE0, fE4;
 int func_00194520(float dt, int a);
};
struct C_00194720 {
    undefined4 func_00194720(byte param_1);
};

extern int D_0028AD8C;
extern int D_0028AE14;
void func_001E891B(void *p);

struct S_Vec4 {
    float x;
    float y;
    float z;
    float w;
};

/* object with a position accumulator at +0x130 */
struct S_001941F0_Base0 {
    char pad0[0x130];
};

struct S_001941F0_Acc {
    float f130;
    float f134;
    float f138;
    void Add(S_Vec4 v) {
        f130 = v.x + f130;
        f134 = v.y + f134;
        f138 = v.z + f138;
    }
};

struct S_001941F0_Obj : S_001941F0_Base0, S_001941F0_Acc {
    char pad13C[0xD4];
    float f210;
};

struct C_001941F0 {
    char pad0[0x24];
    int f24;
    char pad28[4];
    float f2C;
    S_Vec4 f30;
    S_001941F0_Obj **f40;
    int func_001941F0(int a);
};

struct S_Vec4Int {
    int x;
    int y;
    int z;
    int w;
    S_Vec4Int *Set(int a, int b, int c, int d) {
        x = a;
        y = b;
        z = c;
        w = d;
        return this;
    }
    void Get(S_Vec4Int *out) {
        *out = *this;
    }
    void Assign(S_Vec4Int v) {
        *this = v;
    }
};

struct S_00194E60_Base {
    int f0;
    int f4;
};

struct C_00194E60 : S_00194E60_Base, S_Vec4Int {
    void func_00194E60(int a, int b, int c, int d);
    void func_00194E60(S_Vec4Int v);
    void func_00194E90(S_Vec4Int *out);
};

extern float D_00275AEC;
extern int D_0028AE90;
void *__cdecl func_001E8A44(unsigned int size);

/* a pair of clamped floats, the same shape _func_0008A9B0 walks */
struct S_00194490_Clamp {
    char pad0[0x10];
    float f10;
    float f14;
};

/* SignatureWave (run-time type information), slot 14 of its vtable */
struct SignatureWave {
    void *vtbl;
    char pad4[0x20];
    S_00194490_Clamp **f24;
    unsigned f28;
    int f2C;
    int f30;
    float f34;
    float f38;
    float f3C;
    float f40;
    char pad44[0x4C - 0x44];
    int f4C;
    int f50;
    int f54;
    int f58;
    char pad5C[0x64 - 0x5C];
    float f64;
    float f68;
    float f6C;
    float f70;
    float f74;
    float f78;
    float f7C;
    float f80;
    int f84;
    int f88;
    float f8C;
    float f90;
    int f94;
    int f98;
    int f9C;
    int fA0;
    int fA4;
    int fA8;
    int fAC;
    float fB0;
    float fB4;
    float fB8;
    float fBC;
    char padC0[0xD0 - 0xC0];
    int fD0;
    char padD4[4];
    float fD8;
    int fDC;
    int fE0;
    int fE4;
    int fE8;
    int fEC;
    SignatureWave *func_00194600(S_Vec4 *a1, S_Vec4 *a2, int a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10, int a11, int a12, int a13, float a14, int a15, int a16, int a17, int a18);
    void func_00194330(S_Vec4 *a1, S_Vec4 *a2, int a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10, int a11, int a12, int a13, float a14, int a15, int a16, int a17, int a18);
    int func_00194490(void);
};

struct C_00157600 {
    void func_00157600(int a);
};

/* (0, 0, 0, 1) vector, zeroed z first */
struct S_Vec4Unit {
    float x, y, z, w;
    void Init() {
        x = y = z = 0.0f;
        w = 1.0f;
    }
};

extern float D_002EFEA0;
extern float D_0027A060;
extern float D_002AB85C;

struct C_0012B8F0 {
    char pad0[0x30];
    S_Vec4 f30;
    int f40;
    C_0012B8F0 *func_0012B8F0(void);
    void func_0012C910(void *a, int b);
    void func_0012BF10(int frame, S_Vec4 *pos, S_Vec4 *v2, S_Vec4 *v3, float *fov);
    void func_0012BF90(int frame, int i0, int i1, int i2, float frac, S_Vec4 *pos, S_Vec4 *v2, S_Vec4 *v3, float *fov);
};

static __forceinline void FloatToInt(int *out, float f)
{
    int * volatile p = out;

    *p = _mm_cvttss_si32(*(__m128 *)&f);
}

/* SimpleCutSceneCamera (run-time type information), base class CameraBehavior */
struct SimpleCutSceneCamera {
    void *vtbl;
    C_0012B8F0 *f4;
    float f8;
    float fC;
    float f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
    void func_0012B510(void);
    SimpleCutSceneCamera *func_00194740(void);
    void func_00194790(void *a0, int a1, int a2);
    int func_001947E0(void *a0, int a1, int a2, int a3);
    void func_00194B40(S_Vec4 *p);
    void func_00194BD0(int a, int b, S_Vec4 *p);
    void func_00194820(float dt, int *done, S_Vec4 *pos, int a3, float *fov, S_Vec4 *v2, S_Vec4 *v3, int a7);
};

extern S_Vec4 D_002A9A28;

struct C_00194EB0 {
    char pad0[0x18];
    S_Vec4Int f18;
    void func_00194EB0(S_Vec4Int v);
};

extern int D_0028AE90;
extern int D_002A9ADC;
extern int D_002A9AE0;
extern int D_002A9AE4;
extern int D_002A9AE8;

struct S_00194C80_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_00194C80 {
    void *vtbl;
    S_00194C80_Obj *f4;
    void func_0012B540(void);
    void *func_00194C80(int flags);
};

/* camera behaviour that owns four 16-byte vectors from +0x8 */
extern int D_0028AED0;
extern int D_002A9B0C, D_002A9B10, D_002A9B14, D_002A9B18;
extern int D_002A9AFC, D_002A9B00, D_002A9B04, D_002A9B08;
/* camera state block exchanged by slot 0 and the function after it */
struct S_StillCamState {
 S_Vec4Int p0, p1, p2; int f30, f34, f38, f3C;
};
struct SimpleStillCamera {
 void *vtbl; int f4; S_Vec4Int f8, f18, f28, f38; float f48;
 void func_0012B510(void);
 SimpleStillCamera *func_00194CC0(void);
 void func_00194FA0(S_StillCamState *s, int a);
 void func_00195010(S_StillCamState *out);
};
struct C_00194DC0 {
    int vtbl;
    int f4;
    S_Vec4Int f8;
    S_Vec4Int f18;
    S_Vec4Int f28;
    S_Vec4Int f38;
    int f48;
    void func_00194DC0(int a0, int *a1, S_Vec4Int *a2, S_Vec4Int *a3, int *a4, S_Vec4Int *a5, S_Vec4Int *a6, int *a7);
};

struct C_00194EE0 {
    int vtbl;
    int f4;
    char pad8[0x20];
    S_Vec4Int f28;
    void func_00194EE0(int a, int b, int c, int d);
    void func_00194EE0(S_Vec4Int v);
    void func_00194F10(S_Vec4Int *out);
};

struct C_00194280 {
    void *vtbl;
    char pad4[0x3C];
    void *f40;
    void func_00157660(void);
    void *func_00194280(int flags);
};

struct S_001942C0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001942C0 {
    void *vtbl;
    char pad4[0x20];
    S_001942C0_Obj **f24;
    char pad28[0x24];
    unsigned int f4C;
    void func_00157660(void);
    void func_001942C0(void);
};

struct C_00194310 {
    char pad0[0x44];
    int unk44;
    int unk48;
    void func_00194310(int a0, int a1);
};

struct C_00194C70 {
    char pad0[0xC];
    int unkC;
    char pad10[0x14];
    int unk24;
    int func_00194C70(void);
};

struct C_00194F90 {
    char pad0[0x48];
    int unk48;
    void func_00194F90(int a0);
};

struct C_00194F60 {
    char pad0[0x38];
    S_Vec4Int f38;
    void func_00194F60(S_Vec4Int v);
};

extern u32 D_002A9B44;
extern u32 D_002A9B48;
extern u32 D_002A9B4C;
extern u32 D_002A9B50;
extern int D_0028AF24;
extern const float D_00277D04;
void func_001E8390(void *p);

/* SimpleTVCamera (run-time type information), base class CameraBehavior */
struct C_00195090 {
    void *vtbl;
    float f4;
    float f8;
    int fC;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1C;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    void *f40;
    u32 f44;
    u32 f48;
    u32 f4C;
    u32 f50;
    u32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6C;
    u32 f70;
    u32 f74;
    u32 f78;
    void func_0012B510(void);
    void func_0012B540(void);
    C_00195090 *func_00195090(void);
    void func_00195130(void);
    void func_00195160(int a0, int a1, float a2);
};

struct C_00194DB0 {
    int unk0;
    void func_00194DB0(void);
};

struct C_00194C60 {
    char pad0[0x24];
    int unk24;
    void func_00194C60(void);
};


int C_001941F0::func_001941F0(int a)
{
    int i;
    S_001941F0_Obj **p = f40;

    for (i = 0; i < f24; i++) {
        f30.y = -((*p)->f210 * f2C);
        (*p)->Add(f30);
        p++;
    }
    return 1;
}

void *C_00194280::func_00194280(int flags)
{
    vtbl = (void *)&D_0028AD8C;
    if (f40 != 0) {
        func_001E891B(f40);
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001942C0::func_001942C0(void)
{
    unsigned int i;

    vtbl = (void *)&D_0028AE14;
    if (f24 != 0) {
        for (i = 0; i < f4C; i++) {
            S_001942C0_Obj *e = f24[i];
            if (e != 0) {
                e->v2();
            }
        }
        func_001E891B(f24);
    }
    func_00157660();
}

void C_00194310::func_00194310(int a0, int a1) {
    unk48 = a0;
    unk44 = a1;
}

void SignatureWave::func_00194330(S_Vec4 *a1, S_Vec4 *a2, int a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10, int a11, int a12, int a13, float a14, int a15, int a16, int a17, int a18){
float inv4 = D_00275460 / a4;
float inv5 = D_00275460/a5;
*(S_Vec4 *)&f64 = *a1;
*(S_Vec4 *)&f74 = *a2;
f4C=a3; f34=a4; f38=a5;
f3C=inv4;
f40=inv5;
f84=0; f88=0; f94=0; f98=0;
f8C=a4*a6/(float)f28;
f9C=a9; fA0=a10; fAC=a12; fBC=1.0f; fB8=1.0f;
f50=0; f54=0; fA4=a11==0?3:1;
fE4=a15; fD0=a13; fE8=a17; fDC=a16; fA8=a11;
fD8=a14; fEC=a18;
f90=a5*a7/(float)f28;
fB0=inv4*256.0f; fB4=inv5*-256.0f;
}

int SignatureWave::func_00194490(void)
{
    if (f24 != 0) {
        S_00194490_Clamp *o = f24[f50];
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        o = f24[f54];
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
    }
    return 1;
}

int C_00194520::func_00194520(float dt, int a) {
 if (!D_002A99B0 && fAC == 3) return 1;
 fE0 = dt + fE0;
 if (fE4 != D_00275544) {
 float frame = fE0 * fE4;
 int index = (int)frame;
 f58 = 1.0f - (frame - index);
 f50 = (unsigned)index % f4C;
 f54 = f50 + 1;
 if (f54 >= f4C) f54 = 0;
 } else { f50 = 0; f58 = 1.0f; f54 = 0; }
 f84 = (float)fmod(dt * f8C + f84, f34);
 f88 = (float)fmod(dt * f90 + f88, f38);
 return 1;
}

SignatureWave *SignatureWave::func_00194600(S_Vec4 *a1, S_Vec4 *a2, int a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10, int a11, int a12, int a13, float a14, int a15, int a16, int a17, int a18)
{
    ((C_00157600 *)this)->func_00157600(1);
    vtbl = (void *)&D_0028AE14;
    ((S_Vec4Unit *)&f64)->Init();
    ((S_Vec4Unit *)&f74)->Init();
    ((S_Vec4Unit *)&fB0)->Init();
    if (a12 == 0 && a14 > D_002EFEA0) {
        D_002EFEA0 = a14;
        D_002AB85C = a14 * 255.0f;
    }
    f58 = 0;
    f54 = 0;
    f50 = 0;
    fE0 = 0;
    f24 = 0;
    fAC = a12;
    if (D_002A99B0 != 0 || a12 != 3) {
        f28 = 1;
        f2C = 0;
        f30 = 1;
        func_00194330(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
    }
    return this;
}

undefined4 C_00194720::func_00194720(byte param_1)
{
  int func_001942C0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001942C0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

SimpleCutSceneCamera *SimpleCutSceneCamera::func_00194740(void)
{
    func_0012B510();
    vtbl = (void *)&D_0028AE90;
    f4 = 0;
    fC = 0;
    f10 = 80.0f;
    f14 = 0;
    f2C = 0;
    f18 = 0;
    f8 = 30.0f;
    f1C = 0;
    f24 = 1;
    f28 = 1;
    f20 = 0;
    return this;
}

void SimpleCutSceneCamera::func_00194790(void *a0, int a1, int a2)
{
    f2C = a1;
    if (a0 != 0) {
        C_0012B8F0 *p = (C_0012B8F0 *)func_001E8A44(0x48);
        C_0012B8F0 *q = p ? p->func_0012B8F0() : 0;
        f4 = q;
        q->func_0012C910(a0, a2);
        f20 = f4->f40;
    }
}

int SimpleCutSceneCamera::func_001947E0(void *a0, int a1, int a2, int a3)
{
    if (a0 != 0) {
        func_00194790(a0, a1, a2);
        f28 = a3;
        return 1;
    }
    f28 = a3;
    return 1;
}

extern "C" void *__cdecl memset(void *, int, unsigned int);
void SimpleCutSceneCamera::func_00194820(float dt, int *done, S_Vec4 *pos, int a3, float *fov, S_Vec4 *v2, S_Vec4 *v3, int a7)
{
    SimpleCutSceneCamera *q;
    S_Vec4 *c;
    S_Vec4 p;
    S_Vec4 r;
    S_Vec4 s;
    float f;
    int fl;
    float t;
    int a;
    float frac;
    int i0;
    int i1;
    int i2;

    p.z = 0.0f;
    p.y = 0.0f;
    p.x = 0.0f;
    p.w = 1.0f;
    r.z = 0.0f;
    r.y = 0.0f;
    r.x = 0.0f;
    r.w = 1.0f;
    s.z = 0.0f;
    s.y = 0.0f;
    s.x = 0.0f;
    s.w = 1.0f;
    if (f24 == 0) {
        memset(done, 0, sizeof(int));
        return;
    }
    if (f14 == 1) {
        fC = fC - dt;
        q = this;
        t = q->fC * q->f8;
        AsmFloatToInt(t, &fl);
        if ((float)fl >= t) {
            f18 = fl;
        } else {
            f18 = fl + 1;
        }
        q = this;
        if (q->f18 <= q->f1C) {
            if (q->f2C != 0) {
                q->f18 = q->f20;
                q = this;
                q->fC = (float)q->f20 / q->f8;
            } else {
                q->f18 = q->f1C;
                q = this;
                q->fC = (float)q->f1C / q->f8;
                memset(&q->f24, 0, sizeof(u32));
            }
        }
        q = this;
        if (q->f20 == q->f1C) {
            goto simple;
        }
        a = q->f18;
        if (a == q->f1C) {
            goto simple;
        }
        i1 = a - 1;
        frac = (float)a - q->fC * q->f8;
        i0 = a;
        if (a != q->f20) {
            i0 = a + 1;
        }
        if (a == q->f1C + 1) {
            i2 = i1;
        } else {
            i2 = i1 - 1;
        }
    } else {
        fC = dt + fC;
        q = this;
        t = q->fC * q->f8;
        AsmFloatToInt(t, &q->f18);
        q = this;
        if (q->f18 >= q->f20) {
            if (q->f2C != 0) {
                q->f18 = q->f1C;
                q = this;
                q->fC = (float)q->f1C / q->f8;
            } else {
                q->f18 = q->f20;
                q = this;
                memset(&q->f24, 0, sizeof(u32));
            }
        }
        q = this;
        if (q->f1C == q->f20) {
            goto simple;
        }
        a = q->f18;
        if (a == q->f20) {
            goto simple;
        }
        i1 = a + 1;
        frac = q->fC * q->f8 - (float)a;
        i0 = a;
        i2 = i1;
        if (a != q->f1C) {
            i0 = a - 1;
        }
        if (a != q->f20 - 1) {
            i2 = i1 + 1;
        }
    }
    if (q->f4->f40 >= 2) {
        q->f4->func_0012BF90(q->f18, i0, i1, i2, frac, &p, &r, &s, &f);
        goto tail;
    }
simple:
    q = this;
    q->f4->func_0012BF10(q->f18, &p, &r, &s, &f);
tail:
    q = this;
    c = &q->f4->f30;
    p.x = p.x + c->x;
    p.y = p.y + c->y;
    p.z = p.z + c->z;
    if (pos != 0) {
        *(S_Vec4Int *)pos = *(S_Vec4Int *)&p;
    }
    if (v2 != 0) {
        *(S_Vec4Int *)v2 = *(S_Vec4Int *)&r;
    }
    if (v3 != 0) {
        *(S_Vec4Int *)v3 = *(S_Vec4Int *)&s;
    }
    if (fov != 0) {
        *fov = f;
    }
    memset(done, 0, sizeof(int));
}

void SimpleCutSceneCamera::func_00194B40(S_Vec4 *p)
{
    f24 = 1;
    if (f14 == 1) {
        fC = (float)f4->f40 / f8;
    } else {
        fC = 0;
    }
    f1C = 0;
    f20 = f4->f40 - 1;
    f4->f30 = D_002A9A28;
    if (p != 0) {
        f4->f30 = *p;
    }
    f18 = 0;
}

void SimpleCutSceneCamera::func_00194BD0(int a, int b, S_Vec4 *p)
{
    f24 = 1;
    fC = (float)a / f8;
    if (a < b) {
        f14 = 0;
        f1C = a;
        f20 = b;
    } else {
        f14 = 1;
        f1C = b;
        f20 = a;
    }
    f4->f30 = D_002A9A28;
    if (p != 0) {
        f4->f30 = *p;
    }
}

void C_00194C60::func_00194C60(void) {
    unk24 = 0;
}

int C_00194C70::func_00194C70(void) {
    unkC = 0;
    unk24 = 0;
    return 1;
}

void *C_00194C80::func_00194C80(int flags)
{
    vtbl = (void *)&D_0028AE90;
    if (f4 != 0) {
        f4->v2();
    }
    func_0012B540();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

SimpleStillCamera *SimpleStillCamera::func_00194CC0(void) {
 int *p;
 func_0012B510();
 vtbl = &D_0028AED0;
p = &f8.x; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
p = &f18.x; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
p = &f28.x; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
p = &f38.x; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
f8.x = D_002A9ADC;
f8.y = D_002A9AE0;
f8.z = D_002A9AE4;
f8.w = D_002A9AE8;
f18.x = D_002A9B0C;
f18.y = D_002A9B10;
f18.z = D_002A9B14;
f18.w = D_002A9B18;
f28.x = D_002A9ADC;
f28.y = D_002A9AE0;
f28.z = D_002A9AE4;
f28.w = D_002A9AE8;
f38.x = D_002A9AFC;
f38.y = D_002A9B00;
f38.z = D_002A9B04;
f38.w = D_002A9B08;
f4 = 0; f48 = 80.0f; return this;
}

void C_00194DB0::func_00194DB0(void) {
    extern int D_0028AED0;
    int func_0012B540(...);
    unk0 = (int)&D_0028AED0;
    func_0012B540();
}

void C_00194DC0::func_00194DC0(int a0, int *a1, S_Vec4Int *a2, S_Vec4Int *a3, int *a4, S_Vec4Int *a5, S_Vec4Int *a6, int *a7)
{
    *a2 = f8;
    *a5 = f18;
    *a3 = f28;
    *a6 = f38;
    *a4 = f48;
    *a7 = 0;
    *a1 = f4;
}

void C_00194E60::func_00194E60(S_Vec4Int v)
{
    Assign(v);
}

void C_00194E60::func_00194E90(S_Vec4Int *out)
{
    Get(out);
}

void C_00194EB0::func_00194EB0(S_Vec4Int v)
{
    f18 = v;
}

void C_00194EE0::func_00194EE0(S_Vec4Int v)
{
    f28 = v;
}

void C_00194EE0::func_00194F10(S_Vec4Int *out)
{
    if (f4 == 0) {
        out->x = D_002A9ADC;
        out->y = D_002A9AE0;
        out->z = D_002A9AE4;
        out->w = D_002A9AE8;
    } else {
        *out = f28;
    }
}

void C_00194F60::func_00194F60(S_Vec4Int v)
{
    f38 = v;
}

void C_00194F90::func_00194F90(int a0) {
    unk48 = a0;
}

void SimpleStillCamera::func_00194FA0(S_StillCamState *out, int a)
{
    out->p0 = f8;
    out->p1 = f18;
    out->p2 = f38;
    out->f34 = *(int *)&f48;
    out->f30 = 0;
    out->f38 = 0;
    out->f3C = 0;
}

void SimpleStillCamera::func_00195010(S_StillCamState *out)
{
 out->p0=f8; out->p1=f18; out->p2=f38; out->f34=*(int *)&f48;
 out->f30=0; out->f38=0; out->f3C=0;
}

C_00195090 *C_00195090::func_00195090(void)
{
    u32 *p;

    func_0012B510();
    vtbl = (void *)&D_0028AF24;
    p = &f10;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f28;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f4C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f5C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f20 = 0;
    f24 = 0;
    f4 = 60.0f;
    f28 = D_002A9B44;
    f2C = D_002A9B48;
    f30 = D_002A9B4C;
    f34 = D_002A9B50;
    f48 = 0;
    f3C = 0;
    f44 = 0;
    f40 = 0;
    f6C = 0;
    f70 = 0;
    f74 = 0;
    f78 = 0;
    f38 = 0xffffffff;
    return this;
}

void C_00195090::func_00195130(void)
{
    void *p = f40;

    vtbl = (void *)&D_0028AF24;
    if (p != 0) {
        func_001E8390(p);
    }
    func_0012B540();
}

void C_00195090::func_00195160(int a0, int a1, float a2)
{
    f24 = a0;
    f20 = 0;
    f8 = a2 * 1.46666f;
    fC = a1;
}

