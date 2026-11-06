/* 3 functions from 0x0006A1A0 to 0x0006AA90, found by Ghidra. */
#include "common.h"
struct Clamp_6A { char pad[0x10]; float f10, f14; };
struct Mid_6A { Clamp_6A *func_0018C070(); };
struct Lookup_6A { int *func_0018C160(int); void func_0018C780(int count, int *names, int flags); };
struct Menu_6A { char pad0[0x7c8]; int f7c8; char pad7cc[0x1128 - 0x7cc]; int f1128; char pad112c[0x1248 - 0x112c]; int f1248; };
struct Hud_6A { int pad0; Menu_6A *f4; };
struct Global_6A { char pad[0x2e8]; Hud_6A *p2E8; Lookup_6A *p2EC; };
extern Global_6A *D_002A8490;
extern float D_00275AEC;
extern int D_002786A0, D_00278690, D_00278678;
extern int D_0027896C, D_0027895C, D_00278958;
extern unsigned D_0028F5E0, D_0028F5DC;
struct W_6A1A0 { virtual ~W_6A1A0(); Clamp_6A *func_001D5AA0(); };
/* text label widget (0x60 bytes) */
struct D_6A1A0 {
    char pad0[4];
    unsigned f4;
    unsigned f8;
    char padC[0x34 - 0xC];
    unsigned f34;
    char pad38[0x44 - 0x38];
    unsigned f44;
    unsigned f48;
    char pad4C[2];
    unsigned char f4e;
    char pad4F[0x60 - 0x4F];
    void func_001D6410();
    D_6A1A0 *func_001D5E90();
    void func_001D5FA0(int font, int name, int a, int b);
    void func_001D6190(int font, int text, int name);
    void func_0005E840(int a);
    inline void SetPos(unsigned x, unsigned y)
    {
        if (f4 != x || f8 != y) {
            f4 = x;
            f8 = y;
            f4e |= 6;
        }
    }
    inline void SetScale(unsigned v)
    {
        if (f34 != v) {
            f4e |= 6;
            f34 = v;
        }
    }
    inline void SetColor(unsigned c)
    {
        if (f48 != c) {
            f4e |= 8;
            f48 = (f48 & c) | (c & 0xffffff);
        }
    }
    inline void SetFont(unsigned v)
    {
        if (f44 != v) {
            f44 = v;
            f4e |= 6;
        }
    }
};
void *func_001E8A44(int size);
void func_001E891B(void *p);
extern int D_002788EC;

struct C_0006A1A0 {
    void *vtbl;
    char pad4[0x80];
    D_6A1A0 *unk84[3];
    D_6A1A0 *unk90[2];
    W_6A1A0 *unk98[2];
    W_6A1A0 *unkA0[3];
    W_6A1A0 *unkAC[3];
    W_6A1A0 *unkB8[2];
    char padC0[0x24];
    W_6A1A0 *unkE4[5];
    W_6A1A0 *unkF8[5];
    W_6A1A0 *unk10C[16];
    W_6A1A0 *unk14C;
    char pad150[0x24];
    D_6A1A0 *unk174;
    D_6A1A0 *unk178;
    D_6A1A0 *unk17C;
    char pad180[0x40];
    D_6A1A0 *unk1C0;
    void func_00157660();
    void func_0006A1A0();
    void func_0006A360();
    void func_0006A820();
    void func_001578D0();
};

void C_0006A1A0::func_0006A1A0()
{
    int i;
    D_6A1A0 *p;
    vtbl = (void *)&D_002788EC;
    for (i = 0; i < 2; i++) {
        if (unk98[i]) { delete unk98[i]; unk98[i] = 0; }
    }
    for (i = 0; i < 3; i++) {
        if (unkAC[i]) { delete unkAC[i]; unkAC[i] = 0; }
        if (unkA0[i]) { delete unkA0[i]; unkA0[i] = 0; }
        p = unk84[i];
        if (p) { p->func_001D6410(); func_001E891B(p); unk84[i] = 0; }
    }
    for (i = 0; i < 2; i++) {
        p = unk90[i];
        if (p) { p->func_001D6410(); func_001E891B(p); unk90[i] = 0; }
        if (unkB8[i]) { delete unkB8[i]; unkB8[i] = 0; }
    }
    p = unk174;
    if (p) { p->func_001D6410(); func_001E891B(p); unk174 = 0; }
    if (unk14C) { delete unk14C; unk14C = 0; }
    p = unk178;
    if (p) { p->func_001D6410(); func_001E891B(p); unk178 = 0; }
    p = unk17C;
    if (p) { p->func_001D6410(); func_001E891B(p); unk17C = 0; }
    p = unk1C0;
    if (p) { p->func_001D6410(); func_001E891B(p); unk1C0 = 0; }
    for (i = 0; i < 5; i++) {
        if (unkE4[i]) { delete unkE4[i]; unkE4[i] = 0; }
        if (unkF8[i]) { delete unkF8[i]; unkF8[i] = 0; }
    }
    for (i = 0; i < 16; i++) {
        if (unk10C[i]) { delete unk10C[i]; unk10C[i] = 0; }
    }
    func_00157660();
}

void C_0006A1A0::func_0006A820() {
int ids[3]; int i; int *r; Clamp_6A *o; W_6A1A0 **e; Lookup_6A *lk;
ids[0]=(int)&D_002786A0; ids[1]=(int)&D_00278690; ids[2]=(int)&D_00278678;
for(i=0;i<3;i++) { lk=D_002A8490->p2EC; r=lk->func_0018C160(ids[i]); if(r && *r) { o=((Mid_6A *)*r)->func_0018C070(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } }
e=unk98; i=2; do { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; e++; i--; }while(i);
e=unkAC; i=3; do { if(e[-3]) { o=e[-3]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if(*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; }while(i);
e=unkF8; i=5; do { if(e[-5]) { o=e[-5]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if(*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; }while(i);
if(unk14C) { o=unk14C->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
func_001578D0();
}

