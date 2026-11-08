/* 10 functions from 0x0013B9C0 to 0x0013C960, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
int func_001EA426(const char *, const char *);
extern char D_00010000[];
extern char D_00020000[];
extern char D_00040000[];
extern char D_00080000[];
extern char D_00100000[];
extern char D_00140000[];
extern char D_00180000[];
extern char D_001C0000[];
extern char D_00200000[];

void func_00012140(void *p);
int func_0014FED0(void *a, int b, int c);
char *func_001E9260(char *s, int c);
extern "C" int D_0014FEE0(void *a);
void func_0014FE50(void *a);
void func_001E8390(void *p);
void *func_001E8AA5(int size);
int func_0014FE60(void *p, int size, void *file);

void *func_001E83E8(void *p, int size);
void *func_0014FDF0(const char *name, char *mode);
int func_00192300(void *file, int *pos, int *val);
extern "C" int __stdcall func_0013B530(void *a, void *b, int c, int d);
extern "C" int __stdcall func_0013B660(void *a, void *b, int c);
extern short D_00284C50;
extern "C" unsigned int strlen(const char *);
extern "C" char *strcpy(char *, const char *);
extern "C" void *memcpy(void *, const void *, unsigned int);
static inline int min_i(int a, int b) { return a > b ? b : a; }

struct S_0013B9C0_Ent28 {
    int f0;
    int f4;
    int f8;
    int fC;
    void *f10;
    void *f14;
    int f18;
    int f1C;
    int f20;
    unsigned char f24;
    char pad25[3];
};

struct S_0013B9C0_Cache {
    void *f0;
    int f4;
    int f8;
};

struct S_0013B9C0_Ent20 {
    int f0;
    int f4;
    int f8;
    int fC;
    void *f10;
    void *f14;
    int f18;
    int f1C;
};

template <class T> inline const T &Min_0013B9C0(const T &a, const T &b) { return (b < a) ? b : a; }

struct C_0013B9C0 {
    char pad0[8];
    int f8;
    S_0013B9C0_Ent28 *fC;
    int f10;
    char pad14[0x10];
    int *f24;
    int *f28;
    char pad2C[0x40];
    int f6C;
    int f70;
    int f74;
    int f78;
    unsigned short *f7C;
    S_0013B9C0_Cache f80[8];
    int fE0;
    char padE4[4];
    S_0013B9C0_Ent20 *fE8;
    int fEC;
    char padF0[0x10];
    int f100;
    int func_0013C3D0(const char *name, char *mode, int a2);
    int func_0013AC40(int a, int b, int c, int d, int e, int f);
    int func_0013C240(const char *name, unsigned int size);
    int func_0013C1D0(int a);
    int func_0013C110(int a);
    int func_0013C5D0(S_0013B9C0_Ent28 *a, int b);
    int func_0013C660(int a);
    char *func_0013C6E0(int idx, char *buf, int size);
    int func_0013C8A0(int idx, int a2, int size, int count);
    int func_0013B760(S_0013B9C0_Ent28 *p, int v);
    int func_0013BBA0(S_0013B9C0_Ent28 *p, int a1, int a2, int a3);
    void func_0013B440(void *a);
    int func_0013B3E0(void *a, int b);
    void func_0013AEC0(int a);
    void func_0013B840(void *a);
    void func_0013B9C0(S_0013B9C0_Ent28 *p, int index);
    void func_0013B480(void *a);
    int func_0013B4C0(void *a, int size, void *file);
};

void __fastcall func_0013B9C0(C_0013B9C0 * volatile self, int dummy, S_0013B9C0_Ent28 * volatile p, int index)
{
 volatile int size;
 volatile int limit;
 volatile int remaining;
 func_00012140(p->f10);
 int flags = p->fC;
 int compressed = flags & 0x40;
 int extra = 0;
 if (flags & 0x200) extra = 1;
 C_0013B9C0 *t = self;
 if (t->f74 == -1 && compressed) {
  if (t->f7C) func_001E8390(t->f7C);
  self->f7C = (unsigned short *)func_001E8AA5(((int *)p)[8]);
  S_0013B9C0_Ent28 *e = p;
  func_0014FED0(e->f10, ((int *)e)[7], 0);
  e = p;
  func_0014FE60(self->f7C, ((int *)e)[8], e->f10);
  t = self;
 }
 if (extra) t->func_0013B480((char *)t + 0x2c);
 int offset = ((int *)p)[6];
 C_0013B9C0 *s = self;
 if (compressed) {
  int n = *(volatile int *)&index;
  if (n > 0) {
   unsigned short *q = s->f7C;
   int i = 0;
   do {
    offset += *q + extra;
    ++q;
    ++i;
   } while (i != n);
  }
 } else offset += (extra + 0x6000) * index;
 func_0014FED0(p->f10, offset, 0);
 limit = self->f70;
 remaining = (int)p->f14 - offset;
 size = AsmMinI(remaining, limit);
 int result;
 if (extra) {
  self->f100 = 1;
  t = self;
  result = t->func_0013B4C0((char *)t + 0x2c, size, p->f10);
 } else {
  void *a = p->f10;
  int b = size;
  t = self;
  result = t->func_0013B4C0((char *)t + 0x2c, b, a);
 }
 t = self;
 t->f74 = *(volatile int *)&index;
 if (compressed) {
  t = self;
  t->f78 = t->f74;
  unsigned short *q = t->f7C + t->f74;
  do {
   result -= *q + extra;
   ++q;
   if (result > *q) ++t->f78;
   t = self;
  } while (result > 0);
 } else {
  int block = extra + 0x6000;
  t = self;
  t->f78 = t->f74 + result / block;
  if (result % block) --self->f78;
 }
}

int C_0013B9C0::func_0013BBA0(S_0013B9C0_Ent28 *p, int a1, int a2, int a3)
{
    S_0013B9C0_Cache *entry;
    int dest = a2;
    int *pdest = &dest;
    int count = 0;
    int n, d, size, block, sum, extra, i;
    int pos, val;
    unsigned short wl;

    if (p->fC & 0x100) {
        if (a1 < 0) {
            entry = (S_0013B9C0_Cache *)func_001E8AA5(0xc);
            if (entry == 0) {
                return 0;
            }
            entry->f4 = -2;
            entry->f8 = -0x6000;
            entry->f0 = func_001E8AA5(0x6000);
            if (entry->f0 == 0) {
                func_001E8390(entry);
                return 0;
            }
        } else {
            entry = &f80[a1];
        }
        goto main_loop;
    }
    if (a1 == -1 || a3 >= 0x6000) {
        func_0014FED0(p->f10, p->f18 + p->f8, 0);
        if (func_0014FE60((void *)dest, a3, p->f10) != a3) {
            return 0;
        }
        p->f8 += a3;
        return a3;
    }
    entry = &f80[a1];
    d = p->f8 - entry->f8;
    if (d >= 0) {
        if (d < 0x6000) {
            goto main_loop;
        }
        entry->f8 = p->f8;
    }
    size = min_i(0x6000, (int)p->f14 - (int)p->f18 - p->f8);
    func_0014FED0(p->f10, p->f18 + p->f8, 0);
    if (func_0014FE60(entry->f0, size, p->f10) != size) {
        return 0;
    }
    n = min_i(a3, 0x6000);
    memcpy((void *)dest, entry->f0, n);
    p->f8 += n;
    count = n;
    *pdest += n;
    if (count == a3) {
        goto done;
    }
    entry->f8 = p->f8;
    size = min_i(0x6000, (int)p->f14 - (int)p->f18 - p->f8);
    func_0014FED0(p->f10, p->f18 + p->f8, 0);
    if (func_0014FE60(entry->f0, size, p->f10) != size) {
        return n;
    }
    memcpy((void *)*pdest, entry->f0, a3 - n);
    p->f8 += a3 - n;
    return a3;

main_loop:
    d = p->f8 - entry->f8;
    if (d < 0 || d >= 0x6000) {
        block = p->f8 / 0x6000;
        if (block < f74 || block > f78) {
            func_0013B9C0(p, block);
        }
        sum = 0;
        extra = (p->fC & 0x200) ? 1 : 0;
        if (p->fC & 0x40) {
            if (block - f74 > 0) {
                unsigned short *q = f7C + f74;
                for (i = 0; i < block - f74; i++) {
                    sum += q[i] + extra;
                }
            }
            wl = f7C[block];
        } else {
            sum = (block - f74) * (extra ? 0x6001 : 0x6000);
            wl = 0x6000;
        }
        if (extra) {
            pos = 0;
            val = 0;
            if (f100 != 0) {
                if (pos < wl + sum) {
                    do {
                        f100 = func_00192300(p->f10, &pos, &val);
                    } while (f100 != 0);
                    if (val == 0) {
                        goto L617;
                    }
                    for (;;) {
                        func_0013B9C0(p, block);
                        pos = 0;
                        f100 = func_00192300(p->f10, &pos, &val);
                        if (f100 == 0) {
                            break;
                        }
                        if (pos >= wl) {
                            break;
                        }
                        do {
                            f100 = func_00192300(p->f10, &pos, &val);
                        } while (f100 != 0);
                        if (val == 0) {
                            break;
                        }
                    }
                }
            }
        }
L617:
        entry->f8 = block * 0x6000;
        if ((p->fC & 0x40) && wl != 0x6000) {
            func_0013B530((char *)this + 0x2c, entry->f0, wl, sum);
        } else {
            func_0013B660((char *)this + 0x2c, entry->f0, sum);
        }
        if ((p->fC & 0x80) && (p->fC & 0x400)) {
            unsigned char dl = (unsigned char)((p->f24 + block) / 0xff);
            unsigned char *q = (unsigned char *)entry->f0;
            unsigned char *end = q + 0x5fff;
            while (q != end) {
                unsigned char b = *q;
                *q = b ^ dl;
                dl += b;
                q++;
            }
            *q ^= dl;
        }
        d = p->f8 - entry->f8;
    }
    n = min_i(a3 - count, 0x6000 - d);
    memcpy((void *)*pdest, (char *)entry->f0 + d, n);
    p->f8 += n;
    count += n;
    *pdest += n;
    if (count != a3) {
        goto main_loop;
    }
done:
    if (entry->f4 == -2) {
        func_001E8390(entry->f0);
        func_001E8390(entry);
    }
    return count;
}

int C_0013B9C0::func_0013C110(int idx)
{
    S_0013B9C0_Ent20 *e = &fE8[idx];
    S_0013B9C0_Ent28 *t;
    int x;

    if (!(e->f18 & 4)) {
        return 0;
    }
    e->f18 &= ~4;
    x = e->f4;
    e->f10 = 0;
    if (((int *)((char *)this + 0x84))[x * 3] == idx) {
        fE0 = x;
    }
    t = &fC[e->f0];
    if (!(t->fC & 2)) {
        if (t->f10 != 0) {
            if (t->fC & 0x10) {
                func_0014FED0(t->f10, 0, 2);
                e->f14 = (void *)D_0014FEE0(t->f10);
                t->f14 = e->f14;
            }
            func_0014FE50(t->f10);
            t->f10 = 0;
        }
        if (e->f1C == 0 && !(e->f18 & 8)) {
            func_0013B840(t);
            func_0013AEC0(idx);
        }
    }
    return 1;
}

int C_0013B9C0::func_0013C1D0(int arg)
{
    int *q;
    int r;

    if (f6C != -1) {
        if (fC[f6C].f10 != 0) {
            func_00012140(fC[f6C].f10);
        }
        f74 = -1;
        f78 = -1;
        f6C = -1;
    }
    q = f24;
    do {
        *q = -1;
        q++;
    } while (q <= f28);
    func_0013B440((void *)((char *)this + 0x2c));
    r = func_0013B3E0((void *)((char *)this + 0x2c), arg);
    if (r == 0) {
        f70 = 0;
        return 0;
    }
    return 1;
}

int C_0013B9C0::func_0013C240(const char *name, unsigned int maxSize) {
 unsigned int minSize=0;
 for (int i=0;i<f10;i++) {
 S_0013B9C0_Ent28 *e=&fC[i];
 if (e->f4 && !func_001EA426((const char *)e->f4,name)) {
 minSize=(unsigned int)e->f14; break;
 }
 }
 unsigned int size;
 if (minSize <= (unsigned int)D_00010000 && maxSize >= (unsigned int)D_00010000) size=(unsigned int)D_00010000;
else if (minSize <= (unsigned int)D_00020000 && maxSize >= (unsigned int)D_00020000) size=(unsigned int)D_00020000;
else if (minSize <= (unsigned int)D_00040000 && maxSize >= (unsigned int)D_00040000) size=(unsigned int)D_00040000;
else if (minSize <= (unsigned int)D_00080000 && maxSize >= (unsigned int)D_00080000) size=(unsigned int)D_00080000;
else if (minSize <= (unsigned int)D_00100000 && maxSize >= (unsigned int)D_00100000) size=(unsigned int)D_00100000;
else if (minSize <= (unsigned int)D_00140000 && maxSize >= (unsigned int)D_00140000) size=(unsigned int)D_00140000;
else if (minSize <= (unsigned int)D_00180000 && maxSize >= (unsigned int)D_00180000) size=(unsigned int)D_00180000;
else if (minSize <= (unsigned int)D_001C0000 && maxSize >= (unsigned int)D_001C0000) size=(unsigned int)D_001C0000;
else if (minSize <= (unsigned int)D_00200000 && maxSize >= (unsigned int)D_00200000) size=(unsigned int)D_00200000;
 else size=maxSize;
 return func_0013C1D0(size);
}

int C_0013B9C0::func_0013C3D0(const char *name, char *mode, int a2)
{
 S_0013B9C0_Ent28 *e; int idx; int n; char buf[12]; bool ok=true; int unusedSentinel=-1;
 if(f8==unusedSentinel) {
 f10++; idx=f10;
 fC=(S_0013B9C0_Ent28*)func_001E83E8(fC,idx*40);
 if(!fC) return 0;
 idx=f10-1; f8=unusedSentinel; e=&fC[idx];
 e->fC=1; e->f10=0; e->f0=idx; e->f4=0; e->f8=0; e->f14=0; ((char*)e)[0x24]=0;
 } else {
 int i=f8; idx=i; f8=unusedSentinel;
 n=f10; if(n>1) {
 do { if(++i>=n)i=0; if(i==idx)break; } while(!((e=&fC[i])->fC&1));
 if(i!=idx)f8=i;
 }
 }
 char *d=buf; const char *s=mode; char c;
 do {c=*s; d[s-mode]=c; ++s;}while(c);
 if(!func_001E9260(buf,'b')) {
 char *p=buf; --p; while(*++p) {} *(short*)p=D_00284C50;
 }
 void *fp=func_0014FDF0(name,buf);
 if(!fp) {ok=0; func_0013B840(&fC[idx]); f8=idx;} else {
 func_0014FED0(fp,0,2);
 int sz=D_0014FEE0(fp);
 if(!func_0013AC40((int)name,idx,0,sz,a2,5)) {
 ok=0; func_0014FE50(fp);
 func_0013B840(&fC[idx]); f8=idx;
 } else {
 e=&fC[idx]; e->f10=fp; e->fC=4; e->f8=0; e->f14=(void*)sz;
 const char *q=name; const char *start=q+1; while(*q++) {}
 e->f4=(int)func_001E8AA5(q-start+1);
 char *dd=(char*)e->f4; q=name; while((*dd++=*q++)!=0) {}
 if(func_001E9260(mode,'w')||func_001E9260(mode,'a')||func_001E9260(mode,'+'))e->fC|=0x10;
 ((int*)e)[6]=0; ((int*)e)[8]=0; ((int*)e)[7]=0; ((char*)e)[0x24]=0; e->f0=idx; } } return ok;
}

int C_0013B9C0::func_0013C5D0(S_0013B9C0_Ent28 *arg1, int arg2)
{
    int result = 1;
    int i;

    arg1->fC |= 0x20;
    i = 0;
    do {
        if (fE8[i].f0 == arg1->f0) {
            if (arg2 != 0) {
                func_0013AEC0(i);
            } else if (fE8[i].f1C == 0 && !(fE8[i].f18 & 4)) {
                func_0013AEC0(i);
            } else {
                result = 0;
            }
        }
        i++;
    } while (i < fEC);
    if (result != 0) {
        func_0013B840(arg1);
    }
    return 1;
}

int C_0013B9C0::func_0013C660(int arg)
{
    int result = 1;
    S_0013B9C0_Ent28 *e = fC;
    S_0013B9C0_Ent28 *end = e + f10 - 1;
    if (f10 > 1) {
        do {
            if (!func_0013C5D0(e, arg)) {
                result = 0;
            }
            e++;
        } while (e != end);
    }
    if (!func_0013C5D0(e, arg)) {
        result = 0;
    }
    int *q = f24;
    do {
        *q = -1;
        q++;
    } while (q <= f28);
    return result;
}

char *C_0013B9C0::func_0013C6E0(int idx, char *buf, int size)
{
    S_0013B9C0_Ent20 *e = &fE8[idx];
    int remain = (int)e->f14 - (int)e->f10;
    S_0013B9C0_Ent28 *t;
    int n;
    int lim;
    int bound;
    char *p;

    if (remain <= 0) {
        *buf = 0;
        return 0;
    }
    t = &fC[e->f0];
    if (!func_0013B760(t, e->fC + (int)e->f10)) {
        return 0;
    }
    bound = ((int)e->f10 / 0x6000 + 1) * 0x6000 - (int)e->f10;
    lim = min_i(remain, size - 2);
    n = min_i(bound, lim);
    if (!func_0013BBA0(t, e->f4, (int)buf, n)) {
        *buf = 0;
        return 0;
    }
    buf[n] = 0;
    p = func_001E9260(buf, 10);
    if (!p && n != remain) {
        int m = min_i(remain, size - 2) - bound;
        if (!func_0013BBA0(t, e->f4, (int)(buf + n), m)) {
            *buf = 0;
            return 0;
        }
        buf[n + m] = 0;
        p = func_001E9260(buf, 10);
        n += m;
    }
    if (p) {
        n = (int)(p - buf) + 1;
        if (p > buf && p[-1] == 13) {
            p--;
            *p = 10;
        }
        p[1] = 0;
    }
    e->f10 = (void *)((int)e->f10 + n);
    return buf;
}

int C_0013B9C0::func_0013C8A0(int idx, int a2, int size, int count)
{
 S_0013B9C0_Ent20 *e = &fE8[idx];
 S_0013B9C0_Ent28 *t = &fC[e->f0];
 if (func_0013B760(t, e->fC + (int)e->f10)) {
 int avail = (int)e->f14 - (int)e->f10;
 int want = size * count;
 int n = AsmMinI(want, avail);
 if (n >= 1) {
 int r = func_0013BBA0(t,e->f4,a2,n);
 e->f10 = (void *)((int)e->f10+r);
 if (r != n) { if (r) return n/r; }
 else return count;
 }
 }
 return 0;
}

