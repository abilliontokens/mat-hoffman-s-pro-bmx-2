/* 3 functions from 0x000C9940 to 0x000CA940, found by Ghidra. */
#include "common.h"

struct ElemC9 {
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, int a12, int a13);
    void func_001B1B30(float a, int b);
};
#define SETC9(o, color, a, b) \
    do { \
        (o)->func_001B2270(color); \
        (o)->func_001B1860(0, -1.0f, 0xff, a, 0, 0, 0.0f, 0, b, 0, 0.25f, 0, 0); \
    } while (0)

struct C_000C9940 {
    char pad0[0x2a4];
    int f2A4;
    char pad2A8[0x30];
    ElemC9 *f2D8;
    ElemC9 *f2DC;
    ElemC9 *f2E0;
    char pad2E4[8];
    ElemC9 *f2EC;
    char pad2F0[4];
    ElemC9 *f2F4;
    ElemC9 *f2F8;
    ElemC9 *f2FC;
    ElemC9 *f300;
    char pad304[0x28];
    ElemC9 *f32C;
    ElemC9 *f330;
    void func_000C9940(void);
};

struct SetterObj_C9 {
    void func_001B1980(void);
    void func_001B17D0(int v);
};

struct GObj4_C9 {
    char pad0[0xf78];
    int f78;
    char padf7c[4];
    int f80;
};

struct GObj2E8_C9 {
    char pad0[4];
    GObj4_C9 *p4;
};

struct LookupObj_C9 {
    int *func_0018C160(int a);
};

struct GObjRoot_C9 {
    char pad0[0x2e8];
    GObj2E8_C9 *p2E8;
    LookupObj_C9 *p2EC;
};

extern GObjRoot_C9 *D_002A8490;

extern float D_00275AEC;
extern int D_00278690;
extern int D_00278678;
extern int D_0027E488;

struct ClampObj_C9 {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_C9 {
    ClampObj_C9 *func_0018C070();
};

struct SubElem_C9 {
    ClampObj_C9 *func_001D5AA0();
};

/* BmxUIPageGameOptions */
struct C_000CA7D0 {
    char pad0[0x334];
    SubElem_C9 *ptrs[12];
    void func_000CA7D0(void);
    void func_001578D0(void);
};

struct C_000CA8D0 {
    char pad0[0x2e0];
    SetterObj_C9 *unk2E0;
    char pad2e4[4];
    int unk2E8;
    void func_000CA8D0(void);
};

void C_000C9940::func_000C9940(void)
{
    if (f2A4 == 1) {
        SETC9(f2EC, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2D8, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2FC, 0xff, 1.15f, 1.15f);
        SETC9(f2DC, 0xff, 1.15f, 1.15f);
        SETC9(f2F4, 0xffbfa35a, 1.45f, 1.45f);
        SETC9(f32C, 0xffbfa35a, 1.45f, 1.45f);
        SETC9(f2F8, 0xffcccccc, 1.15f, 1.15f);
        f330->func_001B2270(0xffcccccc);
        f330->func_001B1B30(1.15f, 0);
    } else if (f2A4 == 2) {
        SETC9(f2EC, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2D8, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2FC, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2DC, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2F4, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f32C, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2F8, 0xffbfa35a, 1.45f, 1.45f);
        SETC9(f330, 0xffbfa35a, 1.45f, 1.45f);
    } else if (f2A4 == 0) {
        SETC9(f2EC, 0xffbfa35a, 1.45f, 1.45f);
        SETC9(f2D8, 0xffbfa35a, 1.45f, 1.45f);
        SETC9(f2FC, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2DC, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2F4, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f32C, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2F8, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f330, 0xffcccccc, 1.15f, 1.15f);
    } else if (f2A4 == 3) {
        SETC9(f2EC, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2D8, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2FC, 0xffbfa35a, 1.45f, 1.45f);
        SETC9(f2DC, 0xffbfa35a, 1.45f, 1.45f);
        SETC9(f2F4, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f32C, 0xffcccccc, 1.45f, 1.45f);
        SETC9(f2F8, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f330, 0xffcccccc, 1.15f, 1.15f);
    } else {
        SETC9(f2EC, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2D8, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2FC, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2DC, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2F4, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f32C, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f2F8, 0xffcccccc, 1.15f, 1.15f);
        SETC9(f330, 0xffcccccc, 1.15f, 1.15f);
    }
    SETC9(f2FC, 0xffcccccc, 1.15f, 1.15f);
    SETC9(f2DC, 0xffcccccc, 1.15f, 1.15f);
    SETC9(f2F4, 0xffcccccc, 1.15f, 1.15f);
    SETC9(f32C, 0xffcccccc, 1.15f, 1.15f);
    SETC9(f2F8, 0xffcccccc, 1.15f, 1.15f);
    SETC9(f330, 0xffcccccc, 1.15f, 1.15f);
    SETC9(f300, 0xffcccccc, 1.15f, 1.15f);
}

void C_000CA7D0::func_000CA7D0(void)
{
    int ids[3];
    int i;
    int *r;
    ClampObj_C9 *o;
    SubElem_C9 **e;
    LookupObj_C9 *lk;

    ids[0] = (int)&D_00278690;
    ids[1] = (int)&D_00278678;
    ids[2] = (int)&D_0027E488;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((MidObj_C9 *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = ptrs;
    i = 12;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    func_001578D0();
}

void C_000CA8D0::func_000CA8D0(void)
{
    unk2E0->func_001B1980();
    switch (unk2E8) {
    case 0:
        unk2E0->func_001B17D0(D_002A8490->p2E8->p4->f78);
        break;
    case 1:
        unk2E0->func_001B17D0(D_002A8490->p2E8->p4->f80);
        break;
    }
}
