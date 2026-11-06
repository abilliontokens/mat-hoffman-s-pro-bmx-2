/* 5 functions from 0x000CFF30 to 0x000D0E00, found by Ghidra. */
#include "common.h"

extern int D_0028F5E0;
extern char D_00277038[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" int func_001AC330(char *dst, int fmt, char *a, char *b);

struct S_000CFF30_Rec {
    char pad0[0xC];
    int fC[8][3][15];
    int f5AC[8];
};

struct S_000CFF30_List {
    S_000CFF30_Rec *func_0005C020(int idx);
};

struct S_000CFF30_2E0 {
    char pad0[0x2C0];
    S_000CFF30_List *f2c0;
    char pad2C4[0x328 - 0x2C4];
    int f328;
};

struct S_000CFF30_Strings {
    char pad0[0xE78];
    int fe78;
};

struct S_000CFF30_2E8 {
    int pad0;
    S_000CFF30_Strings *f4;
};

struct S_000CFF30_Root {
    char pad0[0x2E0];
    S_000CFF30_2E0 *f2e0;
    int pad2E4;
    S_000CFF30_2E8 *f2e8;
};

extern S_000CFF30_Root *D_002A8490;

struct C_000CFF30_Text {
    void func_001B1980();
    void func_001B17D0(char *s);
};

struct C_000CFF30 {
    char pad0[0x48C];
    int unk48c;
    char pad490[0x568 - 0x490];
    C_000CFF30_Text *unk568;
    void func_000CFF30();
};

struct C_000D0D_Obj {
    void func_00093120();
    void func_00094620(int a1, int a2, int a3, int a4, int a5, int a6);
};

struct C_000D0D_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_000D0DD0 {
    char pad0[0x4BC];
    int unk4BC;
    char pad4C0[0x38];
    C_000D0D_Obj *unk4F8;
    char pad4FC[0x40];
    int unk53C;
    int unk540;
    int unk544;
    int unk548;
    int unk54C;
    char pad550[0x3C];
    int unk58C;
    char pad590[4];
    C_000D0D_Widget *unk594;
    int unk598;
    void func_000D0DD0(void);
    void func_000D0D20(void);
    void func_000D0D60(void);
    void func_000D0110(void);
};


void C_000CFF30::func_000CFF30()
{
    char a[8];
    char b[8];
    char path[0x40];
    int count = 0;
    int idx = -1;
    int i, j, k;
    int sum;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 15; k++) {
                switch (unk48c) {
                case 1: idx = 0; break;
                case 3: idx = 1; break;
                case 5: idx = 2; break;
                case 6: idx = 3; break;
                case 8: idx = 4; break;
                case 10: idx = 5; break;
                case 11: idx = 6; break;
                case 12: idx = 7; break;
                case 14: idx = 8; break;
                case 15: idx = 9; break;
                }
                if (idx != -1 && D_002A8490->f2e0->f2c0->func_0005C020(idx)->fC[i][j][k] == 1)
                    count++;
            }
        }
    }
    sum = 0;
    if (idx != -1) {
        for (i = 0; i < 8; i++)
            sum += D_002A8490->f2e0->f2c0->func_0005C020(idx)->f5AC[i];
    }
    func_001ADCC0(a, 5, D_00277038, count - sum);
    func_001ADCC0(b, 5, D_00277038, D_002A8490->f2e0->f328);
    func_001AC330(path, D_002A8490->f2e8->f4->fe78, a, b);
    unk568->func_001B1980();
    unk568->func_001B17D0(path);
}

void C_000D0DD0::func_000D0D20(void)
{
    unk4F8->func_00093120();
    unk4F8->func_00094620(0x43a00000, 0x42c80000, D_0028F5E0, 0, 0, 0);
}

void C_000D0DD0::func_000D0D60(void)
{
    unk4BC = 1;
    unk594->func_001B1980();
    unk594->func_001B2270(0xffcccccc);
    unk594->func_001B1860(0, -1.0f, 0, 1.0f, 0, 0, 0, 0xff, 1.0f, 0, 0.0f, 0.2f, 0);
    unk598 = 1;
}

void C_000D0DD0::func_000D0DD0(void) {
    unk53C = 0;
    unk540 = 178;
    unk544 = 178;
    unk548 = 0;
    unk54C = 1065353216;
    unk58C = 0;
}
