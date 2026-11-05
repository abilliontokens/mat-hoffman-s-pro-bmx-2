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
    S_001EF734 *func_001EEF4F(S_001EF734 *p);
    void func_001EF9B2(char *s);
    int func_001EF210();
    char *func_001EF26D(char *buf, int n);
};

extern char *D_002F6A2C;
extern char *D_002F6A30;
extern int D_002F6A34;
extern unsigned char D_002F6A39;
extern char D_00295E5C[];

void func_001F2BC3(void) {
    int func_001EB302(...);
    func_001EB302(5);
}
