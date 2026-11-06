/* 7 functions from 0x0017AA90 to 0x0017BA00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct ShadowObject {
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
    virtual int v27();
    virtual void v28();
    virtual int v29();
};
struct ShadowRenderer {
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
    virtual void v12(char *);
    char *f4;
    int f8, fC;
    void func_00182830(char *);
};
extern ShadowRenderer *D_002EFDB8;
extern int D_00289004;
struct ShadowCamera {
    void *vtbl;
    char pad4[0x2cc];
    void func_0013E4F0(int);
    int func_0012B410(float, int, int);
    void func_0012AAB0(float);
    ShadowCamera *init() { func_0013E4F0(1); vtbl=&D_00289004; return this; }
};
extern char D_002A60B0[];
extern char D_00284644[];
extern int D_002A8D2C, D_002A8D30, D_002A8D34;
extern float D_002A8D38;
extern int D_00288FF4;
extern int D_002AA46C;
extern "C" void *func_001E8A44(unsigned int);
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);
struct C_0017AA90;
struct ShadowPreambleDataItem {
    void *vtbl;
    C_0017AA90 *owner;
    ShadowPreambleDataItem(C_0017AA90 *p);
};

inline ShadowPreambleDataItem::ShadowPreambleDataItem(C_0017AA90 *p) {
    vtbl = &D_00288FF4;
    owner = p;
}

struct C_0017AA90_Child {
    virtual void v0();
    virtual void v1(C_0017AA90 *owner);
};

struct C_0017AA90_Xform {
    char pad0[0x250];
    int f250;
};

struct C_0017AA90_Dest {
    int f0, f4, f8;
    char padC[0xC];
    int f18;
};

struct C_0017AA90_Res {
    char pad0[0x4c];
    C_0017AA90_Dest *f4C;
};

struct C_0017AA90_Node {
    int f0;
    C_0017AA90_Res *f4;
    int f8;
    int fC;
};

struct C_0017AA90_Mgr {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a, int b);
    char pad4[0x10];
    C_0017AA90_Node *f14;
    int func_001617F0(const char *, int);
};

extern int D_002EFD5C;
extern int D_002A8CDC;
extern C_0017AA90_Mgr *D_002A829C;
void func_000263B0(void *a, void *b, void *c);

struct V4_0017AD20 { float x, y, z, w; V4_0017AD20() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; } };
struct Obj_0017AD20 {
      char pad_00[0xf0];
      float mat[12];
      void func_00198B70(void *a, void *b);
};
struct Node_0017AD20 {
      int f0;
      Obj_0017AD20 *f4;
};
extern float D_002755E8;
extern float D_00275460;
extern float D_002A8CE0;
extern float D_00289080;
void func_0001C680(void *out, V4_0017AD20 v, float *m);
static __forceinline void Xform_0017AD20(float *out, float *v, float *m)
{
    __m128 r0 = _mm_load_ps(m);
    __m128 r1 = _mm_load_ps(m + 4);
    __m128 r2 = _mm_load_ps(m + 8);
    __m128 vec = _mm_loadu_ps(v);
    __m128 lo, hi;
    _mm_storeh_pi((__m64 *)(out + 2), vec);
    out[3] = 1.0f;
    vec = _mm_loadh_pi(vec, (__m64 *)(out + 2));
    r0 = _mm_mul_ps(r0, vec);
    r1 = _mm_mul_ps(r1, vec);
    r2 = _mm_mul_ps(r2, vec);
    lo = _mm_unpacklo_ps(r0, r1);
    hi = _mm_unpackhi_ps(r0, r1);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, _mm_movehl_ps(r2, r2));
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(out, lo);
    out[3] = 1.0f;
}
struct C_0017AA90 {
      void *vtbl;
      char pad4[0xAC];
      float fB0, fB4, fB8;
      char padBC[4];
      float fC0, fC4, fC8;
      char padCC[4];
      float fD0, fD4, fD8, fDC;
      float fE0, fE4, fE8, fEC;
      C_0017AA90_Child **fF0;
      int fF4;
      char padF8[4];
      char *fFC;
      int f100, f104, f108, f10C, f110, f114;
      int f118;
      char pad11C[0x10];
      float f12C;
      float f130;
      float f134;
      char pad138[4];
      int f13C;
    struct ShadowObject **f140;
    int f144, f148, f14C;
    int f150;
    int f154;
    char pad158[8];
    int f160;
    int func_0017AA90();
    int func_0017B800();
    void func_0017AD20();
    void func_001D3F50();
    C_0017AA90 *func_0017ABE0(const char *name);
    C_0017AA90(const char *name);
};

struct C_0017ABC0 {
    undefined4 func_0017ABC0(byte param_1);
};

struct C_0017B9E0 {
    int unk0;
    int unk4;
    C_0017B9E0* func_0017B9E0(int a0, int a1);
};

struct C_0017AB70 {
    char pad0[0x158];
    int *unk158;
    int unk15C;
    int func_0017AB70(int param_1);
};


int C_0017AA90::func_0017AA90()
{
    if (D_002EFD5C == 0) {
        D_002EFD5C = 1;
        return 1;
    }
    if (D_002A8CDC != 0 && f150 == 0 && fF4 != 0) {
        func_000263B0(fFC + 0x250, fFC + 0xb0, fFC + 0x70);
        D_002A829C->f14[f154].f4->f4C->f18 = f160;
        for (int i = 0; i < fF4; i++) {
            fF0[i]->v1(this);
        }
    }
    return 1;
}

int C_0017AB70::func_0017AB70(int param_1)
{
    if (unk158 == 0) {
        return 1;
    }
    for (int i = 0; i < unk15C; i++) {
        if (unk158[i] == param_1) {
            return 0;
        }
    }
    return 1;
}

undefined4 C_0017ABC0::func_0017ABC0(byte param_1)
{
  int func_0017A640(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0017A640();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0017AA90 *C_0017AA90::func_0017ABE0(const char *name)
{
    char buf[0x104];
    func_001D3F50();
    if (D_002A60B0[0]) {
        int i = 0;
        do { buf[i] = D_002A60B0[i]; } while (D_002A60B0[i++]);
        if (D_002A60B0[strlen(D_002A60B0)-1] != '\\')
            strcat(buf, "\\");
        strcat(buf, name);
    } else {
        strcpy(buf, name);
    }
    *(float *)&D_002A8D2C = 0.0f;
    *(float *)&D_002A8D30 = 0.0f;
    *(float *)&D_002A8D34 = 0.0f;
    D_002A8D38 = 0.45f;
    int *p = (int *)func_001E8A44(8);
    if (p) { p[0] = (int)&D_00288FF4; p[1] = (int)this; } else { p = 0; }
    f160 = (int)p;
    f154 = D_002A829C->func_001617F0(buf, 1);
    int value = D_002AA46C;
    D_002A829C->v6(f154, value);
    return this;
}

C_0017B9E0* C_0017B9E0::func_0017B9E0(int a0, int a1) {
    unk0 = a0;
    unk4 = a1;
    return this;
}
extern char D_002A60B0[];
extern char D_00284644[];
extern int D_002A8D2C, D_002A8D30, D_002A8D34;
extern float D_002A8D38;
extern int D_00288FF4;
extern int D_002AA46C;
extern "C" void *func_001E8A44(unsigned int);
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);

