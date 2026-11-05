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
    void func_001EEEE6(BitObj *o);
    BitObj *func_001EEF4F(BitObj *o);
    int func_001EF1E7(int a);
    int func_001EF1E7();
    void func_001EF333(int a);
    void func_001EF613(int a);
    BitObj *func_001EF8F6(int a0, int a1);
};

/* ten slots after a count (-1 = none), then two fallback cells */
struct S_001EEFBA {
    int count;
    int *items[10];
    int f2C;
    int f30;
    int f34;
    int *func_001EEFBA(int idx);
};

/* singly linked node: the next pointer is at +4 */
struct S_001EEFE3 {
    int f0;
    S_001EEFE3 *next;
    S_001EEFE3 *func_001EEFE3(S_001EEFE3 *n);
};

/* virtual object with a mode at +8 (Class_00295BE4 slot 1) */
struct S_001EF087 {
    void *vtbl;
    int f4;
    int f8;
    unsigned char func_001EF087(void);
};

/* Class_00295BD8 instance */
struct S_001EF033 {
    void *vtbl;
    int f4;
    BitObj *f8;
};

/* Class_00295BE4 instance */
struct S_001EF062 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
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

int __fastcall func_001EF1D0(BitObj *self, int unused)
{
    return self->s4 == 0 || self->s4 == 2;
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
