/* 8 functions from 0x001662A0 to 0x001670C0, found by Ghidra. */
#include "common.h"
#include <string.h>
#include <new>
#include "asm_helpers.h"

void func_001E891B(void *p);
void *func_001E8920(void *, const void *, unsigned int);
void *func_001E8AA5(unsigned int);
struct C_00166EB0_Config {
 void func_00169710(const char *);
 int func_00168BE0(const char *,const char *,char *,int);
 void func_00168C20(const char *,int,int *);
 int func_00168550(const char *,char *,int);
};
extern char D_00287E90[];
extern char D_00275630[];
extern char D_00277274[];
extern char D_002A46E8[];
extern char D_00284644[];
extern char D_00287E84[];
extern char D_00287E78[];
extern char D_00277288[];
extern char D_00287D8C[];
extern char D_00287D78[];
extern char D_00287D68[];
extern char D_00287D5C[];
extern char D_00287D50[];
extern char D_00287D40[];
extern char D_00287D38[];
extern char D_00287D30[];
extern char D_00287E6C[];
extern char D_00287E64[];
extern char D_00287E5C[];
extern char D_00287E54[];
int func_001EA426(const char *,const char *);

struct S_00166CA0_Item {
 char data[0x40];
 void func_000264C0(S_00166CA0_Item *);
};
struct C_00166CA0_Obj {
 virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
 virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
 virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
 virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
 virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
 virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
 virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
 virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7C();
 virtual void v80(); virtual void v84(); virtual void v88();
 virtual void v8C(char *, int, int);
 char pad4[0x170];
 int f174;
 C_00166CA0_Obj(int);
 int func_00198270();
};
struct C_00166CA0_Base {
 void func_001577A0(C_00166CA0_Obj *, int);
};
extern char D_002A5EA0[];
void func_00164270(int, int, int);
void *func_001E8A44(unsigned int);
template <class T> inline T min_00166CA0(T a, T b) { return AsmMinI(a, b); }
struct Str_00166CA0 {
 char s[0x104];
 void set(const char *src) {
  int len = strlen(src);
  int max = 0x103;
  int n = min_00166CA0(max, len);
  func_001E8920(s, src, n);
  s[n] = 0;
 }
};
static __forceinline int PrepStr_00166CA0(char *buf, char *src)
{
 int len = strlen(src);
 int max = 0x103;
 int n = min_00166CA0(max, len);
 func_001E8920(buf, src, n);
 buf[n] = 0;
 return n;
}
struct C_00166CA0 {
 int *vbptr;
 C_00166CA0_Obj *f4;
 C_00166EB0_Config *f8;
 int fC;
 int f10, f14, f18;
 int f1C, f20, f24, f28, f2C;
 int f30, f34, f38;
 char pad3C[0xC];
 char f48[0x50], f98[0x50], fE8[0x50], f138[0x50];
 int f188;
 char pad18C[4];
 char f190[0x50];
 char pad1E0[8];
 int f1E8;
 int f1EC, f1F0, f1F4;
 S_00166CA0_Item *f1F8;
 int f1FC;
 void func_001662A0(int);
 void func_001646B0();
 void func_00166CA0(C_00166CA0 *, int);
 void func_00166EB0(int);
 void func_00164700();
 void func_001643A0();
 void func_00166190();
 void func_00165F70();
};

struct S_00166C80_Arg {
    char pad0[0x3c];
    int f3c;
};

int __stdcall func_00164840(S_00166C80_Arg *param_1, int param_2, int param_3);

struct C_00166C80 {
    void func_00164840(S_00166C80_Arg *param_1, int param_2, int param_3);
    void func_00166C80(S_00166C80_Arg *param_1, int param_2);
};

struct Vec4_166830 { float x, y, z, w; };
struct C_166830_Item {
 virtual void v0(); virtual void v1();
 virtual void v2(int, Vec4_166830 *);
 virtual void v3(int, Vec4_166830 *);
 int f4;
};
struct C_166830_Arg {
 char pad0[0x14];
 C_166830_Item **f14, **f18;
 int f1C, f20;
};
struct C_166830_Node {
 char pad0[0x170];
 int f170;
 void func_00199300(Vec4_166830 *);
 void func_00199650(Vec4_166830 *);
};
struct C_166830_Elem { char pad0[0x34]; C_166830_Node *f34; char pad38[8]; };
struct C_166830 {
 int f0; int f4; int f8; int fC; char pad10[8];
   C_166830_Arg *f18; C_166830_Arg *f1C; char pad20[0x14]; int f34; int f38;
  char pad3C[0x1B0];
 C_166830_Elem *f1EC; int *f1F0; char pad1F4[0xC];
 Vec4_166830 *f200, *f204; int f208, f20C; char pad210[4]; Vec4_166830 *f214;
   void func_00166830(float, int *, int);
  void func_001664C0(float, int *, int);
 void func_00165A20(C_166830_Arg *, int, float, int *, int);
 void func_00165D00(float);
};
void func_0015C7D0(Vec4_166830 *, Vec4_166830 *, Vec4_166830 *, float);
void func_001640D0(int, int, int, void *);
extern int D_002A8450, D_002A8454, D_002A8458, D_002A845C;
extern float D_00275460;
struct C_002EF7D0 {
    int func_00162B20(int param_1, int param_2);
};

extern C_002EF7D0 *D_002EF7D0;

struct C_00166C50 {
    char pad0[0x10];
    int f10;
    char pad14[4];
    int f18;
    char pad1c[0x30 - 0x1c];
    int f30;
    int f34;
    void func_00166C50(int param_1);
};

struct C_00166E70_Outer;

struct C_00166E70 {
    void func_00164520(void);
    void func_00157660(void);
    void *func_00166E70(int flags);
};

struct C_00166E70_Outer {
    char pad0[0x220];
    C_00166E70 sub220;
};

void C_00166CA0::func_001662A0(int param_1)
{
 char buf[0x104];
 char saved[0x104];
 if (*(volatile int *)&f188 == 0) {
  strcpy(saved, D_002A5EA0);
  D_002A5EA0[0] = 0;
  int len, n, max;
  len = strlen(f190);
  max = 0x103;
  n = AsmMinI(max, len);
  func_001E8920(buf, f190, n);
  buf[n] = 0;
  strcat(buf, f138);
 } else {
  int n, max, len;
  saved[0] = 0;
  len = strlen(f138);
  max = 0x103;
  n = AsmMinI(max, len);
  func_001E8920(buf, f138, n);
  buf[n] = 0;
 }
 void *p = func_001E8A44(0x1e0);
 C_00166CA0_Obj *created = p ? new (p) C_00166CA0_Obj(*((unsigned char *)this + vbptr[1] + 0x21) & 1) : 0;
 ((volatile C_00166CA0 *)this)->f4 = created;
 ((volatile C_00166CA0 *)this)->f4->v8C(buf, 1, param_1);
 ((C_00166CA0_Base *)((char *)this + vbptr[1]))->func_001577A0(((volatile C_00166CA0 *)this)->f4, 0);
 int count = ((volatile C_00166CA0 *)this)->f4->func_00198270() - 1;
 *(volatile int *)&f1E8 = count;
 *(volatile int *)&f1EC = (int)func_001E8A44(*(volatile int *)&f1E8 << 6);
 func_00164270(0, *(volatile int *)&f1EC, ((volatile C_00166CA0 *)this)->f4->f174);
 if (((volatile C_00166CA0 *)this)->f1F4) func_00166190();
 func_00165F70();
 if (*(volatile int *)&f188 == 0) strcpy(D_002A5EA0, saved);
}

void C_166830::func_001664C0(float t, int *b, int flag)
{
    int i;
    float f;
    Vec4_166830 v1, v2, res, d;

    if (f208) {
        for (i = 0; i < f20C; i++) {
            int *p = (int *)((char *)f214 + i * 16);
            p[0] = D_002A8450;
            p[1] = D_002A8454;
            p[2] = D_002A8458;
            p[3] = D_002A845C;
        }
        func_00165A20(f18, f34, t, b, flag);
        func_00165A20(f1C, f38, D_00275460 - t, b, flag);
    }
    for (i = 0; i < f18->f20; i++) {
        if (b != 0 && b[f18->f18[i]->f4] != 0)
            continue;
        f18->f18[i]->v2(f34, &v1);
        f1C->f18[i]->v2(f38, &v2);
        func_0015C7D0(&v2, &v1, &v1, t);
        if (flag) {
            v1.y = fC == 0 ? v1.y : -v1.y;
            v1.z = -v1.z;
            v1.w = -v1.w;
            (*(C_166830_Node **)((char *)f1F0 + f18->f18[i]->f4 * 4))->func_00199300(&v1);
        } else {
            (*(C_166830_Node **)((char *)f1EC + (f18->f18[i]->f4 << 6) + 0x34))->func_00199300(&v1);
        }
    }
    for (i = 0; i < f18->f1C; i++) {
        if (b != 0 && b[f18->f14[i]->f4] != 0)
            continue;
        v1.z = 0; v1.y = 0; v1.x = 0; v1.w = 1.0f;
        f18->f14[i]->v3(f34, &v1);
        v2.z = 0; v2.y = 0; v2.x = 0; v2.w = 1.0f;
        f1C->f14[i]->v3(f38, &v2);
        d.x = v2.x - v1.x;
        d.y = v2.y - v1.y;
        d.z = v2.z - v1.z;
        f = D_00275460 - t;
        res.x = v1.x + d.x * f;
        res.y = v1.y + d.y * f;
        res.z = v1.z + d.z * f;
        res.w = 1.0f;
        v1 = res;
        if (flag) {
            func_001640D0(f4, (*(C_166830_Node **)((char *)f1EC + *(int *)((char *)f1F0 + f18->f14[i]->f4 * 4) * 64 + 0x34))->f170, fC, &v1);
        } else {
            (*(C_166830_Node **)((char *)f1EC + (f18->f14[i]->f4 << 6) + 0x34))->func_00199650(&v1);
        }
    }
}

static void Mirror_166830(Vec4_166830 *v, int axis)
{
    if (axis == 0) v->x = -v->x;
    else if (axis == 1) v->y = -v->y;
    else if (axis == 2) v->z = -v->z;
}

void C_166830::func_00166830(float t, int *mask, int flag)
{
    int i, idx;
    if (f208) {
        for (i = 0; i < f20C; i++) {
            Vec4_166830 *v = &f214[i];
            *(int *)&v->x = D_002A8450;
            *(int *)&v->y = D_002A8454;
            *(int *)&v->z = D_002A8458;
            *(int *)&v->w = D_002A845C;
        }
    }
    func_00165A20(f18, f34, t, mask, flag);
    func_00165D00(D_00275460 - t);
    for (i = 0; i < f18->f20; i++) {
        Vec4_166830 p, q, r;
        if (mask && mask[f18->f18[i]->f4]) continue;
        f18->f18[i]->v2(f34, &r);
        p = f200[f18->f18[i]->f4];
        if (flag) {
            float x = p.x, y = p.y, z = p.z;
            if (fC == 0) x = -x; else if (fC == 1) y = -y; else if (fC == 2) z = -z;
            p.x = x; p.y = y; p.z = z;
        }
        func_0015C7D0(&q, &r, &p, t);
        if (flag) {
            float x = q.x, y = q.y, z = q.z;
            if (fC == 0) x = -x; else if (fC == 1) y = -y; else if (fC == 2) z = -z;
            q.x = x; q.y = y; q.z = z;
            idx = f1F0[f18->f18[i]->f4];
        } else {
            idx = f18->f18[i]->f4;
        }
        f1EC[idx].f34->func_00199300(&r);
    }
    for (i = 0; i < f18->f1C; i++) {
        Vec4_166830 p, q;
        volatile float k, dx, dy, dz;
        if (mask && mask[f18->f14[i]->f4]) continue;
        p.x = p.y = p.z = 0.0f;
        p.w = 1.0f;
        f18->f14[i]->v3(f34, &p);
        q = f204[f18->f14[i]->f4];
        if (flag) {
            func_001640D0(f4, f1EC[f1F0[f18->f14[i]->f4]].f34->f170, fC, &q);
            idx = f1F0[f18->f14[i]->f4];
        } else {
            idx = f18->f14[i]->f4;
        }
        k = D_00275460 - t;
        dx = q.x - p.x;
        dy = q.y - p.y;
        dz = q.z - p.z;
        p.x = p.x + dx * k;
        p.y = p.y + dy * k;
        p.z = p.z + dz * k;
        p.w = 1.0f;
        if (flag) {
            func_001640D0(f4, f1EC[idx].f34->f170, fC, &p);
        } else {
            f1EC[idx].f34->func_00199650(&p);
        }
    }
}

void C_00166C50::func_00166C50(int param_1)
{
    int r = D_002EF7D0->func_00162B20(param_1, 1);
    f10 = 0;
    f18 = r;
    f30 = 0;
    f34 = 0;
}

void C_00166C80::func_00166C80(S_00166C80_Arg *param_1, int param_2)
{
    func_00164840(param_1, param_1->f3c, param_2);
}

void C_00166CA0::func_00166CA0(C_00166CA0 *volatile src, int arg) {
 int len=strlen(src->f138);
 int lim=79;
 int count=AsmMinI(lim,len);
 func_001E8920(this->f138,src->f138,count);
 this->f138[count]=0;
 this->f10=src->f10; this->f14=src->f14; this->f18=src->f18; this->f38=src->f38; this->f30=src->f30;
 { const char *s0=src->f48; char *d0=this->f48; char c0; do { c0=*s0++; *d0++=c0; } while(c0); }
 {
  const char *s; char *d; char c;
  s=src->f98; d=this->f98; do { c=*s++; *d++=c; } while(c);
  s=src->fE8; d=this->fE8; do { c=*s++; *d++=c; } while(c);
  s=src->f190; d=this->f190; do { c=*s++; *d++=c; } while(c);
 }
 this->func_001662A0(arg);
 if(!this->f1F8) this->f1F8=(S_00166CA0_Item *)func_001E8AA5(this->f1E8*64);
 for(int i=0;i<this->f1E8;i++) this->f1F8[i].func_000264C0(&src->f1F8[i]);
 this->f1FC=1; this->func_001646B0();
}

void *C_00166E70::func_00166E70(int flags)
{
    C_00166E70_Outer *outer = (C_00166E70_Outer *)((char *)this - 0x220);
    outer->sub220.func_00164520();
    outer->sub220.func_00157660();
    if (flags & 1) {
        func_001E891B(outer);
    }
    return outer;
}

void C_00166CA0::func_00166EB0(int param_1)
{
 char buf[64];
 char buf2[64];
 register unsigned int len;
 f8->func_00169710(D_00287E90);
 f8->func_00168BE0(D_00277274,D_00275630,f190,-1);
 len = strlen(f190);
 if (!len) strcpy(f190,D_002A46E8);
 f8->func_00168BE0(D_00287E84,D_00284644,f98,-1);
 f1F4 = f8->func_00168BE0(D_00287E78,D_00284644,fE8,-1) != 0;
 f8->func_00168C20(D_00277288,0,&f14);
 f8->func_00168C20(D_00287D8C,1,&f20);
 f8->func_00168C20(D_00287D78,1,&f24);
 if(f8->func_00168550(D_00287D68,buf,-1) && func_001EA426(buf,D_00287D5C))
 f28 = func_001EA426(buf,D_00287D50)==0;
 else f28=0;
 if(f8->func_00168550(D_00287D40,buf,-1)) {
 if(!func_001EA426(buf,D_00287D38)) f2C=0;
 else { func_001EA426(buf,D_00287D30); f2C=1; }
 }
 if(f8->func_00168550(D_00287E6C,buf2,-1) && func_001EA426(buf,D_00287E64)) {
 if(!func_001EA426(buf,D_00287E5C)) fC=1;
 else if(!func_001EA426(buf,D_00287E54)) fC=2;
 } else fC=0;
 func_001662A0(param_1);
 func_00164700();
 func_001643A0();
 func_001646B0();
}

