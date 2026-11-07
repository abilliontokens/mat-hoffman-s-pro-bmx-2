/* 1 function from 0x0006ECC0 to 0x0006FBF0, found by Ghidra. */
#include "common.h"
extern int D_00278664,D_00278668,D_0027866C,D_00278670;
extern char D_00278674;
extern int D_002A60B0,D_002A60B4,D_002A60B8,D_002A60BC;
extern char D_002A60C0;
extern const float D_00278BD0,D_00278654,D_00275544,D_0027653C,D_00278650;
extern char D_00278C18[],D_00278658[],D_002786B0[],D_00278648[],D_00278624[],D_00278638[],D_00278608[],D_00278C0C[],D_00278BFC[],D_00278600[],D_002A5FA8[],D_002A5870[],D_00275678[],D_00278BD4[];
extern "C" char *strcpy(char *,const char *);
extern "C" void *memcpy(void *,const void *,unsigned int);
extern "C" unsigned int strlen(const char *);
extern "C" int strcmp(const char *,const char *);
int func_001ADCC0(char *,int,const char *,...);
extern char D_00278414[],D_002783F8[];

struct W_6ECC0 {
    void func_001B13A0(const char *a, const char *b, int c, int d);
    void func_001B1A30(float w, float h, int e);
    void func_001B19A0(void *p);
    void func_001B2270(unsigned int color);
    void func_001B15F0(void);
    int func_001B1800(void);
    W_6ECC0 *func_001B12C0(int a);
    void func_001B1810(float *out);
    const char *func_001B17F0();
    void func_001B17D0(const char *text);
};

struct Mgr_6ECC0 {
    char pad0[0x2E0];
    void *f2E0;
    char pad2E4[4];
    void *f2E8;
    void *f2EC;
    void func_0018C780(int count, void *arr, int flags);
    void *func_0018C160(const char *key);
};

struct Text_6ECC0 {
    char pad0[4]; float x, y; char padC[0x38];
    void *frame; unsigned int color; char pad4C[2]; unsigned char flags;
    Text_6ECC0 *func_001D5E90();
    void func_001D5FA0(void *font, const char *name, int len, void *text);
    void func_001D6190(void *font, void *text, const char *name);
    void func_0005E840(void *text);
    void setPos(float a, float b) { if (x!=a || y!=b) { y=b; x=a; flags|=6; } }
    void setColor(unsigned int c) { if(color!=c) {flags|=8; color=(color&(c|0xff000000))|(c&0xffffff); } }
    void setFrame(void *p) { if(frame!=p) {frame=p;flags|=6;} }
};
struct Sprite_6ECC0 {
    char pad0[4]; float x, y; char padC[0x18]; float scale, width, height;
    char pad30[8]; unsigned int color;
    float u0,v0,u1,v1,w,h; int mode; unsigned char flags;
    Sprite_6ECC0 *func_001D5760();
    void func_001D5810(const char *name,float x,float y,int a);
    void setPos(float a,float b) {if(x!=a || y!=b){x=a;y=b;flags|=1;}}
    void setUV(float a,float b,float c,float d) {u0=a;v1=d;v0=b;u1=c;flags|=4;}
    void setUVScaled(float a,float b,float c,float d) {flags|=4;u0=w*a;v0=w*b;u1=h*c;v1=h*d;}
    void setAlpha(unsigned char a) {((unsigned char *)&color)[3]=a;flags|=2;}
    void setWidth(float a) {if(width!=a){width=a;flags|=1;}}
    void setHeight(float a) {if(height!=a){height=a;flags|=1;}}
    void setColor(unsigned int c) {color=(color&(c|0xff000000))|(c&0xffffff);flags|=2;}
    void setScale(float s) {if(scale!=s){scale=s;if(mode)scale=s*0.5f;flags|=1;}}
};
struct Font_6ECC0 {float func_0018C210();};
struct Profile_6ECC0 { char pad[0x2c0]; const char *func_0005B870(); };

struct C_0006ECC0 {
    char pad0[0x74];
    char f74[0x28]; int f9C, fA0; char fA4[0x24];
    Sprite_6ECC0 *fC8, *fCC;
    W_6ECC0 *fD0;
    W_6ECC0 *fD4;
    Sprite_6ECC0 *fD8;
    W_6ECC0 *fDC;
    Text_6ECC0 *fE0;
    int fE4; float fE8; int fEC;
    Sprite_6ECC0 *fF0; int fF4;
    Text_6ECC0 *fF8; int fFC; Text_6ECC0 *f100;
    char pad104[0x24];
    Sprite_6ECC0 *f128,*f12C;
    Text_6ECC0 *f130[4];
    Sprite_6ECC0 *f140,*f144,*f148,*f14C,*f150[2],*f158[5],*f16C[5];
    Text_6ECC0 *f180[6];
    void func_001577A0(W_6ECC0 *w, int idx);
    void func_0006ECC0(int a);
    C_0006ECC0(int a);
};

extern Mgr_6ECC0 *D_002A8490;
extern char D_00278678[];
extern char D_00278690[];
extern float D_0028F5DC;
extern const float D_00276228;
extern void *D_0028F5E0;

void *func_001E8A44(int size);
void *func_001B12C0(void *p, int a);

C_0006ECC0::C_0006ECC0(int a)
{
    fEC = a;
    const char *keys[2] = { D_00278678, D_00278690 };
    Mgr_6ECC0 *fonts = (Mgr_6ECC0 *)D_002A8490->f2EC;
    fonts->func_0018C780(2, keys, 0);
    void *fontEntry = ((Mgr_6ECC0 *)D_002A8490->f2EC)->func_0018C160(D_00278690);
    void *font = fontEntry ? *(void **)fontEntry : 0;
    void *otherEntry = ((Mgr_6ECC0 *)D_002A8490->f2EC)->func_0018C160(D_00278678);
    void *other = otherEntry ? *(void **)otherEntry : 0;
    W_6ECC0 *w = (W_6ECC0 *)func_001E8A44(0x184);
    fD0 = w ? w->func_001B12C0(1) : 0;
    fD0->func_001B13A0(D_00278690, D_00278690, 0, 50);
    fD0->func_001B1A30(240.0f, 157.0f, 0);
    fD0->func_001B19A0(*(void **)&D_0028F5DC);
    fD0->func_001B2270(0xffbfa35a);
    fD0->func_001B15F0();
    func_001577A0(fD0, -1);
    w = (W_6ECC0 *)func_001E8A44(0x184);
    fD4 = w ? w->func_001B12C0(1) : 0;
    fD4->func_001B13A0(D_00278690, D_00278690, 0, 2);
    int width = fD0->func_001B1800();
    float pos[4];
    fD0->func_001B1810(pos);
    fD4->func_001B1A30((float)width + pos[0], 157.0f, 0);
    fD4->func_001B2270(0xffbfa35a);
    fD4->func_001B19A0(*(void **)&D_0028F5DC);
    func_001577A0(fD4, -1);

    for (int i=0;i<6;i++) {
        Text_6ECC0 *t=(Text_6ECC0 *)func_001E8A44(0x60);
        f180[i]=t?t->func_001D5E90():0;
        f180[i]->func_001D5FA0(font,D_00278690,40,0);
        f180[i]->setPos(320.0f,((Font_6ECC0 *)font)->func_0018C210()*i+D_00276228);
        f180[i]->setColor(0xffcccccc);
        f180[i]->setFrame(D_0028F5E0);
    }
    Text_6ECC0 *t=(Text_6ECC0 *)func_001E8A44(0x60);
    fF8=t?t->func_001D5E90():0;
    fF8->func_001D6190(font,(*(void ***)((char *)D_002A8490->f2E8+4))[0xf60/4],D_00278690);
    fF8->setColor(0xffbfa35a); fF8->setFrame(D_0028F5E0); fF8->setPos(320.0f,200.0f);
    t=(Text_6ECC0 *)func_001E8A44(0x60);
    f100=t?t->func_001D5E90():0;
    int mode=*(int *)((char *)D_002A8490->f2E0+4);
    if(!mode)
        f100->func_001D6190(font,(*(void ***)((char *)D_002A8490->f2E8+4))[0xfc0/4],D_00278690);
    else
        f100->func_001D6190(font,(*(void ***)((char *)D_002A8490->f2E8+4))[0xac8/4],D_00278690);
    f100->setColor(0xffcccccc); f100->setFrame(D_0028F5E0); f100->setPos(320.0f,117.0f);
    D_002A60B0=D_00278664; D_002A60B4=D_00278668; D_002A60B8=D_0027866C; D_002A60BC=D_00278670; D_002A60C0=D_00278674;
    Sprite_6ECC0 *spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
    fD8=spr?spr->func_001D5760():0;
    float spriteX=(float)(width-10)+113.0f;
    fE8=spriteX;
    fD8->func_001D5810(D_00278C18,spriteX,182.0f,0);
    fD8->setColor(0xffbfa35a);
    w=(W_6ECC0 *)func_001E8A44(0x184);
    fDC=w?w->func_001B12C0(1):0;
    fDC->func_001B13A0(D_00278690,D_00278690,0,16);
    func_001577A0(fDC,-1);
    t=(Text_6ECC0 *)func_001E8A44(0x60);
    fE0=t?t->func_001D5E90():0;
    fE0->func_001D5FA0(other,D_00278678,30,(*(void ***)((char *)D_002A8490->f2E8+4))[0xee8/4]);
    fE0->setPos(320.0f,40.0f); fE0->setColor(0xaaaaaaaa); fE0->setFrame(D_0028F5E0);
    for(int j=0;j<4;j++) {
        t=(Text_6ECC0 *)func_001E8A44(0x60);
        f130[j]=t?t->func_001D5E90():0;
        f130[j]->func_001D5FA0(font,D_00278690,10,0);
        f130[j]->setColor(0xffcccccc);
    }
    f130[0]->func_0005E840((*(void ***)((char *)D_002A8490->f2E8+4))[0x940/4]);
    f130[0]->setPos(530.0f,393.0f);
    f130[1]->func_0005E840((*(void ***)((char *)D_002A8490->f2E8+4))[0xf00/4]);
    f130[1]->setPos(258.0f,393.0f);
    f130[2]->func_0005E840((*(void ***)((char *)D_002A8490->f2E8+4))[0xef8/4]);
    f130[2]->setPos(102.0f,393.0f);
    f130[3]->func_0005E840((*(void ***)((char *)D_002A8490->f2E8+4))[0x7c0/4]);
    f130[3]->setPos(415.0f,393.0f);
    spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
    fCC=spr?spr->func_001D5760():0;
    fCC->func_001D5810(D_00278658,0.0f,398.0f,0);
    fCC->setUVScaled(127.0f,0.0f,15.0f,0.0f);
    fCC->setHeight(50.0f); fCC->setWidth(640.0f);
    spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
    fC8=spr?spr->func_001D5760():0;
    fC8->func_001D5810(D_00278658,0.0f,0.0f,0);
    fC8->setUVScaled(127.0f,0.0f,15.0f,0.0f);
    fC8->setHeight(50.0f); fC8->setWidth(640.0f);
    for(int k=0;k<5;k++) {
        spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
        float x;
        (f158[k]=spr?spr->func_001D5760():0)->func_001D5810(D_00278658,x=(float)k*D_00278650,50.0f,0);
        spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
        f16C[k]=spr?spr->func_001D5760():0;
        f16C[k]->func_001D5810(D_00278658,x,366.0f,0);
        f16C[k]->setUV(0,1,0.99f,0);
    }
    for(int n=0;n<2;n++) {spr=(Sprite_6ECC0 *)func_001E8A44(0x64);f150[n]=spr?spr->func_001D5760():0;}
    f150[0]->func_001D5810(D_002786B0,100.0f,150.0f,0);
    f150[1]->func_001D5810(D_002786B0,321.0f,150.0f,0);
    f150[1]->setUV(1,0,0,1);
    f150[0]->setWidth(221.0f);f150[0]->setColor(0xffbfa35a);
    f150[1]->setWidth(221.0f);f150[1]->setColor(0xffbfa35a);
    spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
    f140=spr?spr->func_001D5760():0;
    f140->func_001D5810(D_00278648,0.0f,0.0f,0);
    f140->setPos(491.0f,388.0f);
    spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
    f128=spr?spr->func_001D5760():0;
    f128->func_001D5810(D_00278624,0.0f,0.0f,0);
    f128->setPos(491.0f,388.0f);
    spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
    f14C=spr?spr->func_001D5760():0;
    f14C->func_001D5810(D_00278638,0.0f,0.0f,0);
    f14C->setPos(379.0f,388.0f);
    spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
    f12C=spr?spr->func_001D5760():0;
    f12C->func_001D5810(D_00278608,0.0f,0.0f,0);
    f12C->setPos(379.0f,388.0f);
    spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
    f144=spr?spr->func_001D5760():0;
    f144->func_001D5810(D_00278C0C,55.0f,385.0f,0);
    f144->setScale(0.65f);
    spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
    f148=spr?spr->func_001D5760():0;
    f148->func_001D5810(D_00278BFC,210.0f,385.0f,0);
    f148->setScale(0.65f);
    spr=(Sprite_6ECC0 *)func_001E8A44(0x64);
    fF0=spr?spr->func_001D5760():0;
    fF0->func_001D5810(D_00278600,0.0f,0.0f,0);
    fF0->setColor(0); fF0->setAlpha(128);
    fF0->setHeight(448.0f); fF0->setWidth(640.0f);
    func_001ADCC0((char *)&D_002A60B0,260,D_00275678,D_002A5870,D_002A5FA8);
    memcpy(f74,D_00278BD4,37);
    f9C=strlen(f74);
    fA0=strlen(fD0->func_001B17F0());
    char name[16];
    strcpy(name,((Profile_6ECC0 *)*(void **)((char *)D_002A8490->f2E0+0x2c0))->func_0005B870());
    if(strcmp(name," ")==0) {
        switch(*(unsigned int *)((char *)D_002A8490->f2E0+0x190)) {
        case 0: strcpy(name,"mat");break;
        case 1: strcpy(name,"girl");break;
        case 2: strcpy(name,"joe");break;
        case 3: strcpy(name,"mime");break;
        case 4: memcpy(name,D_00278414,5);break;
        case 5: memcpy(name,D_002783F8,5);break;
        case 6: strcpy(name,"day");break;
        case 7: strcpy(name,"simon");break;
        case 8: strcpy(name,"volcano");break;
        case 9: strcpy(name,"kevin");break;
        case 10: strcpy(name,"cory");break;
        case 11: strcpy(name,"ruben");break;
        case 12: strcpy(name,"big");break;
        case 13: strcpy(name,"seth");break;
        case 14: strcpy(name,"nate");break;
        case 15: strcpy(name,"chad");break;
        }
    }
    fD0->func_001B17D0(name);
    char *dest=fA4;
    const char *src=name;
    do {
        *dest++=*src;
    } while(*src++);
    fA0=strlen(fD0->func_001B17F0());
    fD4->func_001B17D0(fA4+fA0-1);
    fA4[fA0-1]=0;
    fD0->func_001B17D0(fA4);
}

