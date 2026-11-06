/* 8 functions from 0x000F029C to 0x000F0DC0, found by Ghidra. */
#include "common.h"

extern int D_002823DC;
extern int D_0028F5DC;

struct C_001D5AD0 {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1c];
    unsigned char f58;
    void func_001D5AD0();
};

struct C_001D6600 {
    void func_001D6600();
};

struct S_002B91AC {
    char pad0[0x24];
    C_001D5AD0 *unk24, *unk28, *unk2C, *unk30;
    C_001D6600 *unk34;
    C_001D6600 *arr38[2];
    char pad40[0x10];
    C_001D5AD0 *unk50, *unk54;
    char pad58[0x10];
    C_001D5AD0 *unk68, *unk6C;
};
extern S_002B91AC *D_002B91AC;
extern float D_002823D4;
extern float D_00275994;

struct C_NumHorse_Lookup { int *func_0018C160(int a); };
struct C_NumHorse_Root { char pad0[0x2EC]; C_NumHorse_Lookup *p2EC; };
struct C_NumHorse_Clamp { char pad0[0x10]; float f10, f14; };
struct C_NumHorse_Mid { C_NumHorse_Clamp *func_0018C070(); };
struct C_NumHorse_Sub { C_NumHorse_Clamp *func_001D5AA0(); };
extern C_NumHorse_Root *D_002A8490;
extern float D_00275AEC;
extern int D_002786A0, D_00278690, D_00278678;

/* page with two rows of nine clampable widgets (real function starts at 0xF02C0) */
struct C_000F029C {
    char pad0[0x698];
    C_NumHorse_Sub *arr698[9];
    C_NumHorse_Sub *arr6BC[9];
    void func_000F029C();
    void func_001578D0();
};

struct C_000F0AE0_Svc {
    int func_000301D0();
};

struct C_000F0AE0_Owner {
    char pad0[0x74];
    C_000F0AE0_Svc *f74;
};

struct C_000F0AE0_Mgr {
    char pad0[0x25c];
    C_000F0AE0_Owner *f25c;
};

struct C_000F0AE0 {
    char pad0[0x124];
    C_000F0AE0_Mgr *f124;
    char pad128[0x280 - 0x128];
    int f280, f284;
    char pad288[0x404 - 0x288];
    short f404;
    char pad406[0x614 - 0x406];
    float f614[9];
    char pad638[0x680 - 0x638];
    C_001D5AD0 *arr680[4];
    C_001D5AD0 *arr690[2];
    C_001D5AD0 *arr698[9];
    C_001D5AD0 *arr6BC[9];
    int arr6E0[9];
    void func_000F0AE0();
};

extern float D_00275600;

struct C_000F0400_Widget {
    void func_001B1980();
    void func_001B19A0(int v);
    void func_001B19C0(int x, int y, float z);
    void func_001B1A30(float x, float y, float z);
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_000F0400 {
    char pad0[0x124];
    C_000F0AE0_Mgr *f124;
    char pad128[0x3C4 - 0x128];
    int f3C4;
    int f3C8;
    int f3CC;
    char pad3D0[4];
    int f3D4;
    char pad3D8[0x638 - 0x3D8];
    C_000F0400_Widget *f638[9];
    int f65C[9];
    void func_000F0400();
};

struct C_000F0A00_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B19A0(int v);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_000F0A00 {
    char pad0[0x3C4];
    int f3C4;
    char pad3C8[0x270];
    C_000F0A00_Widget *f638[9];
    int f65C[9];
    void func_000F0A00();
};

struct DelObjC_000F0 {
    virtual void Destroy(int a0);
};

/* BmxUIPageOtherVideos */
struct C_000F0D20 {
    void *vtbl;
    char pad4[0x280 - 4];
    int f280, f284, f288, f28C, f290, f294, f298, f29C, f2A0, f2A4, f2A8, f2AC;
    char pad2B0[8];
    char f2B8;
    char pad2B9[0x3BC - 0x2B9];
    int f3BC, f3C0, f3C4, f3C8, f3CC, f3D0, f3D4;
    int arr3D8[4];
    void func_001BE360(int a);
    C_000F0D20 *func_000F0C40(int a);
    DelObjC_000F0 *arr3E8[4];
    DelObjC_000F0 *arr3F8[2];
    DelObjC_000F0 *arr400[4];
    DelObjC_000F0 *arr410[4];
    void func_001BE3F0(void);
    void func_000F0D20(void);
};

extern int D_0028F5DC;
extern float D_00279B50;
extern float D_0027F718;

struct C_000F0910_Widget {
    void func_001B1980();
    void func_001B19A0(int v);
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_000F0910 {
    char pad0[0x3C4];
    int f3C4;
    char pad3C8[0x638 - 0x3C8];
    C_000F0910_Widget *f638[9];
    int f65C[9];
    void func_000F0910();
};

/* BmxUIPagePlayerVideos: widget with a cached float value tagged with 0x43160000 */
struct C_000F05C0_Widget {
    char pad0[4];
    int f4;
    float f8;
    char padC[0x58 - 0xC];
    unsigned char f58;
    void SetValue(float v)
    {
        if (f4 != 0x43160000 || v != f8) {
            f8 = v;
            f4 = 0x43160000;
            f58 |= 1;
        }
    }
};

struct C_000F05C0 {
    char pad0[0x3D0];
    int f3D0;
    char pad3D4[0x420 - 0x3D4];
    int f420;
    char pad424[0xC];
    int f430;
    char pad434[0xC];
    int f440;
    char pad444[0xC];
    int f450;
    char pad454[0xC];
    int f460;
    char pad464[0xC];
    int f470;
    char pad474[0xC];
    int f480;
    char pad484[0xC];
    int f490;
    char pad494[0xC];
    int f4A0;
    char pad4A4[0x698 - 0x4A4];
    C_000F05C0_Widget *arr698[9];
    C_000F05C0_Widget *arr6BC[9];
    int func_000F05C0();
};

void C_000F029C::func_000F029C()
{
    int ids[3];
    int i;
    int *r;
    C_NumHorse_Clamp *o;
    C_NumHorse_Lookup *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((C_NumHorse_Mid *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    for (i = 0; i < 9; i++) {
        if (arr698[i] != 0) {
            o = arr698[i]->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        if (arr6BC[i] != 0) {
            o = arr6BC[i]->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    func_001578D0();
}

void C_000F0400::func_000F0400()
{
    int i;
    C_000F0AE0_Owner *b;

    b = f124->f25c;
    if (b->f74->func_000301D0() == 0) {
        for (i = 0; i < 2; i++) {
            D_002B91AC->arr38[i]->func_001D6600();
        }
    }
    D_002B91AC->unk34->func_001D6600();
    if (f3CC) {
        for (i = 0; i < 9; i++) {
            f638[i]->func_001B1980();
            f638[i]->func_001B19A0(D_0028F5DC);
            if (f3D4) {
                if (i == f3C4)
                    f638[i]->func_001B1A30(200.0f, f65C[i] - D_00275600, 0.5f);
                else
                    f638[i]->func_001B19C0(200, f65C[i], 0.5f);
            } else {
                if (i == f3C4)
                    f638[i]->func_001B1A30(200.0f, f65C[i] - D_00275600, 0.0f);
                else
                    f638[i]->func_001B19C0(200, f65C[i], 0.0f);
            }
            if (i == f3C4) {
                f638[i]->func_001B2270(0xffbfa35a);
                f638[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
            } else if (i == f3C8) {
                f638[i]->func_001B2270(0xffcccccc);
                f638[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
            } else {
                f638[i]->func_001B2270(0xffcccccc);
                f638[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
            }
            if ((float)f65C[i] > D_00279B50 || (float)f65C[i] < D_0027F718) {
                f638[i]->func_001B1980();
            }
        }
        f3CC = 0;
    }
}

int C_000F05C0::func_000F05C0()
{
    if (f3D0 != 0) {
        arr698[0]->SetValue((float)f420);
        arr6BC[0]->SetValue((float)f420);
        arr698[1]->SetValue((float)f430);
        arr6BC[1]->SetValue((float)f430);
        arr698[2]->SetValue((float)f440);
        arr6BC[2]->SetValue((float)f440);
        arr698[3]->SetValue((float)f450);
        arr6BC[3]->SetValue((float)f450);
        arr698[4]->SetValue((float)f460);
        arr6BC[4]->SetValue((float)f460);
        arr698[5]->SetValue((float)f470);
        arr6BC[5]->SetValue((float)f470);
        arr698[6]->SetValue((float)f480);
        arr6BC[6]->SetValue((float)f480);
        arr698[7]->SetValue((float)f490);
        arr6BC[7]->SetValue((float)f490);
        arr698[8]->SetValue((float)f4A0);
        arr6BC[8]->SetValue((float)f4A0);
    }
    return 0;
}

void C_000F0910::func_000F0910()
{
    int i;

    for (i = 0; i < 9; i++) {
        f638[i]->func_001B1980();
        if (i == f3C4) {
            f638[i]->func_001B19A0(D_0028F5DC);
            f638[i]->func_001B2270(0xffbfa35a);
            f638[i]->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 0xff, 1.45f, 0, 0.25f, 0.2f, 0);
        } else {
            f638[i]->func_001B19A0(D_0028F5DC);
            f638[i]->func_001B2270(0xffcccccc);
            f638[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0.2f, 0);
        }
        if ((float)f65C[i] > D_00279B50 || (float)f65C[i] < D_0027F718) {
            f638[i]->func_001B1980();
        }
    }
}

void C_000F0AE0::func_000F0AE0() {
    C_000F0AE0_Owner *b;
    C_001D5AD0 *p;
    S_002B91AC *s;
    C_001D5AD0 **ptr;
    float *fp;
    int count;
    b = f124->f25c;
    if (b->f74->func_000301D0() == 0) {
        p = f280 ? D_002B91AC->unk68 : D_002B91AC->unk50;
        p->func_001D5AD0();
        p = f284 ? D_002B91AC->unk6C : D_002B91AC->unk54;
        p->func_001D5AD0();
    }
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
    ptr = arr680; count = 4;
    do {
        p = *ptr;
        p->f38 = (f404 << 24) | (p->f38 & 0xffffff);
        p->f58 |= 2;
        (*ptr)->func_001D5AD0();
        ptr++; count--;
    } while (count != 0);
    ptr = arr690; count = 2;
    do {
        p = *ptr;
        p->f38 = (f404 << 24) | (p->f38 & 0xffffff);
        p->f58 |= 2;
        (*ptr)->func_001D5AD0();
        ptr++; count--;
    } while (count != 0);
    fp = f614; count = 9;
    do {
        if (*fp < D_002823D4 && *fp > D_00275994) {
            p = ((int *)fp)[0x33] ? ((C_001D5AD0 **)fp)[0x21] : ((C_001D5AD0 **)fp)[0x2a];
            p->func_001D5AD0();
        }
        fp++; count--;
    } while (count != 0);
}

C_000F0D20 *C_000F0D20::func_000F0C40(int a)
{
    int i;
    func_001BE360(a);
    vtbl = &D_002823DC;
    f2B8 = 0;
    f284 = 0; f294 = 0; f288 = 0; f280 = 0;
    f28C = 0; f290 = 0; f298 = 0; f29C = 0;
    f2A0 = 0; f2A4 = 0; f2AC = 0; f2A8 = 0;
    f3BC = 1;
    for (i = 0; i < 2; i++) arr3F8[i] = 0;
    for (i = 0; i < 4; i++) arr3E8[i] = 0;
    for (i = 0; i < 4; i++) {
        arr400[i] = 0;
        arr410[i] = 0;
        arr3D8[i] = 0;
    }
    f3C4 = 0; f3C8 = 0; f3CC = 0; f3D0 = 0; f3D4 = 0;
    f3C0 = 1;
    return this;
}

void C_000F0D20::func_000F0D20(void)
{
    int i;
    vtbl = &D_002823DC;
    for (i = 0; i < 2; i++) {
        if (arr3F8[i] != 0) {
            arr3F8[i]->Destroy(1);
            arr3F8[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (arr3E8[i] != 0) {
            arr3E8[i]->Destroy(1);
            arr3E8[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (arr400[i] != 0) {
            arr400[i]->Destroy(1);
            arr400[i] = 0;
        }
        if (arr410[i] != 0) {
            arr410[i]->Destroy(1);
            arr410[i] = 0;
        }
    }
    func_001BE3F0();
}
