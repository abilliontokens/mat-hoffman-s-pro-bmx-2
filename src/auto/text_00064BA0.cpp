/* 1 function from 0x00064BA0 to 0x00066C90, found by Ghidra. */
#include "common.h"
/* the object at BmxObjectivesMenu::f1D0 (a C_52C10) */
struct S_00064BA0_A {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};
struct S_00064BA0_B {
    void func_001C4D50(int ms);
};
struct S_ObjectiveInputState { int func_000301D0(); };
struct S_ObjectiveInput {
    char pad[0x74];
    S_ObjectiveInputState *f74;
};
struct S_ObjectiveEntry {
    char pad[0x1A8];
    int f1A8;
    int func_00096740();
};
struct S_ObjectiveList {
    int func_000976A0();
    int func_00097C60();
    S_ObjectiveEntry **func_00097C20();
};
struct S_ObjectiveRecord { int value; char pad[0x5E8]; int flags[1]; };
struct S_ObjectiveRecords { S_ObjectiveRecord *func_0005C020(int); };
struct S_ObjectiveGame {
    char pad[0x48]; int f48;
    char pad4C[0x2C0 - 0x4C];
    S_ObjectiveRecords *f2C0;
    char pad2C4[0x2D8 - 0x2C4];
    int f2D8;
};
struct S_ObjectiveGlobal { char pad[0x2E0]; S_ObjectiveGame *f2E0; };
extern S_ObjectiveGlobal *D_002A8490;
struct S_ObjectiveStorage {
    int func_00092A10();
    int func_00092A50(int*);
    int func_00092B40(int);
    int func_00092BE0();
    int func_00092AC0();
};
struct S_00064BA0_Inner {
    char pad00[0x44];
    struct S_ObjectiveInput *f44;
    char pad48[0x64 - 0x48];
    S_00064BA0_A *f64;              /* 0x64: object whose vtable slot 4 is called */
    char pad68[0x158 - 0x68];
    S_00064BA0_B *f158;             /* 0x158 */
    char pad15C[0x1C0 - 0x15C];
    struct S_ObjectiveList *f1C0;
    void func_00052C10(int a);
};

struct BmxObjectivesMenu {
    char pad00[0x64];
    int f64;                        /* 0x64 */
    char pad68[0x1D0 - 0x68];
    S_00064BA0_Inner *f1D0;         /* 0x1D0 */
    char pad1D4[0x1D8 - 0x1D4];
    float f1D8;                     /* 0x1D8 */
    char pad1DC[0x214 - 0x1DC];
    int f214, f218, f21C;
    int f220;
    int f224;                       /* 0x224 */
    int f228;                       /* 0x228 */
    int f22C;
    char pad230[0x250 - 0x230];
    struct S_ObjectiveStorage *f250;
    int f254, f258, f25C, f260, f264, f268, f26C, f270;
    char pad274[0x280 - 0x274];
    int f280;                       /* 0x280 */
    int f284;
    int f288;                       /* 0x288 */
    char pad28C[0x2B4 - 0x28C];
    int f2B4;                       /* 0x2B4 */
    void func_000619F0(void*);
    void func_00061B20();
    void func_0005EA10(float dt);
    void func_00064BA0(float dt);
};

extern float D_002756DC;
extern float D_00275544;
extern float D_002755E8;

void BmxObjectivesMenu::func_00064BA0(float dt)
{
    if (f64 == 4 && f280 != 0) {
        f288 = 1;
        if (f228 >= 0 && f228 < f224 && f1D8 > D_002756DC) {
            f1D0->func_00052C10(0);
            f228++;
            f1D8 = 0.0f;
        }
        if (f228 >= f224) {
            f1D0->f64->v4();
            f228 = 0;
            f280 = 0;
            f2B4 = 1;
            f1D0->f158->func_001C4D50(1000);
            f1D8 = 0.0f;
            f288 = 0;
        } else {
            f1D8 += dt;
        }
        func_0005EA10(dt);
        return;
    }


    if (f214 && !f1D0->f44->f74->func_000301D0()) {
        if (f1D0->f1C0->func_000976A0() == 3) {
            f214 = 0;
            f218 = 1;
            S_ObjectiveRecord *record = D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8);
            record->flags[D_002A8490->f2E0->f48] = 1;
        } else {
            int count = f1D0->f1C0->func_00097C60();
            S_ObjectiveEntry **entries = f1D0->f1C0->func_00097C20();
            do {
                ++f21C;
                if (f21C >= count) f21C = 0;
            } while (entries[f21C]->func_00096740() == 1 || entries[f21C]->f1A8);
            f214 = 1;
            func_000619F0((char*)entries[f21C] + 0xB4);
            f1D0->f158->func_001C4D50(1000);
        }
    } else if (f218 && !f1D0->f44->f74->func_000301D0()) {
        func_00061B20();
    }
    if (f1D8 == D_00275544 && (f64 == 2 || f64 == 6 || f64 == 4) && !f22C) {
        f258 = 0;
        f25C = 0;
        f260 = 0;
        f254 = f250->func_00092A10();
        if (f254 && (f64 == 2 || f64 == 6 || f64 == 4)) {
            f258 = f250->func_00092A50(&f268);
            if (f258) {
                f25C = f250->func_00092B40(-1);
                f260 = f250->func_00092BE0();
            } else if (f270 != 8 && f270 != 5 && f270 != 1) {
                f270 = 8;
            }
        } else if (f270 != 6 && f270 != 7 && f270 != 12 && f270 != 11) {
            f270 = 0;
        }
    }

    switch (f64) {
    case 2: case 6:
        switch (f270) {
        case 0:
            if (f254) {
                if (f64 == 2) {
                    f26C = 0;
                    for (int i = 0; i < 10; ++i) {
                        if (!D_002A8490->f2E0->f2C0->func_0005C020(i)->value && !f250->func_00092B40(i))
                            ++f26C;
                    }
                } else {
                    f26C = 0x10C;
                    for (int i = 0; i < 10; ++i) {
                        if (!D_002A8490->f2E0->f2C0->func_0005C020(i)->value && !f250->func_00092B40(i))
                            ++f26C;
                    }
                    if (!f250->func_00092AC0()) f26C += 4;
                }
                if (f25C && f64 == 2) {
                    f270 = 2;
                } else if (f260 && f64 == 6) {
                    f270 = 2; f228 = 0;
                } else if (f25C && !f260 && f64 == 6 && f258) {
                    if (f268 < 0x10C) { f26C = 0x10C; f270 = 4; }
                    else f270 = 9;
                } else if (f268 < f26C && f258) f270 = 4;
                else f270 = (f64 != 2) + 8;
            }
            break;
        case 1:
            if (!f254) f270 = 0;
            break;
        case 2:
            if (f1D8 > D_002755E8 && f268 < f26C) f270 = 4;
            break;
        }
        break;
    }
}
