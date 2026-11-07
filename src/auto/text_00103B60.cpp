/* 17 functions from 0x00103B60 to 0x00104B00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
extern char D_0027DE5C[];
extern char D_0027DE38[];
extern char D_0027DE2C[];
extern char D_00282898[];
extern char D_00282880[];
extern char D_0028285C[];
extern char D_00282854[];
extern char D_00282844[];
extern char D_0028283C[];
extern char D_002828DC[];
extern char D_002828C8[];
extern char D_002828C0[];
extern char D_0027C294[];
extern char D_0027DE44[];
extern char D_0028282C[];
extern char D_002828B0[];
extern char D_002828A8[];
extern char D_0028281C[];
extern char D_00282810[];
extern char D_00282800[];
extern char D_002827EC[];
extern char D_002786A0[];
extern int D_0028F5EC, D_0028F5E8, D_0028F5E4, D_0028F5E0, D_0028F5DC;
extern char *D_002A8490;
extern "C" void *func_001E8A44(unsigned int);
extern "C" int strcmp(const char *, const char *);
struct L_00103B60 { union {int index; char *empty;}; float def[4]; int alpha,mode,f; float v2[4]; int n,flag; float v1[4],v0[4]; char kind[20],text[400]; };
struct C_00103B60 {
 C_00103B60 *func_00103B60(int, C_00103B60 *);
 void func_001BF600(C_00103B60 *);
 int func_00168550(const char *, void *, int);
 void func_00168C20(const char *, int, void *);
 void func_00168C50(const char *, int, void *);
 int func_00168CB0(const char *, void *, void *);
 void func_000979C0(char *, int *);
 void func_001C01E0(char *);
 void func_0018C780(int, void *, int);
 void func_0018C160(char *);
 C_00103B60 *func_001B12C0(int);
 void func_001B13A0(char *, char *, int, int);
 void func_001577A0(C_00103B60 *, int);
 void func_001B1860(int,float,int,float,int,int,float,int,float,int,int,int,int);
 void func_001B17D0(char *);
 void func_001B19A0(int);
 void func_001B2270(int);
 void func_001B19C0(int,int,int);
 void func_001B1AB0(int,int);
 void func_001B1BF0(int);
 void func_001B1B30(float,int);
 char data[0x400];
};
struct C_001046B0 {
 void func_001046B0();
 void func_001960F0(float, void *, int, int, int, int, int);
 void func_00196000(float, void *, int, int, int, int, int);
 int func_001961E0(void *, int, int);
 void func_001041F0(char *p);
 char pad0[0xDC];
 int unkDC;
 char unkE0;
};
extern char *D_002B9134;
extern char *D_002B9120;
struct C_001041C0 {
    void func_001041C0(void);
};

struct C_001048E0 {
    char pad0[0xC4];
    int unkC4;
    char padC8[0x18];
    char unkE0;
    void func_001048E0(void);
};

struct C_001048C0 {
    char pad0[0xC4];
    int unkC4;
    char padC8[0x18];
    char unkE0;
    void func_001048C0(void);
};

struct C_001041A0 {
    void func_001041A0(void);
};

struct C_00104190 {
    void func_00104190(void);
};

extern int D_002828F4;

struct C_00104170 {
    void func_001972B0(int a0, int a1, int a2);
    void func_00104170(int a0, int a1);
};

/* BmxVCRController */
struct C_00104120 {
    void *vtbl;
    char pad4[0xD0 - 4];
    int unkD0;
    int unkD4;
    int unkD8;
    int unkDC;
    char unkE0;
    char padE1[3];
    int unkE4;
    int unkE8;
    void func_00195D90(void);
    void func_00195E70(void);
    C_00104120 *func_00104120(int param_1);
    void *func_00104960(int flags);
};

struct C_00104900 {
    char pad0[0x74];
    int unk74;
    char pad78[0x8C - 0x78];
    int *unk8C;
    char pad90[0xC0 - 0x90];
    u8 unkC0;
    char padC1[0xDC - 0xC1];
    int unkDC;
    char padE0[0xE8 - 0xE0];
    int unkE8;
    int func_00197610(int param_1);
    void func_00197260(int param_1, char *param_2);
    void func_00104900(void);
    void func_00104930(void);
    int func_001049A0(int param_1);
};

struct V3_00104A00 {
    float x;
    float y;
    float z;
};

struct V4_00104A00 {
    float x;
    float y;
    float z;
    float w;
};

static float fabs_00104A00(float x)
{
    struct Tmp_00104A00 { volatile int v; } t;
    t.v = *(volatile int *)&x & 0x7fffffff;
    return *(volatile float *)&t.v;
}


extern "C" int memcmp(const void *, const void *, unsigned int);
C_00103B60 *C_00103B60::func_00103B60(int a, C_00103B60 *p) {
L_00103B60 l;
func_001BF600(p);
l.v0[0]=l.v0[1]=l.v0[2]=0;l.v0[3]=1;
l.v1[0]=l.v1[1]=l.v1[2]=0;l.v1[3]=1;
l.v2[0]=l.v2[1]=l.v2[2]=0;l.v2[3]=1;
p->func_00168550(D_0027DE5C,data+0x1b8,260);
p->func_00168C20(D_0027DE38,0,data+0x3c4);
p->func_00168C20(D_0027DE2C,0,data+0x3c8);
p->func_00168C20(D_00282898,1,data+0x170);
p->func_00168550(D_00282880,l.kind,20);
p->func_00168C20(D_0028285C,0,&l.flag);
p->func_00168C20(D_00282854,255,&l.alpha);
p->func_00168C20(D_00282844,0,&l.f);
p->func_00168C50(D_0028283C,0,&l.mode);
p->func_00168C20(D_002828DC,0,data+0x3dc);
p->func_00168C20(D_002828C8,9,&l.n);
*(int*)(data+0x3e0)=l.n;
if(p->func_00168550(D_002828C0,l.text,400)){
char *t=*(char**)(D_002A8490+0x2e8); C_00103B60 *lookup=(C_00103B60*)*(void**)(t+0x2c);
lookup->func_000979C0(l.text, &(l.index=0));
char *src=*(char**)(*(char**)(t+4)+l.index*8); char *dst=l.text;
char c; do {c=*src++; *dst++=c;} while(c);
}else p->func_00168550(D_0027C294,l.text,400);
*(int*)(data+0x3ec)=l.flag; *(int*)(data+0x3f4)=l.f; *(int*)(data+0x3f0)=l.alpha; *(int*)(data+0x3f8)=l.mode;
l.def[0]=40;l.def[1]=40;l.def[2]=40;l.def[3]=1;
p->func_00168CB0(D_0027DE44,l.def,l.v0);
*(int*)(data+0x3c0)=((((int)l.v0[0]|0xffffff00)<<8 | ((int)l.v0[1]&255))<<8)|((int)l.v0[2]&255);
l.def[0]=255;l.def[1]=255;l.def[2]=255;l.def[3]=1;
if(p->func_00168CB0(D_0028282C,l.def,l.v1)) *(int*)(data+0x3cc)=1;
*(int*)(data+0x3d0)=((((int)l.v1[0]|0xffffff00)<<8 | ((int)l.v1[1]&255))<<8)|((int)l.v1[2]&255);
l.def[0]=96;l.def[1]=96;l.def[2]=96;l.def[3]=1;
if(p->func_00168CB0(D_002828B0,l.def,l.v2)) *(int*)(data+0x3d4)=1;
*(int*)(data+0x3d8)=((((int)l.v2[0]|0xffffff00)<<8 | ((int)l.v2[1]&255))<<8)|((int)l.v2[2]&255);
p->func_00168C20(D_002828A8,0,data+0x190);
*(int*)(data+0x28)=a;
if(!strcmp(l.kind,"Right")) *(int*)(data+0x178)=D_0028F5EC;
else if(!strcmp(l.kind,"CenterBoth")) *(int*)(data+0x178)=D_0028F5E8;
else if(!strcmp(l.kind,"CenterVertical")) *(int*)(data+0x178)=D_0028F5E4;
else if(!strcmp(l.kind,"CenterHorizontal")) *(int*)(data+0x178)=D_0028F5E0;
else *(int*)(data+0x178)=D_0028F5DC;
if(*(int*)(data+0x190)) {func_001C01E0(l.text);return this;}
l.empty=D_002786A0;
((C_00103B60*)*(void**)(D_002A8490+0x2ec))->func_0018C780(1,&l.empty,0);
((C_00103B60*)*(void**)(D_002A8490+0x2ec))->func_0018C160(D_002786A0);
*(int*)(data+0x170)=1;
*(void**)(data+0x1b0)=func_001E8A44(4);
C_00103B60 *q=(C_00103B60*)func_001E8A44(0x184);
if(q) q=q->func_001B12C0(1); else q=0;
**(C_00103B60***)(data+0x1b0)=q;
(**(C_00103B60***)(data+0x1b0))->func_001B13A0(D_002786A0,D_002786A0,0,40);
func_001577A0(**(C_00103B60***)(data+0x1b0),-1);
(**(C_00103B60***)(data+0x1b0))->func_001B1860(0,-1,255,1,0,0,-1,255,1,0,0,0,0);
(**(C_00103B60***)(data+0x1b0))->func_001B17D0(l.text);
(**(C_00103B60***)(data+0x1b0))->func_001B19A0(*(int*)(data+0x178));
(**(C_00103B60***)(data+0x1b0))->func_001B2270(*(int*)(data+0x3c0));
(**(C_00103B60***)(data+0x1b0))->func_001B19C0(*(int*)(data+0x3c4),*(int*)(data+0x3c8),0);
(**(C_00103B60***)(data+0x1b0))->func_001B1AB0(l.alpha,0);
(**(C_00103B60***)(data+0x1b0))->func_001B1BF0(l.mode);
(**(C_00103B60***)(data+0x1b0))->func_001B1B30(1.15f,0);
return this;
}

C_00104120 *C_00104120::func_00104120(int param_1)
{
    func_00195D90();
    unkE4 = 0;
    unkD0 = 0;
    unkD4 = 0;
    unkD8 = 0;
    unkE8 = 0;
    unkE0 = 0;
    vtbl = &D_002828F4;
    unkDC = -1;
    return this;
}

void C_00104170::func_00104170(int a0, int a1)
{
    func_001972B0(a0, a1, 1);
}

void C_00104190::func_00104190(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0xc0) = *(byte *)(in_ECX + 0xc0) | 4;
  return;
}

void C_001041A0::func_001041A0(void)
{
  int func_00197590(...);
  int in_ECX = (int)this;
  
  func_00197590();
  *(byte *)(in_ECX + 0xc0) = *(byte *)(in_ECX + 0xc0) | 2;
  return;
}

void C_001041C0::func_001041C0(void)
{
  int func_00196BD0(...);
  int in_ECX = (int)this;
  
  func_00196BD0();
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  return;
}

void func_001041E0(void) {
    int func_00196290(...);
    func_00196290();
}

void C_001046B0::func_001041F0(char *p)
{
 unkDC = func_001961E0(&unkE0, 0, 1);
 func_00196000(1000.0f, p+0x834,0,0,0,0,1);
 func_00196000(1000.0f, p+0x838,0,0,0,0,1);
 func_00196000(1000.0f, p+0x83c,0,0,0,0,1);
 func_00196000(500.0f, p+0x854,0,0,0,0,1);
 func_00196000(500.0f, p+0x858,0,0,0,0,1);
 func_00196000(500.0f, p+0x85c,0,0,0,0,1);
 func_00196000(500.0f, p+0x874,0,0,0,0,1);
 func_00196000(500.0f, p+0x878,0,0,0,0,1);
 func_00196000(500.0f, p+0x87c,0,0,0,0,1);
 func_001960F0(1.0f, p+0x125c,0,4,0,0,1);
 func_001960F0(1.0f, p+0x1260,0,4,0,0,1);
 func_001960F0(1.0f, p+0x1264,0,4,0,0,1);
 func_001960F0(1.0f, p+0x1268,0,4,0,0,1);
 func_001960F0(1.0f, p+0x127c,0,4,0,0,1);
 func_001960F0(1.0f, p+0x1280,0,4,0,0,1);
 func_001960F0(1.0f, p+0x1284,0,4,0,0,1);
 func_001960F0(1.0f, p+0x1288,0,4,0,0,1);
 func_001960F0(1.0f, p+0x128c,0,4,0,0,1);
 func_00196000(5000.0f, p+0x1290,0,1,0,0x3f800000,1);
 func_00196000(5000.0f, p+0x1294,0,0,0,0,1);
 func_00196000(1000.0f, p+0x1298,0,0,0,0,1);
 func_00196000(1000.0f, p+0x129c,0,0,0,0,1);
 func_00196000(1000.0f, p+0x12a0,0,0,0,0,1);
 func_00196000(1000.0f, p+0x12a4,0,0,0,0,1);
 func_001961E0(p+0x12a8, 0, 1);
 func_001961E0(p+0x12a9, 0, 1);
 func_00196000(20.0f, p+0x5e0,0,1,0,0,1);
 func_00196000(20.0f, p+0x5e4,0,1,0,0,1);
 func_001960F0(1.0f, *(char **)(p+0x950)+0x12c,0,4,0,0,1);
 func_001960F0(1.0f, *(char **)(p+0x950)+0x130,0,4,0,0,1);
 func_001960F0(1.0f, *(char **)(p+0x950)+0x1ac,0,4,0,0,1);
 func_001960F0(1.0f, *(char **)(p+0x950)+0x1b0,0,4,0,0,1);
 func_00196000(1000.0f, *(char **)(p+0x950)+0x134,0,0,0,0,1);
 func_00196000(1000.0f, *(char **)(p+0x950)+0x138,0,0,0,0,1);
 func_00196000(1000.0f, *(char **)(p+0x950)+0x13c,0,0,0,0,1);
 func_00196000(5000.0f, *(char **)(p+0x950)+0x144,0,4,0,0,1);
 func_00196000(5000.0f, *(char **)(p+0x950)+0x148,0,4,0,0,1);
 func_00196000(5000.0f, *(char **)(p+0x950)+0x14c,0,4,0,0,1);
 func_00196000(5000.0f, *(char **)(p+0x950)+0x150,0,4,0,0,1);
}

void C_001046B0::func_001046B0()
{
 int i;
 if (D_002B9134) {
 for (i=0;i<*(int *)(D_002B9134+0x34);i++) {
 func_001960F0(1.0f, (*(char ***)(D_002B9134+0x44))[i]+0x50,0,4,0,0,1);
 func_001960F0(1.0f, (*(char ***)(D_002B9134+0x44))[i]+0x54,0,4,0,0,1);
 }
 for (i=0;i<*(int *)(D_002B9134+0x38);i++)
 func_00196000(500.0f, *(char **)((*(char ***)(D_002B9134+0x48))[i]+0x3c)+0x510,0,1,0,0,1);
 }
 for(i=0;i<*(int *)(D_002B9120+0x578);i++) {
 func_00196000(100.0f, (*(char ***)(D_002B9120+0x57c))[i]+0x3e4,0,0,0,0,1);
 func_00196000(100.0f, (*(char ***)(D_002B9120+0x57c))[i]+0x3e8,0,0,0,0,1);
 func_00196000(100.0f, (*(char ***)(D_002B9120+0x57c))[i]+0x3ec,0,0,0,0,1);
 func_00196000(10.0f, (*(char ***)(D_002B9120+0x57c))[i]+0x3f4,0,0,0,0,1);
 func_00196000(10.0f, (*(char ***)(D_002B9120+0x57c))[i]+0x3f8,0,0,0,0,1);
 func_00196000(10.0f, (*(char ***)(D_002B9120+0x57c))[i]+0x3fc,0,0,0,0,1);
 func_001960F0(1.0f, (*(char ***)(D_002B9120+0x57c))[i]+0x3bc,0,4,0,0,1);
 }
}

void C_001048C0::func_001048C0(void) {
    unkE0 = 1;
    unkC4 = 1;
}

void C_001048E0::func_001048E0(void) {
    unkE0 = 0;
    unkC4 = 1;
}

void C_00104900::func_00104900(void)
{
    int i;
    for (i = 1; i < unk74; i++) {
        if ((unsigned int)i < (unsigned int)unk74) {
            unk8C[i] = 1;
        }
    }
    unkE8 = 1;
}

void C_00104900::func_00104930(void)
{
    int i;
    for (i = 1; i < unk74; i++) {
        if ((unsigned int)i < (unsigned int)unk74) {
            unk8C[i] = 0;
        }
    }
    unkE8 = 0;
}

void func_001E891B(void *p);
void *C_00104120::func_00104960(int flags)
{
    int p = unkD4;
    vtbl = &D_002828F4;
    if (p != 0) {
        func_001E891B((void *)p);
    }
    func_00195E70();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_00104900::func_001049A0(int param_1)
{
    int ret;
    char b;
    ret = func_00197610(param_1);
    if (unkC0 & 4) {
        func_00197260(unkDC, &b);
        if (b != 0) {
            if (unkE8 == 0) {
                func_00104900();
            }
        } else if (unkE8 != 0) {
            func_00104930();
        }
    }
    return ret;
}

void func_00104A00(V4_00104A00 *out, V3_00104A00 *src)
{
    V4_00104A00 r;
    r.x = fabs_00104A00(src->x);
    r.y = fabs_00104A00(src->y);
    r.z = fabs_00104A00(src->z);
    r.w = 1.0f;
    *out = r;
}

void func_00104A90(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

