/* 4 functions from 0x0004AD10 to 0x0004BAF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_0027732C;

struct C_0004BAB0 {
    void *vtbl;
    char pad04[0x280];
    int unk284[8];
    void func_00030F90(int a0);
    void *func_0004BAB0(int param_1);
};

#include <xmmintrin.h>
#include <string.h>
struct Vec16 { int v[4]; };
struct __declspec(align(16)) Mtx { float m[16]; };
inline int Min(const int &a, const int &b) { return a > b ? b : a; }

struct Obj {
    void func_00198390();
    void func_000A2440();
    Obj *func_00138800(int a0);
    void func_00139B50(void *a0, void *a1, Obj *a2, int a3, void *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
    void func_00139060(void *fn, void *a1);
    void func_00139080(void *fn, void *a1);
    Obj *func_000A43E0();
    void func_0013D780(char *a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    void func_000A4150(char *a0);
    void func_000A4400(char *a0);
    void func_000A0B80();
    void func_0013DFF0(char *a0, int a1);
    void func_001646B0();
    void func_00199BE0(void *a0);
    void func_00199600(Vec16 a0);
    void func_0019ABA0(int a0, int a1);
    Obj *func_00168280();
    int func_00169490(void *a0, int a1);
    void func_00169710(void *a0);
    void func_00168C20(void *a0, int a1, void *a2);
    void func_00168BE0(void *a0, void *a1, char *a2, int a3);
};

typedef Obj *(Obj::*ObjFn1)(void *);
typedef void (Obj::*ObjFn0)();
union ObjFn1U { void *p; ObjFn1 f; };
union ObjFn0U { void *p; ObjFn0 f; };

struct C_0004AD10 {
    void func_0004AD10();
    void func_001577A0(void *a0, int a1);
};

struct C_0004BA90 {
    undefined4 func_0004BA90(byte param_1);
};


undefined4 C_0004BA90::func_0004BA90(byte param_1)
{
  int func_0004ACB0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0004ACB0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *C_0004BAB0::func_0004BAB0(int param_1) {
    int i;

    func_00030F90(param_1);
    vtbl = &D_0027732C;
    for (i = 0; i < 8; i++) {
        if (unk284[i] != 0) {
            unk284[i] = 0;
        }
    }
    return this;
}

