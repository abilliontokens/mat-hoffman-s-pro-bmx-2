/* 3 functions from 0x001F1243 to 0x001F208F, found by Ghidra. */
#include "common.h"
extern char *D_002F6A28;
struct ParserFlags { unsigned int low:12; unsigned int b12:1; unsigned int b13:1; unsigned int high:18; };
extern ParserFlags D_002F6A38;
extern unsigned char D_002F6A1C;
extern char D_00295CE8[];
struct S_001EF734 {
    u32 value;
    u32 flags;
    int func_001EF1E7();
    int func_001EF1D0();
    void func_001EEEE6(S_001EF734 *);
    void func_001EEF4F(S_001EF734 *);
    void func_001EF170(int);
    S_001EF734 *func_001EFAB5(void *, void *);
    S_001EF734 *func_001EFD7A(void *, const char *);
};
S_001EF734 *func_001F306F(S_001EF734 *, int);
S_001EF734 *func_001F1184(S_001EF734 *);
S_001EF734 *func_001F1DF5(S_001EF734 *);
S_001EF734 *func_001F1243(S_001EF734 *, S_001EF734 *);
