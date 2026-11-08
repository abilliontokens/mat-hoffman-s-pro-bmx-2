/* 16 functions from 0x001BB4F0 to 0x001BC310, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
struct C_001BC020 {
    undefined4 func_001BC020(byte param_1);
};

extern int D_0028D244;
extern int D_0028D2BC;

void func_001E891B(void *p);

struct S_1BB4F0_Arg1 {
    char pad0[0x64];
    int f64;
};

struct S_1BB4F0_Arg3 {
    char pad0[0xE0];
    int fE0;
    int fE4;
    int fE8;
    int fEC;
    int fF0[8];
    void (*f110)(S_1BB4F0_Arg1 *a, S_1BB4F0_Arg3 *b, int c, int d);
    int f114;
};

struct S_1BB4F0_Obj {
    char pad0[0x1E0];
    int f1E0;
    char pad1E4[0x680 - 0x1E4];
    int f680;
    char pad684[0x69C - 0x684];
    int f69C;
    char pad6A0[0x1178 - 0x6A0];
    int f1178;
};

struct S_1BB4F0_List {
    char pad0[0x24];
    int f24;
    char pad28[0x1A8 - 0x28];
    S_1BB4F0_Obj *f1A8[1];
};

struct S_1BB4F0_Sub64 {
    char pad0[0x4E0];
    S_1BB4F0_List *f4E0;
};

struct S_1BB4F0_Sub2A4 {
    char pad0[0x64];
    S_1BB4F0_Sub64 *f64;
};

struct S_1BB4F0_Sub2E0 {
    int f0;
    int f4;
};

struct S_1BB4F0_Global {
    char pad0[0x2A4];
    S_1BB4F0_Sub2A4 *f2A4;
    char pad2A8[0x2E0 - 0x2A8];
    S_1BB4F0_Sub2E0 *f2E0;
};

extern S_1BB4F0_Global *D_002A8490;

void func_001BB4F0(S_1BB4F0_Arg1 *a1, int a2, S_1BB4F0_Arg3 *a3, int idx);

struct V4_001BC040 {
    float x, y, z, w;
    V4_001BC040() {}
    V4_001BC040(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct C_001BC040;

struct Base_001BC040 {
    char pad0[0x60];
    C_001BC040 *f60;
    char pad64[4];
    int f68;
    char pad6C[0x34];
    void *fA0;
    void func_00129920(int a);
    void func_00133570(int a);
};

struct ObjA_001BC040 : Base_001BC040 {
    ObjA_001BC040 *func_001A4A50(int a);
    void func_001A57E0(V4_001BC040 v, float e, int z);
    void func_001A52C0(void);
};

struct ObjB_001BC040 : Base_001BC040 {
    ObjB_001BC040 *func_00129840(int a);
    void func_00129930(V4_001BC040 a, V4_001BC040 b);
    void func_00129E10(void);
};

extern int D_002BA154;
void *func_001E8A44(int size);

struct C_001BC040 {
    char pad0[0x24];
    V4_001BC040 f24;
    V4_001BC040 f34;
    char pad44[0xC];
    char f50[0x40];
    int f90;
    int f94;
    int f98;
    int *f9C;
    char padA0[0x14];
    int *fB4;
    int *fB8;
    int *fBC;
    int *fC0;
    int *fC4;
    int *fC8;
    int *fCC;
    char padD0[0x210];
    float f2E0;
    Base_001BC040 *f2E4;
    void func_001D3F50(void);
    void func_001577A0(Base_001BC040 *p, int n);
    C_001BC040 *func_001BC040(V4_001BC040 a, V4_001BC040 b, V4_001BC040 c, V4_001BC040 d, float e, int n, int p90, int *p9c);
};

struct C_001BB5F0 {
    void *vtbl;
    void func_00157660();
    void *func_001BB5F0(unsigned int flags);
};

extern int D_002AADF8;

struct Vec_001BB950 {
    float x, y, z, w;
};

struct Anim_001BB950 {
    char pad4[0x4C];
    int f50;
    void func_001A4AE0(Vec_001BB950 *a, int *b);
    void func_001A52C0(void);
    void func_00133210(void);
    void func_001299C0(int a, Vec_001BB950 *b);
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(void *p);
};

struct C_001BB950 {
    char pad0[0x24];
    Vec_001BB950 f24;
    Vec_001BB950 f34;
    char pad44[0xC];
    char f50[0x290];
    int f2E0;
    Anim_001BB950 *f2E4;
    int func_001BB950(Vec_001BB950 *a, Vec_001BB950 *b, int c, int d, float e);
};

extern const float D_00275544, D_002AAE04, D_002AAE08, D_002AAE0C;
void __cdecl func_000265C0(void *a, Vec_001BB950 *b, void *c, void *d, int e, int f);

int func_00011260(int lo, int hi);
int func_00135C70(int param_1, int param_2, int *param_3, int param_4);

extern float D_002AAE10;

/* position vector, built z, y, x, w */
struct V4_001BB680 {
    float x, y, z, w;
    void Init() volatile
    {
        *(volatile int *)&z = 0;
        *(volatile int *)&y = 0;
        *(volatile int *)&x = 0;
        *(volatile int *)&w = 0x3f800000;
    }
    void Set(const float &a, const float &b, const float &c, const float &d) volatile
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

/* direction vector, built w, z, y, x */
struct V4b_001BB680 {
    float x, y, z, w;
    void Init() volatile
    {
        *(volatile int *)&w = 0x3f800000;
        *(volatile int *)&z = 0;
        *(volatile int *)&y = 0;
        *(volatile int *)&x = 0;
    }
};

/* 4x4 float matrix, 16-byte aligned for movaps */
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
__declspec(align(16)) struct S_001BB680_Mat {
    float m[16];
    __forceinline void identity(int one = 0x3f800000)
    {
        __m128 z = _mm_setzero_ps();

        ((__m128 *)m)[0] = z;
        ((__m128 *)m)[1] = z;
        ((__m128 *)m)[2] = z;
        ((__m128 *)m)[3] = z;
        _ReadWriteBarrier();
        *(int *)&m[0] = one;
        *(int *)&m[5] = one;
        *(int *)&m[10] = one;
        *(int *)&m[15] = one;
    }
};

struct C_000264C0 {
    void func_000264C0(void *param);
};

struct C_00157600 {
    void func_00157600(int a);
};

struct C_001BBAA0 {
    void *vtbl;
    char pad4[0x1D];
    u8 unk21;                         /* 0x21 */
    char pad22[2];
    V4_001BB680 f24;
    V4b_001BB680 f34;
    char pad44[0xC];
    char f50[0x40];
    int unk90;                        /* 0x90 */
    int unk94;                        /* 0x94 */
    int unk98;                        /* 0x98 */
    int *unk9C;                       /* 0x9C */
    int unkA0[5];                     /* 0xA0 */
    void **unkB4;                     /* 0xB4 */
    void **unkB8;                     /* 0xB8 */
    int *unkBC;
    int *unkC0;
    float *unkC4;
    float *unkC8;
    int *unkCC;
    int unkD0;                        /* 0xD0 */
    char padD4[0x208];
    int unk2DC;
    int unk2E0;
    struct S_001BBE20_2E4 *unk2E4;
    int unk2E8;
    u8 unk2EC;                        /* 0x2EC */
    C_001BBAA0 *func_001BB680(int a);
    void func_001BBA60(void);
    __declspec(noinline) void func_001BBAA0(void *a, void *b);
    void func_001BBE20(int a);
};

struct S_001BBE20_2E4 {
    char pad0[0x84];
    int *unk84;
    int unk88;
    void func_00133580(int a);
};

struct S_001BBDD0_2E4 {
    char pad0[0xA6];
    u8 unkA6;
};

struct C_001BBDD0 {
    char pad0[0x2E4];
    S_001BBDD0_2E4 *unk2E4;           /* 0x2E4 */
    int func_00157BF0(int *a, int b);
    void func_001BBDD0(int *a, int b);
};

struct S_001BBF90_Arg {
    char pad0[0x60];
    C_001BBAA0 *unk60;
};

struct C_001BB620 {
    char pad0[0xe8];
    int unkE8;
    int unkEC;
    char padF0[0x20];
    int unk110;
    int unk114;
    void func_001D3F50();
    void func_001BB620(void *a1, void *a2, int a3, int a4);
};

struct C_001BB860 {
    void *vtbl;
    char pad4[0xb0];
    void *unkB4;
    void *unkB8;
    void *unkBC;
    void *unkC0;
    void *unkC4;
    void *unkC8;
    void *unkCC;
    void func_00157660();
    void func_001BB860();
};

struct C_001334E0 {
    void func_001334E0(int a);
    void func_001334F0(void *a);
};

struct C_001BB900 {
    char pad0[0x2e4];
    void *unk2e4;
    int func_001BB900(void *a1);
};

__declspec(align(16)) struct S_001BBAE0_Mat {
    __m128 r0;
    __m128 r1;
    __m128 r2;
    __m128 r3;
};

S_001BBAE0_Mat func_000263B0(void *a, void *b);

static __inline void CopyMat_001BBAE0(S_001BBAE0_Mat *src, S_001BBAE0_Mat *dst)
{
    __m128 *s = (__m128 *)src;
    __m128 *d = (__m128 *)dst;
    __m128 r0 = s[0];
    __m128 r1 = s[1];
    __m128 r2 = s[2];
    __m128 r3 = s[3];

    d[0] = r0;
    d[1] = r1;
    d[2] = r2;
    d[3] = r3;
}

struct C_001BBAE0_Copy {
    S_001BBAE0_Mat mat;
    void Load(S_001BBAE0_Mat *src)
    {
        __m128 r0 = src->r0;
        __m128 r1 = src->r1;
        __m128 r2 = src->r2;
        __m128 r3 = src->r3;

        mat.r0 = r0;
        mat.r1 = r1;
        mat.r2 = r2;
        mat.r3 = r3;
    }
};

struct C_001BBAE0_2DC {
    void func_00197EA0(S_001BBAE0_Mat *dst);
};

struct C_001BBAE0_2E4 {
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
    virtual void v31(S_001BBAE0_Mat *m);
    void func_00133140(int a, int b);
};

struct C_001BBAE0 {
    char pad0[0x2DC];
    C_001BBAE0_2DC *unk2DC;
    char pad2E0[4];
    C_001BBAE0_2E4 *unk2E4;
    void func_001BBAE0(int a);
};

struct S_001BBBE0_2E4 {
    char pad0[0x50];
    int unk50;
    char pad54[0x30];
    S_001BBBE0_2E4 **unk84;
    int unk88;
    void func_00133EF0(S_001BBAE0_Mat *m);
    void func_00133ED0(void);
    int func_001A4B60(S_001BBBE0_2E4 *p);
    int func_00129A10(S_001BBBE0_2E4 *p);
    void func_00133620(S_001BBBE0_2E4 *p);
};

typedef void (*Cb_001BBBE0)(void *a, void *b, void *c, int d);

struct C_001BBBE0 {
    char pad0[0x50];
    S_001BBAE0_Mat unk50;
    char pad90[0x8];
    int unk98;
    char pad9C[0x18];
    void **unkB4;
    Cb_001BBBE0 *unkB8;
    char padBC[0xC];
    float *unkC8;
    void **unkCC;
    char padD0[0x20C];
    char *unk2DC;
    int unk2E0;
    S_001BBBE0_2E4 *unk2E4;
    int unk2E8;
    u8 unk2EC;
    void func_00157A00(float a);
    void func_001BBBE0(float a);
};

void func_001BB4F0(S_1BB4F0_Arg1 *a1, int a2, S_1BB4F0_Arg3 *a3, int enable)
{
    S_1BB4F0_List *list;
    S_1BB4F0_Obj *obj;
    S_1BB4F0_Obj **pp;
    int found;
    int idx;
    int i;
    int key;
    int n;

    if (enable == 0) {
        return;
    }
    if (D_002A8490->f2E0->f4 == 10) {
        return;
    }
    key = a1->f64;
    list = D_002A8490->f2A4->f64->f4E0;
    n = list->f24;
    found = 0;
    pp = list->f1A8;
    for (i = 0; i < n; i++, pp++) {
        if (found) {
            break;
        }
        obj = *pp;
        if (obj->f1E0 == key) {
            found = 1;
            idx = i;
        }
    }
    if (!found) {
        return;
    }
    if (a3->fE4 == 2) {
        if (obj->f680 == 0) {
            return;
        }
    } else if (a3->fE4 == 3) {
        if (obj->f69C == 0) {
            return;
        }
    } else if (a3->fE4 == 0) {
        if (obj->f1178 != 0) {
            return;
        }
    }
    if (a3->fF0[idx] != 0) {
        if (a3->fF0[idx] != a2) {
            a3->f110(a1, a3, a3->f114, 1);
            a3->fE0 = 1;
        }
    } else {
        a3->fF0[idx] = a2;
    }
}

void *C_001BB5F0::func_001BB5F0(unsigned int flags)
{
    vtbl = &D_0028D244;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001BB620::func_001BB620(void *a1, void *a2, int a3, int a4)
{
    unkE8 = (int)a1;
    unkEC = (int)a2;
    ((C_001BBAA0 *)a1)->func_001BBAA0(this, (void *)&func_001BB4F0);
    ((C_001BBAA0 *)unkEC)->func_001BBAA0(this, (void *)&func_001BB4F0);
    unk110 = a3;
    unk114 = a4;
    func_001D3F50();
}

C_001BBAA0 *C_001BBAA0::func_001BB680(int a)
{
    C_001BBAA0 * volatile self = this;
    S_001BB680_Mat m;
    S_001BB680_Mat copy;
    S_001BB680_Mat * volatile p;
    int i;

    ((C_00157600 *)this)->func_00157600(a);
    self->vtbl = &D_0028D2BC;
    self->f24.Init();
    self->f34.Init();
    self->unk2EC |= 1;
    self->unk2EC |= 2;
    self->unk2EC |= 4;
    *(volatile int *)&self->unkB4 = 0;
    *(volatile int *)&self->unkB8 = 0;
    *(volatile int *)&self->unk2DC = 0;
    *(volatile int *)&self->unkBC = 0;
    *(volatile int *)&self->unkC0 = 0;
    *(volatile int *)&self->unkC4 = 0;
    *(volatile int *)&self->unkC8 = 0;
    self->unk2EC &= 0xf7;
    self->unk2EC &= 0xef;
    self->unk2EC &= 0xdf;
    self->unk2EC &= 0xbf;
    self->unk90 = 100;
    {
        volatile int *q = (volatile int *)&self->f24;
        q[0] = *(int *)&D_002AAE04;
        q[1] = *(int *)&D_002AAE08;
        q[2] = *(int *)&D_002AAE0C;
        q[3] = *(int *)&D_002AAE10;
    }
    *(volatile int *)&self->unk2E0 = 0;
    p = &m;
    p->identity();
    copy = m;
    ((C_000264C0 *)((char *)self + 0x50))->func_000264C0(&copy);
    *(volatile int *)&self->unk94 = 0;
    *(volatile int *)&self->unk98 = 0;
    *(volatile int *)&self->unk2E8 = 0;
    *(volatile int *)&self->unk9C = 0;
    *(volatile int *)&self->unkD0 = 0;
    for (i = 0xa0; i < 0xb4; i += 4) {
        *(int *)((char *)self + i) = 0xbf800000;
    }
    return self;
}

void C_001BB860::func_001BB860()
{
    vtbl = &D_0028D2BC;
    if (unkB4) func_001E891B(unkB4);
    if (unkB8) func_001E891B(unkB8);
    if (unkBC) func_001E891B(unkBC);
    if (unkC0) func_001E891B(unkC0);
    if (unkC8) func_001E891B(unkC8);
    if (unkC4) func_001E891B(unkC4);
    if (unkCC) func_001E891B(unkCC);
    func_00157660();
}

int C_001BB900::func_001BB900(void *a1)
{
    if (a1) {
        ((C_001334E0 *)unk2e4)->func_001334E0(1);
        ((C_001334E0 *)unk2e4)->func_001334F0(a1);
        ((C_001334E0 *)a1)->func_001334F0(unk2e4);
        return 1;
    }
    return 0;
}

int C_001BB950::func_001BB950(Vec_001BB950 *a, Vec_001BB950 *b, int c, int d, float e)
{
    Vec_001BB950 *pb;
    float ev = e;
    f24 = *a;
    pb = &f34;
    *pb = *b;
    f2E0 = *(int *)&e;
    if (ev > 0.0f) {
        Anim_001BB950 *p = f2E4;
        if (p->f50 == 5) {
            p->func_001A4AE0(a, &f2E0);
            p->func_001A52C0();
            p->func_00133210();
            return 1;
        }
    }
    if (pb->x != D_002AAE04 || pb->y != D_002AAE08 || pb->z != D_002AAE0C) {
        Anim_001BB950 *p = f2E4;
        if (p->f50 == 6) {
            p->func_001299C0(0, b);
            func_000265C0(f50, a, (void *)c, (void *)d, 0, 1);
            p->v31(f50);
            p->func_00133210();
        }
    }
    return 1;
}

void C_001BBAA0::func_001BBA60(void)
{
    int i;
    if (unk9C != 0) {
        for (i = 0; i < 5; i++) {
            if (unkA0[i] == -1082130432) {
                unkA0[i] = *unk9C;
                return;
            }
        }
    }
}

void C_001BBAA0::func_001BBAA0(void *a, void *b)
{
    if (unk98 < unk94) {
        unkB4[unk98] = a;
        unkB8[unk98] = b;
        unk98++;
    }
}

void func_000263B0(void *out, void *a, void *b);
void C_001BBAE0::func_001BBAE0(int a)
{
    if (unk2DC != 0) {
        S_001BBAE0_Mat m[3];

        unk2DC->func_00197EA0(&m[0]);
        func_000263B0(&m[2], (char *)this + 0x50, &m[0]);
        m[1] = m[2];
        S_001BBAE0_Mat *st = &m[1];
        AsmCopyMatrix(&m[0], st);
        unk2E4->v31(&m[0]);
        unk2E4->func_00133140(a, 2);
    } else {
        unk2E4->v31((S_001BBAE0_Mat *)((char *)this + 0x50));
        unk2E4->func_00133140(a, 1);
    }
}

S_001BBAE0_Mat *func_000263B0(S_001BBAE0_Mat *out, void *a, void *b);
void C_001BBBE0::func_001BBBE0(float a)
{
    int i;
    int j;
    void *saved;

    unk2EC = (unk2EC & 0x9f) | ((unk2EC & 0x20) << 1);
    if (unk2DC != 0) {
        S_001BBAE0_Mat m;
        func_000263B0(&m, &unk50, unk2DC + 0xf0);
        unk2E4->func_00133EF0(&m);
    }
    for (i = 0; i < unk2E4->unk88; i++) {
        if (unk2E4->unk84[i] == 0) continue;
        unk2E4->unk84[i]->func_00133ED0();
        int r;
        if (unk2E4->unk50 == 5)
            r = unk2E4->func_001A4B60(unk2E4->unk84[i]);
        else
            r = unk2E4->func_00129A10(unk2E4->unk84[i]);
        if (r != 0) continue;
        saved = unk2E4->unk84[i];
        unk2E4->unk84[i]->func_00133620(unk2E4);
        unk2E4->func_00133620(unk2E4->unk84[i]);
        unk2E4->unk84[i] = 0;
        if (unk2EC & 1) {
            for (j = 0; j < unk98; j++) {
                unkB8[j](saved, this, unkB4[j], 0);
            }
        }
    }
    for (j = 0; j < unk98; j++) {
        if (unkC8[j] > D_00275544) {
            unkC8[j] -= a;
            if (unkC8[j] <= D_00275544) {
                unkC8[j] = 0;
                unkB8[j](unkCC[j], this, unkB4[j], 1);
            }
        }
    }
    func_00157A00(a);
}

void C_001BBDD0::func_001BBDD0(int *a, int b)
{
    if (func_00135C70(0x14, 0, a, 0x80) != 0 && unk2E4 != 0) {
        unk2E4->unkA6 = unk2E4->unkA6 == 0;
    }
    func_00157BF0(a, b);
}

void C_001BBAA0::func_001BBE20(int a)
{
    int i;
    int *p0;
    unk2E8 = a;
    for (i = 0; i < unk2E4->unk88; i++) {
        if (unk2E4->unk84[i] == a) return;
    }
    if (unk2EC & 2) {
        for (i = 0; i < unk98; i++) {
            int x = unkBC[i];
            if (x == -1 && unkC0[i] == x) {
                if (unkC4[i] > D_00275544) {
                    unkCC[i] = a;
                    int value = ((int *)unkC4)[i];
                    ((int *)unkC8)[i] = value;
                } else {
                    ((void (*)(int, void *, void *, int))unkB8[i])(a, this, unkB4[i], 1);
                }
            } else if (x == unkD0 || ((p0 = *(int * volatile *)&unkC0)[i] != -1 && unkD0 > p0[i])) {
                if (unkC4[i] > D_00275544) {
                    unkCC[i] = a;
                    ((int *)unkC8)[i] = ((volatile int *)unkC4)[i];
                } else {
                    ((void (*)(int, void *, void *, int))unkB8[i])(a, this, unkB4[i], 1);
                }
            }
        }
    }
    if (unk2EC & 4) {
        unk2E4->func_00133580(a);
        ((S_001BBE20_2E4 *)a)->func_00133580((int)unk2E4);
    }
}

void func_001BBF90(S_001BBF90_Arg *a, int b)
{
    C_001BBAA0 *p;
    if (D_002AADF8 != 0) {
        p = a->unk60;
        if (p->unk21 & 1) {
            p->unk2EC |= 0x20;
            if ((!(p->unk2EC & 8) || !(p->unk2EC & 0x10)) &&
                (p->unk90 == 100 || (!(p->unk2EC & 0x40) && func_00011260(1, 100) <= p->unk90))) {
                p->unk2EC |= 0x10;
                p->unkD0++;
                p->func_001BBE20(b);
                p->func_001BBA60();
            }
        }
    }
}

undefined4 C_001BC020::func_001BC020(byte param_1)
{
  int func_001BB860(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001BB860();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001BC040 *C_001BC040::func_001BC040(V4_001BC040 a, V4_001BC040 b, V4_001BC040 c, V4_001BC040 d, float e, int n, int p90, int *p9c)
{
    int i;
    V4_001BC040 *pb;

    func_001D3F50();
    f24 = a;
    pb = &f34;
    *pb = b;
    f2E0 = e;
    f90 = p90;
    if (p9c != 0) {
        f9C = p9c;
    }
    if (e > D_00275544) {
        void *mem = func_001E8A44(0x120);
        ObjA_001BC040 *o = mem ? ((ObjA_001BC040 *)mem)->func_001A4A50(1) : 0;
        o->func_00129920(7);
        o->func_001A57E0(f24, f2E0, 0);
        o->func_001A52C0();
        f2E4 = o;
    } else if (pb->x != D_002AAE04 || pb->y != D_002AAE08 || pb->z != D_002AAE0C) {
        void *mem = func_001E8A44(0x110);
        ObjB_001BC040 *o = mem ? ((ObjB_001BC040 *)mem)->func_00129840(1) : 0;
        o->func_00129920(7);
        o->func_00129930(*(V4_001BC040 *)&D_002AAE04, *pb);
        func_000265C0(f50, (Vec_001BB950 *)&f24, &c, &d, 0, 1);
        o->func_00129E10();
        f2E4 = o;
    }
    f2E4->f68 = D_002BA154;
    f2E4->func_00133570(1);
    f2E4->f60 = this;
    f2E4->fA0 = (void *)func_001BBF90;
    func_001577A0(f2E4, 2);
    if (n < 1) {
        n = 1;
    }
    fB4 = (int *)func_001E8A44(n * 4);
    fB8 = (int *)func_001E8A44(n * 4);
    fBC = (int *)func_001E8A44(n * 4);
    fC0 = (int *)func_001E8A44(n * 4);
    fC4 = (int *)func_001E8A44(n * 4);
    fC8 = (int *)func_001E8A44(n * 4);
    fCC = (int *)func_001E8A44(n * 4);
    for (i = 0; i < n; i++) {
        fB8[i] = 0;
        fBC[i] = -1;
        fC0[i] = -1;
        fC4[i] = 0;
        fC8[i] = 0;
    }
    f94 = n;
    f98 = 0;
    return this;
}

