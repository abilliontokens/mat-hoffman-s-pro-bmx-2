/* 24 functions from 0x001EF9D9 to 0x001F098B, found by Ghidra. */
#include "common.h"
extern char *D_002F6A28;
struct S_002F6A38 {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 rest : 30;
};
extern S_002F6A38 D_002F6A38;
extern int D_00295C04;
int func_001EEE49(int n);


/* 8-byte value object used by the 'A'..'N' parser helpers. */
struct S_001EF734 {
    u32 value;      /* +0x0 */
    u32 flags;      /* +0x4 */
    S_001EF734 *func_001EF734(char c);
    void func_001EEEE6(S_001EF734 *src);
    int func_001EF1E7(void);
    void func_001EEF4F(int v);
    void func_001EF613(int v);
    void func_001EF935(void *v);
    S_001EF734 *func_001EF9B2(char *s);
    S_001EF734 *func_001EFAB5(void *a, void *b);
    void func_001EF170(int v);
    S_001EF734 *func_001EF170(char c);
    S_001EF734 *func_001EF759(void *p);
    S_001EF734 *func_001EF759(char c);
    void func_001EF999(char c);
    void func_001EFB18(char c);
    void func_001EFB82(char *s);
    S_001EF734 *func_001EF8F6(void *out, int v);
    S_001EF734 *func_001EFD3B(void *out, char c);
    S_001EF734 *func_001EFD7A(void *out, char *s);
    S_001EF734 *func_001EF848(int n);
    S_001EF734 *func_001EF88F(int n);
    unsigned char func_001EF235(void);
    int func_001EF1D0(void);
    char *func_001EF26D(char *buf, int n);
};
extern char D_00295C0C[];
extern char D_00295B18[];
extern char D_00295C78[];
extern char D_00295C80[];
extern char D_00295C94[];
extern unsigned char D_002F6A39;
extern char *(*D_002F6A3C)(long);
S_001EF734 *func_001F1C3A(S_001EF734 *out);
int func_001E919C(char *s);
void *_func_001F041A(S_001EF734 *o);

struct S_001F062A_Arg { int x; };
extern char D_00295C58[];
extern char D_00295C60[];
extern char D_00295C50[];
extern char D_00295C48[];
extern char D_00295C40[];
extern char D_00295C38[];
extern char D_00295C2C[];
extern int D_00278798;
extern int D_0027D1D8;
void *_func_001EFBEE(S_001EF734 *o);
struct C_Lex {
    int kind;
    void func_001EEFBA(int d);
    void func_001EF3D2(void *p);
};
extern void *D_002F6A18;
extern void *D_002F6A20;
extern void *D_002F6A24;
extern char D_002F6A1C;

/* 60-byte back-reference list (constructor func_001EF3B4). */
struct S_Replicator_001EF3B4 {
    char pad[0x3c];
    void func_001EF3B4(void);
};
void *_func_001F098B(void *out, int v);
void *_func_001F06E9(void *out);
void func_001F2F3F(void *a, void *b);
void *_func_001EFD19(void *a, char *b, void *c);
void *_func_001EFF6E(S_001EF734 *o);
void *_func_001EFDB9(void *out, int v);
int func_001EE9D1(void);
void *func_001F2BCC(void *a, void *b);
extern char D_00295B38[];
extern char D_00295C68[];

struct C_001EFB18_Child {
    C_001EFB18_Child *func_001EF419(void);
    void func_001EEFE3(void *p);
};

struct C_001EFB18 {
    C_001EFB18_Child *f0;
    u32 f4;
    int func_001EF1E7(void);
    void func_001EF999(char c);
    void func_001EF9B2(char *s);
    C_001EFB18 *func_001EFB18(char c);
};

struct C_001EFB82 {
    C_001EFB18_Child *f0;
    u32 f4;
    int func_001EF1E7(void);
    void func_001EF9B2(char *s);
    C_001EFB82 *func_001EFB82(char *s);
};

struct C_Allocator {
    void *func_001EEE62(int size, int flags);
};

extern C_Allocator *D_002F6A04;
extern int D_00295BCC;

struct S_001EFB18_Obj {
    void *vtbl;
    u32 f4;
    char f8;
};

struct S_001EFB82_Obj {
    void *vtbl;
    u32 f4;
    char pad8[8];
    S_001EFB82_Obj *func_001EF45F(char *s, int a);
};

/* same-TU copies: MSVC only reuses ecx across these calls when it can see the bodies */
int S_001EF734::func_001EF1D0(void)
{
    return flags == 0 || flags == 2;
}

int S_001EF734::func_001EF1E7(void)
{
    if (value != 0 && func_001EF1D0() != 0) {
        return 0;
    }
    return 1;
}

void *_func_001EF9D9(S_001EF734 *o)
{
    S_001EF734 local;
    char c = *D_002F6A28;
    if (c != 0) {
        int k = (int)c - 'A';
        D_002F6A28++;
        if ((u32)k <= 0xc) {
            local.value = 0;
            *(u16 *)&local.flags &= 0xfe00;
            if (~((u32)D_002F6A38.b1) & 1) {
                switch (k & 0xfffffffe) {
                case 0:  local.func_001EF9B2((char *)func_001EEE49(1)); break;
                case 2:  local.func_001EF9B2((char *)func_001EEE49(2)); break;
                case 4:  local.func_001EF9B2((char *)func_001EEE49(4)); break;
                case 6:  local.func_001EF9B2((char *)func_001EEE49(3)); break;
                case 8:  local.func_001EF9B2((char *)func_001EEE49(5)); break;
                case 12: local.func_001EF9B2((char *)func_001EEE49(6)); break;
                }
            }
            o->func_001EEEE6(&local);
        } else {
            o->func_001EF170(1);
        }
    } else {
        o->func_001EF170(2);
    }
    return o;
}

void *_func_001EFA7E(S_001EF734 *o)
{
    char c = *D_002F6A28;
    switch (c) {
    case 0:
        o->func_001EF170(2);
        break;
    case 'A':
        D_002F6A28++;
        o->func_001EF759(&D_00295C04);
        break;
    default:
        o->func_001EF170(1);
        break;
    }
    return o;
}

S_001EF734 *S_001EF734::func_001EFAB5(void *ap, void *bp)
{
    S_001EF734 local;
    local.func_001EEEE6(this);
    if (local.func_001EF1E7() != 0) {
        local.func_001EEF4F((int)bp);
    } else if (((S_001EF734 *)bp)->func_001EF1E7() != 0) {
        local.func_001EF613(((s32)(((S_001EF734 *)bp)->flags << 28)) >> 28);
    } else {
        local.func_001EF935(bp);
    }
    ((S_001EF734 *)ap)->func_001EEEE6(&local);
    return (S_001EF734 *)ap;
}

C_001EFB18 *C_001EFB18::func_001EFB18(char param_1)
{
    S_001EFB18_Obj *o;

    if (param_1 != 0) {
        if (func_001EF1E7() != 0) {
            func_001EF999(param_1);
        } else {
            f0 = f0->func_001EF419();
            if (f0 != 0) {
                o = (S_001EFB18_Obj *)D_002F6A04->func_001EEE62(0xc, 0);
                if (o != 0) {
                    o->f4 = 0;
                    o->vtbl = &D_00295BCC;
                    o->f8 = param_1;
                } else {
                    o = 0;
                }
                f0->func_001EEFE3(o);
            } else {
                f4 = (f4 & 0xfffffff3) | 3;
            }
        }
    }
    return this;
}

C_001EFB82 *C_001EFB82::func_001EFB82(char *param_1)
{
    if (param_1 != 0 && *param_1 != 0) {
        if (func_001EF1E7() != 0) {
            func_001EF9B2(param_1);
        } else {
            f0 = f0->func_001EF419();
            if (f0 != 0) {
                S_001EFB82_Obj *o = (S_001EFB82_Obj *)D_002F6A04->func_001EEE62(0x10, 0);
                if (o != 0) {
                    o = o->func_001EF45F(param_1, 0);
                } else {
                    o = 0;
                }
                f0->func_001EEFE3(o);
            } else {
                f4 = (f4 & 0xfffffff3) | 3;
            }
        }
    }
    return this;
}

void *_func_001EFCD5(void *a, char b, void *c)
{
    S_001EF734 local;
    local.func_001EF734(b)->func_001EFAB5(a, c);
    return a;
}

void *_func_001EFCF7(void *a, char b, void *c)
{
    S_001EF734 local;
    local.func_001EF170(b)->func_001EFAB5(a, c);
    return a;
}

void *_func_001EFD19(void *a, char b, void *c)
{
    S_001EF734 local;
    local.func_001EF759(b)->func_001EFAB5(a, c);
    return a;
}

S_001EF734 *S_001EF734::func_001EFD3B(void *out, char c)
{
    S_001EF734 local;
    local.func_001EEEE6(this);
    if (local.func_001EF1E7() != 0) {
        local.func_001EF999(c);
    } else {
        local.func_001EFB18(c);
    }
    ((S_001EF734 *)out)->func_001EEEE6(&local);
    return (S_001EF734 *)out;
}

S_001EF734 *S_001EF734::func_001EFD7A(void *out, char *s)
{
    S_001EF734 local;
    local.func_001EEEE6(this);
    if (local.func_001EF1E7() != 0) {
        local.func_001EF9B2(s);
    } else {
        local.func_001EFB82(s);
    }
    ((S_001EF734 *)out)->func_001EEEE6(&local);
    return (S_001EF734 *)out;
}

void *_func_001EFDB9(void *out, int v)
{
    S_001EF734 *o = (S_001EF734 *)out;
    S_001EF734 slot[3];
    char *q = 0;
    char c;
    unsigned dim;

    if (*D_002F6A28 == 'Q') {
        q = D_00295C0C;
        D_002F6A28++;
    }
    c = *D_002F6A28;
    if (c == 0) {
        o->func_001EF170(2);
    } else if (c >= '0' && c <= '9') {
        S_001EF734 *r;

        if (q != 0) {
            r = (S_001EF734 *)_func_001EFD19(&slot[1], q, slot[2].func_001EF848(*D_002F6A28++ - '/'));
        } else {
            r = slot[0].func_001EF848(*D_002F6A28++ - '/');
        }
        o->func_001EEEE6(r);
    } else {
        S_001EF734 *r;

        dim = 0;
        while (c != '@') {
            if (c == 0) {
                o->func_001EF170(2);
                return out;
            }
            if (c < 'A' || c > 'P') {
                o->func_001EF170(1);
                return out;
            }
            dim = (dim << 4) + c - 'A';
            D_002F6A28++;
            c = *D_002F6A28;
        }
        c = *D_002F6A28++;
        if (c != '@') {
            o->func_001EF170(1);
            return out;
        }
        if ((char)v != 0) {
            if (q != 0) {
                r = (S_001EF734 *)_func_001EFD19(&slot[1], q, slot[0].func_001EF88F(dim));
            } else {
                r = slot[2].func_001EF88F(dim);
            }
        } else {
            if (q != 0) {
                r = (S_001EF734 *)_func_001EFD19(&slot[1], q, slot[0].func_001EF848(dim));
            } else {
                r = slot[2].func_001EF848(dim);
            }
        }
        o->func_001EEEE6(r);
    }
    return out;
}

void *_func_001EFE9D(S_001EF734 *o)
{
    S_001EF734 local;
    S_001EF734 tmp;
    char c = *D_002F6A28;

    local.value = 0;
    *(u16 *)&local.flags &= 0xfe00;
    if (c != 0) {
        switch (c) {
        case '0':
        case '1':
            local.func_001EF9B2(D_00295C50);
            break;
        case '2':
        case '3':
            local.func_001EF9B2(D_00295C48);
            break;
        case '4':
            break;
        case '5':
            local.func_001EF9B2(D_00295C40);
            break;
        case '6':
        case '7':
            local.func_001EF9B2(D_00295C38);
            break;
        default:
            o->func_001EF170(1);
            return o;
        }
        switch (*D_002F6A28++) {
        case '1':
        case '3':
        case '5':
        case '7':
            local.func_001EEF4F((int)_func_001EFD19(&tmp, D_00295C2C, &local));
            break;
        }
        o->func_001EEEE6(&local);
    } else {
        o->func_001EF170(2);
    }
    return o;
}

void *_func_001EFF6E(S_001EF734 *o)
{
    S_001EF734 local;
    S_001EF734 tmp;
    S_001EF734 *p;
    switch (*D_002F6A28) {
    case 'X':
        D_002F6A28++;
        o->func_001EF759(&D_0027D1D8);
        break;
    case 'Z':
        D_002F6A28++;
        o->func_001EF759(&D_00278798);
        break;
    default:
        _func_001EFBEE(&local);
        if ((local.flags & 0xf) == 0) {
            switch (*D_002F6A28) {
            case 0:
                break;
            case '@':
                D_002F6A28++;
                break;
            case 'Z':
                D_002F6A28++;
                p = local.func_001EFD7A(&tmp, D_00295C58);
                goto emit;
            default:
                o->func_001EF170(1);
                return o;
            }
        }
        p = &local;
    emit:
        o->func_001EEEE6(p);
        break;
    }
    return o;
}

void *_func_001F0000(S_001EF734 *o)
{
    S_001EF734 local;
    S_001EF734 tmp;
    char c = *D_002F6A28;
    if (c != 0) {
        if (c == 'Z') {
            D_002F6A28++;
            local.value = 0;
            *(u16 *)&local.flags &= 0xfe00;
            o->func_001EEEE6(&local);
            return o;
        }
        ((S_001EF734 *)_func_001EFD19(&tmp, D_00295C60, _func_001EFF6E(&local)))->func_001EFD3B(o, ')');
    } else {
        local.func_001EF759((void *)D_00295C60)->func_001EF8F6(&tmp, 2)->func_001EFD3B(o, ')');
    }
    return o;
}

void *_func_001F007D(S_001EF734 *out, S_001EF734 *st)
{
    S_001EF734 arrayType;
    S_001EF734 t10;
    S_001EF734 t18;
    S_001EF734 t20;
    S_001EF734 t28;
    int n;

    if (*D_002F6A28 != 0) {
        n = func_001EE9D1();
        if (n < 0) {
            n = 0;
        }
        if (n == 0) {
            func_001F2BCC(out, t18.func_001EF734('[')->func_001EF8F6(&arrayType, 2)->func_001EFD3B(&t10, ']'));
            return out;
        }
        arrayType.value = 0;
        *(u16 *)&arrayType.flags &= 0xfe00;
        if (st->flags & 0x80) {
            arrayType.func_001EFB82(D_00295B38);
        }
        while (n--) {
            arrayType.func_001EF935(((S_001EF734 *)_func_001EFCD5(&t28, '[', _func_001EFDB9(&t20, 0)))->func_001EFD3B(&t18, ']'));
        }
        if (st->func_001EF1E7() == 0) {
            arrayType.func_001EEF4F((int)((st->flags & 0x80) ? st : ((S_001EF734 *)_func_001EFCD5(&t18, '(', st))->func_001EFD3B(&t20, ')'))->func_001EFAB5(&t28, &arrayType));
        }
        func_001F2F3F(&t10, &arrayType);
        t10.flags |= 0x80;
        out->func_001EEEE6(&t10);
        return out;
    }
    func_001F2BCC(out, (st->func_001EF1E7() == 0 ? ((S_001EF734 *)_func_001EFCD5(&t10, '(', st))->func_001EFD7A(&t18, D_00295C68) : t18.func_001EF734('['))->func_001EF8F6(&t20, 2)->func_001EFD3B(&t28, ']'));
    return out;
}

void *_func_001F01D8(S_001EF734 *o)
{
    S_001EF734 local;
    S_001EF734 tmp;
    ((S_001EF734 *)_func_001EFCD5(&tmp, '`', _func_001EFDB9(&local, 0)))->func_001EFD3B(o, '\'');
    return o;
}

void *_func_001F037A(S_001EF734 *o, void *p)
{
    S_001EF734 local;
    local.func_001EF759(p);
    if (*D_002F6A28++ == '@' && *D_002F6A28++ == '_') {
        D_002F6A28++;
        {
            S_001EF734 a;
            _func_001EFDB9(&a, 0);
        }
        {
            S_001EF734 b;
            _func_001EFDB9(&b, 0);
        }
        while (*D_002F6A28 != 0 && *D_002F6A28 != '@') {
            D_002F6A28++;
        }
        if (*D_002F6A28 == 0) {
            D_002F6A28--;
            o->func_001EF170(2);
        } else {
            D_002F6A28++;
            o->func_001EEEE6(&local);
        }
    } else {
        o->func_001EF170(1);
    }
    return o;
}

void *_func_001F041A(S_001EF734 *o)
{
    S_001EF734 tmp;
    char c = *D_002F6A28;
    if (c == 0) {
        o->func_001EF170(2);
    } else if (c == '?') {
        D_002F6A28++;
        _func_001EFCD5(o, '-', _func_001EFDB9(&tmp, 0));
    } else {
        _func_001EFDB9(o, 0);
    }
    return o;
}

#pragma optimize("y", on)
void *_func_001F046A(S_001EF734 *o)
{
    S_001EF734 tQ, tAmp, tD, tRest, t4c, t54;

    switch (*D_002F6A28++) {
    default:
        o->func_001EF170(1);
        return o;
    case 0:
        D_002F6A28--;
        o->func_001EF170(2);
        return o;
    case '0':
        _func_001F041A(o);
        return o;
    case '1':
        if (*D_002F6A28 == '@') {
            D_002F6A28++;
            o->func_001EF759(D_00295C78);
            return o;
        }
        tAmp.func_001EF759(D_00295B18)->func_001EFAB5(o, func_001F1C3A(&tRest));
        return o;
    case '2': {
        S_001EF734 mantissa, exponent;
        char buf[100];
        _func_001F041A(&mantissa);
        _func_001F041A(&exponent);
        if (mantissa.func_001EF1D0() && exponent.func_001EF1D0()) {
            if (!mantissa.func_001EF26D(&buf[1], 100)) {
                o->func_001EF170(1);
                return o;
            }
            buf[0] = buf[1];
            if (buf[1] == '-') {
                buf[1] = buf[2];
                buf[2] = '.';
            } else {
                buf[1] = '.';
            }
            t4c.func_001EF759(buf)->func_001EFD3B(&t54, 'e')->func_001EFAB5(o, &exponent);
            return o;
        }
        o->func_001EF170(2);
        return o;
    }
    case 'E':
        func_001F1C3A(o);
        return o;
    case 'D':
    case 'Q': {
        S_001EF734 dim;
        char buf16[16];
        _func_001F041A(&dim);
        if (D_002F6A39 & 0x40) {
            char *p;
            dim.func_001EF26D(buf16, 16);
            p = D_002F6A3C(func_001E919C(buf16));
            if (p != 0) {
                o->func_001EF759(p);
                return o;
            }
        }
        if (*D_002F6A28 == 'D') {
            ((S_001EF734 *)_func_001EFD19(&tD, D_00295C80, &dim))->func_001EFD7A(o, D_00295C94);
            return o;
        } else {
            ((S_001EF734 *)_func_001EFD19(&tQ, D_00295C0C, &dim))->func_001EFD7A(o, D_00295C94);
            return o;
        }
    }
    }
}

void *_func_001F062A(void *a, S_001EF734 *b, int c)
{
    extern char D_00295CA0[];
    extern char D_00295C98[];
    void *_func_001F007D(void *a, S_001EF734 *b);
    void *_func_001F2BCC(void *a, S_001EF734 *b);
    S_001EF734 local;
    char ch = *D_002F6A28;

    if (ch != 0) {
        if (c != 0 && ch == 'X') {
            D_002F6A28++;
            if (b->func_001EF1E7() != 0) {
                ((S_001EF734 *)a)->func_001EF759(&D_0027D1D8);
            } else {
                _func_001EFD19(a, D_00295CA0, b);
            }
        } else {
            if (ch == 'Y') {
                D_002F6A28++;
                _func_001F007D(a, b);
            } else if (ch == '_' && D_002F6A28[1] == 'Z') {
                D_002F6A28 += 2;
                _func_001EFD19(a, D_00295C98, _func_001F2BCC(&local, b));
            } else {
                _func_001F2BCC(a, b);
            }
            return a;
        }
    } else {
        _func_001EFCF7(a, 2, b);
    }
    return a;
}

#pragma optimize("", on)

#pragma optimize("y", on)
void *_func_001F0886(S_001EF734 *o)
{
    if (*D_002F6A28 == '?' && D_002F6A28[1] == '$') {
        D_002F6A28 += 2;
        void *saveArg = D_002F6A18;
        void *saveZName = D_002F6A20;
        void *saveTemplateArg = D_002F6A24;
        S_Replicator_001EF3B4 localArg, localZName, localTemplateArg;
        S_001EF734 name, t1, t2;

        localArg.func_001EF3B4();
        localZName.func_001EF3B4();
        localTemplateArg.func_001EF3B4();
        D_002F6A18 = &localArg;
        D_002F6A20 = &localZName;
        D_002F6A24 = &localTemplateArg;
        _func_001F098B(&name, 1);
        if (name.func_001EF1E7() != 0) {
            D_002F6A1C = 1;
        }
        name.func_001EF935(_func_001EFCD5(&t2, '<', _func_001F06E9(&t1)));
        if (name.func_001EF235() == '>') {
            name.func_001EFB18(' ');
        }
        name.func_001EFB18('>');
        D_002F6A18 = saveArg;
        D_002F6A20 = saveZName;
        D_002F6A24 = saveTemplateArg;
        o->func_001EEEE6(&name);
    } else {
        o->func_001EF170(1);
    }
    return o;
}
#pragma optimize("", on)
