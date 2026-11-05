/* 2 functions from 0x000689E0 to 0x00069340, found by Ghidra. */
#include "common.h"
struct Sprite_69 {
    char pad0[0x10];
    float f10, f14;
    Sprite_69 *func_001D5AA0();
};
struct Mid_69 { Sprite_69 *func_0018C070(); };
struct Lookup_69 { int *func_0018C160(int); };
struct Mgr_69 { char pad0[0x2EC]; Lookup_69 *f2EC; };
extern Mgr_69 *D_002A8490;
extern float D_00275AEC;
extern char D_002786A0[], D_00278690[], D_00278678[];

struct C_00069080 {
    char pad0[0x80];
    Sprite_69 *arr80[2];
    char pad88[0x30];
    Sprite_69 *arrB8[4];
    Sprite_69 *arrC8[4];
    Sprite_69 *arrD8[5];
    Sprite_69 *arrEC[5];
    Sprite_69 *arr100[14];
    Sprite_69 *unk138;
    void func_00069080();
    void func_001578D0();
};
#define CLAMP(p) { Sprite_69 *o = (p)->func_001D5AA0(); if (D_00275AEC > o->f10) o->f10 = 10.0f; if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f; }

void C_00069080::func_00069080()
{
    int ids[3];
    int i;
    Sprite_69 **e;
    Lookup_69 *lk;
    ids[0] = (int)D_002786A0;
    ids[1] = (int)D_00278690;
    ids[2] = (int)D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->f2EC;
        int *r = lk->func_0018C160(ids[i]);
        if (r && *r) {
            Sprite_69 *o = ((Mid_69 *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) o->f10 = 10.0f;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f;
        }
    }
    e = &arr80[0];
    i = 2;
    do { CLAMP(*e); e++; i--; } while (i);
    e = arrC8;
    i = 4;
    do {
        if (e[-4]) CLAMP(e[-4]);
        if (*e) CLAMP(*e);
        e++; i--;
    } while (i);
    e = arrEC;
    i = 5;
    do {
        if (e[-5]) CLAMP(e[-5]);
        if (*e) CLAMP(*e);
        e++; i--;
    } while (i);
    e = arr100;
    i = 14;
    do { if (*e) CLAMP(*e); e++; i--; } while (i);
    if (unk138) CLAMP(unk138);
    func_001578D0();
}
