/* 6 functions from 0x000D4D20 to 0x000D5C70, found by Ghidra. */
#include "common.h"
extern int D_0027F20C;

struct DelObjA_000D4DD0 {
    virtual void Destroy(int a0);
    char pad4[0x34];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
    DelObjA_000D4DD0 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
    void func_001D5AD0();
    void SetArgbRaw(unsigned int c) {
        f38 = (f38 & c) | (c & 0xffffff);
        b58 |= 2;
    }
};
struct DelObjB_000D4DD0 {
    virtual void Destroy(int a0);
    char pad4[0x34];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
    DelObjB_000D4DD0 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
    void func_001D5AD0();
};
struct DelObjC_000D4DD0 {
    virtual void Destroy(int a0);
    char pad4[0x24];
    int x;
    char pad2c[0xc];
    unsigned int f38;
    float m3c;
    float m40;
    float m44;
    float m48;
    char pad4c[0xc];
    unsigned char b58;
    DelObjC_000D4DD0 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
    void func_001D5AD0();
          void SetIdentity() {
          m40 = 0;
          m44 = 0;
          unsigned char f = b58 | 4;
          m3c = 1.0f;
          m48 = 1.0f;
          b58 = f;
      }
    void SetX(int nx) {
        if (x != nx) {
            x = nx;
            b58 |= 1;
        }
    }
          void SetArgbRaw(unsigned int c) {
          unsigned int nf = (f38 & c) | (c & 0xffffff);
          unsigned char f = b58 | 2;
          f38 = nf;
          b58 = f;
      }
  };
  
  struct S_000D5860_Draw {
    void func_001D5AD0();
};

struct S_002B91AC {
    char pad0[0x24];
    S_000D5860_Draw *unk24;
    S_000D5860_Draw *unk28;
    S_000D5860_Draw *unk2C;
    S_000D5860_Draw *unk30;
    char pad34[0x54 - 0x34];
    S_000D5860_Draw *unk54;
    char pad58[0x6C - 0x58];
    S_000D5860_Draw *unk6C;
};

extern S_002B91AC *D_002B91AC;

struct S_000D5B90_Widget {
    S_000D5B90_Widget *func_001B12C0(int a);
    void func_001B13A0(char *a, char *b, int c, int d);
    void func_001B2270(unsigned int c);
    void func_001B1980();
    void func_001B17D0(char *s);
    void func_001B1A30(float a, float b, float c);
    void func_001B19A0(int a);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct S_000D5B90_Res {
    void func_00103350();
    void func_00103260(int a);
};

struct S_000D5B90_Owner {
    S_000D5B90_Res *func_000BA9B0(int a);
};

struct S_59A0_W {
    void func_001B1980();
    void func_001B17D0(char *s);
    void func_001B1A30(float a, float b, float c);
    void func_001B19A0(int a);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};
struct S_59A0_Q { void func_0005BED0(int a, int b, float *f, char *s); };
struct S_59A0_A { char pad[0x2c0]; S_59A0_Q *q; };
struct S_59A0_X { char pad[0xf68]; int v; };
struct S_59A0_Y { char pad[4]; S_59A0_X *x; };
struct S_59A0_Res {
    void func_0018C780(int n, void *names, int a);
    int *func_0018C160(char *name);
};
struct S_59A0_B { char pad[0x2e0]; S_59A0_A *a; char pad2[4]; S_59A0_Y *b; S_59A0_Res *res; };
extern S_59A0_B *D_002A8490;
extern float D_0027F2BC, D_00279F74, D_0027F2B8, D_0027F2B4;
extern char D_0027F2C0[];
extern int D_0028F5DC;
extern char D_0027958C[], D_00278690[], D_002786A0[], D_00278678[];
extern char D_0027F29C[], D_00279B00[], D_00279AF0[], D_00279AE0[], D_00279AD0[];
extern char D_0027F2AC[], D_0027CEF0[];
extern "C" int func_001ADCC0(char *buf, int n, char *fmt, ...);
void *func_001E8A44(unsigned int size);

struct BmxUIPageHOF {
    void *vtbl;
    char pad4[0x124 - 4];
    S_000D5B90_Owner *f124;
    char pad128[0x280 - 0x128];
    u32 unk280;
    u32 unk284;
    u32 unk288;
    u32 unk28C;
    u32 unk290;
    u32 unk294;
    u32 unk298;
    u32 unk29C;
    u32 unk2A0;
    u32 unk2A4;
    u32 unk2A8;
    u32 unk2AC;
    u32 unk2B0;
    u32 unk2B4;
    s32 unk2B8;
    u32 unk2BC;
    u32 unk2C0;
    S_000D5B90_Widget *arr2C4[5];
    S_000D5B90_Widget *arr2D8[5];
    DelObjA_000D4DD0 *arr2EC[2];
    DelObjB_000D4DD0 *arr2F4[2];
    DelObjC_000D4DD0 *arr2FC[2];
    S_000D5B90_Widget *arr304[5];
    void func_001BE360(int a0);
    void func_001BE3F0();
    BmxUIPageHOF *func_000D4D20(int a0);
    BmxUIPageHOF *func_000D4E50(int a, int b, int c);
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(S_000D5B90_Widget *w, int a);
    void func_000D4DD0();
    void func_000D5860();
    void func_000D5B90();
    void func_000D59A0();
};

BmxUIPageHOF *BmxUIPageHOF::func_000D4D20(int a0)
{
    func_001BE360(a0);
    vtbl = &D_0027F20C;
    void **p = (void **)arr2D8;
    for (int i = 0; i < 5; i++) {
        p[-5] = 0;
        *p = 0;
        p[11] = 0;
        p++;
    }
    for (int j = 0; j < 2; j++) {
        arr2EC[j] = 0;
    }
    unk280 = 0;
    unk290 = 0;
    unk284 = 0;
    unk288 = 0;
    unk28C = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2AC = 0;
    unk2A8 = 0;
    unk29C = 1;
    for (int k = 0; k < 2; k++) {
        arr2FC[k] = 0;
    }
    unk2B0 = 0;
    unk2B4 = 0;
    unk2B8 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    return this;
}

void BmxUIPageHOF::func_000D4DD0()
{
    vtbl = &D_0027F20C;
    for (int i = 0; i < 2; i++) {
        if (arr2EC[i] != 0) {
            arr2EC[i]->Destroy(1);
            arr2EC[i] = 0;
        }
        if (arr2F4[i] != 0) {
            arr2F4[i]->Destroy(1);
            arr2F4[i] = 0;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (arr2FC[i] != 0) {
            arr2FC[i]->Destroy(1);
            arr2FC[i] = 0;
        }
    }
    func_001BE3F0();
}

BmxUIPageHOF *BmxUIPageHOF::func_000D4E50(int a,int b,int c) {
func_001BE4F0(a,b,c);
char *name=D_0027958C;
D_002A8490->res->func_0018C780(1,&name,0);
D_002A8490->res->func_0018C160(D_00278690);
D_002A8490->res->func_0018C160(D_002786A0);
D_002A8490->res->func_0018C160(D_00278678);
D_002A8490->res->func_0018C160(D_0027958C);
char buf[5];
for(int i=0;i<5;i++){
S_000D5B90_Widget *w=(S_000D5B90_Widget*)func_001E8A44(0x184);
arr2C4[i]=w?w->func_001B12C0(1):0;
arr2C4[i]->func_001B13A0(D_002786A0,D_002786A0,0,30);
volatile float y=i*D_0027F2BC;
arr2C4[i]->func_001B1A30(191.0f,y+D_00279F74,0);
arr2C4[i]->func_001B2270(0xffcccccc);
func_001577A0(arr2C4[i],-1);
w=(S_000D5B90_Widget*)func_001E8A44(0x184);
arr2D8[i]=w?w->func_001B12C0(1):0;
arr2D8[i]->func_001B13A0(D_002786A0,D_002786A0,0,50);
arr2D8[i]->func_001B1A30(380.0f,y+D_0027F2B8,0);
arr2D8[i]->func_001B2270(0xffcccccc);
func_001577A0(arr2D8[i],-1);
w=(S_000D5B90_Widget*)func_001E8A44(0x184);
arr304[i]=w?w->func_001B12C0(1):0;
arr304[i]->func_001B13A0(D_002786A0,D_002786A0,0,5);
arr304[i]->func_001B1A30(175.0f,y+D_0027F2B4,0);
arr304[i]->func_001B2270(0xffcccccc);
func_001ADCC0(buf,5,D_0027F2AC,i+1,D_0027CEF0);
arr304[i]->func_001B17D0(buf);
func_001577A0(arr304[i],-1);
}
for(int j=0;j<2;j++){
DelObjC_000D4DD0 *p=(DelObjC_000D4DD0*)func_001E8A44(100);
arr2FC[j]=p?p->func_001D5760():0;
if(j%2==0) arr2FC[j]->func_001D5810(D_0027F29C,100,145,0);
else {arr2FC[j]->func_001D5810(D_0027F29C,321,145,0); arr2FC[j]->SetIdentity();}
arr2FC[j]->SetX(0x435d0000);
arr2FC[j]->SetArgbRaw(0xffbfa35a);
}
DelObjA_000D4DD0 *p=(DelObjA_000D4DD0*)func_001E8A44(100);
arr2EC[0]=p?p->func_001D5760():0;
arr2EC[0]->func_001D5810(D_00279B00,211,114,0);
arr2EC[0]->SetArgbRaw(0xffbfa35a);
DelObjB_000D4DD0 *q=(DelObjB_000D4DD0*)func_001E8A44(100);
arr2F4[0]=q?q->func_001D5760():0;
arr2F4[0]->func_001D5810(D_00279AF0,211,114,0);
p=(DelObjA_000D4DD0*)func_001E8A44(100);
arr2EC[1]=p?p->func_001D5760():0;
arr2EC[1]->func_001D5810(D_00279AE0,414,114,0);
arr2EC[1]->SetArgbRaw(0xffbfa35a);
q=(DelObjB_000D4DD0*)func_001E8A44(100);
arr2F4[1]=q?q->func_001D5760():0;
arr2F4[1]->func_001D5810(D_00279AD0,414,114,0);
return this;
}

void BmxUIPageHOF::func_000D5860()
{
    DelObjC_000D4DD0 **ptr;
    DelObjB_000D4DD0 *e;
    DelObjC_000D4DD0 *c;
    DelObjA_000D4DD0 *p;
    int count;
    S_002B91AC *s;

    if (unk280) {
        D_002B91AC->unk6C->func_001D5AD0();
    } else {
        D_002B91AC->unk54->func_001D5AD0();
    }
    if (unk298) {
        e = arr2F4[0];
        e->f38 = ((short)unk2B8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        p = (DelObjA_000D4DD0 *)arr2F4[0];
    } else {
        e = arr2F4[0];
        e->f38 = ((short)unk2B8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        p = arr2EC[0];
    }
    p->func_001D5AD0();
    if (unk294) {
        e = arr2F4[1];
        e->f38 = ((short)unk2B8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        p = (DelObjA_000D4DD0 *)arr2F4[1];
    } else {
        e = arr2F4[1];
        e->f38 = ((short)unk2B8 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        p = arr2EC[1];
    }
    p->func_001D5AD0();
    ptr = arr2FC;
    count = 2;
    do {
        c = *ptr;
        c->f38 = ((short)unk2B8 << 24) | (c->f38 & 0xffffff);
        c->b58 |= 2;
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
}

void BmxUIPageHOF::func_000D59A0()
{
    S_000D5B90_Owner *owner = f124;
    float f;
    int i;
    char s[0x14];
    char name[0x104];
    char buf[0x108];
    for (i = 0; i < 5; i++) {
        volatile float y;
        arr2C4[i]->func_001B1980();
        arr2D8[i]->func_001B1980();
        arr304[i]->func_001B1980();
        D_002A8490->a->q->func_0005BED0(0, i, &f, s);
        int k = 0;
        char c;
        do { c = s[k]; name[k] = c; k++; } while (c);
        func_001ADCC0(buf, 0x104, D_0027F2C0, (double)f, D_002A8490->b->x->v);
        arr2C4[i]->func_001B17D0(name);
        y = i * D_0027F2BC;
        arr2C4[i]->func_001B1A30(191.0f, y + D_00279F74, 0);
        arr2C4[i]->func_001B19A0(D_0028F5DC);
        arr2C4[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        arr2D8[i]->func_001B17D0(buf);
        arr2D8[i]->func_001B1A30(380.0f, y + D_0027F2B8, 0);
        arr2D8[i]->func_001B19A0(D_0028F5DC);
        arr2D8[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        arr304[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
    owner->func_000BA9B0(0x18)->func_00103260(0);
}

void BmxUIPageHOF::func_000D5B90()
{
    S_000D5B90_Owner *owner = f124;
    int i;
    for (i = 0; i < 5; i++) {
        arr2C4[i]->func_001B1980();
        arr2D8[i]->func_001B1980();
        arr304[i]->func_001B1980();
        arr2C4[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        arr2D8[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
        arr304[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
    }
    owner->func_000BA9B0(0x18)->func_00103350();
}

