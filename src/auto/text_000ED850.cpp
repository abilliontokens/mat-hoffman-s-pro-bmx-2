/* 11 functions from 0x000ED850 to 0x000EE450, found by Ghidra. */
#include "common.h"

extern int D_00281D24;

/* the three fixed labels live in the globals block at +0xF98 of D_002A8490->f2e8->f4 */
struct S_000EDB70_Labels {
    char pad0[0xF98];
    char *fF98;
    char padF9C[4];
    char *fFA0;
    char padFA4[4];
    char *fFA8;
};

struct S_000EDB70_Globals {
    char pad0[4];
    S_000EDB70_Labels *f4;
};

/* one entry per extra slot: an enable flag, a 0x32-byte name and a value */
struct S_000EDB70_Slots {
    u8 flags[0x10];
    char names[8][0x32];
    u8 values[8];
};

struct S_000EDB70_Game {
    char pad0[0x2C8];
    S_000EDB70_Slots *f2C8;
};

struct S_000EDB70_Mgr {
    char pad0[0x2E0];
    S_000EDB70_Game *f2E0;
    char pad2E4[4];
    S_000EDB70_Globals *f2E8;
};

extern S_000EDB70_Mgr *D_002A8490;

struct C_00136170 {
    int func_00136170(int a0, int a1, int a2);
};

struct S_000ED850_Mgr {
    char pad0[8];
    C_00136170 *f8;
};

struct C_000B9A80 {
    void func_000B9A80(int a0, int a1);
};

struct S_000ED850_Sub {
    char pad0[0x24];
    C_000B9A80 *unk24;
};

struct C_000ED850 {
    char pad0[0x124];
    S_000ED850_Sub *unk124;
    char pad128[0x280 - 0x128];
    int unk280;
    char pad284[0x28C - 0x284];
    unsigned unk28C;
    char pad290[0x29C - 0x290];
    int unk29C;
    unsigned unk2A0;
    unsigned unk2A4;
    int unk2A8;
    char pad2AC[0x3C8 - 0x2AC];
    int unk3C8;
    int unk3CC;
    unsigned unk3D0;
    int unk3D4;
    char pad3D8[0x444 - 0x3D8];
    int unk444;
    int unk448;
    int unk44C;
    int unk450;
    int unk454;
    int unk458;
    unsigned unk45C;
    float arr460[11];
    int func_000ED850(int a0, int a1);
};
extern float D_00279F6C;

struct C_001B1980 {
    void func_001B1980(void);
    void func_001B17D0(char *name);
    void func_001B2270(int a0);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
    void func_001B1A30(float a0, float a1, float a2);
};
extern float D_00279B50;
extern float D_0027E144;

struct C_00093120 {
    void func_00093120(void);
};

struct C_000EE060 {
    char pad0[0x280];
    int unk280;
    char pad284[0x29C - 0x284];
    int unk29C;
    char pad2A0[0x3B8 - 0x2A0];
    C_00093120 *unk3B8;
    char pad3BC[0x3C0 - 0x3BC];
    int unk3C0;
    char pad3C4[0x3E4 - 0x3C4];
    int arr3E4[11];
    char pad410[0x460 - 0x410];
    float arr460[11];
    C_001B1980 *arr48C[11];
    char pad4B8[0x4D0 - 0x4B8];
    int arr4D0[11];
    void func_000EDB70(void);
    void func_000EDF70(void);
    void func_000EE060(void);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_001D6600 {
    void func_001D6600(void);
};

struct S_002B91AC {
    char pad0[0x24];
    C_001D5AD0 *unk24;
    C_001D5AD0 *unk28;
    C_001D5AD0 *unk2C;
    C_001D5AD0 *unk30;
    C_001D6600 *unk34;
    C_001D6600 *arr38[2];
    char pad40[0x10];
    C_001D5AD0 *unk50;
    C_001D5AD0 *unk54;
    char pad58[0x10];
    C_001D5AD0 *unk68;
    C_001D5AD0 *unk6C;
};

extern S_002B91AC *D_002B91AC;

struct DelObjC_000ED {
    virtual void Destroy(int a0);
};

/* BmxUIPagePlayerVideos */
struct C_000EDF00 {
    void *vtbl;
    char pad4[0x280 - 4];
    int unk280;
    char pad284[0x29C - 0x284];
    int unk29C;
    int unk2A0;
    int unk2A4;
    char pad2A8[0x3B8 - 0x2A8];
    C_00093120 *unk3B8;
    char pad3BC[0x3D4 - 0x3BC];
    int unk3D4;
    char pad3D8[0x444 - 0x3D8];
    int unk444;
    char pad448[0x450 - 0x448];
    int unk450;
    char pad454[0x460 - 0x454];
    float arr460[11];
    C_001B1980 *arr48C[11];
    C_001D5AD0 *arr4B8[4];
    C_001D5AD0 *arr4C8[2];
    char pad4D0[0x680 - 0x4D0];
    DelObjC_000ED *arr680[4];
    DelObjC_000ED *arr690[2];
    DelObjC_000ED *arr698[9];
    DelObjC_000ED *arr6BC[9];
    void func_000EDC70(void);
    void func_000EDDC0(void);
    void func_001BE3F0(void);
    void func_000EDF00(void);
    void func_000EE140(void);
    void func_000EE3B0(void);
    void func_001BE360(int a0);
    C_000EDF00 *func_000EE230(int a0);
};

struct C_000EE1F0 {
    char pad0[0x42C];
    int unk42C;
    int unk430;
    int unk434;
    int unk438;
    int unk43C;
    int unk440;
    void func_000EE1F0(void);
};


int C_000ED850::func_000ED850(int a0, int a1)
{
    C_000B9A80 *p = unk124->unk24;
    int i;
    if (unk2A0 || unk2A4 || unk28C || !unk3D0 || unk45C) goto done;
    {
        if (a1 == ((S_000ED850_Mgr *)D_002A8490)->f8->func_00136170(2, 2, 0)) {
            if (unk280 == 0) {
                unk454 = 1;
                return 1;
            }
            p->func_000B9A80(2, 1);
            if (unk280 > 0) {
                unk3D4 = unk280--;
            }
            unk3CC = 1;
            unk444 = 1;
            if (unk448 == unk280) {
                unk448 = unk280 - 1;
                unk44C--;
                unk458 = 0;
                if (unk454 == 0) {
                    for (i = 0; i < unk29C; i++) {
                        unk450 = 1;
                        arr460[i] += D_00279F6C;
                    }
                    unk45C = 1;
                    if (unk280 == 0) {
                        unk454 = 1;
                        return 1;
                    }
                }
            }
            return 0;
        }
        if (a1 == ((S_000ED850_Mgr *)D_002A8490)->f8->func_00136170(3, 2, 0)) {
            if (unk29C > 7 && unk280 == unk29C - 1) {
                unk458 = 1;
                return 1;
            }
            p->func_000B9A80(2, 1);
            unk3CC = 1;
            if (unk280 < unk29C - 1) {
                unk3D4 = unk280++;
            }
            unk444 = 1;
            if (unk280 > 3 && unk280 <= unk29C + 1 && unk44C == unk280) {
                unk448++;
                unk44C = unk280 + 1;
                unk454 = 0;
                if (unk458 == 0) {
                    for (i = 0; i < unk29C; i++) {
                        unk450++;
                        arr460[i] -= D_00279F6C;
                    }
                    unk45C = 1;
                    return 1;
                }
            }
            return 0;
        }
        if (a1 == ((S_000ED850_Mgr *)D_002A8490)->f8->func_00136170(4, 2, 0) ||
            a1 == ((S_000ED850_Mgr *)D_002A8490)->f8->func_00136170(0x17, 2, 0)) {
            p->func_000B9A80(4, 1);
            unk2A0 = 1;
            unk2A8 = 0;
            return 1;
        }
        if (a1 == ((S_000ED850_Mgr *)D_002A8490)->f8->func_00136170(5, 2, 0) ||
            a1 == ((S_000ED850_Mgr *)D_002A8490)->f8->func_00136170(0x18, 2, 0)) {
            unk3C8 = 1;
            p->func_000B9A80(1, 1);
            unk2A4 = 1;
            unk2A8 = 0;
            return 1;
        }
    }
done:
    return 0;
}

void C_000EE060::func_000EDB70(void)
{
    int i;

    unk29C = 3;
    arr48C[0]->func_001B17D0(D_002A8490->f2E8->f4->fF98);
    arr48C[1]->func_001B17D0(D_002A8490->f2E8->f4->fFA0);
    arr48C[2]->func_001B17D0(D_002A8490->f2E8->f4->fFA8);
    for (i = 0; i < 8; i++) {
        if (D_002A8490->f2E0->f2C8->flags[i] == 1) {
            arr48C[unk29C]->func_001B17D0(D_002A8490->f2E0->f2C8->names[i]);
            arr3E4[unk29C] = D_002A8490->f2E0->f2C8->values[i];
            arr4D0[unk29C] = i;
            unk29C++;
        }
    }
    unk3C0 = 1;
}

void C_000EDF00::func_000EDC70(void)
{
    int i;

    unk3B8->func_00093120();
    for (i = 0; i < unk29C; i++) {
        arr48C[i]->func_001B1980();
        if (i == unk280) {
            arr48C[i]->func_001B2270(0xffbfa35a);
            arr48C[i]->func_001B1A30(320.0f, arr460[i], 0.5f);
            arr48C[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
        } else if (i == unk3D4) {
            arr48C[i]->func_001B2270(0xffcccccc);
            arr48C[i]->func_001B1A30(320.0f, arr460[i], 0.5f);
            arr48C[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
        } else {
            arr48C[i]->func_001B2270(0xffcccccc);
            arr48C[i]->func_001B1A30(320.0f, arr460[i], 0.5f);
            arr48C[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
        }
        if (arr460[i] > D_00279B50 || arr460[i] < D_0027E144) {
            arr48C[i]->func_001B1980();
        }
    }
}

void C_000EDF00::func_000EDDC0(void)
{
    int i;

    unk3B8->func_00093120();
    for (i = 0; i < unk29C; i++) {
        arr48C[i]->func_001B1980();
        if (i == unk280) {
            arr48C[i]->func_001B2270(0xffbfa35a);
            arr48C[i]->func_001B1A30(320.0f, arr460[i], 0);
            arr48C[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
        } else if (i == unk3D4) {
            arr48C[i]->func_001B2270(0xffcccccc);
            arr48C[i]->func_001B1A30(320.0f, arr460[i], 0);
            arr48C[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
        } else {
            arr48C[i]->func_001B2270(0xffcccccc);
            arr48C[i]->func_001B1A30(320.0f, arr460[i], 0);
            arr48C[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
        }
        if (arr460[i] > D_00279B50 || arr460[i] < D_0027E144) {
            arr48C[i]->func_001B1980();
        }
    }
}

void C_000EDF00::func_000EDF00(void)
{
    int i;
    for (i = 0; i < 2; i++) {
        D_002B91AC->arr38[i]->func_001D6600();
    }
    if (unk450 != 0) {
        func_000EDC70();
        unk450 = 0;
        unk444 = 0;
    } else if (unk444 != 0) {
        func_000EDDC0();
        unk444 = 0;
    }
    D_002B91AC->unk34->func_001D6600();
}

void C_000EE060::func_000EDF70(void)
{
    int i;

    unk3B8->func_00093120();
    func_000EDB70();
    for (i = 0; i < unk29C; i++) {
        arr48C[i]->func_001B1980();
        if (i == unk280) {
            arr48C[i]->func_001B2270(0xffbfa35a);
            arr48C[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0.25f, 0.2f, 0);
        } else {
            arr48C[i]->func_001B2270(0xffcccccc);
            arr48C[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, 0.25f, 0.0f, 0);
        }
        if (arr460[i] > D_00279B50 || arr460[i] < D_0027E144) {
            arr48C[i]->func_001B1980();
        }
    }
}

void C_000EE060::func_000EE060(void)
{
    int i;
    for (i = 0; i < unk29C; i++) {
        arr48C[i]->func_001B1980();
        if (i == unk280) {
            arr48C[i]->func_001B2270(0xffbfa35a);
            arr48C[i]->func_001B1860(0.0f, -1.0f, 0xff, 1.45f, 0.0f, 0.0f, 0.0f, 0.0f, 1.45f, 0.0f, 0.25f, 0.0f, 0.0f);
        } else {
            arr48C[i]->func_001B2270(0xffcccccc);
            arr48C[i]->func_001B1860(0.0f, -1.0f, 0xff, 1.15f, 0.0f, 0.0f, 0.0f, 0.0f, 1.15f, 0.0f, 0.25f, 0.0f, 0.0f);
        }
        if (arr460[i] > D_00279B50 || arr460[i] < D_0027E144) {
            arr48C[i]->func_001B1980();
        }
    }
}

void C_000EDF00::func_000EE140(void)
{
    C_001D5AD0 *p;
    S_002B91AC *s;
    C_001D5AD0 **ptr;
    int count;
    p = unk2A0 ? D_002B91AC->unk68 : D_002B91AC->unk50;
    p->func_001D5AD0();
    p = unk2A4 ? D_002B91AC->unk6C : D_002B91AC->unk54;
    p->func_001D5AD0();
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
    ptr = arr4B8;
    count = 4;
    do {
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    ptr = arr4C8;
    count = 2;
    do {
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
}

void C_000EE1F0::func_000EE1F0(void) {
    unk42C = 178;
    unk430 = 0;
    unk434 = 0;
    unk438 = 0;
    unk43C = 1048576000;
    unk440 = 1;
}

C_000EDF00 *C_000EDF00::func_000EE230(int a0)
{
    int i;
    int *p;
    func_001BE360(a0);
    vtbl = &D_00281D24;
    *((u8 *)this + 0x2bc) = 0;
    *(int *)((char *)this + 0x284) = 0;
    *(int *)((char *)this + 0x294) = 0;
    *(int *)((char *)this + 0x288) = 0;
    *(int *)((char *)this + 0x280) = 0;
    *(int *)((char *)this + 0x28c) = 0;
    *(int *)((char *)this + 0x290) = 0;
    *(int *)((char *)this + 0x298) = 0;
    *(int *)((char *)this + 0x2a0) = 0;
    *(int *)((char *)this + 0x2a4) = 0;
    *(int *)((char *)this + 0x29c) = 0;
    *(int *)((char *)this + 0x2a8) = 0;
    *(int *)((char *)this + 0x2b0) = 0;
    *(int *)((char *)this + 0x2ac) = 0;
    *(int *)((char *)this + 0x3c0) = 1;
    p = (int *)((char *)this + 0x65c);
    for (i = 9; i; i--, p++) { p[-9] = 0; p[0] = 0; }
    *(int *)((char *)this + 0x3e0) = -1;
    *(int *)((char *)this + 0x3c8) = -1;
    *(int *)((char *)this + 0x3d0) = 0;
    *(int *)((char *)this + 0x3d4) = 0;
    *(int *)((char *)this + 0x3d8) = 0;
    *(int *)((char *)this + 0x3dc) = 1;
    *(int *)((char *)this + 0x3e4) = 6;
    *(int *)((char *)this + 0x3cc) = 0;
    *(int *)((char *)this + 0x3c4) = 0;
    for (i = 0; i < 2; i++) arr690[i] = 0;
    for (i = 0; i < 4; i++) arr680[i] = 0;
    p = (int *)((char *)this + 0x6bc);
    for (i = 9; i; i--, p++) { p[-9] = 0; p[0] = 0; p[9] = 0; }
    *(int *)((char *)this + 0x3e8) = 0;
    *(int *)((char *)this + 0x3ec) = 0;
    *(int *)((char *)this + 0x3f0) = 0;
    *(int *)((char *)this + 0x3f4) = 0;
    *(int *)((char *)this + 0x3f8) = 0;
    p = (int *)((char *)this + 0x5f0);
    for (i = 9; i; i--, p++) { p[-9] = 0; p[0] = 0; }
    *(int *)((char *)this + 0x410) = 1;
    *(int *)((char *)this + 0x414) = 1;
    *(int *)((char *)this + 0x418) = 0;
    *(int *)((char *)this + 0x3fc) = 0;
    *(int *)((char *)this + 0x400) = 0;
    *(int *)((char *)this + 0x404) = 0;
    *(int *)((char *)this + 0x408) = 0;
    *(int *)((char *)this + 0x40c) = 0;
    return this;
}

void C_000EDF00::func_000EE3B0(void)
{
    int i;
    vtbl = &D_00281D24;
    for (i = 0; i < 4; i++) {
        if (arr680[i] != 0) {
            arr680[i]->Destroy(1);
            arr680[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (arr690[i] != 0) {
            arr690[i]->Destroy(1);
            arr690[i] = 0;
        }
    }
    for (i = 0; i < 9; i++) {
        if (arr698[i] != 0) {
            arr698[i]->Destroy(1);
            arr698[i] = 0;
        }
        if (arr6BC[i] != 0) {
            arr6BC[i]->Destroy(1);
            arr6BC[i] = 0;
        }
    }
    func_001BE3F0();
}

