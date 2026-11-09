/* 5 functions from 0x00013A40 to 0x000149A0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

struct S_11FF0_State3 {
    void *vtbl;
    int f4;
    char pad8[8];
    int f10;
    char pad14[8];
    int **f1c;
    void func_00012240(void *arg1, float arg2);
};

struct S_11FF0_StateA {
    void *vtbl;
    char pad4[4];
    int f8;
    char padC[8];
    int f14;
    char pad18[8];
    int **f20;
    void func_000122E0(void *arg1, float arg2);
};

struct S_11FF0_StateB {
    void *vtbl;
    char pad4[8];
    int fC;
    char pad10[8];
    int f18;
    char pad1C[8];
    int **f24;
    void func_00012380(void *arg1, float arg2);
};

struct C_00013F50_Dst {
    char pad0[0x3AC];
    int f3ac;
    char pad3b0[0x31];
    u8 f3e1;
};

struct S_00013A40_Ini {
    S_00013A40_Ini();
    ~S_00013A40_Ini();
    int func_00169490(const char *path, int flags);
    int func_00169710(const char *name);
    int func_00168C20(const char *key, int def, int *dst);
    int func_00168BE0(const char *k1, const char *k2, char *dst, int size);
    char pad[0x4CC];
};

struct S_00013A40_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(char *name, int a, int b, int c, int d);
};

struct S_00013A40_ObjImpl {
    S_00013A40_ObjImpl(void *a, int b, int c);
    char pad[0x20C];
};

extern char D_002A48F8[];
extern char D_0027568C[], D_00275680[], D_002A47F0[], D_002A5348[], D_002A5870[];
extern char D_00275678[], D_00275668[], D_00275658[], D_00275644[], D_00275634[];
extern char D_00275630[], D_00275620[], D_0027560C[];
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
int func_001ADCC0(char *dst, int size, const char *fmt, ...);
int func_00011260(int lo, int hi);
void *func_001E8A44(unsigned int size);
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
template <class T> inline const T &Min_00013A40(const T &a, const T &b) { return a > b ? b : a; }
static __forceinline int Clamp_00013A40(const char *s)
{
    volatile int len = strlen(s);
    volatile int lim = 0x103;
    volatile int res;
    int a = lim, b = len;
    int t = a > b ? b : a;
    res = t;
    return res;
}
inline int MinV_00013A40(int a, int b) { return a > b ? b : a; }
inline int Clamp2_00013A40(const char *s)
{
    volatile int len = strlen(s);
    volatile int lim = 0x103;
    volatile int res;
    res = lim > len ? len : lim;
    return res;
}

struct C_00013F50 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int *f1c;
    int *f20;
    int *f24;
    void func_00013F50(C_00013F50_Dst *dst, int kind, void *arg1, float arg2);
    void func_00013A40(char *path);
};

extern int D_002754CC;
extern int D_002754B8;

void func_001E891B(void *p);

/* an owned component with a virtual teardown at slot 2 */
struct S_00014850_State {
    char pad0[4];
    int f4;
};

struct S_00014020_Part {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    char pad4[0x20];
    S_00014850_State *f24;
    void func_0008AB90(void *a);
};

struct S_00014850_Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

/* a vector that starts as (0, 0, 0, 1) */
struct V4_00014850 : S_00014850_Vec4 {
    V4_00014850() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct S_00014850_Track {
    int count;
    S_00014850_Vec4 *entries;
};

struct S_00014850_Globals {
    char pad0[0x4C0];
    int f4c0;
    char pad4c4[0x588 - 0x4C4];
    S_00014850_Track **f588;
};

struct S_00014850_Player {
    char pad0[0x1C8];
    int f1c8;
};

struct S_00013A40_Ctx {
    char pad0[0xB4];
    void *fb4;
};

struct S_00014850_Root {
    char pad0[4];
    S_00013A40_Ctx *f4;
    char pad8[0x2A4 - 8];
    S_00014850_Player *f2a4;
};

extern S_00014850_Globals *D_002B9120;
extern S_00014850_Root *D_002A8490;
extern f32 D_00275600;

/* a small heap object whose destructor only resets its vtable */
struct S_00014020_Small {
    void *vtbl;
};

/* the ref-counted block shared by every instance */
struct S_00014020_Shared {
    int refs;
    char pad4[0x18];
    void *f1c;
    void *f20;
    void *f24;
};

extern S_00014020_Shared *D_002AF44C;

/* AIPedestrian */
struct C_00014020 {
    void *vtbl;
    char pad4[0x380];
    S_00014020_Part *f384;
    S_00014020_Small *f388;
    S_00014020_Small *f38C;
    S_00014020_Small *f390;
    S_00014020_Small *f394;
    S_00014020_Small *f398;
    S_00014020_Small *f39C;
    S_00014020_Small *f3A0;
    S_00014020_Small *f3A4;
    S_00014020_Small *f3A8;
    char pad3AC[4];
    int f3B0;
    int f3B4;
    char pad3B8[4];
    int f3BC;
    char pad3C0[0x1C];
    u8 f3DC;
    char pad3DD[3];
    u8 f3E0;
    char pad3E1[3];
    S_00014850_Vec4 f3E4;
    void func_00014020();
    void func_00014850(int arg);
    int func_00012730(S_00014850_Vec4 *a, S_00014850_Vec4 *b, S_00014850_Vec4 *c, int d, int e);
    void func_001C75A0();
};


extern char D_002A5EA0[], D_002A60B0[], D_002A45E0[], D_002A5FA8[], D_002756AC[], D_002756A0[];
extern int D_00275554, D_00275564, D_00275574, D_00275584, D_00275594, D_002755A4, D_002755B4, D_002755C4, D_002755D4;
extern S_00014850_Vec4 D_002A050C, D_002A04FC;
int func_001EA426(const char*, const char*);
struct State_14170 { void *vtbl; int kind; void *owner; S_00014850_Vec4 vec; int last; };
struct Machine_14170 {
 char pad[0x6c];
 Machine_14170 *func_001AC080();
 void func_001AC0A0(State_14170*, char*);
 void func_0008AB90(State_14170*);
};
struct C_14170 {
 char pad[0xc0]; char *fc0; char padc4[0x2c0];
 Machine_14170 *f384;
 State_14170 *f388,*f38c,*f390,*f394,*f398,*f39c,*f3a0,*f3a4,*f3a8;
 int f3ac,f3b0,f3b4,f3b8,f3bc;
 char pad3c0[0xc]; float f3cc; char pad3d0[0x12]; unsigned char f3e2,f3e3;
 char pad3e4[0x20]; S_00014850_Vec4 f404;
 int f414,f418,f41c,f420,f424,f428; char f42c[0x104];
    C_14170 *func_00014170(char*,unsigned char,int,int,char*,char*,float,int,int,int,S_00014850_Vec4*);
 void func_001C76B0(int,int,S_00014850_Vec4*,int,int,S_00014850_Vec4,S_00014850_Vec4);
 void func_001C6DA0(int,int);
};
static __forceinline State_14170 *Make_14170(unsigned size, void *vt, int kind) {
 State_14170 *s=(State_14170*)func_001E8A44(size);
 if(s) { s->vtbl=vt;s->kind=kind;s->owner=0; return s; }
 return 0;
}
extern f32 D_002A0508;
#include <new>
static __forceinline S_00014850_Vec4 Vec00014850(void) {
 S_00014850_Vec4 v;
 v.z = 0; v.y = 0; v.x = 0; v.w = 1;
 return v;
}

void C_00013F50::func_00013A40(char *path)
{
    int n1, n2, n3, mode;
    char val[0x104];
    char name[0x104];
    char saved[0x104];
    S_00013A40_Ini *ini;
    int i;
    f0++;
    if (f1c != 0 || f20 != 0 || f24 != 0) {
        return;
    }
    ini = new S_00013A40_Ini;
    if (ini->func_00169490(path, 0)) {
        {
        int slen = strlen(D_002A48F8);
        int lim = 0x103;
        int n = AsmMinI(lim, slen);
        func_001E8920(saved, D_002A48F8, n);
        saved[n] = 0;
        }
        ini->func_00169710(D_0027568C);
        ini->func_00168C20(D_00275680, 1, &mode);
        if (mode == 1) {
            func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
        } else {
            func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
        }
        ini->func_00168C20(D_00275668, 0, &n1);
        ini->func_00168C20(D_00275658, 0, &n2);
        ini->func_00168C20(D_00275644, 0, &n3);
        if (n1 > 0) {
            f1c = (int *)func_001E8A44(n1 * 4);
            for (i = 0; i < n1; i++) {
                func_001ADCC0(name, 0x104, D_00275634, i + 1);
                ini->func_00168BE0(name, D_00275630, val, 0x104);
                if (val[0] != 0 && f10 < n1) {
                    ((S_00013A40_Obj **)f1c)[f10] = (S_00013A40_Obj *)new S_00013A40_ObjImpl(D_002A8490->f4->fb4, D_002B9120->f4c0, 1);
                    ((S_00013A40_Obj **)f1c)[f10]->v4(val, 1, 1, 0, 0);
                    f10++;
                }
            }
            f4 = func_00011260(0, f10 - 1);
        }
        if (n2 > 0) {
            f20 = (int *)func_001E8A44(n2 * 4);
            for (i = 0; i < n2; i++) {
                func_001ADCC0(name, 0x104, D_00275620, i + 1);
                ini->func_00168BE0(name, D_00275630, val, 0x104);
                if (val[0] != 0 && f14 < n2) {
                    ((S_00013A40_Obj **)f20)[f14] = (S_00013A40_Obj *)new S_00013A40_ObjImpl(D_002A8490->f4->fb4, D_002B9120->f4c0, 1);
                    ((S_00013A40_Obj **)f20)[f14]->v4(val, 1, 1, 0, 0);
                    f14++;
                }
            }
            f8 = func_00011260(0, f14 - 1);
        }
        if (n3 > 0) {
            f24 = (int *)func_001E8A44(n3 * 4);
            for (i = 0; i < n3; i++) {
                func_001ADCC0(name, 0x104, D_0027560C, i + 1);
                ini->func_00168BE0(name, D_00275630, val, 0x104);
                if (val[0] != 0 && f18 < n3) {
                    ((S_00013A40_Obj **)f24)[f18] = (S_00013A40_Obj *)new S_00013A40_ObjImpl(D_002A8490->f4->fb4, D_002B9120->f4c0, 1);
                    ((S_00013A40_Obj **)f24)[f18]->v4(val, 1, 1, 0, 0);
                    f18++;
                }
            }
            fC = func_00011260(0, f18 - 1);
        }
        {
        int slen = strlen(saved);
        int lim = 0x103;
        int n = AsmMinI(lim, slen);
        func_001E8920(D_002A48F8, saved, n);
        D_002A48F8[n] = 0;
        }
    }
    delete ini;
}

void C_00013F50::func_00013F50(C_00013F50_Dst *dst, int kind, void *arg1, float arg2)
{
    dst->f3ac = 0;
    switch (kind) {
    case 0:
        if (f20 != 0) {
            ((S_11FF0_StateA *)this)->func_000122E0(arg1, arg2);
            dst->f3ac = f20[f8];
            dst->f3e1 = 1;
        }
        break;
    case 1:
        if (f1c != 0) {
            ((S_11FF0_State3 *)this)->func_00012240(arg1, arg2);
            dst->f3ac = f1c[f4];
            dst->f3e1 = 1;
        }
        break;
    case 2:
        if (f24 != 0) {
            ((S_11FF0_StateB *)this)->func_00012380(arg1, arg2);
            dst->f3ac = f24[fC];
            dst->f3e1 = 1;
        }
        break;
    }
}

void C_00014020::func_00014020()
{
    S_00014020_Small *p;
    S_00014020_Shared *s;

    vtbl = &D_002754CC;
    if (f384 != 0) {
        f384->vf2();
    }
    p = f388;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f38C;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f390;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f394;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f398;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f39C;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f3A0;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f3A4;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    p = f3A8;
    if (p != 0) {
        p->vtbl = &D_002754B8;
        func_001E891B(p);
    }
    D_002AF44C->refs--;
    s = D_002AF44C;
    if (s->refs <= 0) {
        func_001E891B(s->f1c);
        func_001E891B(s->f20);
        func_001E891B(s->f24);
        func_001E891B(s);
        D_002AF44C = 0;
    }
    func_001C75A0();
}

extern "C" char *strcpy(char*,const char*);
#pragma intrinsic(strcpy)
C_14170 *C_14170::func_00014170(char *volatile name,unsigned char flag,int mode,int a,char *path,char *type,float value,int b,int c,int d,S_00014850_Vec4 *vec)
{
 char save0[0x104],save1[0x104];
 f404 = *vec;
 f3b8=c; f3e3=flag;
 { int slen=(int)strlen(D_002A5EA0); int lim=0x103; int len=AsmMinI(lim,slen);
 func_001E8920(save0,D_002A5EA0,len);save0[len]=0; }
 { int slen=(int)strlen(D_002A60B0); int lim=0x103; int len=AsmMinI(lim,slen);
 func_001E8920(save1,D_002A60B0,len);save1[len]=0; }
 if(mode==1) {
 func_001ADCC0(D_002A5EA0,0x104,D_00275678,D_002A5348,D_002A45E0);
 func_001ADCC0(D_002A60B0,0x104,D_00275678,D_002A5348,D_002A5FA8);
 } else {
 func_001ADCC0(D_002A5EA0,0x104,D_00275678,D_002A5870,D_002A45E0);
 func_001ADCC0(D_002A60B0,0x104,D_00275678,D_002A5870,D_002A5FA8);
 }
 func_001C76B0(a,d,vec,0,0,D_002A050C,D_002A050C);
 f3b4=b;f3b0=c;
 strcpy(f42c,name);
 f3cc=value+0.0f;
 Machine_14170 *machine=(Machine_14170*)func_001E8A44(0x6c);
 f384=machine?machine->func_001AC080():0;
 f388=Make_14170(0xc,&D_00275554,0);f388->owner=this;
 f38c=Make_14170(0xc,&D_00275564,5);f38c->owner=this;
 f390=Make_14170(0xc,&D_00275574,6);f390->owner=this;
 f398=Make_14170(0xc,&D_00275594,2);f398->owner=this;
 f394=Make_14170(0xc,&D_00275584,1);f394->owner=this;
 State_14170 *state;
 void *mem=func_001E8A44(0x20);
 if(mem) {
 state=(State_14170*)mem;
 state->vec.w=1;
 state->vtbl=&D_002755A4;
 state->vec.z=0;state->vec.y=0;state->vec.x=0;
 state->kind=3;state->owner=0;
 state->vec.x=D_002A04FC.x;state->vec.y=D_002A04FC.y;state->vec.z=D_002A04FC.z;state->vec.w=D_002A0508;
 } else {
 state=0;
 }
 f39c=state;f39c->owner=this;
 f3a0=Make_14170(0xc,&D_002755B4,4);f3a0->owner=this;
 f3a4=Make_14170(0xc,&D_002755C4,7);f3a4->owner=this;
 f3a8=Make_14170(0x10,&D_002755D4,8);f3a8->owner=this;
 f384->func_001AC0A0(f388,f42c);
 f414=0;f418=1;f41c=2;f420=3;f424=4;f428=5;
 if(f3e2==2) {
 *(int*)(fc0+0x54)=0;*(int*)(fc0+0xac)=0;*(int*)(fc0+0x104)=0;
 *(int*)(fc0+0x15c)=0;*(int*)(fc0+0x1b4)=0;*(int*)(fc0+0x20c)=0;
 }
 if(D_002A8490->f4) {
 if(func_001EA426(type,D_002756AC)==0) f3e2=1;
 else f3e2=func_001EA426(type,D_002756A0)==0?2:0;
 if(!D_002AF44C) {
 C_00013F50 *shared=(C_00013F50*)func_001E8A44(0x28);
 if(shared) {
 shared->f4=0;shared->f8=0;shared->fC=0;shared->f0=0;shared->f1c=0;shared->f10=0;shared->f20=0;shared->f14=0;shared->f24=0;shared->f18=0;
 } else {
 shared=0;
 }
 D_002AF44C=(S_00014020_Shared*)shared;
 }
 ((C_00013F50*)D_002AF44C)->func_00013A40(path);
 }
 S_00014850_Player *player=D_002A8490->f2a4;
 if(player && !player->f1c8) f3bc=0;
 f384->func_0008AB90(f388);f3bc=0;func_001C6DA0(f414,1);
 { int slen=(int)strlen(save0); int lim=0x103; int len=AsmMinI(lim,slen);
 func_001E8920(D_002A5EA0,save0,len);D_002A5EA0[len]=0; }
 { int slen=(int)strlen(save1); int lim=0x103; int len=AsmMinI(lim,slen);
 func_001E8920(D_002A60B0,save1,len);D_002A60B0[len]=0; }
 return this;
}
void C_00014020::func_00014850(int arg)
{
    S_00014850_State *st = f384->f24;
    if ((st == 0 || st->f4 != 7) && arg == 1) {
        int next = f3B0 + 1;
        S_00014850_Player *p;
        if (next >= D_002B9120->f588[f3B4]->count) {
            next = 0;
        }
        V4_00014850 zero;
        S_00014850_Vec4 from;
        S_00014850_Vec4 to;
        to = D_002B9120->f588[f3B4]->entries[next];
        to.y += 2.0f;
        from = f3E4;
        from.y += 2.0f;
        if (func_00012730(&from, &to, &zero, 1, 0) == 0) {
            f3DC = 0;
            f3E0 = 1;
            p = D_002A8490->f2a4;
            if (p != 0 && p->f1c8 == 0) {
                f3BC = 1;
            }
            f384->func_0008AB90(f394);
        }
    }
}

