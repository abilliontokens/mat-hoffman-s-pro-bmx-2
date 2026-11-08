/* 16 functions from 0x00097050 to 0x00097FD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
#include "asm_helpers.h"
struct C_00097050_V16 { int a, b, c, d; };
struct C_00097050_Mgr {
    void func_0001B820(char *item);
    int func_0001B900(char *item);
    void func_0001B9E0(char *item, int v, int f);
    void func_0001B910(char *item);
    void func_0001BDB0(int i);
};
struct C_00097050_Obj {
    void func_001A2A10(int v);
    void func_001B65D0(void);
};
struct C_00097050_VObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
};
struct C_00097050_VObj2 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0a(); virtual void v0b();
    virtual void v0c(); virtual void v0d(); virtual void v0e(); virtual void v0f();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1a(); virtual void v1b();
    virtual void v1c(); virtual void v1d(); virtual void v1e(); virtual void v1f();
    virtual void v20();
};
struct C_00097050_Finder {
    C_00097050_VObj2 *func_0001D450(char *name);
};
struct C_00097050_Arg {
    void func_00033090(char *name, C_00097050_V16 v, int f);
    void func_00032E50(C_00097050_V16 v);
};
struct C_00097050_Item {
    void func_00096020(C_00097050_Arg *a);
};
struct C_00097050 {
    void func_00097050(C_00097050_Arg *a);
};
extern float D_00275544;
struct C_000976A0 {
    undefined4 func_000976A0(void);
};

struct C_00097700 {
    bool func_00097700(void);
};

struct C_000976C0 {
    int func_000976C0(void);
};

struct C_00097710 {
    undefined4 func_00097710(int param_1);
};

struct C_00097740 {
    undefined4 func_00097740(int param_1);
};

struct C_00097C60 {
    undefined4 func_00097C60(void);
};

void func_001E891B(void *p);

struct C_00012140 {
    void func_00012140(void);
};

struct C_00097A20 {
    char pad0[0x63d8];
    C_00012140 *arrA[10];
    C_00012140 *arrB[10];
    void func_00097A20(void);
};

typedef int (*func_000979C0_hash_t)(undefined4);
typedef int (*func_000979C0_eq_t)(undefined4, undefined4);

struct C_000979C0 {
    int func_000979C0(undefined4 key, undefined4 *out);
};

struct C_00097A80_Vec4 {
    int x, y, z, w;
};
extern int D_002A2400;
extern int D_002A2404;
extern int D_002A2408;
extern int D_002A240C;

struct C_00097A80 {
    C_00097A80 *func_00097A80(void);
};

struct C_00097C20 {
    int func_00097C20(void);
};

int func_001EA426(const char *a, const char *b);

extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
extern "C" char *func_001E8AC0(const char *s, int c);

template <class T> inline const T &min_ref(const T &a, const T &b)
{
    return b < a ? b : a;
}

template <class T> inline const T &min_ref2(const T &a, const T &b)
{
    return a < b ? a : b;
}

template <class T> inline T min_val(const T &a, const T &b)
{
    return a > b ? b : a;
}

static __forceinline void str_copy_v(char *dst, const char *src, int max)
{
    volatile int len = strlen(src);
    volatile int lim = max;
    volatile int res = min_val((int)lim, (int)len);
    int n = res;
    func_001E8920(dst, src, n);
    dst[n] = 0;
}

inline void str_copy(char *dst, const char *src, int size)
{
    int n = min_ref((int)strlen(src), size - 1);
    func_001E8920(dst, src, n);
    dst[n] = 0;
}

struct C_00097770_Named {
    char pad0[0x28];
    char name[1];
};

struct C_00097770_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x148];
    C_00097770_Named *f14C;
};

struct C_00097770_Entry {
    int f0;
    int f4;
    C_00097770_Obj *f8;
};

struct C_00097770_List {
    char pad0[0x24];
    int count;
    C_00097770_Entry **items;
};

struct C_00097770_3A8 { C_00097770_List *f0; };
struct C_00097770_64 { char pad0[0x3a8]; C_00097770_3A8 *f3A8; };
struct C_00097770_2A4 { char pad0[0x64]; C_00097770_64 *f64; };
struct C_00097770_Root { char pad0[0x2a4]; C_00097770_2A4 *f2A4; };
extern C_00097770_Root *D_002A8490;

struct C_00097DA0_Item {
    char pad0[0xC0];
    char fC0[1];
    char padC1[0x6454 - 0xC1];
    int f6454;
};

struct C_00097DA0_Obj {
    char pad0[0x1B8];
    int f1B8;
    char pad1BC[0xC];
    C_00097DA0_Item **f1C8;
    char pad1CC[0x48E0 - 0x1CC];
    int f48E0;
};

struct C_00097DA0_Owner {
    char pad0[0x1C8];
    int f1C8;
};

struct C_00097DA0 {
    C_00097DA0_Obj **f0;
    C_00097DA0_Obj **f4;
    C_00097DA0_Obj **f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    char pad20[0x198 - 0x20];
    C_00097DA0_Owner *f198;

    int Mode(void)
    {
        if (f198->f1C8 != 0) {
            return f1C;
        }
        return f18;
    }

    C_00097DA0_Obj **List(void)
    {
        switch (Mode()) {
        case 0:
            return f0;
        case 1:
            return f4;
        case 2:
            return f8;
        }
        return 0;
    }

    int Count(void)
    {
        switch (Mode()) {
        case 0:
            return fC;
        case 1:
            return f10;
        case 2:
            return f14;
        }
        return 0;
    }

    int func_00097CA0(const char *name);
    int func_00097DA0(const char *name);
    int func_00097E90(const char *a, const char *b);

    C_00097DA0_Obj **ListAt(int k)
    {
        switch (k) {
        case 0:
            return f0;
        case 1:
            return f4;
        case 2:
            return f8;
        }
        return 0;
    }

    int CountAt(int k)
    {
        switch (k) {
        case 0:
            return fC;
        case 1:
            return f10;
        case 2:
            return f14;
        }
        return 0;
    }
};


void C_00097050::func_00097050(C_00097050_Arg *a)
{
    char *self = (char *)this;
    char buf[0x104];
    char b2[0x104];
    char b3[0x104];
#define LIST(o) (*(char **)(*(char **)((char *)a + 0x64) + (o)))
#define MGR (*(C_00097050_Mgr **)(*(char **)((char *)a + 0x64) + 0x484))
#define N(m) ((char (*)[0x78])(self + 0x290 + (m)))
#define R ((float *)(self + 0x4104 + i * 0x10))
#define Q ((int *)(self + 0x40d0 + i * 4))
    for (int i = 0; i < *(int *)(self + 0x1cc); i++) {
        int j;
        for (j = 0; j < *(int *)(LIST(0x3ac) + 0x24); j++) {
            char *item = (*(char ***)(LIST(0x3ac) + 0x28))[j];
            if (N(0x1680)[i][0] && N(0x10e0)[i][0] && !func_001EA426(item + 0xa0, N(0x1680)[i])) {
                MGR->func_0001BDB0(j);
                MGR->func_0001B9E0(item, MGR->func_0001B900(item), 1);
                MGR->func_0001B910(item);
            }
            if (N(0)[i][0] && !func_001EA426(item + 0xa0, N(0)[i]))
                MGR->func_0001B910(item);
            if (N(0x5a0)[i][0] && !func_001EA426(item + 0xa0, N(0x5a0)[i]))
                MGR->func_0001B820(item);
        }
        if (N(0x38a0)[i][0] && *(int *)((char *)a + 0x1c8) == 0) {
            C_00097050_Obj *o = (C_00097050_Obj *)(*(C_00097050_Finder **)((char *)D_002A8490 + 4))->func_0001D450(N(0x38a0)[i]);
            if (o && *Q != -1)
                o->func_001A2A10(*Q);
        }
        if (N(0x3f30)[i][0])
            a->func_00033090(N(0x3f30)[i], *(C_00097050_V16 *)((char *)R + 0x65c), 1);
        if (R[-1] != D_00275544 || R[0] != D_00275544 || R[1] != D_00275544)
            a->func_00032E50(*(C_00097050_V16 *)(R - 1));
        if (N(0x1c20)[i][0] && N(0x21c0)[i][0])
            (*(C_00097050_Obj **)((char *)Q + 0x7b0))->func_001B65D0();
        if (N(0x2760)[i][0]) {
            int found = -1;
            int k;
            for (k = 0; k < *(int *)(LIST(0x3b4) + 0x24) && found == -1; k++) {
                char *e = (*(char ***)(LIST(0x3b4) + 0x28))[k];
                if (!func_001EA426(N(0x2760)[i], e + 0x18)) {
                    found = k;
                    (*(C_00097050_VObj **)(e + 4))->v6();
                }
            }
        }
        if (N(0x2d00)[i][0] && *(int *)((char *)a + 0x1c8) == 0) {
            C_00097050_VObj2 *o = (*(C_00097050_Finder **)((char *)D_002A8490 + 4))->func_0001D450(N(0x2d00)[i]);
            if (o)
                o->v20();
        }
    }
    int n;
    for (n = 0; n < *(int *)(self + 0x1b8); n++)
        (*(C_00097050_Item ***)(self + 0x1c8))[n]->func_00096020(a);
    if (*(int *)(self + 0x1b0) == 0)
        return;
#define ITEM ((*(char ***)(self + 0x1c8))[m])
#define S(it, o) ((char *)((it) + ((o) + k * 0x78)))
    for (int m = 0; m < *(int *)(self + 0x1b8); m++) {
        if (*(int *)ITEM != 1)
            continue;
        int k;
        for (k = 0; k < *(int *)(ITEM + 0x2554); k++) {
            int done;
            int j;
            strcpy(buf, S(ITEM, 0x2ff8));
            if (buf[0]) {
                done = 0;
                for (j = 0; j < *(int *)(LIST(0x3ac) + 0x24) && !done; j++) {
                    char *e = (*(char ***)(LIST(0x3ac) + 0x28))[j];
                    if (!func_001EA426(e + 0xa0, buf)) {
                        MGR->func_0001B910(e);
                        done = 1;
                    }
                }
            }
            strcpy(buf, S(ITEM, 0x34a8));
            if (buf[0]) {
                done = 0;
                for (j = 0; j < *(int *)(LIST(0x3ac) + 0x24) && !done; j++) {
                    char *e = (*(char ***)(LIST(0x3ac) + 0x28))[j];
                    if (!func_001EA426(e + 0xa0, buf)) {
                        MGR->func_0001B820(e);
                        done = 1;
                    }
                }
            }
            strcpy(b2, S(ITEM, 0x5578));
            strcpy(b3, S(ITEM, 0x50c8));
            if (b3[0] && b2[0])
                ((C_00097050_Obj **)(ITEM + 0x63d8))[k]->func_001B65D0();
            strcpy(b2, S(ITEM, 0x5ed8));
            strcpy(b3, S(ITEM, 0x5a28));
            if (b2[0] && b3[0])
                ((C_00097050_Obj **)(ITEM + 0x6400))[k]->func_001B65D0();
        }
    }
#undef S
#undef ITEM
#undef N
#undef R
#undef Q
#undef LIST
#undef MGR
}

undefined4 C_000976A0::func_000976A0(void)
{
  int in_ECX = (int)this;
  
  if (*(int *)(*(int *)(in_ECX + 0x198) + 0x1c8) != 0) {
    return *(undefined4 *)(in_ECX + 0x1c);
  }
  return *(undefined4 *)(in_ECX + 0x18);
}

int C_000976C0::func_000976C0(void)
{
  int in_ECX = (int)this;
  int state = *(int *)(in_ECX + 0x18);

  switch (state) {
  case 1:
    *(int *)(in_ECX + 0x18) = 2;
    return 1;
  case 2:
    *(int *)(in_ECX + 0x18) = 3;
    return 0;
  case 0:
    *(int *)(in_ECX + 0x18) = 1;
  }
  return 1;
}

bool C_00097700::func_00097700(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x18) == 3;
}

undefined4 C_00097710::func_00097710(int param_1)
{
  int in_ECX = (int)this;

  switch (param_1) {
  case 0:
    return *(undefined4 *)(in_ECX + 0xc);
  case 1:
    return *(undefined4 *)(in_ECX + 0x10);
  case 2:
    return *(undefined4 *)(in_ECX + 0x14);
  }
  return 0;
}

undefined4 C_00097740::func_00097740(int param_1)
{
  undefined4 *in_ECX = (undefined4 *)this;

  switch (param_1) {
  case 0:
    return in_ECX[0];
  case 1:
    return in_ECX[1];
  case 2:
    return in_ECX[2];
  }
  return 0;
}

void __stdcall func_00097770(const char *name)
{
    C_00097770_List *list = D_002A8490->f2A4->f64->f3A8->f0;
    int i;
    for (i = 0; i < list->count; i++) {
        C_00097770_Entry *&e = list->items[i];
        if (e->f4 == 2) {
            C_00097770_Obj *obj = e->f8;
            char buf[0x104];
            const char *src = obj->f14C->name;
            int n = min_ref((int)strlen(src), 0x103);
            func_001E8920(buf, src, n);
            buf[n] = 0;
            char *ext = func_001E8AC0(buf, '.');
            if (ext != 0) {
                memset(ext, 0, strlen(ext));
            }
            if (func_001EA426(name, buf) == 0) {
                obj->v4();
            }
        }
    }
}

void __stdcall func_00097890(const char *name)
{
    C_00097770_List *list;
    C_00097770_Entry *e;
    C_00097770_Obj *obj;
    int len, lim;
    int res, n, i;
    char buf[0x104];

    if (!D_002A8490->f2A4 || !D_002A8490->f2A4->f64) return;
    list = D_002A8490->f2A4->f64->f3A8->f0;
    for (i = 0; i < list->count; i++) {
        e = list->items[i];
        if (e->f4 == 2) {
            obj = e->f8;
            const char *src = (*(C_00097770_Named **)((char *)obj + 0x14c))->name;
            len = strlen(src);
            lim = 0x103;
            res = AsmMinI(lim, len);
            n = res;
            func_001E8920(buf, src, n);
            buf[n] = 0;
            char *ext = func_001E8AC0(buf, '.');
            if (ext) memset(ext, 0, strlen(ext));
            if (func_001EA426(name, buf) == 0) obj->v6();
        }
    }
}

int C_000979C0::func_000979C0(undefined4 key, undefined4 *out)
{
  int in_ECX = (int)this;
  int h;
  int *e;

  h = (*(func_000979C0_hash_t *)(in_ECX + 0x8))(key);
  e = *(int **)(*(int *)in_ECX + ((h < 0 ? -h : h) % *(int *)(in_ECX + 0x4)) * 4);
  while (e != (int *)0x0) {
    if (e[1] == h && (*(func_000979C0_eq_t *)(in_ECX + 0xc))(e[2], key) != 0) {
      *out = e[0];
      return 1;
    }
    e = (int *)e[3];
  }
  return 0;
}

void C_00097A20::func_00097A20(void)
{
    int i;

    for (i = 0; i < 10; i++) {
        C_00012140 *p = arrA[i];
        if (p != 0) {
            p->func_00012140();
            func_001E891B(p);
            arrA[i] = 0;
        }
        p = arrB[i];
        if (p != 0) {
            p->func_00012140();
            func_001E891B(p);
            arrB[i] = 0;
        }
    }
}

C_00097A80 *C_00097A80::func_00097A80(void)
{
    char *t = (char *)this;
    int *p;
    int i;
    int *a;
    char *b;
    int *c;
    p = (int *)(t + 0x4100);
    for (i = 12; i != 0; i--) {
        p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
        p += 4;
    }
    p = (int *)(t + 0x4760);
    for (i = 12; i != 0; i--) {
        p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
        p += 4;
    }
    *(int *)(t + 0x48e0) = 0;
    *(int *)(t + 0x1b4) = 0;
    *(int *)(t + 0x1a4) = 0xbf800000;
    *(int *)(t + 0x1c0) = 0;
    *(int *)(t + 0x1c4) = 0;
    t[0] = 0;
    t[0x3c] = 0;
    t[0x78] = 0;
    t[0xb4] = 0;
    t[0x12c] = 0;
    *(int *)(t + 0x1b8) = 0;
    *(int *)(t + 0x1bc) = 0;
    *(int *)(t + 0x1a8) = 0;
    *(int *)(t + 0x1ac) = 0;
    *(int *)(t + 0x1b0) = 0;
    *(int *)(t + 0x1cc) = 0;
    c = (int *)(t + 0x4104);
    b = t + 0x830;
    a = (int *)(t + 0x260);
    i = 12;
    do {
        a[-0x24] = -1;
        a[0] = -1;
        a[-0xc] = -1;
        a[-0x18] = -1;
        a[0xf9c] = -1;
        b[-0x5a0] = 0;
        b[0] = 0;
        b[0x5a0] = 0;
        b[0xb40] = 0;
        b[0x10e0] = 0;
        b[0x1680] = 0;
        b[0x1c20] = 0;
        b[0x21c0] = 0;
        b[0x2760] = 0;
        b[0x2d00] = 0;
        a[0xe28] = 0;
        a[0xe1c] = 0;
        b[0x3300] = 0;
        a[0x1188] = 0;
        a[0x1194] = 0;
        c[-1] = 0;
        c[0] = 0;
        c[1] = 0;
        b[0x3990] = 0;
        *(C_00097A80_Vec4 *)((char *)c + 0x65c) = *(C_00097A80_Vec4 *)&D_002A2400;
        a[0x1170] = -1;
        a[0x117c] = -1;
        a++;
        c += 4;
        b += 0x78;
    } while (--i != 0);
    return this;
}

int C_00097C20::func_00097C20(void)
{
  int in_ECX = (int)this;
  int v;

  if (*(int *)(*(int *)(in_ECX + 0x198) + 0x1c8) != 0) {
    v = *(int *)(in_ECX + 0x1c);
  } else {
    v = *(int *)(in_ECX + 0x18);
  }
  switch (v) {
  case 0:
    return *(int *)(in_ECX + 0);
  case 1:
    return *(int *)(in_ECX + 4);
  case 2:
    return *(int *)(in_ECX + 8);
  }
  return 0;
}

undefined4 C_00097C60::func_00097C60(void)
{
  int in_ECX = (int)this;
  int iVar1;

  if (*(int *)(*(int *)(in_ECX + 0x198) + 0x1c8) != 0) {
    iVar1 = *(int *)(in_ECX + 0x1c);
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x18);
  }
  switch (iVar1) {
  case 0:
    return *(undefined4 *)(in_ECX + 0xc);
  case 1:
    return *(undefined4 *)(in_ECX + 0x10);
  case 2:
    return *(undefined4 *)(in_ECX + 0x14);
  }
  return 0;
}

int C_00097DA0::func_00097CA0(const char *name)
{
    int i;
    int j;
    C_00097DA0_Obj **list = List();
    int n = Count();

    for (i = 0; i < n; i++) {
        for (j = 0; j < list[i]->f1B8; j++) {
            if (func_001EA426(name, list[i]->f1C8[j]->fC0) == 0) {
                return list[i]->f1C8[j]->f6454;
            }
        }
    }
    return 0;
}

int C_00097DA0::func_00097DA0(const char *name)
{
    C_00097DA0_Obj **list = List();
    int n = Count();
    int i;
    int j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < list[i]->f1B8; j++) {
            if (func_001EA426(name, list[i]->f1C8[j]->fC0) == 0) {
                return list[i]->f48E0;
            }
        }
    }
    return 0;
}

int C_00097DA0::func_00097E90(const char *a, const char *b)
{
    int found = 0;
    int done = 0;
    int k;
    for (k = 0; k < 3; k++) {
        C_00097DA0_Obj **list = ListAt(k);
        int n = CountAt(k);
        int i;
        for (i = 0; i < n && found == 0; i++) {
            if (func_001EA426(a, (const char *)list[i] + 0xB4) == 0) {
                int j;
                found = 1;
                for (j = 0; j < list[i]->f1B8 && done == 0; j++) {
                    if (func_001EA426(b, list[i]->f1C8[j]->fC0) == 0) {
                        done = 1;
                        if (*(int *)((char *)list[i]->f1C8[j] + 0x40) != 0) {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
