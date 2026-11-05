/* 8 functions from 0x001F208F to 0x001F306F, found by Ghidra. */
#include "common.h"

struct Obj { char pad[0x90]; Obj(int a, int b, int c, int d, unsigned short e); ~Obj(); int run(); };
struct T { int a; int b; int func_001EF1E7(); void func_001EF734(int); void func_001EF935(T*); void func_001EFB18(int); void func_001EF170(int); void func_001EEEE6(T*); };
extern char* D_002F6A28;
void func_001F208F(T*, T*);
void func_001F23B8(T*, T*, int, int, int);
void func_001F062A(T*, T*, int);
extern int D_002F6A04, D_002F6A08, D_002F6A0C, D_002F6A10, D_002F6A14;

void func_001F2BC3(void) {
    int func_001EB302(...);
    func_001EB302(5);
}
