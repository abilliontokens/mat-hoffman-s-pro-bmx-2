/* 6 functions from 0x000A91C0 to 0x000A9ED0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
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
void C_000A9820::func_000A91C0(S_A91C0_Reader * volatile stream)
{
    V4_A91C0 t;
    char tmp[0x10];
    char name[0x104];
    char sect[0x104];
    char key[0x104];
    char val[0x104];
    int nColors;
    int nCycles;
    float duration;
    int end;
    int count;
    int i;
    int start;
    int k;
    int len;

    if (stream->func_00169710(D_0027C504) != 0) {
        stream->func_00168C20(D_0027C4EC, 0, &count);
        if (count > 0) {
            if (this->objs != 0) {
                start = this->num;
                this->num = count + start;
                end = this->num;
                this->objs = (CCObj **)func_001E83E8(this->objs, end * 4);
            } else {
                start = 0;
                this->num = count;
                end = this->num;
                this->objs = (CCObj **)func_001E8A44(end * 4);
            }
            for (i = start; i < end; i++) {
                func_001ADCC0(sect, 0x104, D_0027C4DC, i - start + 1);
                if (stream->func_00169710(sect) != 0) {
                    stream->func_00168BE0(D_0027C4D0, D_002764F0, name, -1);
                    stream->func_00168C20(D_0027C4BC, 1, &nColors);
                    this->objs[i] = (CCObj *)func_001E8A44(0x12c);
                    len = AsmMinI(0x103, a91c0_strlen(name));
                    func_001E8920((char *)this->objs[i], name, len);
                    ((char *)this->objs[i])[len] = 0;
                    this->objs[i]->n = nColors;
                    this->objs[i]->elems = (CCElem **)func_001E8A44(nColors * 4);
                    for (k = 0; k < nColors; k++) {
                        this->objs[i]->elems[k] = 0;
                    }
                    stream->func_00168C20(D_0027C4AC, 1, &nCycles);
                    this->objs[i]->count = nCycles;
                    this->objs[i]->r = (float *)func_001E8A44(nCycles * 4);
                    this->objs[i]->g = (float *)func_001E8A44(nCycles * 4);
                    this->objs[i]->b = (float *)func_001E8A44(nCycles * 4);
                    this->objs[i]->idx = 0;
                    for (k = 0; k < nCycles; k++) {
                        func_001ADCC0(key, 0x104, D_0027C49C, k + 1);
                        stream->func_00168BE0(key, D_0027C494, val, -1);
                        t = *func_00182980(tmp, val);
                        this->objs[i]->r[k] = t.x;
                        this->objs[i]->g[k] = t.y;
                        this->objs[i]->b[k] = t.z;
                    }
                    stream->func_00168C50(D_0027C488, 1.0f, &duration);
                    this->objs[i]->f120 = duration;
                    this->objs[i]->dur = duration / ((float)nCycles - 1.0f);
                    this->objs[i]->t = 0;
                }
            }
        }
    }
}

extern "C" unsigned int strlen(const char *);
void C_A95D0::func_000A95D0(S_A95D0_arg *a)
{
    char buf[0x104];
    if (num != 0) {
        for (int i = 0; i < num; i++) {
            int k = 0;
            for (int j = 0; j < a->f3AC->num; j++) {
                A9_Item *e = (A9_Item *)a->f3AC->items[j];
                if (e && e->kind == 1 && e->info) {
                    func_0014FF00(e->info->f4 + 0x28, 0, 0, buf, 0);
                    if (func_001EA426(buf, (char *)objs[i]) == 0) {
                        objs[i]->arr[k] = e->info->f4;
                        k++;
                        if (k >= objs[i]->n) break;
                    }
                }
            }
            if (k == 0) {
                for (int m = 0; m < (*a->f3A8)->num; m++) {
                    A9_Item *e = (A9_Item *)(*a->f3A8)->items[m];
                    if (e && e->kind == 1 && e->model) {
                        int slen = (int)strlen(e->model->name);
                        int lim = 0x103;
                        int len = AsmMinI(lim, slen);
                        func_001E8920(buf, e->model->name, len);
                        buf[len] = 0;
                        char *p = func_001E8AC0(buf, '.');
                        if (p) memset(p, 0, strlen(p));
                        if (func_001EA426(buf, (char *)objs[i]) == 0) {
                            objs[i]->arr[k] = e->model;
                            k++;
                            if (k >= objs[i]->n) break;
                        }
                    }
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

extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)
void C_A9::func_000A9A70(A9_Arg *arg)
{
    char buf[0x104];
    int i, found;
    A9_Model *model;
    if (count != 0) {
        for (i = 0; i < count; i++) {
            found = 0;
            A9_Obj *obj = objs[i];
            if (obj->count == 0) {
                if (obj->flag) {
                    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
                    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5348, D_002A5D98);
                } else {
                    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
                    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A5D98);
                }
                func_001ADCC0(buf, 0x104, D_0027C588, objs[i]);
                model = (A9_Model *)func_001E8A44(0x1e0);
                if (model) model = model->func_00143580(1);
                else model = 0;
                objs[i]->models[0] = model;
                model = objs[i]->models[0];
                if (model->load(buf, 0, 1)) {
                    int len = (int)strlen(buf);
                    int lim = 0x7f;
                    int r = AsmMinI(lim, len);
                    int n = r;
                    func_001E8920(model->name, buf, n);
                    model->name[n] = 0;
                    model->func_00199600(objs[i]->vec);
                    obj = objs[i];
                    model->func_00198F50(obj->a, obj->b, 1, 0, 0);
                    model->func_0019ABA0(D_002B9120->models[arg->index], 1);
                    D_002B9120->lists[arg->index]->func_001577A0(model, 0);
                    objs[i]->count = 1;
                }
            } else {
                for (int j = 0; j < arg->list->count; j++) {
                    A9_Item *item = arg->list->items[j];
                    if (item && item->kind == 1) {
                        func_0014FF00(item->info->f4 + 0x28, 0, 0, buf, 0);
                        if (!func_001EA426(buf, objs[i]->name)) {
                            objs[i]->models[found] = (A9_Model *)item->info->f4;
                            if (++found >= objs[i]->count) break;
                        }
                    }
                }
                if (!found) {
                    for (int j = 0; j < arg->lists[0]->count; j++) {
                        A9_Item *item = arg->lists[0]->items[j];
                        if (item && item->kind == 1 && item->model) {
                            int len = (int)strlen(item->model->name);
                            int lim = 0x103;
                            int r = AsmMinI(lim, len);
                            int n = r;
                            func_001E8920(buf, item->model->name, n);
                            buf[n] = 0;
                            char *dot = func_001E8AC0(buf, '.');
                            if (dot) memset(dot, 0, (int)strlen(dot));
                            if (!func_001EA426(buf, objs[i]->name)) {
                                objs[i]->models[found] = item->model;
                                if (++found >= objs[i]->count) break;
                            }
                        }
                    }
                }
            }
        }
    }
}
