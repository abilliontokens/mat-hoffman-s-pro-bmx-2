/* 5 functions from 0x0018EB70 to 0x0018F980, found by Ghidra. */
#include "common.h"
#include <string.h>
#include "asm_helpers.h"
extern char D_00288030[],D_0028AA08[],D_0028AA04[],D_0028A83C[],D_002869B8[],D_0028A9FC[],D_0028A9F8[],D_00277038[];
extern char *D_002A96C0;
extern char *D_002A96C4[];
extern "C" void *func_001E8AA5(int);
extern "C" void *func_001E8A44(int);
extern "C" int func_001E91F4(const char *);
extern "C" int func_001ADCC0(char *,int,const char *,...);
struct File_0018EB70 {
 void func_0013C8A0(int,void*,int,int);
 void func_0013AFF0(int,int,int);
 int func_0013AFD0(int);
 int func_0013AFB0(int);
 void func_0013C110(int);
};
extern File_0018EB70 *D_002BEAAC;
struct Parser_0018EB70 {
 char *start,*current;
 char *func_0018E640(char*);
};
struct Node_0018EB70 {
 char data[0x24]; int f24,f28; Node_0018EB70 *next;
};
struct Result_0018EB70 {
 char data[0x104]; Node_0018EB70 *first,*last; int count;
};
struct Buffers_0018EB70 {char value[64],found[260],pad0[4],magic[260],pad1[4],bintext[256],text[256],buf[256],trimmed[256];};
struct C_0018EB70 {
 int func_0018EB70(int,char*,Result_0018EB70*);
 void func_0018DE60(char*,Node_0018EB70*,int,int,char*,int);
};
extern "C" int func_001E8390(void *);
extern "C" void *func_001E83E8(void *,int);
static inline int minref(int x,int y){volatile int a=x,b=y;int av=a,bv=b;volatile int result=av>bv?bv:av;return result;}
extern char D_00275630[];
struct C_00191470 {
    void func_00191470(unsigned int b);
};
struct C_0018F4D0 {
    char pad0[0x20];
    int f20;
    int f24;
    char *f28;
    char f2C;
    char pad2D[0x12C - 0x2D];
    int f12C;
    int f130;
    int f134;
    int f138;
    int f13C;
    char f140;
    char pad141[0x150 - 0x141];
    void func_0018E250(char *a, unsigned int b);
    void func_0018F4D0(unsigned int a);
    void func_0018F610(unsigned int a, unsigned int b);
    void func_0018F390(char *n, unsigned int a, void **p);
};
struct C_00191420 {
    void func_00191420(char *n, unsigned int a, void **p);
};
static inline int minv(const int &x, const int &y) { return x < y ? x : y; }
extern "C" void *func_001E8920(void *d, const void *s, int n);
struct C_0018F350 {
    char pad0[0x18];
    int unk18;
    int unk1C;
    char pad20[0x148];
    int unk168;
    int unk16C;
    int unk170;
    int unk174;
    int unk178;
    int unk17C;
    C_0018F350* func_0018F350(void);
};


int C_0018EB70::func_0018EB70(int file,char *name,Result_0018EB70 *out) {
out->first=0;out->last=0;out->count=0;
Buffers_0018EB70 buffers;
int len,cap,n,tmp,i;
char *v,*t;
buffers.magic[0]=0;memset(buffers.magic+1,0,259);
D_002BEAAC->func_0013C8A0(file,buffers.magic,6,1);
buffers.magic[6]=0;
int binary=!memcmp(buffers.magic,D_00288030,7);
buffers.found[0]=0;memset(buffers.found+1,0,259);
Parser_0018EB70 parser;
char *allocation=D_00275630;
if(binary){
 len=0;D_002BEAAC->func_0013C8A0(file,&len,4,1);
 D_002BEAAC->func_0013C8A0(file,buffers.found,len,1);buffers.found[len]=0;
} else {
 D_002BEAAC->func_0013AFF0(file,0,2);
 len=D_002BEAAC->func_0013AFD0(file);
 allocation=(char*)func_001E8AA5(len+1);
 D_002BEAAC->func_0013AFF0(file,0,0);
 D_002BEAAC->func_0013C8A0(file,allocation,len,1);
 allocation[len]=0;parser.current=strlen(allocation)?allocation:0;
 v=parser.func_0018E640(D_0028AA08);
 cap=259;len=(int)strlen(v);
 n=AsmMinI(cap,len);func_001E8920(buffers.found,v,n);buffers.found[n]=0;
}
if(strcmp(buffers.found,name)){D_002BEAAC->func_0013C110(file);return 0;}
int pending=0,number=0,type=0,flag=0;
Node_0018EB70 *node=0;

for(;;){
if(binary){
 D_002BEAAC->func_0013C8A0(file,&number,4,1);
 tmp=0;D_002BEAAC->func_0013C8A0(file,&tmp,4,1);type=tmp;
 buffers.bintext[0]=0;memset(buffers.bintext+1,0,255);len=0;
 D_002BEAAC->func_0013C8A0(file,&len,4,1);
 D_002BEAAC->func_0013C8A0(file,buffers.bintext,len,1);buffers.bintext[len]=0;
 len=(int)strlen(buffers.bintext);cap=63;
 n=AsmMinI(cap,len);func_001E8920(buffers.value,buffers.bintext,n);buffers.value[n]=0;
 D_002BEAAC->func_0013C8A0(file,&flag,4,1);
} else {
 v=parser.func_0018E640(D_0028AA04);
 if(!v||!memcmp(v,D_00275630,1))goto done;
 number=func_001E91F4(v);
 v=parser.func_0018E640(D_0028AA04);
 if(!v)goto done;
 i=0;t=D_002A96C0;
 while(memcmp(t,D_0028A83C,8)) {
 if(!t)break;
 if(!strcmp(t,v)){type=i;break;}
 t=D_002A96C4[i++];
 }
 v=parser.func_0018E640(D_002869B8);
 if(!memcmp(v,D_0028A9FC,6))v=D_00275630;
 else{
 buffers.text[0]=0;memset(buffers.text+1,0,255);buffers.trimmed[0]=0;memset(buffers.trimmed+1,0,255);
 len=(int)strlen(v);cap=255;
 n=AsmMinI(cap,len);func_001E8920(buffers.text,v,n);buffers.text[n]=0;
 len=strlen(buffers.text);if(len>0)memcpy(buffers.trimmed,buffers.text+1,len);v=buffers.trimmed;
 len=(int)strlen(v);cap=63;
 n=AsmMinI(cap,len);func_001E8920(buffers.value,v,n);buffers.value[n]=0;
 goto parsed;
 }
 len=(int)strlen(v);cap=63;
 {n=AsmMinI(cap,len);func_001E8920(buffers.value,v,n);buffers.value[n]=0;}
parsed:
 flag=func_001E91F4(parser.func_0018E640(D_0028A9F8));
}
if(type==16||type==17||type==18){
 buffers.buf[0]=0;memset(buffers.buf+1,0,255);
 func_001ADCC0(buffers.buf,256,D_00277038,func_001E91F4(buffers.value)+pending-number);
 len=(int)strlen(buffers.buf);cap=63;
 n=AsmMinI(cap,len);func_001E8920(buffers.value,buffers.buf,n);buffers.value[n]=0;
}
if(type==1){
 if(pending){
 if(!out->last){out->first=node;out->last=node;}
 else {out->last->next=node;out->last=node;}
 }
 node=(Node_0018EB70*)func_001E8A44(48);
 node->next=0;node->f24=0;node->f28=30;
 *(void**)(node->data+0x20)=func_001E8AA5(2400);
 pending=0;
 len=(int)strlen(buffers.value);cap=31;
 n=AsmMinI(cap,len);func_001E8920(node,buffers.value,n);node->data[n]=0;
}
func_0018DE60(name,node,number,pending,buffers.value,flag);
pending++;node->f24++;
if(binary&&D_002BEAAC->func_0013AFB0(file))break;
if(node->f28<node->f24+1){node->f28=node->f24+30;*(void**)(node->data+0x20)=func_001E83E8(*(void**)(node->data+0x20),node->f28*80);if(!*(void**)(node->data+0x20))return 0;}
}
done:
D_002BEAAC->func_0013C110(file);
if(!binary)func_001E8390(allocation);
if(!out->last){out->first=node;out->last=node;}else{out->last->next=node;out->last=node;}
return 1;
}

C_0018F350* C_0018F350::func_0018F350(void) {
    unk178 = 0;
    unk174 = 0;
    unk170 = 0;
    unk17C = 1065353216;
    unk18 = 0;
    unk1C = 0;
    unk168 = 0;
    unk16C = 0;
    return this;
}

void C_0018F4D0::func_0018F390(char *n, unsigned int a, void **p)
{
    switch ((a >> 8) & 0xff) {
    case 1:
        f20 = *(int *)p;
        break;
    case 2:
        f24 = *(int *)p;
        break;
    case 3: {
        char *s = *(char **)p;
        int len = strlen(s);
        int cap = 255;
        int m = AsmMinI(cap, len);
        func_001E8920(&f2C, s, m);
        (&f2C)[m] = 0;
        f28 = &f2C;
        break;
    }
    case 4:
        *(__int64 *)&f138 = *(__int64 *)p;
        break;
    case 5:
        f140 = *(char *)p;
        break;
    case 6:
        f12C = *(int *)p;
        break;
    case 7:
        f130 = *(int *)p;
        break;
    case 8:
        f134 = *(int *)p;
        break;
    case 9:
        ((C_00191420 *)((char *)this + 0x150))->func_00191420(n, a, p);
        break;
    }
    func_0018E250(n, a);
}

void C_0018F4D0::func_0018F4D0(unsigned int a)
{
    switch ((a >> 8) & 0xff) {
    case 1:
        f20 = 0;
        break;
    case 2:
        f24 = 0;
        break;
    case 3:
        f28 = D_00275630;
        f2C = 0;
        break;
    case 4:
        f138 = 0;
        f13C = 0;
        break;
    case 5:
        f140 = 0;
        break;
    case 6:
        f12C = 0;
        break;
    case 7:
        f130 = 0;
        break;
    case 8:
        f134 = 0;
        break;
    case 9:
        ((C_00191470 *)((char *)this + 0x150))->func_00191470(a);
        break;
    }
    func_0018E250(D_00275630, a);
}

void C_0018F4D0::func_0018F610(unsigned int a, unsigned int b)
{
    unsigned int t = *((unsigned char *)this + 0x19);
    float &vf = *(float *)&f20;
    int &vi = f24;
    double &vd = *(double *)&f138;
    unsigned char &vb = *(unsigned char *)&f140;
    unsigned int &vu = *(unsigned int *)&f130;
    switch ((b >> 8) & 0xff) {
    case 1:
        switch (t) {
        case 1: vf = vf; break;
        case 2: vf = (float)vi; break;
        case 4: vf = (float)vd; break;
        case 5: vf = (float)vb; break;
        case 7: vf = (float)vu; break;
        }
        break;
    case 2:
        switch (t) {
        case 1: vi = (int)vf; break;
        case 2: vi = vi; break;
        case 4: vi = (int)vd; break;
        case 5: vi = vb; break;
        case 7: vi = vu; break;
        }
        break;
    case 4:
        switch (t) {
        case 1: vd = vf; break;
        case 2: vd = vi; break;
        case 4: vd = vd; break;
        case 5: vd = vb; break;
        case 7: vd = vu; break;
        }
        break;
    case 5:
        switch (t) {
        case 1: vb = (unsigned char)(int)vf; break;
        case 2: vb = (unsigned char)vi; break;
        case 4: vb = (unsigned char)(int)vd; break;
        case 5: vb = vb; break;
        case 7: vb = (unsigned char)vu; break;
        }
        break;
    case 7:
        switch (t) {
        case 1: vu = (int)vf; break;
        case 2: vu = vi; break;
        case 4: vu = (int)vd; break;
        case 5: vu = vb; break;
        case 7: vu = vu; break;
        }
        break;
    }
    func_0018E250((char *)a, b);
}

