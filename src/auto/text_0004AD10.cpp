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
struct __declspec(align(16)) Mtx {
    float m[16];
    void Identity() {
        __m128 z = _mm_setzero_ps();
        _mm_store_ps(&m[0], z);
        _mm_store_ps(&m[4], z);
        _mm_store_ps(&m[8], z);
        _mm_store_ps(&m[12], z);
        m[0] = m[5] = m[10] = m[15] = 1.0f;
    }
};
template <class T> inline const T &Min(const T &a, const T &b) { return a > b ? b : a; }

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
    char *func_00163A50(void *a0, char *a1);
    void func_001691E0();
    Obj *func_001CF740(int a0, int a1, int a2);
    void func_000951B0(int a0);
    void func_00095520(int a0);
    void func_001670C0(float a, int b, int c);
    void func_0019AC50();
};
typedef void (Obj::*ObjFn5)(void *, int, int, int, int);
union ObjFn5U { void *p; ObjFn5 f; };
#define VPAD4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
struct VGame {
    VPAD4(a) VPAD4(b) VPAD4(c) VPAD4(d) VPAD4(e) VPAD4(f) VPAD4(g) VPAD4(h)
    VPAD4(i) VPAD4(j) VPAD4(k) VPAD4(l) VPAD4(m) VPAD4(n) VPAD4(o) VPAD4(p)
    VPAD4(q) VPAD4(r) VPAD4(s) VPAD4(t) VPAD4(u) VPAD4(v) VPAD4(w) VPAD4(x)
    virtual Obj *Find(void *name);
};
struct VEnt {
    VPAD4(a)
    virtual void Activate();
};
struct VHud {
    VPAD4(a)
    virtual void Init(void *a0, int a1, int a2, int a3, int a4);
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

#define VP4B(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3();
struct V45Bmx {
    VP4B(a) VP4B(b) VP4B(c) VP4B(d) VP4B(e) VP4B(f) VP4B(g) VP4B(h)
    VP4B(i) VP4B(j) VP4B(k)
    virtual void v44();
};
struct V8Bmx {
    VP4B(a) VP4B(b)
};
struct V97Bmx {
    VP4B(a) VP4B(b) VP4B(c) VP4B(d) VP4B(e) VP4B(f) VP4B(g) VP4B(h)
    VP4B(i) VP4B(j) VP4B(k) VP4B(l) VP4B(m) VP4B(n) VP4B(o) VP4B(p)
    VP4B(q) VP4B(r) VP4B(s) VP4B(t) VP4B(u) VP4B(v) VP4B(w) VP4B(x)
    virtual void *y0(void *a);
};
struct S_4B760_Mgr {
    VP4B(a) VP4B(b) VP4B(c) VP4B(d) VP4B(e) VP4B(f) VP4B(g) VP4B(h)
    VP4B(i) VP4B(j) VP4B(k) VP4B(l) VP4B(m) VP4B(n) VP4B(o) VP4B(p)
    VP4B(q) VP4B(r) VP4B(s) VP4B(t) VP4B(u) VP4B(v) VP4B(w) VP4B(x)
    virtual void *y0(void *a);
    char pad184[0x524 - 0x184];
    void **f524;
    char pad528[0x560 - 0x528];
    int f560;
};
struct S_4B760_Item {
    char pad0[4];
    char *f4;
    char pad8[0x78];
    void **f80;
    float f84;
};
struct S_4B760_Global {
    char pad0[0x124];
    int f124;
    char pad128[0x1B8];
    int *f2E0;
};
struct BmxEventFPS {
    VP4B(a) VP4B(b) VP4B(c) VP4B(d) VP4B(e) VP4B(f) VP4B(g) VP4B(h)
    VP4B(i) VP4B(j) VP4B(k)
    virtual void v44();
    char padB4[0x114 - 0xB4];
    int f114;
    char pad118[0x168 - 0x118];
    char *f168;
    char pad16C[0x284 - 0x16C];
    char *f284;
    char pad288[0x2C4 - 0x288];
    float f2C4;
    char *f2C8;
    char *f2CC;
    char *f2D0;
    int f2D4;
    int f2D8;
    int f2DC;
    int f2E0;
    char *f2E4;
    char *f2E8;
    void func_00031260(float dt);
    void func_0004A360();
    void func_0004A590();
    void func_0004A6A0();
    void func_0004B760(float dt);
};
extern S_4B760_Global *D_002A8490;
extern S_4B760_Mgr *D_002B9120;
extern char D_00277140[];
extern float D_00275544;
int func_0005C0A0(void *a);
void func_001394F0(char *a, int b);
void func_001983A0(void *a);
void func_001670C0(char *a, float b, int c, int d);
void func_0019AC50(void *a);
void func_000788D0(void *a);


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

