/* 1 function from 0x000363E0 to 0x000377E0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
static __forceinline float Max_363E0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(*(__m128 *)&a, *(__m128 *)&b)); return r; }
static __forceinline float Min_363E0(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(*(__m128 *)&a, *(__m128 *)&b)); return r; }
static __forceinline float Abs_363E0(float a) { unsigned int i = *(volatile unsigned int *)&a & 0x7fffffff; return *(float *)&i; }
static __forceinline void Round_363E0(int *volatile out, float a) { *out = _mm_cvtss_si32(*(__m128 *)&a); }
static __forceinline int MinI_363E0(int a, int b) { return a < b ? a : b; }
static __forceinline int MaxI_363E0(int a, int b) { return a > b ? a : b; }

struct S_Vec4 {
    float x, y, z, w;
};

struct S_Vec4Int {
    int x, y, z, w;
};

/* the 4-int vector holder reached through C_000363E0::f44->f5C */
struct C_00194E60 {
    char pad0[8];
    S_Vec4Int v;
    void func_00194E90(S_Vec4Int *out);
};

struct S_363E0_Get {
    char pad0[0x5C];
    C_00194E60 *f5C;
};

struct C_000363E0 {
    char pad0[0x44];
    S_363E0_Get *f44;
    char pad48[0x428 - 0x48];
    int f428, f42c, f430, f434;
    char pad438[0x43C - 0x438];
    int f43C;
    char pad440[0x44c - 0x440];
    int f44c, f450, f454, f458, f45c, f460;
    float f464;
    char pad468[0x49c - 0x468];
    int *f49c;
    char pad4a0[0x5f0 - 0x4a0];
    S_Vec4 path[50];
    char pad910[4];
    int f914;
    char pad918[0x920 - 0x918];
    int f920;
    void func_000363E0(float x, float y, float z, float w);
    void func_000363E0(S_Vec4 target);
};

extern const float D_00275544;
extern const float D_00275548;
extern const float D_002755E8;
extern const float D_002756DC;
extern const float D_00275AEC;
extern const float D_00275F64;
extern const float D_00276DD4;
extern const float D_002A14D4;
extern const float D_002A14D8;
extern const float D_002A14DC;
extern const float D_002A14E0;
extern const float D_002A14E4;
extern const float D_002A14E8;
extern const float D_002A14EC;
extern const float D_002A14F8;
extern const float D_002A150C;

void C_000363E0::func_000363E0(float x, float y, float z, float w)
{
    (void)x; (void)y; (void)z; (void)w;
}
