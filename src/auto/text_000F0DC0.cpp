/* 6 functions from 0x000F0DC0 to 0x000F1D90, found by Ghidra. */
#include "common.h"

extern int D_0028248C;

struct C_001D6600 {
    void func_001D6600(void);
};

struct C_001D5AD0 {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1c];
    unsigned char f58;
    void func_001D5AD0();
};
struct S_002B91AC_000F1B60 {
    char pad0[0x24];
    C_001D5AD0 *unk24, *unk28, *unk2C, *unk30;
    C_001D6600 *f34;
    char pad38[0x18];
    C_001D5AD0 *unk50, *unk54;
    char pad58[0x10];
    C_001D5AD0 *unk68, *unk6C;
};
struct C_000F1BA0 {
    char pad0[0x280];
    int unk280, unk284;
    char pad288[0x144];
    short unk3CC;
    char pad3CE[0xa];
    int arr3D8[4];
    C_001D5AD0 *arr3E8[4], *arr3F8[2], *arr400[4], *arr410[4];
    void func_000F1BA0();
};

extern S_002B91AC_000F1B60 *D_002B91AC;

struct LookupObj_000F1980 {
    int *func_0018C160(int a);
};

struct GObjRoot_000F1980 {
    char pad0[0x2ec];
    LookupObj_000F1980 *p2EC;
};

extern GObjRoot_000F1980 *D_002A8490;

extern float D_00275AEC;
extern int D_00278690;
extern int D_002786A0;
extern int D_00278678;

struct ClampObj_000F1980 {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_000F1980 {
    ClampObj_000F1980 *func_0018C070();
};

struct SubElem_000F1980 {
    ClampObj_000F1980 *func_001D5AA0();
};

/* BmxUIPageOtherVideos */
struct C_000F1980 {
    char pad0[0x3e8];
    SubElem_000F1980 *a3e8[4];
    SubElem_000F1980 *a3f8[2];
    SubElem_000F1980 *a400[4];
    SubElem_000F1980 *a410[4];
    void func_000F1980(void);
    void func_001578D0(void);
};

struct C_000F1B60 {
    void func_000F1B60(void);
};

struct BmxUIPageHPHChoice_000F1D00 {
    void *vtbl;
    char pad4[0x280 - 4];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    int unk294;
    int unk298;
    int unk29C;
    int unk2A0;
    int unk2A4;
    int unk2A8;
    int unk2AC;
    int unk2B0;
    int unk2B4;
    int unk2B8;
    int unk2BC;
    int unk2C0;
    void func_001BE360(int a0);
    BmxUIPageHPHChoice_000F1D00 *func_000F1D00(int a0);
};

void C_000F1980::func_000F1980(void)
{
    int ids[3];
    int i;
    int *r;
    ClampObj_000F1980 *o;
    SubElem_000F1980 **e;
    LookupObj_000F1980 *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((MidObj_000F1980 *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = a3f8;
    i = 2;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    e = a3e8;
    i = 4;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    e = a410;
    i = 4;
    do {
        if (e[-4] != 0) {
            o = e[-4]->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
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

void C_000F1B60::func_000F1B60(void) {
    int i;

    for (i = 14; i < 16; i++)
        ((C_001D6600 **)D_002B91AC)[i]->func_001D6600();
    D_002B91AC->f34->func_001D6600();
}

void C_000F1BA0::func_000F1BA0() {
    C_001D5AD0 *p;
    S_002B91AC_000F1B60 *s;
    C_001D5AD0 **ptr;
    int count;
    p = unk280 ? D_002B91AC->unk68 : D_002B91AC->unk50;
    p->func_001D5AD0();
    p = unk284 ? D_002B91AC->unk6C : D_002B91AC->unk54;
    p->func_001D5AD0();
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
    ptr = arr3F8; count = 2;
    do {
        p = *ptr;
        unsigned int color = (p->f38 & 0xffffff) | (unk3CC << 24);
        unsigned char flags = p->f58 | 2;
        p->f38 = color; p->f58 = flags;
        (*ptr)->func_001D5AD0();
        ptr++; count--;
    } while (count != 0);
    ptr = arr3E8; count = 4;
    do {
        p = *ptr;
        unsigned int color = (p->f38 & 0xffffff) | (unk3CC << 24);
        unsigned char flags = p->f58 | 2;
        p->f38 = color; p->f58 = flags;
        (*ptr)->func_001D5AD0();
        ptr++; count--;
    } while (count != 0);
    ptr = arr400; count = 4;
    do {
        p = *ptr;
        p->f38 = (p->f38 & 0xffffff) | (unk3CC << 24);
        p->f58 |= 2;
        p = ptr[4];
        p->f38 = (p->f38 & 0xffffff) | (unk3CC << 24);
        p->f58 |= 2;
        p = ((int *)ptr)[-10] ? *ptr : ptr[4];
        p->func_001D5AD0();
        ptr++; count--;
    } while (count != 0);
}

BmxUIPageHPHChoice_000F1D00 *BmxUIPageHPHChoice_000F1D00::func_000F1D00(int a0) {
    int i;
    int *p;
    func_001BE360(1);
    vtbl = &D_0028248C;
    p = &unk2B4;
    for (i = 0; i < 4; i++)
        p[i] = 0;
    unk284 = 0;
    unk288 = 0;
    unk28C = 0;
    unk298 = 0;
    unk29C = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2A8 = 0;
    unk2AC = 0;
    unk2B0 = 0;
    unk290 = 0;
    unk294 = 0;
    unk280 = 1;
    return this;
}

