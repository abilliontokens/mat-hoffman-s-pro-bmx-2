/* 1 function from 0x000E8740 to 0x000E9180, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
struct C_000E8740_UI {
 char pad0[0x28]; float alpha; char pad2C[0x2C]; unsigned char flags;
 void SetAlpha(float value) { if(alpha!=value) { alpha=value;flags|=1; } }
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

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void C_000E8740::func_000E8740() {
 C_000E8740_Model *m=model;
 m->func_000BC130();
ui[0]->SetAlpha(alpha);
ui[10]->SetAlpha(alpha);
ui[15]->SetAlpha(alpha);
ui[1]->SetAlpha(alpha);
ui[11]->SetAlpha(alpha);
ui[16]->SetAlpha(alpha);
ui[2]->SetAlpha(alpha);
ui[12]->SetAlpha(alpha);
ui[17]->SetAlpha(alpha);
ui[3]->SetAlpha(alpha);
ui[13]->SetAlpha(alpha);
ui[18]->SetAlpha(alpha);
ui[4]->SetAlpha(alpha);
ui[14]->SetAlpha(alpha);
ui[19]->SetAlpha(alpha);
ui[5]->SetAlpha(alpha);
ui[6]->SetAlpha(alpha);
ui[7]->SetAlpha(alpha);
ui[8]->SetAlpha(alpha);
ui[9]->SetAlpha(alpha);
float *a=m->func_000BC2E0();
float a0=ui[0]->alpha*a[0];
float a1=ui[1]->alpha*a[1];
float a2=ui[2]->alpha*a[2];
float a3=ui[3]->alpha*a[3];
float a4=ui[4]->alpha*a[4];
ui[0]->SetAlpha(a0);
ui[1]->SetAlpha(a1);
ui[2]->SetAlpha(a2);
ui[3]->SetAlpha(a3);
ui[4]->SetAlpha(a4);
float *b=m->func_000BC320();
float b0 = ui[10]->alpha*b[0], b1 = ui[11]->alpha*b[1];
float b2=ui[12]->alpha*b[2];
float b3=ui[13]->alpha*b[3];
float b4=ui[14]->alpha*b[4];
ui[10]->SetAlpha(b0);
ui[11]->SetAlpha(b1);
ui[12]->SetAlpha(b2);
ui[13]->SetAlpha(b3);
ui[14]->SetAlpha(b4);
char buf[5];int n;
AsmFloatToIntRound(b[0]*100.0f,&n);func_001ADCC0(buf,5,&D_0027F2AC,n,&D_00281A58);ui[20]->func_0005E840(buf);
AsmFloatToIntRound(b[1]*100.0f,&n);func_001ADCC0(buf,5,&D_0027F2AC,n,&D_00281A58);ui[21]->func_0005E840(buf);
AsmFloatToIntRound(b[2]*100.0f,&n);func_001ADCC0(buf,5,&D_0027F2AC,n,&D_00281A58);ui[22]->func_0005E840(buf);
AsmFloatToIntRound(b[3]*100.0f,&n);_ReadWriteBarrier();func_001ADCC0(buf,5,&D_0027F2AC,n,&D_00281A58);ui[23]->func_0005E840(buf);
_ReadWriteBarrier();
AsmFloatToIntRound(b[4]*100.0f,&n);func_001ADCC0(buf,5,&D_0027F2AC,n,&D_00281A58);ui[24]->func_0005E840(buf);
float c0=ui[15]->alpha*b[0];
float c1=ui[16]->alpha*b[1];
float c2=ui[17]->alpha*b[2];
float c3=ui[18]->alpha*b[3];
float c4=ui[19]->alpha*b[4];
if(c0<a0) {ui[15]->SetAlpha(a0); ui[0]->SetAlpha(alpha);ui[0]->SetAlpha(c0);}
else ui[15]->SetAlpha(0);
if(c1<a1) {ui[16]->SetAlpha(a1); ui[1]->SetAlpha(alpha);ui[1]->SetAlpha(c1);}
else ui[16]->SetAlpha(0);
if(c2<a2) {ui[17]->SetAlpha(a2); ui[2]->SetAlpha(alpha);ui[2]->SetAlpha(c2);}
else ui[17]->SetAlpha(0);
if(c3<a3) {ui[18]->SetAlpha(a3); ui[3]->SetAlpha(alpha);ui[3]->SetAlpha(c3);}
else ui[18]->SetAlpha(0);
if(c4<a4) {ui[19]->SetAlpha(a4); ui[4]->SetAlpha(alpha);ui[4]->SetAlpha(c4);}
else ui[19]->SetAlpha(0);
}
