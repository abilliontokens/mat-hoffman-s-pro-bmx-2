/* 30 functions from 0x0014F600 to 0x00150480, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
/* One entry of the sine/cosine table func_0014F6E0 interpolates in. */
struct S_SinCosEntry {
    float a;
    float b;
};

extern S_SinCosEntry *D_002CF6B4;

/* Truncate towards zero into *out; inlined into its callers. */
static void storeftoi(int *out, float f)
{
    *out = _mm_cvtt_ss2si(_mm_load_ss(&f));
}

struct C_00150350 {
    int unk0;
    void func_00150350(void);
};


float func_0014F600(float x)
{
    extern float D_002A773C;
    extern float D_002A7738;
    extern float D_002A7734;
    extern float D_002A7730;
    extern float D_00275460;
    extern float D_002A7720;
    extern float D_002A771C;
    extern float D_002A7718;
    extern float D_002A7714;
    extern float D_002A7710;
    float x2 = x * x;
    return ((((D_002A773C * x2 + D_002A7738) * x2 + D_002A7734) * x2 + D_002A7730) * x2 + D_00275460) * x /
           (((((D_002A7720 * x2 + D_002A771C) * x2 + D_002A7718) * x2 + D_002A7714) * x2 + D_002A7710) * x2 + D_00275460);
}

void func_0014F670(float x, float *num, float *den)
{
    extern float D_002A773C;
    extern float D_002A7738;
    extern float D_002A7734;
    extern float D_002A7730;
    extern float D_00275460;
    extern float D_002A7720;
    extern float D_002A771C;
    extern float D_002A7718;
    extern float D_002A7714;
    extern float D_002A7710;
    float x2 = x * x;
    *num = ((((D_002A773C * x2 + D_002A7738) * x2 + D_002A7734) * x2 + D_002A7730) * x2 + D_00275460) * x;
    *den = (((((D_002A7720 * x2 + D_002A771C) * x2 + D_002A7718) * x2 + D_002A7714) * x2 + D_002A7710) * x2 + D_00275460);
}

void func_0014F6E0(float a, float *s, float *c)
{
    extern float D_002756D0;
    extern float D_002DF870;
    extern float D_002DF874;
    float func_00016D60(float);
    int i;
    float v = (func_00016D60(a) + D_002756D0) * D_002DF870;
    storeftoi(&i, v);
    float f = (v - (float)i) * D_002DF874;
    *s = f * D_002CF6B4[i].a + D_002CF6B4[i].b;
    *c = D_002CF6B4[i].a - f * D_002CF6B4[i].b;
}

float func_0014F990(float x)
{
    return (float)atan(x);
}

void func_0014FDD0(void)
{
  int func_0014F190(...);
  int func_0014F350(...);
  int func_0014F270(...);
  int func_0014F9F0(...);
  int func_0014FA70(...);
  int func_0014FAD0(...);
  func_0014F190();
  func_0014F350();
  func_0014F270();
  func_0014F9F0();
  func_0014FA70();
  func_0014FAD0();
  return;
}

void func_0014FE50(void) {
    int func_001E9760(...);
    func_001E9760();
}

void func_0014FE60(int a0, int a1, int a2) {
    int func_001E98A9(...);
    func_001E98A9(a0, 1, a1, a2);
}

void func_0014FE80(void) {
    int func_001E9A0C(...);
    func_001E9A0C();
}

void C_00150350::func_00150350(void) {
    extern int D_00286AE8;
    int func_0012B540(...);
    unk0 = (int)&D_00286AE8;
    func_0012B540();
}

