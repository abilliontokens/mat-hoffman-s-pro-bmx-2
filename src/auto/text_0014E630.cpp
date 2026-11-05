/* 11 functions from 0x0014E630 to 0x0014F600, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern float D_00275460;
extern float D_002756D0;
extern float D_002A7710;
extern float D_002A7714;
extern float D_002A7718;
extern float D_002A771C;
extern float D_002A7720;
extern float D_002A7730;
extern float D_002A7734;
extern float D_002A7738;
extern float D_002A773C;
extern float D_002DF870;
extern float D_002DF874;

/* lookup table entry: value and slope */
struct TrigEntry {
    float a;
    float b;
};
extern TrigEntry *D_002CF6B4;

float func_00016D60(int x);
extern "C" void func_001E8390(void*);
extern "C" void* func_001E8AA5(int);

static inline void FloatToIndex(int *out, float f) {
    *out = (int)f;
}

struct C_0014F170 {
    undefined4 func_0014F170(byte param_1);
};


undefined4 C_0014F170::func_0014F170(byte param_1)
{
  int func_0014E4E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0014E4E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

extern "C" double __cdecl acos(double);
#pragma intrinsic(acos)
extern int D_002A7700;
extern float* D_002DF87C;
extern float D_002755E8;
extern float D_002DF86C;
extern float D_00275600;
int func_0014F190()
{
    D_002DF86C = (float)(D_002A7700 - 2) * D_002755E8;
    if (D_002DF87C)
        func_001E8390(D_002DF87C);
    D_002DF87C = (float*)func_001E8AA5(D_002A7700 * 4);
    if (!D_002DF87C)
        return 0;
    float step = D_00275600 / (float)(D_002A7700 - 2);
    float* p = D_002DF87C;
    for (int i = 0; i < D_002A7700 - 1; i++) {
        float a = i * step - D_00275460;
        if (a > D_00275460)
            a = 1.0f;
        *p++ = (float)acos(a);
    }
    *p = p[-1];
    return 1;
}

extern "C" double __cdecl cos(double);
extern "C" double __cdecl sin(double);
extern "C" double __cdecl acos(double);
#pragma intrinsic(cos, sin, acos)
extern int D_002A7704;
extern int D_002A7708;

/* arccos lookup tables, 12 bytes per power-of-two input range:
   float lo; float scale; float *table. D_002DF748 is the first table
   pointer, D_002DF868 the last one. */
extern float *D_002DF748;
extern char D_002DF868;
extern float D_002756EC;
extern float D_002756B8;
extern "C" void func_001E8390(void*);
extern "C" void* func_001E8AA5(int);
int func_0014F270()
{
    float n = (float)(D_002A7704 - 2);
    D_002DF870 = D_002756EC * n;
    D_002DF874 = D_002756B8 / n;
    if (D_002CF6B4)
        func_001E8390(D_002CF6B4);
    float* p = (float*)func_001E8AA5(D_002A7704 * 8);
    D_002CF6B4 = (TrigEntry*)p;
    if (!p)
        return 0;
    float step = D_002756B8 / (float)(D_002A7704 - 2);
    for (int i = 0; i < D_002A7704 - 1; i++) {
        float a = i * step - D_002756D0;
        p[0] = (float)cos(a);
        p[1] = (float)sin(a);
        p += 2;
    }
    p[0] = p[-2];
    p[1] = p[-1];
    return 1;
}

int func_0014F350()
{
    float lo = 0.0f;
    float hi = 5.9604645e-08f;
    float **tp;
    float *p;
    float *q;
    float scale;
    int i;

    tp = &D_002DF748;
    do {
        if (*tp) {
            func_001E8390(*tp);
        }
        p = (float *)func_001E8AA5(D_002A7708 * 4);
        *tp = p;
        if (!p) {
            return 0;
        }
        ((float *)tp)[-2] = lo;
        scale = (float)(D_002A7708 - 2) / (hi - lo);
        ((float *)tp)[-1] = scale;
        q = p;
        for (i = 0; i < D_002A7708 - 1; i++) {
            *q = (float)acos(D_00275460 - ((float)i / scale + lo));
            q++;
        }
        *q = q[-1];
        lo = hi;
        hi = hi + hi;
        tp += 3;
    } while ((int)tp <= (int)&D_002DF868);
    return 1;
}

float func_0014F450(int x) {
    float f = (func_00016D60(x) + D_002756D0) * D_002DF870;

    FloatToIndex(&x, f);
    return (f - (float)x) * D_002CF6B4[x].a * D_002DF874 + D_002CF6B4[x].b;
}

float func_0014F4B0(int x) {
    float f = (func_00016D60(x) + D_002756D0) * D_002DF870;

    FloatToIndex(&x, f);
    return D_002CF6B4[x].a - (f - (float)x) * D_002CF6B4[x].b * D_002DF874;
}

float func_0014F510(float x) {
    float t = x * x;

    return (((((D_002A7720 * t + D_002A771C) * t + D_002A7718) * t + D_002A7714) * t + D_002A7710) * t) + D_00275460;
}

float func_0014F550(float x) {
    float t = x * x;

    return ((((D_002A773C * t + D_002A7738) * t + D_002A7734) * t + D_002A7730) * t + D_00275460) * x;
}

float func_0014F590(int x) {
    float f = (func_00016D60(x) + D_002756D0) * D_002DF870;
    int i = _mm_cvttss_si32(_mm_set_ss(f));
    float t = (f - (float)i) * D_002DF874;
    return (t * D_002CF6B4[i].a + D_002CF6B4[i].b) / (D_002CF6B4[i].a - t * D_002CF6B4[i].b);
}

