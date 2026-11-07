/* 18 functions from 0x001BA560 to 0x001BB4F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
#define C_001BBAA0_DEFINED
struct C_001BBAA0 {
    void func_001BBAA0(void *owner, void *fn);
};
struct S_9C0_Stream {
    int func_00169710(const char *name);
    void func_00168C20(const char *key, int def, int *dst);
    void func_00168C50(const char *key, int def, float *dst);
    void func_00168CB0(const char *key, void *def, void *dst);
    void func_00168BE0(const char *key, const char *def, char *dst, int n);
};
struct S_9C0_Vec {
    float x, y, z, w;
    S_9C0_Vec() { x = y = z = 0; w = 1.0f; }
};
template <class T> inline T Min(T a, T b) { return a > b ? b : a; }
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
struct S_9C0_Elem {
    char name[0x104];
    int f104;
    int f108;
    float f10c;
    float f110;
    float f114;
    S_9C0_Vec v118;
    S_9C0_Vec v128;
    S_9C0_Vec v138;
    S_9C0_Vec v148;
    int *f158;
    S_9C0_Elem *func_001B84E0();
};
struct S_9C0_This {
    char pad[0x24];
    int f24;
    S_9C0_Elem **f28;
    void func_001BA9C0(S_9C0_Stream *s);
};
extern char D_0027CBAC[], D_0027CB90[], D_0027CB78[], D_002764F0[], D_0027C4D0[], D_0027C4BC[], D_0027CB60[], D_0027CB54[], D_0027CB44[], D_0027CB38[], D_00275AD4[], D_0027CB30[], D_0027CB2C[], D_002AA9F4[];
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E83E8(void *p, unsigned int n);
char *func_001E8920(char *dst, const char *src, unsigned int n);

struct C_001BA9A0 {
    undefined4 func_001BA9A0(byte param_1);
};

struct C_001BB4D0 {
    void func_001BB4D0(int param_1);
};

struct C_001BB2C0 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    void **f28;
    void func_001BAE30();
    void *func_001BB2C0(int flags);
};

struct C_001BB280 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    void **f28;
    void func_001BA8B0();
    void *func_001BB280(unsigned int flags);
};

struct T_A { void *vtbl; int f4; char f8; char pad9[0x103]; int f10c; int f110; char f114; char pad115[0x77]; char f18c; };
struct T_H { void *vtbl; int f4; char f8; char pad9[0x103]; int f10c; };
struct T_B { void *vtbl; int f4; char f8; char pad9[0x103]; char f10c; };
struct T_C { T_C *func_001B5D00(); };
struct T_D { T_D *func_001B5EA0(); };
struct T_F { T_F *func_001B6100(); };
struct T_G { T_G *func_001B61A0(); };
struct T_I { T_I *func_001BA5E0(); };
struct T_J { T_J *func_001B6410(); };
extern int D_0028CC44, D_0028CC60, D_0028CCA8, D_0028CCF4, D_0028CCE8;
void *func_001E8A44(unsigned int n);
inline T_A *Init_AnimationTriggerAction(T_A *p)
{
    p->f4 = 0; p->f8 = 0; p->vtbl = &D_0028CC44;
    p->f10c = 0; p->f114 = 0; p->f110 = -1;
    return p;
}
inline T_A *Init_AnimationSequenceChangeTriggerAction(T_A *p)
{
    p->f4 = 0; p->f8 = 0; p->f10c = 0; p->f114 = 0; p->f18c = 0;
    p->vtbl = &D_0028CC60; p->f110 = -1;
    return p;
}
inline T_B *Init_TriggerActionB(T_B *p, void *vtbl)
{
    p->f4 = 0; p->f8 = 0; p->vtbl = vtbl; p->f10c = 0;
    return p;
}
inline T_H *Init_TriggerActionH(T_H *p)
{
    p->f4 = 0; p->f8 = 0; p->vtbl = &D_0028CCF4; p->f10c = 0;
    return p;
}

extern int D_0028CE6C;
extern int D_0028D11C;
extern int D_0028D110;
extern int D_0028D244;

struct C_001BB470 {
    void *vtbl;
    char pad04[0x20];
    u8 f24;
    char pad25[0x3B];
    u8 f60;
    char pad61[0x77];
    int fD8;
    int fDC;
    int fE0;
    int fE4;
    int fE8;
    int fEC;
    u32 fF0[8];
    int f110;
    void func_00157600(int a0);
    C_001BB470(int a0);
};

void func_001E891B(void *p);

struct C_001BB2A0 {
    void func_001BA910(void);
    void *func_001BB2A0(int flags);
};

extern int D_0028CF94;
extern int D_0028CF84;
extern int D_0028D200;
extern int D_000186A0;
extern int D_0028CB80;
extern int D_0028CA64;

struct C_00157660 {
    void func_00157660(void);
};

struct C_001B4F90 {
    void func_001B4F90(void);
};

extern int D_0028CAC8;

struct C_001BAEC0 : C_001B4F90 {
    void *vtbl;
    char pad04[0x54];
    int f58;
    void **f5C;
    int f60;
    void *f64;
    void **f68;
    void **f6C;
    void *f70;
    void *f74;
    void *f78;
    void **f7C;
    char pad80[0x14];
    void *f94;
    char pad98[0x110];
    void **f1A8;
    void *f1AC;
    void func_001BAEC0(void);
};

struct S_001BA910_Elem {
    void *vtbl;
    int f4;
    int f8;
    void func_001B69F0();
};

struct C_001BA910 {
    void *vtbl;
    char pad04[0x20];
    int f24;
    S_001BA910_Elem **f28;
    void func_001BA910(void);
};

struct S_001BA560_arg {
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
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual int v96(void *p);
};

struct S_001BA560_Node {
    int f0;
    int f4;
};

struct C_001BA560 {
    char pad0[0x10c];
    int f10c;
    char pad110[0x178];
    S_001BA560_Node *f288;
    int f28c;
    int func_001BA560(S_001BA560_arg *arg1, int arg2);
};

extern char D_0028514C[];
extern char D_0028D22C[];
extern char D_0028D220[];
extern char D_0028D208[];
extern char D_0028803C[];
extern char D_00275630[];
extern char D_0028CD10[];
extern char D_0028CD08[];
extern char D_0028CC30[];
extern "C" int strcmp(const char *a, const char *b);
char *func_001E91F4(const char *s);

/* config reader */
struct S_001BB060_Stream {
    void func_00168BE0(const char *key, const char *def, char *dst, int n);
};

/* 8-byte string tokenizer state (strtok-like) */
struct S_001BB060_Tokenizer {
    double align;
    void Tokenizer_SetString(const char *str);
    char *func_001B4A70(const char *delims);
};

/* growable pointer array: data, capacity, limit, count */
struct S_001BB060_Array {
    char **data;
    int cap;
    int max;
    int count;
    int flag;
    void func_001B9C70(int n);
    void Init()
    {
        flag = 0;
        cap = 10;
        max = (int)&D_000186A0;
        count = 0;
        data = (char **)func_001E8A44(0x28);
    }
    char *&At(int i)
    {
        if (i >= cap) {
            func_001B9C70((i + 1) * 2);
        }
        if (i + 1 > count) {
            count = i + 1;
        }
        return data[i];
    }
};

/* ShaderPassTriggerAction */
struct C_001BA5E0 {
    void *vtbl;
    int f4;
    char f8;
    char pad09[0x103];
    int f10c;
    int f110;
    int f114;
    int f118;
    int f11c;
    int f120;
    int f124;
    char pad128[4];
    int f12c;
    int f130;
    int f134;
    int f138;
    int f13c;
    char pad140[4];
    int f144;
    C_001BA5E0();
    C_001BA5E0 *func_001BA5E0(void);
    int func_001BB060(S_001BB060_Stream *stream, int a1);
};

struct C_001BB300 {
    void *vtbl;
    char pad04[0x58];
    void *f5c;
    void func_001BAEC0();
    C_001BB300 *func_001BB300(byte flags);
    C_001BB300 *func_001BB2E0(byte flags);
};


int C_001BA560::func_001BA560(S_001BA560_arg *arg1, int arg2)
{
    int func_001E8A44(...);
    void func_001BA540();
    int r = arg1->v96(&f10c);
    S_001BA560_Node *n;

    if (arg2 != 0)
        ((C_001BBAA0 *)arg2)->func_001BBAA0(this, (void *)&func_001BA540);
    if (r == 0)
        return 0;
    n = (S_001BA560_Node *)func_001E8A44(8);
    if (n) {
        n->f0 = f28c;
        n->f4 = r;
    } else {
        n = 0;
    }
    f288 = n;
    return 1;
}

void C_001BB280::func_001BA8B0(void)
{
    int i;

    vtbl = (void *)&D_0028CE6C;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            S_001BA910_Elem *e = ((S_001BA910_Elem **)f28)[i];
            if (e != 0) {
                e->func_001B69F0();
                func_001E891B(e);
            }
        }
        func_001E891B(f28);
        f28 = 0;
    }
    ((C_00157660 *)this)->func_00157660();
}

inline void Init_001BA5E0(C_001BA5E0 *p)
{
    p->f4 = 0;
    p->f8 = 0;
    p->vtbl = (void *)&D_0028D200;
}

C_001BA5E0::C_001BA5E0()
{
    Init_001BA5E0(this);
    ((S_001BB060_Array *)&f114)->Init();
    ((S_001BB060_Array *)&f12c)->Init();
    f110 = 0;
    f144 = 0;
}

void __stdcall func_001BA660(int *kind, void **out)
{
    int k = *kind;
    if (k == 1) {
        T_A *p = (T_A *)func_001E8A44(0x18c);
        if (p == 0) { *out = 0; return; }
        p->f4 = 0; p->f8 = 0; p->vtbl = &D_0028CC44; p->f10c = 0; p->f114 = 0; p->f110 = -1;
        *out = p;
        return;
    }
    if (k == 2) {
        T_A *p = (T_A *)func_001E8A44(0x204);
        if (p == 0) { *out = 0; return; }
        p->f4 = 0; p->f8 = 0; p->f10c = 0; p->f114 = 0; p->f18c = 0; p->vtbl = &D_0028CC60; p->f110 = -1;
        *out = p;
        return;
    }
    if (k == 3) {
        T_C *p = (T_C *)func_001E8A44(0x204);
        if (p == 0) { *out = 0; return; }
        *out = p->func_001B5D00();
        return;
    }
    if (k == 4) {
        T_D *p = (T_D *)func_001E8A44(0x188);
        if (p == 0) { *out = 0; return; }
        *out = p->func_001B5EA0();
        return;
    }
    if (k == 5) {
        T_B *p = (T_B *)func_001E8A44(0x184);
        if (p == 0) { *out = 0; return; }
        p->f4 = 0; p->f8 = 0; p->vtbl = &D_0028CCA8; p->f10c = 0;
        *out = p;
        return;
    }
    if (k == 6) {
        T_F *p = (T_F *)func_001E8A44(0x290);
        if (p == 0) { *out = 0; return; }
        *out = p->func_001B6100();
        return;
    }
    if (k == 9) {
        T_H *p = (T_H *)func_001E8A44(0x110);
        if (p == 0) { *out = 0; return; }
        p->f4 = 0; p->f8 = 0; p->vtbl = &D_0028CCF4; p->f10c = 0;
        *out = p;
        return;
    }
    if (k == 7) {
        T_G *p = (T_G *)func_001E8A44(0x224);
        if (p == 0) { *out = 0; return; }
        *out = p->func_001B61A0();
        return;
    }
    if (k == 8) {
        T_B *p = (T_B *)func_001E8A44(0x210);
        if (p == 0) { *out = 0; return; }
        p->f4 = 0; p->f8 = 0; p->vtbl = &D_0028CCE8; p->f10c = 0;
        *out = p;
        return;
    }
    if (k == 10) {
        T_I *p = (T_I *)func_001E8A44(0x148);
        if (p == 0) { *out = 0; return; }
        *out = p->func_001BA5E0();
        return;
    }
    if (k == 11) {
        T_J *p = (T_J *)func_001E8A44(0x118);
        if (p == 0) { *out = 0; return; }
        *out = p->func_001B6410();
        return;
    }
    *out = 0;
}

void C_001BA910::func_001BA910(void)
{
    int func_001E891B(...);
    int i;

    vtbl = (void *)&D_0028CF94;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            S_001BA910_Elem *e = f28[i];
            if (e != 0) {
                e->vtbl = (void *)&D_0028CF84;
                if (e->f8 != 0) {
                    func_001E891B(e->f8);
                    e->f8 = 0;
                }
                if (e->f4 != 0) {
                    func_001E891B(e->f4);
                    e->f4 = 0;
                }
                func_001E891B(e);
            }
        }
        func_001E891B(f28);
        f28 = 0;
    }
    ((C_00157660 *)this)->func_00157660();
}

undefined4 C_001BA9A0::func_001BA9A0(byte param_1)
{
  int func_001B8480(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001B8480();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

unsigned int strlen(const char *s);
char *strncpy(char *d, const char *s, unsigned int n);
void S_9C0_This::func_001BA9C0(S_9C0_Stream *s)
{
    int flag;
    float fa;
    int count;
    float fb;
    float fc;
    int len;
    volatile int base;
    int lim, r;
    char name[0x104];
    char buf[0x104];
    S_9C0_Elem *e;
    int n;
    int i, j, limit;

    if (!s->func_00169710(D_0027CBAC))
        return;
    s->func_00168C20(D_0027CB90, 0, &count);
    if (count <= 0)
        return;
    if (f28 != 0) {
        i = f24;
        f24 += count;
        f28 = (S_9C0_Elem **)func_001E83E8(f28, f24 * 4);
    } else {
        i = 0;
        f24 = count;
        f28 = (S_9C0_Elem **)func_001E8A44(f24 * 4);
    }
    limit = f24;
    base = 1 - i;
    for (; i < limit; i++) {
        func_001ADCC0(buf, 0x104, D_0027CB78, base + i);
        if (!s->func_00169710(buf))
            continue;
        S_9C0_Vec v1, v2, v3, v4;
        s->func_00168BE0(D_0027C4D0, D_002764F0, name, -1);
        s->func_00168C20(D_0027C4BC, 1, &flag);
        s->func_00168C50(D_0027CB60, 0, &fb);
        s->func_00168C50(D_0027CB54, 0, &fa);
        s->func_00168C50(D_0027CB44, 0, &fc);
        s->func_00168CB0(D_0027CB38, D_002AA9F4, &v1);
        s->func_00168CB0(D_00275AD4, D_002AA9F4, &v2);
        s->func_00168CB0(D_0027CB30, D_002AA9F4, &v3);
        s->func_00168CB0(D_0027CB2C, D_002AA9F4, &v4);
        e = (S_9C0_Elem *)func_001E8A44(0x15c);
        f28[i] = e ? e->func_001B84E0() : 0;
        len = strlen(name); lim = 0x103; r = AsmMinI(lim, len); n = r;
        strncpy((char *)f28[i], name, n);
        ((char *)f28[i])[n] = 0;
        f28[i]->f104 = flag;
        f28[i]->f10c = fb;
        f28[i]->f110 = fa;
        f28[i]->f114 = fc;
        f28[i]->v118 = v1;
        f28[i]->v128 = v2;
        f28[i]->v138 = v3;
        f28[i]->v148 = v4;
        if (flag == 0) {
            f28[i]->f158 = (int *)func_001E8A44(4);
            f28[i]->f158[0] = 0;
        } else {
            f28[i]->f158 = (int *)func_001E8A44(flag * 4);
            for (j = 0; j < flag; j++)
                f28[i]->f158[j] = 0;
        }
    }
}

void C_001BB2C0::func_001BAE30(void)
{
    int func_001E891B(...);
    int i;

    vtbl = (void *)&D_0028D11C;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            S_001BA910_Elem *e = ((S_001BA910_Elem **)f28)[i];
            if (e != 0) {
                e->vtbl = (void *)&D_0028D110;
                if (e->f8 != 0) {
                    func_001E891B(e->f8);
                    e->f8 = 0;
                }
                if (e->f4 != 0) {
                    func_001E891B(e->f4);
                    e->f4 = 0;
                }
                func_001E891B(e);
            }
        }
        func_001E891B(f28);
        f28 = 0;
    }
    ((C_00157660 *)this)->func_00157660();
}

void C_001BAEC0::func_001BAEC0(void)
{
    int i;
    void **p;

    vtbl = &D_0028CAC8;
    if (f5C != 0) {
        for (i = 0; i < f58; i++) {
            if (f5C[i] != 0) {
                func_001E891B(f5C[i]);
            }
        }
        func_001E891B(f5C);
        f5C = 0;
    }
    if (f64 != 0) {
        func_001E891B(f64);
        f64 = 0;
    }
    if (f68 != 0) {
        for (i = 0; i < f60; i++) {
            if (f68[i] != 0) {
                func_001E891B(f68[i]);
            }
        }
        func_001E891B(f68);
        f68 = 0;
    }
    if (f6C != 0) {
        for (i = 0; i < f60; i++) {
            if (f6C[i] != 0) {
                func_001E891B(f6C[i]);
            }
        }
        func_001E891B(f6C);
        f6C = 0;
    }
    if (f70 != 0) {
        func_001E891B(f70);
        f70 = 0;
    }
    if (f74 != 0) {
        func_001E891B(f74);
        f74 = 0;
    }
    if (f78 != 0) {
        func_001E891B(f78);
        f78 = 0;
    }
    if (f94 != 0) {
        func_001E891B(f94);
        f94 = 0;
    }
    if (f7C != 0) {
        for (i = 0; i < f60; i++) {
            if (f7C[i] != 0) {
                func_001E891B(f7C[i]);
            }
        }
        func_001E891B(f7C);
        f7C = 0;
    }
    p = f1A8;
    if (p != 0) {
        *p = &D_0028CA64;
        func_001E891B(p);
        f1A8 = 0;
    }
    if (f1AC != 0) {
        func_001E891B(f1AC);
        f1AC = 0;
    }
    func_001B4F90();
}

int C_001BA5E0::func_001BB060(S_001BB060_Stream *stream, int a1)
{
    char buf[0x80];
    S_001BB060_Tokenizer tok1;
    S_001BB060_Tokenizer tok2;
    char *s;
    int i;

    stream->func_00168BE0(D_0028D22C, D_0028514C, buf, 0x80);
    tok1.Tokenizer_SetString(buf);
    s = tok1.func_001B4A70(D_0028803C);
    for (i = 0; s != 0; i++) {
        ((S_001BB060_Array *)&f114)->At(i) = func_001E91F4(s);
        s = tok1.func_001B4A70(D_0028803C);
    }
    stream->func_00168BE0(D_0028D220, D_0028514C, buf, 0x80);
    tok2.Tokenizer_SetString(buf);
    s = tok2.func_001B4A70(D_0028803C);
    for (i = 0; s != 0; i++) {
        ((S_001BB060_Array *)&f12c)->At(i) = func_001E91F4(s);
        s = tok2.func_001B4A70(D_0028803C);
    }
    stream->func_00168BE0(D_0028D208, D_00275630, buf, 0x80);
    f10c = strcmp(buf, "EnterOnNoExit") == 0 ? 1 : (strcmp(buf, "Wait") == 0 ? 2 : 0);
    stream->func_00168BE0(D_0028CC30, D_00275630, &f8, 0x103);
    return 1;
}

void *C_001BB280::func_001BB280(unsigned int flags)
{
    func_001BA8B0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001BB2A0::func_001BB2A0(int flags)
{
    func_001BA910();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001BB2C0::func_001BB2C0(int flags) {
    func_001BAE30();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_001BB300 *C_001BB300::func_001BB2E0(byte flags)
{
    int func_001E891B(...);

    func_001BAEC0();
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}

C_001BB300 *C_001BB300::func_001BB300(byte flags)
{
    int func_001E891B(...);
    void *p = f5c;
    vtbl = (void *)&D_0028CB80;
    if (p != 0) {
        *(void **)p = (void *)&D_0028CA64;
        func_001E891B(p);
        f5c = 0;
    }
    ((C_001B4F90 *)this)->func_001B4F90();
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}

void func_001BB350(int a, int b, C_001BA5E0 *obj, int flag)
{
    if (flag == 0 && obj->f110 != 0 && ((int *)obj)[0x10C / 4] == 0)
        obj->f144 = 0;
}

C_001BB470::C_001BB470(int a0)
{
    func_00157600(a0);
    vtbl = (void *)&D_0028D244;
    fE8 = 0;
    fEC = 0;
    fE0 = 0;
    f24 = 0;
    fD8 = -1;
    f60 = 0;
    fDC = 0;
    for (int i = 0; i < 8; i++) {
        fF0[i] = 0;
    }
    f110 = 0;
    fE4 = 0;
}

void C_001BB4D0::func_001BB4D0(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xf0 + param_1 * 4) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  return;
}
