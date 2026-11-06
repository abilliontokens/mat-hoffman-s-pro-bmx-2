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
    char pad0[0x514];
    SubElem_000F1980 *a514[5], *a528[5], *a53c[5], *a550[5];
    char pad564[0x154];
    SubElem_000F1980 *a6b8[6], *a6d0[4], *a6e0[4];
    int func_000E6EF0(int a, int b);
    void func_000E7820();
    void func_001578D0();
};

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
