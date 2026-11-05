/* 7 functions from 0x00082250 to 0x000831E0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
extern int D_0027915C;
extern char *D_002A8490;
struct BmxInGameOverlays {
 int w[0xda4/4];
 void func_00157600(int);
 BmxInGameOverlays *func_00082450(int);
};
struct C_00082400 {
    void func_00082400(short param_1);
};

struct C_00082430 {
    void func_00082430(float param_1);
};

extern float D_00275544;
#include <xmmintrin.h>
extern double D_00279150;
extern float D_00275994;
extern char D_00279144[];
extern char D_00279138[];
extern char D_00279130[];
static inline void Round_00082250(int *out, float value) { *out = _mm_cvtss_si32(*(__m128 *)&value); }

struct C_000823C0 {
    char pad0[0x14];
    float f14;
    float f18;
    char pad1C[0x3c];
    unsigned char f58;
    void func_000823C0(int param_1, int param_2);
};

struct C_000831C0 {
    char pad0[0xd64];
    float fd64;
    int func_000831C0(void);
};


void C_000823C0::func_000823C0(int param_1, int param_2)
{
    float f2 = (float)param_2;
    float f1 = (float)param_1;
    if (f14 == f1 && f18 == f2) {
        return;
    }
    f14 = f1;
    f18 = f2;
    f58 |= 1;
}

void C_00082400::func_00082400(short param_1)
{
  int in_ECX = (int)this;
  
  if (*(short *)(in_ECX + 0x4c) != param_1) {
    *(short *)(in_ECX + 0x4c) = param_1;
    *(byte *)(in_ECX + 0x4e) = *(byte *)(in_ECX + 0x4e) | 8;
    *(uint *)(in_ECX + 0x48) = (int)param_1 << 0x18 | *(uint *)(in_ECX + 0x48) & 0xffffff;
  }
  return;
}

void C_00082430::func_00082430(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x3c) != param_1) {
    *(float *)(in_ECX + 0x3c) = param_1;
    *(byte *)(in_ECX + 0x4e) = *(byte *)(in_ECX + 0x4e) | 4;
  }
  return;
}

int C_000831C0::func_000831C0(void)
{
    if (fd64 > D_00275544) {
        return 1;
    }
    return 0;
}
struct OverlayVector { int x,y,z,w; void Clear() { x=0; y=0; z=0; w=0; } };
