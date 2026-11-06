/* 4 functions from 0x000DA390 to 0x000DB310, found by Ghidra. */
#include "common.h"

struct LookupObj_DA {
    int *func_0018C160(int a);
};

struct GObjRoot_DA {
    char pad0[0x2ec];
    LookupObj_DA *p2EC;
};

extern GObjRoot_DA *D_002A8490;

extern float D_00275AEC;
extern int D_002786A0;
extern int D_00278690;
extern int D_00278678;

struct ClampObj_DA {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_DA {
    ClampObj_DA *func_0018C070();
};

struct C_001D6600_DA {
    void func_001D6600();
};

struct HudObj_DA {
    char pad0[0x34];
    C_001D6600_DA *f34;
    C_001D6600_DA *arr38[2];
};

extern HudObj_DA *D_002B91AC;
extern float D_00275600;
extern float D_00279B50;
extern float D_0027F718;

struct TextObj_DA {
    void func_001B1980(void);
    void func_001B1A30(float x, float y, float z);
    void func_001B2270(int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_000DB180 {
    char pad0[0x2b4];
    int f2B4;
    int f2B8;
    int f2BC;
    char pad2C0[0x10];
    int f2D0;
    char pad2D4[0x14];
    TextObj_DA *w2E8[11];
    float f314[17];
    void func_000DB180(void);
};

/* BmxUIPageViewVideosTitle */
struct C_000DB0E0 {
    void func_000DB0E0(void);
    void func_001578D0(void);
};

void C_000DB0E0::func_000DB0E0(void)
{
    int ids[3];
    int i;
    int *r;
    ClampObj_DA *o;
    LookupObj_DA *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((MidObj_DA *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    func_001578D0();
}

void C_000DB180::func_000DB180(void)
{
    int i;

    for (i = 0; i < 2; i++) {
        D_002B91AC->arr38[i]->func_001D6600();
    }
    D_002B91AC->f34->func_001D6600();
    if (f2BC) {
        for (i = 0; i < 11; i++) {
            w2E8[i]->func_001B1980();
            if (f2D0) {
                if (i == f2B4)
                    w2E8[i]->func_001B1A30(320.0f, f314[i + 6] - D_00275600, 0.5f);
                else
                    w2E8[i]->func_001B1A30(320.0f, f314[i + 6], 0.5f);
            } else {
                if (i == f2B4)
                    w2E8[i]->func_001B1A30(320.0f, f314[i + 6] - D_00275600, 0.0f);
                else
                    w2E8[i]->func_001B1A30(320.0f, f314[i + 6], 0.0f);
            }
            if (i == f2B4) {
                w2E8[i]->func_001B2270(0xffbfa35a);
                w2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
            } else if (i == f2B8) {
                w2E8[i]->func_001B2270(0xffcccccc);
                w2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
            } else {
                w2E8[i]->func_001B2270(0xffcccccc);
                w2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
            }
            if (f314[i + 6] > D_00279B50 || f314[i + 6] < D_0027F718) {
                w2E8[i]->func_001B1980();
            }
        }
        f2BC = 0;
    }
}

