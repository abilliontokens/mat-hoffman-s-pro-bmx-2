/* 25 functions from 0x00160D30 to 0x00161C70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <string.h>
#include "asm_helpers.h"

struct S_00161040_Global {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(int a); virtual void v8();
};
extern S_00161040_Global *D_002EFDB8;
extern char *D_002A8184[];
extern char D_002A65D8[], D_002BA5F0[], D_00287A80[], D_00275FB4[];
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_0014FDF0(const char *name, const char *mode);
int func_0014FED0(void *file, int offset, int origin);
int D_0014FEE0(void *file);
int func_0014FE50(void *file);
unsigned int func_0014FE60(void *buf, int size, void *file);
void func_001E8390(void *ptr);
void *func_001E8AA5(int size);
char *func_001E9260(char *s, int c);
struct S_00161040_Entry { char *text; short unk4; short unk6; };

/* string list container built by func_00160D30 */
struct S_00160C40 {
    S_00160C40 *func_00160C40(int count, void *a, void *b);
    void func_00160C90(void);
    void func_00160CE0(char *s, int i);
};

/* 8-byte record read from the file header table */
struct S_00160D30_Rec { int f0; short s4; short s6; };
extern char D_00287AA0[], D_00287A90[];
extern char *D_002A817C[];
extern char D_00135BF0, D_00135C10;

struct C_00161040 {
    char *data;
    S_00161040_Entry *entries;
    int unk8, unkC;
    short count;
    char name[0x12];
    char **strs;
    char *text;
    S_00160C40 *cont;
    int func_00161040(int index);
    int func_00160D30(const char *nm, int idx, int flag);
};

struct V4_00161930 {
    float x, y, z, w;
};

struct V3_00161930 {
    float x, y, z;
};

V4_00161930 *func_001618A0(V4_00161930 *out, V4_00161930 *in);

static __forceinline void cross_001619D0(float *out, float *a, float *b)
{
    __m128 va = _mm_loadu_ps(a);
    __m128 vb = _mm_loadu_ps(b);
    __m128 sa = va;
    __m128 sb = vb;

    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(out, va);
}

/* same as cross_001619D0, but the pointer parameters are spilled to the stack (volatile) */
static __forceinline void cross_00161AE0(float * volatile b, float * volatile a, float * volatile out)
{
    float *pa = a, *pb = b;
    __m128 va = _mm_loadu_ps(pa);
    __m128 vb = _mm_loadu_ps(pb);
    __m128 sa = va, sb = vb;

    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(out, va);
}

struct C_00161600 {
    undefined4 func_00161600(byte param_1);
};

struct C_00161850 {
    undefined4 func_00161850(int param_1);
};

extern int D_00287AF4;
extern int D_00287AD8;
extern unsigned int D_002EB254;
extern int D_002E2978;
extern int D_002EB250;
extern int D_002EB268;
extern int D_002EBE68;
extern int D_002EBE70;
extern int D_002EBE78;
extern void **D_002EBE7C;

void func_001E891B(void *p);
void *func_001E8A44(int size);
extern "C" double cos(double x);
extern "C" double sin(double x);
#pragma intrinsic(cos, sin)
int __stdcall func_001DCA56(void *a, void *b);
void func_001613B0(void);
char *func_001E95A4(char *str, char *delim);
extern unsigned int D_00287ABC;
extern unsigned int D_00287AC0;
extern unsigned int D_00287AC4;
extern unsigned short D_00287AC8;
extern unsigned char D_00287ACA;
extern char D_002789B8[];

struct S_002A8490 {
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
    virtual int v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    void func_001D13D0(char *a0);
};
extern S_002A8490 *D_002A8490;

struct S_00161620_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    S_00161620_Obj *func_00147490();
    void func_001B0A20(int a);
    void func_001B0620();
    void func_001B0650();
};

struct S_001B0FC0 {
    void func_001B0FC0();
};
extern S_001B0FC0 *D_002F0630;
extern int D_002EBE98;
int func_001EA426(const char *a, const char *b);
void func_00162530(float *m, float a2, float a3, float a4, float a5, int a6);

struct __declspec(align(16)) S_Matrix16_00161AA0 {
    float m[16];
};

extern float D_00275544;

inline void cross_00161AE0(V4_00161930 *out, V4_00161930 *a, V4_00161930 *b)
{
    __m128 va = _mm_loadu_ps(&a->x);
    __m128 vb = _mm_loadu_ps(&b->x);
    __m128 sa = va;
    __m128 sb = vb;

    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(&out->x, va);
}
void func_00162330(S_Matrix16_00161AA0 *out, V4_00161930 *a, V4_00161930 *b, V4_00161930 *c, V4_00161930 *d);
S_Matrix16_00161AA0 func_001622C0(float a);
void func_0011ACC0(S_Matrix16_00161AA0 *out, S_Matrix16_00161AA0 *a, S_Matrix16_00161AA0 *b);

struct S_00161620_Entry {
    int f0;
    S_00161620_Obj *f4;
    int f8;
    int fC;
};

struct C_00161870 {
    void *vtbl;
    char pad4[4];
    int f8;
    char padC[8];
    S_00161620_Entry *f14;
    char pad18[8];
    char f20;
    char pad21[0xb];
    void *func_00161870(unsigned int flags);
    void func_001616F0();
    void func_00161760();
    int func_001617F0(const char *name, int unused);
    void func_00161620();
    void func_00161680();
    void func_001AC3D0();
};

struct S_00161170 {
    int unk0;
    unsigned int unk4;
    char unk8;
};

/* bit reader built on the stack by the decompressor (see GR_BitString in text_0001E260.cpp) */
struct S_001611C0_BitReader {
    char pad0[0x20];
    void func_0001E3F0(u32 *data, u32 bits, int a2);
    void func_0001E460();
    u32 func_0001E550(int bits);
};
extern char D_002E2980[];
extern char D_002E297F[];

struct S_001611C0_State {
    unsigned int prev;
    char *out;
};

struct S_001B2340_Elem {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct S_001B22E0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    void func_001B22E0();
    S_001B2340_Elem *func_001B2340();
    void func_001B2370(S_001B2340_Elem *e);
    void func_001B22F0();
};

struct C_00161580 {
    void *vtbl;
    int unk4;
    S_001B22E0 sub8;
    int unk18;
    void *func_00161580(void);
    void func_0001DFE0();
    void func_0001DFF0();
    void func_001615B0(void);
};


int C_00161040::func_00160D30(const char *nm, int idx, int flag)
{
    char buf[0x104];
    int D;
    int A;
    S_00160D30_Rec *B;
    int C;
    void *file;
    unsigned int n;
    int sz;
    const char *s;
    char *d;
    char c;
    int i;
    char *p;
    char *end;
    S_00160C40 *old;

    s = nm;
    d = name;
    do {
        c = *s;
        *d = c;
        s++;
        d++;
    } while (c);
    if (idx < 0) {
        func_001ADCC0(buf, 0x104, D_00287AA0, D_002BA5F0, D_002A65D8, name);
    } else {
        func_001ADCC0(buf, 0x104, D_00287A90, D_002BA5F0, D_002A65D8, D_002A817C[idx], name);
    }
    file = func_0014FDF0(buf, D_00275FB4);
    if (file != 0) {
        func_0014FED0(file, 0x1a, 0);
        n = func_0014FE60(&count, 2, file);
        if (count > 0 && n > 0) {
            func_0014FED0(file, 8, 0);
            n = func_0014FE60(&A, 4, file);
            if (n > 0) {
                sz = count * 8;
                B = (S_00160D30_Rec *)func_001E8AA5(sz);
                func_0014FED0(file, A, 0);
                n = func_0014FE60(B, sz, file);
                if (n <= 0) {
                    func_001E8390(B);
                    func_0014FE50(file);
                    return 0;
                }
                if (entries != 0) {
                    func_001E891B(entries);
                }
                entries = (S_00161040_Entry *)func_001E8A44(count * 8);
                for (i = 0; i < count; i++) {
                    entries[i].unk4 = B[i].s4;
                }
                if (flag != 0 && count > 0) {
                    func_0014FED0(file, 4, 0);
                    if (func_0014FE60(&C, 4, file) != 4) {
                        goto fail;
                    }
                    if (strs != 0) {
                        func_001E891B(strs);
                        strs = 0;
                    }
                    if (text != 0) {
                        func_001E891B(text);
                        text = 0;
                    }
                    D = A - C - 1;
                    if (D <= 0) {
                        goto fail;
                    }
                    text = (char *)func_001E8A44(D);
                    strs = (char **)func_001E8A44(D * 4);
                    func_0014FED0(file, C, 0);
                    if (func_0014FE60(text, D, file) != D) {
                        goto fail;
                    }
                    p = text;
                    for (i = 0; i < count; i++) {
                        end = func_001E9260(p, 0);
                        if (end == 0 || end - p > D) {
                            func_0014FE50(file);
                            return 0;
                        }
                        strs[i] = p;
                        p = end + 1;
                    }
                    old = cont;
                    if (old != 0) {
                        old->func_00160C90();
                        func_001E891B(old);
                    }
                    {
                        void *mem = func_001E8A44(0x10);
                        cont = mem ? ((S_00160C40 *)mem)->func_00160C40(count, &D_00135BF0, &D_00135C10) : 0;
                    }
                    for (i = 0; i < count; i++) {
                        cont->func_00160CE0(strs[i], i);
                    }
                }
                func_001E8390(B);
                func_0014FE50(file);
                return 1;
            }
        }
fail:
        func_0014FE50(file);
    }
    return 0;
}

int C_00161040::func_00161040(int index)
{
    char path[0x104];
    if (D_002EFDB8) {
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();
    }
    func_001ADCC0(path, 0x104, D_00287A80, D_002BA5F0, D_002A65D8, name, D_002A8184[index]);
    void *file = func_0014FDF0(path, D_00275FB4);
    if (!file) return 0;
    func_0014FED0(file, 0, 2);
    int size = D_0014FEE0(file);
    if (size <= 0) {
        func_0014FE50(file);
        return 0;
    }
    if (data) func_001E8390(data);
    data = (char *)func_001E8AA5(size);
    data[size - 1] = 0;
    func_0014FED0(file, 0, 0);
    func_0014FE60(data, size, file);
    func_0014FE50(file);
    char *p = data;
    for (int i = 0; i < count;) {
        if (p >= data + size) break;
        entries[i++].text = p;
        p = func_001E9260(p, 0) + 1;
    }
    return count;
}

void __fastcall func_00161170(int unused, S_00161170 *table)
{
    unsigned int i;
    for (i = 0; i < 0x88cf; i++) {
        unsigned int hi = i >> 8;
        unsigned int lo = i & 0xff;
        table[(hi << 8) + lo].unk0 = -1;
    }
    D_002EB254 = 0x103;
    D_002E2978 = 9;
    D_002EB250 = 0x1ff;
}

void func_001611C0(char *out, void *data, int size)
{
    S_001611C0_State state;
    S_001611C0_BitReader br;
    S_00161170 table[0x8900];
    unsigned int code, len, c, n, idx, hi, lo;
    int first;
    state.out = out;
    br.func_0001E3F0((u32 *)data, size * 8, 0);
    br.func_0001E550(0x20);
    func_00161170(0, table);
    state.prev = br.func_0001E550(D_002E2978);
    while (state.prev != 0x100) {
        *state.out++ = (char)state.prev;
        first = state.prev;
        for (;;) {
            code = br.func_0001E550(D_002E2978);
            if (code == 0x100) goto done;
            if (code == 0x102) break;
            if (code == 0x101) { D_002E2978++; continue; }
            if (code >= D_002EB254) {
                D_002E2980[0] = (char)first;
                len = 1;
                c = state.prev;
                while (c > 0xff) {
                    hi = c >> 8; lo = c & 0xff; idx = (hi << 8) + lo;
                    D_002E2980[len] = table[idx].unk8;
                    c = table[idx].unk4;
                    len++;
                }
            } else {
                len = 0; c = code;
                while (c > 0xff) {
                    hi = c >> 8; lo = c & 0xff; idx = (hi << 8) + lo;
                    D_002E2980[len] = table[idx].unk8;
                    c = table[idx].unk4;
                    len++;
                }
            }
            D_002E2980[len] = (char)c;
            n = len + 1;
            first = D_002E297F[n];
            for (; n > 0; n--) *state.out++ = D_002E297F[n];
            hi = D_002EB254 >> 8; lo = D_002EB254 & 0xff; idx = (hi << 8) + lo;
            table[idx].unk4 = state.prev;
            table[idx].unk8 = (char)first;
            D_002EB254++;
            state.prev = code;
        }
        func_00161170(0, table);
        state.prev = br.func_0001E550(D_002E2978);
    }
done:
    br.func_0001E460();
}

void func_001613B0(void)
{
    char *dst;
    char *tok;
    int len;

    len = strlen((char *)&D_002EB268);
    if (len != 0) {
        D_002EBE7C = (void **)func_001E8A44(0x400);
        D_002EBE78 = 1;
        D_002EBE7C[0] = func_001E8A44(0xf);
        dst = (char *)D_002EBE7C[0];
        *(unsigned int *)dst = D_00287ABC;
        *(unsigned int *)(dst + 4) = D_00287AC0;
        *(unsigned int *)(dst + 8) = D_00287AC4;
        *(unsigned short *)(dst + 0xc) = D_00287AC8;
        dst[0xe] = D_00287ACA;
        tok = func_001E95A4((char *)&D_002EB268, D_002789B8);
        while (tok != 0) {
            D_002EBE7C[D_002EBE78] = func_001E8A44(strlen(tok) + 1);
            strcpy((char *)D_002EBE7C[D_002EBE78], tok);
            tok = func_001E95A4(0, D_002789B8);
            D_002EBE78++;
        }
    }
}

int func_001614C0(void)
{
    char buf[256];
    int i;

    if (func_001DCA56(&D_002EBE68, &D_002EB268) == 0 && D_002EBE68 == 3) {
        func_001613B0();
    }
    D_002A8490->v2();
    buf[0] = 0;
    D_002A8490->func_001D13D0(buf);
    D_002EBE70 = 1;
    while (D_002A8490->v10() != 0) {
    }
    D_002A8490->v17();
    for (i = 0; i < D_002EBE78; i++) {
        func_001E891B(D_002EBE7C[i]);
    }
    func_001E891B(D_002EBE7C);
    return 0;
}

void *C_00161580::func_00161580(void)
{
    func_0001DFE0();
    vtbl = &D_00287AD8;
    sub8.func_001B22E0();
    unk18 = -1;
    return this;
}

void C_00161580::func_001615B0(void)
{
    S_001B2340_Elem *e;

    vtbl = &D_00287AD8;
    e = sub8.func_001B2340();
    while (e != 0) {
        sub8.func_001B2370(e);
        e->v2();
        e = sub8.func_001B2340();
    }
    sub8.func_001B22F0();
    func_0001DFF0();
}

undefined4 C_00161600::func_00161600(byte param_1)
{
  int func_001615B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001615B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00161870::func_00161620()
{
    int i;

    for (i = 0; i < f8; i++) {
        if (f14[i].f4 != 0) {
            f14[i].f4->v2();
            f14[i].f4 = 0;
            f14[i].fC = 0;
        }
    }
}

void func_00161670(void) {
    int func_001AC440(...);
    func_001AC440();
}

void C_00161870::func_00161680()
{
    int i;

    for (i = 0; i < f8; i++) {
        if (f14[i].fC > 0 && f14[i].f4 == 0) {
            void *mem = func_001E8A44(0x15c);
            S_00161620_Obj *p = mem != 0 ? ((S_00161620_Obj *)mem)->func_00147490() : 0;
            p->func_001B0A20(f14[i].f0);
            f14[i].f4 = p;
        }
    }
}

void C_00161870::func_001616F0()
{
    int i;

    if (D_002F0630 != 0) {
        D_002F0630->func_001B0FC0();
        for (i = 0; i < f8; i++) {
            if (f14[i].f4 != 0) {
                f14[i].f4->func_001B0620();
            }
        }
    }
    for (i = 0; i < f8; i++) {
        if (f14[i].f4 != 0) {
            f14[i].f4->func_001B0650();
        }
    }
    f20++;
}

void C_00161870::func_00161760()
{
    int i;
    S_00161620_Obj *p;

    if (D_002F0630 != 0) {
        D_002F0630->func_001B0FC0();
    }
    for (i = 0; i < f8; i++) {
        if (f14[i].f4 != 0) {
            f14[i].f4->v2();
            p = (S_00161620_Obj *)func_001E8A44(0x15c);
            p = p != 0 ? p->func_00147490() : 0;
            p->func_001B0A20(f14[i].f0);
            f14[i].f4 = p;
            p->func_001B0620();
            p->func_001B0650();
        }
    }
    f20++;
}

int C_00161870::func_001617F0(const char *name, int unused)
{
    int i;

    for (i = 0; i < f8; i++) {
        if (func_001EA426(name, (const char *)f14[i].f0) == 0) {
            return i;
        }
    }
    D_002EBE98 = 1;
    return 0;
}

void func_00161840(void) {
    int func_001AC750(...);
    func_001AC750();
}

undefined4 C_00161850::func_00161850(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(param_1 * 0x10 + 8 + *(int *)(in_ECX + 0x14));
}

void *C_00161870::func_00161870(unsigned int flags)
{
    vtbl = &D_00287AF4;
    func_00161620();
    func_001AC3D0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_001618A0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void func_00161910(float a, float *s, float *c)
{
    double x = a;
    *s = (float)sin(x);
    *c = (float)cos(x);
}

void func_00161930(V3_00161930 *a, V3_00161930 *n, V4_00161930 *out)
{
    float v[4];
    V4_00161930 r;
    float d;
    float p0, p1, p2;

    p0 = a->x * n->x;
    p1 = n->y * a->y;
    d = p0 + p1;
    p2 = n->z * a->z;
    d = d + p2;
    r.w = 1.0f;
    r.x = n->x + n->x;
    r.y = n->y + n->y;
    r.z = n->z + n->z;
    v[0] = r.x * d;
    v[1] = r.y * d;
    v[2] = r.z * d;
    r.x = a->x - v[0];
    r.y = a->y - v[1];
    r.z = a->z - v[2];
    *out = r;
    func_001618A0(out, out);
}

#pragma optimize("y", on)
void func_001619D0(V3_00161930 *a, V3_00161930 *b, V3_00161930 *c, V4_00161930 *out, float *d)
{
 V4_00161930 v1, v2;
 V4_00161930 *n;
 v1.w=1.0f;
 v1.x=c->x-a->x; v1.y=c->y-a->y; v1.z=c->z-a->z;
 v2.w=1.0f;
 v2.x=b->x-a->x; v2.y=b->y-a->y; v2.z=b->z-a->z;
 AsmVec3Cross((float*)out,(float*)&v2,(float*)&v1);
 n=func_001618A0(out,out);
 if(d) *d=-((*(volatile float*)&n->y*a->y+*(volatile float*)&a->x*n->x)+n->z*a->z);
}
#pragma optimize("", on)
S_Matrix16_00161AA0 func_00161AA0(float a1, float a2, float a3, float a4)
{
    S_Matrix16_00161AA0 m;

    func_00162530(m.m, a3, a4, a1, a2, 1);
    return m;
}

void func_001622C0(float *m, float angle);
S_Matrix16_00161AA0 func_00161AE0(V4_00161930 a, V4_00161930 b, V4_00161930 c, float angle)
{
    V4_00161930 v;
    S_Matrix16_00161AA0 m;
    S_Matrix16_00161AA0 t;
    S_Matrix16_00161AA0 r;

    v.z = 0.0f;
    v.y = 0.0f;
    v.x = 0.0f;
    v.w = 1.0f;
    AsmVec3Cross(&v.x, &c.x, &b.x);
    func_00162330(&m, &a, &v, &c, &b);
    if (angle != D_00275544) {
        func_001622C0((float *)&t, -angle);
        r = t;
        func_0011ACC0(&m, &m, &r);
    }
    return m;
}

void func_00161BE0(char *dst, char *src, __m128 *m, int count, int dstStride, int srcStride)
{
    if (count != 0) {
        if (srcStride == 0) {
            srcStride = dstStride;
        }
        do {
            __m128 v = _mm_loadu_ps((float *)src);
            __m128 t0 = _mm_mul_ps(m[0], v);
            __m128 t2 = _mm_mul_ps(m[2], v);
            __m128 t1 = _mm_mul_ps(m[1], v);
            __m128 t3 = _mm_mul_ps(m[3], v);
            __m128 s01 = _mm_add_ps(_mm_unpacklo_ps(t0, t1), _mm_unpackhi_ps(t0, t1));
            __m128 s23 = _mm_add_ps(_mm_unpacklo_ps(t2, t3), _mm_unpackhi_ps(t2, t3));
            __m128 res = _mm_add_ps(_mm_movelh_ps(s01, s23), _mm_movehl_ps(s23, s01));
            _mm_storeu_ps((float *)dst, res);
            src += srcStride;
            dst += dstStride;
            count--;
        } while (count != 0);
    }
}

