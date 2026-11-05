/* 12 functions from 0x00199B00 to 0x0019A8C0, found by Ghidra. */
#include "common.h"

void func_00198EF0(void *a, void *b, void *c);
void func_0011F5A0(void *m, int a, int b, int c, int d, int e);
void __stdcall func_00199D70(int a0, int a1, int a2, int a3);

struct C_00199BE0Child {
    void func_00197B10(void);
};

struct C_00199BE0Mat {
    void func_000264C0(void *m);
};

struct C_00199BE0 {
    char pad0[0x174];
    C_00199BE0Child *f174;
    char pad178[8];
    u8 f180;
    void func_001982F0(void);
    void func_00197AA0(void);
    void func_00199BE0(void *m);
    void func_00199C20(C_00199BE0 *p, void *m);
    void func_00199C90(int a0, int a1, int a2, int a3, int a4, int a5);
};

struct C_00199C20Mat {
    void func_000264C0(void *m);
};

void C_00199BE0::func_00199BE0(void *m)
{
    ((C_00199BE0Mat *)((char *)this + 0xb0))->func_000264C0(m);
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void __stdcall func_00199E30(int a0, int a1, int a2, int a3, int a4)
{
    func_00199D70(a0, a1, a2, a4);
}
