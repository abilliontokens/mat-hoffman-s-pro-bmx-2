/* 1 function from 0x0010C090 to 0x0010C210, found by Ghidra. */
#include "common.h"

struct V4_0010C090 { int x, y, z, w; };

struct E_0010C090 {
    V4_0010C090 a;
    V4_0010C090 b;
    int c;
};

struct P_0010C090 {
    int count;
    int a[5];
    int b[5];
    int f2c;
};

struct Q_0010C090 { char pad0[0x28]; int f28; };

struct C_00104B00 {
    char pad0[0x1e0];
    Q_0010C090 *f1e0;
    char pad1e4[0x5c8 - 0x1e4];
    int f5c8;
    char pad5cc[0x7f4 - 0x5cc];
    V4_0010C090 f7f4;
    V4_0010C090 f804;
    V4_0010C090 f814;
    char pad824[0x1084 - 0x824];
    P_0010C090 *f1084;
    char pad1088[0x1178 - 0x1088];
    int f1178;
    char pad117c[0x11c4 - 0x117c];
    int f11c4;
    int f11c8;
    char pad11cc[0x1220 - 0x11cc];
    int f1220;
    char pad1224[0x122c - 0x1224];
    int f122c;
    char pad1230[0x12ac - 0x1230];
    E_0010C090 f12ac[20];
    int f157c;
    int f1580;
    char pad1584[0x1f88 - 0x1584];
    int f1f88;
    int func_000273F0(V4_0010C090 *a, V4_0010C090 *b, V4_0010C090 *c);
    int func_001056E0(void);
    void func_0010C090(V4_0010C090 *a, V4_0010C090 *b, V4_0010C090 *c, int d);
};

extern V4_0010C090 D_002A3A5C;

void C_00104B00::func_0010C090(V4_0010C090 *a, V4_0010C090 *b, V4_0010C090 *c, int d)
{
    int i;

    if (func_000273F0(a, b, c) == 0 && d == 0) {
        func_000273F0(&f7f4, &f804, &f814);
    }
    f1e0->f28 = 0;
    f5c8 = 0;
    f11c4 = 0;
    f1220 = 0;
    f1178 = 1;
    f11c8 = 0;
    f122c = 0;
    f1f88 = 0;
    for (i = 0; i < 20; i++) {
        f12ac[i].a = *a;
        if (c == 0) {
            f12ac[i].b = D_002A3A5C;
        } else {
            f12ac[i].b = *c;
        }
        f12ac[i].c = 0;
    }
    f157c = 0;
    f1580 = 0x13;
    if (f1084 != 0) {
        P_0010C090 *p = f1084;
        p->count = 0;
        for (i = 0; i < 5; i++) {
            p->a[i] = -1;
            p->b[i] = 0;
        }
        if (p->a[0] != -1) p->count++;
        if (p->a[1] != -1) p->count++;
        if (p->a[2] != -1) p->count++;
        if (p->a[3] != -1) p->count++;
        if (p->a[4] != -1) p->count++;
        f1084->f2c = -1;
    }
    func_001056E0();
}
