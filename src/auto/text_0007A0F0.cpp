/* 1 function from 0x0007A0F0 to 0x0007BAD0, found by Ghidra. */
#include "common.h"
#include <string.h>

/* sprite widget (0x64 bytes) */
struct C_0007A0F0_W {
    union {
        int w[0x60 / 4];
        struct {
            char pad0[4];
            int f4;
            int f8;
            char padC[0x28 - 0xc];
            int f28;
            int f2C;
            char pad30[0x3c - 0x30];
            float f3C;
            float f40;
            float f44;
            float f48;
            float f4C;
            float f50;
            char pad54[4];
            unsigned char f58;
        };
    };
    C_0007A0F0_W *func_001D5760(void);
    void func_001D5810(int a, int b, int c, int d);
    void func_001D5810(const char *s, float x, float y, int z);
};

/* label widget (0x60 bytes) */
struct C_0007A0F0_L {
    union {
        int w[0x60 / 4];
        struct {
            char pad0[4];
            int f4;
            int f8;
            char padC[0x44 - 0xc];
            int f44;
            int f48;
            char pad4C[2];
            unsigned char f4E;
        };
    };
    C_0007A0F0_L *func_001D5E90(void);
    void func_001D5FA0(int a, int b, int c, int d);
    void func_001D5FA0(int font, const char *s, int a, int b);
    void func_0005E840(int a);
    void func_001D6190(int,int,const char *);
    float func_0018C210();
};

struct MenuSetup7 { union { int fontId; float yy; }; int count1, count2, title, key; };
struct C_0007A0F0_Obj {
    int func_0018C780(int a, void *b, int c);
    int *func_0018C160(char *a);
};

struct C_0007A0F0_Sub {
    char pad0[0x9b8];
    int f9B8;
    char pad9bc[0xf08 - 0x9bc];
    int fF08;
};
struct C_0007A0F0_Pair {
    char pad0[4];
    C_0007A0F0_Sub *f4;
};
struct C_0007A0F0_Root {
    char pad0[0x2e8];
    C_0007A0F0_Pair *f2e8;
    C_0007A0F0_Obj *f2ec;
};

struct BmxObjectivesMenu {
    union {
        int w[0x900 / 4];
        struct {
            char pad0[0xfc];
            C_0007A0F0_W *f0FC;
            C_0007A0F0_W *f100;
            char pad104[4];
            C_0007A0F0_W *f108;
            C_0007A0F0_W *f10C;
            C_0007A0F0_W *f110;
            C_0007A0F0_W *f114;
            C_0007A0F0_W *f118;
            C_0007A0F0_W *f11C;
            char pad120[0x17c - 0x120];
            C_0007A0F0_W *f17C[5];
            C_0007A0F0_W *f190[5];
            char pad1a4[0x1b4 - 0x1a4];
            C_0007A0F0_W *f1B4;
            C_0007A0F0_W *f1B8;
            C_0007A0F0_L *f1BC[2];
            C_0007A0F0_L *f1C4;
            char pad1c8[0x1d0 - 0x1c8];
            int f1D0;
            char pad1d4[0x200 - 0x1d4];
            C_0007A0F0_L *f200;
        };
    };
    void *func_0007A0F0(int a);
    void func_00061B80();
    void func_001577A0(void *,int);
};

extern C_0007A0F0_Root *D_002A8490;
extern char D_00278648[], D_00278624[], D_00278638[], D_00278608[], D_00279008[];
extern char D_00278FF0[], D_00278FE0[], D_00278FD0[];
void *func_001E8A44(unsigned int size);
extern char D_00278678[];
extern char D_002786A0[];
extern char D_00278690[];
extern char D_00278658[];
extern int D_00279018;
extern int D_0027901C;
extern int D_00279020;
extern int D_00279024;
extern int D_002A60B0;
extern int D_002A60B4;
extern int D_002A60B8;
extern int D_002A60BC;
extern float D_00278654;
extern float D_00275544;
extern float D_0027653C;
extern float D_00278650;
extern int D_0028F5E0;
extern int D_0028F5DC;

static __forceinline void SetSpriteUV7(C_0007A0F0_W *p,float a,float b,float c,float d) {
 p->f44=c; p->f48=d; p->f3C=a; p->f40=b; p->f58|=4;
}
static __forceinline void SetSpriteUV7B(C_0007A0F0_W *p,float a,float b,float c,float d) {
 p->f3C=a; p->f40=b; p->f44=c; p->f48=d; p->f58|=4;
}
static __forceinline C_0007A0F0_W *CreateSprite7() {
 C_0007A0F0_W *p=(C_0007A0F0_W *)func_001E8A44(0x64);
 return p ? p->func_001D5760() : 0;
}
static __forceinline C_0007A0F0_L *CreateLabel7() {
 C_0007A0F0_L *p=(C_0007A0F0_L *)func_001E8A44(0x60);
 return p ? p->func_001D5E90() : 0;
}
struct Button7 {
 Button7 *func_001B12C0(int);
 void func_001B13A0(const char *,const char *,int,int);
 void func_001B1580(const char *,const char *,int,int);
};
static __forceinline Button7 *CreateButton7() {
 Button7 *p=(Button7 *)func_001E8A44(0x184);
 return p ? p->func_001B12C0(1) : 0;
}
extern "C" int func_001ADCC0(void *,int,const char *,void *,void *);
extern "C" void func_00160C20(int *,int);
extern char D_002A5FA8[],D_002A5870[],D_00275678[],D_00275630[];
extern const float D_002784FC,D_002779FC,D_00275800,D_00278AE8,D_00278F68,D_002756C8,D_00278F64,D_00278D40,D_00278F60;
extern char D_00278600[];
extern char D_00278FC4[];
extern char D_00278FB8[];
extern char D_00278FAC[];
extern char D_00278FA4[];
extern char D_00278F9C[];
extern char D_00278F94[];
extern char D_00278F8C[];
extern char D_00278F7C[];
extern char D_00278F6C[];
void *BmxObjectivesMenu::func_0007A0F0(int a)
{
    C_0007A0F0_Obj *obj;
    int *found;
    int font, key, title;
    int counter;
    int n1, n2;
    int i;
    C_0007A0F0_W *wid;
    C_0007A0F0_L *lab;
    int **slot;

    w[0x1d0 / 4] = a;
    key = (int)D_00278678;
    D_002A8490->f2ec->func_0018C780(1, &key, 0);
    obj = (C_0007A0F0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    obj->func_0018C160(D_002786A0);
    obj = (C_0007A0F0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    found = obj->func_0018C160(D_00278690);
    if (found != 0) {
        font = *found;
    } else {
        font = 0;
    }
    obj = (C_0007A0F0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    found = obj->func_0018C160(D_00278678);
    if (found != 0) {
        title = *found;
    } else {
        title = 0;
    }
    D_002A60B0 = D_00279018;
    D_002A60B4 = D_0027901C;
    D_002A60B8 = D_00279020;
    D_002A60BC = D_00279024;
    w[0xfc / 4] = (int)CreateSprite7();
    ((C_0007A0F0_W *)w[0xfc/4])->func_001D5810((int)D_00278658, 0, 0, 0);
    wid = (C_0007A0F0_W *)w[0xfc/4];
    {
        float t = wid->f4C * 127.0f;
        *(float *)((char *)wid + 0x3c) = t;
        *(char *)((char *)wid + 0x58) |= 4;
        *(float *)((char *)wid + 0x40) = *(float *)((char *)wid + 0x4c) * 0.0f;
        *(float *)((char *)wid + 0x44) = *(float *)((char *)wid + 0x50) * 15.0f;
        *(float *)((char *)wid + 0x48) = *(float *)((char *)wid + 0x50) * 0.0f;
    }
    wid = (C_0007A0F0_W *)w[0xfc/4];
    if (wid->w[0x2c / 4] != 0x42480000) {
        wid->w[0x2c / 4] = 0x42480000;
        *((char *)wid + 0x58) |= 1;
    }
    wid = (C_0007A0F0_W *)w[0xfc/4];
    if (wid->w[0x28 / 4] != 0x44200000) {
        wid->w[0x28 / 4] = 0x44200000;
        *((char *)wid + 0x58) |= 1;
    }
    w[0x100 / 4] = (int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x100/4])->func_001D5810((int)D_00278658, 0, 0x43c70000, 0);
    wid = (C_0007A0F0_W *)w[0x100/4];
    {
        float t = *(float *)((char *)wid + 0x4c) * 127.0f;
        *(float *)((char *)wid + 0x3c) = t;
        *(char *)((char *)wid + 0x58) |= 4;
        *(float *)((char *)wid + 0x40) = *(float *)((char *)wid + 0x4c) * 0.0f;
        *(float *)((char *)wid + 0x44) = *(float *)((char *)wid + 0x50) * 15.0f;
        *(float *)((char *)wid + 0x48) = *(float *)((char *)wid + 0x50) * 0.0f;
    }
    wid = (C_0007A0F0_W *)w[0x100/4];
    if (wid->w[0x28 / 4] != 0x44200000) {
        wid->w[0x28 / 4] = 0x44200000;
        *((char *)wid + 0x58) |= 1;
    }
    wid = (C_0007A0F0_W *)w[0x100/4];
    if (wid->w[0x2c / 4] != 0x42480000) {
        wid->w[0x2c / 4] = 0x42480000;
        *((char *)wid + 0x58) |= 1;
    }
    counter = 0;
    slot = (int **)((char *)this + 0x190);
    for (; counter < 5;) {
        float x;
        wid = (C_0007A0F0_W *)func_001E8A44(0x64);
        if (wid != 0) {
            wid = wid->func_001D5760();
        } else {
            wid = 0;
        }
        x = (float)counter * 128.0f;
        slot[-5] = (int *)wid;
        wid->func_001D5810(D_00278658, x, 50.0f, 0);
        wid = (C_0007A0F0_W *)func_001E8A44(0x64);
        if (wid != 0) {
            wid = wid->func_001D5760();
        } else {
            wid = 0;
        }
        slot[0] = (int *)wid;
        wid->func_001D5810(D_00278658, x, 366.0f, 0);
        wid = (C_0007A0F0_W *)slot[0];
        wid->w[0x3c / 4] = 0;
        wid->w[0x48 / 4] = 0;
        wid->w[0x40 / 4] = 0x3f800000;
        wid->w[0x44 / 4] = 0x3f7d70a4;
        *((char *)wid + 0x58) |= 4;
        counter++;
        slot++;
    }
    lab = CreateLabel7();
    w[0x200 / 4] = (int)lab;
    lab->func_001D5FA0(title, (int)D_00278678, 0x18, 0);
    lab = (C_0007A0F0_L *)w[0x200/4];
    if (lab->w[4 / 4] != 0x43a00000 || lab->w[8 / 4] != 0x42200000) {
        lab->w[8 / 4] = 0x42200000;
        lab->w[4 / 4] = 0x43a00000;
        *((char *)lab + 0x4e) |= 6;
    }
    lab = (C_0007A0F0_L *)w[0x200/4];
    { unsigned c=lab->f48; if(c!=0xffcccccc) {lab->f4E|=8; lab->f48=(c&0xffcccccc)|0xcccccc;} }
    lab = (C_0007A0F0_L *)w[0x200/4];
    if (lab->w[0x44 / 4] != D_0028F5E0) {
        lab->w[0x44 / 4] = D_0028F5E0;
        *((char *)lab + 0x4e) |= 6;
    }
    lab = CreateLabel7();
    w[0x1c4 / 4] = (int)lab;
    lab->func_001D5FA0(font, (int)D_00278690, 0x14, 0);
    lab = (C_0007A0F0_L *)w[0x1c4/4];
    if (lab->w[4 / 4] != 0x41a00000 || lab->w[8 / 4] != 0x43c48000) {
        lab->w[4 / 4] = 0x41a00000;
        lab->w[8 / 4] = 0x43c48000;
        *((char *)lab + 0x4e) |= 6;
    }
    lab = (C_0007A0F0_L *)w[0x1c4/4];
    { unsigned c=lab->f48; if(c!=0xff5eff5e) {lab->f4E|=8; lab->f48=(c&0xff5eff5e)|0x5eff5e;} }
    lab = (C_0007A0F0_L *)w[0x1c4/4];
    if (lab->w[0x44 / 4] != D_0028F5DC) {
        lab->w[0x44 / 4] = D_0028F5DC;
        *((char *)lab + 0x4e) |= 6;
    }
    w[0x114/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x114/4])->func_001D5810((int)D_00278648,0x43f58000,0x43c20000,0);
    w[0x108/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x108/4])->func_001D5810((int)D_00278624,0x43f58000,0x43c20000,0);
    w[0x118/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x118/4])->func_001D5810((int)D_00278638,0x43b68000,0x43c20000,0);
    w[0x10c/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x10c/4])->func_001D5810((int)D_00278608,0x43b68000,0x43c20000,0);
    w[0x11c/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x11c/4])->func_001D5810((int)D_00279008,0x436b0000,0x43c20000,0);
    w[0x110/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x110/4])->func_001D5810((int)D_00278FF0,0x436b0000,0x43c20000,0);
    w[0x1b4/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x1b4/4])->func_001D5810((int)D_00278FE0,0x41d00000,0x43bf0000,0);
    w[0x1b8/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x1b8/4])->func_001D5810((int)D_00278FD0,0x43310000,0x43bf0000,0);
    { C_0007A0F0_L **slot=f1BC; int n=2; do {
        *slot=CreateLabel7(); (*slot)->func_001D5FA0(font,(int)D_00278690,6,0);
        C_0007A0F0_L *p=*slot; unsigned c=p->f48;
        if(c!=0xffcccccc) { p->f4E|=8; p->f48=(c&0xffcccccc)|0xcccccc; }
        ++slot;
    } while(--n); }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x1bc/4]); if(p->f4!=0x429c0000 || p->f8!=0x43c48000) { p->f4=0x429c0000; p->f8=0x43c48000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x1c0/4]); if(p->f4!=0x43650000 || p->f8!=0x43c48000) { p->f4=0x43650000; p->f8=0x43c48000; p->f4E|=6; } }
    f1BC[0]->func_0005E840(*(int *)((char *)D_002A8490->f2e8->f4+0xf08));
    f1BC[1]->func_0005E840(*(int *)((char *)D_002A8490->f2e8->f4+0x9b8));
    w[0x1ec/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x1ec/4])->func_001D5810((int)D_00278600,0,0,0);
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1ec/4]); p->w[0x38/4]&=0xff000000; p->f58|=2; }
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1ec/4]); *((char *)p+0x3b)=0x40; p->f58|=2; }
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1ec/4]); if(p->w[0x34/4]!=0x41200000) { p->w[0x34/4]=0x41200000; p->f58|=1; } }
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1ec/4]); if(p->w[0x2c/4]!=0x43e00000) { p->w[0x2c/4]=0x43e00000; p->f58|=1; } }
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1ec/4]); if(p->w[0x28/4]!=0x44200000) { p->w[0x28/4]=0x44200000; p->f58|=1; } }
    w[0x1f0/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x1f0/4])->func_001D5810((int)D_00278FC4,0x41a00000,0x42c00000,0);
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1f0/4]); if(p->w[0x34/4]!=0x40000000) { p->w[0x34/4]=0x40000000; p->f58|=1; } }
    wid=CreateSprite7();
    w[0x1f4/4]=(int)wid; wid->func_001D5810(D_00278FB8,0.0f,-D_002784FC,0);

    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1f4/4]); if(p->w[0x28/4]!=0x43800000) { p->w[0x28/4]=0x43800000; p->f58|=1; } }
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1f4/4]); if(p->w[0x2c/4]!=0x43800000) { p->w[0x2c/4]=0x43800000; p->f58|=1; } }
    SetSpriteUV7(((C_0007A0F0_W *)w[0x1f4/4]),0.0f,640.0f,D_002784FC,D_002784FC+448.0f);
    w[0x12c/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x12c/4])->func_001D5810((int)D_00278FAC,0,0,0);
    w[0x1a4/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x1a4/4])->func_001D5810((int)D_00278FA4,0,0,0);
    w[0x130/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x130/4])->func_001D5810((int)D_00278FAC,0,0,0);
    w[0x1a8/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x1a8/4])->func_001D5810((int)D_00278F9C,0,0,0);
    w[0x134/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x134/4])->func_001D5810((int)D_00278FAC,0,0,0);
    w[0x1ac/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x1ac/4])->func_001D5810((int)D_00278F94,0,0,0);
    w[0x138/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x138/4])->func_001D5810((int)D_00278FAC,0,0,0);
    w[0x1b0/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x1b0/4])->func_001D5810((int)D_00278F8C,0,0,0);
    wid=CreateSprite7();
    w[0x1fc/4]=(int)wid; wid->func_001D5810(D_00278F7C,0.0f,-D_002784FC,0);

    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1fc/4]); if(p->w[0x28/4]!=0x43000000) { p->w[0x28/4]=0x43000000; p->f58|=1; } }
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1fc/4]); if(p->w[0x2c/4]!=0x43000000) { p->w[0x2c/4]=0x43000000; p->f58|=1; } }
    SetSpriteUV7(((C_0007A0F0_W *)w[0x1fc/4]),0.0f,640.0f,D_002784FC,D_002784FC+448.0f);
    w[0x1f8/4]=(int)CreateSprite7();
    ((C_0007A0F0_W *)w[0x1f8/4])->func_001D5810((int)D_00278F6C,0,0,0);
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1f8/4]); if(p->w[0x28/4]!=0x44200000) { p->w[0x28/4]=0x44200000; p->f58|=1; } }
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1f8/4]); if(p->w[0x2c/4]!=0x43e00000) { p->w[0x2c/4]=0x43e00000; p->f58|=1; } }
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1f8/4]); if(p->w[0x34/4]!=0x41200000) { p->w[0x34/4]=0x41200000; p->f58|=1; } }
    { C_0007A0F0_W *p=((C_0007A0F0_W *)w[0x1f8/4]); p->w[0x38/4]=(p->w[0x38/4]&0xff7f7f7f)|0x7f7f7f; p->f58|=2; }
    func_00061B80();
    func_001ADCC0(&D_002A60B0,0x104,D_00275678,D_002A5870,D_002A5FA8);
    w[0x2ac/4]=(int)CreateLabel7();
    { C_0007A0F0_Root *r=D_002A8490;
      ((C_0007A0F0_L *)w[0x2ac/4])->func_001D6190(font,
      *(int *)(*(char **)((char *)r+0x2e0)+4)==0 ?
      *(int *)((char *)r->f2e8->f4+0xfc0) :
      *(int *)((char *)r->f2e8->f4+0xac8),D_00278690); }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2ac/4]); if(p->f4!=0x43a00000 || p->f8!=0x42ea0000) { p->f4=0x43a00000; p->f8=0x42ea0000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2ac/4]); unsigned c=p->f48; if(c!=0xffcccccc) { p->f4E|=8; p->f48=(c&0xffcccccc)|0xcccccc; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2ac/4]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    w[0x6c/4]=(int)CreateButton7();
    ((Button7 *)w[0x6c/4])->func_001B13A0(D_00278690,D_00278690,0,18);
    func_001577A0((void *)w[0x6c/4],-1);
    w[0x80/4]=(int)CreateButton7();
    ((Button7 *)w[0x80/4])->func_001B13A0(D_00278690,D_00278690,0,21);
    func_001577A0((void *)w[0x80/4],-1);
    w[0x70/4]=(int)CreateButton7();
    ((Button7 *)w[0x70/4])->func_001B13A0(D_00278690,D_00278690,0,6);
    func_001577A0((void *)w[0x70/4],-1);
    w[0x7c/4]=(int)CreateButton7();
    ((Button7 *)w[0x7c/4])->func_001B1580(D_00278690,D_00278690,*(int *)((char *)D_002A8490->f2e8->f4+0x780),0);
    func_001577A0((void *)w[0x7c/4],-1);
    w[0x78/4]=(int)CreateButton7();
    ((Button7 *)w[0x78/4])->func_001B1580(D_00278690,D_00278690,*(int *)((char *)D_002A8490->f2e8->f4+0x7e0),0);
    func_001577A0((void *)w[0x78/4],-1);
    w[0x74/4]=(int)CreateButton7();
    ((Button7 *)w[0x74/4])->func_001B1580(D_00278690,D_00278690,*(int *)((char *)D_002A8490->f2e8->f4+0xf20),0);
    func_001577A0((void *)w[0x74/4],-1);
    for(counter=0;counter<15;++counter) {
    w[0x84/4+counter]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x84/4+counter])->func_001D5FA0(font,(int)D_00278690,45,0);
    { float y=(float)counter*D_00275800+D_00278AE8; C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x84/4+counter]); if(p->f4!=0x43a00000 || *(float *)&p->f8!=y) { p->f4=0x43a00000; *(float *)&p->f8=y; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x84/4+counter]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    }
    w[0x204/4]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x204/4])->func_001D5FA0(font,(int)D_00278690,45,0);
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x204/4]); if(p->f4!=0x43a00000 || p->f8!=0x43600000) { p->f4=0x43a00000; p->f8=0x43600000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x204/4]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x204/4]); unsigned c=p->f48; if(c!=0xffcccccc) { p->f4E|=8; p->f48=(c&0xffcccccc)|0xcccccc; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x204/4]); if(p->w[0x34/4]!=0x3f800000) {p->w[0x34/4]=0x3f800000;p->f4E|=6;} }
    w[0x20c/4]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x20c/4])->func_001D6190(font,*(int *)((char *)D_002A8490->f2e8->f4+0xdb0),D_00278690);
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x20c/4]); if(p->f4!=0x43a00000 || p->f8!=0x43600000) { p->f4=0x43a00000; p->f8=0x43600000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x20c/4]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x20c/4]); unsigned c=p->f48; if(c!=0xffbfa35a) { p->f4E|=8; p->f48=(c&0xffbfa35a)|0xbfa35a; } }
    w[0x210/4]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x210/4])->func_001D6190(font,*(int *)((char *)D_002A8490->f2e8->f4+0xdb8),D_00278690);
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x210/4]); if(p->f4!=0x43a00000 || p->f8!=0x43600000) { p->f4=0x43a00000; p->f8=0x43600000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x210/4]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x210/4]); unsigned c=p->f48; if(c!=0xffbfa35a) { p->f4E|=8; p->f48=(c&0xffbfa35a)|0xbfa35a; } }
    w[0x120/4]=(int)CreateLabel7();
    { a=0;
      func_00160C20(&a,*(int *)((char *)D_002A8490->f2e8->f4+0x7c8));
      func_00160C20(&a,*(int *)((char *)D_002A8490->f2e8->f4+0x7a0));
      func_00160C20(&a,*(int *)((char *)D_002A8490->f2e8->f4+0x940));
      func_00160C20(&a,*(int *)((char *)D_002A8490->f2e8->f4+0x7b8));
      func_00160C20(&a,*(int *)((char *)D_002A8490->f2e8->f4+0x798));
      func_00160C20(&a,*(int *)((char *)D_002A8490->f2e8->f4+0x7f0));
      func_00160C20(&a,*(int *)((char *)D_002A8490->f2e8->f4+0x800));
      func_00160C20(&a,*(int *)((char *)D_002A8490->f2e8->f4+0x810));
      func_00160C20(&a,*(int *)((char *)D_002A8490->f2e8->f4+0x818));
      func_00160C20(&a,*(int *)((char *)D_002A8490->f2e8->f4+0x1128));
      ((C_0007A0F0_L *)w[0x120/4])->func_001D5FA0(font,(int)D_00278690,a,*(int *)((char *)D_002A8490->f2e8->f4+0x7c8)); }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x120/4]); if(p->f4!=0x44048000 || p->f8!=0x43c48000) { p->f4=0x44048000; p->f8=0x43c48000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x120/4]); unsigned c=p->f48; if(c!=0xffcccccc) { p->f4E|=8; p->f48=(c&0xffcccccc)|0xcccccc; } }
    w[0x124/4]=(int)CreateLabel7();
    { n1=0;
      func_00160C20(&n1,*(int *)((char *)D_002A8490->f2e8->f4+0x7c0));
      func_00160C20(&n1,*(int *)((char *)D_002A8490->f2e8->f4+0xaf8));
      func_00160C20(&n1,*(int *)((char *)D_002A8490->f2e8->f4+0x808));
      func_00160C20(&n1,*(int *)((char *)D_002A8490->f2e8->f4+0x7e8));
      func_00160C20(&n1,*(int *)((char *)D_002A8490->f2e8->f4+0x1248));
      ((C_0007A0F0_L *)w[0x124/4])->func_001D5FA0(font,(int)D_00278690,n1,*(int *)((char *)D_002A8490->f2e8->f4+0x838)); }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x124/4]); if(p->f4!=0x43c80000 || p->f8!=0x43c48000) { p->f4=0x43c80000; p->f8=0x43c48000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x124/4]); unsigned c=p->f48; if(c!=0xffcccccc) { p->f4E|=8; p->f48=(c&0xffcccccc)|0xcccccc; } }
    w[0x128/4]=(int)CreateLabel7();
    { n2=0;
      func_00160C20(&n2,*(int *)((char *)D_002A8490->f2e8->f4+0x7a8));
      func_00160C20(&n2,*(int *)((char *)D_002A8490->f2e8->f4+0x7b8));
      func_00160C20(&n2,*(int *)((char *)D_002A8490->f2e8->f4+0x7f8));
      func_00160C20(&n2,*(int *)((char *)D_002A8490->f2e8->f4+0xf20));
      ((C_0007A0F0_L *)w[0x128/4])->func_001D5FA0(font,(int)D_00278690,n2,*(int *)((char *)D_002A8490->f2e8->f4+0x7f8)); }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x128/4]); if(p->f4!=0x43870000 || p->f8!=0x43c48000) { p->f4=0x43870000; p->f8=0x43c48000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x128/4]); unsigned c=p->f48; if(c!=0xffcccccc) { p->f4E|=8; p->f48=(c&0xffcccccc)|0xcccccc; } }
    float yy=70.0f;
    for(counter=0;counter<16;++counter) {
    w[0x13c/4+counter]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x13c/4+counter])->func_001D5FA0(font,(int)D_00278690,40,(int)D_00275630);
    { float y=yy; C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x13c/4+counter]); if(p->f4!=0x43a00000 || *(float *)&p->f8!=y) { p->f4=0x43a00000; *(float *)&p->f8=y; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x13c/4+counter]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x13c/4+counter]); unsigned c=p->f48; if(c!=0xffcccccc) { p->f4E|=8; p->f48=(c&0xffcccccc)|0xcccccc; } }
      yy+=D_00278F68;
    }
    w[0x208/4]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x208/4])->func_001D6190(font,*(int *)((char *)D_002A8490->f2e8->f4+0x840),D_00278690);
    { float y=yy+D_002756C8; C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x208/4]); if(p->f4!=0x43a00000 || *(float *)&p->f8!=y) { p->f4=0x43a00000; *(float *)&p->f8=y; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x208/4]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x208/4]); unsigned c=p->f48; if(c!=0xff8974f6) { p->f4E|=8; p->f48=(c&0xff8974f6)|0x8974f6; } }
    w[0x294/4]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x294/4])->func_001D5FA0(font,(int)D_00278690,55,0);
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x294/4]); if(p->f4!=0x43a00000 || p->f8!=0x43af0000) { p->f4=0x43a00000; p->f8=0x43af0000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x294/4]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x294/4]); unsigned c=p->f48; if(c!=0xffbfa35a) { p->f4E|=8; p->f48=(c&0xffbfa35a)|0xbfa35a; } }
    w[0x298/4]=0; w[0x250/4]=*(int *)(w[0x1d0/4]+0x1d0);
    w[0x29c/4]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x29c/4])->func_001D5FA0(font,(int)D_00278690,40,0);
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x29c/4]); if(p->f4!=0x43a00000 || p->f8!=0x42ea0000) { p->f4=0x43a00000; p->f8=0x42ea0000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x29c/4]); unsigned c=p->f48; if(c!=0xff8974f6) { p->f4E|=8; p->f48=(c&0xff8974f6)|0x8974f6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x29c/4]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    for(counter=0;counter<2;++counter) {
    w[0x2a0/4+counter]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x2a0/4+counter])->func_001D5FA0(font,(int)D_00278690,40,0);
    { float y=((C_0007A0F0_L *)font)->func_0018C210()*counter+D_00278F64; C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2a0/4+counter]); if(p->f4!=0x43a00000 || *(float *)&p->f8!=y) { p->f4=0x43a00000; *(float *)&p->f8=y; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2a0/4+counter]); unsigned c=p->f48; if(c!=0xff8974f6) { p->f4E|=8; p->f48=(c&0xff8974f6)|0x8974f6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2a0/4+counter]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    }
    w[0x2a8/4]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x2a8/4])->func_001D5FA0(font,(int)D_00278690,30,0);
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2a8/4]); if(p->f4!=0x43a00000 || p->f8!=0x42ea0000) { p->f4=0x43a00000; p->f8=0x42ea0000; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2a8/4]); unsigned c=p->f48; if(c!=0xffcccccc) { p->f4E|=8; p->f48=(c&0xffcccccc)|0xcccccc; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2a8/4]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    for(counter=0;counter<5;++counter) { float f;
    w[0x2c8/4+counter]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x2c8/4+counter])->func_001D5FA0(font,(int)D_00278690,45,0);
    f=(float)counter;
    { float y=((C_0007A0F0_L *)font)->func_0018C210()*f+D_00278D40; C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2c8/4+counter]); if(p->f4!=0x43a00000 || *(float *)&p->f8!=y) { p->f4=0x43a00000; *(float *)&p->f8=y; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2c8/4+counter]); unsigned c=p->f48; if(c!=0xffcccccc) { p->f4E|=8; p->f48=(c&0xffcccccc)|0xcccccc; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2c8/4+counter]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    w[0x2dc/4+counter]=(int)CreateLabel7();
    ((C_0007A0F0_L *)w[0x2dc/4+counter])->func_001D5FA0(font,(int)D_00278690,45,0);
    { float y=((C_0007A0F0_L *)font)->func_0018C210()*f+D_00278F60; C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2dc/4+counter]); if(p->f4!=0x43a00000 || *(float *)&p->f8!=y) { p->f4=0x43a00000; *(float *)&p->f8=y; p->f4E|=6; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2dc/4+counter]); unsigned c=p->f48; if(c!=0xffcccccc) { p->f4E|=8; p->f48=(c&0xffcccccc)|0xcccccc; } }
    { C_0007A0F0_L *p=((C_0007A0F0_L *)w[0x2dc/4+counter]); if(p->f44!=D_0028F5E0) { p->f44=D_0028F5E0; p->f4E|=6; } }
    }
    return this;
}
