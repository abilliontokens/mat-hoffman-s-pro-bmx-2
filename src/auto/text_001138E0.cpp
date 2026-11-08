/* 1 function from 0x001138E0 to 0x00113F00, found by Ghidra. */
#include "common.h"

struct Tbl_1138E0 {
    char pad0[0x1c];
    char recs[80][0x32];
    char pad1B74[0x1B74 - 0x1c - 80 * 0x32];
    int i1B74[10];
    char pad1B9C[0x1C8C - 0x1B9C];
    float f1C8C[80];
    char pad1DCC[0x5944 - 0x1DCC];
    int i5944[80];
    float f5A84[80];
    char pad5BC4[0x655C - 0x5BC4];
    float f655C;
    char pad6560[0x6598 - 0x6560];
    float f6598;
    char pad659C[0x65D4 - 0x659C];
    float f65D4;
    char pad65D8[0x664C - 0x65D8];
    float f664C;
    char f6650[0x34];
    int i6684;
    float f6688;
    char f668C[0x34];
    int i66C0;
};
struct Own_1138E0 { char pad0[0x52C]; Tbl_1138E0 *f52C; };
struct Snd_1138E0 { void func_00026280(int on); };
struct Sub_1138E0 { int func_0002B1A0(); };
struct Anm_1138E0 { char pad0[0x38]; float f38; };
struct B1EC_1138E0 { char pad0[0x34]; float f34; };
struct B20C_1138E0 { char pad0[0x30]; int f30; };
struct Slots_1138E0 { char pad0[0x170]; void *f170[8]; char pad190[0x1C8 - 0x190]; int f1C8; };
struct G_1138E0 { char pad0[0x2A4]; Slots_1138E0 *f2A4; };
extern G_1138E0 *D_002A8490;
extern float D_00275544, D_00279B54;
struct Q_1138E0;
void __stdcall func_00108E30(int a, int b);
float __stdcall func_00108CB0(int idx, float v);

struct C_001138E0 {
    char pad0[0x24]; Own_1138E0 *f24;
    char pad28[0x1EC - 0x28]; B1EC_1138E0 *f1EC;
    char pad1F0[0x20C - 0x1F0]; B20C_1138E0 *f20C;
    char pad210[0x448 - 0x210]; int f448, f44C, f450, f454;
    char pad458[0x470 - 0x458]; int f470;
    char pad474[0x5C8 - 0x474]; int f5C8;
    char pad5CC[0x5F0 - 0x5CC]; Snd_1138E0 *f5F0;
    char pad5F4[0x680 - 0x5F4]; int f680;
    char pad684[0x69C - 0x684]; int f69C;
    char pad6A0[0x704 - 0x6A0]; int f704, f708, f70C, f710;
    char pad714[0x744 - 0x714]; float f744;
    char pad748[0x778 - 0x748]; Sub_1138E0 f778;
    char pad779[0x960 - 0x779]; float f960;
    char pad964[0x99C - 0x964]; float f99C;
    char pad9A0[0xA2C - 0x9A0]; int fA2C, fA30; float fA34; int fA38;
    char padA3C[0xAB0 - 0xA3C]; int cntAB0[70];
    int cntBC8[70];
    char padCE0[0xF88 - 0xBC8 - 70 * 4]; int fF88, fF8C;
    char padF90[0x1068 - 0xF90]; int f1068;
    char pad106C[0x1078 - 0x106C]; int f1078;
    char pad107C[0x1084 - 0x107C]; Q_1138E0 *f1084; int f1088;
    char pad108C[0x1110 - 0x108C]; int f1110;
    char pad1114[4]; int f1118;
    char pad111C[0x1128 - 0x111C]; int f1128, f112C;
    char pad1130[4]; int f1134;
    char pad1138[0x1158 - 0x1138]; int f1158, f115C, f1160;
    char pad1164[0x11D0 - 0x1164]; int f11D0, f11D4;
    char pad11D8[4]; int f11DC, f11E0;
    char pad11E4[4]; int f11E8;
    char pad11EC[8]; int f11F4;
    char pad11F8[0x15DC - 0x11F8]; int f15DC;
    char pad15E0[0x1BC0 - 0x15E0]; Anm_1138E0 *anims[80];
    char pad1D00[0x1F88 - 0x1D00]; int f1F88;
    char pad1F8C[0x2010 - 0x1F8C]; int f2010;
    char pad2014[0x20A0 - 0x2014]; int f20A0;
    void func_00108D10(int a, int b);
    float func_00108CE0(int idx);

    void func_0010DD90(float a, float b, void *c, int d, int e, int f);
    void func_001138E0(float dt);
};
struct Q_1138E0 { char pad0[0x2C]; int f2C; int f30; int func_00109420(); };

void C_001138E0::func_001138E0(float dt)
{
    int id;
    int v;
    int n;
    int m;
    int idle;
    float s;
    int slot;
    int cls;
    Q_1138E0 *q;

    if (D_002A8490->f2A4->f1C8 != 0 || f5C8 != 0) {
        return;
    }
    if ((f470 == 0 && f1084->func_00109420() != 0) || f1088 != 0) {
        f1088 = 0;
        f112C = 0;
        id = f1084->f2C;
        v = f1084->f30;
        f11F4 = 1;
        if (id >= 1000) {
            f15DC = 11;
            f1068 = 1;
            switch (f1158) {
            case 3:
                f450 = 1;
                f454 = 1;
                break;
            case 0:
            case 4:
                f44C = 1;
                f454 = 1;
                break;
            case 1:
            case 2:
                f448 = 1;
                f454 = 1;
                break;
            }
            if (f680 != 0 && f454 != 0) {
                fA34 = 0.5f;
            }
            if (f778.func_0002B1A0()) {
                f5F0->func_00026280(1);
            } else {
                f5F0->func_00026280(0);
            }
            func_00108D10(-1, -1);
            func_00108E30(-1, -1);
        } else {
            if (D_002A8490->f2A4->f170[fA2C] != 0) {
                f1118 = 0;
                func_00108D10(id, -1);
                func_00108E30(id, -1);
                n = cntBC8[id] + 1;
                m = cntAB0[id] + 1;
                cntBC8[id] = n;
                cntAB0[id] = m;
                func_0010DD90(func_00108CB0(n, (float)f24->f52C->i1B74[id]), func_00108CE0(m),
                              f24->f52C->recs[id], id, 0, v);
            }
            if (f11E8 == 0) {
                f15DC = 9;
            }
            return;
        }
    }
    q = f1084;
    id = q->f2C;
    if (id != -1) {
        if (id >= 1000) {
            slot = f1134;
            if (slot == -1) goto skip;
            cls = f1158;
            if (f1110 != 0) {
                s = dt * f24->f52C->f5A84[cls * 16 + slot];
            } else {
                s = (float)f24->f52C->i5944[cls * 16 + slot] / anims[cls * 16 + slot]->f38 * dt;
            }
            func_0010DD90(s, 0, 0, -1, -1, 0);
        } else {
            if (f1110 == 0) goto skip;
            func_0010DD90(dt * f24->f52C->f1C8C[id], 0, 0, -1, -1, 0);
        }
    }
skip:
    if (f11DC != 0) {
        f1068 = 0;
        if (f11E0 == 0) {
            f11F4 = 1;
            f960 = 0.25f;
            f15DC = 10;
            f1128 = 0;
            f1078 = 0;
        }
    }
    if (f704 != 0) {
        if (f708 == 0) {
            f11F4 = 1;
            func_0010DD90((float)f24->f52C->i66C0, 1.0f, f24->f52C->f668C, 0, 6, 0);
            f15DC = 12;
        }
        if (f15DC != 12) {
            f704 = 0;
        }
    }
    if (f70C != 0 && f710 == 0) {
        f11F4 = 1;
        f15DC = 13;
    }
    if (f20C->f30 != 0 && f1160 != 0 && f11D0 == 0) {
        f15DC = 15;
    }
    if (f69C != 0) {
        if (f11D4 == 0) {
            f11F4 = 1;
            if (D_002A8490->f2A4->f170[fA2C] != 0) {
                n = fF8C + 1;
                m = fF88 + 1;
                fF8C = n;
                fF88 = m;
                func_0010DD90(func_00108CB0(n, (float)f24->f52C->i6684), func_00108CE0(m),
                              f24->f52C->f6650, -1, 7, 0);
            }
            f15DC = 14;
            return;
        }
        func_0010DD90(dt * f24->f52C->f6688, 0, 0, -1, -1, 0);
    }
    if (f1158 != -1) {
        if (f115C != -1 && f2010 == 0 && fA38 != 0) {
            idle = 0;
            if (f1134 == -1) {
                idle = 1;
            }
            if (fA30 == 0 && idle != 0) {
                switch (f1158) {
                case 3:
                    func_0010DD90(dt * f24->f52C->f65D4, 0, 0, -1, -1, 0);
                    break;
                case 4:
                    func_0010DD90(dt * f24->f52C->f65D4, 0, 0, -1, -1, 0);
                    break;
                case 0:
                    func_0010DD90(dt * f24->f52C->f655C, 0, 0, -1, -1, 0);
                    break;
                case 2:
                    func_0010DD90(dt * f24->f52C->f6598, 0, 0, -1, -1, 0);
                    break;
                case 1:
                    func_0010DD90(dt * f24->f52C->f664C, 0, 0, -1, -1, 0);
                    break;
                }
            }
        }
    } else {
        f448 = 0;
        f44C = 0;
        f450 = 0;
        f454 = 0;
        fA30 = 1;
        f1134 = -1;
    }
    f115C = f1158;
    if ((f99C > D_00275544 || *(volatile float *)&f1EC->f34 * D_00279B54 <= f744) && f20A0 == 0 && f454 == 0) {
        f1F88 = 1;
    } else {
        f1F88 = 0;
    }
}
