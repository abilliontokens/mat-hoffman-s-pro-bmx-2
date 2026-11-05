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
    char pad0[8];
    int f8;
    int fC;
    int f10;
    char pad14[0x14];
};

extern "C" int D_0014FEF0(int p);
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
    char pad10[0x1C];
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
    char padF0[8];
    int fF8;
    int fFC;
    int func_0013AFB0(int idx);
    int func_0013B1A0(const char *key);
    void func_0013B210(int id);
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
    int count;
    int i;
    int idx;

    if (fE0 != -1) {
        ((S_0013B340_Buf *)((char *)this + 0x80) + fE0)->f4 = -1;
        ((S_0013B340_Buf *)((char *)this + 0x80) + fE0)->f8 = -0x6000;
    }
    first = (S_0013B340_Buf *)((char *)this + 0x80);
    fE0 = -1;
    count = 0;
    for (i = 0; i < 8; i++) {
        idx = first[i].f4;
        if (idx != -2 && (idx == -1 || (*(unsigned char *)((int)fE8 + idx * 0x20 + 0x18) & 4) == 0)) {
            first[i].f8 = -0x6000;
            first[i].f4 = -1;
            count++;
        }
    }
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

int __stdcall func_0013B4C0(S_BufSet *set, int n, int x)
{
    int total = 0;
    int off;
    int sz;
    int cnt;

    for (off = 0; off < 0x20; off += 4) {
        if (*(int *)((char *)set + off) != 0) {
            sz = *(int *)((char *)set + off + 0x20);
            cnt = n < sz ? n : sz;
            n -= sz;
            if (cnt > 0) {
                total += func_0014FE60(*(int *)((char *)set + off), cnt, x);
            }
        }
    }
    return total;
}

