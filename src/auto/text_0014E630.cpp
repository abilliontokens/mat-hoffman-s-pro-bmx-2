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

static inline void FloatToIndex(int *out, float f) {
    *out = _mm_cvttss_si32(_mm_load_ss(&f));
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

float func_0014F550(float x) {
    float t = x * x;

    return ((((D_002A773C * t + D_002A7738) * t + D_002A7734) * t + D_002A7730) * t + D_00275460) * x;
}

