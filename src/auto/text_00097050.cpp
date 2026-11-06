/* 16 functions from 0x00097050 to 0x00097FD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
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

void __stdcall func_00097890(const char *name)
{
    char buf[0x104];
    volatile int lim;
    volatile int res;
    volatile int len;
    struct { C_00097770_List *list; int i; } it;
    C_00097770_2A4 *a = D_002A8490->f2A4;
    if (a == 0 || a->f64 == 0)
        return;
    it.list = a->f64->f3A8->f0;
    for (it.i = 0; it.i < it.list->count; it.i++) {
        C_00097770_Entry *&e = it.list->items[it.i];
        if (e->f4 == 2) {
            C_00097770_Obj *obj = e->f8;
            const char *src = obj->f14C->name;
            len = strlen(src);
            lim = 0x103;
            int x = lim;
            int y = len;
            res = min_val(x, y);
            int n = res;
            func_001E8920(buf, src, n);
            buf[n] = 0;
            char *ext = func_001E8AC0(buf, '.');
            if (ext != 0) {
                memset(ext, 0, strlen(ext));
            }
            if (func_001EA426(name, buf) == 0) {
                obj->v3();
            }
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

