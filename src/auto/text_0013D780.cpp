/* 14 functions from 0x0013D780 to 0x0013E6F0, found by Ghidra. */
#include "common.h"
#include <stdarg.h>

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
void func_001E891B(void *p);
int func_001EA426(void *p, int a);

extern "C" int strcmp(const char *s1, const char *s2);
char *func_001E8920(char *dst, const char *src, int n);
int func_001ADD20(char *buf, int count, int a3, void *a4);

struct S_0013D780_Ent { int f0; void *name; int f8; int flagsC; void *f10; int f14; int f18; int f1C; int f20; unsigned char f24; char pad25[3]; };
struct S_0013D780_Cache { void *f0; int f4; int f8; };
struct S_0013D780_Ent20 { int f0; int f4; int f8; int fC; int f10; int f14; int f18; int f1C; };
extern char D_00275FB4[];
extern "C" int D_0014FEE0(void *fp);
void *func_0014FDF0(const char *name, char *mode);
int func_0014FE60(void *p, int size, void *file);
int func_0014FED0(void *a, int b, int c);
void func_0014FE50(void *a);
void *func_001E83E8(void *p, int size);
void *func_001E8AA5(int size);
char func_0013AB60(const char *path);
void func_0013AC00(unsigned char *p, unsigned int n, unsigned char key);
struct C_0013D780 {
    char pad0[8]; int cur; S_0013D780_Ent *ents; int count;
    char pad14[0x10]; int *f24; int *f28; char pad2C[0x40]; int f6C; int f70; int f74; int f78; void *f7C;
    S_0013D780_Cache caches[8]; int active; char padE4[4]; S_0013D780_Ent20 *entries; int entryCount;
    char padF0[0x10]; int f100;
    int func_0013D780(char *name, int a2, int a3, int *a4, void *a5, int a6, int *a7, int a8);
    int func_0013C5D0(S_0013D780_Ent *e, int a);
    int func_0013AC40(char *key, int a2, int a3, int a4, int *out, int grow);
    void func_0013AEC0(int idx);
    void func_0013B840(S_0013D780_Ent *e);
    int func_0013B760(S_0013D780_Ent *e, int v);
    void func_0013B9C0(S_0013D780_Ent *e, int v);
};

/* One name/value slot of C_0013E170's table; 0x5c bytes apart. */
struct Entry_0013E170 {
    char name[0x50];
    int value;
    char pad54[8];
};

struct C_0013E170 {
    char pad0[0x230];
    Entry_0013E170 entries[64];
    char pad1930[0xc];
    int count;
    void func_0013E170(int index, char *name, int value);
};

struct S_0013E170_Entry {
    char pad0[0x230];
    char name[0x50];
    int value;
};

extern int D_00284C58;
extern int D_00100000;

#include <xmmintrin.h>
#include "asm_helpers.h"

extern int D_00284DEC;
extern int D_00284D5C;
extern float D_00284DD8;

void __stdcall func_00201100(void *p);
void func_000263B0(void *a, void *b, void *c);
void func_0013E4A0(void *dst, void *src);
int __stdcall func_001FFA20(int a, void *b);

struct CubeSlot_0013E6A0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct DXCubeTextureMap {
    void *vtbl;
    char pad4[0x10C];
    void *f110;
    CubeSlot_0013E6A0 *f114[6];
    void *f12C[6];
    void func_0013E6A0(void);
    void func_001D6B00(void);
};

struct Mat4_0013E4F0 {
    float m[16];
    void Zero() {
        memset(m, 0, sizeof(m));
    }
    void Identity() {
        Zero();
        m[0] = 1.0f;
        m[5] = 1.0f;
        m[10] = 1.0f;
        m[15] = 1.0f;
    }
    void Scale(float s) {
        Zero();
        m[0] = s;
        m[5] = s;
        m[10] = s;
        m[15] = s;
    }
};

/* Sets a 16-byte aligned matrix to the identity with SSE stores. */
static void IdentityMat4(Mat4_0013E4F0 *mat)
{
    __m128 *volatile p = (__m128 *)mat->m;
    __m128 z = _mm_setzero_ps();
    __m128 *q = p;
    float *f = (float *)q;

    q[0] = z;
    q[1] = z;
    q[2] = z;
    q[3] = z;
    f[0] = 1.0f;
    f[5] = 1.0f;
    f[10] = 1.0f;
    f[15] = 1.0f;
}

/* Clears a 16-byte aligned matrix with SSE stores. */
static void ZeroMat4(Mat4_0013E4F0 *mat)
{
    __m128 *volatile p = (__m128 *)mat->m;
    __m128 z = _mm_setzero_ps();
    __m128 *q = p;

    q[0] = z;
    q[1] = z;
    q[2] = z;
    q[3] = z;
}

struct DXCamera {
    void *vtbl;
    char pad4[0x1FC];
    float f200;
    char pad204[0x4C];
    Mat4_0013E4F0 f250;
    Mat4_0013E4F0 f290;
    DXCamera *func_0013E4F0(int a);
    void func_0012A3F0(int a);
    void func_0012AEC0(void);
    int func_0012B470(void);
    void func_0013E580(void);
    int func_0013E610(void);
    void func_0012B1D0(int *rect);
    void func_0012B190(int x, int y, int w, int h);
};

struct C_001D5600 {
    int f0;
    DXCamera *f4;
    void func_001D5600(void);
};

struct C_00156E80 {
    char pad0[0x264];
    int f264;
    void func_00156E80(void);
};

extern C_001D5600 *D_002EFDB8;
extern C_00156E80 *D_002A8490;

struct C_0013E080_elem {
    int x;
    int y;
    int z;
};

struct C_0013E080 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C[8];
    char pad4C[0x20];
    int f6C;
    int f70;
    int f74;
    int f78;
    int f7C;
    C_0013E080_elem f80[8];
    int fE0;
    int fE4;
    int fE8;
    int fEC;
    int fF0;
    int fF4;
    int fF8;
    int fFC;
    C_0013E080 *func_0013E080(void);
    void *func_0013E140(unsigned int flags);
    void func_0001DFE0(void);
    void func_0013D400(void);
    void func_0001DFF0(void);
    void func_0013D550(int a, int b, void *c);
};

struct C_0013DFF0_elem {
    int f0;
    void *f4;
    char pad8[0x20];
};

struct C_0013DFF0 {
    char pad0[0xC];
    C_0013DFF0_elem *unkC;
    int unk10;
    int func_0013DFF0(int a1, int a2);
    int func_0013C5D0(C_0013DFF0_elem *e, int a2);
};

extern "C" unsigned int strlen(const char *s);
extern "C" char *strcpy(char *d, const char *s);
extern "C" void *__cdecl memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)
int C_0013D780::func_0013D780(char *name, int a2, int a3, int *a4, void *a5, int a6, int *a7, int a8)
{
    int result = 1;
    int selected = -1;
    int remain = 0;
    int flags = 0;
    int fileSize = 0;
    char key = 0;
    void *fp = 0;
    int idx;
    int i = 0;
    int ok;
    int version;
    int hdr[2];
    int hdr2[2];
    __int64 chunk;
    char buf[256];
    S_0013D780_Ent *row;
    char *cacheBuf;
    char *ptr;
    char *end;
    int cnt;
    int n;
    int field1;
    int field2;

    if (a8 == 0 && count > 1) {
        S_0013D780_Ent *e = ents;
        S_0013D780_Ent *last = &ents[count - 1];
        do {
            if (e->name != 0 && func_001EA426(e->name, (int)name) == 0) {
                if (!(e->flagsC & 0x20)) return 1;
                func_0013C5D0(e, 1);
                e = last;
            }
            e++;
        } while (e != last);
    }
    if (active != -1) {
        caches[active].f4 = -1;
        selected = active;
        caches[active].f8 = -0x6000;
        active = -1;
        goto have_cache;
    }
    {
        int found = 0;
        i = 0;
        do {
            int st = caches[i].f4;
            if (st != -2 && st != -1 && !(entries[st].f18 & 4)) {
                caches[i].f8 = -0x6000;
                caches[i].f4 = -1;
                selected = i;
                found = 1;
            }
            i++;
        } while (i < 8 && !found);
        if (!found) selected = -1;
    }
have_cache:
    if (cur == -1) {
        count++;
        ents = (S_0013D780_Ent *)func_001E83E8(ents, count * 40);
        if (ents == 0) return 0;
        idx = count - 1;
        cur = -1;
        row = &ents[idx];
        row->flagsC = 1;
        row->f10 = 0;
        row->f0 = idx;
        row->name = 0;
        row->f8 = 0;
        row->f14 = 0;
        row->f24 = 0;
    } else {
        idx = cur;
        cur = -1;
        if (count > 1) {
            i = 0;
            for (;;) {
                i++;
                if (i >= count) break;
                if (ents[i].flagsC & 1) { cur = i; break; }
            }
        }
    }
    fp = func_0014FDF0(name, D_00275FB4);
    if (fp == 0) { result = 0; goto done; }
    func_0014FED0(fp, 0, 0);
    if (func_0014FE60(hdr, 8, fp) != 8) { result = 0; goto close_done; }
    version = hdr[0];
    fileSize = hdr[1];
    if (version < 2 || version > 3) { result = 0; goto close_done; }
    flags = 0;
    if (a4) *a4 = 0;
    if (version != 2) {
        func_0014FE60(hdr2, 8, fp);
        fileSize -= 8;
        if (a4) *a4 = hdr2[0];
        flags = hdr2[1];
    }
    if (a3 != 0) {
        if ((flags & 0x80) == 0 || !(flags & 0x400)) { result = 0; goto close_done; }
        key = func_0013AB60(name);
    }
    if (flags & 0x40) {
        int extra;
        func_0014FE60(&extra, 4, fp);
        func_0014FED0(fp, extra, 1);
        fileSize += -4 - key;
    }
    if (a6 != 0) {
        n = a6 < fileSize ? a6 : fileSize;
        if (n > 0) {
            func_0014FE60(a5, n, fp);
            *a7 = n;
        } else {
            *a7 = 0;
        }
        fileSize -= n;
    }
    if (fileSize > 0) func_0014FED0(fp, fileSize, 1);
    func_0014FE60(&chunk, 8, fp);
    field1 = (int)chunk;
    field2 = (int)(chunk >> 32);
    remain = (int)D_0014FEE0(fp) + field2;
    ok = 1;
    if (field1 == -1) {
        remain = field2;
        cnt = field2;
        i = 0;
        do {
            func_0014FE60(&n, 4, fp);
            func_0014FE60(buf, n, fp);
            buf[n] = 0;
            if (flags & 0x400) func_0013AC00((unsigned char *)buf, n, (unsigned char)key);
            func_0014FE60(&field1, 4, fp);
            func_0014FE60(&field2, 4, fp);
            if (!func_0013AC40(buf, idx, field1, field2, 0, remain)) ok = 0;
            i++;
            remain--;
        } while (i < cnt);
        goto chunks_done;
    }
    if (field2 >= 0x6000) {
        cacheBuf = (char *)caches[field1].f0;
        ptr = cacheBuf;
        end = cacheBuf + 0x6000;
        remain = field2;
        cnt = 0;
        do {
            n = remain < (0x5fff - cnt) ? remain : (0x5fff - cnt);
            func_0014FE60(ptr + cnt, n, fp);
            remain -= n;
            {
                char *curp = ptr;
                while (end - curp > 4) {
                    n = *(int *)curp;
                    curp += 4;
                    if (end - curp <= n + 8) break;
                    memcpy(buf, curp, n);
                    buf[n] = 0;
                    curp += n;
                    if (flags & 0x400) func_0013AC00((unsigned char *)buf, n, (unsigned char)key);
                    field1 = *(int *)curp;
                    field2 = *(int *)(curp + 4);
                    curp += 8;
                    if (!func_0013AC40(buf, idx, field1, field2, 0, remain)) ok = 0;
                    cnt++;
                }
                memcpy(cacheBuf, curp, end - curp - 1);
            }
        } while (cnt < remain);
        goto chunks_done;
    }
    cacheBuf = (char *)caches[field1].f0;
    func_0014FE60(cacheBuf, field2, fp);
    remain = selected;
    ptr = cacheBuf;
    cnt = *(int *)ptr;
    i = 0;
    do {
        n = *(int *)ptr;
        ptr += 4;
        memcpy(buf, ptr, n);
        buf[n] = 0;
        ptr += n;
        if (flags & 0x400) func_0013AC00((unsigned char *)buf, n, (unsigned char)key);
        field1 = *(int *)ptr;
        field2 = *(int *)(ptr + 4);
        ptr += 8;
        if (!func_0013AC40(buf, idx, field1, field2, 0, remain)) ok = 0;
        i++;
        remain--;
    } while (i < cnt);
chunks_done:
    if (!ok) {
        result = 0;
        for (i = 0; i < entryCount; i++) {
            if (entries[i].f0 == idx) func_0013AEC0(i);
        }
    }
    if (version == 2) {
        for (i = 0; i < entryCount; i++) {
            if (entries[i].f0 == idx) entries[i].fC -= flags;
        }
    }
close_done:
    func_0014FED0(fp, 0, 2);
    fileSize = D_0014FEE0(fp);
    func_0014FE50(fp);
done:
    active = selected;
    row = &ents[idx];
    if (result != 0) {
        row->flagsC = flags | 2;
        row->f10 = 0;
        row->name = (void *)func_001E8AA5((int)strlen(name) + 1);
        strcpy((char *)row->name, name);
        row->f14 = remain;
        row->f18 = flags;
        row->f8 = 0;
        row->f20 = fileSize;
        row->f1C = cnt;
        row->f24 = (unsigned char)key;
        if (a2 != 0) {
            func_0013B760(row, 0);
            func_0013B9C0(row, 0);
        }
    } else {
        func_0013B840(row);
        cur = idx;
    }
    return result;
}
int C_0013DFF0::func_0013DFF0(int a1, int a2) {
    C_0013DFF0_elem *p = unkC;
    C_0013DFF0_elem *end;
    int count;

    if (!p)
        return 0;
    count = unk10;
    end = p + count - 1;
    if (count > 1) {
        do {
            if (p->f4 && func_001EA426(p->f4, a1) == 0)
                return func_0013C5D0(p, a2);
            p++;
        } while (p != end);
    }
    if (p->f4 && func_001EA426(p->f4, a1) == 0)
        return func_0013C5D0(p, a2);
    return 0;
}

C_0013E080 *C_0013E080::func_0013E080(void) {
    int i;

    func_0001DFE0();
    f24 = (int)((char *)this + 0x14);
    f28 = (int)((char *)this + 0x20);
    vtbl = &D_00284C58;
    fF0 = 0;
    f8 = -1;
    f10 = 0;
    fC = 0;
    fE4 = -1;
    fEC = 0;
    fE8 = 0;
    fF4 = -1;
    fF8 = -1;
    fE0 = -1;
    fFC = 1;
    for (i = 0; i < 8; i++)
        f2C[i] = 0;
    f70 = 0;
    f6C = -1;
    f74 = -1;
    f78 = -1;
    f7C = 0;
    for (i = 0; i < 8; i++) {
        f80[i].x = 0;
        f80[i].y = -2;
        f80[i].z = -0x6000;
    }
    func_0013D550(1, 10, &D_00100000);
    return this;
}

void *C_0013E080::func_0013E140(unsigned int flags) {
    vtbl = &D_00284C58;
    func_0013D400();
    func_0001DFF0();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void C_0013E170::func_0013E170(int index, char *name, int value)
{
    if (index < count) {
        if (strcmp(entries[index].name, name) != 0) {
            func_001E8920(entries[index].name, name, 0x4f);
            entries[index].name[0x4f] = 0;
            entries[index].value = value;
        }
    }
}

struct S_0013E2D0_Line {
    float x;
    float y;
    char name[0x50];
    int value;
};

struct S_0013E2D0_Elem {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x44 - 0xC];
    int f44;
    unsigned int f48;
    char pad4C[2];
    unsigned char f4E;
    char pad4F[0x60 - 0x4F];
    void func_0005E840(const char *name);
    void func_001D6600(void);
    void SetPos(float x, float y) {
        if (f4 != x || f8 != y) {
            f4 = x;
            f8 = y;
            f4E |= 6;
        }
    }
};

struct S_0013E2D0_Rect {
    int left;
    int top;
    int right;
    int bottom;
};

struct C_001617F0 {
    void func_001617F0(void *p, int flag);
};

struct C_0013E2D0 {
    char pad0[0x224];
    int f224;
    S_0013E2D0_Line lines[64];
    char pad1928[0x10];
    int f1938;
    int f193C;
    char pad1940[4];
    S_0013E2D0_Elem *f1944;
    int f1948;
    int func_0013E2D0(void);
};

extern int D_002A6A18;
extern int D_002BEAF4;
extern int D_0028F5DC;
extern int D_00284D30;
extern C_001617F0 *D_002A829C;

void func_0013E1F0(int obj, int id, int fmt, ...)
{
    va_list ap;

    if ((*(unsigned char *)(obj + 0x21) & 1) != 0 && id == *(int *)(obj + 0x1938) &&
        *(int *)(obj + 0x224) + 1 < *(int *)(obj + 0x193c)) {
        char *buf = (char *)(obj + 0x24);
        va_start(ap, fmt);
        func_001ADD20(buf, 0x200, fmt, ap);
        va_end(ap);
        int n = ++*(int *)(obj + 0x224);
        ((C_0013E170 *)obj)->func_0013E170(n, buf, 0);
    }
}

void func_0013E260(int obj, int id, int fmt, ...)
{
    va_list ap;

    if ((*(unsigned char *)(obj + 0x21) & 1) != 0 && id == *(int *)(obj + 0x1938) &&
        *(int *)(obj + 0x224) + 1 < *(int *)(obj + 0x193c)) {
        char *buf = (char *)(obj + 0x24);
        va_start(ap, fmt);
        func_001ADD20(buf, 0x200, fmt, ap);
        va_end(ap);
        int n = ++*(int *)(obj + 0x224);
        ((C_0013E170 *)obj)->func_0013E170(n, buf, 1);
    }
}

int C_0013E2D0::func_0013E2D0(void)
{
    S_0013E2D0_Rect rect;
    int i;

    if (f224 != -1 && f1948 != 0 && f1938 != -1) {
        D_002BEAF4 = D_002A6A18;
        if (D_002A8490->f264 != 0) {
            D_002EFDB8->f4->func_0012B1D0((int *)&rect);
            D_002EFDB8->f4->func_0012B190(0, 0, 0x280, 0x1c0);
        }
        D_002A829C->func_001617F0(&D_00284D30, 1);
        for (i = 0; i <= f224; i++) {
            S_0013E2D0_Line *line = &lines[i];
            f1944[i].func_0005E840(line->name);
            f1944[i].SetPos(line->x, line->y);
            if (line->value == 1) {
                S_0013E2D0_Elem *e = &f1944[i];
                unsigned int c = e->f48;
                if (c != 0xffff0000) {
                    e->f4E |= 8;
                    e->f48 = (c & 0xffff0000) | 0xff0000;
                }
            } else {
                S_0013E2D0_Elem *e = &f1944[i];
                unsigned int c = e->f48;
                if (c != 0xffffffff) {
                    e->f4E |= 8;
                    e->f48 = c | 0xffffff;
                }
            }
            S_0013E2D0_Elem *e = &f1944[i];
            if (e->f44 != D_0028F5DC) {
                e->f44 = D_0028F5DC;
                e->f4E |= 6;
            }
            f1944[i].func_001D6600();
        }
        f224 = -1;
        if (D_002A8490->f264 != 0) {
            D_002EFDB8->f4->func_0012B190(rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top);
        }
    }
    return 1;
}

void func_0013E4A0(float *dst, float *src)
{
    AsmTransposeMatrix(dst, src);
}

#pragma optimize("y", on)
DXCamera *DXCamera::func_0013E4F0(int a)
{
    func_0012A3F0(a);
    vtbl = &D_00284D5C;
    AsmIdentityMatrix(&f250);
    AsmIdentityMatrix(&f290);
    return this;
}
#pragma optimize("", on)
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void DXCamera::func_0013E580(void)
{
    __declspec(align(16)) Mat4_0013E4F0 m;
    float s;

    func_0012AEC0();
    func_000263B0(&f250, (char *)this + 0xb0, (char *)this + 0x70);
    AsmZeroMatrix(&m);
    s = D_00284DD8 / f200;
    m.m[15] = s;
    m.m[0] = s;
    m.m[5] = s;
    m.m[10] = s;
    func_000263B0(&f290, &f250, &m);
}
int DXCamera::func_0013E610(void)
{
    __declspec(align(16)) Mat4_0013E4F0 m;

    if (!func_0012B470())
        return 0;
    if (D_002EFDB8->f4 == this) {
        func_0013E4A0(&m, (char *)this + 0xb0);
        func_001FFA20(0, &m);
        func_0013E4A0(&m, (char *)this + 0x70);
        func_001FFA20(1, &m);
    }
    return 1;
}

void func_0013E680(void) {
    D_002EFDB8->func_001D5600();
    D_002A8490->func_00156E80();
}

void DXCubeTextureMap::func_0013E6A0(void)
{
    int i;

    vtbl = &D_00284DEC;
    if (f110 != 0)
        func_00201100(f110);
    for (i = 0; i < 6; i++) {
        if (f114[i] != 0)
            f114[i]->v2();
        if (f12C[i] != 0)
            func_00201100(f12C[i]);
    }
    func_001D6B00();
}

