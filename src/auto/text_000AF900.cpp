/* 5 functions from 0x000AF900 to 0x000B03A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
#include <string.h>
#include <stdlib.h>
#include "asm_helpers.h"
struct Config_AF900 {
 char data[0x4d0];
 void func_00168280(); void func_001691E0();
 int func_00169490(const char *, int); int func_00169710(const char *);
 void func_00168C20(const char *, int, int *);
 void func_00168C50(const char *, float, float *);
 void func_00168BE0(const char *, const char *, char *, int);
 void func_00168CB0(const char *, const void *, void *);
};
struct Entry_AF900 { char name[0x34]; int count,a,b,c,start; };
struct Item_AF900 { char data[0x378]; };
struct Array_AF900 { int count; Item_AF900 **items; int grow,capacity; int func_0015ACA0(int); };
struct C_AF900 { char pad[0x5a0]; int count; Entry_AF900 *entries; Array_AF900 objects; int func_000AF900(int * volatile); };
int func_001ADCC0(char *, int, const char *, ...);
extern char D_0027CDF0[],D_002A5870[],D_00275678[],D_0027A150[],D_0027CDE8[],D_0027CDE0[],D_0027CDD8[],D_0027CDD0[],D_0027CDC8[],D_0027CDC0[],D_0027CDB8[],D_0027CDA4[],D_0027CD90[],D_0027CD7C[],D_0027CD68[],D_0027CD50[],D_0027CD40[],D_0027CD34[],D_0027CD24[],D_0027CD18[],D_0027CD0C[],D_0027CD00[],D_0027CCF4[],D_0027CCE0[],D_0027CCDC[],D_0027CCD8[],D_0027CCC8[],D_0027CCB8[],D_0027CCA8[],D_0027CC9C[],D_0027CC90[],D_0027CC80[],D_0027CC74[],D_0027CC64[],D_00275630[],D_00276980[],D_00276310[],D_0027ADEC[],D_0027ADDC[],D_002A2734[];
struct Obj_B0060 {
 virtual void v0();
 virtual void v1();
 virtual void v2();
 virtual void v3();
 virtual void v4();
 virtual void v5();
 virtual void v6();
 virtual void v7();
 virtual void v8();
 virtual void v9();
 virtual void v10();
 virtual void v11();
 virtual void v12();
 virtual void v13();
 virtual void v14();
 virtual void v15();
 virtual void v16();
 virtual void v17();
 virtual void v18();
 virtual void v19();
 virtual void v20();
 virtual void v21();
 virtual void v22();
 virtual void v23();
 virtual void v24();
 virtual void v25();
 virtual void v26();
 virtual void v27();
 virtual void v28();
 virtual void v29();
 virtual void v30();
 virtual void v31(void *);
 char pad4[0x5c];
 int f60, f64, f68;
 char f6C, f6D;
 Obj_B0060 *func_0019B700(int);
 int func_00129920(int);
 int func_0019D7B0(int, const char *);
 void func_00133140(int, int);
};
struct List_B0060 {
 int count; Obj_B0060 * volatile *items; int grow, capacity;
 int func_0015ACA0(int);
 void store(Obj_B0060 *obj) { items[count]=obj; }
};
struct Group_B0060 { void func_001577A0(Obj_B0060 *, int); };
struct C_000B0060 {
 char pad0[0x3a8];
 Group_B0060 **f3A8;
 char pad3AC[0x100];
 int *f4AC;
 int func_000B0060(int, char, const char *, void *, void *, void *, int, int, List_B0060 *);
};
struct Temp_B0060 { C_000B0060 * volatile self; volatile int limit, count, len; };
struct __declspec(align(16)) Mat_B0060 { float m[16]; };
extern char D_00276D84[], D_00276D7C[], D_00276D74[], D_00276D6C[], D_00276D64[], D_0027CDFC[];
extern int D_002B9118,D_002B9108,D_002B910C,D_002B911C,D_002B9114,D_002B9110,D_002BA160;
void *func_001E8920(void *, const void *, int);
int func_001E8D25(int);
void *func_001E8A44(int);
char *func_001E8AF0(char *, const char *);
void func_000265C0(void *, void *, void *, void *, int, int);
struct S_000B0340_B {
    int unk0;
    int unk4;
};

struct S_000B0340_A {
    char pad0[0x2E0];
    S_000B0340_B *unk2E0;
};

extern S_000B0340_A *D_002A8490;

struct C_000B0340 {
    void func_000AC8F0(void);
    void func_000A2F20(void);
    void func_000AF7D0(void);
    void func_000AC890(void);
    void func_000A1E90(void);
    void func_000ACCF0(void);
    void func_000ACD50(void);
    void func_000AF8A0(void);
    void func_000ACDB0(void);
    void func_000A1EF0(void);
    void func_000B0340(void);
};

struct C_000B0320 {
    undefined4 func_000B0320(byte param_1);
};

struct C_000B0300 {
    undefined4 func_000B0300(byte param_1);
};


#pragma optimize("g", on)
int C_AF900::func_000AF900(int * volatile out) {
 C_AF900 * volatile self=this; Config_AF900 cfg; char path[260],section[50],key[50]; int n;volatile int a,b;
 cfg.func_00168280();func_001ADCC0(path,260,D_00275678,D_002A5870,D_0027CDF0);if(!cfg.func_00169490(path,0)){cfg.func_001691E0();return 0;}
 if(out){if(!cfg.func_00169710(D_0027A150))goto fail;
 cfg.func_00168C20(D_0027CDE8,0,out);cfg.func_00168C20(D_0027CDE0,0,out+1);cfg.func_00168C20(D_0027CDD8,0,out+2);cfg.func_00168C20(D_0027CDD0,0,out+3);cfg.func_00168C20(D_0027CDC8,0,out+4);cfg.func_00168C20(D_0027CDC0,0,out+5);cfg.func_00168C50(D_0027CDB8,0,(float*)(out+6));cfg.func_00168C50(D_0027CDA4,15,(float*)(out+15));cfg.func_00168C50(D_0027CD90,40,(float*)(out+16));cfg.func_00168C50(D_0027CD7C,40,(float*)(out+17));cfg.func_00168C50(D_0027CD68,120,(float*)(out+18));
 int*q=out;q[7]=q[0]+120;q=out;q[8]=q[2]+120;q=out;if(q[0]<0){a=q[0]/10;int v=a;b=v>0?-v:v;out[9]=b;}q=out;if(q[1]<0){b=q[1]/5;int v=b;a=v>0?-v:v;out[10]=a;}q=out;if(q[2]<0){b=q[2]/10;int v=b;a=v>0?-v:v;out[11]=a;}
 q=out;q[12]=(q[3]-q[0])/10+1;q=out;q[13]=(q[4]-q[1])/5+1;q=out;q[14]=(q[5]-q[2])/10+1;}
 if(!cfg.func_00169710(D_0027CD50))goto fail;cfg.func_00168C20(D_0027CD40,0,&n);if(!n){fail:cfg.func_001691E0();return 0;}self->count=n;self->entries=(Entry_AF900*)func_001E8A44(n*72);
 for(int i=1;i-1<n;i++){func_001ADCC0(section,50,D_0027CD34,i);if(cfg.func_00169710(section)){
 cfg.func_00168BE0(D_0027CD24,D_00275630,self->entries[i-1].name,-1);cfg.func_00168C20(D_0027CD18,0,&self->entries[i-1].count);cfg.func_00168C20(D_0027CD0C,0,&self->entries[i-1].a);cfg.func_00168C20(D_0027CD00,0,&self->entries[i-1].b);cfg.func_00168C20(D_0027CCF4,0,&self->entries[i-1].c);
 C_AF900*s=self;int c=s->objects.count;if(!c)s->entries[i-1].start=0;else s->entries[i-1].start=c;
 for(int j=0;j<self->entries[i-1].count;){++j;func_001ADCC0(key,50,D_0027CCE0,i,j);if(cfg.func_00169710(key)){
 Item_AF900*p=(Item_AF900*)func_001E8A44(0x378);if(p){*(int*)(p->data+0x308)=0;*(int*)(p->data+0x304)=0;*(int*)(p->data+0x300)=0;*(float*)(p->data+0x30c)=1;*(int*)(p->data+0x350)=0;*(int*)(p->data+0x34c)=0;*(int*)(p->data+0x348)=0;*(float*)(p->data+0x354)=1;}
 cfg.func_00168BE0(D_00276980,D_00275630,p->data+0x314,-1);cfg.func_00168BE0(D_00276310,D_00275630,p->data,-1);cfg.func_00168BE0(D_0027ADEC,D_00275630,p->data+0xff,-1);cfg.func_00168BE0(D_0027ADDC,D_00275630,p->data+0x1fe,-1);if(memcmp(self->entries[i-1].name,D_0027CCDC,4))cfg.func_00168CB0(D_0027CCD8,D_002A2734,p->data+0x348);
 cfg.func_00168C20(D_0027CCC8,0,(int*)(p->data+0x358));cfg.func_00168C20(D_0027CCB8,0,(int*)(p->data+0x35c));cfg.func_00168C20(D_0027CCA8,0,(int*)(p->data+0x360));cfg.func_00168C20(D_0027CC9C,0,(int*)(p->data+0x364));cfg.func_00168C20(D_0027CC90,0,(int*)(p->data+0x368));cfg.func_00168C20(D_0027CC80,0,(int*)(p->data+0x36c));cfg.func_00168C20(D_0027CC74,0,(int*)(p->data+0x370));cfg.func_00168C20(D_0027CC64,0,(int*)(p->data+0x374));*(int*)(p->data+0x310)=0;Array_AF900*l=&self->objects;if(l->count<l->capacity||l->func_0015ACA0(l->count+l->grow)){l->items[l->count]=p;++l->count;}
 }}}}cfg.func_001691E0();return 1;}

#pragma optimize("g", on)
int C_000B0060::func_000B0060(volatile int a, char b, const char * volatile name, void *x, void *y, void *z, int unused, volatile int mode, List_B0060 * volatile list) {
 char buf[50];
 Mat_B0060 mat;
 const char *str=name;
 int len=strlen(str);
 int n;
 int lim=49;
 n=AsmMinI(lim,len);
 func_001E8920(buf,name,n); buf[n]=0;
 char *p=buf;
 while (*p) { *p=(char)func_001E8D25(*p); ++p; }
 void *mem=func_001E8A44(0x1e0);
 Obj_B0060 *obj=mem?((Obj_B0060 *)mem)->func_0019B700(1):0;
 obj->f60=a;
 int kind=13;
 if (D_002A8490->unk2E0->unk4==11) kind=5;
 if (obj->func_00129920(kind)) {
 if (func_001E8AF0(buf,D_00276D84)) obj->f68=D_002B9118;
 else if (func_001E8AF0(buf,D_00276D7C)) obj->f68=D_002B9108;
 else if (func_001E8AF0(buf,D_00276D74)) obj->f68=D_002B910C;
 else if (func_001E8AF0(buf,D_00276D6C)) obj->f68=D_002B911C;
 else if (func_001E8AF0(buf,D_00276D64)) obj->f68=D_002B9114;
 else if (func_001E8AF0(buf,D_0027CDFC)==buf) obj->f68=D_002B9110;
 else obj->f68=D_002BA160;
 if (!mode) {
 if (!obj->func_0019D7B0(a,name)) { obj->v2(); return 1; }
 } else {
 if (!obj->func_0019D7B0(0,name)) { obj->v2(); return 1; }
 }
 }
 obj->f6D=b;
 if (mode) (*this->f3A8)->func_001577A0(obj,2);
 else (*this->f3A8)->func_001577A0(obj,0);
 func_000265C0(&mat,x,y,z,0,1);
 obj->v31(&mat);
 obj->func_00133140(*this->f4AC,2);
 List_B0060 *q=list;
 if (q) {
 if ((q->count<q->capacity) || q->func_0015ACA0(q->count+q->grow)) {
 List_B0060 *r=list;
 r->items[r->count]=obj; ++list->count;
 }
 }
 return 1;
}
undefined4 C_000B0300::func_000B0300(byte param_1)
{
  int func_000AE6E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AE6E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000B0320::func_000B0320(byte param_1)
{
  int func_000AEF10(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AEF10();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_000B0340::func_000B0340(void) {
    func_000AC8F0();
    func_000A2F20();
    func_000AF7D0();
    func_000AC890();
    func_000A1E90();
    func_000ACCF0();
    func_000ACD50();
    func_000AF8A0();
    func_000ACDB0();
    if (D_002A8490->unk2E0->unk4 == 10) {
        func_000A1EF0();
    }
}

