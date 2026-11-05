/* 20 functions from 0x0015B660 to 0x0015C640, found by Ghidra. */
#include "common.h"
extern int D_0028779C;
extern int D_00287778;
extern int D_002877C0;
extern int D_00287824;
extern int D_002877E4;
void func_001E8390(void *p);
void func_0001B2E0(void *p, int a);

extern int D_00287804;
extern int D_002877E4;

void func_0001B130(void *out, int a);
int func_0015C640(void *array, int count, int a);
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
    int a;
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
    void func_0015C5C0(int a0, int a1);
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
    char pad4[0xC];
};

int func_0015BF70(S_0015BF70_Node *arr, int n, float t);

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

struct C_0015BAC0 {
    char pad0[0x14];
    u32 *unk14;
    char pad18[0x8];
    void func_0015BAC0(int a0, u32 *a1, int a2);
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

void ByteAxisRotationController::func_0015B990()
{
    void *p = unk14;
    vtbl = &D_00287804;
    if (p)
        func_001E8390(p);
    vtbl = &D_002877E4;
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

int func_0015BF70(S_0015BF70_Node *arr, int n, float t)
{
    int hi, lo, mid;

    if (n == 0) {
        return 0;
    }
    if (t < arr[n - 1].f0) {
        if (t < arr[0].f0) {
            return 0;
        }
        lo = 0;
        hi = n;
        for (;;) {
            mid = (hi + lo) >> 1;
            if (t < arr[mid].f0) {
                if (t >= arr[mid - 1].f0) {
                    return mid;
                }
                hi = mid;
            } else {
                if (t < arr[mid + 1].f0) {
                    return mid + 1;
                }
                lo = mid;
            }
        }
    }
    return n;
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

int func_0015C260(float *base, int hi, float v)
{
    if (hi == 0)
        return 0;
    if (v < base[(hi - 1) * 10]) {
        if (v < base[0])
            return 0;
        int lo = 0;
        int mid;
        do {
            while (1) {
                mid = (hi + lo) >> 1;
                if (v < base[mid * 10])
                    break;
                lo = mid;
                if (v < base[mid * 10 + 10])
                    return mid + 1;
            }
            hi = mid;
        } while (v < base[mid * 10 - 10]);
        return mid;
    }
    return hi;
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
    *lo = &base[(hi - 1) * 10];
    *up = &base[(hi - 1) * 10];
    *t = (v - (*up)[0]) / (base[(i - 1) * 10] - base[(i - 2) * 10]);
    return 0;
}

