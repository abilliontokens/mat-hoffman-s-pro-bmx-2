/* 11 functions from 0x0006D3E0 to 0x0006E330, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Objective_6D {
 char pad[0x1a8]; int f1a8;
 int func_00096740();
};
struct Objectives_6D {
 int func_000976A0();
 int func_00097C60();
 Objective_6D **func_00097C20();
};
struct Text_6D {
 char pad[0x34]; int scale; char pad38[0x10]; unsigned int color; char pad4c[2]; unsigned char flags;
 void func_001D6600();
 void func_0005E840(const char *);
};
extern char D_00278AEC[];
int func_001ADCC0(char *, unsigned int, const char *, ...);

struct C_0006DF20 {
    void func_0006DF20(int param_1);
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern int D_0027850C;
extern int D_00278A7C;
extern int D_00278AF0;
extern float D_00278500;
extern int D_002B902C;
extern int D_002B9030;

struct ClampObj_0006DD40 { char pad0[0x10]; float f10, f14; };
struct MidObj_0006DD40 { ClampObj_0006DD40 *func_0018C070(); };
struct LookupObj_0006DD40 { int *func_0018C160(int); void func_0018C780(int n, int *ids, int zero); };
extern int D_002786A0, D_00278690, D_00278678;
extern float D_00275AEC;

struct S_0006D750_Obj {
    char pad0[4];
    char pad4[0x24];
    int width;
    int height;
    char pad30[8];
    union {
        unsigned int color;
        struct { unsigned int lo : 24; unsigned int hi : 8; } cb;
    };
    float a, b, c, d;
    float w, h;
    char pad54[4];
    unsigned char flags;
    S_0006D750_Obj *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
};

struct S_0006D750_Txt {
    int pad0, x, y;
    char padC[0x38];
    int align;
    unsigned int color;
    char pad4c[2];
    unsigned char flags;
    S_0006D750_Txt *func_001D5E90();
    void func_001D5FA0(int font, char *name, int size, int z);
    void func_001D6190(int a, int b, int c);
};

struct S_002A60B0 { int f0, f4, f8, fC; unsigned char f10; };
extern S_002A60B0 D_002A60B0, D_00278664;
extern int D_00278668, D_0027866C, D_00278670;
extern char D_00278674;
extern int D_002A60B4, D_002A60B8, D_002A60BC;
extern char D_002A60C0;
void *func_001E8A44(int size);
extern float D_00275544, D_00278650, D_00278654, D_0027653C, D_00275800, D_00278AE8;
extern char D_00278658[], D_00278638[], D_00278608[], D_00278600[];
extern char D_00275678[], D_002A5870[], D_002A5FA8[];
extern int D_0028F5EC, D_0028F5E0;

static __forceinline void pos6D(S_0006D750_Txt *p, int x, int y) { if (p->x != x || p->y != y) { p->y = y; p->x = x; p->flags |= 6; } }
static __forceinline void align6D(S_0006D750_Txt *p, int a) { if (p->align != a) { p->align = a; p->flags |= 6; } }
static __forceinline void color6D(S_0006D750_Txt *p, unsigned int c) { if (p->color != c) { p->flags |= 8; p->color = (p->color & (c | 0xff000000)) | (c & 0xffffff); } }
static __forceinline void uv6D(S_0006D750_Obj *p) { float a = p->w * D_00278654; p->flags |= 4; p->a = a; p->b = p->w * D_00275544; p->c = p->h * D_0027653C; p->d = p->h * D_00275544; }
static __forceinline void width6D(S_0006D750_Obj *p, int v) { if (p->width != v) { p->width = v; p->flags |= 1; } }
static __forceinline void height6D(S_0006D750_Obj *p, int v) { if (p->height != v) { p->height = v; p->flags |= 1; } }
struct C_001D5AD0 {
    ClampObj_0006DD40 *func_001D5AA0();
    void func_001D5AD0(void);
};

struct C_000601D0 {
    void func_000601D0(void);
};

struct C_0006E250_E8 {
    char pad0[0x160];
    C_000601D0 *f160;
    char pad164[0x5c]; Objectives_6D *p1C0;
};

struct CreatorObj {
    int func_00026500(int a, int b);
};
extern CreatorObj *D_002A7CB8;

struct C_002A8490 {
    char pad0[0x270];
    int f270;
    int f274;
    char pad278[0x70];
    int **p2E8;
    LookupObj_0006DD40 *p2EC;
};
extern C_002A8490 *D_002A8490;

struct C_0006D590_V {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

/* LevelObjectivesMenu */
struct C_0006D590 {
    void *vtbl;
    char pad4[0x20];
    u32 unk24[8];
    u32 unk44[8];
    int unk64;
    u32 unk68[15];
    C_001D5AD0 *unkA4;
    C_001D5AD0 *unkA8;
    C_001D5AD0 *unkAC;
    C_001D5AD0 *unkB0[5];
    C_001D5AD0 *unkC4[5];
    C_001D5AD0 *unkD8;
    C_001D5AD0 *unkDC;
    int unkE0;
    int unkE4;
    C_0006E250_E8 *unkE8;
    float unkEC;
    C_001D5AD0 *unkF0;
    int unkF4;
    int unkF8;
    void func_00157600(int a0);
    void func_00157660();
    void func_0006D640();
    int func_00157960();
    void func_0006DFC0();
    void func_0006DD40();
    void func_001578D0();
    C_0006D590 *func_0006D590(int a0);
    C_0006D590 *func_0006D750(C_0006E250_E8 *arg);
    void func_0006DF50();
    int func_0006E1E0();
    int func_0006E250(float dt);
};

struct PtrObj_0006D {
    void func_001D6410(void);
};
struct VObj_0006D {
    virtual void v0(int flags);
};
void func_001E891B(void *p);
void func_00157660(void);

struct C_00031610 {
    void func_00031610(int param_1, int param_2);
};

int func_001361E0(int, int, int *, int);
extern int D_002B9028;
extern float D_00275544;
struct HorseResultsScreen {
    char pad0[0xD0];
    int unkD0;
    C_00031610 *unkD4;
    int unkD8;
    float unkDC;
    int unkE0, unkE4, unkE8, unkEC;
    int func_0006D3E0(int *a, int b);
    int func_00157BF0(int *a, int b);
};

struct C_0006E2C0 {
    char pad0[0x64];
    int unk64;
    char pad68[0x80];
    C_00031610 *unkE8;
    int unkEC;
    char padF0[8];
    int unkF8;
    int func_0006E2C0(int *param_1, int param_2);
};


int HorseResultsScreen::func_0006D3E0(int *a, int b) {
 if(unkEC) { D_002B9028=a[2]; unkEC=0; }
 if(unkE0 || unkDC>D_00275544) return 0;
 if(func_001361E0(2,2,a,0x80000000)) {
 unkD4->func_00031610(2,1);
 unkE4=unkD0; unkE8=1; --unkD0;
 if(unkD0<0) unkD0=1;
 } else if(func_001361E0(3,2,a,0x80000000)) {
 unkD4->func_00031610(2,1);
 unkE4=unkD0; unkE8=1; ++unkD0;
 if(unkD0>1) unkD0=0;
 } else {
 if(func_001361E0(4,2,a,0x80000000) || func_001361E0(23,2,a,0x80000000)) {
 unkD4->func_00031610(4,1); unkE0=1; unkD8=0; return 0;
 }
 if(!func_001361E0(0,2,a,0x80000000)) func_001361E0(1,2,a,0x80000000);
 }
 return func_00157BF0(a,b);
}

C_0006D590 *C_0006D590::func_0006D590(int a0)
{
    u32 *p;
    C_001D5AD0 **q;
    int n;
    int i;

    func_00157600(a0);
    vtbl = &D_0027850C;
    p = unk44;
    n = 8;
    do {
        p[-8] = 0;
        p[0] = 0;
        p++;
    } while (--n != 0);
    vtbl = &D_00278A7C;
    unk64 = 0;
    unkEC = 0;
    for (i = 0; i < 15; i++) {
        unk68[i] = 0;
    }
    for (i = 0; i < 3; i++) {
        (&unkA4)[i] = 0;
    }
    unkD8 = 0;
    unkDC = 0;
    unkE0 = 0;
    unkE4 = 0;
    unkE8 = 0;
    unkF0 = 0;
    unkF4 = 0;
    q = unkC4;
    n = 5;
    do {
        q[-5] = 0;
        q[0] = 0;
        q++;
    } while (--n != 0);
    unkF8 = -1;
    return this;
}

void C_0006D590::func_0006D640()
{
    int i;
    vtbl = &D_00278A7C;
    for (i = 0; i < 15; i++) {
        PtrObj_0006D *p = (PtrObj_0006D *)unk68[i];
        if (p) {
            p->func_001D6410();
            func_001E891B(p);
        }
    }
    for (i = 0; i < 2; i++) {
        VObj_0006D *v = ((VObj_0006D **)&unkA4)[i];
        if (v) v->v0(1);
    }
    if (unkD8) ((VObj_0006D *)unkD8)->v0(1);
    if (unkDC) ((VObj_0006D *)unkDC)->v0(1);
    {
        PtrObj_0006D *p = (PtrObj_0006D *)unkE0;
        if (p) {
            p->func_001D6410();
            func_001E891B(p);
        }
    }
    if (unkF0) {
        ((VObj_0006D *)unkF0)->v0(1);
        unkF0 = 0;
    }
    {
        PtrObj_0006D *p = (PtrObj_0006D *)unkF4;
        if (p) {
            p->func_001D6410();
            func_001E891B(p);
            unkF4 = 0;
        }
    }
    for (i = 0; i < 5; i++) {
        if (unkB0[i]) {
            ((VObj_0006D *)unkB0[i])->v0(1);
            unkB0[i] = 0;
        }
        if (unkC4[i]) {
            ((VObj_0006D *)unkC4[i])->v0(1);
            unkC4[i] = 0;
        }
    }
    func_00157660();
}

C_0006D590 *C_0006D590::func_0006D750(C_0006E250_E8 *arg)
{
    int ids[3];
    int *r;
    int font1, font2;
    int i;
    S_0006D750_Obj *o;
    S_0006D750_Txt *t;

    unkE8 = arg;
    ids[0] = (int)&D_00278690;
    ids[1] = (int)&D_002786A0;
    ids[2] = (int)&D_00278678;
    D_002A8490->p2EC->func_0018C780(3, ids, 0);
    D_002A8490->p2EC->func_0018C160((int)&D_002786A0);
    r = D_002A8490->p2EC->func_0018C160((int)&D_00278690);
    font1 = r ? *r : 0;
    r = D_002A8490->p2EC->func_0018C160((int)&D_00278678);
    font2 = r ? *r : 0;
    D_002A60B0.f0 = D_00278664.f0;
    D_002A60B0.f4 = D_00278668;
    D_002A60B0.f8 = D_0027866C;
    D_002A60B0.fC = D_00278670;
    D_002A60B0.f10 = D_00278674;

    o = (S_0006D750_Obj *)func_001E8A44(0x64);
    unkA4 = (C_001D5AD0 *)(o ? o->func_001D5760() : 0);
    ((S_0006D750_Obj *)unkA4)->func_001D5810(D_00278658, 0, 0, 0);
    width6D((S_0006D750_Obj *)unkA4, 0x44200000);
    height6D((S_0006D750_Obj *)unkA4, 0x42480000);
    uv6D((S_0006D750_Obj *)unkA4);

    o = (S_0006D750_Obj *)func_001E8A44(0x64);
    unkA8 = (C_001D5AD0 *)(o ? o->func_001D5760() : 0);
    ((S_0006D750_Obj *)unkA8)->func_001D5810(D_00278658, 0, 398.0f, 0);
    width6D((S_0006D750_Obj *)unkA8, 0x44200000);
    height6D((S_0006D750_Obj *)unkA8, 0x42480000);
    uv6D((S_0006D750_Obj *)unkA8);

    for (i = 0; i < 5; i++) {
        float x;
        S_0006D750_Obj *n;
        o = (S_0006D750_Obj *)func_001E8A44(0x64);
        n = o ? o->func_001D5760() : 0;
        x = i * D_00278650;
        unkB0[i] = (C_001D5AD0 *)n;
        n->func_001D5810(D_00278658, x, 50.0f, 0);
        o = (S_0006D750_Obj *)func_001E8A44(0x64);
        unkC4[i] = (C_001D5AD0 *)(o ? o->func_001D5760() : 0);
        ((S_0006D750_Obj *)unkC4[i])->func_001D5810(D_00278658, x, 366.0f, 0);
        o = (S_0006D750_Obj *)unkC4[i];
        o->a = 0;
        o->b = 1.0f;
        o->c = 0.99f;
        o->d = 0;
        o->flags |= 4;
    }

    o = (S_0006D750_Obj *)func_001E8A44(0x64);
    unkD8 = (C_001D5AD0 *)(o ? o->func_001D5760() : 0);
    ((S_0006D750_Obj *)unkD8)->func_001D5810(D_00278638, 379.0f, 388.0f, 0);

    o = (S_0006D750_Obj *)func_001E8A44(0x64);
    unkDC = (C_001D5AD0 *)(o ? o->func_001D5760() : 0);
    ((S_0006D750_Obj *)unkDC)->func_001D5810(D_00278608, 379.0f, 388.0f, 0);

    o = (S_0006D750_Obj *)func_001E8A44(0x64);
    unkF0 = (C_001D5AD0 *)(o ? o->func_001D5760() : 0);
    ((S_0006D750_Obj *)unkF0)->func_001D5810(D_00278600, 0, 0, 0);
    {
        S_0006D750_Obj *p = (S_0006D750_Obj *)unkF0;
        unsigned int c = p->color;
        p->flags |= 2;
        p->color = c & 0xff000000;
    }
    {
        S_0006D750_Obj *p = (S_0006D750_Obj *)unkF0;
        unsigned char fl = p->flags;
        fl |= 2;
        *((unsigned char *)&p->color + 3) = 0x80;
        p->flags = fl;
    }
    height6D((S_0006D750_Obj *)unkF0, 0x43e00000);
    width6D((S_0006D750_Obj *)unkF0, 0x44200000);

    func_001ADCC0((char *)&D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);

    t = (S_0006D750_Txt *)func_001E8A44(0x60);
    unkE0 = (int)(t ? t->func_001D5E90() : 0);
    t = (S_0006D750_Txt *)unkE0;
    t->func_001D6190(font1, D_002A8490->p2E8[1][0x838 / 4], (int)&D_00278690);
    pos6D(t, 0x43ea0000, 0x43c48000);
    color6D(t, 0xffcccccc);
    align6D(t, D_0028F5EC);

    t = (S_0006D750_Txt *)func_001E8A44(0x60);
    unkF4 = (int)(t ? t->func_001D5E90() : 0);
    t = (S_0006D750_Txt *)unkF4;
    t->func_001D5FA0(font2, (char *)&D_00278678, 0x28, 0);
    pos6D(t, 0x43a00000, 0x42200000);
    color6D(t, 0xffcccccc);
    align6D(t, D_0028F5E0);

    for (i = 0; i < 15; i++) {
        float y;
        t = (S_0006D750_Txt *)func_001E8A44(0x60);
        t = t ? t->func_001D5E90() : 0;
        unk68[i] = (u32)t;
        t->func_001D5FA0(font1, (char *)&D_00278690, 0x2d, 0);
        y = i * D_00275800 + D_00278AE8;
        if (t->x != 0x43a00000 || *(float *)&t->y != y) {
            *(float *)&t->y = y;
            t->x = 0x43a00000;
            t->flags |= 6;
        }
        t = (S_0006D750_Txt *)unk68[i];
        align6D(t, D_0028F5E0);
    }
    return this;
}

void C_0006D590::func_0006DD40() {
 int ids[3]; int i; int *r; ClampObj_0006DD40 *o; C_001D5AD0 **e; LookupObj_0006DD40 *lk;
 ids[0]=(int)&D_002786A0; ids[1]=(int)&D_00278690; ids[2]=(int)&D_00278678;
 for(i=0;i<3;i++) {
 lk=D_002A8490->p2EC; r=lk->func_0018C160(ids[i]);
 if(r && *r) { o=((MidObj_0006DD40 *)*r)->func_0018C070(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
 }
 e=&unkA4; i=2;
 do { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; e++; i--; } while(i!=0);
 i=2;
 do {
 if(unkD8) { o=unkD8->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
 if(unkDC) { o=unkDC->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
 i--; } while(i!=0);
 if(unkF0) { o=unkF0->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
 func_001578D0();
}

void C_0006DF20::func_0006DF20(int param_1)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x39] = 1;
  in_ECX[0x19] = 0;
  (**(code **)(*in_ECX + 0x18))();
  in_ECX[0x3e] = param_1;
  return;
}

void C_0006D590::func_0006DF50()
{
    unkA4->func_001D5AD0();
    unkA8->func_001D5AD0();
    C_001D5AD0 **ptr = &unkC4[0];
    int count = 5;
    do {
        (*(ptr - 5))->func_001D5AD0();
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    if (unk64 != 0) {
        unkDC->func_001D5AD0();
    } else {
        unkD8->func_001D5AD0();
    }
    if (unkF0 != 0) {
        unkF0->func_001D5AD0();
    }
}

