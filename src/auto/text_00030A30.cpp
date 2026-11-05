/* 24 functions from 0x00030A30 to 0x000318A0, found by Ghidra. */
#include "common.h"
struct C_00030CD0 {
    char pad0[0x78];
    int unk78;
    void func_00030CD0(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00030F00 {
    void *vtbl;
    void *func_00030F00(unsigned int flags);
};

struct C_00030B20 {
    char pad0[0x170];
    float f170;
    float f174;
    float f178;
    char pad17c[0xBC];
    float f238;
    float f23c;
    float f240;
    void func_00030B20(float x, float y, float z, float w);
};


void func_00030A30(float *out, float x, float y, float z, float w, float *m)
{
    out[0] = x * m[0] + (y * m[4] + z * m[8]);
    out[1] = x * m[1] + (y * m[5] + z * m[9]);
    out[2] = x * m[2] + (y * m[6] + z * m[10]);
    out[3] = 1.0f;
}

void func_00030AC0(float *out, float *v, float *m)
{
    out[0] = v[0] * m[0] + v[1] * m[1] + v[2] * m[2] + v[3] * m[3];
    out[1] = v[0] * m[4] + v[1] * m[5] + v[2] * m[6] + v[3] * m[7];
    out[2] = v[0] * m[8] + v[1] * m[9] + v[2] * m[10] + v[3] * m[11];
    out[3] = 1.0f;
}

void C_00030B20::func_00030B20(float x, float y, float z, float w)
{
    f170 = x + f170;
    f174 = y + f174;
    f178 = z + f178;
    f238 = x + f238;
    f23c = y + f23c;
    f240 = z + f240;
}

void C_00030CD0::func_00030CD0(int a0) {
    unk78 = a0;
}

void *C_00030F00::func_00030F00(unsigned int flags)
{
    extern int D_00276A24;
    void func_001E891B(void *);

    vtbl = (void *)&D_00276A24;
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_00031400(void) {
    int func_001578D0(...);
    func_001578D0();
}

int func_00031410(void) {
    int func_00157960(...);
    func_00157960();
    return 1;
}

void func_00031420(void) {
    int func_001576D0(...);
    func_001576D0();
}

void func_00031630(void) {
    int func_000314F0(...);
    func_000314F0();
}

