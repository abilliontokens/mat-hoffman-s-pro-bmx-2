/* 6 functions from 0x000A91C0 to 0x000A9ED0, found by Ghidra. */
#include "common.h"
extern int D_0027C51C;
extern char D_0027C504[], D_0027C4EC[], D_0027C4DC[], D_002764F0[], D_0027C4D0[];
extern char D_0027C4BC[], D_0027C4AC[], D_0027C49C[], D_0027C494[], D_0027C488[];

/* config file reader */
struct S_A91C0_Reader {
    int func_00169710(const char *name);
    void func_00168C20(const char *key, int def, int *dst);
    void func_00168BE0(const char *key, const char *def, char *dst, int n);
    void func_00168C50(const char *key, float def, float *dst);
};
struct V4_A91C0 { float x, y, z, w; };
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
void *func_001E8A44(int size);
void *func_001E83E8(void *block, unsigned int size);
V4_A91C0 func_00182980(const char *s);

static inline int a91c0_strlen(const char *s)
{
    const char *p = s + 1;
    const char *q = s;
    while (*q++) {
    }
    return q - p;
}

template <class T> inline T a91c0_min(const T &a, const T &b)
{
    return (b < a) ? b : a;
}

struct S_A95D0_b { char pad0[4]; char *f4; };
struct S_A95D0_inner { char pad0[4]; int kind; char pad8[0x19C]; S_A95D0_b *f1A4; };
struct S_A95D0_o { char pad0[0x104]; int n; void **arr; };
struct S_A95D0_list { char pad0[0x24]; int num; void **items; };
struct S_A95D0_arg { char pad0[0x3A8]; S_A95D0_list **f3A8; S_A95D0_list *f3AC; };
struct C_A95D0 {
    char pad0[0x24];
    int num;
    S_A95D0_o **objs;
    void func_000A95D0(S_A95D0_arg *a);
};

struct CCElem { void func_001824E0(float *out, float a, float b, float c); };
struct CCObj {
    char pad0[0x104];
    int n;
    CCElem **elems;
    int count;
    int idx;
    float *r;
    float *g;
    float *b;
    float f120;
    float dur;
    float t;
};
struct GlobalCC { char pad[0x124]; int flag; };
extern GlobalCC *D_002A8490;
struct C_000A9820 {
    char pad0[0x24];
    int num;
    CCObj **objs;
    void func_00157A00(float dt);
    void func_000A9820(float dt);
    void func_000A91C0(S_A91C0_Reader *stream);
};

struct C_00157660 {
    void func_00157660(void);
};

struct S_000A99A0_28 {
    char pad0[0x15C];
    int f15C;
};

struct C_000A99A0 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    S_000A99A0_28 **f28;
    void func_000A99A0(void);
};

struct C_000A9A00 {
    char pad0[0x11C];
    int f11C;
    int f120;
    int f124;
    int f128;
    int f12C;
    int f130;
    int f134;
    int f138;
    int f13C;
    int f140;
    int f144;
    int f148;
    int f14C;
    int f150;
    int f154;
    int f158;
    C_000A9A00 *func_000A9A00(void);
};

extern char D_002A5FA8[], D_002A5348[], D_00275678[], D_002A60B0[], D_002A5D98[], D_002A5870[], D_002A5EA0[], D_0027C588[];
struct A9_Model {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual int load(char *, int, int);
    char pad4[0x24];
    char name[128];
    A9_Model *func_00143580(int);
    void func_00199600(V4_A91C0);
    void func_00198F50(void *, void *, int, int, int);
    void func_0019ABA0(void *, int);
};
struct A9_Obj { char name[0x104]; int count; int flag; char pad10C[0x20]; V4_A91C0 vec; char a[16]; char b[16]; A9_Model **models; };
struct A9_Item { int x; int kind; A9_Model *model; char padC[0x198]; S_A95D0_b *info; };
struct A9_List { char pad[0x24]; int count; A9_Item **items; void func_001577A0(A9_Model *, int); };
struct A9_Arg { char pad[0x348]; int index; char pad34C[0x5c]; A9_List **lists; A9_List *list; };
struct A9_Global { char pad[0x3a8]; A9_List **lists; char pad3AC[0xfc]; void **models; };
extern A9_Global *D_002B9120;
static inline int a9_min(volatile int a, volatile int b) { int x = a, y = b; volatile int result = x < y ? x : y; return result; }
struct C_A9 { char pad[0x24]; int count; A9_Obj **objs; void func_000A9A70(A9_Arg *); };
extern "C" int func_001EA426(const char *, const char *);
extern "C" char *func_001E8AC0(char *, int);
extern "C" void *memset(void *, int, unsigned int);
void func_0014FF00(const char *, int, int, char *, int);
extern "C" V4_A91C0 *func_00182980(void *a, void *b);
void C_000A9820::func_000A91C0(S_A91C0_Reader *stream)
{
    char val[0x104];
    char key[0x104];
    char sect[0x104];
    char name[0x104];
    char tmp[0x10];
    V4_A91C0 t;
    int i;
    int count;
    int end;
    float duration;
    int nColors;
    int nCycles;
    int start;
    int k;
    int len;

    if (stream->func_00169710(D_0027C504) != 0) {
        stream->func_00168C20(D_0027C4EC, 0, &count);
        if (count > 0) {
            if (objs != 0) {
                start = num;
                num = count + start;
                end = num;
                objs = (CCObj **)func_001E83E8(objs, end * 4);
            } else {
                start = 0;
                num = count;
                end = num;
                objs = (CCObj **)func_001E8A44(end * 4);
            }
            for (i = start; i < end; i++) {
                func_001ADCC0(sect, 0x104, D_0027C4DC, i - start + 1);
                if (stream->func_00169710(sect) != 0) {
                    stream->func_00168BE0(D_0027C4D0, D_002764F0, name, -1);
                    stream->func_00168C20(D_0027C4BC, 1, &nColors);
                    objs[i] = (CCObj *)func_001E8A44(0x12c);
                    len = a91c0_min(0x103, a91c0_strlen(name));
                    func_001E8920((char *)objs[i], name, len);
                    ((char *)objs[i])[len] = 0;
                    objs[i]->n = nColors;
                    objs[i]->elems = (CCElem **)func_001E8A44(nColors * 4);
                    for (k = 0; k < nColors; k++) {
                        objs[i]->elems[k] = 0;
                    }
                    stream->func_00168C20(D_0027C4AC, 1, &nCycles);
                    objs[i]->count = nCycles;
                    objs[i]->r = (float *)func_001E8A44(nCycles * 4);
                    objs[i]->g = (float *)func_001E8A44(nCycles * 4);
                    objs[i]->b = (float *)func_001E8A44(nCycles * 4);
                    objs[i]->idx = 0;
                    for (k = 0; k < nCycles; k++) {
                        func_001ADCC0(key, 0x104, D_0027C49C, k + 1);
                        stream->func_00168BE0(key, D_0027C494, val, -1);
                        t = *func_00182980(tmp, val);
                        objs[i]->r[k] = t.x;
                        objs[i]->g[k] = t.y;
                        objs[i]->b[k] = t.z;
                    }
                    stream->func_00168C50(D_0027C488, 1.0f, &duration);
                    objs[i]->f120 = duration;
                    objs[i]->dur = duration / ((float)nCycles - 1.0f);
                    objs[i]->t = 0;
                }
            }
        }
    }
}

void C_000A9820::func_000A9820(float dt)
{
int i;
if(D_002A8490->flag){func_00157A00(dt);return;}
for(i=0;i<num;i++){
 if(objs[i]->elems){
 float f=objs[i]->t/objs[i]->dur;
 int k=objs[i]->idx;
 float tmp[4];
 float fr,fg,fb;
 int j;
 fr=(objs[i]->r[k+1]-objs[i]->r[k])*f+objs[i]->r[k];
 fg=(objs[i]->g[k+1]-objs[i]->g[k])*f+objs[i]->g[k];
 fb=(objs[i]->b[k+1]-objs[i]->b[k])*f+objs[i]->b[k];
 for(j=0;j<objs[i]->n;j++){
 if(objs[i]->elems[j])
 ((CCObj *volatile *)objs)[i]->elems[j]->func_001824E0(tmp,fr,fg,fb);
 }
 objs[i]->t+=dt;
 if(objs[i]->t>objs[i]->dur){
 ++k;
 if(k+1>=objs[i]->count) k=0;
 objs[i]->t=0;
 objs[i]->idx=k;
 }
 }
}
func_00157A00(dt);
}

void C_000A99A0::func_000A99A0(void)
{
    int func_001E891B(...);
    int i;

    vtbl = (void *)&D_0027C51C;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            func_001E891B(f28[i]->f15C);
            func_001E891B(f28[i]);
        }
        func_001E891B(f28);
    }
    ((C_00157660 *)this)->func_00157660();
}

C_000A9A00 *C_000A9A00::func_000A9A00(void)
{
    int *p;

    p = &f11C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f12C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f13C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f14C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    return this;
}

