/* 17 functions from 0x00167FE0 to 0x00168F40, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" unsigned int strlen(const char *s);
extern "C" char *strcpy(char *dst, const char *src);
extern "C" void *memset(void *dst, int c, unsigned int n);
#pragma intrinsic(memset)
#pragma intrinsic(strlen)
#pragma intrinsic(strcpy)
extern "C" int strcmp(const char *s1, const char *s2);
#pragma intrinsic(strcmp)

void func_000347F0(char *s);
int func_001EA426(const char *a, const char *b);
int func_001EA211(int c);
int func_001E91F4(const char *s);
double func_001E9649(const char *s);
void *func_001E8AA5(unsigned int size);
int func_001ADCC0(char *dst, int n, const char *fmt, ...);
int func_00168120(const char *s);
int __stdcall func_00168A10(int a, int *out);
int __stdcall func_00168550(int a, char *dst, int d);
int __stdcall func_00168550(void *a, char *dst, int d);
int __stdcall func_00168550(float a, char *dst, int d);
int __stdcall func_00168550(const char *a, char *dst, int d);
extern char D_00288004[];
extern char D_00288008[];
int func_001F6570(const char *a, const char *b, int n);
int func_001E9576(const char *s, char **end, int base);
extern char D_00288024[];
extern char D_00288020[];
extern char D_0028801C[];
extern char D_00288018[];
extern char D_00288014[];
extern char D_00288010[];
struct S_00168CB0_V3 { float x, y, z; };
static __forceinline float tokf_00168CB0(char *s, const char *delim);
extern char D_00275630[];
extern char D_002869B4[];
extern char D_002869B8[];
char *func_001E95A4(char *s, const char *delim);
static __forceinline float tokf_00168CB0(char *s, const char *delim)
{
    return (float)func_001E9649(func_001E95A4(s, delim));
}

extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
#pragma intrinsic(memcpy)
char *func_001E8920(char *dst, const char *src, int n);
extern char D_0028800C[];

/* 8-byte string tokenizer state (strtok-like) */
struct S_00168550_Tokenizer {
    double align;
    void Tokenizer_SetString(const char *str);
    char *func_001B4A70(const char *delims);
};

static __inline int Min_00168550(int a, int b) { return a > b ? b : a; }

struct C_001684B0 {
    char pad0[0x1c];
    int f1c;
    char **f20;
    void func_001684B0(void);
    void func_001684F0(int count);
};

struct C_00168B90 {
    int func_00168B90(void *a, float *out);
    int func_00168BE0(int a, const char *src, char *dst, int d);
};

struct C_00168280 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    char *f18;
    int f1c;
    char **f20;
    char f24;
    char pad25[0x3ff];
    int f424;
    int f428;
    int f42c;
    int f430;
    int f434;
    int f438[32];
    int f4b8;
    int f4bc;
    char *f4c0;
    int f4c4;
    char *f4c8;
    C_00168280 *func_00168280(void);
    int func_00168300(const char *name);
    int func_00168550(const char *name, char *dst, int size);
    int func_00168A10(const char *name, int *out);
    int func_00168B90(const char *name, float *out);
    int func_00168BE0(const char *name, const char *src, char *dst, int d);
    int func_00168C50(const char *name, float def, float *out);
    int func_00168CB0(const char *name, const float *def, float *out);
    int func_00168D70(const char *name, float *out, int count);
    int func_00168E70(const char *name, const int *def, int *out);
};


void func_00161910(float a, float *s, float *c);
void func_00161910(float a, float *c, float *s);
static __forceinline void rot_00167FE0(float *v, int i, int j, float s, float c)
{
    float t = c * v[i] - s * v[j];
    v[j] = s * v[i] + c * v[j];
    v[i] = t;
}

int func_00167FE0(float *f, float *u, float rx, float ry, float rz)
{
    float s, c, t;

    if (u == 0 || f == 0)
        return 0;
    u[0] = 0.0f;
    u[1] = 1.0f;
    u[2] = 0.0f;
    f[2] = 1.0f;
    f[0] = 0.0f;
    f[1] = 0.0f;

    func_00161910(rz, &c, &s);
    t = c * u[1] - s * u[0];
    u[0] = s * u[1] + c * u[0];
    u[1] = t;

    func_00161910(ry, &c, &s);
    t = c * u[1] + s * u[2];
    u[2] = c * u[2] - s * u[1];
    u[1] = t;
    t = s * f[2] + c * f[1];
    f[2] = c * f[2] - s * f[1];
    f[1] = t;

    func_00161910(rx, &c, &s);
    t = c * u[2] - s * u[0];
    u[0] = c * u[0] + s * u[2];
    u[2] = t;
    t = c * f[2] - s * f[0];
    f[0] = c * f[0] + s * f[2];
    f[2] = t;
    return 1;
}

int __stdcall func_00168550(int a, char *dst, int d);
int __stdcall func_00168550(void *a, char *dst, int d);

