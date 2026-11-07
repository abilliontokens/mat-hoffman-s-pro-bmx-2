/* 20 functions from 0x001B4E20 to 0x001B5D90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
#include "asm_helpers.h"
static inline const int &min_ref(const int &a, const int &b) { return b < a ? b : a; }
static inline int min_val_001B4E20(int a, int b) { return b < a ? b : a; }
struct C_001B5D00 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    int unk10C;
    char unk110;
    char pad111[0x77];
    char unk188;
    char pad189[0x77];
    int unk200;
    C_001B5D00* func_001B5D00(void);
};


extern int D_0028CB94;
extern int D_0028CA9C;
extern int D_0028CA88;
extern int D_002764F0;
extern int D_0027D880;
extern int D_0027CEF0;
extern int D_002AA9F4;
extern int D_002AA9F8;
extern int D_002AA9FC;
extern int D_002AAA00;
void func_001E891B(void *);
int func_001E9040(void *, void *);
void func_001E8920(void *, void *, int);
void __stdcall func_00168C20(void *, int, void *);

struct VObj_001B4F90 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001B57600 {
    void func_00157600(void *a);
};

struct C_001B5830 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_001B5830 *func_001B5830(void *a);
};

struct S_001B4E20_Stream {
    void func_00168BE0(char *a, char *b, char *buf, int size);
    void func_00168C20(char *name, int a, char *p);
};

struct C_001B4E20 {
    void *vtbl;
    void func_001B4B80(void *a);
    void func_00168BE0(void *a, void *b, void *c, int d);
    int func_001B4E20(void *param);
};

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
static __forceinline void InitVec_001B4ED0(int *v)
{
    v[2] = 0;
    v[1] = 0;
    v[0] = 0;
    v[3] = 0x3f800000;
}
struct C_001B4ED0_Base {
    void *volatile vtbl;
    C_001B4ED0_Base() { vtbl = (void *)&D_0028CA9C; _ReadWriteBarrier(); }
};
struct C_001B4ED0 : C_001B4ED0_Base {
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    int f54;
    C_001B4ED0();
    void func_001B4ED0();
    void func_001B4F90();
};
struct C_001B5720 {
    undefined4 func_001B5720(void);
};

struct C_001B56F0 {
    undefined4 func_001B56F0(void);
};

struct C_001B59E0 {
    int unk0;
    int unk4;
    char unk8;
    C_001B59E0* func_001B59E0(void);
};

extern int D_00275630;
extern int D_0028CC30;
extern int D_0027AF24;
extern int D_0028CC80;

extern int D_0028CC4C;
struct S_001B5A00_Stream {
    void func_00168BE0(void *a, void *b, void *c, int d);
    void func_00168C50(void *name, int def, void *dst);
};

struct C_001B5A00 {
    int func_001B5A00(S_001B5A00_Stream *stream, int a1);
    int func_001B5A30(S_001B5A00_Stream *stream, int a1);
};

extern int D_0028CAC8;
extern int D_0027CB30, D_0027CB2C, D_0028CABC, D_0028CAB8, D_0028CAB0, D_0028CAA8, D_00284BE8;

struct S_001B5000_Stream {
    void func_00168BE0(void *name, void *def, void *dst, int size);
    void func_00168CB0(void *name, void *def, void *dst);
    void func_00168C50(void *name, int def, void *dst);
    void func_00168C20(void *name, int def, void *dst);
    int func_00186F80(int idx);
};

struct S_00186EF0 {
    S_00186EF0 *func_00186EF0(void);
    int func_00186F80(S_001B5000_Stream *s, int idx);
};

struct C_001B5000 {
    char pad0[8];
    int f08;
    char pad0C[0xC];
    int f18;
    char pad1C[0xC];
    int f28;
    char pad2C[0xC];
    int f38;
    int f3C;
    int f40;
    char pad44[8];
    int f4C;
    S_00186EF0 **f50;
    void *f54;
    int f58;
    char **f5C;
    int f60;
    int *f64;
    int **f68;
    int **f6C;
    int *f70;
    char pad74[4];
    int *f78;
    char **f7C;
    char pad80[0x14];
    int *f94;
    char pad98[8];
    char fA0[0x104];
    char pad1A4[4];
    struct C_001B5240_Obj *f1A8;
    int func_001B5000(S_001B5000_Stream *s);
    void func_001B5240(S_001B5000_Stream *s);
};

struct C_001B5D30 {
    int func_001B5D30(S_001B5A00_Stream *stream, int a1);
};

struct S_001B59A0_Item {
    virtual void v0();
    virtual void v1();
    virtual void v2(int a);
};

struct C_001B59A0 {
    char pad0[0x24];
    int f24;
    S_001B59A0_Item **f28;
    int func_001B59A0(int a);
};

extern int D_0028CB80;
void *func_001E8A44(int size);
int func_001EA426(void *a, void *b);
void func_001B4ED0(void);

struct C_001B5790 {
    void *vtbl;
    char pad4[0x54];
    int f58;
    int f5C;
    C_001B5790 *func_001B5790(void);
};

struct Model_001B58C0 {
    void *vtbl;
    int f4;
};

struct Model1B0_001B58C0 : Model_001B58C0 {
    char pad8[0x50];
    int f58, f5C, f60, f64, f68, f6C, f70, f74, f78, f7C, f80, f84, f88, f8C, f90, f94, f98, f9C;
    char fA0[0x104];
    int f1A4, f1A8, f1AC;
    void func_001B4ED0(void);
    Model1B0_001B58C0 *func_001B5110(void);
};

struct Model60_001B58C0 : Model_001B58C0 {
    char pad8[0x50];
    int f58;
    int f5C;
    void func_001B4ED0(void);
};

struct Models_001B58C0 {
    char pad0[0x28];
    Model_001B58C0 **f28;
    void func_001B58C0(int type, int idx);
};

struct C_001B5750 {
    char pad0[0x60];
    int f60;
    char pad64[0x18];
    int f7C;
    int func_001B5750(void *name);
};

struct C_00187640 {
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
    virtual int v27(void *p);
    void *func_00187640(int a);
};

struct C_001B4BE0 {
    virtual void v0(void *p);
    C_001B4BE0 *func_001B4BE0(void);
};

struct C_001B57B0 {
    char pad0[0x54];
    void *f54;
    char pad58[4];
    void *f5C;
    void func_001B57B0(void *param);
};

struct S_001B5860_Obj {
    virtual void destroy(int a);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_001B5860 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    void func_001B5860(void);
};

extern int D_002769A8, D_00277288, D_0028CA84;
extern char D_0028CB6C[], D_0028CB58[], D_0028CB44[], D_0028CB30[], D_0028CB1C[];
extern char D_0028CB0C[], D_0028CAFC[], D_0028CAE8[], D_0028CAD4[], D_002869B8[];
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
char *func_001E95A4(char *s, const char *delim);
int func_001E91F4(const char *s);

struct C_001B4AF0 {
    void func_001B4AF0(void);
};

struct C_001B5240_Obj {
    virtual void v0(void *p);
    char pad4[0x110];
    int f114;
};


int C_001B4E20::func_001B4E20(void *param)
{
    char buf[0x104];

    func_001B4B80(param);
    ((S_001B4E20_Stream *)param)->func_00168BE0((char *)&D_0027D880, (char *)&D_002764F0, buf, 0x104);
    int len = func_001E9040(buf, (char *)&D_0027CEF0);
    int count = AsmMinI(len, 0x32);
    func_001E8920((char *)this + 4, buf, count);
    ((char *)this)[count + 4] = 0;
    ((S_001B4E20_Stream *)param)->func_00168C20((char *)&D_0028CA88, 1, (char *)this + 0x114);
    return 1;
}

C_001B4ED0::C_001B4ED0() {
    InitVec_001B4ED0(&f08);
    InitVec_001B4ED0(&f18);
    InitVec_001B4ED0(&f28);
    f44 = 0;
    f48 = 0;
    f04 = 0;
    f08 = D_002AA9F4;
    f0C = D_002AA9F8;
    f10 = D_002AA9FC;
    f14 = D_002AAA00;
    f18 = D_002AA9F4;
    f1C = D_002AA9F8;
    f20 = D_002AA9FC;
    f24 = D_002AAA00;
    f28 = D_002AA9F4;
    f2C = D_002AA9F8;
    f30 = D_002AA9FC;
    f34 = D_002AAA00;
    f38 = 0;
    f40 = 0;
    f3C = 0;
    f4C = 0;
    f50 = 0;
    f54 = 0;
}

void C_001B4ED0::func_001B4F90() {
    vtbl = (void *)&D_0028CA9C;
    if (f50 != 0) {
        for (int i = 0; i < f4C; i++) {
            void *p = ((void **)f50)[i];
            if (p != 0) {
                func_001E891B(p);
            }
        }
        func_001E891B((void *)f50);
        f50 = 0;
    }
    if (f54 != 0) {
        ((VObj_001B4F90 *)f54)->v2();
        f54 = 0;
    }
}

int C_001B5000::func_001B5000(S_001B5000_Stream *s)
{
    int i;
    s->func_00168CB0(&D_0027CB30, &D_002AA9F4, &f18);
    s->func_00168CB0(&D_0027CB2C, &D_002AA9F4, &f28);
    s->func_00168CB0(&D_0028CABC, &D_002AA9F4, &f08);
    s->func_00168C50(&D_0028CAB8, 0, &f38);
    s->func_00168C50(&D_0028CAB0, 0, &f3C);
    s->func_00168C50(&D_0028CAA8, 0, &f40);
    s->func_00168C20(&D_00284BE8, 0, &f4C);
    if (f4C > 0) {
        f50 = (S_00186EF0 **)func_001E8A44(f4C * 4);
    }
    for (i = 0; i < f4C; i++) {
        S_00186EF0 *p = (S_00186EF0 *)func_001E8A44(0x114);
        f50[i] = p ? p->func_00186EF0() : 0;
        if (f50[i]->func_00186F80(s, i) == 0) {
            func_001E891B(f50[i]);
            f50[i] = 0;
        }
    }
    return 1;
}

#pragma optimize("", on)
Model1B0_001B58C0 *Model1B0_001B58C0::func_001B5110(void) {
    int t; int len;
    func_001B4ED0();
    vtbl = (void *)&D_0028CAC8;
    f58 = 0;
    f5C = 0;
    f60 = 0;
    f64 = 0;
    f6C = 0;
    f70 = 0;
    f78 = 0;
    f74 = 0;
    f80 = 0;
    f84 = 0;
    f88 = -1;
    f8C = 0;
    f90 = 0;
    f94 = 0;
    f98 = 1;
    f9C = 0;
    f68 = 0;
    f7C = 0;
    t = 0x103;
    len = AsmMinI(t, 4);
    func_001E8920(fA0, &D_002764F0, len);
    fA0[len] = 0;
    f1A4 = 0;
    f1A8 = 0;
    f1AC = 0;
    return this;
}
void C_001B5000::func_001B5240(S_001B5000_Stream *s)
{
    char bufA[0x104];
    char bufB[0x104];
    int i;
    int k;
    int j;
    char *tok;
    void *mem;
    C_001B5240_Obj *obj;

    s->func_00168BE0(&D_002769A8, &D_002764F0, fA0, 0x104);
    s->func_00168C20(&D_00277288, 0, &f58);
    if (f58 > 0) {
        f5C = (char **)func_001E8A44(f58 * 4);
        for (i = 0; i < f58; i++) {
            f5C[i] = (char *)func_001E8A44(0x104);
            func_001ADCC0(bufA, 0x104, D_0028CB6C, i + 1);
            s->func_00168BE0(bufA, &D_002764F0, f5C[i], 0x104);
        }
    }
    s->func_00168C20(&D_0028CB58, 1, &f60);
    if (f60 > 0) {
        f64 = (int *)func_001E8A44(f60 * 4);
        f68 = (int **)func_001E8A44(f60 * 4);
        f6C = (int **)func_001E8A44(f60 * 4);
        f94 = (int *)func_001E8A44(f60 * 4);
        f70 = (int *)func_001E8A44(f60 * 4);
        f78 = (int *)func_001E8A44(f60 * 4);
        f7C = (char **)func_001E8A44(f60 * 4);
    }
    for (k = 0; k < f60; k++) {
        func_001ADCC0(bufA, 0x104, D_0028CB44, k + 1);
        s->func_00168C20(bufA, 1, &f64[k]);
        f68[k] = (int *)func_001E8A44(f64[k] * 4);
        func_001ADCC0(bufA, 0x104, D_0028CB30, k + 1);
        s->func_00168BE0(bufA, &D_002764F0, bufB, 0x104);
        if (strcmp(bufB, "none") != 0) {
            tok = func_001E95A4(bufB, D_002869B8);
            for (j = 0; tok != 0 && j < f64[k]; j++) {
                f68[k][j] = func_001E91F4(tok);
                tok = func_001E95A4(0, D_002869B8);
            }
        } else {
            for (j = 0; j < f64[k]; j++) {
                f68[k][j] = 1;
            }
        }
        f6C[k] = (int *)func_001E8A44(f64[k] * 4);
        func_001ADCC0(bufA, 0x104, D_0028CB1C, k + 1);
        s->func_00168BE0(bufA, &D_002764F0, bufB, 0x104);
        if (strcmp(bufB, "none") != 0) {
            tok = func_001E95A4(bufB, D_002869B8);
            for (j = 0; tok != 0 && j < f64[k]; j++) {
                f6C[k][j] = func_001E91F4(tok);
                tok = func_001E95A4(0, D_002869B8);
            }
        } else {
            for (j = 0; j < f64[k]; j++) {
                f6C[k][j] = 100;
            }
        }
        func_001ADCC0(bufA, 0x104, D_0028CB0C, k + 1);
        s->func_00168C20(bufA, 1, &f94[k]);
        func_001ADCC0(bufA, 0x104, D_0028CAFC, k + 1);
        s->func_00168C20(bufA, 1, &f70[k]);
        func_001ADCC0(bufA, 0x104, D_0028CAE8, k + 1);
        s->func_00168C20(bufA, 1, &f78[k]);
        f7C[k] = (char *)func_001E8A44(0x104);
        func_001ADCC0(bufA, 0x104, D_0028CAD4, k + 1);
        s->func_00168BE0(bufA, &D_002764F0, f7C[k], 0x104);
    }
    func_001B5000(s);
    mem = func_001E8A44(0x2c);
    f54 = mem != 0 ? ((C_00187640 *)mem)->func_00187640(1) : 0;
    if (((C_00187640 *)f54)->v27(s) == 0) {
        ((C_00187640 *)f54)->v2();
        f54 = 0;
    }
    mem = func_001E8A44(0x118);
    if (mem != 0) {
        ((C_001B4AF0 *)mem)->func_001B4AF0();
        *(void **)mem = &D_0028CA84;
        ((C_001B5240_Obj *)mem)->f114 = 1;
        obj = (C_001B5240_Obj *)mem;
    } else {
        obj = 0;
    }
    f1A8 = obj;
    f1A8->v0(s);
}

undefined4 C_001B56F0::func_001B56F0(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(int *)(in_ECX + 0x1ac) + -4 +
          *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + *(int *)(in_ECX + 0x84) * 4) +
                  *(int *)(in_ECX + 0x8c) * 4) * 4);
}

undefined4 C_001B5720::func_001B5720(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(int *)(in_ECX + 0x1ac) + -4 +
          *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + *(int *)(in_ECX + 0x88) * 4) +
                  *(int *)(in_ECX + 0x90) * 4) * 4);
}

int C_001B5750::func_001B5750(void *name)
{
    int i;
    for (i = 0; i < f60; i++) {
        if (func_001EA426(name, ((void **)f7C)[i]) == 0) {
            return i;
        }
    }
    return 0;
}

C_001B5790 *C_001B5790::func_001B5790(void)
{
    func_001B4ED0();
    f58 = 0;
    f5C = 0;
    vtbl = (void *)&D_0028CB80;
    return this;
}

void C_001B57B0::func_001B57B0(void *param)
{
    void *mem = func_001E8A44(0x2c);
    f54 = mem != 0 ? ((C_00187640 *)mem)->func_00187640(1) : 0;
    if (((C_00187640 *)f54)->v27(param) == 0) {
        ((C_00187640 *)f54)->v2();
        f54 = 0;
    }
    mem = func_001E8A44(0x234);
    f5C = mem != 0 ? ((C_001B4BE0 *)mem)->func_001B4BE0() : 0;
    ((C_001B4BE0 *)f5C)->v0(param);
}

C_001B5830 *C_001B5830::func_001B5830(void *a) {
    ((C_001B57600 *)this)->func_00157600(a);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028CB94;
    return this;
}

void C_001B5860::func_001B5860(void)
{
    int i;

    vtbl = (void *)&D_0028CB94;
    if (f28 != 0) {
        for (i = 0; i < f24; i++) {
            S_001B5860_Obj *e = ((S_001B5860_Obj **)f28)[i];
            if (e != 0) {
                e->destroy(1);
            }
        }
        func_001E891B((void *)f28);
        f28 = 0;
    }
    ((C_00157660 *)this)->func_00157660();
}

void Models_001B58C0::func_001B58C0(int type, int idx)
{
    if (type == 1) {
        Model1B0_001B58C0 *p = (Model1B0_001B58C0 *)func_001E8A44(0x1b0);

        if (p != 0) {
            p = p->func_001B5110();
        } else {
            p = 0;
        }
        *(Model_001B58C0 **)((char *)f28 + idx * 4) = p;
    } else if (type == 2) {
        Model60_001B58C0 *p = (Model60_001B58C0 *)func_001E8A44(0x60);

        if (p != 0) {
            p->func_001B4ED0();
            p->vtbl = (void *)&D_0028CB80;
            p->f58 = 0;
            p->f5C = 0;
        } else {
            p = 0;
        }
        *(Model_001B58C0 **)((char *)f28 + idx * 4) = (Model_001B58C0 *)p;
    } else {
        Model1B0_001B58C0 *p = (Model1B0_001B58C0 *)func_001E8A44(0x1b0);

        if (p != 0) {
            p = p->func_001B5110();
        } else {
            p = 0;
        }
        *(Model_001B58C0 **)((char *)f28 + idx * 4) = p;
        type = 1;
    }
    (*(Model_001B58C0 **)((char *)f28 + idx * 4))->f4 = type;
}

int C_001B59A0::func_001B59A0(int a)
{
    int i;

    for (i = 0; i < f24; i++) {
        f28[i]->v2(a);
    }
    return 1;
}

C_001B59E0* C_001B59E0::func_001B59E0(void) {
    extern int D_0028CC28;
    unk0 = (int)&D_0028CC28;
    unk4 = 0;
    unk8 = 0;
    return this;
}

int C_001B5A00::func_001B5A00(S_001B5A00_Stream *stream, int a1)
{
    stream->func_00168BE0(&D_0028CC30, &D_00275630, (char *)this + 8, 0x103);
    return 1;
}

int C_001B5A00::func_001B5A30(S_001B5A00_Stream *stream, int a1)
{
    stream->func_00168C50(&D_0028CC4C, 0, (char *)this + 0x10C);
    stream->func_00168BE0(&D_0027AF24, &D_00275630, (char *)this + 0x114, 0x77);
    stream->func_00168BE0(&D_0028CC30, &D_00275630, (char *)this + 8, 0x103);
    return 1;
}

C_001B5D00* C_001B5D00::func_001B5D00(void) {
    extern int D_0028CC78;
    unk4 = 0;
    unk8 = 0;
    unk0 = (int)&D_0028CC78;
    unk10C = -1;
    unk110 = 0;
    unk188 = 0;
    unk200 = 0;
    return this;
}

int C_001B5D30::func_001B5D30(S_001B5A00_Stream *stream, int a1)
{
    stream->func_00168BE0(&D_0027AF24, &D_00275630, (char *)this + 0x110, 0x77);
    stream->func_00168BE0(&D_0028CC80, &D_00275630, (char *)this + 0x188, 0x77);
    stream->func_00168BE0(&D_0028CC30, &D_00275630, (char *)this + 8, 0x103);
    return 1;
}

