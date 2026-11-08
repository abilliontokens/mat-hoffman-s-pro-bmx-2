/* 2 functions from 0x000E6EF0 to 0x000E7AD0, found by Ghidra. */
#include "common.h"
struct LookupObj_000F1980 {
    int *func_0018C160(int a);
};
struct Input_000E6EF0 {
    int func_00136170(int a, int b, int c);
};
struct Snd_000E6EF0 {
    void func_000B9A80(int a, int b);
};
struct Ops_000E6EF0 {
    int func_0005C150(int a, int b);
    int func_0005C190(int a, int b);
};
struct Game_000E6EF0 {
    char pad0[0x4];
    int i4;
    char pad8[0x2c0 - 0x8];
    Ops_000E6EF0 *p2C0;
    char pad2C4[0x300 - 0x2c4];
    int a300[4];
};
struct Entry_000E6EF0 {
    char pad0[0x110];
    int n110;
    char pad114[0x11c - 0x114];
    int n11C;
    char pad120[0x1a8 - 0x120];
};
struct Anim_000E6EF0 {
    int func_000301D0();
};
struct Obj74_000E6EF0 {
    char pad0[0x74];
    Anim_000E6EF0 *p74;
};
struct List_000E6EF0 {
    int func_001C3F10();
    int func_001C3F30();
};
struct Ctx_000E6EF0 {
    char pad0[0x24];
    Snd_000E6EF0 *p24;
    char pad28[0x138 - 0x28];
    int i138;
    char pad13C[0x25c - 0x13c];
    Obj74_000E6EF0 *p25C;
    char pad260[0x268 - 0x260];
    List_000E6EF0 *p268;
    char pad26C[0x27c - 0x26c];
    Entry_000E6EF0 *p27C;
    int pad280;
    int i284;
    int i288;
    int i28C;
    int func_000BDF30(int a);
    int func_000BE020(int a);
    int func_000BC050();
    int func_000BC130();
};
struct GObjRoot_000F1980 {
    char pad0[0x8];
    Input_000E6EF0 *p8;
    char padC[0x2e0 - 0xc];
    Game_000E6EF0 *p2E0;
    char pad2E4[0x2ec - 0x2e4];
    LookupObj_000F1980 *p2EC;
};
extern GObjRoot_000F1980 *D_002A8490;
extern float D_00275AEC;
extern int D_00281A34, D_002786A0, D_00278678, D_0027958C;
struct ClampObj_000F1980 {
    char pad0[0x10];
    float f10;
    float f14;
};
struct MidObj_000F1980 {
    ClampObj_000F1980 *func_0018C070();
};
struct SubElem_000F1980 {
    ClampObj_000F1980 *func_001D5AA0();
};
struct BmxUIPageRiderOps {
    char pad0[0x124];
    Ctx_000E6EF0 *p124;
    char pad128[0x280 - 0x128];
    int f280, f284, f288, f28C;
    int f290, f294, f298, f29C, f2A0, f2A4, f2A8, f2AC, f2B0;
    char pad2B4[0x3e8 - 0x2b4];
    int f3E8[16];
    int f428[16];
    char pad468[0x46c - 0x468];
    int f46C;
    int f470;
    char pad474[0x4c4 - 0x474];
    int f4C4, f4C8, f4CC, f4D0, f4D4, f4D8, f4DC, f4E0, f4E4, f4E8, f4EC;
    char pad4F0[0x508 - 0x4f0];
    int f508, f50C;
    char pad510[0x514 - 0x510];
    SubElem_000F1980 *a514[5], *a528[5], *a53c[5], *a550[5];
    char pad564[0x154];
    SubElem_000F1980 *a6b8[6], *a6d0[4], *a6e0[4];
    char pad6F0[0x788 - 0x6f0];
    int f788;
    int func_000E6EF0(int a, int b);
    void func_000E7820();
    void func_001578D0();
    int func_000E5180(int a);
    int func_000E5150(int a);
    void func_000E6D00();
    void func_000E6DC0();
    void func_000E5FF0();
};

int BmxUIPageRiderOps::func_000E6EF0(int a, int b)
{
    Ctx_000E6EF0 *c = p124;
    Snd_000E6EF0 *s = c->p24;
    D_002A8490->p2EC->func_0018C160((int)&D_002786A0);
    if (c->p25C->p74->func_000301D0()) return 0;
    if (c->p268->func_001C3F10()) return 0;
    if (c->p268->func_001C3F30() && f29C == 0 && f2A4 == 0 && f2A0 == 0) return 0;
    if (f4DC || f4E0) return 0;
    if (p124->i138 == 4 || p124->i138 == 3) return 0;
    if ((f29C || f2A4 || f2A0) && f2A8 == 0) return 0;
    if (a != D_002A8490->p2E0->a300[f280]) return 0;
    if (b == D_002A8490->p8->func_00136170(3, 2, 0)) {
        if (f2AC || f508) return 0;
        f470 = 1;
        s->func_000B9A80(2, 1);
        f4C8 = 1;
        f4CC = 1;
        f4C4 = f4C4 == 0;
        return 1;
    }
    if (b == D_002A8490->p8->func_00136170(2, 2, 0)) {
        if (f2AC || f508) return 0;
        f470 = 1;
        s->func_000B9A80(2, 1);
        f4C8 = 1;
        f4CC = 1;
        f4C4 = f4C4 == 0;
        return 1;
    }
    if (b == D_002A8490->p8->func_00136170(1, 2, 0)) {
        if (f2AC || f508) return 0;
        if (f4C4 == 0) {
            if (D_002A8490->p2E0->i4 == 0) {
                do {
                    if (++c->i288 >= c->p27C[c->i284].n11C) c->i288 = 0;
                } while (!func_000E5180(c->i288));
            } else {
                do {
                    if (++c->i288 >= c->p27C[c->i284].n11C) c->i288 = 0;
                } while (!D_002A8490->p2E0->p2C0->func_0005C150(c->i284, c->i288));
            }
            if (f4D4 == c->i288) return 0;
            f4E0 = 1;
        } else {
            if (D_002A8490->p2E0->i4 == 0) {
                do {
                    if (++c->i28C >= c->p27C[c->i284].n110) c->i28C = 0;
                } while (!func_000E5150(c->i28C));
            } else {
                do {
                    if (++c->i28C >= c->p27C[c->i284].n110) c->i28C = 0;
                } while (!D_002A8490->p2E0->p2C0->func_0005C190(c->i284, c->i28C));
            }
            if (f4D0 == c->i28C) return 0;
            f4E4 = 1;
        }
        f4EC = 0;
        f470 = 1;
        s->func_000B9A80(2, 1);
        return 1;
    }
    if (b == D_002A8490->p8->func_00136170(7, 2, 0)) {
        if (f508) return 0;
        if (f284 != 1) return 0;
        if (f50C == 0) {
            f50C = 1;
            f2A8 = 0;
            f290 = b;
            f294 = a;
            s->func_000B9A80(4, 1);
            return 0;
        }
        if (f2A8 == 0) return 0;
        if (f2AC) func_000E6D00();
        f2A8 = 0;
        return 1;
    }
    if (b == D_002A8490->p8->func_00136170(0, 2, 0)) {
        if (f2AC || f508) return 0;
        if (f4C4 == 0) {
            if (D_002A8490->p2E0->i4 == 0) {
                do {
                    if (--c->i288 < 0) c->i288 = c->p27C[c->i284].n11C - 1;
                } while (!func_000E5180(c->i288));
            } else {
                do {
                    if (--c->i288 < 0) c->i288 = c->p27C[c->i284].n11C - 1;
                } while (!D_002A8490->p2E0->p2C0->func_0005C150(c->i284, c->i288));
            }
            if (f4D4 == c->i288) return 0;
            f470 = 1;
            s->func_000B9A80(2, 1);
            f4DC = 1;
            f4EC = 0;
            return 1;
        } else {
            if (D_002A8490->p2E0->i4 == 0) {
                do {
                    if (--c->i28C < 0) c->i28C = c->p27C[c->i284].n110 - 1;
                } while (!func_000E5150(c->i28C));
            } else {
                do {
                    if (--c->i28C < 0) c->i28C = c->p27C[c->i284].n110 - 1;
                } while (!D_002A8490->p2E0->p2C0->func_0005C190(c->i284, c->i28C));
            }
            if (f4D0 == c->i28C) return 0;
            f470 = 1;
            s->func_000B9A80(2, 1);
            f4E8 = 1;
            f4EC = 0;
            return 1;
        }
    }
    if (b == D_002A8490->p8->func_00136170(6, 2, 0)) {
        if (f2A4 == 0) s->func_000B9A80(4, 1);
        if (f2A8 == 0) {
            f2A4 = 1;
            f298 = 0;
            f290 = b;
            f294 = a;
            return 0;
        }
        if (f2AC == 0 && f508 == 0) {
            f2AC = 1;
            f2B0 = 0;
            func_000E6DC0();
            func_000E5FF0();
            f2A4 = 0;
            f2A8 = 0;
            return 1;
        }
        f2AC = 0;
        f508 = 0;
        f2A4 = 0;
        f2A8 = 0;
        f4D8 = 1;
        return 1;
    }
    if (b == D_002A8490->p8->func_00136170(4, 2, 0) || b == D_002A8490->p8->func_00136170(0x17, 2, 0)) {
        if (f29C == 0) {
            f46C = 1;
            f788 = 1;
            s->func_000B9A80(4, 1);
        }
        if (f2A8 == 0) {
            f29C = 1;
            f298 = 0;
            f290 = b;
            f294 = a;
            return 0;
        }
        f3E8[c->i284] = c->func_000BC050();
        f428[c->i284] = c->func_000BC130();
        return 1;
    }
    if (b == D_002A8490->p8->func_00136170(5, 2, 0) || b == D_002A8490->p8->func_00136170(0x18, 2, 0)) {
        if (f2A0 == 0) {
            f46C = 1;
            f788 = 1;
            s->func_000B9A80(1, 1);
            f2A0 = 1;
            f298 = 0;
            f290 = b;
            f294 = a;
            if (f2A8 == 0) return 0;
        }
        int v = f3E8[c->i284];
        if (v != c->i28C) {
            c->i28C = v;
            f28C = c->func_000BDF30(1);
        }
        v = f428[c->i284];
        if (v == c->i288) return 0;
        c->i288 = v;
        f288 = c->func_000BE020(1);
        return 1;
    }
    return 0;
}

void BmxUIPageRiderOps::func_000E7820()
{
    int ids[4];
    int i;
    int *r;
    ClampObj_000F1980 *o;
    SubElem_000F1980 **e;
    LookupObj_000F1980 *lk;
    ids[0] = (int)&D_00281A34;
    ids[1] = (int)&D_002786A0;
    ids[2] = (int)&D_00278678;
    ids[3] = (int)&D_0027958C;
    for (i = 0; i < 4; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((MidObj_000F1980 *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = a528;
    i = 5;
    do {
        if (e[-5] != 0) {
            o = e[-5]->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        if ((*e) != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        if (e[5] != 0) {
            o = e[5]->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        if (e[10] != 0) {
            o = e[10]->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    e = a6b8;
    i = 6;
    do {
        if ((*e) != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    e = a6e0;
    i = 4;
    do {
        if (e[-4] != 0) {
            o = e[-4]->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        if ((*e) != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    func_001578D0();
}
