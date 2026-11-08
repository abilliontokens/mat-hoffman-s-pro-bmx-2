/* 18 functions from 0x0002FA80 to 0x00030A30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_0002FA80_Sub {
    char name[0x104];
    int f104;
    int f108;
};

struct S_00030240_Vec { float x,y,z,w; };
struct C_00030240_Virtual {
    virtual void set(void *v,int a);
    virtual void get(void *v);
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
    void func_00168550(const char *key, char *dst, int n);
    void func_00168A10(const char *key, int *dst);
    void func_00168BE0(const char *key, const char *def, char *dst, int n);
};

struct C_00194740 {
    char pad0[8];
    float f8;
    char padC[0x30 - 0xC];
    C_00194740 *func_00194740(void);
    void func_001947E0(int a, int b, int c, int d);
    void func_00194790(char *s, int a, int b);
};
extern char D_002769DC[], D_002769D0[], D_002A45E0[], D_002769C4[], D_002769B8[];
extern char D_002764F0[], D_002769A8[], D_00276998[], D_00276988[], D_00276980[];
extern char D_00276974[], D_00276968[];

struct S_0002FA80_Entry {
    C_00194740 *f0;
    int subCount;
    S_0002FA80_Sub *subs;
    int curSub;
    int id;
    char name[0x118 - 0x14];

    int func_0002FFD0(const char *subName);
    void func_0002FE10(C_00168280 *stream, int index);
    S_0002FA80_Sub *CurSub30120(void)
    {
        int idx = curSub;
        return &subs[idx];
    }
};

struct C_000B5870 {
    void func_000B5870(void);
};

/* BmxCameraController::func_0002FA80 (camera mode switch on a button press) */
extern int D_002B7EBC;
int func_00135C70(int a, int b, int c, int d);

struct C_00157BF0_2FA80 {
    int func_00157BF0(int a, int b);
};

struct C_0002F190_2FA80 {
    float m[12];
    C_0002F190_2FA80 *func_0002F190(void);
};

struct S_0002FA80_Obj {
    virtual void v0(void *, int);
    virtual void v1(void *);
};

struct S_0002FA80_Camera {
    void func_0012AC20(void *, void *, void *, void *, void *);
};

struct S_0002FA80_Flag {
    char pad0[0x95C];
    int f95C;
};

/* 0x118-byte slot, camera object first */
struct S_0002FA80_Slot {
    S_0002FA80_Obj *obj;
    char pad4[0x114];
};

struct S_0002FA80_List {
    char pad0[4];
    S_0002FA80_Slot *slots;
    char pad8[4];
    int cur;
};

struct BmxCameraController_0002FA80 {
    char pad0[0x30];
    S_0002FA80_Camera *f30;
    S_0002FA80_Flag *f34;
    char pad38[0x18];
    S_0002FA80_Obj *f50;
    char pad54[4];
    S_0002FA80_Obj *f58;
    char pad5C[8];
    S_0002FA80_Obj *f64;
    char pad68[4];
    int f6C;
    char pad70[4];
    S_0002FA80_List *f74;
    void func_0012B7D0(void *, int, int, int, int);
    void func_0002FA80(int a, int b);
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
    S_0002FA80_Entry *CurEntry30120(void) { return &entries[cur]; }
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
struct S_000308F0_Holder { void *f0; C_00030500 *f4; int f8; int fC; };
extern char D_00276A00[];
struct S_000306F0_Rect { int a, b, c, d; };
struct C_00055380 { C_00055380 *func_00055380(void); int func_000597B0(S_000306F0_Rect r, int a, const char *s, int b, int c); };
struct C_0009F7F0 { C_0009F7F0 *func_0009F7F0(void); int func_000A08D0(S_000306F0_Rect r, int a); };
struct C_00131150 { C_00131150 *func_00131150(void); int func_00131260(int a, float b, float c, float d, float e, float f, float g, float h, float i); };
struct C_00194CC0 { C_00194CC0 *func_00194CC0(void); };
struct C_00195090 { C_00195090 *func_00195090(void); void func_001956F0(const char *s); void func_001955D0(int a, float b); };
struct C_001500A0 { C_001500A0 *func_001500A0(void); };
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
    char pad68[8];
    int f70;
    S_000308F0_Holder *f74;
          int func_00030240(int mode, int unused, void *a, void *b, void *c);
    void func_0012B750(void *p);
    void func_0012B7D0(int handle, int a, int b, int c, int d);
    void func_0012B5E0(int a);
    void func_000308F0(void);
    int func_0012B5B0(int a);
    C_000308F0 *func_000306F0(int a0, int a1, int a2, int a3, int a4, int a5, int a6, const char *path, int a8);
};


void BmxCameraController_0002FA80::func_0002FA80(int a, int b)
{
    float m[12];
    float other[12];

    if (func_00135C70(0x3b, 0, a, 0x3f) != 0) {
        if (f6C == 0) {
            D_002B7EBC = 0;
            f6C = 2;
            func_0012B7D0(f58, 0, 0, 0, 0);
            m[2] = 0.0f; m[1] = 0.0f; m[0] = 0.0f; m[3] = 1.0f;
            m[6] = 0.0f; m[5] = 0.0f; m[4] = 0.0f; m[7] = 1.0f;
            m[10] = 0.0f; m[9] = 0.0f; m[8] = 0.0f; m[11] = 1.0f;
            f50->v1(m);
            f30->func_0012AC20(m, m + 4, m + 8, other, other + 1);
            f58->v0(m, 0);
            f34->f95C = 1;
        } else if (f6C == 4) {
            D_002B7EBC = 4;
            f6C = 2;
            func_0012B7D0(f58, 0, 0, 0, 0);
            m[2] = 0.0f; m[1] = 0.0f; m[0] = 0.0f; m[3] = 1.0f;
            m[6] = 0.0f; m[5] = 0.0f; m[4] = 0.0f; m[7] = 1.0f;
            m[10] = 0.0f; m[9] = 0.0f; m[8] = 0.0f; m[11] = 1.0f;
            f74->slots[f74->cur].obj->v1(m);
            f30->func_0012AC20(m, m + 4, m + 8, other, other + 1);
            f58->v0(m, 0);
        } else if (f6C == 2) {
            if (D_002B7EBC == 0) {
                f6C = 0;
                func_0012B7D0(f50, 0, 0, 0, 0);
                ((C_0002F190_2FA80 *)m)->func_0002F190();
                f50->v1(m);
                f30->func_0012AC20(m, m + 4, m + 8, other, other + 1);
                f50->v0(m, 0);
                f34->f95C = 0;
            } else if (D_002B7EBC == 4) {
                f6C = 4;
                func_0012B7D0(f74->slots[f74->cur].obj, 0, 0, 0, 0);
                ((C_0002F190_2FA80 *)m)->func_0002F190();
                f58->v1(m);
                f30->func_0012AC20(m, m + 4, m + 8, other, other + 1);
                f74->slots[f74->cur].obj->v0(m, 0);
            } else if (D_002B7EBC == 10) {
                f6C = 10;
                func_0012B7D0(f64, 0, 0, 0, 0);
                ((C_0002F190_2FA80 *)m)->func_0002F190();
                f64->v1(m);
                f30->func_0012AC20(m, m + 4, m + 8, other, other + 1);
                f64->v0(m, 0);
            }
        } else if (f6C == 10) {
            D_002B7EBC = 10;
            f6C = 2;
            func_0012B7D0(f58, 0, 0, 0, 0);
            ((C_0002F190_2FA80 *)m)->func_0002F190();
            f64->v1(m);
            f30->func_0012AC20(m, m + 4, m + 8, other, other + 1);
            f58->v0(m, 0);
        }
    }
    ((C_00157BF0_2FA80 *)this)->func_00157BF0(a, b);
}

void S_0002FA80_Entry::func_0002FE10(C_00168280 *stream, int index)
{
    char buf[0x104];
    char str[0x104];
    int tmp;
    int i;

    id = index;
    func_001ADCC0(buf, 0x104, D_002769DC, index + 1);
    stream->func_00169710(buf);
    void *mem = func_001E8A44(0x30);
    C_00194740 *obj = mem ? ((C_00194740 *)mem)->func_00194740() : 0;
    f0 = obj;
    obj->func_001947E0(0, 0, 0, 1);
    stream->func_00168550(D_002769D0, str, -1);
    func_001ADCC0(buf, 0x104, D_002769C4, D_002A5870, D_002A45E0, str);
    f0->func_00194790(buf, 0, 0);
    stream->func_00168A10(D_002769B8, &tmp);
    f0->f8 = (float)tmp;
    stream->func_00168BE0(D_002769A8, D_002764F0, name, -1);
    stream->func_00168C20(D_00276998, 0, &subCount);
    subs = (S_0002FA80_Sub *)func_001E8A44(subCount * 0x10c);
    for (i = 0; i < subCount; i++) {
        func_001ADCC0(buf, 0x104, D_00276988, id + 1, i + 1);
        stream->func_00169710(buf);
        stream->func_00168BE0(D_00276980, D_002764F0, subs[i].name, -1);
        stream->func_00168C20(D_00276974, 0, &subs[i].f104);
        stream->func_00168C20(D_00276968, 0, &subs[i].f108);
    }
}

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

static __forceinline S_0002FA80_Sub *CurSub_00030120(C_0002FA80 *m)
{
    S_0002FA80_Entry *e = &m->entries[m->cur];
    return &e->subs[e->curSub];
}

bool C_0002FA80::func_00030120(const char *subName)
{
    int func_001EA426(...);
    S_0002FA80_Entry *e = &entries[cur];
    int idx = e->curSub;
    S_0002FA80_Sub *s = &e->subs[idx];

    return func_001EA426(subName, s->name) == 0;
}

void C_0002FA80::func_00030160(void)
{
    S_0002FA80_Entry *e = &entries[cur];
    int idx = e->curSub;
    S_0002FA80_Sub *subs = *(S_0002FA80_Sub *volatile *)&e->subs;
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

int C_000308F0::func_00030240(int unused, int mode, void *a, void *b, void *c)
{
    float v[24];
    *(int *)((char *)this+0x6c)=mode;
    v[0]=v[1]=v[2]=0; v[3]=1;
    v[4]=v[5]=v[6]=0; v[7]=1;
    v[8]=v[9]=v[10]=0; v[11]=1;
    if(f50) func_0012B750(f50);
    if(f58) func_0012B750(f58);
    if(f5C) func_0012B750(f5C);
    if(f54) func_0012B750(f54);
    if(f60) func_0012B750(f60);
    if(f64) func_0012B750(f64);
    if(f74) for(int i=0;i<f74->f8;i++) func_0012B750(*(void **)((char *)f74->f4+i*0x118));
    if(f50) {
        ((C_00030240_Virtual *)f50)->get(v);
        if(a) { for(int j=0;j<4;j++) ((int *)v)[j]=((int *)a)[j]; }
        if(b) { for(int j=0;j<4;j++) ((int *)v)[j+4]=((int *)b)[j]; }
        if(c) { for(int j=0;j<4;j++) ((int *)v)[j+8]=((int *)c)[j]; }
    }
    void *obj;
    switch(mode) {
    case 0: func_0012B7D0((int)f50,0,0,0,0); ((C_00030240_Virtual *)f50)->set(v,0); break;
    case 4: func_0012B7D0((int)*(void **)f74->f4,0,0,0,0); goto done;
    case 5: func_0012B7D0((int)f5C,0,0,0,0); ((C_00030240_Virtual *)f5C)->set(v,0); break;
    case 6: func_0012B7D0((int)f5C,0,0,0,0); ((C_00030240_Virtual *)f58)->set(v,0); break;
    case 2: case 7: func_0012B7D0((int)f58,0,0,0,0); ((C_00030240_Virtual *)f58)->set(v,0); break;
    case 8: func_0012B7D0((int)f54,0,0,0,0); ((C_00030240_Virtual *)f54)->set(v,0); break;
    case 9: func_0012B7D0((int)f60,0,0,0,0); ((C_00030240_Virtual *)f60)->set(v,0); break;
    case 10: func_0012B7D0((int)f64,0,0,0,0); ((C_00030240_Virtual *)f64)->set(v,0); break;
    default: goto done;
    }
done:
    func_0012B5E0(0);
    if(f74) ((C_00194C60 *)*(void **)f74->f4)->func_00194C60();
    return 1;
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
                *(C_00030500_Destroy * volatile *)&p->f0 = 0;
            }
            C_00030500_Destroy *v = *(C_00030500_Destroy * volatile *)&p->f8;
            if (v) {
                func_001E891B(v);
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
        *(C_00030500_Destroy * volatile *)&f0 = 0;
    }
    C_00030500_Destroy *v = *(C_00030500_Destroy * volatile *)&f8;
    if (v) {
        func_001E891B(v);
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

C_000308F0 *C_000308F0::func_000306F0(int a0, int a1, int a2, int a3, int a4, int a5, int a6, const char *path, int a8)
{
    if (!func_0012B5B0(a0)) {
        return 0;
    }
    f70 = a1;
    if (path) {
        S_000308F0_Holder *h = (S_000308F0_Holder *)func_001E8A44(0x10);
        if (h) {
            h->f0 = this;
            h->f4 = 0;
            h->fC = 0;
            h->f8 = 0;
        } else {
            h = 0;
        }
        f74 = h;
        if (!((C_0002FA80 *)h)->func_000305C0(path)) {
            S_000308F0_Holder *p = f74;
            if (p) {
                if (p->f4) {
                    p->f4->func_00030500(3);
                    p->f4 = 0;
                }
                func_001E891B(p);
            }
            f74 = 0;
        }
    }
    if (!a8) {
        C_00055380 *m50 = (C_00055380 *)func_001E8A44(0x220);
        C_00055380 *o50 = m50 ? m50->func_00055380() : 0;
        f50 = (C_00055910 *)o50;
        if (!o50->func_000597B0(*(S_000306F0_Rect *)&a3, a2, D_00276A00, 1, a1)) {
            return 0;
        }
        C_0009F7F0 *m54 = (C_0009F7F0 *)func_001E8A44(0xe4);
        C_0009F7F0 *o54 = m54 ? m54->func_0009F7F0() : 0;
        f54 = (C_0009F9F0 *)o54;
        if (!o54->func_000A08D0(*(S_000306F0_Rect *)&a3, a2)) {
            return 0;
        }
        C_00131150 *m58 = (C_00131150 *)func_001E8A44(0xd4);
        C_00131150 *o58 = m58 ? m58->func_00131150() : 0;
        f58 = (C_001324B0 *)o58;
        if (!o58->func_00131260(1, 0.25f, 40.0f, 120.0f, 90.0f, 25.0f, 0.15f, 0.85f, 0.5f)) {
            return 0;
        }
        C_00194CC0 *m5C = (C_00194CC0 *)func_001E8A44(0x4c);
        C_00194CC0 *o5C = m5C ? m5C->func_00194CC0() : 0;
        f5C = (C_00194DB0 *)o5C;
        C_00195090 *m60 = (C_00195090 *)func_001E8A44(0x7c);
        C_00195090 *o60 = m60 ? m60->func_00195090() : 0;
        f60 = (C_00195130 *)o60;
        o60->func_001956F0(D_002A5870);
        ((C_00195090 *)f60)->func_001955D0(1, 0.4f);
        C_001500A0 *m64 = (C_001500A0 *)func_001E8A44(0x18);
        f64 = (C_00150350 *)(m64 ? m64->func_001500A0() : 0);
    }
    return this;
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
