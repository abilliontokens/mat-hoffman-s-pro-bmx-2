/* 1 function from 0x000FA720 to 0x000FC740, found by Ghidra. */
#include "common.h"
extern float D_00278C58;
extern float D_002756CC;
extern float D_002B91C4;
extern int D_0028F5E0;

struct RiderPane {
    void func_00093120(void);
    int func_00092A10(void);
    int func_00092A50(int *out);
    int func_00092B40(int idx);
    int func_00092BE0(void);
    int func_00092AC0(void);
    void func_00093290(float a);
    void func_00093A00(float x, float y, int c, int a, int b, int d);
};

struct RiderBtn {
    void func_00103260(int a);
    void func_001B1980(void);
    void func_00103350(void);
};

struct RiderSub270 {
    int func_000BC670(void);
    void func_000BC590(void);
};

struct RiderPlayer {
    char pad0[0x270];
    RiderSub270 *f270;
    RiderBtn *func_000BA9B0(int a);
};

struct RiderPool {
    int *func_0005C020(int a);
};

struct RiderHandles {
    int func_00136170(int a, int b, int c);
};

struct RiderCfg {
    char pad0[4];
    int f4;
    char pad8[0x2c0 - 8];
    RiderPool *f2c0;
    char pad2c4[0x2d8 - 0x2c4];
    int f2d8;
    char pad2dc[0x300 - 0x2dc];
    int f300;
};

struct RiderByteObj {
    char pad0[0x3b];
    unsigned char b3b;
};

struct RiderGlobal {
    char pad0[8];
    RiderHandles *f8;
    char padc[0x124 - 0xc];
    int f124;
    char pad128[0x2e0 - 0x128];
    RiderCfg *f2e0;
};
extern RiderGlobal *D_002A8490;

/* BmxUIPageRider */
struct BmxUIPageRider {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28(int a, int b);
    char pad4[0x124 - 4];
    RiderPlayer *f124;
    char pad128[0x3f8 - 0x128];
    RiderByteObj *f3f8;
    char pad3fc[0x484 - 0x3fc];
    int f484;
    int f488;
    int f48c;
    char pad490[0x498 - 0x490];
    int f498;
    char pad49c[0x4a8 - 0x49c];
    int f4a8;
    int f4ac;
    int f4b0;
    int f4b4;
    int f4b8;
    int f4bc;
    char pad4c0[4];
    int f4c4;
    int f4c8;
    int f4cc;
    float f4d0;
    float f4d4;
    char pad4d8[8];
    int f4e0;
    int f4e4;
    char pad4e8[4];
    int f4ec;
    int f4f0;
    int f4f4;
    RiderPane *f4f8;
    int f4fc;
    int f500;
    int f504;
    int f508;
    int f50c;
    int f510;
    float f514;
    int f518;
    int f51c;
    int f520;
    int f524;
    int f528;
    int f52c;
    char pad530[0x538 - 0x530];
    int f538;
    int f53c;
    int f540;
    int f544;
    float f548;
    float f54c;
    RiderByteObj *f550;
    char pad554[4];
    int f558;
    int f55c;
    int f560;
    char pad564[0x570 - 0x564];
    float f570;
    char pad574[4];
    int f578;
    char pad57c[0x584 - 0x57c];
    int f584;
    int f588;
    char pad58c[0x5ac - 0x58c];
    int f5ac;
    void func_000FA720(float dt);
    void func_000CFCA0(void);
    void func_000CFDA0(void);
    void func_000CFB90(void);
    void func_000CE0A0(void);
    void func_000FA620(void);
    void func_001BED00(float dt);
};

void BmxUIPageRider::func_000FA720(float dt)
{
    RiderPlayer *p = f124;
    int idx;
    int i;

    if (p->f270->func_000BC670()) {
        p->f270->func_000BC590();
    }
    if (f4e0 != 0) {
        f510 = 0;
        if (f50c != 0) {
            f4f8->func_00093120();
            f50c = 0;
        }
        if (f524 != 0) {
            f4f8->func_00093120();
            f524 = 1;
            f560 = 0;
            f558 = 0;
        }
        switch (f48c) {
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
        default: goto done_e0;
        }
        if (f4f8->func_00092B40(idx) != 0) {
            if (f4f8->func_00092BE0() == 0 && D_002A8490->f2e0->f4 == 0) {
                f4bc = 1;
                f4f4 = 1;
                f528 = 0;
                f504 = 1;
                f498 = 0;
                f4f0 = 0;
            }
        }
        if (f528 != 0) {
            if (f4f8->func_00092B40(idx) == 0 && D_002A8490->f2e0->f4 == 0) {
                f4bc = 1;
                f4f0 = 1;
                f4fc = 1;
                f528 = 0;
                f498 = 0;
            }
        }
done_e0:
        f4e0 = 0;
    }
    D_002B91C4 += dt;
    if (f4e4 != 0 && D_002B91C4 >= D_00278C58) {
        if (f4f8->func_00092A50(0) != 0) {
            f4e4 = 0;
            f4f8->func_00093120();
        }
        if (f4f8->func_00092A10() == 0) {
            f538 = 1;
            f4e4 = 0;
        }
        D_002B91C4 = 0;
    }
    if (f4f0 != 0 && D_002B91C4 >= D_00278C58) {
        if (f4f8->func_00092A10() == 0) {
            f538 = 1;
            f4f0 = 0;
        }
        D_002B91C4 = 0;
    }
    if (f4ec != 0 && D_002B91C4 >= D_00278C58) {
        if (f4f8->func_00092A10() == 0) {
            f538 = 1;
            f4f8->func_00093120();
            v27();
            f4b8 = 0;
            switch (f48c) {
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
            default: goto else_a;
            }
            if (f4f8->func_00092B40(idx) == 0) {
                f4f0 = 1;
                f4fc = 1;
                f498 = 0;
            } else {
else_a:
                f498 = 1;
                f4a8 = 1;
            }
            v28(D_002A8490->f2e0->f300, D_002A8490->f8->func_00136170(4, 2, 0));
        }
        D_002B91C4 = 0;
    }
    if (f538 != 0 && D_002B91C4 >= D_00278C58) {
        if (f4f8->func_00092A10() == 1 && f4f8->func_00092BE0() == 0) {
            if (f4f4 != 0) {
                f4f8->func_00093120();
                f538 = 0;
                D_002A8490->f124 = 1;
                f4a8 = 0;
                f508 = 1;
                f4b4 = 0;
                f510 = 1;
                f50c = 0;
                f498 = 0;
                f518 = 1;
                f4f4 = 0;
                f514 = 0;
                f4b0 = D_002A8490->f2e0->f300;
                f4ac = D_002A8490->f8->func_00136170(4, 2, 0);
                f4e0 = 0;
            } else {
                f4f8->func_00093120();
                f538 = 0;
                v27();
                f4b8 = 0;
            }
            switch (f48c) {
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
            default: goto else_b;
            }
            if (f4f8->func_00092B40(idx) == 0) {
                f4f0 = 1;
                f4fc = 1;
                f498 = 0;
            } else {
else_b:
                f498 = 1;
                f4a8 = 1;
            }
            v28(D_002A8490->f2e0->f300, D_002A8490->f8->func_00136170(4, 2, 0));
        }
        D_002B91C4 = 0;
    }
    if (f510 != 0) {
        f588 = 1;
        if (f50c == 0) {
            f4f8->func_00093120();
            f4f8->func_00093A00(320.0f, 80.0f, D_0028F5E0, 0, 0, 0);
            f50c = 1;
            f4f4 = 0;
        }
        f514 += dt;
        if (f514 >= D_002756CC) {
            if (f518 != 0) {
                f4f8->func_00092A50(&f520);
                if (f520 >= 0x10c) {
                    func_000CFCA0();
                    f4f4 = 0;
                    f510 = 0;
                    if (f50c != 0) {
                        f4f8->func_00093120();
                    }
                    f50c = 0;
                    f518 = 0;
                    f5ac = 1;
                } else {
                    f498 = 0;
                    f4a8 = 0;
                    f50c = 0;
                    f4f8->func_00093120();
                    f518 = 0;
                    f4ec = 1;
                    f52c = 0x10c;
                }
            } else if (f55c != 0) {
                func_000CFDA0();
                f510 = 0;
                f4f8->func_00093120();
                func_000CE0A0();
                func_000FA620();
                switch (f48c) {
                case 1: p->func_000BA9B0(6)->func_00103260(0); break;
                case 3: p->func_000BA9B0(8)->func_00103260(0); break;
                case 5: p->func_000BA9B0(10)->func_00103260(0); break;
                case 6: p->func_000BA9B0(11)->func_00103260(0); break;
                case 8: p->func_000BA9B0(13)->func_00103260(0); break;
                case 10: p->func_000BA9B0(16)->func_00103260(0); break;
                case 11: p->func_000BA9B0(15)->func_00103260(0); break;
                case 12: p->func_000BA9B0(20)->func_00103260(0); break;
                case 14: p->func_000BA9B0(19)->func_00103260(0); break;
                case 15: p->func_000BA9B0(17)->func_00103260(0); break;
                }
                D_002A8490->f124 = 0;
            } else if (f51c != 0) {
                f584 = 1;
                f4f8->func_00093290(100.0f);
                f4f8->func_00092A50(&f520);
                f4e4 = 0;
                f51c = 0;
                f4f8->func_00093120();
                D_002A8490->f124 = 1;
                f500 = 0;
                f4f0 = 0;
                switch (f48c) {
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
                default: goto done_51c;
                }
                *D_002A8490->f2e0->f2c0->func_0005C020(idx) = 0;
                f50c = 0;
                f510 = 1;
                f578 = 1;
                f514 = 0.4f;
done_51c:;
            } else {
                idx = -1;
                switch (f48c) {
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
                f4f8->func_00092A50(&f520);
                f52c = 0;
                if (idx != -1 && *D_002A8490->f2e0->f2c0->func_0005C020(idx) == 0) {
                    f52c = 1;
                }
                for (i = 0; i < 10; i++) {
                    if (*D_002A8490->f2e0->f2c0->func_0005C020(i) != 0) {
                        break;
                    }
                    if (f4f8->func_00092B40(i) != 0) {
                        break;
                    }
                    f52c++;
                }
                if (f4f8->func_00092AC0() == 0) {
                    f52c += 4;
                }
                if (f52c > f520 && f584 == 0) {
                    f4f8->func_00093120();
                    f498 = 0;
                    f4a8 = 0;
                    f510 = 0;
                    f4f0 = 0;
                    f4ec = 1;
                    f52c = 0;
                    for (i = 0; i < 10; i++) {
                        if (*D_002A8490->f2e0->f2c0->func_0005C020(i) != 0) {
                            break;
                        }
                        if (f4f8->func_00092B40(i) != 0) {
                            break;
                        }
                        f52c++;
                    }
                    if (f4f8->func_00092AC0() == 0) {
                        f52c = 4;
                    }
                } else {
                    f584 = 0;
                    switch (f48c) {
                    case 1: D_002A8490->f2e0->f2d8 = 0; break;
                    case 3: D_002A8490->f2e0->f2d8 = 1; break;
                    case 5: D_002A8490->f2e0->f2d8 = 2; break;
                    case 6: D_002A8490->f2e0->f2d8 = 3; break;
                    case 8: D_002A8490->f2e0->f2d8 = 4; break;
                    case 10: D_002A8490->f2e0->f2d8 = 5; break;
                    case 11: D_002A8490->f2e0->f2d8 = 6; break;
                    case 12: D_002A8490->f2e0->f2d8 = 7; break;
                    case 14: D_002A8490->f2e0->f2d8 = 8; break;
                    case 15: D_002A8490->f2e0->f2d8 = 9; break;
                    }
                    *D_002A8490->f2e0->f2c0->func_0005C020(D_002A8490->f2e0->f2d8) = 0;
                    func_000CFB90();
                    f510 = 0;
                    f498 = 0;
                    f4a8 = 0;
                    f4f0 = 0;
                    f578 = 0;
                }
            }
        }
    } else {
        f588 = 0;
    }
    if (f55c != 0 && f510 == 0) {
        func_000CFDA0();
    }
    f570 += dt;
    if (f53c != f550->b3b) {
        if (f548 >= f54c) {
            f544 = f53c;
        } else {
            f544 = (int)((float)(f53c - f540) * (f548 / f54c)) + f540;
            f548 += dt;
        }
    }
    func_001BED00(dt);
}
