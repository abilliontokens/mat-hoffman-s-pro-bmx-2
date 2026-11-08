/* 27 functions from 0x0013AB60 to 0x0013B9C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0013B260 {
    undefined4 func_0013B260(int param_1);
};

struct C_0013B1F0 {
    undefined4 func_0013B1F0(int param_1, undefined4 param_2);
};

struct C_0013AFD0 {
    undefined4 func_0013AFD0(int param_1);
};

#include <string.h>
#include "asm_helpers.h"

static inline int Min_0013B530(int a, int b) { return a < b ? a : b; }
template <class T> inline const T &MinRef_0013B530(const T &a, const T &b) { return b < a ? b : a; }
template <class T> inline const T &Max_0013AC40(const T &a, const T &b) { return a < b ? b : a; }

extern "C" int func_0014FF00(const char *path, char *drive, char *dir, char *fname, char *ext);
void func_001E8390(void *p);
extern "C" void *func_0014FDF0(const char *name, const char *mode);
extern "C" void func_0014FE50(void *fp);
extern char D_00275FB4[];

/* one 0x20-byte slot of C_0013AEC0::fE8 */
struct S_0013AEC0_Slot {
    int f0;
    int f4;
    void *f8;
    int fC;
    unsigned int f10;
    unsigned int f14;
    int f18;
    int f1C;
};

struct S_0013AEC0_Ent {
    int f0;
    int f4;
    int f8;
};

/* one 0x28-byte row of C_0013AEC0::fC */
struct S_0013AF80_Row {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    char f24;
    char pad25[3];
};

extern "C" int D_0014FEF0(int p);
extern "C" int D_0014FEE0(int fp);
int func_0014FED0(int fp, int pos, int whence);
int func_0014FE80(void *buf, int size, int count, int fp);
int func_001EA426(const char *a, const char *b);
void *func_001E8AA5(unsigned int size);
void func_00012140(int p);
int func_0014FE60(int a0, int a1, int a2);

/* eight allocated buffers with their sizes (freed by func_0013B440) */
struct S_BufSet {
    void *bufs[8];
    int sizes[8];
    int f40;
    int total;
};

/* 12-byte record starting at +0x80 of C_0013AEC0 */
struct S_0013B340_Buf {
    int f0;
    int f4;
    int f8;
};

struct C_0013AEC0 {
    char pad0[0xC];
    S_0013AF80_Row *fC;
    char pad10[0x14];
    int *f24;
    int *f28;
    int f2C[8];
    char pad4C[0x20];
    int f6C;
    char pad70[4];
    int f74;
    int f78;
    char pad7C[8];
    S_0013AEC0_Ent ents[7];
    char padD8[8];
    int fE0;
    int fE4;
    S_0013AEC0_Slot *fE8;
    int fEC;
    int fF0;
    char padF4[4];
    int fF8;
    int fFC;
    int func_0013AC40(const char * volatile key, int a2, int a3, int a4, int *out, int grow);
    int func_0013AFB0(int idx);
    void func_0013B040(int id);
    int func_0013B1A0(const char *key);
    int func_0013B760(S_0013AF80_Row *row, int v);
    int func_0013B930(int idx, void *buf, int size, int count);
    void func_0013B210(int id);
    void func_0013B840(S_0013AF80_Row *row);
    void func_0013B280(int keep);
    void func_0013AEC0(int idx);
    int func_0013AF80(int idx);
    int func_0013AF40(int idx, int *a, unsigned int *b);
    int func_0013AFF0(int idx, int v, int mode);
    int func_0013B130(const char *key);
    void func_0013B340(void);
    void func_0013B390(int idx);
    int func_0013B3E0(S_BufSet *set, unsigned int size);
};


char func_0013AB60(const char *path)
{
    char dir[256];
    char ext[256];
    char fname[260];
    char drive[3];
    char key;
    char c;
    const char *p;
    int n;
    int i;

    func_0014FF00(path, drive, dir, fname, ext);
    strcat(fname, ext);
    p = fname;
    key = (char)0xfa;
    n = strlen(fname);
    for (i = 0; i < n; i++) {
        c = *p++;
        key += (char)((key + 3) ^ c);
    }
    return key;
}

void func_0013AC00(unsigned char *p, unsigned int n, unsigned char key)
{
    unsigned char *last = p + (n - 1);
    unsigned char c;

    if (n > 1) {
        do {
            c = *p ^ key;
            key = key + *p;
            *p = c;
            p++;
        } while (p != last);
        *p = *p ^ key;
        return;
    }
    *p = *p ^ key;
}

void *func_001E83E8(void *p, unsigned int size);
int C_0013AEC0::func_0013AC40(const char *key, int a2, int a3, int a4, int *out, int grow)
{
    int i;
    for (i = 0; i < fEC; i++) {
        if (fE8[i].f8 != 0 && func_001EA426(key, (const char *)fE8[i].f8) == 0)
            return 1;
    }
    if (fE4 == -1) {
        int n = AsmMaxI(grow, 1);
        int cap = fEC + n;
        fE8 = (S_0013AEC0_Slot *)func_001E83E8(fE8, cap * sizeof(S_0013AEC0_Slot));
        if (fE8 == 0)
            return 0;
        fE4 = fEC;
        do {
            fE8[fEC].f18 = 1;
            fE8[fEC].f8 = 0;
            fE8[fEC].f0 = 0;
            fE8[fEC].fC = 0;
            fE8[fEC].f10 = 0;
            fE8[fEC].f14 = 0;
            fE8[fEC].f4 = 0;
            fE8[fEC].f1C = 0;
            fEC++;
        } while (fEC != cap);
    }
    int idx = fE4;
    fE4 = -1;
    int j = idx + 1;
    if (fEC > 1) {
        if (j == fEC)
            j = 0;
        do {
            if (fE8[j].f18 & 1) {
                fE4 = j;
                break;
            }
            j++;
            if (j == fEC)
                j = 0;
        } while (j != idx);
    }
    S_0013AEC0_Slot *s = &fE8[idx];
    s->f18 = 0;
    char *buf = (char *)func_001E8AA5(strlen(key) + 1);
    s->f8 = buf;
    strcpy(buf, key);
    s->f0 = a2;
    s->fC = a3;
    s->f10 = 0;
    s->f14 = a4;
    s->f4 = 0;
    s->f1C = 0;
    if (out != 0)
        *out = idx;
    return 1;
}

void C_0013AEC0::func_0013AEC0(int idx)
{
    S_0013AEC0_Slot *s = &fE8[idx];

    if (s->f4 != -1) {
        S_0013AEC0_Ent *e = &ents[s->f4];
        if (e->f0 == idx) {
            e->f0 = -1;
            fE0 = s->f4;
        }
    }
    if (s->f8 != 0) {
        func_001E8390(s->f8);
        s->f8 = 0;
    }
    s->f4 = 0;
    s->f10 = 0;
    s->f0 = 0;
    s->f1C = 0;
    s->f14 = 0;
    s->fC = 0;
    s->f18 = 1;
    fE4 = idx;
}

int C_0013AEC0::func_0013AF40(int idx, int *a, unsigned int *b)
{
    if (a == 0) {
        if (b == 0) {
            return -1;
        }
    } else {
        *a = 0;
        if (b == 0) {
            return 0;
        }
    }
    *b = fE8[idx].f14;
    return 0;
}

int C_0013AEC0::func_0013AF80(int idx)
{
    int v = fC[fE8[idx].f0].f10;
    if (v != 0) {
        return D_0014FEF0(v);
    }
    return 0;
}

int C_0013AEC0::func_0013AFB0(int idx)
{
    S_0013AEC0_Slot *s = &fE8[idx];

    return (s->f10 < s->f14) - 1;
}

undefined4 C_0013AFD0::func_0013AFD0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0xe8) + 0x10 + param_1 * 0x20);
}

int C_0013AEC0::func_0013AFF0(int idx, int v, int mode)
{
    S_0013AEC0_Slot *s = &fE8[idx];

    if (mode == 0) {
        s->f10 = 0;
    } else if (mode == 2) {
        s->f10 = s->f14;
    }
    s->f10 += v;
    return 0;
}

void C_0013AEC0::func_0013B040(int id)
{
    S_0013AEC0_Slot *s = &fE8[id];
    int i;
    int found;

    s->f18 |= 4;
    s->f10 = 0;
    if (ents[s->f4].f0 != id) {
        if (fE0 != -1) {
            s->f4 = fE0;
            ents[fE0].f0 = id;
            ents[fE0].f4 = -0x6000;
            fE0 = -1;
        } else {
            found = 0;
            i = 0;
            do {
                int st = ents[i].f0;
                if (st != -2 && (st == -1 || (fE8[st].f18 & 4) == 0)) {
                    s->f4 = i;
                    ents[i].f4 = -0x6000;
                    ents[i].f0 = id;
                    found = 1;
                }
                i++;
            } while (i < 8 && !found);
            if (!found) {
                s->f4 = -1;
            }
        }
    } else if (fE0 == s->f4) {
        fE0 = -1;
    }
    if (fF0 != 0) {
        s->f18 |= 8;
    }
}

int C_0013AEC0::func_0013B130(const char *key)
{
    int i;
    int start;

    start = fF8 + 1;
    if (start >= fEC) {
        start = 0;
    }
    i = start;
    do {
        const char *name = (const char *)fE8[i].f8;
        if (name != 0 && func_001EA426(key, name) == 0) {
            fF8 = i;
            return i;
        }
        i++;
        if (i >= fEC) {
            i = 0;
        }
    } while (i != start);
    return -1;
}

int C_0013AEC0::func_0013B1A0(const char *key)
{
    void *fp;

    if (func_0013B130(key) != -1) {
        return 1;
    }
    if (fFC != 0) {
        fp = func_0014FDF0(key, D_00275FB4);
        if (fp != 0) {
            func_0014FE50(fp);
            return 1;
        }
    }
    return 0;
}

undefined4 C_0013B1F0::func_0013B1F0(int param_1, undefined4 param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(*(int *)(in_ECX + 0xe8) + 0x1c + param_1 * 0x20) = param_2;
  return 1;
}

void C_0013AEC0::func_0013B210(int id)
{
    S_0013AEC0_Slot *s;
    S_0013AEC0_Slot *last;

    if (fE4 != 0 && fEC >= 1) {
        s = fE8;
        last = s + (fEC - 1);
        do {
            if (s->f1C == id) {
                s->f1C = 0;
                return;
            }
            s++;
        } while (s != last);
        if (s->f1C == id) {
            s->f1C = 0;
        }
    }
}

undefined4 C_0013B260::func_0013B260(int param_1)
{
  int in_ECX = (int)this;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ECX + 0xfc);
  *(uint *)(in_ECX + 0xfc) = (uint)(param_1 == 0);
  return uVar1;
}

void C_0013AEC0::func_0013B280(int keep)
{
    S_0013B340_Buf *first;
    S_0013B340_Buf *p;
    int count;
    int idx;

    if (fE0 != -1) {
        ((S_0013B340_Buf *)((char *)this + 0x80) + fE0)->f4 = -1;
        ((S_0013B340_Buf *)((char *)this + 0x80) + fE0)->f8 = -0x6000;
    }
    first = (S_0013B340_Buf *)((char *)this + 0x80);
    fE0 = -1;
    count = 0;
    p = (S_0013B340_Buf *)((char *)this + 0x80);
    do {
        idx = p->f4;
        if (idx != -2 && (idx == -1 || (fE8[p->f4].f18 & 4) == 0)) {
            p->f8 = -0x6000;
            p->f4 = -1;
            count++;
        }
        p++;
    } while (p <= (S_0013B340_Buf *)((char *)this + 0xd4));
    count -= keep;
    if (count >= 1) {
        do {
            if (first->f4 == -1) {
                first->f4 = -2;
                count--;
                func_001E8390((void *)first->f0);
                first->f0 = 0;
            }
            first++;
        } while (count > 0);
    }
}

void C_0013AEC0::func_0013B340(void)
{
    S_0013B340_Buf *p = (S_0013B340_Buf *)((char *)this + 0x80);
    int r;

    do {
        if (p->f4 == -2) {
            r = (int)func_001E8AA5(0x6000);
            p->f0 = r;
            p->f8 = -0x6000;
            p->f4 = r != 0 ? -1 : -2;
        }
        p++;
    } while (p <= (S_0013B340_Buf *)((char *)this + 0xd4));
}

void C_0013AEC0::func_0013B390(int idx)
{
    int cur = f6C;
    int p;

    if (cur != idx) {
        if (cur != -1) {
            p = fC[cur].f10;
            if (p != 0) {
                func_00012140(p);
            }
        }
        f74 = -1;
        f78 = -1;
        f6C = idx;
    }
}

int C_0013AEC0::func_0013B3E0(S_BufSet *set, unsigned int size)
{
    unsigned int n = size >> 3;
    int ok;
    int i;
    void *p;

    i = 0;
    set->total = 0;
    ok = 1;
    do {
        p = func_001E8AA5(n);
        set->bufs[i] = p;
        if (i == 0 && p == 0) {
            set->sizes[0] = n;
            ok = 0;
        }
        if (f2C[i] != 0) {
            set->total += n;
            set->sizes[i] = n;
        }
        i++;
    } while (i < 8);
    return ok;
}

void __stdcall func_0013B440(int param_1)
{
  int func_001E8390(...);
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (iVar1 != 0) {
      func_001E8390(iVar1);
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

void __stdcall func_0013B480(S_BufSet *set)
{
    int i;

    for (i = 0; i < 8; i++) {
        if (set->bufs[i] != 0) {
            memset(set->bufs[i], 0, set->sizes[i]);
        }
    }
}

int __stdcall func_0013B4C0(S_BufSet * volatile set, volatile int n, volatile int x)
{
    int total = 0;
    int off;
    volatile int sz;
    volatile int cnt;

    for (off = 0; off < 0x20; off += 4) {
        if (*(int *)((char *)set + off) != 0) {
            sz = *(int *)((char *)set + off + 0x20);
            cnt = n > sz ? sz : n;
            n -= sz;
            if (cnt > 0) {
                total += func_0014FE60(*(int *)((char *)set + off), cnt, x);
            }
        }
    }
    return total;
}

extern "C" int func_001DC8A0(void *, void *, int);
/* func_0013B530's four __stdcall stack arguments as one 16-byte aggregate */
struct S_0013B530_Args {
    int *s;
    char *dst;
    int size;
    unsigned int off;
};
int __stdcall func_0013B530(int *s, char *dst, int size, unsigned int off)
{
    char buf[0x6000];
    int idx = off / (unsigned)s[8];
    int i;
    for (i = 0; i < idx; i++)
        off -= s[8 + i];
    if (size + off > (unsigned)s[8 + idx]) {
        char *p = buf;
        for (i = idx; size > 0; i++) {
            int a = s[8 + i] - off;
            int n = AsmMinI(a, size);
            memcpy(p, (char *)s[i] + off, n);
            size -= n;
            p += n;
            off = 0;
        }
        return func_001DC8A0(dst, buf, 0x6000);
    }
    return func_001DC8A0(dst, (char *)s[idx] + off, 0x6000);
}

void __stdcall func_0013B660(S_BufSet *set, void *dst, unsigned int off)
{
    volatile int tmp[3];
    char buf[0x6000];
    char *out;
    char *src;
    int idx;
    int i;
    int o;
    int n;
    int r;

    idx = off / set->sizes[0];
    for (i = 0; i < idx; i++) {
        off -= set->sizes[i];
    }
    if (off + 0x6000 > (unsigned int)set->sizes[idx]) {
        out = buf;
        tmp[0] = 0x6000;
        o = idx * 4;
        do {
            tmp[1] = *(int *)((char *)set + o + 0x20) - off;
            n = tmp[1];
            r = tmp[0];
            if (n > r) {
                n = r;
            }
            tmp[2] = n;
            n = tmp[2];
            memcpy(out, *(char **)((char *)set + o) + off, n);
            r = tmp[0] - n;
            tmp[0] = r;
            out += n;
            off = 0;
            o += 4;
        } while (r > 0);
        src = buf;
    } else {
        src = (char *)set->bufs[idx] + off;
    }
    memcpy(dst, src, 0x6000);
}

int C_0013AEC0::func_0013B760(S_0013AF80_Row *row, int v)
{
    if (*f24 != row->f0) {
        int found = 0;
        int *p = f24;
        do {
            if (*++p == row->f0) {
                do {
                    *p = p[-1];
                    p--;
                } while (p > f24);
                *f24 = row->f0;
                p = f28;
                found = 1;
            }
        } while (p != f28);
        if (!found) {
            int e = *f28;
            if (e != -1) {
                S_0013AF80_Row *r = &fC[e];
                if (!(r->fC & 0x10) && r->f10) {
                    func_0014FE50((void *)r->f10);
                    r->f10 = 0;
                }
            }
            p = f28;
            do {
                *p = p[-1];
                p--;
            } while (p > f24);
            *f24 = row->f0;
        }
        if (row->fC & 0x100) {
            func_0013B390(row->f0);
        }
    }
    if (row->f10 == 0) {
        row->f10 = (int)func_0014FDF0((const char *)row->f4, D_00275FB4);
        if (row->f10 == 0) {
            return 0;
        }
    }
    row->f8 = v;
    return 1;
}

void C_0013AEC0::func_0013B840(S_0013AF80_Row *row)
{
    int *p = f24;
    int *q;
    int found = 0;
    int v;

    do {
        if (*p == row->f0) {
            q = f28;
            if (*q != -1) {
                *p = *q;
                *f28 = -1;
                found = 1;
            } else {
                do {
                    q--;
                    if (*q != -1) {
                        *p = *q;
                        *q = -1;
                        found = 1;
                    }
                } while (q != p && !found);
            }
        }
        p++;
    } while (p <= f28 && !found);
    v = f6C;
    if (row->f0 == v && v != -1) {
        int h = fC[v].f10;
        if (h != 0) {
            func_00012140(h);
        }
        f74 = -1;
        f78 = -1;
        f6C = -1;
    }
    *(int *)&pad0[8] = row->f0;
    if (row->f10 != 0) {
        func_0014FE50((void *)row->f10);
        row->f10 = 0;
    }
    if (row->f4 != 0) {
        func_001E8390((void *)row->f4);
        row->f4 = 0;
    }
    row->fC = 1;
    row->f8 = 0;
    row->f14 = 0;
    row->f18 = 0;
    row->f20 = 0;
    row->f1C = 0;
    row->f24 = 0;
}

int C_0013AEC0::func_0013B930(int idx, void *buf, int size, int count)
{
    S_0013AEC0_Slot *s = &fE8[idx];
    S_0013AF80_Row *row = &fC[s->f0];
    int r;
    int n;

    if (func_0013B760(row, s->fC + s->f10) != 0) {
        if (D_0014FEE0(row->f10) != row->f8) {
            func_0014FED0(row->f10, row->f8, 0);
        }
        r = func_0014FE80(buf, size, count, row->f10);
        n = r * size;
        s->f10 += n;
        row->f8 += n;
        return r;
    }
    return 0;
}

