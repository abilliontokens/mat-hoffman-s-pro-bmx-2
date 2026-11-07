/* 10 functions from 0x001B9560 to 0x001BA560, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"

extern int D_0028D11C;

void *func_001E8A44(int size);
void func_001E891B(void *p);

template <class T> inline const T &Min_001B9C70(const T &a, const T &b) { return (a > b) ? b : a; }
struct C_001B9C70 {
    int *data;
    int size;
    int f08;
    int f0C;
    int f10;
    int f14;
    int func_001B9C70(int n);
};

struct C_00157600 {
    void func_00157600(void *param);
};

extern int D_0028D110;
extern char D_0028D1B0[];
extern char D_0028D1A0[];
extern char D_0028D190[];
void *func_001E83E8(void *block, unsigned int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct S_001B9B50_Stream {
    int func_00169710(void *name);
    void func_00168C20(void *key, int def, int *out);
    void func_00168BE0(void *key, void *def, char *buf, int size);
    void func_00168C50(void *key, int def, int *out);
    void func_00168CB0(void *key, void *def, void *out);
};

extern char D_0028D0F8[], D_0028D0E4[], D_00284A98[], D_0028CF6C[], D_0028CF60[];
extern char D_0028CF4C[], D_0027C4BC[], D_0028D0D4[], D_0028D0C0[];
int func_001EA426(char *a, char *b);

struct SegmentedCordTempData {
    void *vtbl;
    int f04;
    int f08;
    int f0C;
    char f10[0x104];
    char f114[0x104];
    char f218[0x104];
    char *f31C;
    char f320[0x10];
    int func_001B9560(S_001B9B50_Stream *stream);
};

extern char D_0028D1F0[];
extern char D_0028D1DC[];
extern char D_0028D1D0[];
extern char D_0028D1C0[];
extern char D_002764F0[];
extern "C" int strcmp(const char *a, const char *b);

struct S_001BA3D0_Elem {
    virtual void v0();
    virtual void v1(S_001B9B50_Stream *stream);
};

struct C_001BA3D0 {
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
    virtual void v28(int kind, int index);
    char pad4[0x20];
    int f24;
    S_001BA3D0_Elem **f28;
    int func_001BA3D0(S_001B9B50_Stream *stream);
};

struct S_001B9B50_Elem {
    void *vtbl;
    int f4;
    int f8;
};

struct S_001B9B50_ElemV {
    virtual void v0(S_001B9B50_Stream *stream);
};

struct C_001B9B20 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    S_001B9B50_Elem **f28;
    C_001B9B20 *func_001B9B20(void *param);
    int func_001B9B50(S_001B9B50_Stream *stream);
};

struct C_001B9D40 {
    undefined4 func_001B9D40(byte param_1);
};

struct C_001BA3B0 {
    undefined4 func_001BA3B0(byte param_1);
};

extern char D_0027C588[];
extern char D_0027D170[];
extern int D_0028CA64;
void func_00012140(void);

struct S_001BA1B0_Temp {
    void *vtbl;
    char name[0x10c];
    int f110;
    char f114[0x104];
    int f218;
    int f21c;
    int f220;
    int f224;
    int f228;
    int f22c;
    int f230;
};

struct S_001BA1B0_Mesh {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32();
    void func_00133140(int a, int b);
};

struct S_001BA1B0_Skel { void func_0019ABA0(int a, int b); };

struct S_001BA1B0_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44();
    virtual int v45(char *a, char *b, int c, char *d, void *e, int f, int g, int h,
                    float i, float j, int k, int l, int m, int n, int o, int p);
    char pad4[0x3fc];
    S_001BA1B0_Skel *f400;
    char pad404[8];
    S_001BA1B0_Mesh *f40c;
    S_001BA1B0_Mesh *f410;
    S_001BA1B0_Obj *func_0012C940(int a);
};

struct S_001BA1B0_Scene { void func_001577A0(S_001BA1B0_Obj *o, int a); };

struct S_001BA1B0_Owner {
    char pad0[0x3ac];
    S_001BA1B0_Scene *f3ac;
    char pad3b0[0x4a8 - 0x3b0];
    int *f4a8;
    int *f4ac;
    char pad4b0[0x10];
    int f4c0;
};

struct S_001BA1B0_Attach {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(S_001BA1B0_Owner *p, S_001BA1B0_Skel *s, int a, int b);
};

struct ProceduralModel {
    void *vtbl;
    char pad4[4];
    char f8[0x3c];
    int f44;
    int f48;
    char pad4c[8];
    S_001BA1B0_Attach *f54;
    S_001BA1B0_Obj *f58;
    S_001BA1B0_Temp *f5c;
    int func_001BA1B0(S_001BA1B0_Owner *p);
};

extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
#pragma intrinsic(memcpy)
extern char D_0027DB60[];
extern float D_002AA9F4, D_002AA9F8, D_002AA9FC;
float func_00016D20(float x);
void func_00167FE0(void *a, void *b, float x, float y, float z);

struct S_001B9D60_Vec4 {
    float x, y, z, w;
    S_001B9D60_Vec4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

/* temp data of KeyFramedModel (DynamicModelTempData), freed after load */
struct S_001B9D60_Temp {
    void *vtbl;
    char name[0x108];
    int f10c;
    int f110;
    int f114;
};

struct S_001B9D60_VBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct S_001B9D60_Cam {
    char pad0[0x180];
    unsigned char f180;
    void func_00199650(S_001B9D60_Vec4 *pos);
    void func_00198F50(S_001B9D60_Vec4 *a, S_001B9D60_Vec4 *b, int c, int d, int e);
};

struct S_001B9D60_Anim : virtual S_001B9D60_VBase {
    S_001B9D60_Cam *f4;
    char pad8[8];
    int f10;
    S_001B9D60_Anim *func_001328F0(int a, int mostDerived);
    int func_00132A40(char *a, char *b, int c, int d, int e, int f, int g);
    void func_00132CC0(int a, int b, int c);
    void func_00132D20(void);
    void func_00164820(int node);
    void func_001670C0(int a, int b, int c);
};

struct S_001B9D60_Scene {
    void func_001577A0(S_001B9D60_VBase *a, int b);
};

struct S_001B9D60_Owner {
    char pad0[0x3ac];
    S_001B9D60_Scene *f3ac;
    char pad3b0[0x4a8 - 0x3b0];
    int *f4a8;
    int *f4ac;
    char pad4b0[0x10];
    int f4c0;
};

struct S_001B9D60_Res {
    int func_00162B20(const char *name, int a);
};
extern S_001B9D60_Res *D_002EF7D0;

struct S_001B9D60_Elem {
    void func_00186F10(int a);
};

struct S_001B9D60_Attach {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(S_001B9D60_Owner *p, S_001B9D60_Cam *cam, char *c, int d);
};

struct KeyFramedModel {
    void *vtbl;
    char pad4[4];
    S_001B9D60_Vec4 f08;
    S_001B9D60_Vec4 f18;
    S_001B9D60_Vec4 f28;
    float f38;
    float f3c;
    float f40;
    int f44;
    int f48;
    int f4c;
    S_001B9D60_Elem **f50;
    S_001B9D60_Attach *f54;
    int f58;
    char **f5c;
    int f60;
    char pad64[4];
    int **f68;
    char pad6c[8];
    int *f74;
    int *f78;
    char pad7c[4];
    int f80;
    int f84;
    char pad88[4];
    int f8c;
    char pad90[0x10];
    char fa0[0x1a4 - 0xa0];
    S_001B9D60_Anim *f1a4;
    S_001B9D60_Temp *f1a8;
    int *f1ac;
    int func_001B9D60(S_001B9D60_Owner *p);
};

int SegmentedCordTempData::func_001B9560(S_001B9B50_Stream *stream)
{
    stream->func_00168C20(D_0028D0F8, 0, &f04);
    stream->func_00168C50(D_0028D0E4, 0, &f0C);
    stream->func_00168BE0(D_0028CF6C, D_00284A98, f10, -1);
    stream->func_00168BE0(D_0028CF60, D_00284A98, f114, -1);
    stream->func_00168CB0(D_0028CF4C, &D_002AA9F4, f320);
    stream->func_00168C20(D_0027C4BC, 1, &f08);
    stream->func_00168BE0(D_0028D0D4, D_00284A98, f218, -1);
    f31C = (char *)func_001E8A44(0x104);
    stream->func_00168BE0(D_0028D0C0, D_00284A98, f31C, -1);
    if (func_001EA426(f31C, D_00284A98) == 0) {
        func_001E891B(f31C);
        f31C = 0;
    }
    return 1;
}

C_001B9B20 *C_001B9B20::func_001B9B20(void *param) {
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028D11C;
    return this;
}

int C_001B9B20::func_001B9B50(S_001B9B50_Stream *stream)
{
    int count;
    int i;
    int end;
    int start;
    char buf[0x104];
    S_001B9B50_Elem *e;

    if (stream->func_00169710(D_0028D1B0) == 0) {
        return 0;
    }
    stream->func_00168C20(D_0028D1A0, 0, &count);
    if (count > 0) {
        if (f28 != 0) {
            start = f24;
            f24 = start + count;
            end = f24;
            f28 = (S_001B9B50_Elem **)func_001E83E8(f28, f24 * 4);
        } else {
            start = 0;
            f24 = count;
            end = f24;
            f28 = (S_001B9B50_Elem **)func_001E8A44(f24 * 4);
        }
        for (i = start; i < end; i++) {
            func_001ADCC0(buf, 0x104, D_0028D190, i - start + 1);
            if (stream->func_00169710(buf) != 0) {
                e = (S_001B9B50_Elem *)func_001E8A44(0x10);
                if (e != 0) {
                    e->vtbl = (void *)&D_0028D110;
                    e->f4 = 0;
                    e->f8 = 0;
                } else {
                    e = 0;
                }
                f28[i] = e;
                ((S_001B9B50_ElemV *)f28[i])->v0(stream);
            }
        }
    }
    return 1;
}

int C_001B9C70::func_001B9C70(int n)
{
    int *old;
    int m;
    int cnt;
    int i;

    if (n <= 0) {
        return 0;
    }
    if (n < size) {
        f0C = n - 1;
    }
    old = data;
    data = (int *)func_001E8A44(n * 4);
    if (data == 0) {
        return 0;
    }
    m = size;
    cnt = AsmMinI(m, n);
    for (i = 0; i < cnt; i++) {
        data[i] = old[i];
    }
    if (size < cnt && f10 != 0) {
        for (i = size; i < cnt; i++) {
            data[i] = f14;
        }
    }
    func_001E891B(old);
    size = n;
    return 1;
}

undefined4 C_001B9D40::func_001B9D40(byte param_1)
{
  int func_001B4F90(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001B4F90();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int KeyFramedModel::func_001B9D60(S_001B9D60_Owner *p)
{
    char bufA[0x104];
    char bufB[0x104];
    void *m;
    S_001B9D60_Temp *t;
    int i;

    func_001ADCC0(bufA, 0x104, D_0027DB60, f1a8->name);
    func_001ADCC0(bufB, 0x104, D_0027D170, f1a8->name);
    f44 = p->f4a8[f1a8->f110];
    f48 = p->f4ac[f1a8->f110];
    m = func_001E8A44(0x2b8);
    f1a4 = m ? ((S_001B9D60_Anim *)m)->func_001328F0(1, 1) : 0;
    if (f1a4->func_00132A40(bufA, bufB, 0, 1, 1, f1a8->f114, f1a8->f10c) == 0) {
        func_00012140();
        f1a4->v2();
        f1a4 = 0;
        t = f1a8;
        if (t) {
            t->vtbl = &D_0028CA64;
            func_001E891B(t);
        }
        f1a8 = 0;
        return 0;
    }
    f1a4->f4->f180 |= 8;
    f1a4->f4->f180 |= 0x10;
    S_001B9D60_Vec4 a;
    S_001B9D60_Vec4 b;
    if (f18.x == D_002AA9F4 && f18.y == D_002AA9F8 && f18.z == D_002AA9FC) {
        func_00167FE0(&a, &b, func_00016D20(f38 * 0.0174532905f), func_00016D20(f3c * 0.0174532905f),
                      func_00016D20(f40 * 0.0174532905f));
    } else {
        a = f18;
        b = f28;
    }
    f1a4->f4->func_00199650(&f08);
    f1a4->f4->func_00198F50(&a, &b, 0, 1, 0);
    if (f58 > 0) {
        f1ac = (int *)func_001E8A44(f58 * 4);
        for (i = 0; i < f58; i++) {
            f1ac[i] = D_002EF7D0->func_00162B20(f5c[i], 1);
        }
    }
    f1a4->func_00132CC0(f44, f48, 2);
    p->f3ac->func_001577A0(f1a4, 2);
    f84 = 0;
    f8c = 0;
    for (i = 0; i < f60; i++) {
        if (f78[i] == 1) {
            f84 = i;
            break;
        }
    }
    f1a4->func_00164820(f1ac[*f68[f84] - 1]);
    f1a4->func_001670C0(0, 0, 0);
    if (f78[f84] == 0) {
        f1a4->f10 = 1;
    }
    f1a4->func_00132D20();
    f74 = (int *)func_001E8A44(f60 * 4);
    memcpy(f74, f78, f60 * 4);
    f80 = f84;
    t = f1a8;
    if (t) {
        t->vtbl = &D_0028CA64;
        func_001E891B(t);
    }
    f1a8 = 0;
    for (i = 0; i < f4c; i++) {
        f50[i]->func_00186F10(p->f4c0);
    }
    if (f54) {
        f54->v28(p, f1a4->f4, fa0, p->f4c0);
    }
    return 1;
}

int ProceduralModel::func_001BA1B0(S_001BA1B0_Owner *p)
{
    char bufB[0x104];
    char bufA[0x104];
    void *m;
    S_001BA1B0_Temp *t;

    func_001ADCC0(bufA, 0x104, D_0027C588, f5c->name);
    func_001ADCC0(bufB, 0x104, D_0027D170, f5c->name);
    f44 = p->f4a8[f5c->f110];
    f48 = p->f4ac[f5c->f110];
    m = func_001E8A44(0x510);
    f58 = m ? ((S_001BA1B0_Obj *)m)->func_0012C940(1) : 0;
    t = f5c;
    if (f58->v45(bufA, bufB, 0, t->f114, f8, t->f218, t->f224, t->f220,
                 (float)t->f21c, 1.0f, t->f22c, 0, 0, 0, t->f228, t->f230) == 0) {
        func_00012140();
        f58->v2();
        f58 = 0;
        t = f5c;
        if (t) {
            t->vtbl = &D_0028CA64;
            func_001E891B(t);
        }
        f5c = 0;
        return 0;
    }
    S_001BA1B0_Skel *s = f58->f400;
    s->func_0019ABA0(f44, 2);
    f58->f40c->v32();
    S_001BA1B0_Mesh *ms = f58->f40c;
    ms->func_00133140(f48, 2);
    if (f58->f410) {
        f58->f410->v32();
        ms = f58->f410;
        ms->func_00133140(f48, 2);
    }
    p->f3ac->func_001577A0(f58, 0);
    if (f54)
        f54->v28(p, f58->f400, 0, p->f4c0);
    t = f5c;
    if (t) {
        t->vtbl = &D_0028CA64;
        func_001E891B(t);
    }
    f5c = 0;
    return 1;
}

undefined4 C_001BA3B0::func_001BA3B0(byte param_1)
{
  int func_001B5860(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_001B5860();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_001BA3D0::func_001BA3D0(S_001B9B50_Stream *stream)
{
    char buf[0x104];
    char type[0x104];
    int count;
    int i;
    int end;
    int start;

    if (stream->func_00169710(D_0028D1F0) == 0) {
        return 0;
    }
    stream->func_00168C20(D_0028D1DC, 0, &count);
    if (count > 0) {
        if (f28 != 0) {
            start = f24;
            f24 = start + count;
            end = f24;
            f28 = (S_001BA3D0_Elem **)func_001E83E8(f28, f24 * 4);
        } else {
            start = 0;
            f24 = count;
            end = f24;
            f28 = (S_001BA3D0_Elem **)func_001E8A44(f24 * 4);
        }
        for (i = start; i < end; i++) {
            func_001ADCC0(buf, 0x104, D_0028D1D0, i - start + 1);
            if (stream->func_00169710(buf) != 0) {
                stream->func_00168BE0(D_0028D1C0, D_002764F0, type, 0x104);
                v28(strcmp(type, "KeyFramed") == 0 ? 1 : (strcmp(type, "Procedural") == 0 ? 2 : 0), i);
                f28[i]->v1(stream);
            }
        }
    }
    return 1;
}

void func_001BA540(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
{
  if (param_4 != 0) {
    **(undefined4 **)(param_3 + 0x288) = 1;
  }
  return;
}
