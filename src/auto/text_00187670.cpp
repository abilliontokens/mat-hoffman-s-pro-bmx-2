/* 18 functions from 0x00187670 to 0x001884F0, found by Ghidra. */
#include "common.h"

struct C_001877F0Param {
    char pad0[0x24];
    char section[0x100];
    int func_00169710(void *a);
    int func_00168C20(void *a, int b, void *c);
};

/* 0x10-byte element of the ContinuousAnimObjectSounds list, loaded through virtual slot 0 */
struct S_00187670_Owner {
    char pad0[0x26c];
    char name[1];
};

struct S_00187670_Elem {
    virtual void v0(void *stream);
    virtual void v1(int a, int b);
    virtual void v2(int a, int b, int c, int d);
    char pad4[0x8];
    S_00187670_Owner *fC;
};

struct C_00187670 {
    char pad0[0x24];
    int f24;
    S_00187670_Elem *f28;
    int func_00187670(C_001877F0Param *stream);
    int func_00187774(int a, int b, int c, int d);
};

extern int D_00289BE0;
extern int D_00289BD0;
void func_00187000();
extern "C" char *strcpy(char *dst, const char *src);

struct C_00187370 {
    virtual void func_00187390(void *a);
    int f4;
    int f8;
};

struct C_001877F0 {
    char pad0[0x24];
    int f24;
    C_00187370 *f28;
    int func_001877F0(C_001877F0Param *param);
};

extern int D_0027AEE4;
extern int D_00289C80;
extern int D_00289C70;
extern int D_00289D30;
extern int D_00289D14;
void func_001867D0();

struct C_00187950Elem {
    virtual void func_00187950(void *a);
    char pad4[0x164];
};

struct C_00187950 {
    char pad0[0x24];
    int f24;
    C_00187950Elem *f28;
    int func_00187950(C_001877F0Param *param);
};

void func_00186D60();
void *func_001E8A44(int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);
#include "ghidra.h"
#include "asm_helpers.h"
struct C_00187AF0 {
    void func_00187AF0(void);
};

struct C_001884D0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_001884D0* func_001884D0(void);
};

int func_00135C70(int param_1, int param_2, int *param_3, int param_4);

struct C_00187EE0 {
    char pad0[0x28];
    void *f28;
    char pad2c[4];
    void *f30;
    void func_00187EE0(void);
};

struct S_001878D0_Elem {
    virtual void v0();
    virtual void v1(int a, int b);
    int f4;
    int f8;
};

struct C_001878D0 {
    char pad0[0x24];
    int f24;
    S_001878D0_Elem *f28;
    int func_001878D0(int a);
};

struct C_00187910 {
    char pad0[0x2c];
    int f2c;
    int func_00157BF0(int *a, int b);
    void func_00187910(int *a, int b);
};

struct Obj_00187A40 {
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
    virtual int v37(int idx, char *a, char *b);
    virtual void v38();
    virtual void v39();
    virtual int v40(char *name, void *data, int flag);
};

/* 0x180-byte DriveOnSounds element as read by func_00187CE0 */
struct S_00187CE0_Elem {
    int pad0;
    char name[0x114];
    int f118;
    int f11c;
    char pad120[0x48];
    int f168;
    int f16c;
    int f170;
    int f174;
    int f178;
    int f17c;
};

/* 0x2c-byte record handed to the sound manager */
struct S_00187CE0_Data {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
};

extern int D_00289E68;

struct C_00187CE0 {
    char pad0[0x24];
    int f24;
    S_00187CE0_Elem *f28;
    int f2c;
    S_00187CE0_Elem *f30;
    int func_00187CE0(int a0, Obj_00187A40 *obj);
};

struct S_00187A40_Elem {
    char pad0[4];
    char f4[0x138];
    char f13c[0x2c];
};

struct Game_00187A40 {
    int f0;
    int f4;
};

extern Game_00187A40 *D_002A8490;
extern int D_00289D4C;

struct C_00187A40 {
    char pad0[0x24];
    int f24;
    S_00187A40_Elem *f28;
    int func_00187A40(int a0, Obj_00187A40 *obj);
};

extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);
extern int D_00289EA4;
extern int D_00289ED0;
extern int D_00289ED8;
extern int D_002764F0;

struct C_00187F20 {
    void *vtbl;
    char f4;
    C_00187F20 *func_00187F20(void);
};

/* (0, 0, 0, 1) vector built by the temp-init constructor, stored x, y, z, w */
struct V4_00188250 {
    float x;
    float y;
    float z;
    float w;
    V4_00188250(int) { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

struct C_001881C0 {
    void *vtbl;
    char pad4[0x140];
    char f144[0x104];
    void func_00187F60(void);
    C_001881C0 *func_001881C0(void);
};

struct C_00188250 {
    void *vtbl;
    char pad4[0x140];
    char f144;
    char pad145[0x103];
    int f248;
    int f24c;
    int f250;
    int f254;
    int f258;
    int f25c;
    int f260;
    int f264;
    int f268;
    int f26c;
    V4_00188250 f270;
    void func_00187F60(void);
    C_00188250 *func_00188250(void);
    int func_00188300(struct S_00188300_Stream *stream);
};

struct S_00188300_Stream {
    int func_00168BE0(void *key, void *def, char *dst, int size);
    void func_00168C50(void *key, int def, void *dst);
    void func_00168CB0(void *key, void *def, void *dst);
};
extern int D_002764F0;
extern int D_00283B20;
extern int D_00289F40;
extern int D_00289F3C;
extern int D_00283700;
extern int D_00289F30;
extern int D_00289F28;
extern int D_00289F18;
extern int D_0028366C;
extern int D_00289F04;
extern int D_00289EF0;
extern int D_00289EE0;


/* config record reader (func_00168BE0 reads a string, func_00168C20 an int, func_00168CB0 a vec4) */
struct S_001880A0_Stream {
    void func_00168BE0(void *key, void *def, char *dst, int size);
    void func_00168C20(void *key, int def, void *dst);
    void func_00168CB0(void *key, void *def, void *dst);
};

/* StaticModelTempData */
struct C_001880A0 {
    void *vtbl;
    char f4[0x104];
    char f108[0x10];
    char f118[0x10];
    char f128[0x10];
    int f138;
    int f13C;
    int func_001880A0(S_001880A0_Stream *stream);
};

extern int D_00276310;
extern int D_0027CEF0;
extern int D_002A90B4;
extern int D_00275AD4;
extern int D_002A90E4;
extern int D_00275AC8;
extern int D_002A90D4;
extern int D_002A90B8, D_002A90BC, D_002A90C0;
extern int D_002A90E8, D_002A90EC, D_002A90F0;
extern int D_002A90D8, D_002A90DC, D_002A90E0;
extern int D_0027CEE4;
extern int D_0027CED8;
extern int D_00289EB8;
extern int D_00289EB4;
struct S_00187F60_V4 { int x, y, z, w; };

struct StaticModelTempData {
    void *vtbl;
    char f4[0x104];
    V4_00188250 f108, f118, f128;
    int f138, f13C, f140;
    StaticModelTempData *func_00187F60();
};
int func_001E9040(char *str, char *control);

extern int D_00289E4C;
extern int D_00289E34;
extern int D_00289E1C;
extern int D_00289E04;
extern int D_00289998;
void func_00186AB0();

/* 0x180-byte DriveOnSounds element, loaded through virtual slot 0 */
struct S_00187B10_Elem {
    virtual void v0(void *stream);
    char pad4[0x17c];
};

/* the same element seen by its inlined constructor */
struct S_00187B10_Init {
    void *vtbl;
    char pad4[0x164];
    int f168;
    int f16c;
    int f170;
    int f174;
    int f178;
    int f17c;
    void func_001867D0();
};

/* DriveOnSounds */
struct C_00187B10 {
    char pad0[0x24];
    int f24;
    S_00187B10_Elem *f28;
    int f2c;
    S_00187B10_Elem *f30;
    int func_00187B10(C_001877F0Param *param);
};

static __forceinline int Min_00187670(int a, int b) { return a > b ? b : a; }

extern "C" char *strcpy(char *, const char *);
int C_00187670::func_00187670(C_001877F0Param *stream)
{
    char buf[0x104];
    char saved[0x104];
    int i;
    int n;
    S_00187670_Elem *p;
    S_00187670_Elem *r;

    stream->func_00168C20((void *)&D_00289BE0, 0, &f24);
    n = f24;
    if (n == 0)
        return 0;
    p = (S_00187670_Elem *)func_001E8A44(n * 0x10);
    if (p != 0) {
        func_00011FF0(p, 0x10, n, (void *)&func_00187000);
        r = p;
    } else {
        r = 0;
    }
    f28 = r;
    strcpy(saved, stream->section);
    for (i = 0; i < f24; i++) {
        func_001ADCC0(buf, 0x104, (const char *)&D_00289BD0, saved, i + 1);
        stream->func_00169710(buf);
        f28[i].v0(stream);
    }
    stream->func_00169710(saved);
    return 1;
}

/* 0x187774, merged into func_00187670 by the analysis (draft, unverified until the boundary is cut) */
int C_00187670::func_00187774(int a, int b, int c, int d)
{
    int i;

    for (i = 0; i < f24; i++) {
        S_00187670_Elem *e = &f28[i];
        int len = strlen(e->fC->name);
        if (len != 0) {
            e->v2(a, b, c, d);
        } else {
            e->v1(b, d);
        }
    }
    return 1;
}

int C_001877F0::func_001877F0(C_001877F0Param *param)
{
    char buf[0x104];
    int i;
    int n;
    C_00187370 *p;

    param->func_00169710((void *)&D_0027AEE4);
    param->func_00168C20((void *)&D_00289C80, 0, &f24);
    n = f24;
    if (n == 0)
        return 0;
    p = (C_00187370 *)func_001E8A44(n * 0xc);
    if (p != 0) {
        func_00011FF0(p, 0xc, n, (void *)&func_00186D60);
    } else {
        p = 0;
    }
    f28 = p;
    for (i = 0; i < f24; i++) {
        func_001ADCC0(buf, 0x104, (const char *)&D_00289C70, i + 1);
        param->func_00169710(buf);
        f28[i].func_00187390(param);
    }
    return 1;
}

int C_001878D0::func_001878D0(int a)
{
    int i;

    for (i = 0; i < f24; i++) {
        f28[i].v1(0, a);
    }
    return 1;
}

void C_00187910::func_00187910(int *a, int b)
{
    if (func_00135C70(0x1f, 0, a, 0xc) != 0) {
        f2c = (f2c + 1) % 3;
    }
    func_00157BF0(a, b);
}

int C_00187950::func_00187950(C_001877F0Param *param)
{
    char buf[0x104];
    int i;
    int n;
    C_00187950Elem *p;
    C_00187950Elem *r;

    param->func_00169710((void *)&D_0027AEE4);
    param->func_00168C20((void *)&D_00289D30, 0, &f24);
    n = f24;
    if (n == 0)
        return 0;
    p = (C_00187950Elem *)func_001E8A44(n * 0x168);
    if (p != 0) {
        func_00011FF0(p, 0x168, n, (void *)&func_001867D0);
        r = p;
    } else {
        r = 0;
    }
    f28 = r;
    for (i = 0; i < f24; i++) {
        func_001ADCC0(buf, 0x104, (const char *)&D_00289D14, i + 1);
        param->func_00169710(buf);
        f28[i].func_00187950(param);
    }
    return 1;
}

int C_00187A40::func_00187A40(int a0, Obj_00187A40 *obj)
{
    char buf[0x100];
    int i;

    if (D_002A8490->f4 == 0) {
        return 0;
    }
    for (i = 0; i < f24; i++) {
        if (obj->v37(i + 1, f28[i].f4, f28[i].f13c) == 0) {
            func_001ADCC0(buf, 0x100, (const char *)&D_00289D4C, i + 1, f28[i].f4);
        }
    }
    return 1;
}

void C_00187AF0::func_00187AF0(void)
{
  int func_001E891B(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    func_001E891B(*(int *)(in_ECX + 0x28));
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  return;
}

int C_00187B10::func_00187B10(C_001877F0Param *param)
{
    char buf[0x104];
    int i;
    int n;
    S_00187B10_Elem *p;

    param->func_00169710((void *)&D_0027AEE4);
    param->func_00168C20((void *)&D_00289E4C, 0, &f24);
    param->func_00168C20((void *)&D_00289E34, 0, &f2c);
    if (f24 == 0 && f2c == 0)
        return 0;
    n = f24;
    if (n != 0) {
        p = (S_00187B10_Elem *)func_001E8A44(n * 0x180);
        if (p != 0) {
            func_00011FF0(p, 0x180, n, (void *)&func_00186AB0);
        } else {
            p = 0;
        }
        f28 = p;
        for (i = 0; i < f24; i++) {
            func_001ADCC0(buf, 0x104, (const char *)&D_00289E1C, i + 1);
            param->func_00169710(buf);
            f28[i].v0(param);
        }
    }
    n = f2c;
    if (n != 0) {
        S_00187B10_Init *q = (S_00187B10_Init *)func_001E8A44(n * 0x180);
        S_00187B10_Elem *r;
        if (q != 0) {
            S_00187B10_Init *e = q;
            for (i = n - 1; i >= 0; i--) {
                e->func_001867D0();
                e->f168 = 0;
                e->f16c = 0;
                e->f170 = 0;
                e->f174 = 0;
                e->f178 = 0;
                e->f17c = 0;
                e->vtbl = (void *)&D_00289998;
                e++;
            }
            r = (S_00187B10_Elem *)q;
        } else {
            r = 0;
        }
        f30 = r;
        for (i = 0; i < f2c; i++) {
            func_001ADCC0(buf, 0x104, (const char *)&D_00289E04, i + 1);
            param->func_00169710(buf);
            f30[i].v0(param);
        }
    }
    return 1;
}

int C_00187CE0::func_00187CE0(int a0, Obj_00187A40 *obj)
{
    char buf[0x100];
    int i;
    S_00187CE0_Data *d;

    if (D_002A8490->f4 == 0) {
        return 0;
    }
    for (i = 0; i < f24; i++) {
        d = (S_00187CE0_Data *)func_001E8A44(0x2c);
        d->f4 = i + 1;
        d->f8 = f28[i].f168;
        d->fc = f28[i].f16c;
        d->f10 = f28[i].f170;
        d->f14 = f28[i].f174;
        d->f18 = f28[i].f178;
        d->f1c = f28[i].f17c;
        d->f24 = f28[i].f11c;
        d->f28 = f28[i].f118;
        d->f20 = -1;
        if (obj->v40(f28[i].name, d, 1) == 0) {
            func_001ADCC0(buf, 0x100, (const char *)&D_00289E68, i + 1, f28[i].name);
        }
    }
    for (i = 0; i < f2c; i++) {
        d = (S_00187CE0_Data *)func_001E8A44(0x2c);
        d->f4 = i + 1;
        d->f8 = f30[i].f168;
        d->fc = f30[i].f16c;
        d->f10 = f30[i].f170;
        d->f14 = f30[i].f174;
        d->f18 = f30[i].f178;
        d->f1c = f30[i].f17c;
        d->f24 = f30[i].f11c;
        d->f28 = f30[i].f118;
        d->f20 = -1;
        if (obj->v40(f30[i].name, d, 0) == 0) {
            func_001ADCC0(buf, 0x100, (const char *)&D_00289E68, i + 1, f30[i].name);
        }
    }
    return 1;
}

void C_00187EE0::func_00187EE0(void)
{
    void func_001E891B(void *);

    if (f28 != 0) {
        func_001E891B(f28);
        f28 = 0;
    }
    if (f30 != 0) {
        func_001E891B(f30);
        f30 = 0;
    }
}

C_00187F20 *C_00187F20::func_00187F20(void)
{
    vtbl = (void *)&D_00289EA4;
    f4 = 0;
    return this;
}

StaticModelTempData *StaticModelTempData::func_00187F60()
{
    vtbl = &D_00289EB4;
    { u32 *p = (u32 *)((char *)this + 0x108); p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000; }
    { u32 *p = (u32 *)((char *)this + 0x118); p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000; }
    { u32 *p = (u32 *)((char *)this + 0x128); p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000; }
    int limit = sizeof(f4) - 1;
    int n = AsmMinI(limit, 4);
    func_001E8920(f4, (const char *)&D_002764F0, n);
    f4[n] = 0;
    f108 = *(V4_00188250 *)&D_002A90B4;
    f118 = *(V4_00188250 *)&D_002A90E4;
    f128 = *(V4_00188250 *)&D_002A90D4;
    f138 = 1;
    f13C = 0;
    f140 = 1;
    return this;
}

int C_001880A0::func_001880A0(S_001880A0_Stream * volatile stream)
{
    char buf[0x104];

    stream->func_00168BE0(&D_00276310, &D_002764F0, buf, -1);
    int len = func_001E9040(buf, (char *)&D_0027CEF0);
    int count = AsmMinI(len, 0x32);
    func_001E8920(f4, buf, count);
    ((char *)this)[count + 4] = 0;
    stream->func_00168CB0(&D_00275AD4, &D_002A90B4, f108);
    stream->func_00168CB0(&D_00275AC8, &D_002A90E4, f118);
    stream->func_00168CB0(&D_0027CEE4, &D_002A90D4, f128);
    stream->func_00168C20(&D_0027CED8, 1, &f138);
    stream->func_00168C20(&D_00289EB8, 0, &f13C);
    return 1;
}
#pragma optimize("g", on)

C_001881C0 *C_001881C0::func_001881C0(void)
{
    func_00187F60();
    vtbl = (void *)&D_00289ED0;
    int limit = sizeof(f144) - 1;
    int count = AsmMinI(limit, 4);
    func_001E8920(f144, (const char *)&D_002764F0, count);
    f144[count] = 0;
    return this;
}

int __stdcall func_00188230(int a0) {
    int __stdcall func_001880A0(int);
    func_001880A0(a0);
    return 1;
}

C_00188250 *C_00188250::func_00188250(void)
{
    u32 *p;

    func_00187F60();
    vtbl = (void *)&D_00289ED8;
    p = (u32 *)&f270;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f144 = 0;
    V4_00188250 u(0);
    f270 = u;
    f248 = 0;
    f24c = 0;
    f254 = 0;
    f250 = 0;
    f258 = 0;
    f25c = 0;
    f260 = 0;
    f264 = 0;
    f268 = 0;
    f26c = 0;
    return this;
}

int C_00188250::func_00188300(S_00188300_Stream *stream)
{
    stream->func_00168BE0(&D_00276310, &D_002764F0, &f144, -1);
    stream->func_00168C50(&D_00283B20, 0, &f248);
    stream->func_00168C50(&D_00289F40, 0x3f800000, &f24c);
    stream->func_00168CB0(&D_00289F3C, &D_002A90B4, &f270);
    stream->func_00168C50(&D_00283700, 0, &f250);
    stream->func_00168C50(&D_00289F30, 0, &f254);
    stream->func_00168C50(&D_00289F28, 0, &f258);
    stream->func_00168C50(&D_00289F18, 0, &f25c);
    stream->func_00168C50(&D_0028366C, 0, &f260);
    stream->func_00168C50(&D_00289F04, 0x3f800000, &f264);
    stream->func_00168C50(&D_00289EF0, 0x3f000000, &f268);
    stream->func_00168C50(&D_00289EE0, 0, &f26c);
    return 1;
}

C_001884D0* C_001884D0::func_001884D0(void) {
    extern int D_00289F70;
    unk4 = 0;
    unk0 = (int)&D_00289F70;
    unk8 = 0;
    unkC = 0;
    return this;
}

