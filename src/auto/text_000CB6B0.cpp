/* 5 functions from 0x000CB6B0 to 0x000CC620, found by Ghidra. */
#include "common.h"

extern int D_0028F5E0;

struct C_000CB6B0_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B19A0(int v);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
    void func_001B1AB0(int a1, float a2);
    void func_001B1B30(float a, float b);
};

struct C_001D5760 {
    char pad0[0x28];
    float f28;
    float f2C;
    char pad30[0xb];
    unsigned char f3B;
    float f3C;
    float f40;
    float f44;
    float f48;
    char pad4C[0xc];
    unsigned char f58;
    C_001D5760 *func_001D5760();
    void func_001D5810(char *s, float a, float b, int c);
    void func_001D5AA0();
};
struct C_0018C160 {
    void *func_0018C160(char *s);
};
extern char D_00278690[], D_002786A0[], D_00278678[], D_002786B0[], D_0027E52C[];
extern float D_002757F0, D_0027E140, D_0027886C;
extern void *func_001E8A44(int n);
extern void func_00160C20(int *p, int v);
struct C_000CB6B0 {
    char pad0[0x294];
    C_001D5760 *f294;
    C_000CB6B0_Widget *f298[2];
    C_001D5760 *f2A0[4];
    C_000CB6B0 *func_000CB6B0(int a, int b, int c);
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(C_000CB6B0_Widget *w, int v);
};

struct C_0005E840 {
    void func_0005E840(int id);
    void func_001D6600();
};

struct S_002B91AC {
    char pad0[0x34];
    C_0005E840 *f34;
    C_0005E840 *f38;
    C_0005E840 *f3C;
    C_0005E840 *f40;
};
extern S_002B91AC *D_002B91AC;

struct S_002A8490_2E8 {
    int f0;
    int *f4;
};
struct S_002A8490 {
    char pad0[0x2e8];
    S_002A8490_2E8 *f2E8;
    C_0018C160 *f2EC;
};
extern S_002A8490 *D_002A8490;

struct C_000CC370 {
    char pad0[0x2e8];
    int f2E8;
    int f2EC;
    int f2F0;
    int f2F4;
    char pad2F8[0x314 - 0x2f8];
    int f314;
    char pad318[0x324 - 0x318];
    int f324;
    char pad328[0x374 - 0x328];
    int f374;
    void func_000CC370();
};

struct C_00093120 {
    void func_00093120();
};

struct C_000CC2B0 {
    char pad0[0x298];
    C_000CB6B0_Widget *f298[2];
    char pad2A0[0x1c];
    int f2BC;
    char pad2C0[0x38];
    C_00093120 *f2F8;
    char pad2FC[0x8];
    int f304;
    void func_000CC2B0();
    void func_000CC0B0();
};

struct C_000CC1B0 {
    char pad0[0x298];
    C_000CB6B0_Widget *f298[2];
    char pad2A0[0x1c];
    int f2BC;
    char pad2C0[0x38];
    C_00093120 *f2F8;
    void func_000CC1B0();
};

void C_000CC2B0::func_000CC0B0()
{
    int i;

    f2F8->func_00093120();
    for (i = 0; i < 2; i++) {
        f298[i]->func_001B1980();
        if (i == f2BC) {
            f298[i]->func_001B2270(0xffbfa35a);
            f298[i]->func_001B19A0(D_0028F5E0);
            f298[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
        } else if (i == f304) {
            f298[i]->func_001B2270(0xffcccccc);
            f298[i]->func_001B19A0(D_0028F5E0);
            f298[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
        } else {
            f298[i]->func_001B2270(0xffcccccc);
            f298[i]->func_001B19A0(D_0028F5E0);
            f298[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
        }
    }
}

void C_000CC1B0::func_000CC1B0()
{
    int i;

    f2F8->func_00093120();
    for (i = 0; i < 2; i++) {
        f298[i]->func_001B1980();
        f298[i]->func_001B19A0(D_0028F5E0);
        if (i == f2BC) {
            f298[i]->func_001B2270(0xffbfa35a);
            f298[i]->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
            f298[i]->func_001B1AB0(0xff, 0.25f);
            f298[i]->func_001B1B30(1.45f, 0.2f);
        } else {
            f298[i]->func_001B2270(0xffcccccc);
            f298[i]->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
            f298[i]->func_001B1AB0(0xff, 0.25f);
            f298[i]->func_001B1B30(1.15f, 0.2f);
        }
    }
}

void C_000CC2B0::func_000CC2B0()
{
    int i;

    f2F8->func_00093120();
    for (i = 0; i < 2; i++) {
        f298[i]->func_001B1980();
        if (i == f2BC) {
            f298[i]->func_001B2270(0xffbfa35a);
            f298[i]->func_001B19A0(D_0028F5E0);
            f298[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.45f, 0, 0.25f, 0, 0);
        } else {
            f298[i]->func_001B2270(0xffcccccc);
            f298[i]->func_001B19A0(D_0028F5E0);
            f298[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0, 0);
        }
    }
}

void C_000CC370::func_000CC370()
{
    int m = f2F4;

    if (m == 5 || m == 10) {
        D_002B91AC->f38->func_0005E840(D_002A8490->f2E8->f4[0x7b8 / 4]);
        D_002B91AC->f3C->func_0005E840(D_002A8490->f2E8->f4[0x7c0 / 4]);
    } else if (m == 2) {
        D_002B91AC->f40->func_0005E840(D_002A8490->f2E8->f4[0x7b8 / 4]);
        D_002B91AC->f3C->func_0005E840(D_002A8490->f2E8->f4[0x7c0 / 4]);
    } else if (m == 7 || m == 8 || m == 9) {
        D_002B91AC->f38->func_0005E840(D_002A8490->f2E8->f4[0x940 / 4]);
        if (f374) {
            if (f324)
                D_002B91AC->f3C->func_0005E840(D_002A8490->f2E8->f4[0x7c0 / 4]);
            else
                D_002B91AC->f3C->func_0005E840(D_002A8490->f2E8->f4[0x1248 / 4]);
            D_002B91AC->f3C->func_001D6600();
        }
    } else {
        D_002B91AC->f38->func_0005E840(D_002A8490->f2E8->f4[0x7c8 / 4]);
        D_002B91AC->f3C->func_0005E840(D_002A8490->f2E8->f4[0x838 / 4]);
    }

    m = f2F4;
    if (m == 7 || m == 8 || m == 9) {
        D_002B91AC->f38->func_001D6600();
    } else if (m == 2) {
        D_002B91AC->f3C->func_001D6600();
        D_002B91AC->f40->func_001D6600();
    } else if (m == 3) {
        D_002B91AC->f3C->func_001D6600();
    } else if (!f314) {
        D_002B91AC->f38->func_001D6600();
        D_002B91AC->f3C->func_001D6600();
    }

    if (f2E8) {
        D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4[0x738 / 4]);
    } else if (f2EC) {
        D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4[0x1188 / 4]);
    } else if (f2F0) {
        D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4[0x990 / 4]);
    } else {
        D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4[0x1b0 / 4]);
    }
    D_002B91AC->f34->func_001D6600();
}

