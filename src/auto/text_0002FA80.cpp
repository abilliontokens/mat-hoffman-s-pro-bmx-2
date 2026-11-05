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

/* config file reader, 0x4CC bytes */
struct C_00168280 {
    char pad0[0x4CC];
    C_00168280 *func_00168280(void);
    int func_00169490(const char *path, int flags);
    void func_001691E0(void);
    void func_00169710(const char *name);
    void func_00168C20(const char *key, int def, int *dst);
};

struct S_0002FA80_Entry {
    void *f0;
    int subCount;
    S_0002FA80_Sub *subs;
    int curSub;
    int id;
    char name[0x118 - 0x14];

    int func_0002FFD0(const char *subName);
    void func_0002FE10(C_00168280 *stream, int index);
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
    undefined4 func_000305C0(const char *path);
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
void *func_001E8A44(unsigned int size);
int func_001ADCC0(char *dst, int size, const char *fmt, ...);
void __stdcall func_00011FF0(void *array, unsigned int size, int count, void *ctor);
extern char D_002A5870[];
extern char D_00275678[];
extern char D_002769F8[];
extern char D_002769E8[];
extern char D_0002FDF0[];

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

/* BmxCameraController: owned sub-objects released in the destructor */
extern int D_002768FC;
struct C_00055910 { void func_00055910(void); };
struct C_0009F9F0 { void func_0009F9F0(void); };
struct C_001324B0 { void func_001324B0(void); };
struct C_00194DB0 { void func_00194DB0(void); };
struct C_00195130 { void func_00195130(void); };
struct C_00150350 { void func_00150350(void); };
struct C_00136300 { void func_00136300(void); };
struct C_0012B580 { void func_0012B580(void); };
struct S_000308F0_Holder { int f0; C_00030500 *f4; };
struct C_000308F0 {
    void *vtbl;
    char pad4[0x3C];
    C_00136300 *f40;
    C_00136300 *f44;
    C_00136300 *f48;
    C_00136300 *f4C;
    C_00055910 *f50;
    C_0009F9F0 *f54;
    C_001324B0 *f58;
    C_00194DB0 *f5C;
    C_00195130 *f60;
    C_00150350 *f64;
    char pad68[0xC];
    S_000308F0_Holder *f74;
    void func_000308F0(void);
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
            p--;
            if (p->f0) {
                p->f0->v4(1);
                p->f0 = 0;
            } else {
                p->f0 = 0;
            }
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
    if (f0) {
        f0->v4(1);
        f0 = 0;
    } else {
        f0 = 0;
    }
    if (f8) {
        func_001E891B(f8);
        f8 = 0;
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_0002FA80::func_000305C0(const char *path)
{
    char buf[0x104];
    C_00168280 *stream;
    C_00168280 *mem;
    S_0002FA80_Entry *arr;
    int n;
    int i;

    func_001ADCC0(buf, 0x104, D_00275678, D_002A5870, path);
    mem = (C_00168280 *)func_001E8A44(0x4CC);
    if (mem) {
        stream = mem->func_00168280();
    } else {
        stream = 0;
    }
    if (stream->func_00169490(buf, 0) == 0) {
        if (stream) {
            stream->func_001691E0();
            func_001E891B(stream);
        }
        return 0;
    }
    stream->func_00169710(D_002769F8);
    stream->func_00168C20(D_002769E8, 0, &count);
    n = count;
    int *raw = (int *)func_001E8A44(n * 0x118 + 4);
    if (raw) {
        S_0002FA80_Entry *t = (S_0002FA80_Entry *)(raw + 1);
        *raw = n;
        func_00011FF0(t, 0x118, n, D_0002FDF0);
        arr = t;
    } else {
        arr = 0;
    }
    entries = arr;
    for (i = 0; i < count; i++) {
        entries[i].func_0002FE10(stream, i);
    }
    if (stream) {
        stream->func_001691E0();
        func_001E891B(stream);
    }
    return 1;
}

void C_000308F0::func_000308F0(void)
{
    C_00055910 *p50 = f50;
    vtbl = &D_002768FC;
    if (p50) {
        p50->func_00055910();
        func_001E891B(p50);
    }
    C_0009F9F0 *p54 = f54;
    if (p54) {
        p54->func_0009F9F0();
        func_001E891B(p54);
    }
    C_001324B0 *p58 = f58;
    if (p58) {
        p58->func_001324B0();
        func_001E891B(p58);
    }
    S_000308F0_Holder *p74 = f74;
    if (p74) {
        if (p74->f4) {
            p74->f4->func_00030500(3);
            p74->f4 = 0;
        }
        func_001E891B(p74);
    }
    C_00194DB0 *p5C = f5C;
    if (p5C) {
        p5C->func_00194DB0();
        func_001E891B(p5C);
    }
    C_00195130 *p60 = f60;
    if (p60) {
        p60->func_00195130();
        func_001E891B(p60);
    }
    C_00150350 *p64 = f64;
    if (p64) {
        p64->func_00150350();
        func_001E891B(p64);
    }
    C_00136300 *p40 = f40;
    if (p40) {
        p40->func_00136300();
        func_001E891B(p40);
    }
    C_00136300 *p44 = f44;
    if (p44) {
        p44->func_00136300();
        func_001E891B(p44);
    }
    C_00136300 *p48 = f48;
    if (p48) {
        p48->func_00136300();
        func_001E891B(p48);
    }
    C_00136300 *p4C = f4C;
    if (p4C) {
        p4C->func_00136300();
        func_001E891B(p4C);
    }
    ((C_0012B580 *)this)->func_0012B580();
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
