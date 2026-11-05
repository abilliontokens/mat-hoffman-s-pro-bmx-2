/* 19 functions from 0x00198B70 to 0x00199B00, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

void func_001E891B(void *ptr);

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
    char pad4[0x20];
    int f24;
    char pad28[0xb0 - 0x28];
    S_00198B70_Mat fB0;
    char pad_f0[0x150 - 0xf0];
    S_00198B70_V4 f150;
    S_00198B70_V4 f160;
    int f170;
    C_00198B70 *f174;
    C_00198B70 *f178;
    char pad17c[4];
    u8 f180;
    char pad181[0x18c - 0x181];
    S_00198B70_Cam *f18c;
    void func_00197AA0(void);
    void func_00198B70(S_00198B70_V4 *out0, S_00198B70_V4 *out1);
    void func_00198BE0(int a);
    void func_00198DE0(void);
    void func_00198E60(void);
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

