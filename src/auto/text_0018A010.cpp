/* 5 functions from 0x0018A010 to 0x0018B010, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
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

struct S_0018A320_W { char pad[0x390]; void *f390; char pad2[0x4d8-0x394]; unsigned char f4D8; };
struct S_0018A320_P {
    int func_00169710(char *name);
    void func_00168C20(char *key, int def, int *out);
    void func_00168C50(char *key, float def, float *out);
    int func_00168BE0(char *key, char *def, char *out, int len);
};
struct S_0018A320_Tok { char *p0, *p1; void Tokenizer_SetString(char *s); char *func_001B4A70(char *sep); };
struct S_0018A320_Vec { int x, y, z, w; };
extern S_0018A320_Vec *func_00182980(S_0018A320_Vec *out, char *s);
extern void *func_001E8A44(unsigned int);
extern int func_001E91F4(const char *);
extern void func_001ADCC0(char *dst, int size, const char *fmt, ...);
extern "C" int __cdecl memcmp(const void *, const void *, unsigned int);
extern "C" char * __cdecl strcpy(char *, const char *);
extern char D_0028A4F4[], D_0028A4DC[], D_0028A4C4[], D_00276844[], D_0028A4B8[];
extern char D_002895F4[], D_002895EC[], D_0028A4A0[], D_0028A484[], D_0028A468[];
extern char D_0028A454[], D_0028A438[], D_0028A41C[], D_0028973C[], D_00289734[];
extern char D_0028972C[], D_00289724[], D_0028A410[], D_0027C494[], D_0028A404[];
extern char D_0028A3F4[], D_0028A3E8[], D_00275630[], D_0028A3D8[], D_0028803C[];
extern char D_0028A3C4[], D_0028A3A8[];
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
    int f110;
    int f114, f118, f11C, f120;
    int *f124;
    int f128, f12C;
    C_0018A210_Sub sub;
    unsigned char bit0:1, bit1:1, bit2:1;
    float f150, f154, f158, f15c;
    C_0018A210 *func_0018A210();
    int func_0018A320(S_0018A320_W *w, S_0018A320_P *p, int level);
    int func_00185860(char *buf);
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

C_0018A210 *C_0018A210::func_0018A210() {
 vtbl=&D_002895E8;
 C_0018A210_Sub *q=&sub;
 q->vtbl=&D_002898FC;
 memset(q->v,0,16);
 q->f14=1.0f; q->f18=0.5f;
 f4=0;
 int limit=sizeof(name)-1;
 int len=AsmMinI(limit,12);
 func_001E8920(name,D_0028A398,len);
 name[len]=0;
 f10C=0;
 f114=2; f11C=2; f118=2; f120=2;
 f124=0; f128=0; f12C=0;
 bit0=1; bit1=1; bit2=1;
 return this;
}

int C_0018A210::func_0018A320(S_0018A320_W *w, S_0018A320_P *p, int level)
{
 char name2[0x104];
 char s2[0x80];
 char s[0x80];
 char buf[0x104];
 S_0018A320_Tok tokA, tokB;
 S_0018A320_Vec tmp;
 int *pv;
 int v;
 this->f4 = level - 1;
 func_001ADCC0(this->name, 0x104, D_0028A4F4, level);
 if (!p->func_00169710(this->name)) {
  if (level != 1) return 0;
  func_001ADCC0(this->name, 0x104, D_0028A398);
  if (!p->func_00169710(this->name)) return 0;
 }
 p->func_00168C20(D_0028A4DC, 1, &v);
 this->bit1 = v;
 this->bit2 = !memcmp(this->name, D_0028A398, 13);
 pv = &this->f10C;
 p->func_00168C20(D_0028A4C4, 0, pv);
 if (p->func_00168BE0(D_0028A4B8, D_00276844, buf, -1)) {
  int t;
  if (!memcmp(buf, D_002895F4, 9)) t = 2;
  else t = !memcmp(buf, D_002895EC, 5);
  this->f114 = t;
  this->f11C = t;
  this->f120 = t;
 } else {
  if (p->func_00168BE0(D_0028A4A0, D_00276844, buf, -1)) {
   this->f11C = this->func_00185860(buf);
  } else {
   p->func_00168BE0(D_0028A484, D_002895F4, buf, -1);
   this->f11C = this->func_00185860(buf);
  }
  p->func_00168BE0(D_0028A468, D_002895F4, buf, -1);
  this->f114 = this->func_00185860(buf);
  if (p->func_00168BE0(D_0028A454, D_00276844, buf, -1)) {
   this->func_00185860(buf);
   this->f11C = this->f114;
  } else {
   p->func_00168BE0(D_0028A438, D_002895F4, buf, -1);
   this->f120 = this->func_00185860(buf);
   p->func_00168BE0(D_0028A41C, D_002895F4, buf, -1);
   this->f118 = this->func_00185860(buf);
  }
 }
 if (!this->f114 || !this->f11C || !this->f118 || !this->f120) return 0;
 p->func_00168C50(D_0028973C, 0, &this->f150);
 p->func_00168C50(D_00289734, 0, &this->f154);
 p->func_00168C50(D_0028972C, 0, &this->f158);
 p->func_00168C50(D_00289724, 0, &this->f15c);
 p->func_00168C20(D_0028A410, 0, &this->f12C);
 p->func_00168BE0(D_0028A404, D_0027C494, buf, -1);
 if (!memcmp(buf, D_0027C494, 6)) {
  *(S_0018A320_Vec *)this->sub.v = *(S_0018A320_Vec *)((char *)w->f390 + 4);
 } else {
  *(S_0018A320_Vec *)this->sub.v = *func_00182980(&tmp, buf);
 }
 p->func_00168C50(D_0028A3F4, *(float *)((char *)w->f390 + 0x14), &this->sub.f14);
 p->func_00168C50(D_0028A3E8, *(float *)((char *)w->f390 + 0x18), &this->sub.f18);
 w->f4D8 |= 1;
 this->f128 = 0;
 if (p->func_00168BE0(D_0028A3D8, D_00275630, s, 0x80)) {
  strcpy(s2, s);
  tokA.Tokenizer_SetString(s);
  while (tokA.func_001B4A70(D_0028803C)) this->f128++;
  this->f124 = (int *)func_001E8A44(this->f128 * 4);
  tokB.Tokenizer_SetString(s2);
  int i = 0;
  char *t;
  while ((t = tokB.func_001B4A70(D_0028803C)) != 0) {
   this->f124[i] = func_001E91F4(t) - 1;
   i++;
  }
 }
 func_001ADCC0(name2, 0x104, D_0028A4F4, level);
 if (!p->func_00169710(name2)) {
  if (level != 1) return 0;
  func_001ADCC0(name2, 0x104, D_0028A3C4);
  if (!p->func_00169710(name2)) {
   this->f110 = *pv;
   this->bit0 = 0;
   return level;
  }
 }
 p->func_00168C20(D_0028A3A8, -1, &this->f110);
 if (this->f110 != -1) return 0;
 this->f110 = *pv;
 this->bit0 = 0;
 return 1;
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
