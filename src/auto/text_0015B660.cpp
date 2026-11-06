/* 20 functions from 0x0015B660 to 0x0015C640, found by Ghidra. */
#include "common.h"
extern int D_0028779C;
extern int D_00287778;
extern int D_002877C0;
extern int D_00287824;
extern int D_002877E4;
void func_001E8390(void *p);
void func_001E891B(void *p);
void func_0001B2E0(void *p, int a);

/* PositionController: scalar deleting destructor in vtable slot 0 */
struct C_0015BDB0 {
    void *vtbl;
    void *func_0015BDB0(unsigned char flags);
};

extern int D_00287804;
extern int D_002877E4;

void func_0001B130(void *out, void *q);
int func_0015C640(void *array, int count, float t);
int func_0015C260(float *base, int hi, float v);
int func_0015C530(float *base, float v, int hi, float **lo, float **up, float *t);

struct ByteAxisRotationController {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    void func_0015B990();
};

struct C_0015C5C0_Entry {
    float t;
    int b;
};

struct C_0015C5C0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int x);
    u32 unk4;
    u32 unk8;
    int unkC;
    int unk10;
    C_0015C5C0_Entry *unk14;
    void func_0015C5C0(void *q, float t);
};

struct C_0015B7C0 {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    void func_0015B7C0();
};

struct C_0015BA90 {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    void func_0015BA90();
};

struct S_0015BF70_Node {
    float f0;
    float f4;
    float f8;
    float fC;
};

int func_0015BF70(S_0015BF70_Node *arr, int n, float t);
int func_0015C100(S_0015BF70_Node *arr, float t, int n, S_0015BF70_Node **a, S_0015BF70_Node **b, float *r);

/* LinearPositionController slot 1 forwards its first two arguments to slot 2 */
struct C_0015B6B0 {
    virtual void v0();
    virtual void v1(int a0, int a1, int a2, int a3);
    virtual void v2(int a0, int a1);
    void func_0015B6B0(int a0, int a1, int a2, int a3);
};

struct Key_0015BB70 {
    float t;
    float p[3];
    float in[3];
    float out[3];
};
struct Path_0015BB70 {
    int f0;
    int f4;
    int f8;
    int count;
    int f10;
    Key_0015BB70 *keys;
};
struct V4_0015BB70 {
    float x, y, z, w;
};
void func_0015BB70(Path_0015BB70 *path);

struct C_0015B660 {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    C_0015B660();
    ~C_0015B660();
    void func_0015B660();
    void func_0015B680();
};

struct C_0015B7A0 {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    C_0015B7A0();
    void func_0015B7A0();
};

struct LinearPositionController {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    LinearPositionController();
};

struct BezierPositionController {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void *unk14;
    BezierPositionController();
};

void func_0001B1D0(void *p, int a);

struct C_0015B9C0 {
    char pad0[0x14];
    u32 *unk14;
    char pad18[0x8];
    void func_0015B9C0(int a0, u32 *a1, int a2);
};

struct C_0015BAC0 {
    char pad0[0x14];
    u32 *unk14;
    char pad18[0x8];
    void func_0015BAC0(int a0, u32 *a1, int a2);
};

struct S_0015C190_Vec3 {
    float x;
    float y;
    float z;
};

struct S_0015C190_Key {
    float t;
    S_0015C190_Vec3 pos;
    S_0015C190_Vec3 in;
    S_0015C190_Vec3 out;
};

struct C_0015C190 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int n);
    u32 unk4;
    u32 unk8;
    int unkC;
    int unk10;
    S_0015C190_Key *unk14;
    void func_0015C190(S_0015C190_Vec3 *pos, float t);
    void func_0015C2F0(S_0015C190_Vec3 *pos, float t, S_0015C190_Vec3 *a3, S_0015C190_Vec3 *in);
    void func_0015B7F0(int idx, S_0015C190_Vec3 *pos, float *t, S_0015C190_Vec3 *in, S_0015C190_Vec3 *out);
};

struct C_0015C000 {
    void *vtbl;
    u32 unk4;
    int unk8;
    int unkC;
    int unk10;
    S_0015BF70_Node *unk14;
    void func_0015C000(float t, float *out);
};

LinearPositionController::LinearPositionController() {
    unk4 = 0;
    unk8 = 1;
    unkC = 0;
    unk10 = 0;
    vtbl = &D_0028779C;
    unk14 = 0;
}

void C_0015B660::func_0015B680() {
    C_0015B660 *self = this;
    void *p = self->unk14;
    self->vtbl = &D_0028779C;
    if (p != 0) {
        func_001E8390(p);
    }
    self->vtbl = &D_00287778;
}

void C_0015B6B0::func_0015B6B0(int a0, int a1, int a2, int a3)
{
    v2(a0, a1);
}

BezierPositionController::BezierPositionController() {
    unk4 = 0;
    unk8 = 1;
    unk10 = 0;
    vtbl = &D_002877C0;
    unkC = 0;
    unk14 = 0;
}

void C_0015B7C0::func_0015B7C0() {
    C_0015B7C0 *self = this;
    void *p = self->unk14;
    self->vtbl = &D_002877C0;
    if (p != 0) {
        func_001E8390(p);
    }
    self->vtbl = &D_00287778;
}

void C_0015C190::func_0015B7F0(int idx, S_0015C190_Vec3 *pos, float *t, S_0015C190_Vec3 *in, S_0015C190_Vec3 *out)
{
    if (pos != 0) {
        unk14[idx].pos.x = pos->x;
        unk14[idx].pos.y = pos->y;
        unk14[idx].pos.z = pos->z;
    }
    if (t != 0) {
        unk14[idx].t = *t;
    }
    if (in != 0) {
        unk14[idx].in.x = in->x;
        unk14[idx].in.y = in->y;
        unk14[idx].in.z = in->z;
    }
    if (out != 0) {
        unk14[idx].out.x = out->x;
        unk14[idx].out.y = out->y;
        unk14[idx].out.z = out->z;
    }
}

void ByteAxisRotationController::func_0015B990()
{
    void *p = unk14;
    vtbl = &D_00287804;
    if (p)
        func_001E8390(p);
    vtbl = &D_002877E4;
}

void C_0015B9C0::func_0015B9C0(int a0, u32 *a1, int a2) {
    if (a1 != 0) {
        *a1 = unk14[a0 * 2];
    }
    if (a2 != 0) {
        func_0001B1D0(&unk14[a0 * 2 + 1], a2);
    }
}

void C_0015BA90::func_0015BA90() {
    C_0015BA90 *self = this;
    void *p = self->unk14;
    self->vtbl = &D_00287824;
    if (p != 0) {
        func_001E8390(p);
    }
    self->vtbl = &D_002877E4;
}

void C_0015BAC0::func_0015BAC0(int a0, u32 *a1, int a2) {
    if (a1 != 0) {
        *a1 = unk14[a0 * 3];
    }
    if (a2 != 0) {
        func_0001B2E0(&unk14[a0 * 3 + 1], a2);
    }
}

void func_0015BB70(Path_0015BB70 *path)
{
    V4_0015BB70 d;
    V4_0015BB70 v, u;
    float s;
    int i;
    d.z = 0.0f; d.y = 0.0f; d.x = 0.0f; d.w = 1.0f;
    int n = path->count;
    if (n == 0) return;
    i = 0;
    if (n - 1 > 0) {
        do {
            d.x = path->keys[i + 1].p[0] - path->keys[i].p[0];
            d.y = path->keys[i + 1].p[1] - path->keys[i].p[1];
            d.z = path->keys[i + 1].p[2] - path->keys[i].p[2];
            if (i == 0) {
                v = d;
            } else {
                s = (path->keys[i + 1].t - path->keys[i].t) / (path->keys[i + 1].t - path->keys[i - 1].t);
                v.x = (path->keys[i].p[0] - path->keys[i - 1].p[0] + d.x) * s;
                v.y = (path->keys[i].p[1] - path->keys[i - 1].p[1] + d.y) * s;
                v.z = (path->keys[i].p[2] - path->keys[i - 1].p[2] + d.z) * s;
            }
            if (i == n - 2) {
                u = d;
            } else {
                s = (path->keys[i + 1].t - path->keys[i].t) / (path->keys[i + 2].t - path->keys[i].t);
                u.x = (path->keys[i + 2].p[0] - path->keys[i + 1].p[0] + d.x) * s;
                u.y = (path->keys[i + 2].p[1] - path->keys[i + 1].p[1] + d.y) * s;
                u.z = (path->keys[i + 2].p[2] - path->keys[i + 1].p[2] + d.z) * s;
            }
            path->keys[i].in[0] = v.x;
            path->keys[i].in[1] = v.y;
            path->keys[i].in[2] = v.z;
            path->keys[i].out[0] = u.x;
            path->keys[i].out[1] = u.y;
            path->keys[i].out[2] = u.z;
            i++;
            n = path->count;
        } while (i < n - 1);
    }
    if (path->count >= 2) {
        int j = path->count - 1;
        path->keys[j].in[0] = path->keys[j].p[0] - path->keys[j - 1].p[0];
        path->keys[j].in[1] = path->keys[j].p[1] - path->keys[j - 1].p[1];
        path->keys[j].in[2] = path->keys[j].p[2] - path->keys[j - 1].p[2];
        path->keys[j].out[0] = path->keys[j].in[0];
        path->keys[j].out[1] = path->keys[j].in[1];
        path->keys[j].out[2] = path->keys[j].in[2];
    } else {
        int j = path->count - 1;
        path->keys[j].in[0] = 0; path->keys[j].in[1] = 0; path->keys[j].in[2] = 0;
        path->keys[j].out[0] = 0; path->keys[j].out[1] = 0; path->keys[j].out[2] = 0;
    }
}

void *C_0015BDB0::func_0015BDB0(unsigned char flags)
{
    vtbl = &D_00287778;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int func_0015BF70(S_0015BF70_Node *arr, int n, float t)
{
    int mid;
    int lo;
    int hi;

    if (n == 0) {
        return 0;
    }
    if (t >= arr[n - 1].f0) {
        return n;
    }
    if (t < arr[0].f0) {
        return 0;
    }
    lo = 0;
    hi = n;
    for (;;) {
        mid = (hi + lo) >> 1;
        if (t >= arr[mid].f0) {
            if (t < arr[mid + 1].f0) {
                return mid + 1;
            }
            lo = mid;
        } else {
            if (t >= arr[mid - 1].f0) {
                return mid;
            }
            hi = mid;
        }
    }
}

void C_0015C000::func_0015C000(float t, float *out)
{
    S_0015BF70_Node *lo;
    S_0015BF70_Node *hi;
    int idx;

    if (unk8 != 0 && unkC > 1) {
        if (func_0015C100(unk14, t, unkC, &lo, &hi, &t)) {
            out[0] = (hi->f4 - lo->f4) * t + lo->f4;
            out[1] = (hi->f8 - lo->f8) * t + lo->f8;
            out[2] = (hi->fC - lo->fC) * t + lo->fC;
            return;
        }
        out[0] = (hi->f4 - lo->f4) * t + hi->f4;
        out[1] = (hi->f8 - lo->f8) * t + hi->f8;
        out[2] = (hi->fC - lo->fC) * t + hi->fC;
        return;
    }
    idx = func_0015BF70(unk14, unkC, t);
    out[0] = unk14[idx - 1].f4;
    out[1] = unk14[idx - 1].f8;
    out[0] = unk14[idx - 1].fC;
}

int func_0015C100(S_0015BF70_Node *arr, float t, int n, S_0015BF70_Node **a, S_0015BF70_Node **b, float *r)
{
    int i = func_0015BF70(arr, n, t);

    if (i != n) {
        *a = &arr[i - 1];
        *b = &arr[i];
        *r = (t - arr[i - 1].f0) / (arr[i].f0 - arr[i - 1].f0);
        return 1;
    }
    *a = &arr[n - 2];
    *b = &arr[n - 1];
    *r = (t - arr[n - 1].f0) / (arr[i - 1].f0 - arr[i - 2].f0);
    return 0;
}

void C_0015C190::func_0015C190(S_0015C190_Vec3 *pos, float t)
{
    S_0015C190_Key key;
    S_0015C190_Key *arr;
    int n;
    int idx;
    int i;

    if (unkC >= unk10) {
        v7(unk10 + 1);
    }
    key.pos = *pos;
    key.t = t;
    key.in.x = 0.0f;
    key.in.y = 0.0f;
    key.in.z = 0.0f;
    key.out.x = 0.0f;
    key.out.y = 0.0f;
    key.out.z = 0.0f;
    n = unkC;
    arr = unk14;
    idx = func_0015C260((float *)arr, n, t);
    for (i = n; i > idx; i++) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = key;
    unkC++;
}

int func_0015C260(float *base, int n, float v)
{
    int mid;
    int lo;
    int hi;

    if (n == 0) {
        return 0;
    }
    if (v >= base[(n - 1) * 10]) {
        return n;
    }
    if (v < base[0]) {
        return 0;
    }
    lo = 0;
    hi = n;
    for (;;) {
        mid = (hi + lo) >> 1;
        if (v >= base[mid * 10]) {
            if (v < base[mid * 10 + 10]) {
                return mid + 1;
            }
            lo = mid;
        } else {
            if (v >= base[mid * 10 - 10]) {
                return mid;
            }
            hi = mid;
        }
    }
}

void C_0015C190::func_0015C2F0(S_0015C190_Vec3 *pos, float t, S_0015C190_Vec3 *a3, S_0015C190_Vec3 *in)
{
    S_0015C190_Key key;
    S_0015C190_Key *arr;
    int n;
    int idx;
    int i;

    if (unkC >= unk10) {
        v7(unk10 + 1);
    }
    key.pos.x = pos->x;
    key.pos.y = pos->y;
    key.pos.z = pos->z;
    key.t = t;
    key.in.x = in->x;
    key.in.y = in->y;
    key.in.z = in->z;
    n = unkC;
    arr = unk14;
    idx = func_0015C260((float *)arr, n, t);
    for (i = n; i > idx; i++) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = key;
    unkC++;
}

int func_0015C530(float *base, float v, int hi, float **lo, float **up, float *t)
{
    int i = func_0015C260(base, hi, v);
    if (i != hi) {
        float *a = &base[i * 10];
        float *b = &base[(i - 1) * 10];
        *lo = b;
        *up = a;
        *t = (v - b[0]) / (a[0] - b[0]);
        return 1;
    }
    *lo = &base[(hi - 2) * 10];
    float *p = &base[(hi - 1) * 10];
    *up = p;
    *t = (v - p[0]) / (base[(i - 1) * 10] - base[(i - 2) * 10]);
    return 0;
}


