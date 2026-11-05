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
int func_001EEE49(int n, ...);

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
};

extern char D_00295C58[];
extern char D_00295C60[];
extern int D_00278798;
extern int D_0027D1D8;
void *_func_001EFBEE(S_001EF734 *o);
void *_func_001EFD19(void *a, char *b, void *c);
void *_func_001EFF6E(S_001EF734 *o);

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

void *_func_001EFF6E(S_001EF734 *o)
{
    S_001EF734 local;
    S_001EF734 tmp;
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
        if ((local.flags & 0xf) == 0 && *D_002F6A28 != 0) {
            char c = *D_002F6A28;
            if (c == '@') {
                D_002F6A28++;
            } else if (c == 'Z') {
                D_002F6A28++;
                o->func_001EEEE6(local.func_001EFD7A(&tmp, D_00295C58));
                break;
            } else {
                o->func_001EF170(1);
                break;
            }
        }
        o->func_001EEEE6(&local);
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

