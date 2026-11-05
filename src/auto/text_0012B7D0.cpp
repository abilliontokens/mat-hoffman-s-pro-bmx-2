/* 8 functions from 0x0012B7D0 to 0x0012C540, found by Ghidra. */
#include "common.h"

extern int D_00284194;
extern int D_002A3F00;
extern int D_002A3F04;
extern int D_002A3F08;
extern int D_002A3F0C;
extern float D_00275460;
extern float D_002755E8;
extern float D_002755EC;

void func_001E891B(void *p);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_0012B8F0 {
    void *vtbl;
    char pad4[0x20];
    char *f24;
    char *f28;
    char *f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int *f44;
    C_0012B8F0 *func_0012B8F0(void);
    void func_0012BF10(int idx, u32 *a, u32 *b, u32 *c, int *d);
    void func_0012C4E0(void);
};

C_0012B8F0 *C_0012B8F0::func_0012B8F0(void) {
    int *p;

    ((C_00157600 *)this)->func_00157600(1);
    vtbl = (void *)&D_00284194;
    p = &f30;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f24 = 0;
    f28 = 0;
    f2C = 0;
    f44 = 0;
    f40 = 0;
    p[0] = D_002A3F00;
    p[1] = D_002A3F04;
    p[2] = D_002A3F08;
    p[3] = D_002A3F0C;
    return this;
}

float func_0012BAE0(float t, float p0, float p1, float p2, float p3) {
    float t2;
    float t3;

    t2 = t * t;
    t3 = t * t2;
    return (t2 * D_002755EC - (t3 + t3)) * p2
         + (((t3 + t3) - t2 * D_002755EC) + D_00275460) * p1
         + (t3 - t2) * (p3 - p1) * D_002755E8
         + (p2 - p0) * D_002755E8 * ((t3 - (t2 + t2)) + t);
}

void C_0012B8F0::func_0012BF10(int idx, u32 *a, u32 *b, u32 *c, int *d) {
    u32 *s = (u32 *)(f2C + idx * 12);
    a[0] = s[0];
    a[1] = s[1];
    a[2] = s[2];
    a[3] = 0x3f800000;
    s = (u32 *)(f24 + idx * 12);
    b[0] = s[0];
    b[1] = s[1];
    b[2] = s[2];
    b[3] = 0x3f800000;
    s = (u32 *)(f28 + idx * 12);
    c[0] = s[0];
    c[1] = s[1];
    c[2] = s[2];
    c[3] = 0x3f800000;
    *d = f44[idx];
}

void C_0012B8F0::func_0012C4E0(void) {
    vtbl = (void *)&D_00284194;
    if (f24 != 0) {
        func_001E891B(f24);
    }
    if (f28 != 0) {
        func_001E891B(f28);
    }
    if (f2C != 0) {
        func_001E891B(f2C);
    }
    if (f44 != 0) {
        func_001E891B(f44);
    }
    ((C_00157660 *)this)->func_00157660();
}
