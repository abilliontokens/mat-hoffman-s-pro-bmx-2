/* 7 functions from 0x000186F0 to 0x000195B0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
#include <string.h>
#include <xmmintrin.h>
struct ObjABA_186 { void func_0019ABA0(int a, int b); int func_00198330(char *s); };
struct Obj3C_186 { char pad0[4]; ObjABA_186 *f4; };
struct ObjC5_186 { ObjC5_186 *func_0016C5B0(int a); void func_0016C640(void *p, char *s, int a, int b); };
struct ObjCE_186 { ObjCE_186 *func_0016CE80(int a); void func_0016CF10(void *p, char *s, int a, int b); };
struct Obj20C_186 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(char *s, int a, int b, int c, int d);
    Obj20C_186 *func_001CF740(void *a, int b, int c);
};
struct ObjA0_186 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(void *p, void *a);
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32();
    ObjA0_186 *func_00158590(int a);
    void func_00133140(void *a, int b);
};
struct Elem_186 { ObjC5_186 *a; ObjCE_186 *b; char pad8[0x20]; };
struct G9120_186 { char pad0[0x348]; int f348; char pad34C[0x4A8 - 0x34C]; int *f4A8; int *f4AC; char pad4B0[0x4C0 - 0x4B0]; int f4C0; };
struct FB4_186 { char pad0[0xB4]; void *fB4; };
extern char D_002A48F8[];
extern char D_002A5348[];
extern char D_00275900[];
extern char D_002758F0[];
extern char D_002758E4[];
extern char D_002758D8[];
extern char D_002758CC[];
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
void *func_001E8AA5(unsigned int size);
template <class T> inline T min_186F0(T a, T b) { return a > b ? b : a; }
struct C_000186F0 {
    char pad0[0x3C];
    Obj3C_186 *f3C;
    char pad40[0x39C - 0x40];
    ObjA0_186 *f39C[2];
    Elem_186 f3A4[6];
    ObjCE_186 *f494;
    int f498;
    char pad49C[4];
    ObjA0_186 *f4A0;
    void **f4A4;
    Obj20C_186 *f4A8[2];
    Obj20C_186 *f4B0[2];
    Obj20C_186 *f4B8;
    Obj20C_186 *f4BC;
    Obj20C_186 *f4C0;
    char pad4C4[0x4E4 - 0x4C4];
    int f4e4;
    void func_001577A0(void *obj, int a);
    void func_00016E90();
    void func_000186F0(void *p);
};
struct C_0004AAD0 {
    void func_0004AAD0();
};

struct Vec4_00018D40 {
    float x, y, z, w;
    Vec4_00018D40() { x = y = z = 0; w = 1; }
};

struct C_00018D40Param {
    void func_00169710(void *a);
    int func_00168C20(void *a, int b, void *c);
    void func_00168CB0(void *a, void *b, void *c);
    int func_00168C50(void *a, float b, void *c);
};

struct C_00018D40Elem {
    float f0;
    Vec4_00018D40 f4;
};

extern char *D_002B9120;
extern char D_002A5EA0[], D_002A60B0[], D_002A45E0[], D_002A5870[], D_00275678[], D_002A5FA8[], D_002A47F0[];
extern char D_00275748[], D_00275940[], D_0027592C[], D_00275910[];
extern char *D_002B9120;
extern char D_002A5EA0[], D_002A60B0[], D_002A45E0[], D_002A5870[], D_00275678[], D_002A5FA8[], D_002A47F0[];
extern char D_00275748[], D_00275940[], D_0027592C[], D_00275910[];
extern char *D_002B9120;
extern char D_002A5EA0[], D_002A60B0[], D_002A45E0[], D_002A5870[], D_00275678[], D_002A5FA8[], D_002A47F0[];
extern char D_00275748[], D_00275940[], D_0027592C[], D_00275910[];
extern char D_00275984[];
extern char D_00275978[];
extern char D_00275968[];
extern char D_0027595C[];
extern char D_00275950[];
extern int D_00144CD0;
void *func_001E8A44(int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);

struct C_00018D40 {
    char pad0[0x49c];
    C_00018D40Elem *f49c;
    char pad4a0[0x4d8 - 0x4a0];
    int f4d8;
    void func_00018D40(C_00018D40Param *param);
};
struct C_00199B00 {
    void func_00199B00(float *out, int a);
};
struct S_000192D0_Dev {
    char pad0[4];
    C_00199B00 *f4;
};
struct S_000192D0_Ent {
    char pad0[0x1a4];
    S_000192D0_Dev *f1a4;
};
struct S_000192D0_Slot {
    char pad0[0x2c];
    S_000192D0_Ent *f2c;
};
extern float D_002A0718f[4];
extern float D_002757FC;
int __stdcall func_00017AD0(void *a, void *b, void *c, int d);
double __cdecl sqrt(double);
#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline void Sqrt_000192D0(float *d, float square) { _mm_store_ss(d, _mm_sqrt_ss(*(__m128 *)&square)); }
struct C_000192D0 {
    char pad0[0x398];
    S_000192D0_Slot *f398;
    char pad39c[0x49c - 0x39c];
    C_00018D40Elem *f49c;
    char pad4a0[0x4d8 - 0x4a0];
    int f4d8;
    int f4dc;
    int func_000192D0(int a, int b);
};
struct C_0001CE80 {
    void func_0001CE80(void *a, void *b, void *c, float d, float e);
};
struct S_002A8490 {
    char pad0[4];
    C_0001CE80 *f4;
    char pad8[0x230];
    u32 f238;
    char pad23c[0x68];
    C_0004AAD0 *f2a4;
};
extern S_002A8490 *D_002A8490;
extern int D_002A0718;
extern float D_002A071C, D_002A0720, D_002A0724;
struct S_00019520_Dev {
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
};
struct S_00019520_Obj {
    char pad0[0x24];
    S_00019520_Dev *f24;
};
struct C_0008AB90 {
    void func_0008AB90(int a);
};
struct S_00019520_Owner {
    char pad0[0x384];
    C_0008AB90 *f384;
    char pad388[8];
    int f390;
    char pad394[8];
    S_00019520_Obj *f39c[77];
    int f4d0;
    char pad4d4[8];
    int f4dc;
    char pad4e0[12];
    u32 f4ec;
    int f4f0;
    int func_000192D0(int a, int b);
};
struct V4_00018EB0 {
    float x, y, z, w;
};
struct C_00199600 {
    void func_00199600(V4_00018EB0 v);
    float func_00182530(float a);
};
struct S_00018EB0_Dev {
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
};
struct S_00018EB0_Obj {
    char pad0[0x24];
    S_00018EB0_Dev *f24, *f28, *f2c, *f30, *f34, *f38;
    char pad3c[0x9c - 0x3c];
    u8 f9c;
};
struct S_00018EB0_Slot {
    S_00018EB0_Dev *o;
    S_00018EB0_Dev *d;
    int f8, fc, f10;
    char pad14[0x28 - 0x14];
};
struct S_00018EB0_P {
    char pad0[4];
    C_00199600 *f4;
};

struct C_00018EB0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x38];
    S_00018EB0_P *f3c;
    char pad40[0x384 - 0x40];
    C_0008AB90 *f384;
    char pad388[4];
    int f38c;
    char pad390[0x39c - 0x390];
    S_00018EB0_Obj *f39c[2];
    S_00018EB0_Slot f3a4[6];
    S_00018EB0_Dev *f494;
    char pad498[0x4c4 - 0x498];
    float f4c4, f4c8;
    int f4cc;
    char pad4d0[4];
    int f4d4;
    char pad4d8[4];
    int f4dc, f4e0;
    char pad4e4[4];
    u32 f4e8, f4ec;
    int f4f0, f4f4;
    V4_00018EB0 f4f8;
    V4_00018EB0 f508;
    void func_00018EB0();
};
struct S_TikiObj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
};

/* AiTikiGod */
struct AiTikiGod {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    char pad4[0x380];
    C_0008AB90 *f384;
    char pad388[8];
    int f390;
    char pad394[0x4bc - 0x394];
    S_TikiObj *f4bc;
    char pad4c0[0x4d4 - 0x4c0];
    int f4d4;
    char pad4d8[4];
    int f4dc;
    char pad4e0[0x4f4 - 0x4e0];
    int f4f4;
    char pad4f8[0x508 - 0x4f8];
    char f508[4];
    char pad50c[0x76c - 0x50c];
    int f76c;
    void func_00019480();
};

struct TikiHuntState {
    char pad0[8];
    S_00019520_Owner *f8;
    u32 fC;
    u32 f10;
    void func_00019520();
};

extern float D_00275998, D_00275994, D_0027599C;
extern float D_002756B8, D_002756D0, D_002756E8, D_002756EC;
float func_0014F510(float x);
float func_0014F550(float x);
void __stdcall func_00017810(void *obj, float *pos);

/* wraps an angle into [-pi, pi] (func_00016D60, inlined) */
static __forceinline float wrap_angle_00016D60(float x)
{
    int n;
    int *p = &n;
    int *q = p;
    float t;
    float r;

    t = *(volatile float *)&x * D_002756EC;
    AsmFloatToInt(t, q);
    r = *(volatile float *)&x - (float)n * D_002756B8;
    if (r > D_002756D0) {
        r = r - D_002756B8;
    }
    if (r < D_002756E8) {
        r = r + D_002756B8;
    }
    return r;
}

struct S_00019070_Slot {
    char pad0[0xc];
    int fc;
    char pad10[0x28 - 0x10];
};

struct C_00019070 {
    char pad0[0x398];
    S_000192D0_Slot *f398;
    char pad39c[0x3a4 - 0x39c];
    S_00019070_Slot f3a4[6];
    void func_00019070();
};

void C_000186F0::func_000186F0(void *p)
{
    char bufC[0x104];
    char bufB[0x104];
    char bufA[0x104];

    f3C->f4->func_0019ABA0(((G9120_186 *)D_002B9120)->f4A8[((G9120_186 *)D_002B9120)->f348], 2);
    f498 = f3C->f4->func_00198330(D_00275748);
    {
        int len, lim, n;
        len = strlen(D_002A5EA0);
        lim = 0x103;
        n = AsmMinI(lim, len);
        func_001E8920(bufA, D_002A5EA0, n);
        bufA[n] = 0;
    }
    {
        int n, lim, len;
        len = strlen(D_002A60B0);
        lim = 0x103;
        n = AsmMinI(lim, len);
        func_001E8920(bufB, D_002A60B0, n);
        bufB[n] = 0;
    }
    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A45E0);
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    for (int off = 0; off < 0xF0; off += 0x28) {
        ObjC5_186 *q = (ObjC5_186 *)func_001E8A44(0x21C);
        ((Elem_186 *)((char *)this + 0x3A4 + off))->a = q ? q->func_0016C5B0(1) : 0;
        ((Elem_186 *)((char *)this + 0x3A4 + off))->a->func_0016C640(p, D_00275940, 0, 0);
        func_001577A0(((Elem_186 *)((char *)this + 0x3A4 + off))->a, 2);
        ObjCE_186 *r = (ObjCE_186 *)func_001E8A44(0x218);
        ((Elem_186 *)((char *)this + 0x3A4 + off))->b = r ? r->func_0016CE80(1) : 0;
        ((Elem_186 *)((char *)this + 0x3A4 + off))->b->func_0016CF10(p, D_0027592C, 0, 0);
        func_001577A0(((Elem_186 *)((char *)this + 0x3A4 + off))->b, 2);
    }
    ObjCE_186 *r = (ObjCE_186 *)func_001E8A44(0x218);
    f494 = r ? r->func_0016CE80(1) : 0;
    f494->func_0016CF10(p, D_00275910, 0, 0);
    func_001577A0(f494, 2);
    {
        int n, lim, len;
        len = strlen(bufA);
        lim = 0x103;
        n = AsmMinI(lim, len);
        func_001E8920(D_002A5EA0, bufA, n);
        D_002A5EA0[n] = 0;
    }
    {
        int n, lim, len;
        len = strlen(bufB);
        lim = 0x103;
        n = AsmMinI(lim, len);
        func_001E8920(D_002A60B0, bufB, n);
        D_002A60B0[n] = 0;
    }
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    {
        Obj20C_186 *q = (Obj20C_186 *)func_001E8A44(0x20C);
        f4B8 = q ? q->func_001CF740(((FB4_186 *)D_002A8490->f4)->fB4, ((G9120_186 *)D_002B9120)->f4C0, 1) : 0;
    }
    f4B8->v4(D_00275900, 1, 1, 0, 0);
    {
        Obj20C_186 *q = (Obj20C_186 *)func_001E8A44(0x20C);
        f4BC = q ? q->func_001CF740(((FB4_186 *)D_002A8490->f4)->fB4, ((G9120_186 *)D_002B9120)->f4C0, 1) : 0;
    }
    f4BC->v4(D_002758F0, 1, 1, 0, 0);
    {
        Obj20C_186 *q = (Obj20C_186 *)func_001E8A44(0x20C);
        f4C0 = q ? q->func_001CF740(((FB4_186 *)D_002A8490->f4)->fB4, ((G9120_186 *)D_002B9120)->f4C0, 1) : 0;
    }
    f4C0->v4(D_002758E4, 1, 1, 0, 0);
    {
        int cnt = 0;
        for (int off = 0x4A8; off < 0x4B0; off += 4) {
            cnt++;
            func_001ADCC0(bufC, 0x104, D_002758D8, cnt);
            Obj20C_186 *q = (Obj20C_186 *)func_001E8A44(0x20C);
            *(Obj20C_186 **)((char *)this + off) = q ? q->func_001CF740(((FB4_186 *)D_002A8490->f4)->fB4, ((G9120_186 *)D_002B9120)->f4C0, 1) : 0;
            (*(Obj20C_186 **)((char *)this + off))->v4(bufC, 1, 1, 0, 0);
        }
    }
    {
        int cnt = 0;
        for (int off = 0x4B0; off < 0x4B8; off += 4) {
            cnt++;
            func_001ADCC0(bufC, 0x104, D_002758CC, cnt);
            Obj20C_186 *q = (Obj20C_186 *)func_001E8A44(0x20C);
            *(Obj20C_186 **)((char *)this + off) = q ? q->func_001CF740(((FB4_186 *)D_002A8490->f4)->fB4, ((G9120_186 *)D_002B9120)->f4C0, 1) : 0;
            (*(Obj20C_186 **)((char *)this + off))->v4(bufC, 1, 1, 0, 0);
        }
    }
    for (int off = 0x39C; off < 0x3A4; off += 4) {
        ObjA0_186 *q = (ObjA0_186 *)func_001E8A44(0xA0);
        *(ObjA0_186 **)((char *)this + off) = q ? q->func_00158590(1) : 0;
        (*(ObjA0_186 **)((char *)this + off))->v27(p, (void *)((G9120_186 *)D_002B9120)->f4AC[((G9120_186 *)D_002B9120)->f348]);
        func_001577A0(*(ObjA0_186 **)((char *)this + off), -1);
    }
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
    f4A0->v32();
    f4A0->func_00133140((void *)((G9120_186 *)D_002B9120)->f4AC[0], 2);
    func_001577A0(f4A0, 2);
    f4e4 = 1;
    f4A4 = (void **)func_001E8AA5(f4e4 << 2);
    *f4A4 = f4A0;
    func_00016E90();
}

void C_00018D40::func_00018D40(C_00018D40Param *param)
{
    int count;
    int i;
    param->func_00169710(D_00275984);
    param->func_00168C20(D_00275978, 0, &count);
    f4d8 = count;
    if (count > 0) {
        Vec4_00018D40 v;
        char buf[0x40];
        float fval;
        int n = count;
        C_00018D40Elem *p = (C_00018D40Elem *)func_001E8A44(n * 0x14);
        if (p != 0) {
            func_00011FF0(p, 0x14, n, &D_00144CD0);
        } else {
            p = 0;
        }
        f49c = p;
        for (i = 0; i < f4d8; i++) {
            func_001ADCC0(buf, 0x40, D_00275968, i + 1);
            param->func_00169710(buf);
            func_001ADCC0(buf, 0x40, D_0027595C, i + 1);
            param->func_00168CB0(buf, &D_002A0718, &v);
            f49c[i].f4 = v;
            func_001ADCC0(buf, 0x40, D_00275950, i + 1);
            param->func_00168C50(buf, 8.0f, &fval);
            f49c[i].f0 = fval;
        }
    }
}

void C_00018EB0::func_00018EB0()
{
    int i;
    v6();
    f4f0 = 0;
    f4f4 = 0;
    f4d4 = 1000;
    f4c4 = 20.0f;
    f4dc = -1;
    f3c->f4->func_00199600(f4f8);
    f3c->f4->func_00182530(1.0f);
    f508 = f4f8;
    f4c8 = 180.0f;
    f4e0 = 0;
    f4cc = 0;
    f4e8 = D_002A8490->f238;
    f4ec = D_002A8490->f238 + 12000;
    f384->func_0008AB90(f38c);
    for (i = 0; i < 2; i++) {
        f39c[i]->f9c &= 0xfd;
        f39c[i]->f24->v31();
        f39c[i]->f28->v31();
        f39c[i]->f2c->v31();
        f39c[i]->f34->v31();
        f39c[i]->f38->v31();
        f39c[i]->f30->v31();
        f39c[i]->f30->v32();
        f39c[i]->f30->v4();
    }
    for (i = 0; i < 6; i++) {
        f3a4[i].fc = 0;
        f3a4[i].o->v31();
        f3a4[i].d->v31();
        f3a4[i].d->v32();
        f3a4[i].d->v4();
        f3a4[i].f8 = 0;
        f3a4[i].f10 = 0;
    }
    f494->v31();
    f494->v32();
    f494->v4();
}

void C_00019070::func_00019070()
{
    int n = 0;
    int angle, first, step;
    V4_00018EB0 pos;
    if (this->f3a4[0].fc == 0) n++;
    if (this->f3a4[1].fc == 0) n++;
    if (this->f3a4[2].fc == 0) n++;
    if (this->f3a4[3].fc == 0) n++;
    if (this->f3a4[4].fc == 0) n++;
    if (this->f3a4[5].fc == 0) n++;
    if (n > 1) {
        if (this->f398->f2c == 0) {
            *(int *)&pos.x = D_002A0718;
            *(volatile float *)&pos.y = D_002A071C;
            pos.z = D_002A0720;
            pos.w = D_002A0724;
        } else this->f398->f2c->f1a4->f4->func_00199B00(&pos.x, 0);
        step = 360 / (n - 1);
        pos.y = 500.0f;
        angle = 0;
        first = 1;
        for (int i = 0; i < 6; i++) {
            if (this->f3a4[i].fc != 1) {
                if (first == 1) {
                    first = 0;
                    func_00017810(&this->f3a4[i], &pos.x);
                    pos.x -= D_0027599C;
                    pos.z -= D_0027599C;
                } else {
                    float rad = angle * D_00275998;
                    float rad2 = rad;
                    pos.x = func_0014F510(wrap_angle_00016D60(rad)) * D_00275994 + pos.x;
                    pos.z = func_0014F550(wrap_angle_00016D60(rad2)) * D_00275994 + pos.z;
                    func_00017810(&this->f3a4[i], &pos.x);
                    angle += step;
                }
            }
        }
    }
}

extern "C" float __cdecl sqrtf(float);
#pragma intrinsic(sqrtf)
int C_000192D0::func_000192D0(int a, int b) {
    struct Vecs {
        float other[4];
        float pos[4];
        float out[4];
    } v;
    float d, bestd, sq;
    int best;
    v.out[0] = v.out[1] = v.out[2] = 0.0f;
    v.out[3] = 1.0f;
    if (!f398->f2c) {
        *(int *)&v.other[0] = D_002A0718;
        v.other[1] = D_002A071C;
        v.other[2] = D_002A0720;
        v.other[3] = D_002A0724;
    } else {
        f398->f2c->f1a4->f4->func_00199B00(v.other, 0);
    }
    bestd = 10000.0f;
    best = -1;
    for (int i = 0; i < f4d8; i++) {
        if (a == 1 && i == f4dc) continue;
        void *src = &f49c[i].f4;
        memcpy(v.pos, src, 16);
        v.pos[1] += D_002757FC;
        if (b == 0 && func_00017AD0(v.pos, v.other, v.out, 0)) continue;
        float x = v.other[0] - v.pos[0];
        float y = v.other[1] - v.pos[1];
        float z = v.other[2] - v.pos[2];
        sq = z * z + y * y + x * x;
        d = AsmSqrtF(sq);
        if (d < bestd && d > f49c[i].f0) { best = i; bestd = d; }
        int chk = b == 0;
    }
    return best == f4dc ? -1 : best;
}
void AiTikiGod::func_00019480()
{
    f4d4 = 0;
    f4f4 = 1;
    D_002A8490->f4->func_0001CE80(f4bc, f508, &D_002A0718, 10.0f, 1000.0f);
    f4bc->v5(4);
    f76c++;
    if (f4dc != 0) {
        f4dc = 0;
        f384->func_0008AB90(f390);
        return;
    }
    D_002A8490->f2a4->func_0004AAD0();
    v4();
}

void TikiHuntState::func_00019520()
{
    if (f8->f4f0 == 1 && D_002A8490->f238 > f8->f4ec) {
        int result = f8->func_000192D0(0, 0);
        if (result != -1) {
            f8->f4dc = result;
            f8->f384->func_0008AB90(f8->f390);
            f8->f4ec = D_002A8490->f238 + 12000;
        }
    }
    if (fC == 1 && f10 == 0) {
        f8->f39c[f8->f4d0]->f24->v31();
    }
}
