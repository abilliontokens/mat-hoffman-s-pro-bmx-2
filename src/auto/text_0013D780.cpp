/* 14 functions from 0x0013D780 to 0x0013E6F0, found by Ghidra. */
#include "common.h"

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
void func_001E891B(void *p);
int func_001EA426(void *p, int a);

extern "C" int strcmp(const char *s1, const char *s2);
char *func_001E8920(char *dst, const char *src, int n);
int func_001ADD20(char *buf, int count, int a3, void *a4);

struct C_0013E170 {
    void func_0013E170(int index, char *name, int value);
};

extern int D_00284C58;
extern int D_00100000;

struct C_001D5600 {
    void func_001D5600(void);
};

struct C_00156E80 {
    void func_00156E80(void);
};

extern C_001D5600 *D_002EFDB8;
extern C_00156E80 *D_002A8490;

struct C_0013E080_elem {
    int x;
    int y;
    int z;
};

struct C_0013E080 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C[8];
    char pad4C[0x20];
    int f6C;
    int f70;
    int f74;
    int f78;
    int f7C;
    C_0013E080_elem f80[8];
    int fE0;
    int fE4;
    int fE8;
    int fEC;
    int fF0;
    int fF4;
    int fF8;
    int fFC;
    C_0013E080 *func_0013E080(void);
    void *func_0013E140(unsigned int flags);
    void func_0001DFE0(void);
    void func_0013D400(void);
    void func_0001DFF0(void);
    void func_0013D550(int a, int b, void *c);
};

struct C_0013DFF0_elem {
    int f0;
    void *f4;
    char pad8[0x20];
};

struct C_0013DFF0 {
    char pad0[0xC];
    C_0013DFF0_elem *unkC;
    int unk10;
    int func_0013DFF0(int a1, int a2);
    int func_0013C5D0(C_0013DFF0_elem *e, int a2);
};

int C_0013DFF0::func_0013DFF0(int a1, int a2) {
    C_0013DFF0_elem *p = unkC;
    C_0013DFF0_elem *end;
    int count;

    if (!p)
        return 0;
    count = unk10;
    end = p + count - 1;
    if (count > 1) {
        do {
            if (p->f4 && func_001EA426(p->f4, a1) == 0)
                return func_0013C5D0(p, a2);
            p++;
        } while (p != end);
    }
    if (p->f4 && func_001EA426(p->f4, a1) == 0)
        return func_0013C5D0(p, a2);
    return 0;
}

C_0013E080 *C_0013E080::func_0013E080(void) {
    int i;

    func_0001DFE0();
    f24 = (int)((char *)this + 0x14);
    f28 = (int)((char *)this + 0x20);
    vtbl = &D_00284C58;
    fF0 = 0;
    f8 = -1;
    f10 = 0;
    fC = 0;
    fE4 = -1;
    fEC = 0;
    fE8 = 0;
    fF4 = -1;
    fF8 = -1;
    fE0 = -1;
    fFC = 1;
    for (i = 0; i < 8; i++)
        f2C[i] = 0;
    f70 = 0;
    f6C = -1;
    f74 = -1;
    f78 = -1;
    f7C = 0;
    for (i = 0; i < 8; i++) {
        f80[i].x = 0;
        f80[i].y = -2;
        f80[i].z = -0x6000;
    }
    func_0013D550(1, 10, &D_00100000);
    return this;
}

void *C_0013E080::func_0013E140(unsigned int flags) {
    vtbl = &D_00284C58;
    func_0013D400();
    func_0001DFF0();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void func_0013E680(void) {
    D_002EFDB8->func_001D5600();
    D_002A8490->func_00156E80();
}
