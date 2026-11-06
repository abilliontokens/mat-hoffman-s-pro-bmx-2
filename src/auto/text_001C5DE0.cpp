/* 9 functions from 0x001C5DE0 to 0x001C6DA0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

struct S_001C63F0_Work {
    Vec4 *pq;
    Vec4 q;
};

struct S_001C6820_Pair {
    f32 time;
    int value;
};

struct S_001C6820_Elem {
    char pad0[0x4C];
    S_001C6820_Pair *pairs;
    int count;
    char pad54[4];
};

struct C_001C6820 {
    char pad0[0xC0];
    S_001C6820_Elem *elems;
    int idx;
    int func_001C6820(f32 param_1);
};

struct C_001C67C0VT {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void func_vtbl3(int a, Vec4 *out);
};

struct C_001C67C0 {
    char pad0[0x10];
    C_001C67C0VT *obj10;
    Vec4 func_001C67C0(int param_2);
};

struct S_001C64A0_Node {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int idx, Vec4 *v, float *t, int b, int c);
    virtual void v5(int idx, Vec4 *v, float *t, int b, int c);
    virtual void v6();
    virtual void v7(int count);
    int f4;
    int f8;
    int fC;
    char pad10[4];
    S_001C64A0_Node **f14;
    char pad18[4];
    int f1C;
    char pad20[0xC];
    int f2C;
    S_001C64A0_Node *findRoot()
    {
        S_001C64A0_Node *root = this;
        int i;
        for (i = 0; i < f1C; i++) {
            if (f14[i]->f4 == 0) {
                root = f14[i];
            }
        }
        return root;
    }
};

static __forceinline S_001C64A0_Node *find_root(S_001C64A0_Node *&n)
{
    S_001C64A0_Node *root = n;
    int i;
    for (i = 0; i < n->f1C; i++) {
        if (n->f14[i]->f4 == 0) {
            root = n->f14[i];
        }
    }
    return root;
}

static __forceinline Vec4 vec3_neg(Vec4 *v)
{
    Vec4 r;
    r.w = 1.0f;
    r.x = -v->x;
    r.y = -v->y;
    r.z = -v->z;
    return r;
}

static __forceinline void vec3_neg2(Vec4 *t, Vec4 *v)
{
    t->w = 1.0f;
    t->x = -v->x;
    t->y = -v->y;
    t->z = -v->z;
}

extern float D_00275544;
void func_001C6380(Vec4 *out, Vec4 *in);
float func_0014F7E0(float x);

static __forceinline float Min_001C6B30(float a, float b)
{
    float r;
    _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b)));
    return r;
}

static __forceinline float Max_001C6B30(float a, float b)
{
    float r;
    _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b)));
    return r;
}

inline void cross_001C6B30(float *out, float *a, float *b)
{
    _mm_storeu_ps(out, _mm_shuffle_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(a), _mm_shuffle_ps(_mm_loadu_ps(b), _mm_loadu_ps(b), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(b), _mm_shuffle_ps(_mm_loadu_ps(a), _mm_loadu_ps(a), 0xc9))),
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(a), _mm_shuffle_ps(_mm_loadu_ps(b), _mm_loadu_ps(b), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(b), _mm_shuffle_ps(_mm_loadu_ps(a), _mm_loadu_ps(a), 0xc9))), 0xc9));
}

struct V4_001C6B30 {
    float x, y, z, w;
    V4_001C6B30() { x = y = z = 0; w = 1.0f; }
};

struct C_001C6B30_Node {
    void func_001996A0(Vec4 v, int a);
    void func_001996A0(int a, Vec4 v);
    void func_001994C0(int a, Vec4 *p, Vec4 *q);
    void func_00199A70(int a, Vec4 *out);
    void func_00199110(int a, Vec4 *p, Vec4 *q, int b, int c, int d);
    void func_00199CF0(Vec4 axis, float angle);
    void func_001994C0(int a, V4_001C6B30 *p, V4_001C6B30 *q);
    void func_00199A70(int a, V4_001C6B30 *out);
    void func_00199110(int a, V4_001C6B30 *p, V4_001C6B30 *q, int b, int c, int d);
    void func_00199CF0(V4_001C6B30 axis, float angle);
};

struct C_001C6B30_Holder {
    int unk0;
    C_001C6B30_Node *f4;
    void func_001646B0(void);
    void func_00164820(void *p);
    void func_001670C0(float dt, int a, int b);
};

extern const float D_00277EA8;
extern const float D_002756DC;
extern const float D_0028E740;
extern Vec4 D_002AB798;
void *func_001E83E8(void *p, unsigned int size);

struct C_001C6870_Dur {
    char pad0[0x38];
    float f38;
};
struct C_001C6870_Item {
    float time;
    int state;
};
struct C_001C6870_Obj {
    char pad0[0x40];
    C_001C6870_Dur *f40;
    char pad44[8];
    C_001C6870_Item *f4c;
    int f50;
};
struct C_001C6870 {
    char pad0[0x3c];
    C_001C6B30_Holder *f3C;
    C_001C6B30_Node *f40;
    C_001C6B30_Node *f44;
    char pad48[0x6c];
    float fB4;
    void func_001C6870(C_001C6870_Obj *obj);
};

struct C_001C6B30 {
    char pad0[0x3c];
    C_001C6B30_Holder *f3C;
    void func_001C6B30(Vec4 target, float maxAngle);
    void func_001C6B30(V4_001C6B30 target, float maxAngle);
};

void *func_001E8A44(unsigned int size);
void func_0015BB70(void *p);

struct C_0015B660 {
    S_001C64A0_Node *func_0015B660();
};

struct C_0015B7A0 {
    S_001C64A0_Node *func_0015B7A0();
};

struct C_001C65E0 {
    Vec4 pos;
    S_001C64A0_Node *f10;
    void func_001C65E0(S_001C64A0_Node *obj);
};

void func_001C63F0(Vec4 *out, Vec4 *vin, f32 *m)
{
    Vec4 q;
    q.z = 0;
    q.y = 0;
    q.x = 0;
    q.w = 1.0f;
    Vec4 *pq = &q;
    __m128 v = _mm_loadu_ps(&vin->x);
    __m128 r0 = _mm_load_ps(m);
    _mm_storeh_pi((__m64 *)&pq->z, v);
    __m128 r1 = _mm_load_ps(m + 4);
    pq->w = 1.0f;
    __m128 r2 = _mm_load_ps(m + 8);
    v = _mm_loadh_pi(v, (__m64 const *)&pq->z);
    r0 = _mm_mul_ps(r0, v);
    r1 = _mm_mul_ps(r1, v);
    r2 = _mm_mul_ps(r2, v);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 t = _mm_movehl_ps(v, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, t);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&pq->x, lo);
    pq->w = 1.0f;
    ((u32 *)out)[0] = ((u32 *)pq)[0];
    ((u32 *)out)[1] = ((u32 *)pq)[1];
    ((u32 *)out)[2] = ((u32 *)pq)[2];
    ((u32 *)out)[3] = ((u32 *)pq)[3];
}

void func_001C64A0(S_001C64A0_Node *obj)
{
    Vec4 a;
    int i;
    S_001C64A0_Node *root = *(S_001C64A0_Node * volatile *)&obj;

    for (i = 0; i < obj->f1C; i++) {
        if (obj->f14[i]->f4 == 0)
            root = obj->f14[i];
    }
    a.z = 0;
    a.y = 0;
    a.x = 0;
    a.w = 1.0f;
    root->v5(0, &a, 0, 0, 0);
    a = vec3_neg(&a);
    a.y = 0;
    for (i = 0; i < root->fC; i++) {
        Vec4 b;
        b.z = 0;
        b.y = 0;
        b.x = 0;
        b.w = 1.0f;
        root->v5(i, &b, 0, 0, 0);
        b.x = a.x + b.x;
        b.y = b.y + a.y;
        b.z = b.z + a.z;
        root->v4(i, &b, 0, 0, 0);
    }
}

void C_001C65E0::func_001C65E0(S_001C64A0_Node *obj)
{
    Vec4 a;
    int i;
    S_001C64A0_Node *root = find_root(obj);
    S_001C64A0_Node *node;

    if (obj->f2C == 0) {
        void *mem = func_001E8A44(0x18);
        node = mem ? ((C_0015B660 *)mem)->func_0015B660() : 0;
    } else {
        void *mem = func_001E8A44(0x18);
        node = mem ? ((C_0015B7A0 *)mem)->func_0015B7A0() : 0;
    }
    f10 = node;
    f10->f4 = 1;
    f10->fC = root->fC;
    f10->f8 = root->f8;
    f10->v7(root->fC);
    a.z = 0;
    a.y = 0;
    a.x = 0;
    a.w = 1.0f;
    root->v5(0, &a, 0, 0, 0);
    for (i = 0; i < f10->fC; i++) {
        Vec4 b;
        Vec4 c;
        float t;
        float y;
        b.z = 0;
        b.y = 0;
        b.x = 0;
        b.w = 1.0f;
        root->v5(i, &b, &t, 0, 0);
        y = b.y;
        b.x = b.x - a.x;
        b.z = b.z - a.z;
        b.y = 0;
        f10->v4(i, &b, &t, 0, 0);
        c.x = 0;
        c.z = 0;
        c.w = 1.0f;
        c.y = y;
        b = c;
        root->v4(i, &b, 0, 0, 0);
    }
    f10->v5(f10->fC - 1, &pos, 0, 0, 0);
    if (obj->f2C == 1) {
        func_0015BB70(f10);
        func_0015BB70(root);
    }
}

Vec4 C_001C67C0::func_001C67C0(int param_2)
{
    Vec4 local;
    local.z = 0;
    local.y = 0;
    local.x = 0;
    local.w = 1.0f;
    this->obj10->func_vtbl3(param_2, &local);
    return local;
}

int C_001C6820::func_001C6820(f32 param_1)
{
    int i = 0;
    int result = 0;

    for (; i < elems[idx].count; i++) {
        if (!(param_1 > elems[idx].pairs[i].time)) {
            break;
        }
        result = elems[idx].pairs[i].value;
    }
    return result;
}

void C_001C6870::func_001C6870(C_001C6870_Obj *obj)
{
    float total = obj->f40->f38 * 59.9999962f;
    int cap = 0;
    int prevState;
    float lo0;
    float lo1;
    float t;
    int i;
    Vec4 p;

    f3C->f4->func_001996A0(0, D_002AB798);
    f3C->func_001646B0();
    f3C->func_00164820(obj->f40);
    p.z = 0;
    p.y = 0;
    p.x = 0;
    p.w = 1.0f;
    f40->func_00199A70(0, &p);
    f44->func_00199A70(0, &p);
    fB4 = p.y;
    prevState = 0;
    lo0 = 100.0f;
    lo1 = 100.0f;
    f3C->func_001670C0(0.0f, 0, 0);
    i = 0;
    if (D_00275544 < total) {
        do {
            f40->func_00199A70(0, &p);
            if (p.y < lo0) {
                lo0 = p.y;
            }
            f44->func_00199A70(0, &p);
            if (p.y < lo1) {
                lo1 = p.y;
            }
            f3C->func_001670C0(0.016666668f, 0, 0);
            i++;
        } while ((float)i < total);
    }
    float th0 = lo0 + 0.100000001f;
    float th1 = lo1 + 0.100000001f;
    f3C->func_001646B0();
    f3C->func_00164820(obj->f40);
    f3C->func_001670C0(0.0f, 0, 0);
    i = 0;
    if (D_00275544 < total) {
        t = 0;
        do {
            int b0 = 0;
            int b1 = 0;
            int state;
            f40->func_00199A70(0, &p);
            if (p.y < th0) {
                b0 = 1;
            }
            f44->func_00199A70(0, &p);
            if (p.y < th1) {
                b1 = 1;
            }
            state = b0 ? (b1 ? 3 : 1) : (b1 ? 2 : 0);
            if (prevState != state || i == 0) {
                if (cap < obj->f50 + 1) {
                    cap += 10;
                    obj->f4c = (C_001C6870_Item *)func_001E83E8(obj->f4c, cap * 8);
                }
                obj->f4c[obj->f50].state = state;
                obj->f4c[obj->f50].time = t * 0.016666668f;
                obj->f50++;
            }
            prevState = state;
            f3C->func_001670C0(0.016666668f, 0, 0);
            i++;
            t = (float)i;
        } while (t < total);
    }
    if (cap != obj->f50) {
        obj->f4c = (C_001C6870_Item *)func_001E83E8(obj->f4c, obj->f50 * 8);
    }
}

void C_001C6B30::func_001C6B30(V4_001C6B30 target, float maxAngle)
{
    V4_001C6B30 S;
    V4_001C6B30 P;
    V4_001C6B30 Q;
    V4_001C6B30 R;
    V4_001C6B30 T;
    float sign;
    float ang;
    float d;

    f3C->f4->func_001994C0(0, &Q, &R);
    f3C->f4->func_00199A70(0, &P);
    target.y = P.y;
    T.x = target.x - P.x;
    T.y = 0;
    T.z = target.z - P.z;
    T.w = 1.0f;
    func_001C6380((Vec4 *)&T, (Vec4 *)&T);
    cross_001C6B30(&S.x, &Q.x, &R.x);
    sign = -1.0f;
    if (T.x * S.x + T.y * S.y + T.z * S.z <= D_00275544) {
        sign = 1.0f;
    }
    d = T.x * Q.x + T.y * Q.y + T.z * Q.z;
    if (d == D_00275544) {
        f3C->f4->func_00199110(0, &T, &R, 0, 1, 0);
        return;
    }
    ang = func_0014F7E0(Max_001C6B30(-1.0f, Min_001C6B30(1.0f, d)));
    if (ang > maxAngle) {
        ang = maxAngle;
    }
    f3C->f4->func_00199CF0(R, ang * sign);
}

