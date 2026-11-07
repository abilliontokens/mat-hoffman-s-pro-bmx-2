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
    const char *names[1];
    int v1;
    int v2;
    int *r;
    void *mem;
    int i;
    C_0007A0F0_W *o;
    C_0007A0F0_L *l;

    f1D0 = a;
    names[0] = D_00278678;
    D_002A8490->f2ec->func_0018C780(1, names, 0);
    D_002A8490->f2ec->func_0018C160(D_002786A0);
    r = D_002A8490->f2ec->func_0018C160(D_00278690);
    if (r != 0) {
        v1 = *r;
    } else {
        v1 = 0;
    }
    r = D_002A8490->f2ec->func_0018C160(D_00278678);
    if (r != 0) {
        v2 = *r;
    } else {
        v2 = 0;
    }
    D_002A60B0 = D_00279018;
    D_002A60B4 = D_0027901C;
    D_002A60B8 = D_00279020;
    D_002A60BC = D_00279024;
    mem = func_001E8A44(0x64);
    f0FC = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
    f0FC->func_001D5810(D_00278658, 0.0f, 0.0f, 0);
    o = f0FC;
    o->f3C = o->f4C * D_00278654;
    o->f58 |= 4;
    o->f40 = o->f4C * D_00275544;
    o->f44 = o->f50 * D_0027653C;
    o->f48 = o->f50 * D_00275544;
    o = f0FC;
    if (o->f2C != 0x42480000) {
        o->f2C = 0x42480000;
        o->f58 |= 1;
    }
    o = f0FC;
    if (o->f28 != 0x44200000) {
        o->f28 = 0x44200000;
        o->f58 |= 1;
    }
    mem = func_001E8A44(0x64);
    f100 = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
    f100->func_001D5810(D_00278658, 0.0f, 398.0f, 0);
    o = f100;
    o->f3C = o->f4C * D_00278654;
    o->f58 |= 4;
    o->f40 = o->f4C * D_00275544;
    o->f44 = o->f50 * D_0027653C;
    o->f48 = o->f50 * D_00275544;
    o = f100;
    if (o->f28 != 0x44200000) {
        o->f28 = 0x44200000;
        o->f58 |= 1;
    }
    o = f100;
    if (o->f2C != 0x42480000) {
        o->f2C = 0x42480000;
        o->f58 |= 1;
    }
    for (i = 0; i < 5; i++) {
        float x;

        mem = func_001E8A44(0x64);
        f17C[i] = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
        x = (float)i * D_00278650;
        f17C[i]->func_001D5810(D_00278658, x, 50.0f, 0);
        mem = func_001E8A44(0x64);
        f190[i] = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
        f190[i]->func_001D5810(D_00278658, x, 366.0f, 0);
        o = f190[i];
        o->f3C = 0.0f;
        o->f48 = 0.0f;
        o->f58 |= 4;
        o->f40 = 1.0f;
        o->f44 = 0.99f;
    }
    mem = func_001E8A44(0x60);
    f200 = mem ? ((C_0007A0F0_L *)mem)->func_001D5E90() : 0;
    f200->func_001D5FA0(v2, D_00278678, 0x18, 0);
    l = f200;
    if (l->f4 != 0x43a00000 || l->f8 != 0x42200000) {
        l->f8 = 0x42200000;
        l->f4 = 0x43a00000;
        l->f4E |= 6;
    }
    l = f200;
    if (l->f48 != 0xffcccccc) {
        l->f48 = (l->f48 & 0xffcccccc) | 0xcccccc;
        l->f4E |= 8;
    }
    l = f200;
    if (l->f44 != D_0028F5E0) {
        l->f44 = D_0028F5E0;
        l->f4E |= 6;
    }
    mem = func_001E8A44(0x60);
    f1C4 = mem ? ((C_0007A0F0_L *)mem)->func_001D5E90() : 0;
    f1C4->func_001D5FA0(v1, D_00278690, 0x14, 0);
    l = f1C4;
    if (l->f4 != 0x41a00000 || l->f8 != 0x43c48000) {
        l->f4 = 0x41a00000;
        l->f8 = 0x43c48000;
        l->f4E |= 6;
    }
    l = f1C4;
    if (l->f48 != 0xff5eff5e) {
        l->f48 = (l->f48 & 0xff5eff5e) | 0x5eff5e;
        l->f4E |= 8;
    }
    l = f1C4;
    if (l->f44 != D_0028F5DC) {
        l->f44 = D_0028F5DC;
        l->f4E |= 6;
    }
    mem = func_001E8A44(0x64);
    f114 = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
    f114->func_001D5810(D_00278648, 491.0f, 388.0f, 0);
    mem = func_001E8A44(0x64);
    f108 = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
    f108->func_001D5810(D_00278624, 491.0f, 388.0f, 0);
    mem = func_001E8A44(0x64);
    f118 = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
    f118->func_001D5810(D_00278638, 365.0f, 388.0f, 0);
    mem = func_001E8A44(0x64);
    f10C = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
    f10C->func_001D5810(D_00278608, 365.0f, 388.0f, 0);
    mem = func_001E8A44(0x64);
    f11C = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
    f11C->func_001D5810(D_00279008, 235.0f, 388.0f, 0);
    mem = func_001E8A44(0x64);
    f110 = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
    f110->func_001D5810(D_00278FF0, 235.0f, 388.0f, 0);
    mem = func_001E8A44(0x64);
    f1B4 = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
    f1B4->func_001D5810(D_00278FE0, 26.0f, 382.0f, 0);
    mem = func_001E8A44(0x64);
    f1B8 = mem ? ((C_0007A0F0_W *)mem)->func_001D5760() : 0;
    f1B8->func_001D5810(D_00278FD0, 177.0f, 382.0f, 0);
    for (i = 0; i < 2; i++) {
        mem = func_001E8A44(0x60);
        f1BC[i] = mem ? ((C_0007A0F0_L *)mem)->func_001D5E90() : 0;
        f1BC[i]->func_001D5FA0(v1, D_00278690, 6, 0);
        l = f1BC[i];
        if (l->f48 != 0xffcccccc) {
            l->f48 = (l->f48 & 0xffcccccc) | 0xcccccc;
            l->f4E |= 8;
        }
    }
    l = f1BC[0];
    if (l->f4 != 0x429c0000 || l->f8 != 0x43c48000) {
        l->f4 = 0x429c0000;
        l->f8 = 0x43c48000;
        l->f4E |= 6;
    }
    l = f1BC[1];
    if (l->f4 != 0x43650000 || l->f8 != 0x43c48000) {
        l->f4 = 0x43650000;
        l->f8 = 0x43c48000;
        l->f4E |= 6;
    }
    f1BC[0]->func_0005E840(D_002A8490->f2e8->f4->fF08);
    f1BC[1]->func_0005E840(D_002A8490->f2e8->f4->f9B8);
    return this;
}
