/* 11 functions from 0x00137810 to 0x00138800, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_001387E0 {
    undefined4 func_001387E0(byte param_1);
};

struct C_00138790 {
    undefined4 func_00138790(byte param_1);
};

struct C_001387D0 {
    C_001387D0* func_001387D0(int a0);
};

struct FileSys {
    int func_0013C9F0(int name, void *mode);
    int func_0013C8A0(int h, void *buf, int size, int count);
    int func_0013AFD0(int h);
    int func_0013AFF0(int h, int pos, int whence);
    void func_0013C110(int h);
};
struct CubeSub { CubeSub *func_00136AD0(); void func_001365B0(int h, int a); };
struct CubeSub2 { void func_0014A520(void *p); void func_0014A560(void *p, int a); };
struct CubeSub3 { CubeSub3 *func_00142C70(); void func_00142C80(void *p, int a); };
struct CubeSub4 { void func_00135150(int h); };
extern FileSys *D_002BEAAC;
extern char D_00275FB4[], D_00018B10[], D_002A67B4[], D_002BDD28[], D_0028499C[], D_00284990[];
void *func_001E8A44(int size);
void func_0014A7B0(void *a, void *b);
void *__stdcall func_001FF3C0(int size);
extern int D_002849BC;
extern int D_00284924;
extern int D_002A67D8;
extern int D_002BDE8C;

struct CubeTextureMap {
    void *vtbl;
    void func_001D6AD0(int a);
    void *func_001387B0(int a);
};

struct DrawableCubeVirt {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_0014A540 {
    void func_0014A540(void);
};

struct C_00012140 {
    void func_00012140(void);
};

struct C_00193500 {
    void func_00193500(void);
};

extern void *D_002BDE9C;
extern int D_002BDEA0;
void func_001E891B(void *p);
void func_001E8390(void *p);
void __stdcall func_00201100(void *p);

extern float D_00275460;
int func_00011260(int lo, int hi);

#include <xmmintrin.h>

struct S_137F90_Obj {
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
    virtual int v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21(int a);
};

struct S_137F90_Src {
    char pad0[8];
    float f8;
    float fC;
    float f10;
};

struct S_137F90_Slot6C {
    void func_0014A650(C_0014A540 *p);
};

struct S_137F90_Slot70 {
    void func_00142D00(C_00012140 *p);
};

struct S_137F90_G {
    char pad0[4];
    char *f4;
    char pad8[0x20];
    float f28;
    char pad2C[0x6C - 0x2C];
    S_137F90_Slot6C *f6c;
    S_137F90_Slot70 *f70;
};

struct S_137F90_V4 {
    float x, y, z, w;
};

struct S_137F90_Quad {
    char b[0x90];
};

struct S_137F90_RS {
    int f0;
    int f4;
    int f8;
    char pad[0x80 - 0xC];
};

__declspec(align(16)) struct S_137F90_Mat {
    float m[16];
};

static __forceinline void identity_ref_00137F90(S_137F90_Mat *&p)
{
    S_137F90_Mat *q = p;
    _mm_store_ps(&q->m[0], _mm_setzero_ps());
    _mm_store_ps(&q->m[4], _mm_setzero_ps());
    _mm_store_ps(&q->m[8], _mm_setzero_ps());
    _mm_store_ps(&q->m[12], _mm_setzero_ps());
    q->m[0] = 1.0f;
    q->m[5] = 1.0f;
    q->m[10] = 1.0f;
    q->m[15] = 1.0f;
}

extern S_137F90_G *D_002EFDB8;
extern int D_00040300, D_00040304, D_00040354, D_0004035C;
extern int D_0020C6DC, D_0020C710, D_0020C718, D_0020C720, D_0020CA50;
extern S_137F90_RS D_0020C6E0[];
extern int D_002BEA90;
extern S_137F90_Quad D_002BA728[];
void __fastcall func_001FD020(void *p, int v);
void __fastcall func_001FEC30(int n, void *p);
int __fastcall func_001FEBD0(int n, void *p);
void __stdcall func_001FE490(int a);
void __stdcall func_00200390(int index, int value);
void *__stdcall func_001FF410(void *buffer, int flags);
void __stdcall func_001FEE00(int stream, void *data, int stride);
void __stdcall func_00200B30(void *a, int b, void *c);
void __stdcall func_00200950(int a, int b, void *c, void *d, int e);
void __stdcall func_001FF4E0(int a, void *b, int c, int d, float e, int f);
void func_000263B0(float *out, float *a, float *b);
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);

/* 0x28-byte entry of DrawableCube::f3c */
struct DrawableCubeItem {
    float f0;
    float f4;
    char pad8[4];
    float fC;
    float f10;
    int f14;
    float f18;
    float f1C;
    float f20;
    u8 f24;
};

struct DrawableCube {
    void *vtbl;
    char pad4[0x23];
    u8 f27;
    S_137F90_Src *f28;
    DrawableCubeVirt **f2c;
    int f30;
    int f34;
    int f38;
    DrawableCubeItem *f3c;
    char pad40[0x780];
    DrawableCubeVirt *f7c0;
    C_00193500 *f7c4;
    int f7c8;
    int f7cc;
    C_0014A540 *f7d0;
    C_00012140 *f7d4;
    void *f7d8;
    void func_00136FE0();
    void func_00137810();
    void func_00157660();
    int func_00157A00(float dt);
    void func_00137E50(float dt);
    int func_00137F90();
    void func_00192370(int a);
    void func_00138390(void);
    int func_001382B0(void);
    DrawableCube *func_00138330(int a);
};


void DrawableCube::func_00137E50(float dt)
{
    int i;
    int idle;
    DrawableCubeItem *e;

    if (f3c == 0) {
        func_00157A00(dt);
        return;
    }
    idle = 1;
    for (i = 0; i < f38; i++) {
        e = &f3c[i];
        if (e->f24 & 1) {
            idle = 0;
        } else {
            e->f18 = dt + e->f18;
        }
    }
    if (idle != 0) {
        for (i = 0; i < f38; i++) {
            e = &f3c[i];
            if (e->f18 > e->f10) {
                if (e->f1C >= D_00275460) {
                    e->f1C = 0;
                    if (func_00011260(0, 100) < e->f14) {
                        e->f24 |= 1;
                        f34 = i;
                        break;
                    }
                } else {
                    e->f1C = dt + e->f1C;
                }
            }
        }
    } else {
        e = &f3c[f34];
        e->f20 = dt * e->fC + e->f20;
        if (e->f20 > e->f4 - e->f0) {
            e->f20 = 0;
            e->f18 = 0;
            e->f24 &= ~1;
        }
    }
    func_00157A00(dt);
}

int DrawableCube::func_001382B0(void)
{
    if (D_002A67D8 != 0) {
        if (D_002BDE8C != 0)
            func_00136FE0();
        func_00137810();
    }
    return 1;
}

DrawableCube *DrawableCube::func_00138330(int a)
{
    func_00192370(a);
    f27 |= 3;
    f28 = 0;
    f2c = 0;
    f30 = 0;
    f34 = 0;
    f3c = 0;
    f38 = 0;
    f7c8 = 0;
    f7c0 = 0;
    f7c4 = 0;
    f7d0 = 0;
    f7d4 = 0;
    f7d8 = 0;
    vtbl = (void *)&D_00284924;
    return this;
}

void DrawableCube::func_00138390(void)
{
    int i;
    C_0014A540 *p0;
    C_00012140 *p1;
    C_00193500 *p2;
    DrawableCubeVirt *v;

    vtbl = (void *)&D_00284924;
    p0 = f7d0;
    if (p0) {
        p0->func_0014A540();
        func_001E891B(p0);
    }
    p1 = f7d4;
    if (p1) {
        p1->func_00012140();
        func_001E891B(p1);
    }
    if (f7d8) {
        func_00201100(f7d8);
    }
    if (D_002BDE9C) {
        func_001E8390(D_002BDE9C);
    }
    v = f7c0;
    D_002BDE9C = 0;
    D_002BDEA0 = 0;
    if (v) {
        v->v2();
    }
    for (i = 0; i < f7c8; i++) {
        if (f2c[i]) {
            f2c[i]->v2();
        }
    }
    p2 = f7c4;
    if (p2) {
        p2->func_00193500();
        func_001E891B(p2);
    }
    if (f2c) {
        func_001E891B(f2c);
    }
    if (f3c) {
        func_001E891B(f3c);
    }
    func_00157660();
}

undefined4 C_00138790::func_00138790(byte param_1)
{
  int func_00138390(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00138390();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *CubeTextureMap::func_001387B0(int a)
{
    func_001D6AD0(a);
    vtbl = (void *)&D_002849BC;
    return this;
}

C_001387D0* C_001387D0::func_001387D0(int a0) {
    return this;
}

undefined4 C_001387E0::func_001387E0(byte param_1)
{
  int func_001D6B00(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D6B00();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

