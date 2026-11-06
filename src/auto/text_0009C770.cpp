/* 1 function from 0x0009C770 to 0x0009CAD0, found by Ghidra. */
#include "common.h"

void func_001E891B(void *p);

struct S_0009C770_Child {
    void func_00097A20(void);
    void func_00012140(void);
};

/* element with a child pointer array at +0x1c8 (count at +0x1b8) */
struct S_0009C770_E1 {
    char pad0[0x1b8];
    int f1b8;
    char pad1bc[0xc];
    S_0009C770_Child **f1c8;
    void func_00096700(void);
};

/* element that also owns 12 child pointers at +0x4880 */
struct S_0009C770_E2 {
    char pad0[0x1b8];
    int f1b8;
    char pad1bc[0xc];
    S_0009C770_Child **f1c8;
    char pad1cc[0x4880 - 0x1cc];
    S_0009C770_Child *f4880[12];
};

/* owner of three element arrays */
struct C_0009C770 {
    S_0009C770_E1 **arr0;
    S_0009C770_E2 **arr4;
    S_0009C770_E2 **arr8;
    int cnt0;
    int cnt4;
    int cnt8;
    void func_0009C770(void);
};

static __forceinline void Free_0009C770(S_0009C770_E2 *e)
{
    int k;
    S_0009C770_Child *c;

    for (k = 0; k < 12; k++) {
        c = e->f4880[k];
        if (c != 0) {
            c->func_00012140();
            func_001E891B(c);
            e->f4880[k] = 0;
        }
    }
    func_001E891B(e);
}

void C_0009C770::func_0009C770(void)
{
    int i;
    int j;
    int n;
    struct {
        int e2;
        int dummy;
    } t;
    S_0009C770_E1 *e1;
    S_0009C770_Child *c;
    S_0009C770_Child **p;

    if (arr0 != 0) {
        for (i = 0; i < cnt0; i++) {
            if (arr0[i] != 0) {
                if (arr0[i]->f1c8 != 0) {
                    for (j = 0; j < arr0[i]->f1b8; j++) {
                        c = arr0[i]->f1c8[j];
                        if (c != 0) {
                            c->func_00097A20();
                            func_001E891B(c);
                        }
                        arr0[i]->f1c8[j] = 0;
                    }
                    func_001E891B(arr0[i]->f1c8);
                    arr0[i]->f1c8 = 0;
                }
                e1 = arr0[i];
                if (e1 != 0) {
                    e1->func_00096700();
                    func_001E891B(e1);
                }
                arr0[i] = 0;
            }
        }
        func_001E891B(arr0);
        arr0 = 0;
    }
    if (arr4 != 0) {
        for (i = 0; i < cnt4; i++) {
            if (arr4[i] != 0) {
                if (arr4[i]->f1c8 != 0) {
                    for (j = 0; j < arr4[i]->f1b8; j++) {
                        c = arr4[i]->f1c8[j];
                        if (c != 0) {
                            c->func_00097A20();
                            func_001E891B(c);
                        }
                        arr4[i]->f1c8[j] = 0;
                    }
                    func_001E891B(arr4[i]->f1c8);
                    arr4[i]->f1c8 = 0;
                }
                t.e2 = (int)arr4[i];
                if (t.e2 != 0) {
                    p = ((S_0009C770_E2 *)t.e2)->f4880;
                    n = 12;
                    do {
                        c = *p;
                        if (c != 0) {
                            c->func_00012140();
                            func_001E891B(c);
                            *p = 0;
                        }
                        p++;
                    } while (--n != 0);
                    func_001E891B((void *)t.e2);
                }
                arr4[i] = 0;
            }
        }
        func_001E891B(arr4);
        arr4 = 0;
    }
    if (arr8 != 0) {
        for (i = 0; i < cnt8; i++) {
            if (arr8[i] != 0) {
                if (arr8[i]->f1c8 != 0) {
                    for (j = 0; j < arr8[i]->f1b8; j++) {
                        c = arr8[i]->f1c8[j];
                        if (c != 0) {
                            c->func_00097A20();
                            func_001E891B(c);
                        }
                        arr8[i]->f1c8[j] = 0;
                    }
                    func_001E891B(arr8[i]->f1c8);
                    arr8[i]->f1c8 = 0;
                }
                t.e2 = (int)arr8[i];
                if (t.e2 != 0) {
                    p = ((S_0009C770_E2 *)t.e2)->f4880;
                    n = 12;
                    do {
                        c = *p;
                        if (c != 0) {
                            c->func_00012140();
                            func_001E891B(c);
                            *p = 0;
                        }
                        p++;
                    } while (--n != 0);
                    func_001E891B((void *)t.e2);
                }
                arr8[i] = 0;
            }
        }
        func_001E891B(arr8);
        arr8 = 0;
    }
}
