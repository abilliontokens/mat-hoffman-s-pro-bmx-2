/* 8 functions from 0x000AADB0 to 0x000ABD80, found by Ghidra. */
#include "common.h"
extern char D_0027C7DC[], D_0027C7BC[], D_0027C7A4[], D_0027C4D0[], D_0027C4BC[], D_00275680[], D_0027C790[];
void * __cdecl func_001E8920(void *, const void *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);

extern int D_0027C7F8;
extern int D_0027C724;

struct C_001B59E0 {
    void func_001B59E0();
};

struct C_000ABD60 {
    void *vtbl;
    C_000ABD60 *func_000ABD60();
};

struct C_00157660 {
    void func_00157660(void);
};

struct S_000AB490_28 {
    char pad0[0x110];
    int f110;
};

struct C_000AB490 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    S_000AB490_28 **f28;
    void func_000AB490(void);
};

extern char D_0027C704[], D_0027C6E4[], D_0027C6CC[], D_0027C6C4[], D_0027C6BC[], D_0027C6B4[], D_0027C6AC[], D_0027C6A4[], D_0027C69C[], D_0027C67C[], D_0027C670[], D_002764F0[];
void * __cdecl func_001E8A44(unsigned int);
void * __cdecl func_001E83E8(void *, unsigned int);
int __cdecl func_001ADCC0(char *, unsigned int, const char *, ...);
void __stdcall func_00011FF0(void *, int, int, void *);
void func_000A09F0();
struct C_000AADB0_Parser {
    int func_00169710(const char *);
    void func_00168C20(const char *, int, int *);
    void func_00168C50(const char *, int, float *);
    void func_00168BE0(const char *, const char *, char *, int);
};
struct C_000AADB0_Box {
    C_000AADB0_Box();
    float f0, f4, f8, fC, f10, f14;
    int f18;
    char **f1C;
    int *f20;
    int f24;
};
struct S_000AB030_Named {
    char pad0[0x28];
    char name[0x100];
};
struct S_000AB030_Sub {
    int f0;
    S_000AB030_Named *f4;
};
struct S_000AB030_ObjA {
    int f0;
    int f4;
    char pad8[0x19C];
    S_000AB030_Sub *f1A4;
};
struct S_000AB030_ObjB {
    int f0;
    int f4;
    S_000AB030_Named *f8;
};
struct S_000AB030_ListA {
    char pad0[0x24];
    int count;
    S_000AB030_ObjA **items;
};
struct S_000AB030_ListB {
    char pad0[0x24];
    int count;
    S_000AB030_ObjB **items;
};
struct S_000AB030_Arg {
    char pad0[0x3A8];
    S_000AB030_ListB **f3A8;
    S_000AB030_ListA *f3AC;
};
void func_001E891B(void *p);
int func_001EA426(const char *a, const char *b);
char *func_001E8AC0(char *s, int c);
void func_0014FF00(const char *a, int b, int c, char *d, int e);
extern "C" void *__cdecl memset(void *, int, unsigned int);

struct C_000AADB0 {
    char pad[0x24];
    int f24;
    C_000AADB0_Box *f28;
    void func_000AADB0(C_000AADB0_Parser *);
    void func_000AB030(S_000AB030_Arg *arg);
};
/* ObjectExclusionBoxes */
struct C_000AB340_Obj {
    void func_00198390();
    void func_001983A0();
};

struct C_000AB340_Box {
    float f0, f4, f8, fC, f10, f14;
    int f18;
    int pad1C;
    C_000AB340_Obj **f20;
    int f24;
};

struct C_000AB340_Vec {
    float x, y, z, w;
};

struct C_000AB340_Cam {
    char pad0[0x170];
    C_000AB340_Vec f170;
    C_000AB340_Vec f180;
    C_000AB340_Vec f190;
};

struct C_000ABBC0_Sub {
    void func_00199650(C_000AB340_Vec *a);
    void func_00198F50(C_000AB340_Vec *a, C_000AB340_Vec *b, int c, int d, int e);
    void func_0019AC50();
};

struct C_000ABBC0_Obj {
    char pad0[0x104];
    int f104;
          int f108;
    int f10C;
    C_000ABBC0_Sub **f110;
};

struct C_000ABBC0 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    C_000ABBC0_Obj **f28;
    void func_001578D0();
    void func_000ABBC0(void);
    void func_000AB4F0(C_000AADB0_Parser *);
};

struct C_000AB340_Global {
    char pad0[4];
    C_000AB340_Cam *f4;
};

extern C_000AB340_Global *D_002EFDB8;

struct C_000AB340 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    C_000AB340_Box *f28;
    void func_001578D0();
    void func_000AB340(void);
};

void C_000AADB0::func_000AADB0(C_000AADB0_Parser *p)
{
 int count, n, start;
 volatile int total;
 char name[260], item[260];
 if (!p->func_00169710(D_0027C704)) return;
 p->func_00168C20(D_0027C6E4,0,&count);
 if(count<=0) return;
 C_000AADB0_Box *result;
 if(f28) {
 start=f24; total=f24=count+start;
 result=(C_000AADB0_Box *)func_001E83E8(f28,f24*40);
 } else {
 total=f24=count; start=0;
 int allocCount=count;
 int *mem=(int *)func_001E8A44(allocCount*40+4);
 if(mem) { *mem=allocCount; C_000AADB0_Box *objects=(C_000AADB0_Box *)(mem+1); func_00011FF0(objects,40,allocCount,(void *)func_000A09F0); result=objects; }
 else result=0;
 }
 f28=result;
 for(int i=start;i<total;i++) {
 func_001ADCC0(name,260,D_0027C6CC,i-start+1);
 if(p->func_00169710(name)) {
 p->func_00168C50(D_0027C6C4,0,&f28[i].f0);
 p->func_00168C50(D_0027C6BC,0,&f28[i].f4);
 p->func_00168C50(D_0027C6B4,0,&f28[i].f8);
 p->func_00168C50(D_0027C6AC,0,&f28[i].fC);
 p->func_00168C50(D_0027C6A4,0,&f28[i].f10);
 p->func_00168C50(D_0027C69C,0,&f28[i].f14);
 p->func_00168C20(D_0027C67C,0,&n);
 f28[i].f18=n;
 if(n>0) {
 f28[i].f20=(int *)func_001E8A44(n*4);
 f28[i].f1C=(char **)func_001E8A44(n*4);
 for(int j=0;j<n;j++) {
 func_001ADCC0(item,260,D_0027C670,j+1);
 f28[i].f1C[j]=(char *)func_001E8A44(260);
 f28[i].f20[j]=0;
 p->func_00168BE0(item,D_002764F0,f28[i].f1C[j],-1);
 }
 }
 }
 }
}

void C_000AB340::func_000AB340(void)
{
    C_000AB340_Vec v = D_002EFDB8->f4->f170;
    int i;
    int j;

    if (f24 == 0) {
        func_001578D0();
        return;
    }
    for (i = 0; i < f24; i++) {
        if (v.x > f28[i].f0 && f28[i].f4 > v.x && f28[i].f10 < v.y && f28[i].f14 > v.y && f28[i].f8 < v.z && f28[i].fC > v.z) {
            f28[i].f24 = 1;
            for (j = 0; j < f28[i].f18; j++) {
                f28[i].f20[j]->func_00198390();
            }
        } else if (f28[i].f24 != 0) {
            f28[i].f24 = 0;
            for (j = 0; j < f28[i].f18; j++) {
                f28[i].f20[j]->func_001983A0();
            }
        }
    }
    func_001578D0();
}

void C_000AB490::func_000AB490(void)
{
    int func_001E891B(...);
    int i;

    vtbl = (void *)&D_0027C724;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            func_001E891B(f28[i]->f110);
            func_001E891B(f28[i]);
        }
        func_001E891B(f28);
    }
    ((C_00157660 *)this)->func_00157660();
}

C_000ABD60 *C_000ABD60::func_000ABD60()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C7F8;
    return this;
}
