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
    char pad4[4];
    int f8;
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
    void Continue(void *a1, int r, void *a2, void *a3)
    {
        f8->v8(a1, r, a2, a3);
    }
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
struct V4_00193C20 {
    float x, y, z, w;
};

/* camera-path actor: the 0x1e0-byte object kept per segment */
struct Seg_00193C20 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(int a, int b, int c);
    Seg_00193C20 *func_00143580(int flag);
    void func_00199600(V4_00193C20 pos);
    void func_00198F50(void *a, void *b, int c, int d, int e);
    void func_0019ABA0(void *a, int b);
    void func_00199A70(int a, void *b);
};

struct Key_00193C20 {
    Key_00193C20 *func_00135850(void);
    void func_00135870(float t, void *a, void *b, void *c, int flag);
};

struct Path_00193C20 {
    char pad0[0x34];
    char *f34;
    char pad38[0xc];
    void *f44;
    Path_00193C20 *func_00135700(int flag);
    void func_00135A80(int count, int n1, int *p1, int n2, void *p2, void *owner);
};

struct Tgt_00193C20 {
    float *func_00197EC0(float *tmp, V4_00193C20 *in);
    void func_00199A70(int a, void *b);
};

struct Env_00193C20 {
    char pad0[0x4a8];
    int *f4a8;
};

struct Cam_00193C20 {
    char pad0[0x24];
    int f24;
    V4_00193C20 f28;
    V4_00193C20 f38;
    Env_00193C20 *f48;
    Seg_00193C20 **f4c;
    Tgt_00193C20 *f50;
    Key_00193C20 **f54;
    Path_00193C20 *f58;
    void func_001577A0(void *child, int a);
    void func_001D3F50(void);
    void func_00193C20(int count, float dt, int a3, Env_00193C20 *env, int a5, Tgt_00193C20 *tgt,
                       V4_00193C20 v, int last);
};

extern char D_002A9934;
void *func_001E8AA5(int size);
struct S_00193AF0;
void func_00193AF0(S_00193AF0 *p);

struct Args_00193240 {
    char pad0[0x30];
    int *f30;
    int f34;
};
extern Root_00193240 *D_002A8490;
extern int D_002A9868;
extern char D_0028ACB4[];
extern char D_0028AC8C[];
extern f32 D_0028AC88;
extern f32 D_00275460;
extern f32 D_00278788;
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
#include "asm_helpers.h"
static inline float sqrtf(float x)
{
    float r;
    _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x)));
    return r;
}
static __forceinline float sqrt_193600(const float &x)
{
    return _mm_sqrt_ss(*(__m128 *)&x).m128_f32[0];
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
    V4_00193EB0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    V4_00193EB0 &operator+=(const V4_00193EB0 &o)
    {
        x += o.x;
        y += o.y;
        z += o.z;
        return *this;
    }
};
static inline V4_00193EB0 Sub_00193EB0(const V4_00193EB0 &a, const V4_00193EB0 &b)
{
    V4_00193EB0 r;
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
    r.w = 1.0f;
    return r;
}
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
extern float D_002A9924, D_002A9928, D_002A992C, D_002A9930;
static __forceinline void Normalize_00193EB0(V4_00193EB0 *out, V4_00193EB0 *in)
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


int Owner_00193240::func_00193240(Args_00193240 *arg)
{
    Link2_00193240 *n = f24;
    V8_00193240 a[4];
    V8_00193240 b[4];
    int i;
    for (i = 0; i < 4; i++) a[i].func_001D3F50();
    for (i = 0; i < 4; i++) b[i].func_001D3F50();
    D_002EFE50++;
    f90 = D_002EFE50;
    f40 = -1.0f;
    f44 = 1.0f;
    f48 = -1.0f;
    f4c = 1.0f;
    if (D_002A8490->f18) {
        if (D_002A9868 < 0) {
            int t = D_002A8490->f18->f1934;
            D_002A8490->f18->f1934 = t + 1;
            D_002A9868 = t;
        }
        func_0013E260(D_002A8490->f18, D_002A9868, D_0028ACB4);
        func_0013E1F0(D_002A8490->f18, D_002A9868, D_0028AC8C, f3c + 1,
                      (int)((f40 + 1.0f) * 320.0f),
                      (int)(224.0f - f4c * 224.0f),
                      (int)((f44 + 1.0f) * 320.0f),
                      (int)(224.0f - f48 * 224.0f));
    }
    D_002EFE48 = 0;
    for (; n; n = n->next) {
        if (n->sub->func_00179B40(a, *(int *)(D_002EFDB8 + 4)) &&
            func_0017C060(D_002EFD38, a, b)) {
            int cnt = arg->f34;
            int j = 0;
            int found = 0;
            if (cnt > 0) {
                for (; j < cnt; j++) {
                    if (arg->f30[j] == n->item->f3c) { found = 1; break; }
                }
            }
            if (!found) n->item->func_00192CC0(b);
        }
    }
    func_00192C00(f40, f44, f48, f4c, f50);
    D_002EFE54++;
    f92 = D_002EFE54;
    if (f28) f28->v15();
    if (f2c && f2c != f28) f2c->v15();
    for (Link2_00193240 *p = f24; p; p = p->next) p->item->func_001930F0();
    if (f38 && D_002EFE4C && D_002EFE50 != D_002EFE4C->f90) {
        D_002EFE4C->f90 = D_002EFE50;
        D_002EFE4C->f28->v15();
    }
    return 1;
}

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

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
void Node_00193240::func_00193600(void * volatile a1, void * volatile a2, void * volatile a3, void * volatile a4)
{
    S_00193240_V4 *v = (S_00193240_V4 *)a2;
    float dx = v->x - f18, dy = v->y - f1C, dz = v->z - f20;
    Node_00193240 * volatile self = this;
    void *result;
    float dist = AsmSqrtF(dz * dz + dy * dy + dx * dx);
    Node_00193240 *s0 = self;
    Link_00193530 *link = ((C_00192B50 *)s0->f4)->f24;
    Handler_00193240 *h = s0->f8;
    while (link) {
        *(float *)&link->fC -= dist;
        *(float *)&link->f10 = dist + *(float *)&link->f10;
        Node_00193240 **cursor = &self->f0;
        Node_00193240 *n = *cursor;
        while (n && n->f4 != link->owner)
            n = n->f0;
        if (link->query->func_0017A1D0(a2, a4, &result)) {
            n = self->f0;
            if (n) {
                Handler_00193240 *h2 = n->f8;
                int r = h2->v6(a2, a3, n->f14);
                if (r != n->f14) {
                    h2->v9(a1, n->f14);
                    h2->v7(a1, r, a2, a3);
                    n->f14 = r;
                } else
                    h2->v8(a1, r, a2, a3);
            } else {
                C_00192B50 *owner = link->owner;
                link->f10 = result;
                link->fC = result;
                h = owner->func_00192B50(((int *)h)[2]);
                int r = h->v6(a2, a3, 0);
                if (r) {
                    h->v7(a1, r, a2, a3);
                    Node_00193240 *nn = D_002EFE70->func_0001E8A0();
                    nn->f14 = r;
                    nn->f4 = owner;
                    nn->f8 = h;
                    nn->fC = link->query;
                    nn->f10 = result;
                    nn->f0 = self->f0;
                    self->f0 = nn;
                }
            }
        } else if (n) {
            *(float *)&link->fC = 0;
            *(u32 *)&link->f10 = 0x7f7fffff;
            n->f8->v9(a1, n->f14);
            *cursor = n->f0;
            D_002EFE70->func_0001E790(n);
        }
        link = link->next;
    }
}
void Node_00193240::func_001937F0(void *a1, void *a2, void *a3)
{
    Handler_00193240 *h = f8;
    int r = h->v6(a2, a3, f14);

    if (r != f14) {
        h->v9(a1, f14);
        if (r != 0) {
            h->v7(a1, r, a2, a3);
        }
        f14 = r;
    } else {
        f8->v8(a1, f14, a2, a3);
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

void Node_00193240::func_00193950(void *a1, S_00193240_V4 *a2, void *a3, void *a4)
{
    C_00192B50 *cur = (C_00192B50 *)f4;
    if (cur != 0) {
        Link_00193530 *link = cur->f24;
        if (link == 0) {
            func_001937F0(a1, a2, a3);
        } else {
            C_00192B50 *best = cur;
            C_00192B50 *prev = 0;
            while (link != 0) {
                if (link->owner != prev && link->query->func_0017A010(&f18, a2, 0)) {
                    prev = best;
                    best = link->owner;
                    link = best->f24;
                } else {
                    link = link->next;
                }
            }
            Handler_00193240 *h;
            if (best != (C_00192B50 *)f4) {
                Handler_00193240 *old = f8;
                old->v9(a1, f14);
                Node_00193240 *n = f0;
                while (n != 0) {
                    n->f8->v9(a1, n->f14);
                    Node_00193240 *next = n->f0;
                    D_002EFE70->func_0001E790(n);
                    n = next;
                }
                f0 = 0;
                f4 = best;
                h = best->func_00192B50(old->f8);
                f8 = h;
                int r = h->v5(a2, 0);
                f14 = r;
                h->v7(a1, r, a2, a3);
                func_00193530(a1, a2, a3, a4);
            } else {
                h = f8;
                int r = h->v6(a2, a3, f14);
                if (r != f14) {
                    h->v9(a1, f14);
                    h->v7(a1, r, a2, a3);
                    f14 = r;
                } else {
                    h->v8(a1, r, a2, a3);
                }
                func_00193600(a1, a2, a3, a4);
            }
        }
        *(S_00193240_V4 *)&f18 = *a2;
    }
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

void Cam_00193C20::func_00193C20(int count, float dt, int a3, Env_00193C20 *env, int a5, Tgt_00193C20 *tgt,
                                V4_00193C20 v, int last)
{
    V4_00193C20 *pa = &f28;
    float *d;
    int i;
    int j;
    int val;
    void *p;
    V4_00193C20 *pb;

    f24 = count;
    f50 = tgt;
    *pa = v;
    f48 = env;
    f4c = (Seg_00193C20 **)func_001E8AA5(f24 * 4);
    f54 = (Key_00193C20 **)func_001E8AA5(f24 * 4);
    pb = &f38;
    f50->func_00199A70(0, pb);
    d = f50->func_00197EC0(&v.x, pa);
    pb->x = pb->x + d[0];
    pb->y = d[1] + pb->y;
    pb->z = d[2] + pb->z;
    v = *pb;
    for (i = 0; i < f24; i++) {
        p = func_001E8A44(0x1e0);
        f4c[i] = p ? ((Seg_00193C20 *)p)->func_00143580(1) : 0;
        if (*(volatile int *)&last != 0 && i == f24 - 1)
            val = *(volatile int *)&last;
        else
            val = *(volatile int *)&a3;
        f4c[i]->v35(val, 0, 0);
        f4c[i]->func_00199600(v);
        f4c[i]->func_00198F50(&D_002A9934, &D_002A9924, 0, 1, 0);
        f4c[i]->func_0019ABA0((void *)f48->f4a8[*(volatile int *)&a5], 2);
        func_001577A0(f4c[i], 0);
        v.y = v.y - dt;
        p = func_001E8A44(0x18);
        f54[i] = p ? ((Key_00193C20 *)p)->func_00135850() : 0;
    }
    p = func_001E8A44(0x4c);
    f58 = p ? ((Path_00193C20 *)p)->func_00135700(1) : 0;
    f58->func_00135A80(f24, 0, 0, f24, f54, this);
    f58->f44 = (void *)func_00193AF0;
    func_001577A0(f58, 2);
    for (i = 0; i < f24; i++) {
        f4c[i]->func_00199A70(0, f58->f34 + i * 0x4c + 0x1c);
    }
    f54[0]->func_00135870(dt, 0, f58->f34, pb, 1);
    for (j = 0; j < f24 - 1; j++) {
        f54[j + 1]->func_00135870(dt, f58->f34 + j * 0x4c, f58->f34 + j * 0x4c + 0x4c, 0, 1);
    }
    func_001D3F50();
}

