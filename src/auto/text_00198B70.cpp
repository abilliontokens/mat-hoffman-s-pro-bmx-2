/* 19 functions from 0x00198B70 to 0x00199B00, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

void func_001E891B(void *ptr);
void func_0011AC30(float *out, float *in);
void func_0011ACC0(void *a, void *b, float *m);

struct S_00198B70_MatCopy {
    void func_000264C0(void *m);
};

struct S_00198B70_Cam {
    void func_00193500(void);
    void func_00193870(void *a);
};

struct S_00198B70_V4 {
    int x;
    int y;
    int z;
    int w;
};

struct S_00198B70_Mat {
    float m[16];
};

struct S_00198B70_Bits {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b2 : 1;
    u8 b3 : 1;
    u8 b4 : 1;
    u8 b5 : 1;
    u8 b6 : 1;
    u8 b7 : 1;
};

struct S_00198B70_F4 {
    float x;
    float y;
    float z;
    float w;
};

struct C_00198B70 {
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
    virtual void v34(int a, void *b);
    char pad4[0x1d];
    u8 f21;
    char pad22[2];
    char f24;
    char pad25[2];
    union {
        u8 f27;
        S_00198B70_Bits f27b;
    };
    char pad28[0xb0 - 0x28];
    S_00198B70_Mat fB0;
    S_00198B70_Mat fF0;
    char pad130[0x150 - 0x130];
    S_00198B70_V4 f150;
    S_00198B70_V4 f160;
    C_00198B70 *f170;
    C_00198B70 *f174;
    C_00198B70 *f178;
    char pad17c[4];
    union {
        u8 f180;
        S_00198B70_Bits f180b;
    };
    char pad181[0x18c - 0x181];
    S_00198B70_Cam *f18c;
    void func_00197AA0(void);
    void func_001576D0(void);
    void func_00198EA0(void);
    void func_001995B0(float a, float b, float c);
    void func_00199600(float a, float b, float c, float d);
    void func_00198B70(S_00198B70_V4 *out0, S_00198B70_V4 *out1);
    void func_00198BE0(int a);
    void func_00198DE0(void);
    void func_00198E60(void);
    void func_001982F0(void);
    void func_00197B10(void);
    S_00198B70_F4 func_00198120(S_00198B70_F4 *p);
    void func_00199650(float *v);
    void func_00199900(float *v);
    void func_00199A70(C_00198B70 *other, S_00198B70_F4 *out);
};

void C_00198B70::func_00198B70(S_00198B70_V4 *out0, S_00198B70_V4 *out1)
{
    if ((f180 & 0x80) != 0) {
        if ((f180 & 8) == 0 && (f180 & 0x40) != 0) {
            func_00197AA0();
        } else {
            v31();
        }
    }
    if (out0 != 0) {
        *out0 = f150;
    }
    if (out1 != 0) {
        *out1 = f160;
    }
}

void C_00198B70::func_00198BE0(int a)
{
    f170 = 0;
    v34(a, this);
}

void C_00198B70::func_00198DE0(void)
{
    C_00198B70 * volatile self = this;
    S_00198B70_Mat * volatile p;
    S_00198B70_Mat *q;
    __m128 *v;
    unsigned int *iq;

    f180 &= 0xfe;
    p = &self->fB0;
    q = p;
    v = (__m128 *)q;
    iq = (unsigned int *)q;
    v[0] = _mm_setzero_ps();
    v[1] = _mm_setzero_ps();
    v[2] = _mm_setzero_ps();
    v[3] = _mm_setzero_ps();
    iq[0] = 0x3f800000;
    iq[5] = 0x3f800000;
    iq[10] = 0x3f800000;
    iq[15] = 0x3f800000;
    if (self->f178 != 0) {
        self->f178->v32();
    }
    if (self->f174 != 0) {
        self->f174->v32();
    }
}

void C_00198B70::func_00198E60(void)
{
    S_00198B70_Cam *p;

    if (f18c != 0) {
        f18c->func_00193870(&f24);
        p = f18c;
        if (p != 0) {
            p->func_00193500();
            func_001E891B(p);
        }
        f18c = 0;
    }
}

void C_00198B70::func_00198EA0(void)
{
    if ((f21 & 1) == 0) {
        f27b.b2 = f180b.b1;
    }
    func_001576D0();
}

void func_00198EF0(void *a, C_00198B70 *obj, void *c)
{
    __declspec(align(16)) float inv[16];

    if (obj->f170 != 0) {
        obj->f170->func_00197AA0();
        func_0011AC30(inv, obj->f170->fF0.m);
        func_0011ACC0(a, c, inv);
    } else {
        ((S_00198B70_MatCopy *)a)->func_000264C0(c);
    }
}

void C_00198B70::func_001995B0(float a, float b, float c)
{
    fB0.m[3] = a;
    fB0.m[7] = b;
    fB0.m[11] = c;
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00198B70::func_00199600(float a, float b, float c, float d)
{
    fB0.m[7] = b;
    fB0.m[3] = a;
    fB0.m[11] = c;
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00198B70::func_00199650(float *v)
{
    fB0.m[3] = v[0];
    fB0.m[7] = v[1];
    fB0.m[11] = v[2];
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00198B70::func_00199900(float *v)
{
    fB0.m[3] = v[0] + fB0.m[3];
    fB0.m[7] = v[1] + fB0.m[7];
    fB0.m[11] = v[2] + fB0.m[11];
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00198B70::func_00199A70(C_00198B70 *other, S_00198B70_F4 *out)
{
    if (other == this) {
        out->x = fB0.m[3];
        out->y = fB0.m[7];
        out->z = fB0.m[11];
        return;
    }
    func_00197AA0();
    out->x = fF0.m[3];
    out->y = fF0.m[7];
    out->z = fF0.m[11];
    if (other != 0) {
        *out = other->func_00198120(out);
    }
}

