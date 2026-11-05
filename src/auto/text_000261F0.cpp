/* 20 functions from 0x000261F0 to 0x00026B60, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct C_00026290 {
    int unk0;
    void *func_00026290(int flags);
};

struct C_000261F0 {
    char pad0[4];
    float f4;
    char pad8[0x1C];
    float f24;
    float f28;
    void func_000261F0(float delta);
};

struct C_000262B0 {
    char pad0[0x18];
    float f18;
    float f1C;
    void func_000262B0(void);
};

int func_000262C0(float *a, float *b);

struct C_00026A70 {
    undefined4 func_00026A70(int param_1);
};

struct C_00026280 {
    char pad0[0x3C];
    int unk3C;
    void func_00026280(int a0);
};

struct C_00026270 {
    char pad0[0x30];
    int unk30;
    void func_00026270(int a0);
};

extern "C" int strcmp(const char *a, const char *b);
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
char *func_001E8BF0(char *dst, const char *src, int n);

struct S_000264C0_Mat {
    __m128 r0;
    __m128 r1;
    __m128 r2;
    __m128 r3;
};

struct C_000264C0 {
    S_000264C0_Mat mat;
    C_000264C0 *func_000264C0(S_000264C0_Mat *src);
};

struct S_00026500_Entry {
    char name[0x20];
    int value;
    char pad[0x2c];
};

struct S_000267F0_V4 {
    float x;
    float y;
    float z;
    float w;
};

extern float D_00276610;

struct C_000269B0 {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
    void func_000269B0(float a, float b, float c);
};

struct C_00026A10 {
    float f0;
    float f4;
    float f8;
    float func_00026A10(float a, float b);
};

static __forceinline float min_ss_00026A10(float a, float b)
{
    float r;
    _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&b), _mm_load_ss(&a)));
    return r;
}

struct C_00026500 {
    char pad0[0x2c];
    int count;
    int f30;
    char pad34[0x2c];
    S_00026500_Entry entries[1];
    int func_00026500(const char *name, int value);
};


void C_000261F0::func_000261F0(float delta)
{
    f4 += delta;
    _mm_store_ss(&f4, _mm_max_ss(_mm_set_ss(f4), _mm_set_ss(f24)));
    _mm_store_ss(&f4, _mm_min_ss(_mm_set_ss(f4), _mm_set_ss(f28)));
}

void C_00026270::func_00026270(int a0) {
    unk30 = a0;
}

void C_00026280::func_00026280(int a0) {
    unk3C = a0;
}

void *C_00026290::func_00026290(int flags) {
    extern int D_00276534;
    void func_001E891B(void *);
    unk0 = (int)&D_00276534;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_000262B0::func_000262B0(void) {
    *(volatile float *)&f18 = f1C;
}

int func_000262C0(float *a, float *b)
{
    if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2]) {
        return 1;
    }
    return 0;
}

undefined4 func_00026300(float *param_1, float *param_2)
{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 0;
  }
  return 1;
}

C_000264C0 *C_000264C0::func_000264C0(S_000264C0_Mat *src)
{
    __m128 r0 = src->r0;
    __m128 r1 = src->r1;
    __m128 r2 = src->r2;
    __m128 r3 = src->r3;

    mat.r0 = r0;
    mat.r1 = r1;
    mat.r2 = r2;
    mat.r3 = r3;
    return this;
}

int C_00026500::func_00026500(const char *name, int value)
{
    int i;
    for (i = 0; i < count; i++) {
        if (strcmp(entries[i].name, name) == 0) {
            f30 = i;
            return i;
        }
    }
    if (count >= 0x96) {
        return 0x95;
    }
    entries[i].value = value;
    func_001E8BF0(entries[count].name, name, 0x1f);
    f30 = count;
    count++;
    return count - 1;
}

S_000267F0_V4 func_000267F0(float *v, float *m)
{
    S_000267F0_V4 r;

    r.x = m[1] * v[1] + m[2] * v[2] + m[0] * v[0];
    r.y = m[5] * v[1] + m[4] * v[0] + m[6] * v[2];
    r.z = m[9] * v[1] + m[8] * v[0] + m[10] * v[2];
    r.w = 1.0f;
    return r;
}

S_000267F0_V4 func_00026880(float *v, float *m)
{
    S_000267F0_V4 r;

    r.x = m[8] * v[2] + m[4] * v[1] + m[0] * v[0];
    r.y = m[9] * v[2] + m[5] * v[1] + m[1] * v[0];
    r.z = m[10] * v[2] + m[6] * v[1] + m[2] * v[0];
    r.w = 1.0f;
    return r;
}

S_000267F0_V4 func_00026910(float *m, int col)
{
    S_000267F0_V4 r;

    r.x = m[col];
    r.y = m[col + 4];
    r.z = m[col + 8];
    r.w = 1.0f;
    return r;
}

void C_000269B0::func_000269B0(float a, float b, float c)
{
    if (a != D_00276610) {
        f0 = a;
    }
    if (b != D_00276610) {
        f4 = b;
        f8 = 1.0f;
    }
    if (c != D_00276610) {
        fC = c;
        f10 = -c;
    }
}

undefined4 C_00026A70::func_00026A70(int param_1)
{
  int in_ECX = (int)this;
  
  if ((*(int *)(in_ECX + 0x1d8) != 0) && (*(int *)(*(int *)(in_ECX + 0x1d8) + 0x68) == param_1)) {
    return 1;
  }
  return 0;
}

