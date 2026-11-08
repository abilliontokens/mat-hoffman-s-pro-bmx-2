/* 6 functions from 0x001F098B to 0x001F1243, found by Ghidra. */
#include "common.h"

extern char *D_002F6A28;
extern char D_0027D1D8[];
extern char D_00295D30[];
extern u32 D_002F6A38;
extern int D_002955B8[];
/* Copy of the real func_001EEE49 (src/auto/text_001EEA34.cpp, undname.c UScore). It only
 * exists here because MSVC emits `add esp,4` instead of `pop ecx` after calls to a callee whose
 * body it has already compiled in the same translation unit; remove it once these files are
 * merged into one undname translation unit with the callee first. */
#pragma optimize("s", on)
#pragma optimize("y", off)
extern "C" char *func_001EEE49(int n)
{
    volatile int *gp = (volatile int *)&D_002F6A38;
    if (~*gp & 1) {
        return (char *)D_002955B8[n];
    }
    return (char *)D_002955B8[n] + 1 + 1;
}
#pragma optimize("", on)
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

extern char *D_00295520[];
extern char *D_002955B0[];
extern char D_00295CD0[];
extern char D_00295A74[];
extern char *D_00295594[];
extern char *D_00295650[];
extern char *D_002955F8[];
extern char D_00295B2C[];
extern char *D_00295504[];
void *func_001F0B53(S_001EF734 *out)
{
    void *func_001F098B(void *, int);
    S_001EF734 *func_001EFCD5(void *out, char c, S_001EF734 *n);
    S_001EF734 *func_001EFD19(S_001EF734 *out, char *s, S_001EF734 *n);
    S_001EF734 *func_001F037A(void *out, char *s, int v);
    S_001EF734 *func_001F041A(void *out);
    S_001EF734 *func_001EFDB9(void *out, int v);
    S_001EF734 *func_001F306F(void *out, int v);
    int isCtor = 0;
    S_001EF734 name;
    S_001EF734 second;
    name.flags &= 0xfffffe00;
    second.flags &= 0xfffffe00;
    int c = *D_002F6A28++;
    name.value = 0;
    second.value = 0;
    switch (c) {
    case 0:
    trunc:
        D_002F6A28--;
        out->func_001EF170(2);
        return out;
    case '0':
    case '1': {
        S_001EF734 t20, t28;
        char *save = D_002F6A28;
        name.func_001EEF4F((S_001EF734 *)func_001F098B(&t20, 0));
        D_002F6A28 = save;
        if (!name.func_001EF1E7() && save[-1] == '1')
            name.func_001EEF4F(func_001EFCD5(&t28, '~', &name));
        goto done;
    }
    case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
        name.func_001EF9B2(D_00295520[D_002F6A28[-1]]);
        goto check;
    case 'B':
        isCtor = 1;
    case 'A': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': case 'I':
    case 'J': case 'K': case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q':
    case 'R': case 'S': case 'T': case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z':
        name.func_001EF9B2(D_00295504[D_002F6A28[-1]]);
        if (!isCtor)
            goto check;
        if (!name.func_001EF1E7())
            name.flags |= 0x20;
        goto done;
    case '_':
        c = *D_002F6A28++;
        switch (c) {
        case 0:
            goto trunc;
        case '0': case '1': case '2': case '3': case '4': case '5': case '6':
            name.func_001EF9B2(D_002955B0[D_002F6A28[-1]]);
            goto check;
        case '7': case '8': case '9':
            out->func_001EF759(D_002955B0[D_002F6A28[-1]]);
            return out;
        case '?': {
            S_001EF734 t18;
            c = *D_002F6A28++;
            if (c == 0)
                goto trunc;
            if (c != '0')
                goto error;
            func_001F037A(&t18, D_00295CD0, 0);
            t18.flags |= 0x100;
            out->func_001EEEE6(&t18);
            return out;
        }
        case 'C': {
            S_001EF734 t18;
            func_001F037A(&t18, D_00295A74, 1);
            t18.flags |= 0x100;
            out->func_001EEEE6(&t18);
            return out;
        }
        case 'P': {
            S_001EF734 t80;
            name.func_001EF9B2(D_00295594[D_002F6A28[-1]]);
            second.func_001EEF4F((S_001EF734 *)func_001F0B53(&t80));
            if (second.func_001EF1E7() || second.func_001EF1E7())
                goto quote;
            if (second.flags & 0x40)
                goto error;
            name.func_001EFAB5(out, &second);
            return out;
        }
        case 'R': {
            S_001EF734 t18, t30, t38, t40, t48, t50, t58, t60, t68, t70, t78;
            name.func_001EF9B2(D_00295594[D_002F6A28[-1]]);
            second.func_001EF9B2(D_00295650[*D_002F6A28]);
            c = *D_002F6A28++;
            switch (c) {
            case '0':
                func_001F306F(&t18, 0);
                t18.func_001EFD3B(&t78, ' ')->func_001EFAB5(&t70, &name)->func_001EFAB5(out, &second);
                return out;
            case '1':
                name.func_001EFAB5(&t18, &second);
                t18.func_001EF935(func_001F041A(&t38)->func_001EFD3B(&t30, ','));
                t18.func_001EF935(func_001F041A(&t48)->func_001EFD3B(&t40, ','));
                t18.func_001EF935(func_001F041A(&t58)->func_001EFD3B(&t50, ','));
                t18.func_001EF935(func_001EFDB9(&t68, 0)->func_001EFD3B(&t60, ')'));
            case '2': case '3': case '4':
            quote:
                t18.func_001EFD3B(out, '\'');
                return out;
            default:
                D_002F6A28--;
                out->func_001EF170(2);
                return out;
            }
        }
        case '_':
            c = *D_002F6A28++;
            if (c < 'A' || c > 'D')
                goto error;
            out->func_001EF759(D_002955F8[D_002F6A28[-1]]);
            return out;
        case 'A': case 'B': case 'D': case 'E': case 'F': case 'G': case 'H': case 'I': case 'J':
        case 'L': case 'M': case 'N': case 'O': case 'S': case 'T': case 'X': case 'Y':
            out->func_001EF759(D_00295594[D_002F6A28[-1]]);
            return out;
        case 'Q':
            goto check;
        case 'U': case 'V':
            name.func_001EF9B2(D_00295594[D_002F6A28[-1]]);
        check:
            {
                S_001EF734 t80;
                if (!name.func_001EF1E7())
                    name.func_001EEF4F(func_001EFD19(&t80, D_00295B2C, &name));
            }
        done:
            out->func_001EEEE6(&name);
            return out;
        default:
            goto error;
        }
    default:
    error:
        out->func_001EF170(1);
        return out;
    }
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
#pragma optimize("s", on)
#pragma optimize("y", off)
void *func_001F11B1(S_001EF734 *o)
{
    void *func_001F0F86(void *out);
    S_001EF734 local;
    S_001EF734 tmp;
    local.func_001EF759(func_001EEE49(0));
    if (*(volatile char *)D_002F6A28 != 0) {
        switch (*D_002F6A28++) {
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
