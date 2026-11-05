/* 1 function from 0x000BC7B0 to 0x000BCBB0, found by Ghidra. */
#include "common.h"

struct S_000BC7B0_Sub {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

struct S_000BC7B0_Panel {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29(int a);
    virtual int v30(float dt);
    char pad4[0x124];
    S_000BC7B0_Sub *f128;
};

struct C_000BC7B0_268 {
    int func_001C3F10(void);
    void func_001C4BD0(int a, int b);
};
struct C_000BC7B0_2F0 {
    void func_0001EDC0(int a0);
};
struct C_000BC7B0_14 {
    void func_001577A0(C_000BC7B0_2F0 *a, int b);
};
struct C_000BC7B0_2FC {
    void func_00094D90(int a);
};
struct C_000BC7B0_274 {
    void func_00093120(void);
};
struct C_000BC7B0_270 {
    void func_000BC590(void);
};
struct C_000BC7B0_484 {
    void func_0001C240(void);
};
struct S_000BC7B0_150 {
    char pad0[0x484];
    C_000BC7B0_484 *f484;
};
struct S_000BC7B0_2E0 {
    char pad0[0x2fc];
    C_000BC7B0_2FC *f2fc;
    char pad300[0x24];
    int f324;
};
struct S_000BC7B0_Root {
    char pad0[0x14];
    C_000BC7B0_14 *f14;
    char pad18[0x10c];
    int f124;
    char pad128[0x1b8];
    S_000BC7B0_2E0 *f2e0;
    char pad2e4[0xc];
    C_000BC7B0_2F0 *f2f0;
};
extern S_000BC7B0_Root *D_002A8490;
extern float D_00276558;

struct S_000BC7B0_110b {
    char pad0[0x280];
    int f280;
};
struct S_000BC7B0_110 {
    int f0;
    S_000BC7B0_110b *f4;
};

struct BmxUIManager {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28();
    virtual void v29(int a);
    virtual void v30();
    virtual void v31(int a, int b, int c, int d);
    char pad4[0x10c];
    S_000BC7B0_110 *f110;
    char pad114[4];
    S_000BC7B0_Panel *f118;
    int f11c;
    char pad120[8];
    int f128;
    char pad12c[8];
    int f134;
    int f138;
    int f13c;
    float f140;
    int f144;
    char pad148[4];
    int f14c;
    S_000BC7B0_150 *f150;
    char pad154[0x114];
    C_000BC7B0_268 *f268;
    char pad26c[4];
    C_000BC7B0_270 *f270;
    C_000BC7B0_274 *f274;
    void func_000BC7B0(float dt);
    void func_00157A00(float dt);
};

void BmxUIManager::func_000BC7B0(float dt) {
    if (f268->func_001C3F10()) {
        f268->func_001C4BD0(1000, 1);
    }
    if (f14c == 0) {
        switch (f138) {
        case 1:
            v29(f134);
            f118->v27();
            v31(f138, 0, 0, 0);
            f138 = 4;
            f13c = 1;
            f140 = 0;
            f118->v29(1);
            f118->f128->v5();
            break;
        case 2:
            v31(f138, 0, 0, 0);
            f138 = 4;
            f13c = 1;
            f118->v29(1);
            f118->f128->v5();
            break;
        case 7:
            f138 = 4;
            f13c = 2;
            f118->v29(2);
            f118->f128->v5();
            break;
        case 6:
            f138 = 3;
            f13c = 2;
            f118->v29(2);
            f118->f128->v5();
            break;
        case 8:
            f138 = 5;
            f13c = 2;
            f118->v29(2);
            f118->f128->v5();
            break;
        case 3:
            if (f118->v30(dt)) {
                if (f13c == 2) {
                    f138 = 9;
                }
                f13c = 0;
            }
            break;
        case 4:
            if (f118->v30(dt)) {
                if (f13c == 1) {
                    f118->f128->v7();
                    f138 = 0;
                    f13c = 0;
                } else {
                    if (f13c == 2) {
                        f138 = 1;
                    }
                    f13c = 0;
                }
            }
            break;
        case 5:
            if (f118->v30(dt)) {
                if (f13c == 2) {
                    f138 = 10;
                }
                f13c = 0;
            }
            break;
        case 9:
            D_002A8490->f2f0->func_0001EDC0(1);
            f138 = 0;
            f128 = 1;
            f144 = 0;
            break;
        case 10:
            f138 = 0;
            f144 = 1;
            f128 = 1;
            D_002A8490->f14->func_001577A0(D_002A8490->f2f0, -1);
            D_002A8490->f2f0->func_0001EDC0(2);
            break;
        }
    } else {
        f138 = 2;
        f14c = 0;
    }
    if (f128) {
        v30();
    }
    f140 += dt;
    if (f138 == 0) {
        if (f11c == 0x1b) {
            if (f140 >= D_00276558) {
                f138 = 7;
                f134 = 0x1e;
                f140 = 0;
                f274->func_00093120();
                D_002A8490->f2e0->f2fc->func_00094D90(250);
            }
        } else {
            int ok = 1;
            if (f11c == 0x1e) ok = 0;
            if (f11c == 0x1c) ok = 0;
            if (f11c == 0x1d) ok = 0;
            if (f11c == 0xe) ok = 0;
            if (!(f11c == 2 && f110->f4->f280 == 1) && ok && D_002A8490->f2e0->f324 != 1 && f140 >= D_00276558) {
                f138 = 7;
                f134 = 0x1b;
                f140 = 0;
                f274->func_00093120();
                f270->func_000BC590();
                f150->f484->func_0001C240();
                D_002A8490->f124 = 0;
            }
        }
    }
    func_00157A00(dt);
}
