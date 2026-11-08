/* 5 functions from 0x000CFF30 to 0x000D0E00, found by Ghidra. */
#include "common.h"

#define AT(T, p, o) (*(T *)((char *)(p) + (o)))

struct S_002B91AC;
extern S_002B91AC *D_002B91AC;
void __stdcall func_000BF860(int a, int b, int c, int d);
struct C_000301D0 { int func_000301D0(void); };
struct C_0005E840 { void func_0005E840(int a); void func_001D6600(void); };
struct C_001D6600 { void func_001D6600(void); };
struct C_000BA9B0 { void *func_000BA9B0(int a); };
struct C_000BBDF0 { int func_000BBDF0(void); };

static inline void *C_000D0DD0_TipW(void *hw, int n)
{
    void *w = ((C_000BA9B0 *)hw)->func_000BA9B0(n);
    w = *(void **)((char *)w + 0x1b0);
    return *(void **)w;
}

struct S_002B91AC {
    char pad0[0x34];
    C_0005E840 *f34;
    C_0005E840 *f38;
    C_0005E840 *f3c;
    C_0005E840 *f40;
    C_0005E840 *f44;
    void func_000BF860(int a, int b, int c, int d);
};


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

void C_000D0DD0::func_000D0110(void)
{
    void *w;
    void *hw = AT(void *, this, 0x124);

    D_002B91AC->func_000BF860(1, 0x17e, 0x184, 0);
    if (((C_000301D0 *)AT(void *, AT(void *, hw, 0x25c), 0x74))->func_000301D0() == 0) {
        if (AT(int, this, 0x590) != 0) {
            D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
            D_002B91AC->f38->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x940));
            D_002B91AC->f38->func_001D6600();
        } else if (AT(int, this, 0x5b4) != 0) {
            D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
            D_002B91AC->f38->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x7b8));
            D_002B91AC->f38->func_001D6600();
            D_002B91AC->f3c->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x7c0));
            D_002B91AC->f3c->func_001D6600();
        } else if ((AT(int, this, 0x510) != 0 || AT(int, this, 0x4f0) != 0 ||
                    AT(int, this, 0x4f4) != 0 || AT(int, this, 0x4e4) != 0 ||
                    AT(int, this, 0x558) != 0 || AT(int, this, 0x538) != 0) &&
                   AT(int, this, 0x588) == 0) {
            if (AT(int, this, 0x4e4) != 0) {
                D_002B91AC->f40->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x7b8));
                D_002B91AC->f40->func_001D6600();
                D_002B91AC->f3c->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x7c0));
                D_002B91AC->f3c->func_001D6600();
            } else if (AT(int, this, 0x538) != 0) {
                D_002B91AC->func_000BF860(0, 0x140, 0x184, 0);
                D_002B91AC->f38->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x1128));
                D_002B91AC->f38->func_001D6600();
            } else {
                D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
                D_002B91AC->f38->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x7b8));
                D_002B91AC->f38->func_001D6600();
                D_002B91AC->f3c->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x7c0));
                D_002B91AC->f3c->func_001D6600();
            }
        } else if (AT(int, this, 0x57c) != 0 || AT(int, this, 0x580) != 0) {
            D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
            D_002B91AC->f38->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x940));
            D_002B91AC->f38->func_001D6600();
        } else if (AT(int, this, 0x4ec) != 0) {
            D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
            D_002B91AC->f38->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x940));
            D_002B91AC->f38->func_001D6600();
            D_002B91AC->func_000BF860(1, 0xc8, 0x184, 0);
            D_002B91AC->f3c->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x1248));
            D_002B91AC->f3c->func_001D6600();
        } else if (AT(int, this, 0x510) == 0) {
            D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
            D_002B91AC->f38->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x7c8));
            D_002B91AC->f3c->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x838));
            D_002B91AC->f40->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x950));
            D_002B91AC->f38->func_001D6600();
            D_002B91AC->f3c->func_001D6600();
            {
                if (AT(int, this, 0x48c) == 2 || AT(int, this, 0x48c) == 4 ||
                    AT(int, this, 0x48c) == 7 || AT(int, this, 0x48c) == 9 ||
                    AT(int, this, 0x48c) == 0xd || AT(int, this, 0x48c) == 0x10 ||
                    AT(int, this, 0x43c + AT(int, this, 0x48c) * 4) != 0) {
                    D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
                    D_002B91AC->f38->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x940));
                    D_002B91AC->f38->func_001D6600();
                } else {
                    D_002B91AC->f40->func_001D6600();
                }
            }
        }
        if (AT(int, this, 0x560) != 0 && AT(int, this, 0x510) == 0 &&
            AT(int, this, 0x4f0) == 0 && AT(int, this, 0x4f4) == 0 &&
            AT(int, this, 0x4e4) == 0 && AT(int, this, 0x51c) == 0 &&
            AT(int, this, 0x518) == 0 && AT(int, this, 0x578) == 0 &&
            AT(int, this, 0x558) == 0 && AT(int, this, 0x57c) == 0 &&
            AT(int, this, 0x580) == 0 && AT(int, this, 0x538) == 0 &&
            AT(int, this, 0x4ec) == 0 && AT(int, this, 0x5b4) == 0) {
            D_002B91AC->f44->func_001D6600();
        }
    }
    if (AT(int, this, 0x5a8) != 0) {
        ((C_000CFF30_Text *)AT(void *, this, 0x480))->func_001B1980();
        ((C_000CFF30_Text *)AT(void *, this, 0x568))->func_001B1980();
        AT(int, this, 0x4c4) = 0;
        AT(int, this, 0x4c8) = 0xff;
        AT(int, this, 0x4cc) = 0xff;
        AT(int, this, 0x4d0) = 0;
        AT(int, this, 0x4d4) = 0x3e800000;
        switch (AT(int, AT(void *, AT(void *, this, 0x140), 4), 0x30)) {
        case 1: w = C_000D0DD0_TipW(hw, 6); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 2: w = C_000D0DD0_TipW(hw, 7); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 3: w = C_000D0DD0_TipW(hw, 8); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 4: w = C_000D0DD0_TipW(hw, 9); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 5: w = C_000D0DD0_TipW(hw, 10); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 6: w = C_000D0DD0_TipW(hw, 11); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 7: w = C_000D0DD0_TipW(hw, 12); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 8: w = C_000D0DD0_TipW(hw, 13); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 9: w = C_000D0DD0_TipW(hw, 14); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 10: w = C_000D0DD0_TipW(hw, 15); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 11: w = C_000D0DD0_TipW(hw, 16); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 12: w = C_000D0DD0_TipW(hw, 17); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 13: w = C_000D0DD0_TipW(hw, 18); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 14: w = C_000D0DD0_TipW(hw, 19); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 15: w = C_000D0DD0_TipW(hw, 20); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        case 16: w = C_000D0DD0_TipW(hw, 21); ((C_000CFF30_Text *)w)->func_001B1980(); break;
        }
        if (((C_000301D0 *)AT(void *, AT(void *, hw, 0x25c), 0x74))->func_000301D0() == 0) {
            if (!(AT(int, this, 0x48c) == 2 || AT(int, this, 0x48c) == 4 ||
                  AT(int, this, 0x48c) == 7 || AT(int, this, 0x48c) == 9 ||
                  AT(int, this, 0x48c) == 0xd || AT(int, this, 0x48c) == 0x10)) {
                ((C_000CFF30_Text *)AT(void *, this, 0x480))
                    ->func_001B17D0((char *)((C_000BBDF0 *)hw)->func_000BBDF0());
                ((C_000D0D_Widget *)AT(void *, this, 0x480))
                    ->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 255, 1.15f, 0, 0.25f, 0.0f, 0);
            }
            if (AT(int, AT(void *, D_002A8490, 0x2e0), 4) == 0) {
                ((C_000CFF30 *)this)->func_000CFF30();
                ((C_000D0D_Widget *)AT(void *, this, 0x568))
                    ->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 255, 1.15f, 0, 0.25f, 0.0f, 0);
            }
            switch (AT(int, AT(void *, AT(void *, this, 0x140), 4), 0x30)) {
            case 1:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(6) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 2:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(7) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 3:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(8) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 4:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(9) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 5:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(10) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 6:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(11) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 7:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(12) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 8:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(13) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 9:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(14) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 10:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(15) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 11:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(16) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 12:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(17) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 13:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(18) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 14:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(19) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 15:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(20) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            case 16:
                ((C_000D0D_Widget *)*(void **)*(void **)((char *)((C_000BA9B0 *)hw)->func_000BA9B0(21) + 0x1b0))
                    ->func_001B1860(0, -1.0f, 0, 1.45f, 0, 0, 0, 255, 1.45f, 0, 0.25f, 0.0f, 0);
                break;
            }
        }
        AT(int, this, 0x4c4) = 0xff;
        AT(int, this, 0x4c8) = 0;
        AT(int, this, 0x4cc) = 0;
        AT(int, this, 0x4d0) = 0;
        AT(int, this, 0x4d4) = 0x3e800000;
        AT(int, this, 0x5a8) = 0;
    }
    if (AT(int, this, 0x51c) != 0)
        D_002B91AC->f34->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x738));
    else if (AT(int, this, 0x4f0) != 0)
        D_002B91AC->f34->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x720));
    else if (AT(int, this, 0x578) != 0)
        D_002B91AC->f34->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0xf28));
    else if (AT(int, this, 0x4f4) != 0)
        D_002B91AC->f34->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x770));
    else if (AT(int, this, 0x518) != 0)
        D_002B91AC->f34->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0xf30));
    else if (AT(int, this, 0x55c) != 0)
        D_002B91AC->f34->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0xf38));
    else if (AT(int, this, 0x57c) != 0)
        D_002B91AC->f34->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x1250));
    else if (AT(int, this, 0x580) != 0)
        D_002B91AC->f34->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x710));
    else if (AT(int, this, 0x4ec) != 0)
        D_002B91AC->f34->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x700));
    else
        D_002B91AC->f34->func_0005E840(AT(int, AT(void *, AT(void *, D_002A8490, 0x2e8), 4), 0x948));
    D_002B91AC->f34->func_001D6600();
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
