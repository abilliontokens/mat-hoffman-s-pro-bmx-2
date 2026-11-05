/* 24 functions from 0x001EF9D9 to 0x001F098B, found by Ghidra. */
#include "common.h"
extern char *D_002F6A28;
extern u32 D_002F6A38;
extern int D_00295C04;
int func_001EEE49(int n);

/* 8-byte value object used by the 'A'..'N' parser helpers. */
struct S_001EF734 {
    u32 value;      /* +0x0 */
    u16 flags;      /* +0x4 */
    S_001EF734 *func_001EF734(char c);
    void func_001EEEE6(S_001EF734 *src);
    int func_001EF1E7(void);
    void func_001EEF4F(int v);
    void func_001EF613(int v);
    void func_001EF935(void *v);
    S_001EF734 *func_001EF9B2(char *s);
    void func_001EFAB5(void *a, void *b);
    void func_001EF170(int v);
    void func_001EF759(void *p);
};

void *_func_001EF9D9(S_001EF734 *o)
{
    S_001EF734 local;
    char c = *D_002F6A28;
    if (c == 0) {
        o->func_001EF170(2);
        return o;
    }
    int k = (int)c - 'A';
    D_002F6A28++;
    if ((u32)k > 0xc) {
        o->func_001EF170(1);
        return o;
    }
    local.value = 0;
    local.flags &= 0xfe00;
    if ((D_002F6A38 & 2) == 0) {
        switch (k & ~1) {
        case 0:  local.func_001EF9B2((char *)func_001EEE49(1)); break;
        case 2:  local.func_001EF9B2((char *)func_001EEE49(2)); break;
        case 4:  local.func_001EF9B2((char *)func_001EEE49(4)); break;
        case 6:  local.func_001EF9B2((char *)func_001EEE49(3)); break;
        case 8:  local.func_001EF9B2((char *)func_001EEE49(5)); break;
        case 12: local.func_001EF9B2((char *)func_001EEE49(6)); break;
        }
    }
    o->func_001EEEE6(&local);
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

void S_001EF734::func_001EFAB5(void *ap, void *bp)
{
    S_001EF734 local;
    S_001EF734 *b = (S_001EF734 *)bp;
    local.func_001EEEE6(this);
    if (local.func_001EF1E7() != 0) {
        local.func_001EEF4F((int)b);
    } else if (b->func_001EF1E7() == 0) {
        local.func_001EF935(b);
    } else {
        local.func_001EF613(((s32)(b->flags << 28)) >> 28);
    }
    ((S_001EF734 *)ap)->func_001EEEE6(&local);
}

void *_func_001EFCD5(void *a, char b, void *c)
{
    S_001EF734 local;
    local.func_001EF734(b)->func_001EFAB5(a, c);
    return a;
}

