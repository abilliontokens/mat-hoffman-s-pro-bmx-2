/* 1 function from 0x0003BC90 to 0x0003D220, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
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
 char padC[0x1a0];ManagerBC *f1A4;
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
extern "C" void *__cdecl memset(void*,int,unsigned int);
static __forceinline StringBC *getStringBC(DataBC *d,int i) {
 return ((StringListBC*)&d->stringCount)->get(i);
}
static __forceinline void appendBC(ListBC *l,NodeBC *p) {
 if(l->count<l->capacity || l->func_0015ACA0(l->count+l->grow)) l->data[l->count++]=p;
}
static __forceinline int minBC(const int &a,const int &b) {return AsmMinI(a,b);}
static __forceinline void setV4(V4 *p,float x,float y,float z,float w) {
 p->w=w;p->z=z;p->y=y;p->x=x;
}
static __forceinline void copyBC(NodeBC *p,const char *s) {
 int n=minBC(127,(int)strlen(s));func_001E8920(p->name,s,n);p->name[n]=0;
}

void C_0003BC90::func_0003BC90() {
 V4 pos, a, b, scale, center;
 setV4(&pos,0,0,0,1);
 setV4(&a,0,0,0,1);
 setV4(&b,0,0,0,1);
 int n;
 char path[0x104], fullPath[0x104];
 char name[0x104];
 center.w=1;
 pos.x=(float)f444; pos.y=f440; pos.z=(float)f448;
 scale.x=0;scale.y=0;scale.z=0;scale.w=1;
 a.x=1;a.y=0;a.z=0;
 b.x=0;b.y=1;b.z=0;
 V4 corner; corner.w=1;corner.x=pos.x-5.0f;corner.y=pos.y;corner.z=pos.z-5.0f;
 func_001ADCC0(D_002A5EA0,0x104,D_00276BB4,D_002A5870);
 func_001ADCC0(D_002A60B0,0x104,D_00276F58,D_002A5870);
 func_001ADCC0(D_002A4C10,0x104,D_00276BB4,D_002A5870);
 func_001ADCC0(name,0x32,D_00276F44);
 NodeBC *p=(NodeBC*)func_001E8A44(0x1e0);
 p=p?p->func_00143580(1):0;
 if(p->Load(name,0,0)){
 n=minBC(127,(int)strlen(name));
 func_001E8920(p->name,name,n);p->name[n]=0;
 func_001577A0(p,0);
 p->func_00199600(pos);
 p->func_00198F50(&a,&b,1,0,0);
 p->func_0019ABA0(f54C,2);
 func_001ADCC0(name,0x32,D_00276F34);
 p=(NodeBC*)func_001E8A44(0x1e0);
 f58C=p?p->func_00143580(1):0;
 if(f58C->Load(name,0,0)){
 n=minBC(127,(int)strlen(name));
 func_001E8920(f58C->name,name,n);f58C->name[n]=0;
 center.x=(float)(f428+(f434-f428)/2);
 center.y=f440+0.03f;
 center.z=(float)(f430+(f43C-f430)/2);
 f58C->func_00199600(center);
 f58C->func_0019ABA0(*f64->f4A8,2);
 ((C_0003BC90*)*(void**)f64->f3A8)->func_001577A0(f58C,0);

 int i;
 for(i=0;i<f64->count;++i) {
 EntryBC *entry=&f64->entries[i];
 if(!memcmp(entry->name,D_00276F2C,5)) {
 char *str=getStringBC(f64,entry->index)->name;
 func_001ADCC0(D_002A5EA0,0x104,D_00276BB4,D_002A5870);
 func_001ADCC0(D_002A60B0,0x104,D_00276F58,D_002A5870);
 func_001ADCC0(D_002A4C10,0x104,D_00276BB4,D_002A5870);
 NodeBC *text1=(NodeBC*)func_001E8A44(0x1e0);text1=text1?text1->func_00143580(1):0;
 if(text1->Load(str,0,0)){
 copyBC(text1,str);appendBC(&f5C8,text1);func_001577A0(text1,0);
 scale.x=0;scale.y=0;scale.z=1;scale.w=1;
 text1->func_00199600(pos);text1->func_00198F50(&scale,&b,1,0,0);text1->func_00198390();text1->func_0019ABA0(f54C,2);
 pos.x+=20.0f;
 NodeBC *text2=(NodeBC*)func_001E8A44(0x1e0);text2=text2?text2->func_00143580(1):0;
 if(text2->Load(str,0,0)){
 copyBC(text2,str);f5C8.func_001CDE90(text2);func_001577A0(text2,0);
 text2->func_00199600(pos);text2->func_00198F50(&scale,&b,1,0,0);text2->func_00198390();text2->func_0019ABA0(f54C,2);
 }else {text2->vf2();return;}
}else {text1->vf2();return;}
} else if(!memcmp(entry->name,D_00276F00,6)) {
 for(int j=0;j<f64->entries[i].count;j++) {
 char *str=getStringBC(f64,f64->entries[i].index+j)->name;
 func_001ADCC0(D_002A5EA0,0x104,D_00276BB4,D_002A5870);
 func_001ADCC0(D_002A60B0,0x104,D_00276F58,D_002A5870);
 func_001ADCC0(D_002A4C10,0x104,D_00276BB4,D_002A5870);
 func_001ADCC0(D_002A46E8,0x104,D_00276BB4,D_002A5870);
 char modelName[0x104];
 func_001ADCC0(name,0x104,D_00275678,D_002A46E8,str);
 func_001ADCC0(modelName,0x104,D_00276F28,str);
 func_001ADCC0(str,0x104,D_00276F28,name);
 ActorBC *actor=(ActorBC*)func_001E8A44(0x1b0);actor=actor?actor->func_001B5110():0;
 ActorBC *other=(ActorBC*)func_001E8A44(0x1b0);other=other?other->func_001B5110():0;
 ModelBC *model=(ModelBC*)func_001E8A44(0x4cc);model=model?model->func_00168280():0;
 ModelBC *model2=(ModelBC*)func_001E8A44(0x4cc);model2=model2?model2->func_00168280():0;
 if(!model->func_00169490(str,0)) {
 if(model){model->func_001691E0();func_001E891B(model);}if(model2){model2->func_001691E0();func_001E891B(model2);}
 if(actor)actor->Destroy(1);if(other)other->Destroy(1);return;
 }
 model->func_00169710(modelName);actor->SetModel(model);
 if(!actor->Init(f64)){
 if(model){model->func_001691E0();func_001E891B(model);}if(model2){model2->func_001691E0();func_001E891B(model2);}
 actor->Destroy(1);if(other)other->Destroy(1);return;
 }
 appendBC(&f5C8,actor->f1A4->f4);
 *((char*)actor->f1A4->f4+0x180)|=8;
 actor->f1A4->f4->func_00199650(&pos);
 actor->f1A4->f4->func_00198F50(&a,&b,0,1,0);
 actor->f1A4->func_00132D70();actor->f1A4->func_00132CC0(f54C,0,2);
 actor->f1A4->func_00164820(actor->f1A4->f18);
 actor->f1A4->func_001670C0(0,0,0);actor->f1A4->f10=1;actor->f1A4->func_00132D20();
 actor->f1A4->f4->func_00198390();
 if(model){model->func_001691E0();func_001E891B(model);}
 if(!model2->func_00169490(str,0)) {
 if(model2){model2->func_001691E0();func_001E891B(model2);}
 actor->Destroy(1);if(other)other->Destroy(1);return;
 }
 model2->func_00169710(modelName);other->SetModel(model2);
 if(!other->Init(f64)) {
 if(model2){model2->func_001691E0();func_001E891B(model2);}
 actor->Destroy(1);other->Destroy(1);return;
 }
 *((char*)other->f1A4->f4+0x180)|=8;
 other->f1A4->f4->func_00199650(&pos);other->f1A4->f4->func_00198F50(&a,&b,0,1,0);
 other->f1A4->func_00164820(actor->f1A4->f18);other->f1A4->func_001670C0(0,0,0);
 other->f1A4->f10=1;other->f1A4->func_00132D20();other->f1A4->f4->func_00198390();
 if(model2){model2->func_001691E0();func_001E891B(model2);}
 if(func_001E8AF0(str,D_00276F20)){f594=actor;f59C=other;}
 else if(func_001E8AF0(str,D_00276F18)){f590=actor;f598=other;}
 char *q=actor->f1A4->f4->name;while((*str++=*q++)!=0){}
 }
 } else {
 for(int j=0;j<f64->entries[i].count;j++){
 int index=f64->entries[i].index+j;
 char *str=getStringBC(f64,index)->name;
 char *second=getStringBC(f64,index)->second;
 func_001ADCC0(D_002A5EA0,0x104,D_00276BB4,D_002A5870);
 func_001ADCC0(D_002A60B0,0x104,D_00276F58,D_002A5870);
 func_001ADCC0(D_002A4C10,0x104,D_00276BB4,D_002A5870);
 NodeBC *first=(NodeBC*)func_001E8A44(0x1e0);first=first?first->func_00143580(1):0;
 if(first->Load(str,0,0)){

 copyBC(first,str);appendBC(&f5C8,first);func_001577A0(first,0);
 int len=minBC(0x103,(int)strlen(str));func_001E8920(name,str,len);name[len]=0;
 for(char *c=name;*c;c++)*c=(char)func_001E8D25(*c);
 AnimBC *anim=(AnimBC*)func_001E8A44(0x1e0);anim=anim?anim->func_0019B700(1):0;
 if(anim->func_00129920(5)) {
 if(func_001E8AF0(name,D_00276D84))anim->f68=D_002B9118;
 else if(func_001E8AF0(name,D_00276D7C))anim->f68=D_002B9108;
 else if(func_001E8AF0(name,D_00276D74))anim->f68=D_002B910C;
 else if(func_001E8AF0(name,D_00276D6C))anim->f68=D_002B911C;
 else if(func_001E8AF0(name,D_00276D64))anim->f68=D_002B9114;
 else anim->f68=D_002BA160;
 if(!anim->func_0019D7B0(first,str)){anim->Destroy();goto anim_done;}
 }
 if(anim){appendBC(&f5DC,(NodeBC*)anim);func_001577A0((NodeBC*)anim,0);}
 anim_done:
 len=strlen(second);
 if(len) {
 p=(NodeBC*)func_001E8A44(0x1e0);p=p?p->func_00143580(1):0;
 if(!p->Load(second,0,0)){p->vf2();return;}
 copyBC(p,second);func_001577A0(p,0);
 len=minBC(0x103,(int)strlen(second));func_001E8920(name,second,len);name[len]=0;
 func_000347F0(name);
 anim=(AnimBC*)func_001E8A44(0x1e0);anim=anim?anim->func_0019B700(1):0;
 if(anim->func_00129920(5)) {
 if(func_001E8AF0(name,D_00276D84))anim->f68=D_002B9118;
 else if(func_001E8AF0(name,D_00276D7C))anim->f68=D_002B9108;
 else if(func_001E8AF0(name,D_00276D74))anim->f68=D_002B910C;
 else if(func_001E8AF0(name,D_00276D6C))anim->f68=D_002B911C;
 else if(func_001E8AF0(name,D_00276D64))anim->f68=D_002B9114;
 else anim->f68=D_002BA160;
 if(!anim->func_0019D7B0(p,second)){anim->Destroy();goto second_done;}
 }
 if(anim){f5DC.func_001CDE90((NodeBC*)anim);func_001577A0((NodeBC*)anim,0);}
 second_done:
 V4 v1,v2;first->func_00199B00(&v1,0);p->func_00199B00(&v2,0);
 getStringBC(f64,index)->f310=p;
 if(getStringBC(f64,index)->f36C)p->func_00199600(corner);else p->func_00199600(pos);
 p->func_00198F50(&a,&b,1,0,0);p->func_00198390();p->func_0019ABA0(f54C,2);
 }
 char *third=getStringBC(f64,index)->third;
 len=strlen(third);
 if(len){func_00035C10(first,1,third,&pos,&a,&b,0,1);f570->vf4();}
 if(getStringBC(f64,index)->f364){
 func_001ADCC0(path,0x104,getStringBC(f64,index)->name);
 char *dot=func_001E8AC0(path,'.');
 if(dot){unsigned int m=strlen(dot);memset(dot,0,m);}
 func_001ADCC0(fullPath,0x104,D_00276F0C,D_002A5EA0,path);
 int resource=D_002BEAAC->func_0013C9F0(fullPath,D_00276274);
 if(resource!=-1)D_002BEAAC->func_0013C110(resource);
 }
 if(getStringBC(f64,index)->f36C)first->func_00199600(corner);else first->func_00199600(pos);
 first->func_00198F50(&a,&b,1,0,0);first->func_00198390();first->func_0019ABA0(f54C,2);
 }else {first->vf2();return;}
 }
 }
 }
 D_002A829C->func_00161680();D_002AA6C0->func_001B2640();
} else if(f58C)f58C->vf0(1);
} else p->vf0(1);
}
