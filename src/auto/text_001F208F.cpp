/* 8 functions from 0x001F208F to 0x001F306F, found by Ghidra. */
#include "common.h"

struct Obj { char pad[0x90]; Obj(int a, int b, int c, int d, int e); ~Obj(); int run(); };
struct T { int a; int b; T() {} int func_001EF1E7(); int func_001EF1D0(); void func_001EF734(char); void func_001EF935(T*); void func_001EFB18(int); T* func_001EF170(int); void func_001EEEE6(T*); void func_001EF9B2(char*);
    T* func_001EEF4F(T*); T* func_001EF2FE(T*); T* func_001EF613(int); T* func_001EFD3B(T*, char); T* func_001EFD7A(T*, char*); T* func_001EFAB5(T*, T*);
    void func_001EF935(const T&); T* func_001EEF4F(const T&); T* func_001EF2FE(const T&);
    T func_001EFD3B(char); T func_001EFD7A(char*); T func_001EFAB5(const T&); T* func_001EFAB5(T*, const T&); };
/* DName default constructor (node = 0, status = valid, flags cleared). */
struct N : T { N() { a = 0; b &= 0xfffffe00; } };
__declspec(noinline) int T::func_001EF1D0()
{
    int st = (b << 28) >> 28;
    return st == 0 || st == 2;
}
__declspec(noinline) int T::func_001EF1E7()
{
    if (a != 0 && func_001EF1D0() != 0) {
        return 0;
    }
    return 1;
}
extern char* D_002F6A28;
T* func_001F208F(T*, T*);
T* func_001F23B8(T*, T*, char, T*, int);
char* func_001EEE49(int);
T* func_001EFCD5(T*, char, T*);
T* func_001EFD19(T*, char*, T*);
T* func_001EFCF7(T*, char, T*);
T* func_001F1DF5(T*);
T* func_001F11B1(T*);
T func_001EFCD5(char, const T&);
T func_001EFD19(char*, const T&);
T func_001EFCF7(char, const T&);
T* func_001EFCF7(T*, char, const T&);
T func_001F1DF5();
T func_001F11B1();
extern char D_00295E54[], D_00295E4C[], D_00295E40[], D_00295E38[], D_00295E34[], D_002869B8[], D_00295E28[], D_00295E20[], D_00295CE8[];
struct S_002F6A38_Flags { u32 b0 : 1; u32 b1 : 1; u32 mid : 15; u32 b17 : 1; u32 rest : 14; };
extern S_002F6A38_Flags D_002F6A38;
T* func_001F062A(T*, T*, int);
T* func_001F2BCC(T*, T*);
T* func_001F2A1C(T*, T*, T*, int);
void *func_001EFCF7(void *a, char b, void *c);
extern char D_00295E74[];
extern char D_00295EF8[], D_00295EF0[], D_00295EE8[], D_00295EE0[], D_00295ED8[], D_00295ED0[];
extern char D_00295EC8[], D_00295EC0[], D_00295EB4[], D_00295EAC[], D_00295EA4[], D_00295E9C[];
extern char D_00295E94[], D_00295E8C[], D_00295E80[], D_00295C38[], D_00295C2C[], D_00295B38[];
extern char D_0027D240[], D_0027D21C[], D_0028A82C[];
extern int D_002F6A08, D_002F6A0C, D_002F6A10, D_002F6A14;

struct AllocObj {
    int (*fn0)(int);
    int field_4;
    int field_8;
    int *field_c;
    int field_10;
    int func_001EEE62(int size, int flag);
    void func_001EE9AB();
};
extern AllocObj D_002F6A04;

/* 8-byte value object used by the undecorator helpers. */
struct S_001EF734 {
    u32 value;
    union {
        u32 flags;
        struct { int kind : 4; unsigned state : 5; };
    };
    S_001EF734() {}
    S_001EF734 *func_001EEF4F(const S_001EF734 &p);
    void func_001EF9B2(char *s);
    int func_001EF210();
    char *func_001EF26D(char *buf, int n);
};

extern char *D_002F6A2C;
extern char *D_002F6A30;
extern int D_002F6A34;
extern unsigned char D_002F6A39;
extern char D_00295E5C[];

#pragma optimize("s", on)
T* func_001F23B8(T* ret, T* superType, char prefix, T* cvType, int thisFlag)
{
    N A;
    if (*D_002F6A28) {
        if (*D_002F6A28 == '$') {
            D_002F6A28++;
            switch (*D_002F6A28++) {
            case '0': {
                unsigned dim = ((D_002F6A28[0] - '0') << 4) + (D_002F6A28[1] - '0');
                D_002F6A28 += 2;
                A.func_001EF9B2(D_00295E38);
                while (dim > 1) {
                    dim--;
                    A.func_001EEF4F(A.func_001EFD7A(D_002869B8));
                }
                A.func_001EEF4F(A.func_001EFD7A(D_00295E34));
                goto clear;
            }
            case '1':
                A.func_001EF9B2(D_00295E40);
                D_002F6A28 += 2;
            clear:
                prefix = 0;
                break;
            case 'A':
                A.func_001EF9B2(D_00295E4C);
                break;
            case 'B':
                A.func_001EF9B2(D_00295E54);
                break;
            }
        }
        {
        N B;
        N C;
        int code = *D_002F6A28 - (*D_002F6A28 >= 'A' ? 'A' : '0' - 26);
        {
            for (;;) {
                switch (code) {
                case 4:
                    if (~(u32)D_002F6A38.b1 & 1 && ~(u32)D_002F6A38.b17 & 1) {
                        if (B.func_001EF1E7()) {
                            B.func_001EF9B2(func_001EEE49(7));
                        } else {
                            B.func_001EEF4F(B.func_001EFD3B(' ').func_001EFD7A(func_001EEE49(7)));
                        }
                    }
                    break;
                case 5:
                    if (~(u32)D_002F6A38.b1 & 1) {
                        if (C.func_001EF1E7()) {
                            C.func_001EF9B2(func_001EEE49(9));
                        } else {
                            C.func_001EEF4F(C.func_001EFD3B(' ').func_001EFD7A(func_001EEE49(9)));
                        }
                    }
                    break;
                case 8:
                    if (~(u32)D_002F6A38.b1 & 1) {
                        if (B.func_001EF1E7()) {
                            B.func_001EF9B2(func_001EEE49(8));
                        } else {
                            B.func_001EEF4F(B.func_001EFD3B(' ').func_001EFD7A(func_001EEE49(8)));
                        }
                    }
                    break;
                default:
                    goto out;
                }
                D_002F6A28++;
                code = *D_002F6A28 - (*D_002F6A28 >= 'A' ? 'A' : '0' - 26);
            }
        }
    out:
        D_002F6A28++;
        if ((unsigned)code > 0x1f) {
            ret->func_001EF170(1);
            return ret;
        }
        {
        T tmp8;
        tmp8.func_001EF734(prefix);
        tmp8.func_001EEF4F(A.func_001EFAB5(tmp8));
        if (!B.func_001EF1E7()) {
            tmp8.func_001EEF4F(tmp8.func_001EFD3B(' ').func_001EFAB5(B));
        }
        if (!C.func_001EF1E7()) {
            tmp8.func_001EEF4F(C.func_001EFD3B(' ').func_001EFAB5(tmp8));
        }
        if (code & 0x10) {
            if (thisFlag) {
                ret->func_001EF170(1);
                return ret;
            }
            if (prefix) {
                tmp8.func_001EEF4F(func_001EFD19(D_00295CE8, tmp8));
                if (*D_002F6A28) {
                    tmp8.func_001EEF4F(func_001F1DF5().func_001EFAB5(tmp8));
                } else {
                    tmp8.func_001EEF4F(func_001EFCF7(2, tmp8));
                }
            } else if (*D_002F6A28) {
                tmp8.func_001EF2FE(func_001F1DF5());
            }
            char ch = *D_002F6A28;
            if (!ch) {
                tmp8.func_001EF613(2);
            } else {
                D_002F6A28++;
                if (ch != '@') {
                    ret->func_001EF170(1);
                    return ret;
                }
            }
        }
        if (~(u32)D_002F6A38.b1 & 1) {
            if ((code & 0xc) == 0xc) {
                if (thisFlag) {
                    ret->func_001EF170(1);
                    return ret;
                }
                tmp8.func_001EEF4F(func_001F11B1().func_001EFAB5(tmp8));
            }
        } else if ((code & 0xc) == 0xc) {
            tmp8.func_001EF2FE(func_001F11B1());
        }
        if (code & 2) {
            tmp8.func_001EEF4F(func_001EFD19(D_00295E28, tmp8));
        }
        if (code & 1) {
            tmp8.func_001EEF4F(func_001EFD19(D_00295E20, tmp8));
        }
        if (!thisFlag) {
            if (!superType->func_001EF1E7()) {
                if (!(superType->b & 0x10) && !cvType->func_001EF1E7()) {
                    tmp8.func_001EF935(func_001EFCD5(' ', *cvType).func_001EFD3B(' ').func_001EFAB5(*superType));
                } else if (superType->b & 0x80) {
                    tmp8.func_001EEF4F(*superType);
                } else {
                    tmp8.func_001EF935(func_001EFCD5(' ', *cvType));
                }
            } else if (!cvType->func_001EF1E7()) {
                tmp8.func_001EF935(func_001EFCD5(' ', *cvType));
            }
        }
        tmp8.b |= 0x10;
        ret->func_001EEEE6(&tmp8);
        return ret;
        }
        }
    }
    if (!thisFlag) {
        if (!superType->func_001EF1E7()) {
            if (!(superType->b & 0x10) && !cvType->func_001EF1E7()) {
                func_001EFCF7(2, *cvType).func_001EFD3B(' ').func_001EFAB5(ret, *superType);
                return ret;
            }
            func_001EFCF7(ret, 2, *superType);
            return ret;
        }
        if (!cvType->func_001EF1E7()) {
            func_001EFCF7(ret, 2, *cvType);
            return ret;
        }
    }
    ret->func_001EF170(2);
    return ret;
}
#pragma optimize("", on)
#pragma optimize("t", off)
char *func_001F28F4(void)
{
    S_001EF734 func_001F1C3A(void);
    S_001EF734 func_001F0886(void);
    S_001EF734 func_001EFD19(char *s, const S_001EF734 &n);
    S_001EF734 result;
    S_001EF734 name;

    result.value = 0;
    name.value = 0;
    result.flags &= 0xfffffe00;
    name.flags &= 0xfffffe00;
    if (D_002F6A2C != 0) {
        if (*D_002F6A2C == '?') {
            if (D_002F6A2C[1] == '@') {
                D_002F6A28 += 2;
                result.func_001EEF4F(func_001EFD19(D_00295E5C, func_001F1C3A()));
            } else if (D_002F6A2C[1] == '$') {
                result.func_001EEF4F(func_001F0886());
            } else {
                goto plain;
            }
        } else {
plain:
            result.func_001EEF4F(func_001F1C3A());
        }
    }
    int kind = result.kind;
    if (kind == 3) {
        return 0;
    }
    if ((*D_002F6A28 != 0 && (D_002F6A39 & 0x10) == 0) || kind == 1) {
        name.func_001EF9B2(D_002F6A2C);
    } else {
        name.func_001EEF4F(result);
    }
    if (D_002F6A30 == 0) {
        D_002F6A34 = name.func_001EF210() + 1;
        D_002F6A30 = (char *)D_002F6A04.func_001EEE62(D_002F6A34, 1);
    }
    if (D_002F6A30 != 0) {
        name.func_001EF26D(D_002F6A30, D_002F6A34);
        char *p = D_002F6A30;
        char *d = p;
        char c;
        while ((c = *p) != 0) {
            if (c == ' ') {
                p++;
                *d++ = c;
                while (*p == ' ') {
                    p++;
                }
            } else {
                *d++ = c;
                p++;
            }
        }
        *d = *p;
    }
    return D_002F6A30;
}

#pragma optimize("s", on)
T* func_001F2A1C(T* r, T* a, T* b, int c) {
    char ch = *D_002F6A28;
    T t;
    if (ch) {
        if ((ch >= 0x36 && ch <= 0x39) || ch == 0x5f) {
            t.func_001EF734(c);
            if (!a->func_001EF1E7() && (b->func_001EF1E7() || !(((char*)b)[4] & 0x10))) t.func_001EF935(a);
            if (!b->func_001EF1E7()) t.func_001EF935(b);
            func_001F208F(r, &t);
        } else {
        func_001F23B8(&t, b, c, a, 0);
        func_001F062A(r, &t, (char)c == 0x2a);
        }
    } else {
    t.func_001EF170(2);
    t.func_001EFB18(c);
    if (!a->func_001EF1E7()) t.func_001EF935(a);
    if (!b->func_001EF1E7()) {
        if (!a->func_001EF1E7()) t.func_001EFB18(0x20);
        t.func_001EF935(b);
    }
    r->func_001EEEE6(&t);
    }
    return r;
}
#pragma optimize("", on)

void func_001F2BC3(void) {
    int func_001EB302(...);
    func_001EB302(5);
}

T* func_001F2BCC(T* ret, T* superType)
{
    char c = *D_002F6A28;
    if (c == 0) {
        func_001EFCF7(ret, 2, superType);
        return ret;
    }
    D_002F6A28++;
    N A;
    int ebx = -1;
    switch (c) {
    case 'C': case 'D': case 'E':
        A.func_001EF9B2(D_00295EF8);
        break;
    case 'F': case 'G':
        A.func_001EF9B2(D_00295EF0);
        break;
    case 'H': case 'I':
        A.func_001EF9B2(D_0027D240);
        break;
    case 'J': case 'K':
        A.func_001EF9B2(D_00295EE8);
        break;
    case 'M':
        A.func_001EF9B2(D_0027D21C);
        break;
    default:
        ebx = c & 3;
        break;
    }
    return ret;
}

T *func_001F2F3F(T *a1, T *a2)
{
    T local;
    char *p = D_002F6A28;
    int c = *p;

    local.a = 0;
    local.b &= 0xfffffe00;
    switch (c) {
    case 'B':
        local.func_001EF9B2(D_00295E74);
        if (a2->func_001EF1E7() == 0) {
            local.func_001EFB18(0x20);
        }
        /* fall through */
    case 'A': {
        T t;
        t.func_001EEEE6(a2);
        p++;
        D_002F6A28 = p;
        t.b |= 0x10;
        return func_001F2A1C(a1, &local, &t, 0x26);
    }
    case 0:
        goto zero;
    case '$':
        if (p[1] != '$') {
            if (p[1] != 0) {
                goto dodefault;
            }
        } else {
            goto dollars;
        }
zero:
        func_001EFCF7(a1, 2, a2);
        return a1;
dollars:
        p += 2;
        D_002F6A28 = p;
        switch (*p) {
        case 'C': {
            T t;
            T pos;
            t.a = 0;
            t.b &= 0xfffffe00;
            p++;
            D_002F6A28 = p;
            return func_001F2BCC(a1, func_001F23B8(&pos, a2, 0, &t, 0));
        }
        case 'B':
            p++;
            D_002F6A28 = p;
            func_001F062A(a1, a2, 1);
            return a1;
        case 'A':
            p++;
            D_002F6A28 = p;
            return func_001F208F(a1, a2);
        case 0:
            goto zero;
        }
dodefault:
        return a1->func_001EF170(1);
    default:
        return func_001F2BCC(a1, a2);
    }
}

