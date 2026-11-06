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
extern "C" void *memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)

struct IVt163780 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
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
    virtual void v4(int k, int *a, int *b);
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

int __stdcall func_00162FB0(Src162FB0 *src, char *name, Pack162FB0 *pack)
{
    Mgr162FB0 *mgr = (Mgr162FB0 *)D_002BEAAC;
    int handle;
    int table[0x100];
    char buf[0x400];
    int found;
    int count2;
    int i;
    float *mats;
    handle = mgr->func_0013C9F0(name, D_00276274);
    if (handle == -1)
        return 0;
    for (i = 0; i < 0x100; i++)
        table[i] = 0;
    found = 0;
    count2 = 0;
    while (mgr->func_0013C6E0(handle, buf, 0xff)) {
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
    pack->f38 = (float)(pack->f34 - 1) / (float)pack->f30;
    mats = (float *)func_001E8A44(src->count1E8 << 6);
    for (i = 0; i < src->count1E8; i++) {
        float *m = mats + i * 16;
        int k;
        for (k = 0; k < 16; k++)
            m[k] = 0.0f;
        m[0] = 1.0f;
        m[5] = 1.0f;
        m[10] = 1.0f;
        m[15] = 1.0f;
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
    mgr->func_0013AFF0(handle, 0, 0);
    mgr->func_0013C110(handle);
    return 1;
}

int __stdcall func_00163780(int name, P163780 *p)
{
    int mode;
    int h;
    int i, k;
    int a, b, c, d, e;

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
        p->listA[i]->vt->v7(p->listA[i]->count);
        if (p->kindA == 0) {
            D_002BEAAC->func_0013C8A0(h, p->listA[i]->data, p->listA[i]->count << 4, 1);
        } else if (p->kindA == 1) {
            D_002BEAAC->func_0013C8A0(h, p->listA[i]->data, p->listA[i]->count * 40, 1);
        }
    }
    for (i = 0; i < p->countB; i++) {
        D_002BEAAC->func_0013C8A0(h, &p->listB[i]->count, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &p->listB[i]->unk4, 4, 1);
        p->listB[i]->vt->v6(p->listB[i]->count);
        if (mode == 2) {
            if (p->kindB == 0) {
                D_002BEAAC->func_0013C8A0(h, p->listB[i]->data, p->listB[i]->count << 3, 1);
            } else if (p->kindB == 1) {
                D_002BEAAC->func_0013C8A0(h, p->listB[i]->data, p->listB[i]->count * 12, 1);
            }
        } else {
            for (k = 0; k < p->listB[i]->count; k++) {
                D_002BEAAC->func_0013C960(h, &a, 4);
                D_002BEAAC->func_0013C960(h, &b, 4);
                D_002BEAAC->func_0013C960(h, &c, 4);
                D_002BEAAC->func_0013C960(h, &d, 4);
                D_002BEAAC->func_0013C960(h, &e, 4);
                p->listB[i]->vt->v4(k, &a, &e);
            }
        }
    }
    D_002BEAAC->func_0013C110((void *)h);
    return 1;
}

