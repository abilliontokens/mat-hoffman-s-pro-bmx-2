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

/* the INI reader; ~C_00168F40 is the 0x1691E0 teardown (defined in text_00168F40.cpp) */
struct C_00168F40 {
    C_00082790_IniSub sub;
    char pad1[0x4cb];
    void func_00168280();
    ~C_00168F40();
};

struct C_00082790_X {
    int func_001B1A30(float a, float b, int c);
    int func_001B19A0(int a);
};

struct S_00082790_Settings {
    int dummy0;
    float f[18];
    char rest[0x150 - 76];
};
struct C_00082400 {
    void func_00082400(short param_1);
};

struct C_00082430 {
    void func_00082430(float param_1);
};

extern float D_00275544;
#include <xmmintrin.h>
#include "asm_helpers.h"
extern double D_00279150;
extern float D_00275994;
extern char D_00279144[];
extern char D_00279138[];
extern char D_00279130[];
static __forceinline void Round_00082250(int * volatile out, float value) { *out = _mm_cvtss_si32(*(__m128 *)&value); }
static __forceinline void RoundF_00082250(float value, int * volatile out) { int r = _mm_cvtss_si32(*(__m128 *)&value); *out = r; }

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


extern "C" int abs(int);
void func_00082250(char *out, float value, int fractions)
{
    const char *text;
    float t;
    int *p;
    int n;
    int a;

    if (value != D_00275544 && !(value > D_00279150)) {
        t = *(volatile float *)&value * D_00275994;
        p = (int *)&value;
        AsmFloatToIntRound(t, p);
        if (*(int *)&value < 0) {
            *out++ = '-';
        }
        a = *(int *)&value;
        a = -a > 0 ? -a : a;
        n = *(volatile int *)&a;
        out[0] = n / 60000 + '0';
        out[1] = n / 6000 % 10 + '0';
        out[2] = ':';
        out[3] = n / 100 % 60 / 10 + '0';
        out[4] = n / 100 % 10 + '0';
        if (fractions) {
            out[5] = '.';
            out[6] = n % 100 / 10 + '0';
            out[7] = n % 10 + '0';
            out[8] = 0;
        } else {
            out[5] = 0;
        }
        return;
    }
    if (value == D_00275544) text = D_00279144;
    else text = fractions ? D_00279138 : D_00279130;
    while ((*out++ = *text++) != 0) ;
}

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

extern char D_0027953C[];
extern char D_00279520[];
extern char D_002794F4[];
extern char D_002794C8[];
extern char D_00279498[];
extern char D_00279468[];
extern char D_002793DC[];
extern char D_002793B0[];
extern char D_00279384[];
extern char D_00279354[];
extern char D_00279324[];
extern char D_0027930C[];
extern char D_002792E4[];
extern char D_002792BC[];
extern char D_00279294[];
extern char D_0027926C[];
extern char D_0027945C[];
extern char D_00279448[];
extern char D_0027943C[];
extern char D_00279428[];
extern char D_00279418[];
extern char D_00279408[];
extern char D_002793F8[];
extern char D_0027925C[];
extern char D_0027923C[];
extern char D_0027922C[];
extern char D_00279210[];
extern char D_00279204[];
extern char D_002791EC[];
extern char D_002791E0[];
extern char D_002791C8[];
extern char D_002A2034[];
extern char D_00275630[];
extern char D_00279258[];
extern int D_002A5348;
extern int D_0028F5DC;
extern int D_0028F5EC;
extern int D_0028F5E0;

/* applies the L/R/C justification letter to the sprite at self+off */
static __forceinline void SetJustify_00082790(char *self, int off, char c)
{
    int val;
    int *sub;

    switch (c) {
    case 'L':
    case 'l':
        val = D_0028F5DC;
        break;
    case 'R':
    case 'r':
        val = D_0028F5EC;
        break;
    case 'C':
    case 'c':
        val = D_0028F5E0;
        break;
    default:
        return;
    }
    sub = *(int **)(self + off);
    if (*(int *)((char *)sub + 0x44) != val) {
        *(int *)((char *)sub + 0x44) = val;
        *((char *)sub + 0x4e) |= 6;
    }
}

void BmxInGameOverlays::func_00082790()
{
    int func_001ADCC0(char *, int, char *, ...);
    S_00082790_Settings s;
    C_00168F40 ini;
    char buf[0x104];
    int val;
    int *sub;
    float pa;
    float pb;

    s.f[2] = 0.0f;
    s.f[1] = 0.0f;
    s.f[0] = 0.0f;
    s.f[3] = 1.0f;
    s.f[16] = 0.0f;
    s.f[15] = 0.0f;
    s.f[14] = 0.0f;
    s.f[17] = 1.0f;
    s.f[8] = 0.0f;
    s.f[7] = 0.0f;
    s.f[6] = 0.0f;
    s.f[9] = 1.0f;
    s.f[12] = 0.0f;
    s.f[11] = 0.0f;
    s.f[10] = 0.0f;
    s.f[13] = 1.0f;
    ini.func_00168280();
    func_001ADCC0(buf, 0x104, D_0027953C, &D_002A5348);
    if (ini.sub.func_00169490(buf, 0) == 0) {
        return;
    }
    val = *(int *)(*(int *)(D_002A8490 + 0x2e0) + 8);
    if (val == 0) {
        func_001ADCC0(s.rest, 0x104, D_00279520);
    } else if (val == 2) {
        if (!w[0x10]) func_001ADCC0(s.rest, 0x104, D_002794F4);
        else func_001ADCC0(s.rest, 0x104, D_002794C8);
    } else {
        if (!w[0x10]) func_001ADCC0(s.rest, 0x104, D_00279498);
        else func_001ADCC0(s.rest, 0x104, D_00279468);
    }
    if (ini.sub.func_00169710(s.rest) != 0) {
        ini.sub.func_00168CB0(D_0027945C, D_002A2034, &s.f[0]);
        ini.sub.func_00168BE0(D_00279448, D_00275630, &s.dummy0, -1);
        ini.sub.func_00168CB0(D_0027943C, D_002A2034, &s.f[14]);
        ini.sub.func_00168BE0(D_00279428, D_00275630, (int *)&s.f[4], -1);
        ini.sub.func_00168CB0(D_00279418, D_002A2034, &s.f[6]);
        ini.sub.func_00168CB0(D_00279408, D_002A2034, &s.f[10]);
        ini.sub.func_00168C20(D_002793F8, 0, (char *)&s.f[5]);
        pa = s.f[0];
        pb = s.f[1];
        sub = *(int **)((char *)this + 0x16c);
        if (*(float *)(sub + 1) != pa || *(float *)(sub + 2) != pb) {
            *(float *)(sub + 1) = pa;
            *(float *)(sub + 2) = pb;
            *((char *)sub + 0x4e) |= 6;
        }
        pa = s.f[14];
        pb = s.f[15];
        sub = *(int **)((char *)this + 0x178);
        if (*(float *)(sub + 1) != pa || *(float *)(sub + 2) != pb) {
            *(float *)(sub + 1) = pa;
            *(float *)(sub + 2) = pb;
            *((char *)sub + 0x4e) |= 6;
        }
        SetJustify_00082790((char *)this, 0x16c, ((char *)&s)[0]);
        SetJustify_00082790((char *)this, 0x178, ((char *)&s)[0x14]);
    }
    val = *(int *)(*(int *)(D_002A8490 + 0x2e0) + 8);
    if (val == 0) {
        func_001ADCC0(s.rest, 0x104, D_002793DC);
    } else if (val == 2) {
        if (!w[0x10]) func_001ADCC0(s.rest, 0x104, D_002793B0);
        else func_001ADCC0(s.rest, 0x104, D_00279384);
    } else {
        if (!w[0x10]) func_001ADCC0(s.rest, 0x104, D_00279354);
        else func_001ADCC0(s.rest, 0x104, D_00279324);
    }
    if (ini.sub.func_00169710(s.rest) != 0) {
        ini.sub.func_00168CB0(D_0027945C, D_002A2034, &s.f[0]);
        ini.sub.func_00168BE0(D_00279448, D_00275630, &s.dummy0, -1);
        ini.sub.func_00168CB0(D_0027943C, D_002A2034, &s.f[14]);
        ini.sub.func_00168BE0(D_00279428, D_00275630, (int *)&s.f[4], -1);
        ini.sub.func_00168CB0(D_00279418, D_002A2034, &s.f[6]);
        ini.sub.func_00168CB0(D_00279408, D_002A2034, &s.f[10]);
        ini.sub.func_00168C20(D_002793F8, 0, (char *)&s.f[5]);
    }
    val = *(int *)(*(int *)(D_002A8490 + 0x2e0) + 8);
    if (val == 0) {
        func_001ADCC0(s.rest, 0x104, D_0027930C);
    } else if (val == 2) {
        if (!w[0x10]) func_001ADCC0(s.rest, 0x104, D_002792E4);
        else func_001ADCC0(s.rest, 0x104, D_002792BC);
    } else {
        if (!w[0x10]) func_001ADCC0(s.rest, 0x104, D_00279294);
        else func_001ADCC0(s.rest, 0x104, D_0027926C);
    }
    if (ini.sub.func_00169710(s.rest) != 0) {
        ini.sub.func_00168CB0(D_0027925C, D_002A2034, &s.f[0]);
        ini.sub.func_00168BE0(D_0027923C, D_00279258, &s.dummy0, -1);
        pa = s.f[0];
        pb = s.f[1];
        sub = *(int **)((char *)this + 0xc50);
        if (*(float *)(sub + 1) != pa || *(float *)(sub + 2) != pb) {
            *(float *)(sub + 1) = pa;
            *(float *)(sub + 2) = pb;
            *((char *)sub + 0x4e) |= 6;
        }
        SetJustify_00082790((char *)this, 0xc50, ((char *)&s)[0]);
        ini.sub.func_00168CB0(D_0027922C, D_002A2034, &s.f[0]);
        ini.sub.func_00168BE0(D_00279210, D_00279258, &s.dummy0, -1);
        pa = s.f[0];
        pb = s.f[1];
        sub = *(int **)((char *)this + 0x208);
        if (*(float *)(sub + 1) != pa || *(float *)(sub + 2) != pb) {
            *(float *)(sub + 1) = pa;
            *(float *)(sub + 2) = pb;
            *((char *)sub + 0x4e) |= 6;
        }
        SetJustify_00082790((char *)this, 0x208, ((char *)&s)[0]);
        ini.sub.func_00168CB0(D_00279204, D_002A2034, &s.f[0]);
        ini.sub.func_00168BE0(D_002791EC, D_00279258, &s.dummy0, -1);
        ((C_00082790_X *)*(int *)((char *)this + 0xd08))->func_001B1A30(s.f[0], s.f[1], 0);
        switch (((char *)&s)[0]) {
        case 'L':
        case 'l':
            ((C_00082790_X *)*(int *)((char *)this + 0xd08))->func_001B19A0(D_0028F5DC);
            break;
        case 'R':
        case 'r':
            ((C_00082790_X *)*(int *)((char *)this + 0xd08))->func_001B19A0(D_0028F5EC);
            break;
        case 'C':
        case 'c':
            ((C_00082790_X *)*(int *)((char *)this + 0xd08))->func_001B19A0(D_0028F5E0);
            break;
        }
        ini.sub.func_00168CB0(D_002791E0, D_002A2034, &s.f[0]);
        ini.sub.func_00168BE0(D_002791C8, D_00279258, &s.dummy0, -1);
        ((C_00082790_X *)*(int *)((char *)this + 0xd0c))->func_001B1A30(s.f[0], s.f[1], 0);
        switch (((char *)&s)[0]) {
        case 'L':
        case 'l':
            ((C_00082790_X *)*(int *)((char *)this + 0xd0c))->func_001B19A0(D_0028F5DC);
            break;
        case 'R':
        case 'r':
            ((C_00082790_X *)*(int *)((char *)this + 0xd0c))->func_001B19A0(D_0028F5EC);
            break;
        case 'C':
        case 'c':
            ((C_00082790_X *)*(int *)((char *)this + 0xd0c))->func_001B19A0(D_0028F5E0);
            break;
        }
        ini.sub.func_00168CB0(D_00279418, D_002A2034, &s.f[6]);
        ini.sub.func_00168CB0(D_00279408, D_002A2034, &s.f[10]);
        ini.sub.func_00168C20(D_002793F8, 0, (char *)&s.f[5]);
        pa = s.f[6];
        pb = s.f[7];
        sub = *(int **)((char *)this + 0x164);
        if (*(float *)(sub + 1) != pa || *(float *)(sub + 2) != pb) {
            *(float *)(sub + 1) = pa;
            *(float *)(sub + 2) = pb;
            *((char *)sub + 0x58) |= 1;
        }
        pa = s.f[10];
        pb = s.f[11];
        sub = *(int **)((char *)this + 0x168);
        if (*(float *)(sub + 1) != pa || *(float *)(sub + 2) != pb) {
            *(float *)(sub + 1) = pa;
            *(float *)(sub + 2) = pb;
            *((char *)sub + 0x58) |= 1;
        }
        sub = *(int **)((char *)this + 0x164);
        if ((float)*(int *)&s.f[5] != *(float *)((char *)sub + 0x28)) {
            *(float *)((char *)sub + 0x28) = (float)*(int *)&s.f[5];
            *((char *)sub + 0x58) |= 1;
        }
        sub = *(int **)((char *)this + 0x168);
        if ((float)*(int *)&s.f[5] != *(float *)((char *)sub + 0x28)) {
            *(float *)((char *)sub + 0x28) = (float)*(int *)&s.f[5];
            *((char *)sub + 0x58) |= 1;
            return;
        }
    }
}

int C_000831C0::func_000831C0(void)
{
    if (fd64 > D_00275544) {
        return 1;
    }
    return 0;
}
struct OverlayVector { int x,y,z,w; void Clear() { x=0; y=0; z=0; w=0; } };
