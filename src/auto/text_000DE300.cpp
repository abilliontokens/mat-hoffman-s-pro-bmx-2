/* 5 functions from 0x000DE300 to 0x000DE730, found by Ghidra. */
#include "common.h"

struct C_000DE_Widget {
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_000DE_Elem {
    char pad0[0x38];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
    void func_001D5AD0();
};

struct S_002B91AC {
    char pad0[0x24];
    C_000DE_Elem *unk24;
    C_000DE_Elem *unk28;
    C_000DE_Elem *unk2C;
    C_000DE_Elem *unk30;
    char pad34[0x50 - 0x34];
    C_000DE_Elem *unk50;
    C_000DE_Elem *unk54;
    char pad58[0x60 - 0x58];
    C_000DE_Elem *unk60;
    C_000DE_Elem *unk64;
    C_000DE_Elem *unk68;
    C_000DE_Elem *unk6C;
};

extern S_002B91AC *D_002B91AC;

/* BmxUIPageHorseWord */
struct C_000DE300 {
    char pad0[0x288];
    int unk288;
    char pad28C[0x2DC - 0x28C];
    int unk2DC;
    int unk2E0;
    char pad2E4[0x2EC - 0x2E4];
    C_000DE_Elem *unk2EC;
    char pad2F0[0x314 - 0x2F0];
    short unk314;
    char pad316[0x328 - 0x316];
    C_000DE_Widget *unk328;
    C_000DE_Widget *unk32C;
    char pad330[0x340 - 0x330];
    C_000DE_Elem *arr340[2];
    void func_001BF000();
    void func_000DE300();
    void func_000DE390();
    void func_000DE3C0();
    /* inlined away: picks the highlighted or the plain sprite */
    void DrawPair()
    {
        (unk2DC ? D_002B91AC->unk68 : D_002B91AC->unk50)->func_001D5AD0();
        (unk2E0 ? D_002B91AC->unk6C : D_002B91AC->unk54)->func_001D5AD0();
    }
};

/* anything the page owns and frees through its virtual destructor */
struct S_000DE650_Obj {
    virtual ~S_000DE650_Obj();
};

extern int D_0027F8E4;

/* BmxUIPageMusicPlaylist: six rows of 18 owned objects, then two more groups */
struct C_000DE650 {
    void *vtbl;
    char pad4[0x27c];
    int u280[0x1d];
    int a2f4[18];
    int a33c[18];
    int a384[18];
    int a3cc[18];
    int a414[18];
    int a45c[18];
    char pad4a4[0x804 - 0x4a4];
    int a804[18];
    int a84c[18];
    int a894[18];
    int a8dc[18];
    S_000DE650_Obj *row0[18];
    S_000DE650_Obj *row1[18];
    S_000DE650_Obj *row2[18];
    S_000DE650_Obj *row3[18];
    S_000DE650_Obj *row4[18];
    S_000DE650_Obj *row5[18];
    S_000DE650_Obj *group4[4];
    S_000DE650_Obj *group2[2];
    void func_001BE3F0();
    void func_000DE650();
    C_000DE650 *func_000DE4D0(int a);
    void func_001BE360(int a);
};

void C_000DE300::func_000DE300()
{
    unk32C->func_001B1980();
    unk328->func_001B1980();
    unk32C->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
    unk328->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
}

void C_000DE300::func_000DE390()
{
    C_000DE_Elem *e = unk2EC;
    e->f38 = ((int)unk314 << 24) | (e->f38 & 0xffffff);
    e->b58 |= 2;
    func_001BF000();
}

void C_000DE300::func_000DE3C0()
{
    S_002B91AC *s;
    C_000DE_Elem **ptr;
    C_000DE_Elem *e;
    int count;

    if (unk2DC) {
        D_002B91AC->unk68->func_001D5AD0();
    } else {
        D_002B91AC->unk50->func_001D5AD0();
    }
    if (unk2E0) {
        D_002B91AC->unk6C->func_001D5AD0();
    } else {
        D_002B91AC->unk54->func_001D5AD0();
    }
    D_002B91AC->unk60->func_001D5AD0();
    D_002B91AC->unk64->func_001D5AD0();
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
    ptr = arr340;
    count = 2;
    do {
        e = *ptr;
        e->f38 = ((int)unk314 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        e = *ptr;
        e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
        e->b58 |= 2;
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    if (unk288) {
        unk2EC->func_001D5AD0();
    }
}

C_000DE650 *C_000DE650::func_000DE4D0(int a)
{
    int i;
    func_001BE360(a);
    vtbl = (void *)&D_0027F8E4;
    u280[1] = 0;
    u280[0] = 1;
    for (i = 0; i < 18; i++) {
        a894[i] = 0;
        a8dc[i] = 0;
        a33c[i] = 1;
        a2f4[i] = 0;
        a384[i] = 0;
        a3cc[i] = 0;
        a414[i] = 0;
        a45c[i] = 0;
    }
    u280[2] = 0;
    u280[3] = 0;
    u280[5] = 0;
    u280[6] = 0;
    u280[15] = 0;
    u280[4] = 0;
    u280[7] = 0;
    u280[8] = 0;
    u280[9] = 0;
    u280[10] = 1;
    u280[11] = 0;
    for (i = 0; i < 18; i++) {
        a804[i] = 0;
        a84c[i] = 0;
    }
    u280[12] = 5;
    u280[13] = 0;
    u280[14] = 0;
    u280[16] = 0;
    u280[17] = 0;
    u280[18] = 0;
    u280[19] = 0;
    u280[20] = 0;
    u280[21] = 0;
    u280[22] = 0;
    u280[23] = 0;
    u280[24] = 0;
    u280[25] = 0;
    u280[26] = -1;
    u280[28] = 0;
    u280[27] = 0;
    for (i = 0; i < 18; i++) {
        row0[i] = 0;
        row1[i] = 0;
        row2[i] = 0;
        row3[i] = 0;
        row4[i] = 0;
        row5[i] = 0;
    }
    for (i = 0; i < 4; i++)
        group4[i] = 0;
    for (i = 0; i < 2; i++)
        group2[i] = 0;
    return this;
}

void C_000DE650::func_000DE650()
{
    int i;

    vtbl = (void *)&D_0027F8E4;
    for (i = 0; i < 18; i++) {
        if (row0[i]) {
            delete row0[i];
            row0[i] = 0;
        }
        if (row1[i]) {
            delete row1[i];
            row1[i] = 0;
        }
        if (row2[i]) {
            delete row2[i];
            row2[i] = 0;
        }
        if (row3[i]) {
            delete row3[i];
            row3[i] = 0;
        }
        if (row4[i]) {
            delete row4[i];
            row4[i] = 0;
        }
        if (row5[i]) {
            delete row5[i];
            row5[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (group4[i]) {
            delete group4[i];
            group4[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (group2[i]) {
            delete group2[i];
            group2[i] = 0;
        }
    }
    func_001BE3F0();
}

