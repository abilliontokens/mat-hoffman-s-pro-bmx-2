/* 19 functions from 0x0015FF80 to 0x00160D30, found by Ghidra. */
#include "common.h"
extern float D_002879B8, D_00275544, D_002756D4, D_00286AC4, D_002756D0;
extern float D_002879B4, D_002879B0, D_002879AC, D_002879A8;
#pragma optimize("g", off)
static __forceinline float abs_0015FF80(volatile float v) { unsigned int bits = *(volatile unsigned int *)&v & 0x7fffffff; return *(float *)&bits; }
#pragma optimize("", on)
static __forceinline float atan_poly_0015FF80(float t) {
    float s = t * t;
    return t * (((D_002879B0 - D_002879B4 * s) * s - D_002879AC) * s + D_002879A8);
}
struct C_00160A60 {
    int unk0;
    int unk4;
    int unk8;
    C_00160A60* func_00160A60(void);
};

struct C_00160BF0 {
    int unk0;
    void func_00160BF0(void);
};

struct C_00160C00 {
    int f0;
    int f4;
    char pad8[0x8];
    short f10;
    char pad12[0x12];
    int f24;
    int f28;
    int f2c;
    C_00160C00 *func_00160C00(void);
};

struct C_00160BD0 {
    int unk0;
    int unk4;
    int unk8;
    char unkC;
    char padD[3];
    int unk10;
    int unk14;
    int unk18;
    C_00160BD0 *func_00160BD0(void);
};

struct S_00160B30_Node {
    int f0;
    S_00160B30_Node *prev;
    S_00160B30_Node *next;
};

struct C_00160B30 {
    int count;
    S_00160B30_Node *head;
    S_00160B30_Node *tail;
    void func_00160B30(S_00160B30_Node *node);
    void func_00160B90(void);
};

struct C_00160C40 {
    int *data;
    int count;
    int f8;
    int fC;
    C_00160C40 *func_00160C40(int n, int a, int b);
};

struct V4_00160310 { float x, y, z, w; };
struct S_Cam_00160310 {
    char pad0[0xB0];
    float b0, b4, b8;
    char padBC[4];
    float c0, c4, c8;
    char padCC[4];
    float d0, d4, d8;
    char padDC[0x14];
    float mat[16];
    char pad130[0x40];
    V4_00160310 p;
};
struct S_Holder_00160310 { int unk0; S_Cam_00160310 *cam; };
extern S_Holder_00160310 *D_002EFDB8;
extern int D_002E2944;
extern float D_002A8110, D_002A810C, D_00275460;
extern int D_002A829C;
void __stdcall func_00030AC0(void *out, void *v, void *m);
void __stdcall func_0011F460(void *a, void *b, void *c, void *d, void *e);
float func_0015FF80(float y, float x);
void func_001B07A0(void *p);
void func_001578D0(void);
#include <xmmintrin.h>
static __forceinline float Sqrt_00160310(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }
static __forceinline float Max_00160310(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline V4_00160310 Vec_00160310(float x,float y,float z) { V4_00160310 v; v.x=x;v.y=y;v.z=z;v.w=1.0f;return v; }
static __forceinline void Cross_00160310(V4_00160310 *out, const V4_00160310 *a, const V4_00160310 *b)
{
    __m128 va = _mm_loadu_ps(&a->x);
    __m128 vb = _mm_loadu_ps(&b->x);
    __m128 r = _mm_sub_ps(_mm_mul_ps(va, _mm_shuffle_ps(vb, vb, 0xc9)),
                          _mm_mul_ps(vb, _mm_shuffle_ps(va, va, 0xc9)));
    _mm_storeu_ps(&out->x, _mm_shuffle_ps(r, r, 0xc9));
}
struct C_00160310 {
    char pad0[0x28];
    float x, y, z;
    char pad34[4];
    V4_00160310 v38, v48, v58, v68;
    int f78;
    char pad7C[4];
    float scale;
    int f84;
    int func_00160310(void);
};
void *func_001E8A44(int size);
void func_001E891B(void *p);
extern int D_002A80C0;
extern int D_002A80CC;
extern int D_002879C4;

struct S_001607B0_Dev {
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
    virtual void v28(int a, int b, void *c);
};

void func_001E891B(void *p);

struct S_00160810_Cam {
    S_00160810_Cam *func_00193490(void);
    void func_001938C0(void *a, int b, int c, void *vecA, void *vecB, int d);
    void func_00193870(void *p);
    void func_00193500(void);
};

/* doubly linked list node and list header */
struct S_ListNode_00160A70 {
    int data;
    S_ListNode_00160A70 *prev;
    S_ListNode_00160A70 *next;
    S_ListNode_00160A70 *init(void)
    {
        data = 0;
        prev = 0;
        next = 0;
        return this;
    }
};

struct C_00160A70 {
    int count;
    S_ListNode_00160A70 *head;
    S_ListNode_00160A70 *tail;
    int func_00160A70(int data);
    int func_00160AD0(int data);
};

/* chained hash table: an array of f4 bucket lists, f8 hashes a key */
struct S_00160C90_Node {
    int value;
    int hash;
    int key;
    S_00160C90_Node *next;
};

struct C_00160C90 {
    S_00160C90_Node **f0;
    int f4;
    int (*f8)(int key);
    void func_00160C90(void);
    void func_00160CE0(int key, int value);
};

/* LightFlare */
extern int D_002A80EC;
extern int D_002A80CC;
void func_001D3F50();
class C_001608E0_Obj {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(int a0, int a1, int a2, int *a3, int a4);
    virtual void v28(int a0, int a1, void *a2);
    virtual void v29(int a0, int a1, void *a2);
    virtual void v30(); virtual void v31();
    virtual void v32(int a0, int a1, float a2, float a3);
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual void v37(int a0);
    C_001608E0_Obj *func_00140390(int a0);
};
struct C_001608E0 {
    char pad0[0x28];
    struct V4_001608E0 { int x, y, z, w; } unk28;
    char pad38[0x40];
    C_001608E0_Obj *unk78;
    int pad7C;
    int unk80;
    int unk84;
    void func_001608E0(V4_001608E0 *a0, int *a1, int a2, int a3, int a4);
    void func_001577A0(C_001608E0_Obj *a0, int a1);
};
struct C_00160860 {
    void *vtbl;
    char pad4[0x23];
    unsigned char f27;
    unsigned int vec[5][4];
    S_001607B0_Dev *f78;
    S_00160810_Cam *f7c;
    char pad80[4];
    int f84;
    void func_00192370(int a0);
    void func_00157960(void);
    void func_00157660(void);
    void *func_00160A00(unsigned int flags);
    int func_001607B0(void);
    void func_00160810(int a1, int a2);
    C_00160860 *func_00160860(int a0);
};


float func_0015FF80(volatile float y, volatile float x)
{
    volatile float ax, ay;
    volatile unsigned int tmp[2];
    float t, s;
    unsigned int bits;
    bits = *(volatile unsigned int *)&x; tmp[0] = bits; bits = tmp[0]; bits &= 0x7fffffff; *(volatile unsigned int *)&ax = bits;
    bits = *(volatile unsigned int *)&y; tmp[1] = bits; bits = tmp[1]; bits &= 0x7fffffff; *(volatile unsigned int *)&ay = bits;
    if (ax < D_002879B8) {
    if (ay < D_002879B8) return y / x;
    if (ax < D_002879B8 && ay > D_002879B8) {
        if (y > D_00275544) return D_002756D4;
        return D_00286AC4;
    }
    }
    if (ay < D_002879B8 && ax > D_002879B8) {
        if (!(x > D_00275544)) return D_002756D0;
        return D_00275544;
    }
    if (x > D_00275544 && y > D_00275544) {
        if (ay < ax) return (t = ay / ax, s = t * t, t * (((D_002879B0 - D_002879B4 * s) * s - D_002879AC) * s + D_002879A8));
        return D_002756D4 - (t = ax / ay, s = t * t, t * (((D_002879B0 - D_002879B4 * s) * s - D_002879AC) * s + D_002879A8));
    }
    if (x < D_00275544) {
    if (y > D_00275544) {
        if (ay < ax) return D_002756D0 - (t = ay / ax, s = t * t, t * (((D_002879B0 - D_002879B4 * s) * s - D_002879AC) * s + D_002879A8));
        return (t = ax / ay, s = t * t, t * (((D_002879B0 - D_002879B4 * s) * s - D_002879AC) * s + D_002879A8)) + D_002756D4;
    }
    if (x < D_00275544 && y < D_00275544) {
        if (ay < ax) return (t = ay / ax, s = t * t, t * (((D_002879B0 - D_002879B4 * s) * s - D_002879AC) * s + D_002879A8)) - D_002756D0;
        return D_00286AC4 - (t = ax / ay, s = t * t, t * (((D_002879B0 - D_002879B4 * s) * s - D_002879AC) * s + D_002879A8));
    }
    }
    if (x > D_00275544 && y < D_00275544) {
        if (ay < ax) return -(t = ay / ax, s = t * t, t * (((D_002879B0 - D_002879B4 * s) * s - D_002879AC) * s + D_002879A8));
        return (t = ax / ay, s = t * t, t * (((D_002879B0 - D_002879B4 * s) * s - D_002879AC) * s + D_002879A8)) - D_002756D4;
    }
    return D_00275544;
}

int C_00160310::func_00160310(void)
{
    void __stdcall func_0011F460(void *out, float a, float b, float c, float d);
    C_00160310 *volatile self = this;
    V4_00160310 q, dir, t0, t1, o84, o88, o74, o64;
    V4_00160310 *o38, *o48, *o58, *o68;
    S_Cam_00160310 *cam;
    float dx, dy, dz, inv, d2, dist, m;
    float a, b, c;
    int idx;

    if (D_002A80C0 == 0)
        return 1;
    cam = D_002EFDB8->cam;
    q.x = 0.0f;
    q.y = 0.0f;
    q.z = 0.0f;
    q.w = 1.0f;
    dir.x = cam->c0 * self->scale;
    dir.y = cam->c4 * self->scale;
    dir.z = cam->c8 * self->scale;
    dir.w = 1.0f;
    dx = self->x - cam->p.x;
    dy = self->y - cam->p.y;
    dz = self->z - cam->p.z;
    inv = 1.0f;
    if (D_002E2944) {
        d2 = dx * dx + dy * dy + dz * dz;
        dist = Sqrt_00160310(d2);
        m = dist * D_002A810C;
        inv = D_00275460 / Max_00160310(D_002A8110, m);
    }
    if (self->f84) {
        t0.x = 0.0f;
        t0.y = 0.0f;
        t0.z = 0.0f;
        t0.w = 1.0f;
        t1.x = cam->d0;
        t1.y = cam->d4;
        t1.z = cam->d8;
        t1.w = 1.0f;
        func_00030AC0(&t0, &self->x, &cam->mat);
        dir.x = func_0015FF80(t0.y, t0.x);
        func_0011F460(&o84, m, q.x, q.y, dir.x);
        func_00030AC0(&o88, &o74, &o88);
        Cross_00160310(&o64, &o88, &o74);
    } else {
        q.x = cam->b0 * self->scale;
        q.y = cam->b4 * self->scale;
        q.z = cam->b8 * self->scale;
        q.w = 1.0f;
    }
    dx = q.x - dir.x;
    dy = q.y - dir.y;
    dz = q.z - dir.z;
    if (D_002E2944) {
        dx = dx * inv;
        dy = dy * inv;
        dz = dz * inv;
    }
    a = dir.x + q.x;
    b = dir.y + q.y;
    c = dir.z + q.z;
    if (D_002E2944) {
        a = a * inv;
        b = b * inv;
        c = c * inv;
    }
    o38 = (V4_00160310 *)((char *)self + 0x38);
    o38->x = self->x - dx;
    o38->y = self->y - dy;
    o38->z = self->z - dz;
    o38->w = 1.0f;
    o68 = (V4_00160310 *)((char *)self + 0x68);
    o68->x = self->x + dx;
    o68->y = self->y + dy;
    o68->z = self->z + dz;
    o68->w = 1.0f;
    o48 = (V4_00160310 *)((char *)self + 0x48);
    o48->x = self->x - a;
    o48->y = self->y - b;
    o48->z = self->z - c;
    o48->w = 1.0f;
    o58 = (V4_00160310 *)((char *)self + 0x58);
    o58->x = self->x + a;
    o58->y = self->y + b;
    o58->z = self->z + c;
    o58->w = 1.0f;
    idx = *(int *)(*(int *)(self->f78 + 0x24) + 4);
    if (idx != -1) {
        func_001B07A0(*(void **)(*(int *)(D_002A829C + 0x14) + (idx << 4) + 4));
    }
    func_001578D0();
    return 1;
}

int C_00160860::func_001607B0(void)
{
    if (D_002A80C0 != 0) {
        f78->v28(0, 0, &vec[2][0]);
        f78->v28(0, 1, &vec[1][0]);
        f78->v28(0, 2, &vec[4][0]);
        f78->v28(0, 3, &vec[3][0]);
        func_00157960();
    }
    return 1;
}

void C_00160860::func_00160810(int a1, int a2)
{
    S_00160810_Cam *p = (S_00160810_Cam *)func_001E8A44(0x28);

    f7c = p ? p->func_00193490() : 0;
    f7c->func_001938C0(&vec[-1][3], a1, a2, &vec[0][0], &D_002A80CC, 0);
}

C_00160860 *C_00160860::func_00160860(int a0)
{
    unsigned int *p;

    func_00192370(a0);
    vtbl = (void *)&D_002879C4;
    p = &vec[0][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[1][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[2][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[3][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[4][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f27 |= 3;
    f78 = 0;
    f7c = 0;
    f84 = 1;
    return this;
}

void C_001608E0::func_001608E0(V4_001608E0 *a0, int *a1, int a2, int a3, int a4)
{
    int local;
    int i;
    void *mem;
    C_001608E0_Obj *obj;
    local = 4;
    func_001D3F50();
    unk80 = a2;
    unk28 = *a0;
    unk84 = a4;
    mem = func_001E8A44(0x60);
    obj = mem != 0 ? ((C_001608E0_Obj *)mem)->func_00140390(1) : 0;
    unk78 = obj;
    obj->v27(a3, 7, 1, &local, 0);
    func_001577A0(unk78, 8);
    unk78->v32(0, 0, 0.0f, 0.0f);
    unk78->v32(0, 1, 0.0f, 1.0f);
    unk78->v32(0, 2, 1.0f, 0.0f);
    unk78->v32(0, 3, 1.0f, 1.0f);
    for (i = 0; i < 4; i++) {
        unk78->v29(0, i, &D_002A80EC);
        unk78->v28(0, i, &D_002A80CC);
    }
    unk78->v37(*a1);
}

void *C_00160860::func_00160A00(unsigned int flags)
{
    vtbl = (void *)&D_002879C4;
    if (f7c != 0) {
        S_00160810_Cam *cam;

        f7c->func_00193870((char *)this + 0x24);
        cam = f7c;
        if (cam != 0) {
            cam->func_00193500();
            func_001E891B(cam);
        }
        f7c = 0;
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_00160A60* C_00160A60::func_00160A60(void) {
    unk0 = 0;
    unk4 = 0;
    unk8 = 0;
    return this;
}

int C_00160A70::func_00160A70(int data)
{
    void *mem = func_001E8A44(0xc);
    S_ListNode_00160A70 *n = mem != 0 ? ((S_ListNode_00160A70 *)mem)->init() : 0;

    if (n == 0) {
        return 0;
    }
    n->data = data;
    n->prev = tail;
    n->next = 0;
    if (tail != 0) {
        tail->next = n;
        tail = n;
        count++;
        return 1;
    }
    head = n;
    tail = n;
    count++;
    return 1;
}

int C_00160A70::func_00160AD0(int data)
{
    void *mem = func_001E8A44(0xc);
    S_ListNode_00160A70 *n = mem != 0 ? ((S_ListNode_00160A70 *)mem)->init() : 0;

    if (n == 0) {
        return 0;
    }
    n->data = data;
    n->prev = 0;
    n->next = head;
    if (head != 0) {
        head->prev = n;
        head = n;
        count++;
        return 1;
    }
    tail = n;
    head = n;
    count++;
    return 1;
}

void C_00160B30::func_00160B30(S_00160B30_Node *node)
{
    if (node == head) {
        head = node->next;
    }
    if (node == tail) {
        tail = node->prev;
    }
    if (node->prev != 0) {
        node->prev->next = node->next;
    }
    if (node->next != 0) {
        node->next->prev = node->prev;
    }
    node->f0 = 0;
    node->prev = 0;
    node->next = 0;
    func_001E891B(node);
    count--;
}

void C_00160B30::func_00160B90(void)
{
    S_00160B30_Node *p;
    S_00160B30_Node *node;
    S_00160B30_Node **pnext;

    count = 0;
    p = head;
    while (p != 0) {
        node = p;
        pnext = &p->next;
        p = *pnext;
        node->f0 = 0;
        node->prev = 0;
        node->next = 0;
        func_001E891B(node);
    }
    head = 0;
    tail = 0;
}

C_00160BD0 *C_00160BD0::func_00160BD0(void)
{
    extern int D_00287A44;
    unk0 = (int)&D_00287A44;
    unk4 = 0;
    unk8 = 0;
    unkC = 1;
    unk14 = 0;
    unk10 = 0;
    unk18 = 0;
    return this;
}

void C_00160BF0::func_00160BF0(void) {
    extern int D_00287A44;
    unk0 = (int)&D_00287A44;
}

C_00160C00 *C_00160C00::func_00160C00(void)
{
    f0 = 0;
    f4 = 0;
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f10 = 0;
    return this;
}

void func_00160C20(int *max, char *str)
{
    char *base = str + 1;
    char c;
    int len;

    do {
        c = *str;
        str++;
    } while (c != 0);
    len = str - base;
    if (len > *max) {
        *max = len;
    }
}

C_00160C40 *C_00160C40::func_00160C40(int n, int a, int b)
{
    int i;

    count = n;
    data = (int *)func_001E8A44(n << 2);
    for (i = 0; i < count; i++) {
        data[i] = 0;
    }
    f8 = a;
    fC = b;
    return this;
}

void C_00160C90::func_00160C90(void)
{
    int i;

    for (i = 0; i < f4; i++) {
        S_00160C90_Node *n = f0[i];

        while (n != 0) {
            S_00160C90_Node *cur = n;

            n = n->next;
            func_001E891B(cur);
        }
    }
    func_001E891B(f0);
}

void C_00160C90::func_00160CE0(int key, int value)
{
    int h = f8(key);
    int i = h;
    S_00160C90_Node *n;

    if (i < 0) {
        i = -i;
    }
    i = i % f4;
    n = (S_00160C90_Node *)func_001E8A44(0x10);
    n->next = f0[i];
    f0[i] = n;
    n->hash = h;
    n->key = key;
    n->value = value;
}

