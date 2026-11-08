/* 5 functions from 0x00162B70 to 0x00163A50, found by Ghidra. */
#include "common.h"

extern int D_0015B970;
extern int D_0015BA70;
void *func_001E8A44(int size);
void __stdcall func_00011FF0(void *p, int step, int count, int *ctor);

struct Item162B70 {
    int unk0, unk4, unk8, count, unk10;
    void *data;
};

struct Pack162B70 {
    char pad0[0x14];
    Item162B70 **listA;
    Item162B70 **listB;
    int countA, countB;
    int pad24, kindB, kindA;
    int pad30, id0, id1;
};

struct Mgr162B70 {
    char pad0[0x14];
    int ready;
    void *func_0013C9F0(int a, void *b);
    void *func_0013B930(void *a, void *b, int c, int d);
    void func_0013C110(void *a);
    void func_00162B70(Pack162B70 *p, int arg);
    void func_0013C960(int h, void *p, int n);
    void func_0013C8A0(int h, void *p, int n, int z);
};
extern Mgr162B70 *D_002BEAAC;
extern char D_00282960[];
void func_001E891B(void *p);
struct Elem162ED0 { void func_0015B990(); };
struct C_00162ED0 { void *func_00162ED0(unsigned int flags); };
extern "C" void *memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)

struct IVt163780 {
    virtual void v0();
    virtual void v1(void *a, float b);
    virtual void v2(void *a, float b);
    virtual void v3();
    virtual void v4(int k, int *a, int *b);
    virtual void v5();
    virtual void v6(int n);
    virtual void v7(int n);
};
struct It163780 {
    IVt163780 *vt;
    int unk4, unk8, count, unk10;
    void *data;
};
struct It163780V {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int k, void *a, void *b);
    virtual void v5();
    virtual void v6(int n);
    virtual void v7(int n);
    int unk4, unk8, count, unk10;
    void *data;
};
struct Mgr163780 {
    int func_0013C9F0(int a, void *b);
    void func_0013C960(int h, void *p, int n);
    void func_0013C8A0(int h, void *p, int n, int z);
    void func_0013C110(int h);
};
extern Mgr163780 *D_002BEAAC_b;
extern char D_00275FB4[];
struct P163780 {
    void func_00162DF0(int n);
    void func_001628C0(int n);
    char pad0[0x14];
    It163780 **listA;
    It163780 **listB;
    int countA, countB;
    int pad24, kindB, kindA;
    int pad30, id0, id1;
};

extern char D_00276274[], D_002789B8[], D_0027626C[], D_00287D04[], D_00287D00[];
struct Mgr162FB0 {
    int func_0013C9F0(void *a, char *b);
    int func_0013C6E0(int h, char *buf, int n);
    void func_0013AFF0(int h, int a, int b);
    void func_0013C110(int h);
};
extern Mgr162FB0 *D_002BEAAC_162;
struct Entry162FB0 {
    char pad0[0x34];
    void *f34;
    void *f38;
    void *f3C;
};
struct Src162FB0 {
    char pad0[4];
    int f4;
    char pad8[0x1E0];
    int count1E8;
    Entry162FB0 *entries1EC;
    int func_00164650(char *s);
};
struct Obj162FB0 {
    IVt163780 *vt;
    int unk4;
    int f8;
};
struct Pack162FB0 {
    char pad0[0x14];
    Obj162FB0 **listA;
    Obj162FB0 **listB;
    int countA, countB;
    unsigned char kind24;
    char pad25[7];
    int f2C;
    int f30;
    int f34;
    float f38;
    void func_00162DF0(int n);
    void func_001628C0(int n);
};
int func_001EA1EE(char *s);
char *func_001E95A4(char *a, char *b);
int func_001EA426(char *a, char *b);
#include <xmmintrin.h>
#include "asm_helpers.h"
double func_001E9649(char *s);
void func_000265C0(float *dst, float *a, float *b, float *c, int d, int e);
struct EObj_00162FB0 {
    void *func_00199B00(int a, void *out);
    void *func_0019AD60(int a, float *m);
    void func_00197E70(float *v);
    void func_00197B90(float *v);
};
struct Vec4_162FB0 {
    float x, y, z, w;
};
void func_0015BB70(void *p);
extern float D_00287CF0;
extern float D_00287CE0;
extern float D_00287CD0;

/* normalise a 3-vector in place (classic rsqrt + one Newton step) */
static __forceinline void Norm_00162FB0(float *v)
{
    __m128 x = _mm_loadu_ps(v);
    __m128 orig = x;
    __m128 sq = _mm_mul_ps(x, x);
    __m128 s = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    s = _mm_add_ss(s, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 e = _mm_load_ss(&D_00287CF0);
    s = _mm_add_ss(s, _mm_and_ps(_mm_cmplt_ss(s, e), e));
    __m128 r = _mm_rsqrt_ss(s);
    __m128 s2 = _mm_mul_ss(s, r);
    __m128 c3 = _mm_load_ss(&D_00287CE0);
    s2 = _mm_mul_ss(s2, r);
    r = _mm_mul_ss(r, _mm_load_ss(&D_00287CD0));
    c3 = _mm_sub_ss(c3, s2);
    r = _mm_mul_ss(r, c3);
    r = _mm_shuffle_ps(r, r, 0);
    r = _mm_mul_ps(r, orig);
    _mm_storeu_ps(v, r);
}

struct S_00162DF0_A {
    char pad0[0x18];
};

struct S_00162DF0_B {
    char pad0[0x18];
};

struct C_00162DF0 {
    char pad0[0xC];
    S_00162DF0_A *unkC;
    S_00162DF0_B *unk10;
    char pad14[4];
    void **unk18;
    char pad1C[0xC];
    int unk28;
    void func_00162DF0(int count);
};

void Mgr162B70::func_00162B70(Pack162B70 *pFirst, int pSecond)
{
    Pack162B70 *p = (Pack162B70 *)pSecond;
    int id = (int)pFirst;
    int size, i, n;
    int *w;
    char *buf;
    void *h;
    if (!ready)
        return;
    size = 0x1c;
    for (i = 0; i < p->countA; i++) {
        size += 8;
        if (p->kindA == 0)
            size += p->listA[i]->count * 16;
        else if (p->kindA == 1)
            size += p->listA[i]->count * 40;
    }
    for (i = 0; i < p->countB; i++) {
        size += 8;
        if (p->kindB == 0)
            size += p->listB[i]->count * 8;
        else if (p->kindB == 1)
            size += p->listB[i]->count * 12;
    }
    buf = (char *)func_001E8A44(size);
    w = (int *)buf;
    *w++ = -2;
    *w++ = p->id0;
    *w++ = p->id1;
    *w++ = p->kindB;
    *w++ = p->kindA;
    *w++ = p->countA;
    *w++ = p->countB;
    for (i = 0; i < p->countA; i++) {
        *w++ = p->listA[i]->count;
        *w++ = p->listA[i]->unk4;
        if (p->kindA == 0) {
            n = p->listA[i]->count * 16;
            memcpy(w, p->listA[i]->data, n);
            w = (int *)((char *)w + n);
        } else if (p->kindA == 1) {
            n = p->listA[i]->count * 40;
            memcpy(w, p->listA[i]->data, n);
            w = (int *)((char *)w + n);
        }
    }
    for (i = 0; i < p->countB; i++) {
        *w++ = p->listB[i]->count;
        *w++ = p->listB[i]->unk4;
        if (p->kindB == 0) {
            n = p->listB[i]->count * 8;
            memcpy(w, p->listB[i]->data, n);
            w = (int *)((char *)w + n);
        } else if (p->kindB == 1) {
            n = p->listB[i]->count * 12;
            memcpy(w, p->listB[i]->data, n);
            w = (int *)((char *)w + n);
        }
    }
    h = D_002BEAAC->func_0013C9F0(id, D_00282960);
    D_002BEAAC->func_0013B930(h, buf, size, 1);
    D_002BEAAC->func_0013C110(h);
    func_001E891B(buf);
}

void C_00162DF0::func_00162DF0(int count) {
    int i;
    int *mem;
    S_00162DF0_A *a;
    S_00162DF0_B *b;

    if (count == 0) {
        unk18 = 0;
        return;
    }
    unk18 = (void **)func_001E8A44(count * 4);
    if (unk28 == 0) {
        mem = (int *)func_001E8A44(count * 0x18 + 4);
        if (mem != 0) {
            a = (S_00162DF0_A *)(mem + 1);
            *mem = count;
            func_00011FF0(a, 0x18, count, &D_0015B970);
        } else {
            a = 0;
        }
        unkC = a;
        for (i = 0; i < count; i++) {
            unk18[i] = &unkC[i];
        }
    } else if (unk28 == 1) {
        mem = (int *)func_001E8A44(count * 0x18 + 4);
        if (mem != 0) {
            b = (S_00162DF0_B *)(mem + 1);
            *mem = count;
            func_00011FF0(b, 0x18, count, &D_0015BA70);
        } else {
            b = 0;
        }
        unk10 = b;
        for (i = 0; i < count; i++) {
            unk18[i] = &unk10[i];
        }
    }
}

void *C_00162ED0::func_00162ED0(unsigned int flags)
{
    if (flags & 2) {
        int *base = (int *)((char *)this - 4);
        int n = *base;
        char *p = (char *)this + n * 0x18;
        if (--n >= 0) {
            int k = n + 1;
            do {
                p -= 0x18;
                ((Elem162ED0 *)p)->func_0015B990();
            } while (--k);
        }
        if (flags & 1) {
            func_001E891B(base);
        }
        return base;
    }
    ((Elem162ED0 *)this)->func_0015B990();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *func_001E8AA5(int size);
int __stdcall func_00162FB0(Src162FB0 * volatile src, char *name, Pack162FB0 * volatile pack)
{
    int table[0x100];
    char buf[0x100];
    char out[0x10];
    float buf2[4];
    Vec4_162FB0 pos;
    float v44[4];
    int count2;
    float v30[4];
    float v20[4];
    float scale;
    int hc[3];
    int i;
    int found;
    float *mats;
    hc[0] = ((Mgr162FB0 *)D_002BEAAC)->func_0013C9F0(name, D_00276274);
    if (hc[0] == -1)
        return 0;
    for (i = 0; i < 0x40; i++)
        table[i] = 0;
    found = 0;
    count2 = 0;
    while (((Mgr162FB0 *)D_002BEAAC)->func_0013C6E0(hc[0], buf, 0xff)) {
        char *s;
        func_001EA1EE(buf);
        s = func_001E95A4(buf, D_002789B8);
        if (func_001EA426(s, D_0027626C) == 0) {
            found++;
        } else if (func_001EA426(s, D_00287D04) == 0) {
            if (found == 1)
                count2++;
            {
                char *v = func_001E95A4(0, D_00287D00);
                unsigned int idx = (unsigned char)src->func_00164650(v);
                if (idx != 0xff && found == 1) {
                    table[idx] = found;
                    if (src->entries1EC[idx].f3C != 0)
                        pack->countB++;
                    if (src->entries1EC[idx].f38 != 0)
                        pack->countA++;
                }
            }
        }
    }
    if (found < pack->f34 || pack->f34 == 0)
        pack->f34 = found;
    pack->f38 = (float)(pack->f34 - 1) / pack->f30;
    mats = (float *)func_001E8AA5(src->count1E8 << 6);
    for (i = 0; i < src->count1E8; i++) {
        float *m = mats + i * 16;
        AsmIdentityMatrix(m);
    }
    pack->func_00162DF0(pack->countB);
    pack->func_001628C0(pack->countA);
    for (i = 0; i < pack->countA; i++) {
        Obj162FB0 *o = pack->listA[i];
        o->vt->v7(pack->f34);
        o->f8 = (pack->kind24 >> 1) & 1;
    }
    for (i = 0; i < pack->countB; i++) {
        Obj162FB0 *o = pack->listB[i];
        o->vt->v6(pack->f34);
        o->f8 = (pack->kind24 >> 2) & 1;
    }
    {
        int idxA = 0;
        int idxB = 0;
        for (i = 0; i < src->count1E8; i++) {
            if (table[i] != 0) {
                if (src->entries1EC[i].f3C != 0) {
                    pack->listB[idxB]->unk4 = i;
                    idxB++;
                }
                if (src->entries1EC[i].f38 != 0) {
                    pack->listA[idxA]->unk4 = i;
                    idxA++;
                }
            }
        }
    }
    ((Mgr162FB0 *)D_002BEAAC)->func_0013AFF0(hc[0], 0, 0);
    v20[0] = 0; v20[1] = 0; v20[2] = 0; v20[3] = 1.0f;
    v30[0] = 0; v30[1] = 0; v30[2] = 0; v30[3] = 1.0f;
    v44[0] = 0; v44[1] = 0; v44[2] = 0; v44[3] = 1.0f;
    hc[2] = 0;
    while (((Mgr162FB0 *)D_002BEAAC)->func_0013C6E0(hc[0], buf, 0xff)) {
        if (hc[2] >= pack->f34)
            break;
        func_001EA1EE(buf);
        func_001E95A4(buf, D_002789B8);
        if (count2 > 0) {
            hc[1] = count2;
            do {
                ((Mgr162FB0 *)D_002BEAAC)->func_0013C6E0(hc[0], buf, 0xff);
                func_001E95A4(buf, D_002789B8);
                i = (unsigned char)src->func_00164650(func_001E95A4(0, D_00287D00));
                if (i == 0xff)
                    break;
                func_001E95A4(0, D_002789B8);
                func_001E95A4(0, D_002789B8);
                func_001E95A4(0, D_002789B8);
                v30[0] = (float)func_001E9649(func_001E95A4(0, D_002789B8));
                v30[2] = (float)func_001E9649(func_001E95A4(0, D_002789B8));
                v30[1] = (float)func_001E9649(func_001E95A4(0, D_002789B8));
                AsmVec3Normalize(v30, v30);
                v44[0] = (float)func_001E9649(func_001E95A4(0, D_002789B8));
                v44[2] = (float)func_001E9649(func_001E95A4(0, D_002789B8));
                v44[1] = (float)func_001E9649(func_001E95A4(0, D_002789B8));
                AsmVec3Normalize(v44, v44);
                v20[0] = (float)func_001E9649(func_001E95A4(0, D_002789B8));
                v20[2] = (float)func_001E9649(func_001E95A4(0, D_002789B8));
                v20[1] = (float)func_001E9649(func_001E95A4(0, D_002789B8));
                func_000265C0(mats + (i << 4), v20, v30, v44, 1, 1);
                hc[1]--;
            } while (hc[1] != 0);
        }
        {
            float *m = mats;
            for (i = 0; i < src->count1E8; i++, m += 16) {
                Entry162FB0 *e = &src->entries1EC[i];
                if (e->f3C != 0 || e->f38 != 0) {
                    if (e->f38 == 0) {
                        float *r = (float *)((EObj_00162FB0 *)e->f34)->func_00199B00(src->f4, out);
                        *(Vec4_162FB0 *)v20 = *(Vec4_162FB0 *)r;
                        pos = *(Vec4_162FB0 *)r;
                        m[3] = pos.x;
                        m[7] = pos.y;
                        m[11] = pos.z;
                    }
                    ((EObj_00162FB0 *)e->f34)->func_0019AD60(src->f4, m);
                }
            }
        }
        scale = (float)hc[2] / pack->f30;
        for (i = 0; i < pack->countA; i++) {
            Obj162FB0 *o = pack->listA[i];
            Entry162FB0 *e = &src->entries1EC[o->unk4];
            ((EObj_00162FB0 *)e->f34)->func_00197E70(v20);
            o->vt->v2(v20, scale);
        }
        for (i = 0; i < pack->countB; i++) {
            Obj162FB0 *o = pack->listB[i];
            Entry162FB0 *e = &src->entries1EC[o->unk4];
            ((EObj_00162FB0 *)e->f34)->func_00197B90(buf2);
            o->vt->v1(buf2, scale);
        }
        hc[2]++;
    }
    ((Mgr162FB0 *)D_002BEAAC)->func_0013C110(hc[0]);
    if (pack->f2C == 1) {
        for (i = 0; i < pack->countA; i++)
            func_0015BB70(pack->listA[i]);
    }
    return 1;
}

int __stdcall func_00163780(int name, P163780 *p)
{
    int mode;
    int h;
    int i, k;

    h = (int)D_002BEAAC->func_0013C9F0(name, D_00275FB4);
    if (h == -1) {
        return 0;
    }
    mode = 1;
    D_002BEAAC->func_0013C960(h, &p->id0, 4);
    if (p->id0 < 0) {
        mode = -p->id0;
        D_002BEAAC->func_0013C960(h, &p->id0, 4);
    }
    D_002BEAAC->func_0013C960(h, &p->id1, 4);
    D_002BEAAC->func_0013C960(h, &p->kindB, 4);
    D_002BEAAC->func_0013C960(h, &p->kindA, 4);
    D_002BEAAC->func_0013C960(h, &p->countA, 4);
    D_002BEAAC->func_0013C960(h, &p->countB, 4);
    p->func_00162DF0(p->countB);
    p->func_001628C0(p->countA);
    for (i = 0; i < p->countA; i++) {
        D_002BEAAC->func_0013C960(h, &p->listA[i]->count, 4);
        D_002BEAAC->func_0013C8A0(h, &p->listA[i]->unk4, 4, 1);
        ((It163780V *)p->listA[i])->v7(p->listA[i]->count);
        if (p->kindA == 0) {
            D_002BEAAC->func_0013C8A0(h, p->listA[i]->data, p->listA[i]->count << 4, 1);
        } else if (p->kindA == 1) {
            D_002BEAAC->func_0013C8A0(h, p->listA[i]->data, p->listA[i]->count * 40, 1);
        }
    }
    for (i = 0; i < p->countB; i++) {
        D_002BEAAC->func_0013C8A0(h, &p->listB[i]->count, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &p->listB[i]->unk4, 4, 1);
        ((It163780V *)p->listB[i])->v6(p->listB[i]->count);
        if (mode == 2) {
            if (p->kindB == 0) {
                D_002BEAAC->func_0013C8A0(h, p->listB[i]->data, p->listB[i]->count << 3, 1);
            } else if (p->kindB == 1) {
                D_002BEAAC->func_0013C8A0(h, p->listB[i]->data, p->listB[i]->count * 12, 1);
            }
        } else {
            int a;
            int v[4];
            for (k = 0; k < p->listB[i]->count; k++) {
                D_002BEAAC->func_0013C960(h, &a, 4);
                D_002BEAAC->func_0013C960(h, &v[1], 4);
                D_002BEAAC->func_0013C960(h, &v[2], 4);
                D_002BEAAC->func_0013C960(h, &v[3], 4);
                D_002BEAAC->func_0013C960(h, &v[0], 4);
                ((It163780V *)p->listB[i])->v4(k, &a, &v[0]);
            }
        }
    }
    D_002BEAAC->func_0013C110((void *)h);
    return 1;
}
