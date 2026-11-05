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
};

#pragma optimize("t", off)
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

