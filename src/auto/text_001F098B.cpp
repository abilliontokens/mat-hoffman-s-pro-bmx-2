/* 6 functions from 0x001F098B to 0x001F1243, found by Ghidra. */
#include "common.h"

extern char *D_002F6A28;
extern char D_0027D1D8[];
extern char D_00295D30[];

/* 8-byte value object used by the undecorator helpers. */
struct S_001EF734 {
    u32 value;      /* +0x0 */
    u32 flags;      /* +0x4 */
    void func_001EEEE6(S_001EF734 *src);
    void func_001EF170(int v);
    void func_001EF613(int v);
    void func_001EF935(void *v);
    S_001EF734 *func_001EF759(void *p);
    void func_001EFB82(char *s);
};
