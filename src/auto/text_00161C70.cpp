/* 24 functions from 0x00161C70 to 0x00162B70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct C_00162720 {
    void func_00162720(undefined4 param_1);
};

struct C_001625D0 {
    int unk0;
    void func_001625D0(void);
};

void func_001E891B(void *p);

struct PositionElement {
    char pad[0x18];
    void func_0015B680();
};

struct LinearPositionController {
    void *func_001629A0(unsigned char flags);
};

extern int D_00287B94;
extern int D_002A8314;
extern int D_002ED708;
extern int D_002EEF28[];
extern float D_002ED710[];
extern float D_00287B6C;
extern float D_00275460;
extern float D_00275544;
extern float D_002755EC;
int func_00162020(float *a, float *b, int c);
int func_0014F6E0(void *a, void *b, void *c);
void func_001622C0(float *m, void *arg);

struct C_001625E0 {
    void *vtbl;
    void *func_001625E0(int flags);
};

struct C_00161F80 {
    void func_00161D90();
    float func_00161F80(float param);
};


float C_00161F80::func_00161F80(float param)
{
    int *p;
    float f;
    float a;
    float b;
    if (D_002A8314 != 0) {
        D_002A8314 = 0;
        func_00161D90();
    }
    p = &D_002ED708;
    *p = (int)(param + D_00287B6C);
    f = (param + D_00287B6C) - (float)D_002ED708;
    a = D_002ED710[D_002EEF28[D_002ED708 & 0xff]];
    b = D_002ED710[D_002EEF28[(D_002ED708 + 1) & 0xff]];
    return f * a + (D_002755EC - 2.0f * f) * f * f * ((f - 1.0f) * b - f * a);
}

int func_00162210(float *out, float *m)
{
    float det;
    float s;
    int i;
    det = m[0] * (m[5] * m[10] - m[6] * m[9]) - m[1] * (m[4] * m[10] - m[6] * m[8]) + m[2] * (m[4] * m[9] - m[5] * m[8]);
    if (det == 0.0f) {
        return 0;
    }
    func_00162020(out, m, 1);
    s = 1.0f / det;
    for (i = 0; i < 16; i++) {
        out[i] = out[i] * s;
    }
    return 1;
}

void func_001622C0(float *m, void *arg)
{
    float x, y;
    func_0014F6E0(arg, &y, &x);
    m[0] = x;
    m[4] = y;
    m[5] = x;
    m[1] = -y;
    m[8] = 0.0f;
    m[12] = 0.0f;
    m[9] = 0.0f;
    m[13] = 0.0f;
    m[2] = 0.0f;
    m[6] = 0.0f;
    m[10] = 1.0f;
    m[14] = 0.0f;
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[11] = 0.0f;
    m[15] = 1.0f;
}

void C_001625D0::func_001625D0(void) {
    extern int D_00287B94;
    int func_00157660(...);
    unk0 = (int)&D_00287B94;
    func_00157660();
}

void *C_001625E0::func_001625E0(int flags)
{
    int func_00157660(...);
    vtbl = (void *)&D_00287B94;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_00162720::func_00162720(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  *(undefined4 *)(in_ECX + 0x30) = 2;
  *(byte *)(in_ECX + 0x39) = *(byte *)(in_ECX + 0x39) | 1;
  return;
}

void *LinearPositionController::func_001629A0(unsigned char flags)
{
    if (flags & 2) {
        int count = ((int *)this)[-1];
        char *base = (char *)this - 4;
        PositionElement *p = (PositionElement *)((char *)this + count * 0x18);
        int n = count - 1;
        if (n >= 0) {
            int k = n + 1;
            do {
                p = (PositionElement *)((char *)p - 0x18);
                p->func_0015B680();
            } while (--k);
        }
        if (flags & 1)
            func_001E891B(base);
        return base;
    }
    ((PositionElement *)this)->func_0015B680();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

