/* 1 function from 0x000FA620 to 0x000FA720, found by Ghidra. */
#include "common.h"

extern int D_0028F5DC;

/* the record the global at D_002A8490 points to: the one at +0x2e0 has a flag at +4 */
struct S_000FA620_Record {
    int f0;
    int f4;
};

struct S_000FA620_Root {
    char pad0[0x2e0];
    S_000FA620_Record *f2e0;
};

extern S_000FA620_Root *D_002A8490;

struct C_000BBDF0 {
    int func_000BBDF0(void);
};

struct C_000FA620_Widget {
    void func_001B1980(void);
    void func_001B19A0(int v);
    void func_001B17D0(int v);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_000FA620 {
    char pad0[0x124];
    C_000BBDF0 *f124;
    char pad128[0x358];
    C_000FA620_Widget *f480;
    char pad484[8];
    int f48c;
    char pad490[0xd8];
    C_000FA620_Widget *f568;
    void func_000CFF30(void);
    void func_000FA620(void);
};

void C_000FA620::func_000FA620(void)
{
    C_000BBDF0 *p = f124;

    f568->func_001B1980();
    f568->func_001B19A0(D_0028F5DC);
    func_000CFF30();
    if (D_002A8490->f2e0->f4 == 0) {
        f568->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
    f480->func_001B1980();
    if (f48c != 2 && f48c != 4 && f48c != 7 && f48c != 9 && f48c != 0xd && f48c != 0x10) {
        f480->func_001B19A0(D_0028F5DC);
        f480->func_001B17D0(p->func_000BBDF0());
        f480->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
    }
}
