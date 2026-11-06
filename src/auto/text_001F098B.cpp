/* 6 functions from 0x001F098B to 0x001F1243, found by Ghidra. */
#include "common.h"

extern char *D_002F6A28;
extern char D_0027D1D8[];
extern char D_00295D30[];
extern u32 D_002F6A38;
extern char D_00295D20[];
extern char D_00295D14[];
extern char D_00295D0C[];
extern char D_002871C8[];
extern char D_00295D04[];
extern char D_00295CFC[];
extern char D_00295CEE[];

/* 8-byte value object used by the undecorator helpers. */
struct S_001EF734 {
    u32 value;      /* +0x0 */
    union {
        u32 flags;
        struct { unsigned kind : 4; unsigned state : 5; };
        struct { unsigned initial : 9; };
    };
    S_001EF734 *func_001EEF4F(void *p);
    int func_001EF1E7();
    void func_001EF333(int v);
    S_001EF734 *func_001EFD7A(void *out, char *s);
    S_001EF734 *func_001EFAB5(void *out, S_001EF734 *p);
    void func_001EEEE6(S_001EF734 *src);
    S_001EF734 *func_001EF170(int v);
    void func_001EF613(int v);
    void func_001EF935(void *v);
    S_001EF734 *func_001EF759(void *p);
    void func_001EFB82(char *s);
    void func_001EEF4F(S_001EF734 *src);
    void func_001EF9B2(char *s);
    char *func_001EF26D(char *buf, int n);
    S_001EF734 *func_001EF789(char **pp, char delim);
    S_001EF734 *func_001EFD3B(void *out, char c);
};

struct S_002F6A20 {
    int count;
    S_001EF734 *func_001EEFBA(int i);
    void func_001EF3D2(S_001EF734 *n);
};
extern S_002F6A20 *D_002F6A20;
extern char D_00295CBC[];
extern char D_00295CAC[];
extern char D_00295CA8[];
extern char D_00295C94[];
extern unsigned char D_002F6A39;
extern char *(*D_002F6A3C)(long);

static inline int und_strncmp(const char *first, const char *last, unsigned int count)
{
    if (!count)
        return 0;
    while (--count && *first && *first == *last) {
        first++;
        last++;
    }
    return *(unsigned char *)first - *(unsigned char *)last;
}

static inline void CopyName(S_001EF734 *src, S_001EF734 *dst) { dst->func_001EEEE6(src); }

#pragma optimize("t", off)
extern char D_00295CE8[];
S_001EF734 *func_001F1DF5(S_001EF734 *);
long func_001E919C(char *s);
void *func_001F098B(S_001EF734 *out, bool update)
{
    S_001EF734 *func_001F0886(S_001EF734 *o);
    S_001EF734 *func_001F041A(S_001EF734 *o);
    S_001EF734 *func_001EFD19(S_001EF734 *out, char *s, S_001EF734 *n);
    char c = *D_002F6A28;
    int n = c - '0';
    if (n >= 0 && n <= 9) {
        D_002F6A28++;
        out->func_001EEEE6(D_002F6A20->func_001EEFBA(n));
        return out;
    }
    S_001EF734 zName;
    S_001EF734 tmp;
    zName.value = 0;
    zName.initial = 0;
    if (c == '?') {
        zName.func_001EEF4F(func_001F0886(&tmp));
        if (*D_002F6A28++ != '@') {
            D_002F6A28--;
            zName.func_001EF333(*D_002F6A28 ? 1 : 2);
        }
    } else {
        char *genericType;
        if (und_strncmp(D_002F6A28, D_00295CBC, 19) == 0) {
            genericType = D_00295CBC;
            D_002F6A28 += 19;
        } else if (und_strncmp(D_002F6A28, D_00295CAC, 13) == 0) {
            genericType = D_00295CAC;
            D_002F6A28 += 13;
        } else {
            S_001EF734 t;
            zName.func_001EEF4F(t.func_001EF789(&D_002F6A28, '@'));
            goto done;
        }
        func_001F041A(&tmp);
        if (D_002F6A39 & 0x40) {
            char buf[16];
            tmp.func_001EF26D(buf, 16);
            char *p = D_002F6A3C(func_001E919C(buf));
            if (p) {
                zName.func_001EF9B2(p);
            } else {
                S_001EF734 x, y;
                zName.func_001EF9B2(D_00295CA8);
                zName.func_001EF935(func_001EFD19(&x, genericType, &tmp)->func_001EFD7A(&y, D_00295C94));
            }
        } else {
            S_001EF734 x, y;
            zName.func_001EF9B2(D_00295CA8);
            zName.func_001EF935(func_001EFD19(&x, genericType, &tmp)->func_001EFD7A(&y, D_00295C94));
        }
    }
done:
    if (update && D_002F6A20->count != 9)
        D_002F6A20->func_001EF3D2(&zName);
    out->func_001EEEE6(&zName);
    return out;
}

void *func_001F0F86(void *out)
{
    S_001EF734 local, base, temps[2];
    void *func_001F098B(void *, int);
    local.value = 0;
    local.initial = 0;
    local.func_001EEF4F(func_001F098B(&base, 1));
    unsigned flags = local.flags;
    char *s = D_00295CE8;
    if ((flags & 15) == 0 && *D_002F6A28 != 0) {
        if (*D_002F6A28 == '@') goto consumed;
        local.func_001EEF4F(func_001F1DF5(&temps[0])->func_001EFD7A(&temps[1], s)->func_001EFAB5(&base, &local));
        flags = local.flags;
    }
    char c = *D_002F6A28;
    if (c == '@') {
        consumed:
        ++D_002F6A28;
    } else if (c != 0) {
        local.value = 0;
        if ((flags & 15) != 3) local.flags = (flags & ~14u) | 1;
    } else if (local.func_001EF1E7()) {
        local.func_001EF333(2);
    } else {
        local.func_001EEF4F(base.func_001EF170(2)->func_001EFD7A(&temps[1], s)->func_001EFAB5(&temps[0], &local));
    }
    ((S_001EF734 *)out)->func_001EEEE6(&local);
    return out;
}

void *func_001F1085(S_001EF734 *out)
{
    S_001EF734 *func_001EFE9D(S_001EF734 *out);
    S_001EF734 *func_001EFD19(S_001EF734 *out, char *s, S_001EF734 *n);
    void *func_001F0F86(void *out);
    int ecsu = !(D_002F6A38 & 0x8000);
    int prefix = ecsu && !(D_002F6A38 & 0x1000);
    S_001EF734 name;
    S_001EF734 result;
    S_001EF734 t;
    int c = *D_002F6A28;
    name.value = 0;
    name.flags &= 0xfffffe00;
    D_002F6A28++;
    switch (c) {
    case 0:
        D_002F6A28--;
        out->func_001EF759(D_00295CEE);
        return out;
    case 'T':
        name.func_001EF9B2(D_00295CFC);
        break;
    case 'U':
        name.func_001EF9B2(D_00295D04);
        break;
    case 'V':
        name.func_001EF9B2(D_002871C8);
        break;
    case 'W':
        prefix = ecsu;
        name.func_001EEF4F(func_001EFD19(&t, D_00295D0C, func_001EFE9D(&result)));
        break;
    case 'X':
        name.func_001EF9B2(D_00295D14);
        break;
    case 'Y':
        name.func_001EF9B2(D_00295D20);
        break;
    }
    result.value = 0;
    result.flags &= 0xfffffe00;
    if (prefix)
        result.func_001EEF4F(&name);
    func_001F0F86(&name);
    result.func_001EF935(&name);
    out->func_001EEEE6(&result);
    return out;
}

void *func_001F1184(void *p)
{
    int func_001F0B53(...);
    int func_001F098B(...);
    if (*D_002F6A28 == '?') {
        D_002F6A28++;
        func_001F0B53(p);
    } else {
        func_001F098B(p, 1);
    }
    return p;
}
void *func_001F11B1(S_001EF734 *o)
{
    int func_001EEE49(int n, ...);
    void *func_001F0F86(void *out);
    S_001EF734 local;
    S_001EF734 tmp;
    local.func_001EF759((void *)func_001EEE49(0));
    if (D_002F6A28[0] != 0) {
        int c = D_002F6A28[0];
        D_002F6A28 += 1;
        switch (c) {
        case '5':
            o->func_001EF170(1);
            return o;
        case '2':
            local.func_001EF935(func_001F0F86(&tmp));
            break;
        case '0':
            local.func_001EFB82(D_0027D1D8);
            break;
        }
    } else {
        local.func_001EF613(2);
    }
    local.func_001EFB82(D_00295D30);
    o->func_001EEEE6(&local);
    return o;
}

