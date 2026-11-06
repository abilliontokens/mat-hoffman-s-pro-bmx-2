/* 2 functions from 0x00120B20 to 0x001217F0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

static __forceinline float Min_00120B20(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_00120B20(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

extern float D_002B9348;
extern void **D_002B92F4;

struct S_0011F4B0_V4 { float x, y, z, w; };
struct S_001206E0_Tri { int pad0[2]; float t; short x, y, z; };
struct S_00120B20_Seg { S_0011F4B0_V4 a, b; };

void func_0011F0E0(void *a, void *b, void *c, void *indices, void **data);
void func_0011F540(S_0011F4B0_V4 *out, S_0011F4B0_V4 pos, float *m);
void func_00030A30(S_0011F4B0_V4 *out, S_0011F4B0_V4 v, float *m);
int func_0011FF30(S_0011F4B0_V4 *p, void *tri);
float func_0011F8E0(float *a, float *b, float *c, float *d);

