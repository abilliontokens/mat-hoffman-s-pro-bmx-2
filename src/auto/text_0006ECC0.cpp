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

void C_0006ECC0::func_0006ECC0(int a)
{
    char *keys[2];
    int n;
    int m2;
    W_6ECC0 *w;

    fEC = a;
    keys[0] = D_00278678;
    keys[1] = D_00278690;
    D_002A8490->func_0018C780(2, keys, 0);
    {
        void *p = D_002A8490->func_0018C160(D_00278690);
        n = p ? *(int *)p : 0;
    }
    {
        void *p = D_002A8490->func_0018C160(D_00278678);
        m2 = p ? *(int *)p : 0;
    }
    w = (W_6ECC0 *)func_001E8A44(0x184);
    w = w ? (W_6ECC0 *)func_001B12C0(w, 1) : 0;
    fD0 = w;
    w->func_001B13A0(D_00278690, D_00278690, 0, 0x32);
    w->func_001B1A30(240.0f, 157.0f, 0);
    w->func_001B19A0(&D_0028F5DC);
    w->func_001B2270(0xffbfa35a);
    w->func_001B15F0();
    func_001577A0(w, -1);
}

