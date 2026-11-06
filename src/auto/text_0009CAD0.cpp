/* 2 functions from 0x0009CAD0 to 0x0009DA90, found by Ghidra. */
#include "common.h"

extern float D_00275460;
extern float D_00275544;
extern float D_00275548;
extern char D_00277038;
extern char D_0027A9D8;
extern int D_002A8490;
#define I4(p, o) (*(int *)((char *)(p) + (o)))
#define F4(p, o) (*(float *)((char *)(p) + (o)))
#define P4(p, o) (*(char **)((char *)(p) + (o)))
#define B1(p, o) (*(unsigned char *)((char *)(p) + (o)))
int __fastcall func_000988B0(char *self, int unused, char *a, char *b);
void __fastcall func_00096FE0(char *self, int unused, float dt);
void __fastcall func_00083A70(char *self, int unused, const char *name);
void __fastcall func_00095D70(char *self, int unused);
void __fastcall func_00096450(char *self, int unused, int arg);
int __fastcall func_00098080(char *self, int unused, const char *name);
void __fastcall func_00096AB0(char *self, int unused);
int __fastcall func_00097CA0(char *self, int unused, const char *name);
int func_001EA426(const char *a, const char *b);
int func_001ADCC0(char *buf, int size, const char *fmt, int val);
int func_001AC330(char *out, char *a, char *b);
int func_00109370(void);
int __fastcall func_00109380(char *self, int unused, int arg);
int __fastcall func_00109390(char *self, int unused, int arg);
int __fastcall func_001093A0(char *self, int unused, int arg);

static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

void func_0009DA50(float *out, float *in, float s)
{
    s = D_00275460 / s;
    vec3_set(out, s * in[0], s * in[1], s * in[2]);
}
