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
