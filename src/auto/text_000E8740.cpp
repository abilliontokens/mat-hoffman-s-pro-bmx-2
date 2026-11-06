/* 1 function from 0x000E8740 to 0x000E9180, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
struct C_000E8740_UI {
 char pad0[0x28]; float alpha; char pad2C[0x2C]; unsigned char flags;
 void SetAlpha(volatile float value) { if(alpha!=value) { alpha=value;flags|=1; } }
 void func_0005E840(char *);
};
static __forceinline void SetAlpha_000E8740(C_000E8740_UI *p,float v) {if(p->alpha!=v) {p->alpha=v;p->flags|=1;}}
struct C_000E8740_Model {
 void func_000BC130(); float *func_000BC2E0(); float *func_000BC320();
};
struct C_000E8740 {
 char pad0[0x124]; C_000E8740_Model *model; char pad128[0x22C]; float alpha;
 char pad358[0x1BC]; C_000E8740_UI *ui[30];
 void func_000E8740();
};
extern float D_00275994, D_00275544;
extern char D_00281A58, D_0027F2AC;
int func_001ADCC0(char *,int,const char *,...);
static __forceinline void Round_000E8740(int * volatile out,float f) { *out=_mm_cvt_ss2si(*(__m128 *)&f); }

