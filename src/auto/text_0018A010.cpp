/* 5 functions from 0x0018A010 to 0x0018B010, found by Ghidra. */
#include "common.h"
struct S_00185610_Out { char pad0[4]; float f4, f8, fC; int pad10; float f14, f18; };
struct S_A010_Curve { float func_00026A10(float,float); };
struct S_A010_Draw { void func_00150390(unsigned int,float,float,int); };
struct S_A010_List { int pad; int count; int pad8; int *indices; };
struct S_A010_Item { char pad[0x21]; unsigned char flags21; char pad22[5]; unsigned char flags27; };
struct S_A010_Global { char pad[0x25c]; float time; char pad260[0x10]; int mode; };
extern S_A010_Global *D_002A8490;
extern char *D_002EFDB8;
struct BasicScene {
 char pad[0x340]; int f340; char pad344[0x44]; S_A010_List *f388;
 char pad38c[0x50]; S_A010_Draw *f3DC; S_A010_Item **f3E0;
 char pad3e4[0xe0]; S_A010_Curve *f4C4,*f4C8,*f4CC,*f4D0,*f4D4;
 unsigned char f4D8;
 void func_00185610(S_00185610_Out *);
 void func_001578D0();
 void func_0018A010();
};

struct C_0018AFD0 {
    void *vtbl;
    char pad4[0x24];
    void *f28;
    void func_00157660();
    void *func_0018AFD0(unsigned int flags);
};

struct C_0018A320 { void *vtbl; int f4; void func_0018A320(int a, void *b, void *c, int *d); };
extern int D_00289ABC;
extern int D_00289830;
extern int D_002897FC;
void func_001E891B(void *p);
extern int D_002895E8;
extern int D_002898FC;
extern char D_0028A398[];
void func_001E8920(char *dst, const char *src, int n);

struct C_0018A210_Sub {
    void *vtbl;
    int v[4];
    float f14, f18;
};

struct C_0018A210 {
    void *vtbl;
    int f4;
    char name[0x104];
    int f10C;
    int pad110;
    int f114, f118, f11C, f120, f124, f128, f12C;
    C_0018A210_Sub sub;
    unsigned char flags;
    C_0018A210 *func_0018A210();
};

/* LightTempData */
struct S_LightTemp_AEF0 {
    void *vtbl;
    char pad4[0x14];
    void *f18;
    void *f1c;
    void *f20;
    void func_00186210(void);
};

/* Light: 12-byte elements, f8 owns a LightTempData */
struct C_0018AEF0 {
    void *vtbl;
    int f4;
    S_LightTemp_AEF0 *f8;
    void *func_0018AEF0(unsigned int flags);
};

extern "C" void * __cdecl memset(void *, int, unsigned int);
void BasicScene::func_0018A010()
{
 if(f4D8 & 1) {
  S_00185610_Out v;
  memset(&v.f4,0,16); v.f14=1; v.f18=0.5f;
  func_00185610(&v);
  if(D_002A8490->mode==1) {
   float time=D_002A8490->time;
   float x=f4C4->func_00026A10(v.f14,time);
   float y=f4C8->func_00026A10(v.f18,time);
   float r=f4CC->func_00026A10(v.f4,time);
   float g=f4D0->func_00026A10(v.f8,time);
   float b=f4D4->func_00026A10(v.fC,time);
   unsigned int color=((unsigned int)(int)b & 255) | (((((unsigned int)(int)r | 0xffffff00)<<8) | ((unsigned int)(int)g &255))<<8);
   f3DC->func_00150390(color,x,y,0);
  } else {
   unsigned int color=(unsigned int)(int)v.f4 | 0xffffff00;
   color=(color<<8) | ((unsigned int)(int)v.f8&255);
   color=(color<<8) | ((unsigned int)(int)v.fC&255);
   f3DC->func_00150390(color,v.f14,v.f18,0);
  }
 }
 if(f388->count>0 && f3E0) {
  int current=*(int *)(*(char **)(*(char **)(D_002EFDB8+4)+0x2c)+0x3c);
  if(current<f340) {
   int selected=f388->indices[current];
   for(int i=0;i<f388->count;i++) {
    f3E0[i]->flags27 &= ~2;
    f3E0[i]->flags21 &= ~1;
   }
   if(selected>=0) {
    f3E0[selected]->flags27 |= 2;
    f3E0[selected]->flags21 |= 1;
   }
  }
 }
 func_001578D0();
}

void *C_0018AEF0::func_0018AEF0(unsigned int flags)
{
    if (flags & 2) {
        int *base = (int *)this - 1;
        int i = *base;
        C_0018AEF0 *p = this + i;
        while (--i >= 0) {
            S_LightTemp_AEF0 *t;
            p--;
            t = p->f8;
            p->vtbl = &D_00289830;
            if (t != 0) {
                t->vtbl = &D_002897FC;
                if (t->f18 != 0) {
                    func_001E891B(t->f18);
                    t->f18 = 0;
                }
                if (t->f1c != 0) {
                    func_001E891B(t->f1c);
                    t->f1c = 0;
                }
                if (t->f20 != 0) {
                    func_001E891B(t->f20);
                    t->f20 = 0;
                }
                func_001E891B(t);
                p->f8 = 0;
            }
        }
        if (flags & 1) {
            func_001E891B(base);
        }
        return base;
    }
    S_LightTemp_AEF0 *t = f8;
    vtbl = &D_00289830;
    if (t != 0) {
        t->func_00186210();
        func_001E891B(t);
        f8 = 0;
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0018AFD0::func_0018AFD0(unsigned int flags)
{
    vtbl = (void *)&D_00289ABC;
    if (f28) func_001E891B(f28);
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}
