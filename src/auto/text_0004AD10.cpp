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
#include "asm_helpers.h"
#define D9120 ((char *)D_002B9120)
#define D8490 ((char *)D_002A8490)
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
    char pad4[0x524 - 4];
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
    char pad4[0x114 - 4];
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
    int func_00031260(float dt);
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

struct C_4B760_A { int func_0005C0A0(); };
struct C_4B760_B { void func_001394F0(int b); };
struct C_4B760_C { void func_001983A0(); };
struct C_4B760_D { void func_000788D0(); };


extern Obj *D_002BEAAC;
extern Obj *D_002EF7D0;
extern char D_002A5FA8[], D_002A5870[], D_00275678[], D_002A60B0[], D_00276C58[], D_00277300[], D_002772E8[], D_002772D4[], D_002772CC[], D_002A5348[], D_00276C34[], D_002772A8[], D_00277298[], D_00277288[], D_00275630[], D_00277274[], D_00277268[], D_00277244[], D_002A48F8[], D_002A47F0[], D_00276C48[];
extern float D_00277318, D_00277314, D_00277310, D_002755E8;
extern int D_002A15B4, D_002A15B8, D_002A15BC;
/* V15B0: identity colour passed by value to func_00199600 */
/* helper probe */
extern Vec16 D_002A15B0;
extern char D_00049B50[];
void func_00049A50();
void func_00049A20();
float func_00011170(float *v);
int func_001ADCC0(char *buf, int n, const char *fmt, ...);
void *func_001E8A44(unsigned int n);
char *func_001E8920(char *d, const char *s, int n);
void C_0004AD10::func_0004AD10()
{
    int func_001E891B(...);
    char *volatile self = (char *)this;
    float v[4];
    int count;
    Mtx m;
    Mtx m2;
    char name[0x104];
    char path[0x104];
    char buf[0x104];
    char tmp[0x104];
    char saved[0x104];
    Obj *p;
    void *mem;
    int len;
    int max;
    int n;
    int i;

    p = ((VGame *)D9120)->Find(D_00277140);
    if (p) p->func_00198390();
    {
        int idx = *(int *)(*(char **)(D9120 + 0x4e4) + 0x5c4);
        char *t = **(char ***)(D9120 + 0x3b0);
        if (t && *(int *)(t + 0x24) >= idx) {
            char *e = *(char **)((*(char ***)(t + 0x28))[idx] + 8);
            if (e) {
                v[0] = *(float *)(e + 0x28) - D_00277318;
                *(volatile float *)&v[3] = 1.0f;
                v[1] = *(float *)(e + 0x2c) - D_00277314;
                v[2] = *(float *)(e + 0x30) - D_00277310;
                if (func_00011170(v) < D_002755E8) {
                    ((VEnt *)e)->Activate();
                }
            }
        }
    }
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    (*(Obj **)(self + 0x64))->func_000A2440();
    if (**(int **)(D8490 + 0x2e0) == 1) {
        mem = func_001E8A44(0x90);
        *(Obj **)(self + 0x2cc) = mem ? ((Obj *)mem)->func_00138800(0) : 0;
        (*(Obj **)(self + 0x2cc))->func_00139B50(D_002772E8, D_00277300, (Obj *)D9120, *(int *)((char *)this + 0x158), D_00276C58, *(int *)((char *)this + 0x44), *(int *)((char *)this + 0x24), *(int *)(D9120 + 0x488), *(int *)(D9120 + 0x4c0), 0, 0, -1, 0, 0, 0);
        (*(Obj **)(self + 0x2cc))->func_00139060((void *)func_00049A50, self);
        (*(Obj **)(self + 0x2cc))->func_00139080((void *)func_00049A20, self);
        func_001577A0(*(void **)(self + 0x2cc), -1);

        mem = func_001E8A44(0x90);
        *(Obj **)(self + 0x2d0) = mem ? ((Obj *)mem)->func_00138800(0) : 0;
        (*(Obj **)(self + 0x2d0))->func_00139B50(D_002772D4, D_00277300, (Obj *)D9120, *(int *)((char *)this + 0x158), D_00276C58, *(int *)((char *)this + 0x44), *(int *)((char *)this + 0x24), *(int *)(D9120 + 0x488), *(int *)(D9120 + 0x4c0), 0, 0, -1, 0, 0, 0);
        (*(Obj **)(self + 0x2d0))->func_00139060(D_00049B50, self);
        (*(Obj **)(self + 0x2d0))->func_00139080((void *)func_00049A20, self);
        func_001577A0(*(void **)(self + 0x2d0), -1);

        {
            Mtx *pm = &m;
            __m128 z = _mm_setzero_ps();
            _mm_store_ps(&pm->m[0], z);
            _mm_store_ps(&pm->m[4], z);
            _mm_store_ps(&pm->m[8], z);
            _mm_store_ps(&pm->m[12], z);
            pm->m[0] = 1.0f;
            pm->m[5] = 1.0f;
            pm->m[10] = 1.0f;
            pm->m[15] = 1.0f;
        }
        m2 = m;

        mem = func_001E8A44(0x10);
        *(Obj **)(self + 0x2e4) = mem ? ((Obj *)mem)->func_000A43E0() : 0;
        {
            char *prof = *(char **)(D8490 + 0x2e0);
            func_001ADCC0(name, 0x104, D_002772CC, prof + 0x150, *(int *)(prof + 0x1b0) + 1);
        }
        func_001ADCC0(path, 0x104, D_00276C34, D_002A5348, name);
        D_002BEAAC->func_0013D780(path, 0, 0, 0, 0, 0, 0, 0);
        (*(Obj **)(self + 0x2e4))->func_000A4150(name);
        ((Obj *)D9120)->func_000A0B80();
        D_002BEAAC->func_0013DFF0(path, 1);
        *(unsigned char *)(*(char **)(**(char ***)(self + 0x2e4) + 4) + 0x180) |= 8;
        *(unsigned char *)(*(char **)(**(char ***)(self + 0x2e4) + 4) + 0x180) |= 0x10;
        (**(Obj ***)(self + 0x2e4))->func_001646B0();
        (*(Obj **)(**(char ***)(self + 0x2e4) + 4))->func_00199BE0(&m2);
        (*(Obj **)(**(char ***)(self + 0x2e4) + 4))->func_00199600(D_002A15B0);
        (*(Obj **)(**(char ***)(self + 0x2e4) + 4))->func_0019ABA0(**(int **)(D9120 + 0x4a8), 2);
        (*(Obj **)(**(char ***)(self + 0x2e4) + 4))->func_00198390();
        *(int *)(**(char ***)(self + 0x2e4) + 0x10) = 1;
        {
            char *q = **(char ***)(self + 0x2e4);
            func_001577A0(q ? q + (*(int **)q)[1] : 0, -1);
        }

        mem = func_001E8A44(0x10);
        *(Obj **)(self + 0x2e8) = mem ? ((Obj *)mem)->func_000A43E0() : 0;
        len = strlen(*(char **)(D8490 + 0x2e0) + 0x1f4);
        max = 0x103;
        n = AsmMinI(max, len);
        func_001E8920(name, *(char **)(D8490 + 0x2e0) + 0x1f4, n);
        name[n] = 0;
        func_001ADCC0(path, 0x104, D_00276C34, D_002A5348, name);
        D_002BEAAC->func_0013D780(path, 0, 0, 0, 0, 0, 0, 0);
        (*(Obj **)(self + 0x2e8))->func_000A4400(name);
        ((Obj *)D9120)->func_000A0B80();
        D_002BEAAC->func_0013DFF0(path, 1);
        *(unsigned char *)(*(char **)(**(char ***)(self + 0x2e8) + 4) + 0x180) |= 8;
        *(unsigned char *)(*(char **)(**(char ***)(self + 0x2e8) + 4) + 0x180) |= 0x10;
        (**(Obj ***)(self + 0x2e8))->func_001646B0();
        (*(Obj **)(**(char ***)(self + 0x2e8) + 4))->func_00199BE0(&m2);
        (*(Obj **)(**(char ***)(self + 0x2e8) + 4))->func_00199600(D_002A15B0);
        (*(Obj **)(**(char ***)(self + 0x2e8) + 4))->func_0019ABA0(**(int **)(D9120 + 0x4a8), 2);
        (*(Obj **)(**(char ***)(self + 0x2e8) + 4))->func_00198390();
        *(int *)(**(char ***)(self + 0x2e8) + 0x10) = 1;
        {
            char *q = **(char ***)(self + 0x2e8);
            func_001577A0(q ? q + (*(int **)q)[1] : 0, -1);
        }

        mem = func_001E8A44(0x4cc);
        p = mem ? ((Obj *)mem)->func_00168280() : 0;
        if (p->func_00169490(D_002772A8, 0)) {
            p->func_00169710(D_00277298);
            p->func_00168C20(D_00277288, 0, &count);
            p->func_00168BE0(D_00277274, D_00275630, buf, 0x104);
            len = strlen(buf);
            max = 0x4f;
            n = AsmMinI(max, len);
            func_001E8920(**(char ***)(self + 0x2e4) + 0x190, buf, n);
            (**(char ***)(self + 0x2e4) + 0x190)[n] = 0;
            *(Obj **)(**(char ***)(self + 0x2e4) + 8) = p;
            for (i = 0; i < count; i++) {
                char *r;
                func_001ADCC0(tmp, 0x104, D_00277268, i + 1);
                r = D_002EF7D0->func_00163A50(**(void ***)(self + 0x2e4), tmp);
                if (r) (*(int *)(r + 0x40))++;
            }
        }
        if (p->func_00169490(D_00277244, 0)) {
            p->func_00169710(D_00277298);
            p->func_00168C20(D_00277288, 0, &count);
            p->func_00168BE0(D_00277274, D_00275630, buf, 0x104);
            len = strlen(buf);
            max = 0x4f;
            n = AsmMinI(max, len);
            func_001E8920(**(char ***)(self + 0x2e8) + 0x190, buf, n);
            (**(char ***)(self + 0x2e8) + 0x190)[n] = 0;
            *(Obj **)(**(char ***)(self + 0x2e8) + 8) = p;
            for (i = 0; i < count; i++) {
                char *r;
                func_001ADCC0(tmp, 0x104, D_00277268, i + 1);
                r = D_002EF7D0->func_00163A50(**(void ***)(self + 0x2e8), tmp);
                if (r) (*(int *)(r + 0x40))++;
            }
        }
        if (p) {
            p->func_001691E0();
            func_001E891B(p);
        }
    }
    len = strlen(D_002A48F8);
    max = 0x103;
    n = AsmMinI(max, len);
    func_001E8920(saved, D_002A48F8, n);
    saved[n] = 0;
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    mem = func_001E8A44(0x20c);
    *(Obj **)(self + 0x2c8) = mem ? ((Obj *)mem)->func_001CF740(*(int *)(*(char **)(D8490 + 4) + 0xb4), *(int *)(D9120 + 0x4c0), 1) : 0;
    {
        ObjFn5U u;
        u.p = (**(void ****)(self + 0x2c8))[4];
        ((*(Obj **)(self + 0x2c8))->*u.f)(D_00276C48, 1, 1, 0, 0);
    }
    len = strlen(saved);
    max = 0x103;
    n = AsmMinI(max, len);
    func_001E8920(D_002A48F8, saved, n);
    D_002A48F8[n] = 0;
    (*(Obj **)(*(char **)(D8490 + 0x2e0) + 0x2fc))->func_000951B0(0x13);
    (*(Obj **)(*(char **)(D8490 + 0x2e0) + 0x2fc))->func_00095520(0x13);
}

void BmxEventFPS::func_0004B760(float dt)
{
    int i;

    if (D_002A8490->f124 == 1) {
        func_00031260(dt);
        return;
    }
    if (*D_002A8490->f2E0 <= 1) {
        if (f2E0 == 1 && f2DC == 0 &&
            ((C_4B760_A *)*(void **)((char *)D_002A8490->f2E0 + 0x2c0))->func_0005C0A0() == 0) {
            func_0004A360();
            ((V45Bmx *)this)->i3();
            f2D4 = 1;
            f2DC = 1;
            ((V8Bmx *)f2CC)->b2();
            ((C_4B760_B *)f2CC)->func_001394F0(-1);
            f2E0 = 0;
            {
                Obj *r = (Obj *)D_002B9120->y0(D_00277140);
                if (r) ((C_4B760_C *)r)->func_001983A0();
            }
        }
        if (f2D4 == 1) {
            if (*(int *)(f2CC + 0x34) == 0) {
                ((Obj *)*(char **)f2E4)->func_001670C0(dt, 0, 0);
                ((Obj *)*(char **)(*(char **)f2E4 + 4))->func_0019AC50();
                ((Obj *)*(char **)f2E8)->func_001670C0(dt, 0, 0);
                ((Obj *)*(char **)(*(char **)f2E8 + 4))->func_0019AC50();
                goto L;
            }
            f2D4 = 0;
            ((V8Bmx *)f2CC)->b0();
            ((V45Bmx *)this)->g3();
            func_0004A590();
            ((V45Bmx *)this)->i2();
            ((V45Bmx *)this)->j3();
            func_00031260(0.0f);
            return;
        }
        if (f2D8 == 1) {
            if (*(int *)(f2D0 + 0x34) == 0) {
                ((Obj *)*(char **)f2E4)->func_001670C0(dt, 0, 0);
                ((Obj *)*(char **)(*(char **)f2E4 + 4))->func_0019AC50();
                goto L;
            }
            ((V8Bmx *)f2C8)->b1();
            f2D8 = 0;
            ((V8Bmx *)f2D0)->b0();
            ((V45Bmx *)this)->g3();
            func_0004A590();
            ((V45Bmx *)this)->i2();
            *(int *)(f284 + 0x60) = 200;
            ((C_4B760_D *)f168)->func_000788D0();
            D_002A8490->f124 = 1;
        }
    } else {
        if (f114 == 1)
            ((V45Bmx *)this)->j3();
    }
L:
    if (f2D4 == 0 && f2D8 == 0) {
        f2C4 += dt;
        for (i = 0; i < D_002B9120->f560; i++) {
            if (((S_4B760_Item *)D_002B9120->f524[i])->f84 > D_00275544) {
                ((S_4B760_Item *)D_002B9120->f524[i])->f84 -= dt;
                if (((S_4B760_Item *)D_002B9120->f524[i])->f84 < D_00275544) {
                    ((S_4B760_Item *)D_002B9120->f524[i])->f84 = 0;
                    ((V8Bmx *)((S_4B760_Item *)D_002B9120->f524[i])->f80)->b2();
                    ((C_4B760_C *)*(char **)(*(char **)(((S_4B760_Item *)D_002B9120->f524[i])->f4 + 0x1a4) + 4))->func_001983A0();
                    ((V8Bmx *)(*(char **)(((S_4B760_Item *)D_002B9120->f524[i])->f4 + 0x1a4) + *(int *)(*(char **)(*(char **)(((S_4B760_Item *)D_002B9120->f524[i])->f4 + 0x1a4)) + 4)))->b2();
                }
            }
        }
        if (*(int *)((char *)this + 0x90) > 1)
            func_0004A6A0();
    }
    func_00031260(dt);
}

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

