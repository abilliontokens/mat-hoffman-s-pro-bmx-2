/* 16 functions from 0x001BB4F0 to 0x001BC310, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
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

extern float D_00275544, D_002AAE04, D_002AAE08, D_002AAE0C;
void __cdecl func_000265C0(void *a, Vec_001BB950 *b, int c, int d, int e, int f);

int func_00011260(int lo, int hi);
int func_00135C70(int param_1, int param_2, int *param_3, int param_4);

extern float D_002AAE10;

/* position vector, built z, y, x, w */
struct V4_001BB680 {
    float x, y, z, w;
    void Init()
    {
        z = 0.0f;
        y = 0.0f;
        x = 0.0f;
        w = 1.0f;
    }
};

/* direction vector, built w, z, y, x */
struct V4b_001BB680 {
    float x, y, z, w;
    void Init()
    {
        w = 1.0f;
        z = 0.0f;
        y = 0.0f;
        x = 0.0f;
    }
};

/* 4x4 float matrix, 16-byte aligned for movaps */
__declspec(align(16)) struct S_001BB680_Mat {
    float m[16];
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
    int found;
    int idx;
    int i;
    int key;
    int n;
    S_1BB4F0_Obj **pp;

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
    for (pp = list->f1A8, i = 0; i < n; i++, pp++) {
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
    __m128 *v;
    int i;

    ((C_00157600 *)this)->func_00157600(a);
    self->vtbl = &D_0028D2BC;
    self->f24.Init();
    self->f34.Init();
    self->unk2EC |= 1;
    self->unk2EC |= 2;
    self->unk2EC |= 4;
    self->unkB4 = 0;
    self->unkB8 = 0;
    self->unk2DC = 0;
    self->unkBC = 0;
    self->unkC0 = 0;
    self->unkC4 = 0;
    self->unkC8 = 0;
    self->unk2EC &= 0xf7;
    self->unk2EC &= 0xef;
    self->unk2EC &= 0xdf;
    self->unk2EC &= 0xbf;
    self->unk90 = 100;
    self->f24.x = D_002AAE04;
    self->f24.y = D_002AAE08;
    self->f24.z = D_002AAE0C;
    self->f24.w = D_002AAE10;
    self->unk2E0 = 0;
    p = &m;
    v = (__m128 *)p;
    v[0] = _mm_setzero_ps();
    v[1] = _mm_setzero_ps();
    v[2] = _mm_setzero_ps();
    v[3] = _mm_setzero_ps();
    ((float *)v)[0] = 1.0f;
    ((float *)v)[5] = 1.0f;
    ((float *)v)[10] = 1.0f;
    ((float *)v)[15] = 1.0f;
    copy = m;
    ((C_000264C0 *)((char *)self + 0x50))->func_000264C0(&copy);
    self->unk94 = 0;
    self->unk98 = 0;
    self->unk2E8 = 0;
    self->unk9C = 0;
    self->unkD0 = 0;
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

void C_001BBAE0::func_001BBAE0(int a)
{
    volatile int slot[3];

    slot[0] = (int)this;
    if (unk2DC != 0) {
        S_001BBAE0_Mat t;
        S_001BBAE0_Mat r;

        unk2DC->func_00197EA0(&t);
        r = func_000263B0((char *)slot[0] + 0x50, &t);
        slot[1] = (int)&r;
        slot[2] = (int)&t;
        CopyMat_001BBAE0((S_001BBAE0_Mat *)slot[1], (S_001BBAE0_Mat *)slot[2]);
        ((C_001BBAE0 *)slot[0])->unk2E4->v31(&t);
        ((C_001BBAE0 *)slot[0])->unk2E4->func_00133140(a, 2);
    } else {
        unk2E4->v31((S_001BBAE0_Mat *)((char *)this + 0x50));
        ((C_001BBAE0 *)slot[0])->unk2E4->func_00133140(a, 1);
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
