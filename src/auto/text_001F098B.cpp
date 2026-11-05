/* 6 functions from 0x001F098B to 0x001F1243, found by Ghidra. */
#include "common.h"

extern char *D_002F6A28;
extern char D_0027D1D8[];
extern char D_00295D30[];

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
};

#pragma optimize("t", off)
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

