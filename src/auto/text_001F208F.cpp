/* 8 functions from 0x001F208F to 0x001F306F, found by Ghidra. */
#include "common.h"

struct Obj { char pad[0x90]; Obj(int a, int b, int c, int d, unsigned short e); ~Obj(); int run(); };
struct T { int a; int b; int func_001EF1E7(); void func_001EF734(int); void func_001EF935(T*); void func_001EFB18(int); void func_001EF170(int); void func_001EEEE6(T*); };
extern char* D_002F6A28;
T* func_001F208F(T*, T*);
void func_001F23B8(T*, T*, int, T*, int);
T* func_001F062A(T*, T*, int);
extern int D_002F6A08, D_002F6A0C, D_002F6A10, D_002F6A14;

struct AllocObj {
    int (*fn0)(int);
    int field_4;
    int field_8;
    int *field_c;
    int field_10;
    int func_001EEE62(int size, int flag);
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
    S_001EF734 *func_001EEF4F(S_001EF734 *p);
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

#pragma optimize("t", off)
char *func_001F28F4(void)
{
    S_001EF734 *func_001F1C3A(S_001EF734 *out);
    S_001EF734 *func_001F0886(S_001EF734 *out);
    S_001EF734 *func_001EFD19(S_001EF734 *out, char *s, S_001EF734 *n);
    S_001EF734 result;
    S_001EF734 name;
    S_001EF734 t1;
    S_001EF734 t2;

    result.value = 0;
    name.value = 0;
    result.flags &= 0xfffffe00;
    name.flags &= 0xfffffe00;
    if (D_002F6A2C != 0) {
        if (*D_002F6A2C == '?') {
            if (D_002F6A2C[1] == '@') {
                D_002F6A28 += 2;
                result.func_001EEF4F(func_001EFD19(&t1, D_00295E5C, func_001F1C3A(&t2)));
            } else if (D_002F6A2C[1] == '$') {
                result.func_001EEF4F(func_001F0886(&t1));
            } else {
                result.func_001EEF4F(func_001F1C3A(&t1));
            }
        } else {
            result.func_001EEF4F(func_001F1C3A(&t1));
        }
    }
    int kind = result.kind;
    if (kind == 3) {
        return 0;
    }
    if ((*D_002F6A28 == 0 || (D_002F6A39 & 0x10)) && kind != 1) {
        name.func_001EEF4F(&result);
    } else {
        name.func_001EF9B2(D_002F6A2C);
    }
    if (D_002F6A30 == 0) {
        D_002F6A34 = name.func_001EF210() + 1;
        D_002F6A30 = (char *)D_002F6A04.func_001EEE62(D_002F6A34, 1);
        if (D_002F6A30 == 0) {
            return 0;
        }
    }
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
    *d = 0;
    return D_002F6A30;
}
void func_001F2BC3(void) {
    int func_001EB302(...);
    func_001EB302(5);
}
