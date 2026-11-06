/* 1 function from 0x0003BC90 to 0x0003D220, found by Ghidra. */
#include "common.h"
struct V4 { float x,y,z,w; };
struct NodeBC {
 virtual void vf0(int);
virtual void vf1();
virtual void vf2();
virtual void vf3();
virtual void vf4();
virtual void vf5();
virtual void vf6();
virtual void vf7();
virtual void vf8();
virtual void vf9();
virtual void vf10();
virtual void vf11();
virtual void vf12();
virtual void vf13();
virtual void vf14();
virtual void vf15();
virtual void vf16();
virtual void vf17();
virtual void vf18();
virtual void vf19();
virtual void vf20();
virtual void vf21();
virtual void vf22();
virtual void vf23();
virtual void vf24();
virtual void vf25();
virtual void vf26();
virtual void vf27();
virtual void vf28();
virtual void vf29();
virtual void vf30();
virtual void vf31();
virtual void vf32();
virtual void vf33();
virtual void vf34();
 virtual int Load(const char*,int,int);
 char pad4[0x24]; char name[128];
 NodeBC *func_00143580(int);
 void func_00199600(V4);
 void func_00198F50(V4*,V4*,int,int,int);
 void func_0019ABA0(int,int);
 void func_00198390();
 void func_00199650(V4*);
 void func_00199B00(V4*,int);
};
struct ListBC {
 int count; NodeBC **data; int grow,capacity;
 int func_0015ACA0(int);
 void func_001CDE90(NodeBC*);
};
struct EntryBC { char name[0x34]; int count; char pad38[0xc]; int index; };
struct StringBC {
 char name[255],second[255],third[255];char pad2FD[0x13];
 NodeBC *f310;char pad314[0x50];int f364;int f368;int f36C;
};
struct StringListBC {int count;StringBC **data;
 __forceinline StringBC *get(int i) {if(count>0 && data && i<count)return data[i];return 0;}
};
struct DataBC {
 char pad0[0x3a8]; void *f3A8; char pad3AC[0xfc];
 int *f4A8; char pad4AC[0xf4];
 int count; EntryBC *entries; int stringCount; StringBC **strings;
};
struct ActorBC;
struct C_0003BC90 {
 char pad0[0x64]; DataBC *f64; char pad68[0x3c0];
 int f428; int f42C; int f430; int f434; int f438; int f43C;
 float f440; int f444; int f448;
 char pad44C[0x100]; int f54C;
 char pad550[0x20]; NodeBC *f570;char pad574[0x18]; NodeBC *f58C;
 ActorBC *f590,*f594,*f598,*f59C;
 char pad5A0[0x28]; ListBC f5C8;int f5D8; ListBC f5DC;
 void func_001577A0(NodeBC*,int);
 void func_0003BC90();
 void func_00035C10(NodeBC*,int,char*,V4*,V4*,V4*,int,int);
};
extern char D_002A5870[],D_00276BB4[],D_002A5EA0[],D_00276F58[],D_002A60B0[],D_002A4C10[],D_00276F44[],D_00276F34[],D_00276F2C[];
extern float D_00275548,D_00276554,D_00275AE8;
int func_001ADCC0(char*,int,const char*,...);
void *func_001E8A44(unsigned int);
void *func_001E8920(void*,const void*,unsigned int);
extern "C" unsigned int __cdecl strlen(const char*);
struct ManagerBC {
 int f0;NodeBC *f4;char pad8[8];int f10;int f14;int f18;
 void func_00132D70();void func_00132CC0(int,int,int);
 void func_00164820(int);void func_001670C0(int,int,int);void func_00132D20();
};
struct ModelBC {
 ModelBC *func_00168280();
 int func_00169490(char*,int);
 void func_00169710(char*);
 void func_001691E0();
};
struct ActorBC {
 virtual void Destroy(int); virtual void SetModel(ModelBC*); virtual int Init(DataBC*);
 char padC[0x198];ManagerBC *f1A4;
 ActorBC *func_001B5110();
};
struct AnimBC {
 virtual void v0();virtual void v1();virtual void Destroy();
 char padC[0x5c];int f68;
 AnimBC *func_0019B700(int);int func_00129920(int);
 int func_0019D7B0(NodeBC*,char*);
};
struct EndBC {void func_00161680();void func_001B2640();};
struct ResourceBC {int func_0013C9F0(char*,char*);void func_0013C110(int);};
extern ResourceBC *D_002BEAAC;
extern EndBC *D_002A829C,*D_002AA6C0;
extern int D_002B9118,D_002B9108,D_002B910C,D_002B911C,D_002B9114,D_002BA160;
extern char D_00276F00[],D_002A46E8[],D_00275678[],D_00276F28[],D_00276F20[],D_00276F18[];
extern char D_00276D84[],D_00276D7C[],D_00276D74[],D_00276D6C[],D_00276D64[],D_00276F0C[],D_00276274[];
int func_001E8AF0(const char*,const char*);
char *func_001E8AC0(char*,int);
int func_001E8D25(int);
void func_000347F0(char*);
void func_001E891B(void*);
extern "C" int __cdecl memcmp(const void*,const void*,unsigned int);
static __forceinline StringBC *getStringBC(DataBC *d,int i) {
 return ((StringListBC*)&d->stringCount)->get(i);
}
static __forceinline void appendBC(ListBC *l,NodeBC *p) {
 if(l->count<l->capacity || l->func_0015ACA0(l->count+l->grow)) l->data[l->count++]=p;
}
#pragma optimize("g",off)
static __forceinline int minBC(const int &a,const int &b) {int r=a;if(r>b)r=b;return r;}
#pragma optimize("",on)
static __forceinline void copyBC(NodeBC *p,const char *s) {
 int n=minBC(127,(int)strlen(s));func_001E8920(p->name,s,n);p->name[n]=0;
}
