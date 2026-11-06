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
 void func_00082790();
};

struct C_00082790_IniSub {
    int func_00169490(char *name, int zero);
    int func_00169710(char *name);
    int func_00168CB0(char *key, char *fmt, float *out);
    int func_00168BE0(char *key, char *fmt, int *out, int def);
    int func_00168C20(char *key, int zero, char *out);
};

struct C_00082790_Ini {
    char pad0[8];
    C_00082790_IniSub sub;
    char pad1[0x5c0];
    void func_00168280();
    void func_001691E0();
};

struct C_00082790_X {
    int func_001B1A30(int a, int b, int c);
    int func_001B19A0(int a);
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

BmxInGameOverlays *BmxInGameOverlays::func_00082450(int a0)
{
 func_00157600(a0);
 w[0]=(int)&D_0027915C;
 w[6]=-1;
 for(int j=0;j<4;++j) w[9+j]=0;
 w[13]=0;
 w[14]=0;
 w[15]=0;
 w[16]=0;
 w[17]=0;
 w[18]=0;
 w[19]=0;
 w[20]=0;
 w[21]=0;
 w[22]=0;
 w[25]=0;
 memset(&w[26],0,100);
 w[51]=0;
 w[52]=0;
 w[53]=0;
 w[54]=0;
 memset(&w[55],0,64);
 w[0x11c/4]=0x3f800000;
 w[72]=0;
 w[73]=0;
 w[75]=0;
 w[77]=0;
 w[76]=0;
 w[78]=0;
 w[79]=0;
 w[80]=0;
 w[81]=0;
 w[82]=0;
 w[83]=0;
 w[84]=0;
 w[85]=0;
 w[86]=0;
 w[87]=0;
 w[91]=0;
 w[94]=0;
 w[95]=0;
 w[96]=0;
 w[97]=0;
 w[98]=0;
 w[99]=0;
 w[100]=0;
 w[102]=0;
 ((char*)this)[0x19c]=0;
 w[128]=0;
 w[129]=0;
 w[130]=0;
 w[131]=0;
 memset(&w[132],0,100);
 w[157]=0;
 w[158]=0;
 memset(&w[159],0,100);
 w[184]=0;
 w[185]=0;
 w[186]=0;
 for(int i748=0;i748<100;++i748) w[187+i748]=-1;
 for(int i1148=0;i1148<100;++i1148) w[287+i1148]=-1;
 for(int k=0;k<4;++k) w[514+k]=0;
 w[387]=0;
 memset(&w[389],0,100);
 memset(&w[414],0,400);
 memset(&w[518],0,1040);
 w[778]=0;
 w[779]=0;
 w[780]=0;
 w[781]=0;
 w[0xc38/4]=0x3f800000;
 w[0xc3c/4]=0x437f0000;
 w[784]=0;
 w[785]=0;
 w[786]=0;
 w[787]=0;
 w[788]=0;
 w[789]=0;
 w[790]=0;
 w[791]=0;
 w[792]=0;
 ((char*)this)[0xc64]=0;
 w[808]=0;
 ((char*)this)[0xca4]=0;
 ((char*)this)[0xcd6]=0;
 w[834]=0;
 w[835]=0;
 w[836]=0;
 w[837]=0;
 w[838]=0;
 w[839]=0;
 w[840]=0;
 w[841]=0;
 w[842]=0;
 w[843]=0;
 w[844]=0;
 w[871]=0;
 w[872]=0;
 w[845]=0;
 w[846]=0;
 w[101]=0;
 w[851]=0;
 w[852]=0;
 w[853]=0;
 w[854]=0;
 w[855]=0;
 w[857]=0;
 w[856]=0;
 w[861]=0;
 w[862]=0;
 w[847]=0;
 w[848]=0;
 w[849]=0;
 w[850]=0;
 w[863]=0;
 w[864]=0;
 w[865]=0;
 w[866]=0;
 w[868]=0;
 w[869]=0;
 w[0xd8c/4]=(*(int*)(*(char**)(D_002A8490+0x2e0)+4)==3);
 return this;
}

int C_000831C0::func_000831C0(void)
{
    if (fd64 > D_00275544) {
        return 1;
    }
    return 0;
}
struct OverlayVector { int x,y,z,w; void Clear() { x=0; y=0; z=0; w=0; } };
