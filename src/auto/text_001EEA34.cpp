/* 42 functions from 0x001EEA34 to 0x001EF9D9, found by Ghidra. */
#include "common.h"

extern int D_002F6A38;
extern int D_002955B8[];

struct AllocObj {
    int (*fn0)(int);
    int field_4;
    int field_8;
    int *field_c;
    int field_10;
    int func_001EEE62(int size, int flag);
};

extern AllocObj D_002F6A04;

extern int D_00295BD8;
extern int D_00295BE4;

struct BitObj {
    int f0;
    int s4 : 4;
    unsigned int b4 : 1;
    unsigned int b5 : 1;
    unsigned int b6 : 1;
    unsigned int b7 : 1;
    unsigned int b8 : 1;
    unsigned int rest : 23;
    /* clears the 9-bit state and takes a new value */
    BitObj *Reset(int v) {
        s4 = 0;
        b4 = 0;
        b5 = 0;
        b6 = 0;
        b7 = 0;
        b8 = 0;
        f0 = v;
        return this;
    }
    BitObj *func_001EEEE6(BitObj *o);
    BitObj *func_001EEF4F(BitObj *o);
    int func_001EF1E7(int a);
    int func_001EF1E7();
    BitObj *func_001EF333(int mode);
    void func_001EF613(int a);
    BitObj *func_001EF8F6(int a0, int a1);
    BitObj *func_001EF11B(BitObj *p);
    BitObj *func_001EF170(int mode);
    int func_001EF1FC(void);
    int func_001EF210(void);
    unsigned char func_001EF235(void);
    char *func_001EF26D(char *buf, int n);
    BitObj *func_001EF2FE(BitObj *o);
    void func_001EF68E(char *p, int mode);
    BitObj *func_001EF88F(long num);
    BitObj *func_001EF935(BitObj *o);
    BitObj *func_001EF999(char c);
    BitObj *func_001EF9B2(char *s);
};

/* a stream position handed to func_001F23B8: an offset and a 9-bit state that
   its callers clear without touching the rest of the word */
struct S_001EF0B4_Pos {
    int off;
    unsigned int state : 9;
};

int __fastcall func_001EF1D0(int *a, int b);
void __cdecl func_001F23B8(void *a, S_001EF0B4_Pos *p1, int b, S_001EF0B4_Pos *p2, int c);

/* ten slots after a count (-1 = none), then two fallback cells */
struct S_001EEFBA {
    int count;
    int *items[10];
    int f2C;
    int f30;
    int f34;
    int *func_001EEFBA(int idx);
    S_001EEFBA *func_001EF3B4(void);
    S_001EEFBA *func_001EF3D2(BitObj *src);
};

/* the undecorator's parse context: two S_001EEFBA argument lists back to back */
struct S_001EF577 {
    char pad0[0x3c];
    char f3C[0x3c];
    S_001EF577 *func_001EF577(void *a, char *name, int c, int d, int e);
};

extern char *D_002F6A28;
extern char *D_002F6A2C;
extern void *D_002F6A30;
extern int D_002F6A34;
extern int D_002F6A3C;
extern void *D_002F6A20;
extern void *D_002F6A18;

/* singly linked node: the next pointer is at +4 */
struct S_001EEFE3 {
    int f0;
    S_001EEFE3 *next;
    S_001EEFE3 *func_001EEFE3(S_001EEFE3 *n);
    S_001EEFE3 *func_001EF419(void);
};

/* virtual object with a mode at +8 (Class_00295BE4 slot 1) */
struct S_001EF087 {
    void *vtbl;
    int f4;
    int f8;
    unsigned char func_001EF087(void);
};

extern int D_00295BF0;

/* Class_00295BF0: a counted string, with its own 3-slot vtable */
struct S_001EF45F {
    void *vtbl;
    int f4;
    char *f8;
    int fC;
    char func_001EF4C6(void);
};

void __stdcall func_001EF68E(char *buf, int n);

/* Class_00295BD8 instance */
struct S_001EF033 {
    void *vtbl;
    int f4;
    BitObj *f8;
    S_001EF033 *func_001EF033(BitObj *p);
};

/* Class_00295BE4 instance */
struct S_001EF062 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    S_001EF062 *func_001EF062(int mode);
};

/* element of the list BitObj::f0 heads: vtable slot 0 yields a size, slot 1
   a flag, slot 2 copies out that many bytes; next at +4 */
struct S_001EF210_Node {
    virtual int v0();
    virtual unsigned char v1();
    virtual int v2(char *dst, int n);
    S_001EF210_Node *next;
};

int func_001EEE49(int i) {
    int r = D_002955B8[i];
    if (D_002F6A38 & 1) r += 2;
    return r;
}

int AllocObj::func_001EEE62(int size, int flag) {
    unsigned int sz = (size + 7) & 0xfffffff8;
    if (flag) return fn0(sz);
    if (sz == 0) sz = 8;
    if ((unsigned int)field_10 < sz) {
        int space = 0x1fc;
        if (sz > (unsigned int)space) return 0;
        int *blk;
        do {
            blk = (int *)D_002F6A04.func_001EEE62(0x200, 1);
            if (blk) *blk = 0;
        } while (blk == 0);
        if (field_c == 0) field_8 = (int)blk;
        else *field_c = (int)blk;
        field_c = blk;
        field_10 = space - (int)sz;
    } else {
        field_10 -= (int)sz;
    }
    return (int)(field_c + 1) + field_10;
}

void __fastcall func_001EEEE6(BitObj *dst, int dummy, BitObj *src) {
    dst->f0 = src->f0;
}

BitObj *BitObj::func_001EEF4F(BitObj *o)
{
    if (s4 == 0 || s4 == 2) {
        s4 = o->s4;
        b4 = o->b4;
        b5 = o->b5;
        b6 = o->b6;
        b7 = o->b7;
        f0 = o->f0;
    }
    return this;
}

int *S_001EEFBA::func_001EEFBA(int idx)
{
    if (idx < 0 || idx > 9) {
        return &f2C;
    }
    if (count == -1 || idx > count) {
        return &f34;
    }
    return items[idx];
}

S_001EEFE3 *S_001EEFE3::func_001EEFE3(S_001EEFE3 *n)
{
    S_001EEFE3 *p;
    S_001EEFE3 *q;

    if (n != 0) {
        p = next;
        if (p != 0) {
            do {
                q = p;
                p = q->next;
            } while (p != 0);
            q->next = n;
        } else {
            next = n;
        }
    }
    return this;
}

int func_001EF00C(void)
{
    return 1;
}

S_001EF033 *__fastcall func_001EF033(S_001EF033 *self, int unused, BitObj *p)
{
    self->f4 = 0;
    self->vtbl = &D_00295BD8;
    if (p != 0 && (p->s4 == 1 || p->s4 == 3)) {
        p = 0;
    }
    self->f8 = p;
    return self;
}

S_001EF062 *__fastcall func_001EF062(S_001EF062 *self, int unused, int mode)
{
    self->f4 = 0;
    self->vtbl = &D_00295BE4;
    self->f8 = mode;
    self->fC = (mode == 2) ? 4 : 0;
    return self;
}

unsigned char S_001EF087::func_001EF087(void)
{
    unsigned char t = (f8 != 2);

    t--;
    return t & 0x20;
}

static char *func_001EF094(char *dst, const char *src, unsigned int count)
{
    char *p = dst;
    char c;

    while (count != 0) {
        c = *src;
        *p = c;
        if (c == 0) {
            break;
        }
        p++;
        src++;
        count--;
    }
    return dst;
}

void *__cdecl func_001EF0B4(void *a)
{
    S_001EF0B4_Pos p1;
    S_001EF0B4_Pos p2;

    p1.off = 0;
    p1.state = 0;
    p2.off = 0;
    p2.state = 0;
    func_001F23B8(a, &p2, 0, &p1, 0);
    return a;
}

void *__cdecl func_001EF0E7(void *a)
{
    S_001EF0B4_Pos p1;
    S_001EF0B4_Pos p2;

    p1.off = 0;
    p1.state = 0;
    p2.off = 0;
    p2.state = 0;
    func_001F23B8(a, &p2, 0, &p1, 1);
    return a;
}

BitObj *BitObj::func_001EF11B(BitObj *p)
{
    S_001EF033 *obj;

    if (p != 0) {
        obj = (S_001EF033 *)D_002F6A04.func_001EEE62(0xc, 0);
        if (obj != 0) {
            obj = obj->func_001EF033(p);
        } else {
            obj = 0;
        }
        f0 = (int)obj;
        s4 = (f0 != 0) ? 0 : 3;
    } else {
        s4 = 0;
        f0 = 0;
    }
    b4 = 0;
    b5 = 0;
    b6 = 0;
    b7 = 0;
    b8 = 0;
    return this;
}

BitObj *BitObj::func_001EF170(int mode)
{
    S_001EF062 *obj;

    s4 = (mode == 1 || mode == 3) ? mode : 0;
    obj = (S_001EF062 *)D_002F6A04.func_001EEE62(0x10, 0);
    if (obj != 0) {
        obj = obj->func_001EF062(mode);
    } else {
        obj = 0;
    }
    b4 = 0;
    b5 = 0;
    b6 = 0;
    b7 = 0;
    b8 = 0;
    f0 = (int)obj;
    if (obj == 0) {
        s4 = 3;
    }
    return this;
}

int __fastcall func_001EF1D0(BitObj *self, int unused)
{
    return self->s4 == 0 || self->s4 == 2;
}

int __fastcall func_001EF1E7(BitObj *a, int b)
{
    if (a->f0 != 0 && func_001EF1D0(a, b) != 0) {
        return 0;
    }
    return 1;
}

int __fastcall func_001EF1FC(BitObj *self, int unused)
{
    if (func_001EF1E7(self, unused) == 0 && self->b5) {
        return 1;
    }
    return 0;
}

int __fastcall func_001EF210(BitObj *self, int unused)
{
    int sum = 0;
    S_001EF210_Node *n;

    if (func_001EF1E7(self, unused) == 0) {
        for (n = (S_001EF210_Node *)self->f0; n != 0; n = n->next) {
            sum += n->v0();
        }
    }
    return sum;
}

unsigned char BitObj::func_001EF235(void)
{
    S_001EF210_Node *last = 0;
    S_001EF210_Node *n;

    if (func_001EF1E7() == 0) {
        for (n = (S_001EF210_Node *)f0; n != 0; n = n->next) {
            if (n->v0() != 0) {
                last = n;
            }
        }
        if (last != 0) {
            return last->v1();
        }
    }
    return 0;
}

char *BitObj::func_001EF26D(char *buf, int n)
{
    char *dst;
    S_001EF210_Node *p;
    int len;

    if (func_001EF1E7() == 0) {
        if (buf == 0) {
            n = func_001EF210() + 1;
            buf = (char *)D_002F6A04.func_001EEE62(n, 0);
            if (buf == 0) {
                return 0;
            }
        }
        dst = buf;
        for (p = (S_001EF210_Node *)f0; p != 0 && n > 0; p = p->next) {
            len = p->v0();
            if (len != 0) {
                if (n - len < 0) {
                    len = n;
                }
                if (p->v2(dst, len) != 0) {
                    n -= len;
                    dst += len;
                }
            }
        }
    } else {
        dst = buf;
        if (buf == 0) {
            return 0;
        }
    }
    *dst = 0;
    return buf;
}

BitObj *BitObj::func_001EF2FE(BitObj *o)
{
    if (s4 != 3 && func_001EF1D0(o, 0) == 0) {
        s4 = o->s4;
    }
    return this;
}

BitObj *BitObj::func_001EF333(int mode)
{
    if (mode == 1 || mode == 3) {
        f0 = 0;
        if (s4 != 3) {
            s4 = mode;
        }
    } else if (s4 == 0 || s4 == 2) {
        S_001EF062 *p;
        void *mem;

        b4 = 0;
        b5 = 0;
        b6 = 0;
        b7 = 0;
        mem = (void *)D_002F6A04.func_001EEE62(0x10, 0);
        if (mem != 0) {
            p = ((S_001EF062 *)mem)->func_001EF062(mode);
        } else {
            p = 0;
        }
        f0 = (int)p;
        if (p == 0) {
            s4 = 3;
        }
    }
    return this;
}

S_001EEFBA *S_001EEFBA::func_001EF3B4(void)
{
    ((BitObj *)&f2C)->func_001EF170(3);
    ((BitObj *)&f34)->func_001EF170(1);
    count = -1;
    return this;
}

S_001EEFBA *S_001EEFBA::func_001EF3D2(BitObj *src)
{
    if (count != 9 && src->func_001EF1E7() == 0) {
        BitObj *mem = (BitObj *)D_002F6A04.func_001EEE62(8, 0);
        BitObj *copy;

        if (mem != 0) {
            copy = mem->func_001EEEE6(src);
        } else {
            copy = 0;
        }
        if (copy != 0) {
            count++;
            items[count] = (int *)copy;
        }
    }
    return this;
}

BitObj *BitObj::func_001EF88F(long num)
{
    char buf[11];
    char *pBuf = buf + 10;
    char sign;

    *(unsigned short *)((char *)this + 4) &= 0xfe00;
    f0 = 0;
    buf[10] = 0;
    sign = 0;
    if (num < 0) {
        sign = 1;
        num = -num;
    }
    do {
        *--pBuf = (char)(num % 10) + '0';
        num = (unsigned long)num / 10;
    } while (num != 0);
    if (sign) {
        *--pBuf = '-';
    }
    func_001EF68E(pBuf, (buf + 10) - pBuf);
    return this;
}

BitObj *BitObj::func_001EF8F6(int a0, int a1) {
    BitObj local;
    local.func_001EEEE6(this);
    int r = local.func_001EF1E7();
    if (r != 0) local.func_001EF333(a1);
    else local.func_001EF613(a1);
    ((BitObj *)a0)->func_001EEEE6(&local);
    return (BitObj *)a0;
}

BitObj *BitObj::func_001EF935(BitObj *o)
{
    if (o->func_001EF1E7() != 0) {
        func_001EF613(o->s4);
    } else if (func_001EF1E7() != 0) {
        func_001EEF4F(o);
    } else {
        f0 = (int)((S_001EEFE3 *)f0)->func_001EF419();
        if (f0 != 0) {
            ((S_001EEFE3 *)f0)->func_001EEFE3((S_001EEFE3 *)o->f0);
        } else {
            ((unsigned int *)this)[1] = (((unsigned int *)this)[1] & 0xfffffff3) | 3;
        }
    }
    return this;
}

BitObj *BitObj::func_001EF999(char c)
{
    b4 = 0;
    b5 = 0;
    b6 = 0;
    b7 = 0;
    func_001EF68E(&c, 1);
    return this;
}

BitObj *BitObj::func_001EF9B2(char *s)
{
    int len;

    b4 = 0;
    b5 = 0;
    b6 = 0;
    b7 = 0;
    len = 0;
    while (s[len] != 0) {
        len++;
    }
    func_001EF68E(s, len);
    return this;
}

