/* 18 functions from 0x0002FA80 to 0x00030A30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_0002FA80_Sub {
    char name[0x104];
    int f104;
    int f108;
};

struct C_00194C60 {
    void func_00194C60(void);
};

struct C_00194BD0 {
    void func_00194BD0(int a, int b, int c);
};

struct S_0002FA80_Entry {
    void *f0;
    int subCount;
    S_0002FA80_Sub *subs;
    int curSub;
    int id;
    char name[0x118 - 0x14];

    int func_0002FFD0(const char *subName);
};

struct C_000B5870 {
    void func_000B5870(void);
};

struct C_0012B7D0 {
    void func_0012B7D0(int handle, int a, int b, int c, int d);
};

struct C_0002FA80 {
    C_0012B7D0 *f0;
    S_0002FA80_Entry *entries;
    int count;
    int cur;

    undefined4 func_00030020(const char *name);
    int func_000300C0(const char *subName);
    void func_000301D0(void);
    bool func_00030120(const char *subName);
    void func_00030160(void);
    void func_000301A0(void);
    undefined4 func_000301F0(void);
    void func_00030210(void);
};

struct C_000300F0 {
    bool func_000300F0(undefined4 param_1);
};

struct C_00030A10 {
    undefined4 func_00030A10(byte param_1);
};

void func_001E891B(void *p);

struct C_00194C70 {
    void func_00194C70(void);
};

struct C_00030500_Destroy {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int flags);
};

struct C_00030500 {
    C_00030500_Destroy *f0;
    int f4;
    C_00030500_Destroy *f8;
    char padC[0x118 - 0xC];
    void *func_00030500(unsigned int flags);
};


int S_0002FA80_Entry::func_0002FFD0(const char *subName)
{
    int func_001EA426(...);
    int i;

    for (i = 0; i < subCount; i++) {
        if (func_001EA426(subName, subs[i].name) == 0) {
            curSub = i;
            return i;
        }
    }
    return -1;
}

undefined4 C_0002FA80::func_00030020(const char *name)
{
    int func_001EA426(...);
    int i;
    int id;

    i = 0;
    if (count > 0) {
        while (1) {
            S_0002FA80_Entry *e = &entries[i];
            if (func_001EA426(name, e->name) == 0) {
                id = e->id;
                if (id != -1) {
                    break;
                }
            }
            i++;
            if (i >= count) {
                return 0;
            }
        }
        entries[i].curSub = 0;
    }
    if (id == -1) {
        return 0;
    }
    cur = id;
    f0->func_0012B7D0((int)entries[id].f0, 0, 0, 0, 0);
    return 1;
}

int C_0002FA80::func_000300C0(const char *subName)
{
    return entries[cur].func_0002FFD0(subName) != -1;
}

bool C_000300F0::func_000300F0(undefined4 param_1)
{
  int func_001EA426(...);
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = func_001EA426(param_1,*(int *)(in_ECX + 0xc) * 0x118 + 0x14 + *(int *)(in_ECX + 4));
  return iVar1 == 0;
}

bool C_0002FA80::func_00030120(const char *subName)
{
    int func_001EA426(...);
    int idx;
    S_0002FA80_Sub *s;
    S_0002FA80_Entry *e;

    e = &entries[cur];
    idx = e->curSub;
    s = &e->subs[idx];
    return func_001EA426(subName, s->name) == 0;
}

void C_0002FA80::func_00030160(void)
{
    S_0002FA80_Entry *e = &entries[cur];
    int idx = e->curSub;
    S_0002FA80_Sub *subs = e->subs;
    S_0002FA80_Sub *s = subs + idx;

    ((C_00194BD0 *)e->f0)->func_00194BD0(s->f104, s->f108, 0);
}

void C_0002FA80::func_000301A0(void)
{
    S_0002FA80_Entry *e = &entries[cur];
    S_0002FA80_Sub *subs = e->subs;
    int v = subs[e->curSub].f104;

    ((C_00194BD0 *)e->f0)->func_00194BD0(v, v, 0);
}

void C_0002FA80::func_000301D0(void)
{
    ((C_000B5870 *)entries[cur].f0)->func_000B5870();
}

undefined4 C_0002FA80::func_000301F0(void)
{
    ((C_00194C60 *)entries[cur].f0)->func_00194C60();
    return 1;
}

void C_0002FA80::func_00030210(void)
{
    ((C_00194C60 *)entries[cur].f0)->func_00194C60();
    ((C_00194C70 *)entries[cur].f0)->func_00194C70();
}

void *C_00030500::func_00030500(unsigned int flags)
{
    if (flags & 2) {
        int *base = (int *)this - 1;
        int i = *base;
        C_00030500 *p = this + i;

        while (--i >= 0) {
            C_00030500_Destroy *o;
            p--;
            o = p->f0;
            if (o) {
                o->v4(1);
            }
            p->f0 = 0;
            if (p->f8) {
                func_001E891B(p->f8);
                p->f8 = 0;
            }
        }
        if (flags & 1) {
            func_001E891B(base);
        }
        return base;
    }
    {
        C_00030500_Destroy *o = f0;
        if (o) {
            o->v4(1);
        }
    }
    f0 = 0;
    if (f8) {
        func_001E891B(f8);
        f8 = 0;
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_00030A10::func_00030A10(byte param_1)
{
  int func_000308F0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000308F0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
