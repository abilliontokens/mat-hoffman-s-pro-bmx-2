/* 17 functions from 0x00193240 to 0x001941F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Pool_00193240 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    Pool_00193240 *func_0001E740(u32 size, u32 count);
    void func_0001E790(void *p);
    struct Node_00193240 *func_0001E8A0(void);
};

extern Pool_00193240 *D_002EFE70;
extern int D_002EFE74;
void *func_001E8A44(int size);

struct Handler_00193240 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(void *a, int b);
    virtual int v6(void *a, void *b, int c);
    virtual void v7(void *a, int b, void *c, void *d);
    virtual void v8(void *a, int b, void *c, void *d);
    virtual void v9(void *a, int b);
};

struct Node_00193240 {
    Node_00193240 *f0;
    void *f4;
    Handler_00193240 *f8;
    void *fC;
    void *f10;
    int f14;
    float f18;
    float f1C;
    float f20;
    float f24;
    Node_00193240 *func_00193490(void);
    void func_001937F0(void *a1, void *a2, void *a3);
    void func_00193600(void *a1, void *a2, void *a3, void *a4);
    void func_00193950(void *a1, struct S_00193240_V4 *a2, void *a3, void *a4);
    void func_00193870(void *a);
    void func_00193530(void *a1, void *a2, void *a3, void *a4);
    void func_001938C0(void *a1, struct C_00192B50 *a2, int a3, struct S_00193240_V4 *a4,
                       void *a5, void *a6);
};
struct C_00194110 {
    undefined4 func_00194110(byte param_1);
};

extern int D_0028AD14;
extern f32 D_00275BF8;
extern f32 D_002A98DC;
extern u32 D_002A9904;
extern u32 D_002A9908;
extern u32 D_002A990C;
extern u32 D_002A9910;
// 193240 helpers

struct V8_00193240 {
    int p[2];
    void func_001D3F50(void);
};
struct Log_00193240 {
    char pad0[0x1934];
    int f1934;
};
struct Root_00193240 {
    char pad0[0x18];
    Log_00193240 *f18;
};
struct Link_00193240 {
    Link_00193240 *next;
    struct Obj_00193240 *item;
};
struct Obj_00193240 {
    char pad0[0x8];
    struct Sub_00193240 *f8;
};
struct Sub_00193240 {
    int func_00179B40(V8_00193240 *out, int value);
};
struct Dev_00193240 {
    char pad0[4];
    int f4;
};
struct Ent_00193240 {
    char pad0[4];
    struct Tgt_00193240 *f4;
};
struct Tgt_00193240 {
    char pad0[0x3c];
    int f3c;
    void func_00192CC0(V8_00193240 *a);
    void func_001930F0(void);
};
struct Link2_00193240 {
    Link2_00193240 *next;
    Tgt_00193240 *item;
    Sub_00193240 *sub;
};
struct Vt_00193240 {
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
};
struct Stamp_00193240 {
    char pad0[0x90];
    u16 f90;
    char pad92[0x16];
};
struct Owner_00193240 {
    char pad0[0x24];
    Link2_00193240 *f24;
    Vt_00193240 *f28;
    Vt_00193240 *f2c;
    char pad30[8];
    int f38;
    int f3c;
    f32 f40;
    f32 f44;
    f32 f48;
    f32 f4c;
    char f50[0x40];
    u16 f90;
    u16 f92;
    int func_00193240(struct Args_00193240 *arg);
};
struct Args_00193240 {
    char pad0[0x30];
    int *f30;
    int f34;
};
extern Root_00193240 *D_002A8490;
extern int D_002A9868;
extern char D_0028ACB4[];
extern char D_0028AC8C[];
extern const f32 D_0028AC88;
extern const f32 D_00275460;
extern const f32 D_00278788;
extern u16 D_002EFE50;
extern u16 D_002EFE54;
extern int D_002EFE48;
extern Owner_00193240 *D_002EFE4C;
extern char D_002EFD38[];
extern char *D_002EFDB8;
void func_0013E260(Log_00193240 *o, int id, const char *fmt, ...);
void func_0013E1F0(Log_00193240 *o, int id, const char *fmt, ...);
int func_001E8858(float f);
int func_0017C060(void *, void *, void *);
void func_00192C00(float, float, float, float, void *);
void func_001930F0(void);

void func_001E8390(void *p);
#include <xmmintrin.h>
static inline float sqrtf(float x)
{
    float r;
    _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x)));
    return r;
}

struct C_00157600 {
    void func_00157600(int a0);
    void func_00157660(void);
};

struct Query_00193530 {
    int func_0017A1D0(void *a, void *b, void **out);
    int func_0017A010(void *a, void *b, int c);
};

struct Link_00193530 {
    Link_00193530 *next;
    C_00192B50 *owner;
    Query_00193530 *query;
    void *fC;
    void *f10;
};

struct C_00192B50 {
    char pad0[0x24];
    Link_00193530 *f24;
    Handler_00193240 *func_00192B50(int a0);
};

struct S_00193240_V4 {
    f32 x;
    f32 y;
    f32 z;
    int w;
};

struct DelObj_00193240 {
    virtual void Destroy(int a0);
};

/* SegmentedCord */
struct C_00193B50 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    u32 f40;
    u32 f44;
    u32 f48;
    void *f4C;
    u32 f50;
    DelObj_00193240 **f54;
    void *f58;
    C_00193B50 *func_00193B50(int a0);
    void func_00193BC0(void);
};

struct S_00193AF0 {
    char pad0[0x2c];
    f32 f2C;
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
};

struct V4_00194130 {
    float x, y, z, w;
};

extern int D_0028AD8C;
extern V4_00194130 D_002A9970;
extern float D_002A9974;
extern float D_002A9978;
extern float D_002A997C;

struct V4_00193EB0 {
    float x, y, z, w;
};
struct Seg_00193EB0 {
    char pad0[0xc];
    V4_00193EB0 *fC;
    char *f10;
    char *f14;
};
struct Body_00193EB0 {
    void func_001994C0(int a0, V4_00193EB0 *q, int a2);
    void func_00199790(int a0, void *pos);
    void func_00199110(int a0, V4_00193EB0 *q, V4_00193EB0 *d, int a3, int a4, int a5);
};
struct Phys_00193EB0 {
    void func_00199A70(int a0, void *out);
    V4_00193EB0 *func_00197EC0(V4_00193EB0 *out, void *in);
};
struct List_00193EB0 {
    char pad0[0x3c];
    Seg_00193EB0 **f3c;
};
struct Cord_00193EB0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    V4_00193EB0 f28;
    V4_00193EB0 f38;
    char pad48[4];
    Body_00193EB0 **f4C;
    Phys_00193EB0 *f50;
    char pad54[4];
    List_00193EB0 *f58;
    void func_00193EB0(int a0);
    void func_00157A00(int a0);
};
extern float D_0028AD00;
extern float D_0028ACF0;
extern float D_0028ACE0;
extern V4_00193EB0 D_002A9924;
static inline void Normalize_00193EB0(V4_00193EB0 *out, V4_00193EB0 *in)
{
    __m128 x = _mm_loadu_ps(&in->x);
    __m128 sq = _mm_mul_ps(x, x);
    __m128 sum = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    sq = _mm_shuffle_ps(sq, sq, 0xe1);
    sum = _mm_add_ss(sum, sq);
    __m128 eps = _mm_load_ss(&D_0028AD00);
    sum = _mm_add_ss(sum, _mm_and_ps(_mm_cmplt_ss(sum, eps), eps));
    __m128 r = _mm_rsqrt_ss(sum);
    __m128 t = _mm_mul_ss(_mm_mul_ss(sum, r), r);
    r = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_0028ACE0)),
                   _mm_sub_ss(_mm_load_ss(&D_0028ACF0), t));
    r = _mm_shuffle_ps(r, r, 0);
    _mm_storeu_ps(&out->x, _mm_mul_ps(r, x));
}

/* growable pointer array (3 methods in one Ghidra symbol at 0x194190) */
struct C_00194190 {
    char pad0[0x24];
    int f24;
    int f28;
    int f2c;
    char pad30[0x10];
    int *f40;
    void func_00194190(int a0);
};

/* SelectiveGravityModel */
struct C_00194130 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    float f2c;
    V4_00194130 f30;
    int f40;
    void func_00157600(int a0);
    C_00194130 *func_00194130(int a0);
};


Node_00193240 *Node_00193240::func_00193490(void)
{
    Pool_00193240 *pool = D_002EFE70;
    u32 *p;

    p = (u32 *)&f18;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    if (pool == 0) {
        pool = (Pool_00193240 *)func_001E8A44(0x30);
        D_002EFE70 = pool != 0 ? pool->func_0001E740(0x18, 0x1000) : 0;
    }
    f0 = 0;
    f4 = 0;
    f8 = 0;
    fC = 0;
    f10 = 0;
    f14 = 0;
    D_002EFE74++;
    return this;
}

void func_00193500(void)
{
    if (--D_002EFE74 == 0 && D_002EFE70 != 0) {
        D_002EFE70->v2();
        D_002EFE70 = 0;
    }
}

void Node_00193240::func_00193530(void *a1, void *a2, void *a3, void *a4)
{
    void *result;
    Handler_00193240 *h = f8;
    Link_00193530 *link = ((C_00192B50 *)f4)->f24;
    while (link != 0) {
        if (link->query->func_0017A1D0(a2, a4, &result)) {
            C_00192B50 *owner = link->owner;
            link->f10 = result;
            link->fC = result;
            h = owner->func_00192B50(((int *)h)[2]);
            int r = h->v6(a2, a3, 0);
            if (r != 0) {
                h->v7(a1, r, a2, a3);
                Node_00193240 *n = D_002EFE70->func_0001E8A0();
                n->f14 = r;
                n->f4 = owner;
                n->f8 = h;
                n->fC = link->query;
                n->f10 = result;
                n->f0 = f0;
                f0 = n;
            }
        }
        link = link->next;
    }
}

void Node_00193240::func_001937F0(void *a1, void *a2, void *a3)
{
    int r;
    Handler_00193240 *h;

    h = f8;
    r = h->v6(a2, a3, f14);
    if (r != f14) {
        h->v9(a1, f14);
        if (r != 0) {
            h->v7(a1, r, a2, a3);
        }
        f14 = r;
    } else {
        f8->v8(a1, r, a2, a3);
        f14 = r;
    }
}

void Node_00193240::func_00193870(void *a)
{
    Node_00193240 *n;

    f8->v9(a, f14);
    n = f0;
    while (n != 0) {
        Node_00193240 *next;

        n->f8->v9(a, n->f14);
        next = n->f0;
        D_002EFE70->func_0001E790(n);
        n = next;
    }
}

void Node_00193240::func_001938C0(void *a1, C_00192B50 *a2, int a3, S_00193240_V4 *a4,
                                  void *a5, void *a6)
{
    Handler_00193240 *h = a2->func_00192B50(a3);
    int r = h->v6(a4, a5, 0);

    h->v7(a1, r, a4, a5);
    f4 = a2;
    f14 = r;
    f8 = h;
    f0 = 0;
    *(S_00193240_V4 *)&f18 = *a4;
    func_00193530(a1, a4, a5, a6);
}

void func_00193AF0(S_00193AF0 *p)
{
    float v[4];

    p->f40 -= D_00275BF8;
    v[0] = D_002A98DC * p->f2C;
    v[1] = D_002A98DC * p->f30;
    v[2] = D_002A98DC * p->f34;
    p->f3C -= v[0];
    p->f40 -= v[1];
    p->f44 -= v[2];
}

C_00193B50 *C_00193B50::func_00193B50(int a0)
{
    u32 *p;

    ((C_00157600 *)this)->func_00157600(a0);
    vtbl = &D_0028AD14;
    p = (u32 *)&f28;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f38;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f24 = 0;
    f28 = D_002A9904;
    f2C = D_002A9908;
    f30 = D_002A990C;
    f34 = D_002A9910;
    f4C = 0;
    f50 = 0;
    f54 = 0;
    f58 = 0;
    return this;
}

void C_00193B50::func_00193BC0(void)
{
    int i;

    vtbl = &D_0028AD14;
    if (f4C != 0) {
        func_001E8390(f4C);
    }
    if (f54 != 0) {
        for (i = 0; i < (int)f24; i++) {
            DelObj_00193240 *e = f54[i];

            if (e != 0) {
                e->Destroy(1);
            }
        }
        func_001E8390(f54);
    }
    ((C_00157600 *)this)->func_00157660();
}

undefined4 C_00194110::func_00194110(byte param_1)
{
  int func_00193BC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00193BC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_00194130 *C_00194130::func_00194130(int a0)
{
    u32 *p;

    func_00157600(a0);
    vtbl = (void *)&D_0028AD8C;
    p = (u32 *)&f30;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f28 = 0;
    f24 = 0;
    f2c = 32.2f;
    f30.x = D_002A9970.x;
    f30.y = D_002A9974;
    f30.z = D_002A9978;
    f30.w = D_002A997C;
    f40 = 0;
    return this;
}

void C_00194190::func_00194190(int a0)
{
    f2c = a0;
}

