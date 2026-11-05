/* 11 functions from 0x000ED850 to 0x000EE450, found by Ghidra. */
#include "common.h"

extern int D_00281D24;

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
    char pad4[0x2A0 - 4];
    int unk2A0;
    int unk2A4;
    char pad2A8[0x444 - 0x2A8];
    int unk444;
    char pad448[0x450 - 0x448];
    int unk450;
    char pad454[0x4B8 - 0x454];
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

