/* 1 function from 0x000E51B0 to 0x000E5FF0, found by Ghidra. */
#include "common.h"





extern char D_00141414;
extern float D_0027653C,D_00275994,D_0027FD14;
extern int D_0028F5DC,D_0028F5E0;
extern char D_002786B0[],D_0027F29C[],D_0027FD04[];

extern char D_00279AF0[],D_00279AD0[],D_00279B00[],D_00279AE0[];
extern float D_0027FD4C;
extern int D_0028F5EC;
int func_001E8A44(...);
struct RiderText {
int w[0x184/4];
RiderText *func_001B12C0(int);
void func_001B13A0(char*,char*,int,int);
void func_001B1A30(float,float,int);
void func_001B2270(int);
void func_001B19A0(int);
void func_001B1B30(float,int);
void func_001B1AB0(int,int);
void func_001B17D0(char*);
};
struct RiderLabel {
int w[0x60/4];
RiderLabel *func_001D5E90();
void func_001D5FA0(int,char*,int,int);
};


struct C_000E51B0_W {
    union {
        int w[0x60 / 4];
        struct {
            unsigned char b[0x58];
            unsigned char f58;
            unsigned char pad59[7];
        };
    };
    C_000E51B0_W *func_001D5760();
    void func_001D5810(int a, int b, int c, int d);
    void func_001D5810(char *a, float b, float c, int d);
};

static __forceinline void SetFlags2_000E51B0(C_000E51B0_W *o) { o->f58 |= 2; }

struct C_000E51B0_G {
    char pad0[0x2ec];
    int *f2ec;
    char pad2f0[0x10];
    int *f300;
};

struct C_000E51B0_Obj {
    int func_0018C780(int a, void *b, int c);
    int *func_0018C160(char *a);
};

struct C_000E51B0_Y {
    void func_001B17D0(char *a);
};

struct BmxUIPageRiderOps {
    int w[0x900 / 4];
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(void *p,int n);
    void *func_000E51B0(int a1, int a2, int a3);
};

extern C_000E51B0_G *D_002A8490;
extern char D_0027958C[];
extern char D_00278690[];
extern char D_002786A0[];
extern char D_00278678[];
extern char D_0027FD50[];
extern char D_0027FD48[];
extern char D_0027FD40[];
extern char D_0027FD38[];
extern char D_0027FD28[];
extern char D_0027FD18[];
extern float D_00275AE8;
extern float D_0027FD58;
extern float D_00276228;
void *BmxUIPageRiderOps::func_000E51B0(int a1,int a2,int a3) {
func_001BE4F0(a1,a2,a3);
char *res=D_0027958C;
((C_000E51B0_Obj*)D_002A8490->f2ec)->func_0018C780(1,&res,0);
((C_000E51B0_Obj*)D_002A8490->f2ec)->func_0018C160(D_00278690);
int *p=((C_000E51B0_Obj*)D_002A8490->f2ec)->func_0018C160(D_002786A0);
int value=p?*p:0;
((C_000E51B0_Obj*)D_002A8490->f2ec)->func_0018C160(D_00278678);
((C_000E51B0_Obj*)D_002A8490->f2ec)->func_0018C160(D_0027958C);
for(a3=0,a1=0;a1<100;++a3,a1+=20) {
float &t=*(float*)&a2; float y;
{ C_000E51B0_W *o=(C_000E51B0_W*)func_001E8A44(100); w[325+a3]=(int)(o?o->func_001D5760():0); }
t=a3*20.0f; y=t+231.0f;
((C_000E51B0_W*)w[325+a3])->func_001D5810(D_0027FD50,165.0f,y,0);
{C_000E51B0_W *o=((C_000E51B0_W*)w[325+a3]); if(o->w[13]!=1065353216) {o->w[13]=1065353216; ((unsigned char*)o)[0x58]|=1;}
}
{C_000E51B0_W *o=((C_000E51B0_W*)w[325+a3]); if(o->w[11]!=1096810496) {o->w[11]=1096810496; ((unsigned char*)o)[0x58]|=1;}
}
{C_000E51B0_W *o=((C_000E51B0_W*)w[325+a3]); o->w[14]=(o->w[14]&4284114059u)|5923979; ((unsigned char*)o)[0x58]|=2;
}
{ C_000E51B0_W *o=(C_000E51B0_W*)func_001E8A44(100); w[330+a3]=(int)(o?o->func_001D5760():0); }
((C_000E51B0_W*)w[330+a3])->func_001D5810(D_0027FD50,164.0f,t+230.0f,0);
{C_000E51B0_W *o=((C_000E51B0_W*)w[330+a3]); if(o->w[11]!=1098907648) {o->w[11]=1098907648; ((unsigned char*)o)[0x58]|=1;}
}
{C_000E51B0_W *o=((C_000E51B0_W*)w[330+a3]); if(o->w[10]!=0x42fe0000) {o->w[10]=0x42fe0000; ((unsigned char*)o)[0x58]|=1;}
}
{C_000E51B0_W *o=((C_000E51B0_W*)w[330+a3]); o->w[14]=(o->w[14]&4279505940u)|(int)&D_00141414; ((unsigned char*)o)[0x58]|=2;
}
{C_000E51B0_W *o=((C_000E51B0_W*)w[330+a3]); if(o->w[13]!=1084227584) {o->w[13]=1084227584; ((unsigned char*)o)[0x58]|=1;}
}
{ C_000E51B0_W *o=(C_000E51B0_W*)func_001E8A44(100); w[335+a3]=(int)(o?o->func_001D5760():0); }
((C_000E51B0_W*)w[335+a3])->func_001D5810(D_0027FD50,165.0f,y,0);
{C_000E51B0_W *o=((C_000E51B0_W*)w[335+a3]); if(o->w[13]!=1077936128) {o->w[13]=1077936128; ((unsigned char*)o)[0x58]|=1;}
}
{C_000E51B0_W *o=((C_000E51B0_W*)w[335+a3]); if(o->w[11]!=1096810496) {o->w[11]=1096810496; ((unsigned char*)o)[0x58]|=1;}
}
{C_000E51B0_W *o=((C_000E51B0_W*)w[335+a3]); o->w[14]=(o->w[14]&4284517210u)|6327130; ((unsigned char*)o)[0x58]|=2;
}
{ C_000E51B0_W *o=(C_000E51B0_W*)func_001E8A44(100); w[340+a3]=(int)(o?o->func_001D5760():0); }
((C_000E51B0_W*)w[340+a3])->func_001D5810(D_0027FD50,165.0f,y,0);
{C_000E51B0_W *o=((C_000E51B0_W*)w[340+a3]); if(o->w[13]!=1077936128) {o->w[13]=1077936128; ((unsigned char*)o)[0x58]|=1;}
}
{C_000E51B0_W *o=((C_000E51B0_W*)w[340+a3]); if(o->w[11]!=1096810496) {o->w[11]=1096810496; ((unsigned char*)o)[0x58]|=1;}
}
{C_000E51B0_W *o=((C_000E51B0_W*)w[340+a3]); o->w[14]=(o->w[14]&4287257189u)|9067109; ((unsigned char*)o)[0x58]|=2;
}
*(float*)&w[0x58c/4+a3]=t+229.0f;
RiderText *text=(RiderText*)func_001E8A44(388);
w[0x578/4+a3]=(int)(text?text->func_001B12C0(1):0);
((RiderText*)w[0x578/4+a3])->func_001B13A0(D_002786A0,D_002786A0,0,15);
((RiderText*)w[0x578/4+a3])->func_001B1A30(159.0f,*(float*)&w[0x58c/4+a3],0);
((RiderText*)w[0x578/4+a3])->func_001B2270(0xffcccccc);
((RiderText*)w[0x578/4+a3])->func_001B19A0(D_0028F5EC);
func_001577A0((void*)w[0x578/4+a3],-1);
RiderLabel *label=(RiderLabel*)func_001E8A44(96);
w[0x564/4+a3]=(int)(label?label->func_001D5E90():0);
((RiderLabel*)w[0x564/4+a3])->func_001D5FA0(value,D_002786A0,5,0);
label=(RiderLabel*)w[0x564/4+a3];
float yy=a1+231.0f;
if(label->w[1]!=0x43938000||*(float*)&label->w[2]!=yy) {label->w[1]=0x43938000; *(float*)&label->w[2]=yy; ((unsigned char*)label)[0x4e]|=6;}
label=(RiderLabel*)w[0x564/4+a3];
if(label->w[18]!=0xffcccccc) {((unsigned char*)label)[0x4e]|=8; label->w[18]=(label->w[18]&0xffcccccc)|0xcccccc;}
}
((C_000E51B0_Y*)w[0x578/4+0])->func_001B17D0(D_0027FD48);
((C_000E51B0_Y*)w[0x578/4+1])->func_001B17D0(D_0027FD40);
((C_000E51B0_Y*)w[0x578/4+2])->func_001B17D0(D_0027FD38);
((C_000E51B0_Y*)w[0x578/4+3])->func_001B17D0(D_0027FD28);
((C_000E51B0_Y*)w[0x578/4+4])->func_001B17D0(D_0027FD18);
w[0x354/4]=0x42fe0000;
for(int j1744=0;j1744<4;++j1744) {C_000E51B0_W *o=(C_000E51B0_W*)func_001E8A44(100); w[436+j1744]=(int)(o?o->func_001D5760():0);}
((C_000E51B0_W*)w[436])->func_001D5810(D_00279AF0,120.0f,115.0f,0); {C_000E51B0_W *o=(C_000E51B0_W*)w[436]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
((C_000E51B0_W*)w[437])->func_001D5810(D_00279AF0,120.0f,154.0f,0); {C_000E51B0_W *o=(C_000E51B0_W*)w[437]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
((C_000E51B0_W*)w[438])->func_001D5810(D_00279AD0,140.0f,115.0f,0); {C_000E51B0_W *o=(C_000E51B0_W*)w[438]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
((C_000E51B0_W*)w[439])->func_001D5810(D_00279AD0,140.0f,154.0f,0); {C_000E51B0_W *o=(C_000E51B0_W*)w[439]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
for(int j1760=0;j1760<4;++j1760) {C_000E51B0_W *o=(C_000E51B0_W*)func_001E8A44(100); w[440+j1760]=(int)(o?o->func_001D5760():0);}
((C_000E51B0_W*)w[440])->func_001D5810(D_00279B00,120.0f,115.0f,0); {C_000E51B0_W *o=(C_000E51B0_W*)w[440]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
((C_000E51B0_W*)w[441])->func_001D5810(D_00279B00,120.0f,154.0f,0); {C_000E51B0_W *o=(C_000E51B0_W*)w[441]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
((C_000E51B0_W*)w[442])->func_001D5810(D_00279AE0,140.0f,115.0f,0); {C_000E51B0_W *o=(C_000E51B0_W*)w[442]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
((C_000E51B0_W*)w[443])->func_001D5810(D_00279AE0,140.0f,154.0f,0); {C_000E51B0_W *o=(C_000E51B0_W*)w[443]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
int n=0; a3=n;
do {
float &dy=*(float*)&a3;
{RiderText *o=(RiderText*)func_001E8A44(388); w[360+n]=(int)(o?o->func_001B12C0(1):0);}
((RiderText*)w[360+n])->func_001B13A0(D_002786A0,D_002786A0,0,50);
func_001577A0((void*)w[360+n],-1);
((RiderText*)w[360+n])->func_001B2270(0xffcccccc);
dy=a3*15.0f;
((RiderText*)w[360+n])->func_001B1A30(20.0f,dy+100.0f,0);
((RiderText*)w[360+n])->func_001B19A0(D_0028F5DC);
((RiderText*)w[360+n])->func_001B1B30(0.9f,0);
((RiderText*)w[360+n])->func_001B1AB0(1,0);
{RiderText *o=(RiderText*)func_001E8A44(388); w[395+n]=(int)(o?o->func_001B12C0(1):0);}
((RiderText*)w[395+n])->func_001B13A0(D_002786A0,D_002786A0,0,50);
func_001577A0((void*)w[395+n],-1);
((RiderText*)w[395+n])->func_001B2270(0xffcccccc);
((RiderText*)w[395+n])->func_001B1A30(20.0f,dy+85.0f,0);
((RiderText*)w[395+n])->func_001B19A0(D_0028F5DC);
((RiderText*)w[395+n])->func_001B1B30(0.9f,0);
((RiderText*)w[395+n])->func_001B1AB0(1,0);
} while(a3=++n,n<35);
{RiderText *o=(RiderText*)func_001E8A44(388); w[320]=(int)(o?o->func_001B12C0(1):0);}
((RiderText*)w[320])->func_001B13A0(D_002786A0,D_002786A0,0,25);
((RiderText*)w[320])->func_001B2270(0xffbfa35a);
((RiderText*)w[320])->func_001B1A30(160.0f,85.0f,0);
((RiderText*)w[320])->func_001B19A0(D_0028F5E0);
func_001577A0((void*)w[320],-1);
{RiderText *o=(RiderText*)func_001E8A44(388); w[208]=(int)(o?o->func_001B12C0(1):0);}
((RiderText*)w[208])->func_001B13A0(D_0027958C,D_0027958C,0,64);
func_001577A0((void*)w[208],-1);
((RiderText*)w[208])->func_001B2270(0xffcccccc);
((RiderText*)w[208])->func_001B1A30(160.0f,85.0f,0);
((RiderText*)w[208])->func_001B1AB0(255,0);
((RiderText*)w[208])->func_001B19A0(D_0028F5E0);
{RiderText *o=(RiderText*)func_001E8A44(388); w[209]=(int)(o?o->func_001B12C0(1):0);}
((RiderText*)w[209])->func_001B13A0(D_002786A0,D_002786A0,0,40);
func_001577A0((void*)w[209],-1);
((RiderText*)w[209])->func_001B2270(0xffcccccc);
((RiderText*)w[209])->func_001B1A30(170.0f,115.0f,0);
((RiderText*)w[209])->func_001B1AB0(255,0);
((RiderText*)w[209])->func_001B19A0(D_0028F5DC);
{RiderText *o=(RiderText*)func_001E8A44(388); w[210]=(int)(o?o->func_001B12C0(1):0);}
((RiderText*)w[210])->func_001B13A0(D_002786A0,D_002786A0,0,40);
func_001577A0((void*)w[210],-1);
((RiderText*)w[210])->func_001B2270(0xffcccccc);
((RiderText*)w[210])->func_001B1A30(170.0f,151.0f,0);
((RiderText*)w[210])->func_001B1AB0(255,0);
((RiderText*)w[210])->func_001B19A0(D_0028F5DC);
for(int j=0;j<6;++j) {C_000E51B0_W *o=(C_000E51B0_W*)func_001E8A44(100); w[0x6b8/4+j]=(int)(o?o->func_001D5760():0);}
((C_000E51B0_W*)w[430])->func_001D5810(D_002786B0,20.0f,110.0f,0);
{C_000E51B0_W *o=((C_000E51B0_W*)w[430]); if(o->w[10]!=0x43110000) {o->w[10]=0x43110000; ((unsigned char*)o)[0x58]|=1;}}
((C_000E51B0_W*)w[431])->func_001D5810(D_002786B0,165.0f,110.0f,0);
{C_000E51B0_W *o=((C_000E51B0_W*)w[431]); o->w[15]=0x3f800000; o->w[16]=0; o->w[17]=0; o->w[18]=0x3f800000; ((unsigned char*)o)[0x58]|=4;}
{C_000E51B0_W *o=((C_000E51B0_W*)w[431]); if(o->w[10]!=0x43110000) {o->w[10]=0x43110000; ((unsigned char*)o)[0x58]|=1;}}
((C_000E51B0_W*)w[432])->func_001D5810(D_002786B0,20.0f,149.0f,0);
{C_000E51B0_W *o=((C_000E51B0_W*)w[432]); if(o->w[10]!=0x43110000) {o->w[10]=0x43110000; ((unsigned char*)o)[0x58]|=1;}}
((C_000E51B0_W*)w[433])->func_001D5810(D_002786B0,165.0f,149.0f,0);
{C_000E51B0_W *o=((C_000E51B0_W*)w[433]); o->w[15]=0x3f800000; o->w[16]=0; o->w[17]=0; o->w[18]=0x3f800000; ((unsigned char*)o)[0x58]|=4;}
{C_000E51B0_W *o=((C_000E51B0_W*)w[433]); if(o->w[10]!=0x43110000) {o->w[10]=0x43110000; ((unsigned char*)o)[0x58]|=1;}}
((C_000E51B0_W*)w[434])->func_001D5810(D_0027F29C,20.0f,224.0f,0);
{C_000E51B0_W *o=((C_000E51B0_W*)w[434]); if(o->w[10]!=0x43110000) {o->w[10]=0x43110000; ((unsigned char*)o)[0x58]|=1;}}
{C_000E51B0_W *o=((C_000E51B0_W*)w[434]); if(o->w[13]!=0x41c80000) {o->w[13]=0x41c80000; ((unsigned char*)o)[0x58]|=1;}}
((C_000E51B0_W*)w[435])->func_001D5810(D_0027F29C,165.0f,224.0f,0);
{C_000E51B0_W *o=((C_000E51B0_W*)w[435]); if(o->w[10]!=0x43110000) {o->w[10]=0x43110000; ((unsigned char*)o)[0x58]|=1;}}
{C_000E51B0_W *o=((C_000E51B0_W*)w[435]); o->w[15]=0x3f800000; o->w[16]=0; o->w[17]=0; o->w[18]=0x3f800000; ((unsigned char*)o)[0x58]|=4;}
{C_000E51B0_W *o=((C_000E51B0_W*)w[435]); if(o->w[13]!=0x41c80000) {o->w[13]=0x41c80000; ((unsigned char*)o)[0x58]|=1;}}
{C_000E51B0_W *o=(C_000E51B0_W*)w[430]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
{C_000E51B0_W *o=(C_000E51B0_W*)w[431]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
{C_000E51B0_W *o=(C_000E51B0_W*)w[432]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
{C_000E51B0_W *o=(C_000E51B0_W*)w[433]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
{C_000E51B0_W *o=(C_000E51B0_W*)w[434]; SetFlags2_000E51B0(o); o->b[0x3b] = 0;}
{C_000E51B0_W *o=(C_000E51B0_W*)w[435]; ((unsigned char*)o)[0x3b]=0; ((unsigned char*)o)[0x58]|=2;}
{RiderText *o=(RiderText*)func_001E8A44(388); w[211]=(int)(o?o->func_001B12C0(1):0);}
((RiderText*)w[211])->func_001B13A0(D_002786A0,D_002786A0,0,15);
((RiderText*)w[211])->func_001B2270(0xffcccccc);
((RiderText*)w[211])->func_001B1A30(125.0f,115.0f,0);
((RiderText*)w[211])->func_001B1AB0(255,0);
((RiderText*)w[211])->func_001B17D0(*(char**)(*(char**)(*(char**)((char*)D_002A8490+0x2e8)+4)+4064));
((RiderText*)w[211])->func_001B19A0(D_0028F5EC);
func_001577A0((void*)w[211],-1);
{RiderText *o=(RiderText*)func_001E8A44(388); w[212]=(int)(o?o->func_001B12C0(1):0);}
((RiderText*)w[212])->func_001B13A0(D_002786A0,D_002786A0,0,15);
((RiderText*)w[212])->func_001B2270(0xffcccccc);
((RiderText*)w[212])->func_001B1A30(125.0f,151.0f,0);
((RiderText*)w[212])->func_001B1AB0(255,0);
((RiderText*)w[212])->func_001B17D0(*(char**)(*(char**)(*(char**)((char*)D_002A8490+0x2e8)+4)+4072));
((RiderText*)w[212])->func_001B19A0(D_0028F5EC);
func_001577A0((void*)w[212],-1);
{C_000E51B0_W *o=(C_000E51B0_W*)func_001E8A44(100); w[0x510/4]=(int)(o?o->func_001D5760():0);}
((C_000E51B0_W*)w[0x510/4])->func_001D5810(D_0027FD04,0.0f,70.0f,0);
{C_000E51B0_W *o=(C_000E51B0_W*)w[0x510/4]; if(o->w[11]!=0x439a0000) {o->w[11]=0x439a0000; ((unsigned char*)o)[0x58]|=1;}}
{C_000E51B0_W *o=(C_000E51B0_W*)w[0x510/4]; if(o->w[10]!=0x44200000) {o->w[10]=0x44200000; ((unsigned char*)o)[0x58]|=1;}}
{C_000E51B0_W *o=(C_000E51B0_W*)w[0x510/4]; ((unsigned char*)o)[0x3b]=128; ((unsigned char*)o)[0x58]|=2;}
{C_000E51B0_W *o=(C_000E51B0_W*)w[0x510/4]; o->w[14]&=0xff000000; ((unsigned char*)o)[0x58]|=2;}
return this;
}
extern C_000E51B0_G *D_002A8490;
extern char D_0027958C[],D_00278690[],D_002786A0[],D_00278678[],D_0027FD50[];
extern char D_0027FD48[],D_0027FD40[],D_0027FD38[],D_0027FD28[],D_0027FD18[];
extern char D_00279AF0[],D_00279AD0[],D_00279B00[],D_00279AE0[];
extern float D_00275AE8,D_0027FD58,D_00276228,D_0027FD4C;
extern int D_0028F5EC;


