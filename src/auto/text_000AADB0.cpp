/* 8 functions from 0x000AADB0 to 0x000ABD80, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
extern char D_0027C7DC[], D_0027C7BC[], D_0027C7A4[], D_0027C4D0[], D_0027C4BC[], D_00275680[], D_0027C790[];
void * __cdecl func_001E8920(void *, const void *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);

extern int D_0027C7F8;
extern int D_0027C724;

struct C_001B59E0 {
    void func_001B59E0();
};

struct C_000ABD60 {
    void *vtbl;
    C_000ABD60 *func_000ABD60();
};

struct C_00157660 {
    void func_00157660(void);
};

struct S_000AB490_28 {
    char pad0[0x110];
    int f110;
};

struct C_000AB490 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    S_000AB490_28 **f28;
    void func_000AB490(void);
};

extern char D_0027C704[], D_0027C6E4[], D_0027C6CC[], D_0027C6C4[], D_0027C6BC[], D_0027C6B4[], D_0027C6AC[], D_0027C6A4[], D_0027C69C[], D_0027C67C[], D_0027C670[], D_002764F0[];
void * __cdecl func_001E8A44(unsigned int);
void * __cdecl func_001E83E8(void *, unsigned int);
int __cdecl func_001ADCC0(char *, unsigned int, const char *, ...);
void __stdcall func_00011FF0(void *, int, int, void *);
void func_000A09F0();
struct C_000AADB0_Parser {
    int func_00169710(const char *);
    void func_00168C20(const char *, int, int *);
    void func_00168C50(const char *, int, float *);
    void func_00168BE0(const char *, const char *, char *, int);
};
struct C_000AADB0_Box {
    C_000AADB0_Box();
    float f0, f4, f8, fC, f10, f14;
    int f18;
    char **f1C;
    int *f20;
    int f24;
};
struct S_000AB030_Named {
    char pad0[0x28];
    char name[0x100];
};
struct S_000AB030_Sub {
    int f0;
    S_000AB030_Named *f4;
};
struct S_000AB030_ObjA {
    int f0;
    int f4;
    char pad8[0x19C];
    S_000AB030_Sub *f1A4;
};
struct S_000AB030_ObjB {
    int f0;
    int f4;
    S_000AB030_Named *f8;
};
struct S_000AB030_ListA {
    char pad0[0x24];
    int count;
    S_000AB030_ObjA **items;
};
struct S_000AB030_ListB {
    char pad0[0x24];
    int count;
    S_000AB030_ObjB **items;
};
struct S_000AB030_Arg {
    char pad0[0x348];
    int f348;
    char pad34C[0x5C];
    S_000AB030_ListB **f3A8;
    S_000AB030_ListA *f3AC;
};
void func_001E891B(void *p);
int func_001EA426(const char *a, const char *b);
char *func_001E8AC0(char *s, int c);
void func_0014FF00(const char *a, int b, int c, char *d, int e);
extern "C" void *__cdecl memset(void *, int, unsigned int);

struct C_000AADB0 {
    char pad[0x24];
    int f24;
    C_000AADB0_Box *f28;
    void func_000AADB0(C_000AADB0_Parser *);
    void func_000AB030(S_000AB030_Arg *arg);
};
/* ObjectExclusionBoxes */
struct C_000AB340_Obj {
    void func_00198390();
    void func_001983A0();
};

struct C_000AB340_Box {
    float f0, f4, f8, fC, f10, f14;
    int f18;
    int pad1C;
    C_000AB340_Obj **f20;
    int f24;
};

struct C_000AB340_Vec {
    float x, y, z, w;
};

struct C_000AB340_Cam {
    char pad0[0x170];
    C_000AB340_Vec f170;
    C_000AB340_Vec f180;
    C_000AB340_Vec f190;
};

#define VOL_000AB790(x) (*(volatile int *)&(x))

/* the 0x1e0-byte object in f110[]: vtable, name at +0x28 */
struct C_000ABBC0_Sub {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34();
    virtual int v35(char *name, int a, int b);
    char pad04[0x24];
    char name[0x80];
    void func_00199650(C_000AB340_Vec *a);
    void func_00198F50(C_000AB340_Vec *a, C_000AB340_Vec *b, int c, int d, int e);
    void func_0019ABA0(int a, int b);
    void func_0019AC50();
};

struct C_00143580_000AB790 {
    C_000ABBC0_Sub *func_00143580(int a);
};

struct S_000AB790_Owner {
    void func_001577A0(C_000ABBC0_Sub *item, int a);
};

struct S_000AB790_Global {
    char pad0[0x3A8];
    S_000AB790_Owner **f3A8;
    char pad3AC[0xFC];
    int *f4A8;
};

extern char D_002A60B0[], D_002A5FA8[], D_002A5348[], D_002A5870[], D_002A5D98[], D_002A5EA0[], D_00275678[], D_0027C588[];
extern C_000AB340_Vec D_002A2734, D_002A2754, D_002A2764;
extern S_000AB790_Global *D_002B9120;

struct C_000ABBC0_Obj {
    char name[0x104];
    int f104;
          int f108;
    int f10C;
    void **f110;
};

struct C_000ABBC0 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    C_000ABBC0_Obj **f28;
    void func_001578D0();
    void func_000ABBC0(void);
    void func_000AB4F0(C_000AADB0_Parser *);
    void func_000AB790(S_000AB030_Arg * volatile arg);
};

struct C_000AB340_Global {
    char pad0[4];
    C_000AB340_Cam *f4;
};

extern C_000AB340_Global *D_002EFDB8;

struct C_000AB340 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    C_000AB340_Box *f28;
    void func_001578D0();
    void func_000AB340(void);
};

void C_000AADB0::func_000AADB0(C_000AADB0_Parser *p)
{
 int count, n, start;
 volatile int total;
 char name[260], item[260];
 if (!p->func_00169710(D_0027C704)) return;
 p->func_00168C20(D_0027C6E4,0,&count);
 if(count<=0) return;
 C_000AADB0_Box *result;
 if(f28) {
 start=f24; total=f24=count+start;
 result=(C_000AADB0_Box *)func_001E83E8(f28,f24*40);
 } else {
 total=f24=count; start=0;
 int allocCount=count;
 int *mem=(int *)func_001E8A44(allocCount*40+4);
 if(mem) { *mem=allocCount; C_000AADB0_Box *objects=(C_000AADB0_Box *)(mem+1); func_00011FF0(objects,40,allocCount,(void *)func_000A09F0); result=objects; }
 else result=0;
 }
 f28=result;
 for(int i=start;i<total;i++) {
 func_001ADCC0(name,260,D_0027C6CC,i-start+1);
 if(p->func_00169710(name)) {
 p->func_00168C50(D_0027C6C4,0,&f28[i].f0);
 p->func_00168C50(D_0027C6BC,0,&f28[i].f4);
 p->func_00168C50(D_0027C6B4,0,&f28[i].f8);
 p->func_00168C50(D_0027C6AC,0,&f28[i].fC);
 p->func_00168C50(D_0027C6A4,0,&f28[i].f10);
 p->func_00168C50(D_0027C69C,0,&f28[i].f14);
 p->func_00168C20(D_0027C67C,0,&n);
 f28[i].f18=n;
 if(n>0) {
 f28[i].f20=(int *)func_001E8A44(n*4);
 f28[i].f1C=(char **)func_001E8A44(n*4);
 for(int j=0;j<n;j++) {
 func_001ADCC0(item,260,D_0027C670,j+1);
 f28[i].f1C[j]=(char *)func_001E8A44(260);
 f28[i].f20[j]=0;
 p->func_00168BE0(item,D_002764F0,f28[i].f1C[j],-1);
 }
 }
 }
 }
}

void C_000AADB0::func_000AB030(S_000AB030_Arg *arg)
{
    C_000AADB0 * volatile self = this;
    int i;
    int len;
    int res;
    int lim;
    char buf[260];
    int k;
    int j;

    if (f24 != 0) {
        for (i = 0; i < arg->f3AC->count; i++) {
            S_000AB030_ObjA *obj = arg->f3AC->items[i];
            if (obj != 0 && obj->f4 == 1) {
                func_0014FF00(obj->f1A4->f4->name, 0, 0, buf, 0);
                for (j = 0; j < self->f24; j++) {
                    for (k = 0; k < self->f28[j].f18; k++) {
                        char *nm = self->f28[j].f1C[k];
                        if (nm != 0 && func_001EA426(buf, nm) == 0) {
                            self->f28[j].f20[k] = (int)obj->f1A4->f4;
                            func_001E891B(self->f28[j].f1C[k]);
                            self->f28[j].f1C[k] = 0;
                            break;
                        }
                    }
                }
            }
        }
        for (i = 0; i < (*arg->f3A8)->count; i++) {
            S_000AB030_ObjB *obj = (*arg->f3A8)->items[i];
            if (obj != 0 && obj->f4 == 1 && obj->f8 != 0) {
                len = strlen(obj->f8->name);
                lim = 0x103;
                res = AsmMinI(lim, len);
                func_001E8920(buf, obj->f8->name, res);
                buf[res] = 0;
                char *dot = func_001E8AC0(buf, '.');
                if (dot != 0) {
                    memset(dot, 0, strlen(dot));
                }
                for (j = 0; j < self->f24; j++) {
                    for (k = 0; k < self->f28[j].f18; k++) {
                        char *nm = self->f28[j].f1C[k];
                        if (nm != 0 && func_001EA426(buf, nm) == 0) {
                            self->f28[j].f20[k] = (int)obj->f8;
                            func_001E891B(self->f28[j].f1C[k]);
                            self->f28[j].f1C[k] = 0;
                            break;
                        }
                    }
                }
            }
        }
        for (j = 0; j < self->f24; j++) {
            func_001E891B(self->f28[j].f1C);
            self->f28[j].f1C = 0;
        }
    }
}

void C_000AB340::func_000AB340(void)
{
    C_000AB340_Vec v = D_002EFDB8->f4->f170;
    int i;
    int j;

    if (f24 == 0) {
        func_001578D0();
        return;
    }
    for (i = 0; i < f24; i++) {
        if (v.x > f28[i].f0 && f28[i].f4 > v.x && f28[i].f10 < v.y && f28[i].f14 > v.y && f28[i].f8 < v.z && f28[i].fC > v.z) {
            f28[i].f24 = 1;
            for (j = 0; j < f28[i].f18; j++) {
                f28[i].f20[j]->func_00198390();
            }
        } else if (f28[i].f24 != 0) {
            f28[i].f24 = 0;
            for (j = 0; j < f28[i].f18; j++) {
                f28[i].f20[j]->func_001983A0();
            }
        }
    }
    func_001578D0();
}

void C_000AB490::func_000AB490(void)
{
    int func_001E891B(...);
    int i;

    vtbl = (void *)&D_0027C724;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            func_001E891B(f28[i]->f110);
            func_001E891B(f28[i]);
        }
        func_001E891B(f28);
    }
    ((C_00157660 *)this)->func_00157660();
}

void C_000ABBC0::func_000AB4F0(C_000AADB0_Parser * volatile p)
{
    C_000ABBC0 * volatile self = this;
    struct {
        int count;
        int n;
        int pb;
        int pa;
        volatile int bias;
        int res;
        int len;
        int lim;
    } t;
    char item[260], name[260];
    int start, total;
    C_000ABBC0_Obj **result;

    if (!p->func_00169710(D_0027C7DC)) return;
    p->func_00168C20(D_0027C7BC, 0, &t.count);
    if (t.count <= 0) return;
    C_000ABBC0 *initial = self;
    if (initial->f28) {
        start = initial->f24;
        initial->f24 = t.count + start;
        C_000ABBC0 *obj = self;
        total = obj->f24;
        result = (C_000ABBC0_Obj **)func_001E83E8(obj->f28, total * 4);
    } else {
        initial->f24 = t.count;
        C_000ABBC0 *obj = self;
        total = obj->f24;
        start = 0;
        result = (C_000ABBC0_Obj **)func_001E8A44(total * 4);
    }
    self->f28 = result;
    if (start < total) {
        t.bias = 1 - start;
        for (int i = start; i < total; i++) {
            func_001ADCC0(name, 260, D_0027C7A4, t.bias + i);
            if (p->func_00169710(name)) {
                p->func_00168BE0(D_0027C4D0, D_002764F0, item, -1);
                p->func_00168C20(D_0027C4BC, 1, &t.n);
                p->func_00168C20(D_00275680, 0, &t.pa);
                p->func_00168C20(D_0027C790, 0, &t.pb);
                self->f28[i] = (C_000ABBC0_Obj *)func_001E8A44(0x114);
                t.len = strlen(item);
                t.lim = 0x103;
                t.res = AsmMinI(t.lim, t.len);
                int k = t.res;
                func_001E8920(self->f28[i], item, k);
                *(volatile char *)&self->f28[i]->name[k] = 0;
                *(volatile int *)&self->f28[i]->f104 = t.n;
                *(volatile int *)&self->f28[i]->f108 = t.pa;
                *(volatile int *)&self->f28[i]->f10C = t.pb;
                if (t.n == 0) {
                    *(void * volatile *)&self->f28[i]->f110 = func_001E8A44(4);
                    *(void * volatile *)&self->f28[i]->f110[0] = 0;
                } else {
                    *(void * volatile *)&self->f28[i]->f110 = func_001E8A44(t.n * 4);
                    for (int j = 0; j < t.n; j++) *(void * volatile *)&self->f28[i]->f110[j] = 0;
                }
            }
        }
    }
}

void C_000ABBC0::func_000AB790(S_000AB030_Arg * volatile arg)
{
    C_000ABBC0 * volatile self = this;
    struct {
        volatile int res1;
        volatile int lim2;
        volatile int res2;
        volatile int len2;
    } t;
    int i;
    int j;
    int j2;
    int k;
    int n;
    int cnt;
    C_000ABBC0 *me;
    S_000AB030_ListA *la;
    S_000AB030_ListB *lb;
    S_000AB030_Named *src;
    char buf[260];

    me = this;
    cnt = me->f24;
    if (cnt != 0) {
        for (i = 0; i < cnt; i++, cnt = (me = self)->f24) {
            C_000ABBC0_Obj *obj = me->f28[i];
            k = 0;
            if (obj->f104 == 0) {
                if (obj->f108 != 0) {
                    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
                    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5348, D_002A5D98);
                } else {
                    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
                    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A5D98);
                }
                func_001ADCC0(buf, 0x104, D_0027C588, self->f28[i]);
                void *m = func_001E8A44(0x1e0);
                *(void * volatile *)&self->f28[i]->f110[0] = m ? ((C_00143580_000AB790 *)m)->func_00143580(1) : 0;
                C_000ABBC0_Sub *s = (C_000ABBC0_Sub *)self->f28[i]->f110[0];
                if (s->v35(buf, 0, 1)) {
                    j2 = strlen(buf);
                    k = 0x7f;
                    n = AsmMinI(k, j2);
                    func_001E8920(s->name, buf, n);
                    s->name[n] = 0;
                    s->func_00199650(&D_002A2734);
                    s->func_00198F50(&D_002A2764, &D_002A2754, 1, 0, 0);
                    s->func_0019ABA0(D_002B9120->f4A8[arg->f348], 1);
                    D_002B9120->f3A8[arg->f348]->func_001577A0(s, 0);
                    self->f28[i]->f104 = 1;
                }
            } else {
                for (j = 0; j < (la = arg->f3AC)->count; j++) {
                    S_000AB030_ObjA *o = la->items[j];
                    if (o != 0 && o->f4 == 1) {
                        func_0014FF00(o->f1A4->f4->name, 0, 0, buf, 0);
                        if (func_001EA426(buf, (char *)self->f28[i]) == 0) {
                            self->f28[i]->f110[k] = o->f1A4->f4;
                            k++;
                            if (k >= self->f28[i]->f104) break;
                        }
                    }
                }
                if (k == 0) {
                    for (j2 = 0; j2 < (lb = *arg->f3A8)->count; j2++) {
                        S_000AB030_ObjB *o = lb->items[j2];
                        if (o != 0 && o->f4 == 1 && o->f8 != 0) {
                            t.len2 = strlen(o->f8->name);
                            t.lim2 = 0x103;
                            n = AsmMinI(t.lim2, t.len2);
                            src = *(S_000AB030_Named * volatile *)&o->f8;
                            func_001E8920(buf, src->name, n);
                            buf[n] = 0;
                            char *dot = func_001E8AC0(buf, '.');
                            if (dot != 0) {
                                memset(dot, 0, strlen(dot));
                            }
                            if (func_001EA426(buf, (char *)self->f28[i]) == 0) {
                                self->f28[i]->f110[k] = o->f8;
                                k++;
                                if (k >= self->f28[i]->f104) break;
                            }
                        }
                    }
                }
            }
        }
    }
}

void C_000ABBC0::func_000ABBC0(void)
{
    C_000AB340_Vec a = D_002EFDB8->f4->f170;
    C_000AB340_Vec c = D_002EFDB8->f4->f180;
    C_000AB340_Vec b = D_002EFDB8->f4->f190;
    int i;
    int j;

    for (i = 0; i < f24; i++) {
        if (f28[i]->f110 != 0) {
            for (j = 0; j < f28[i]->f104; j++) {
                if (((C_000ABBC0_Sub *)f28[i]->f110[j]) != 0) {
                    ((C_000ABBC0_Sub *)f28[i]->f110[j])->func_00199650(&a);
                    if (f28[i]->f10C != 0) {
                        ((C_000ABBC0_Sub *)f28[i]->f110[j])->func_00198F50(&c, &b, 0, 1, 0);
                    }
                    ((C_000ABBC0_Sub *)f28[i]->f110[j])->func_0019AC50();
                }
            }
        }
    }
    func_001578D0();
}

C_000ABD60 *C_000ABD60::func_000ABD60()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C7F8;
    return this;
}
