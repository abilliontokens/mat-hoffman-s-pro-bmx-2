/* 4 functions from 0x000DA390 to 0x000DB310, found by Ghidra. */
#include "common.h"
struct DA_Call {
 int func_000301D0();
 int func_000B5870();
 int func_00136170(int,int,int);
 void func_000B9A80(int,int);
 void func_00094E40(int,int,int);
};
struct DA_Page {
 char pad[0x124]; char *owner;
 char pad128[0x158];
 int f280,f284,f288,f28c,f290,f294,f298,f29c,f2a0,f2a4,f2a8,f2ac;
 int f2b0,f2b4,f2b8,f2bc,f2c0,f2c4,f2c8,f2cc,f2d0;
 char pad2d4[0x58]; float positions[11];
 int func_000DAAB0(int,int);
};
extern float D_002757F0;

struct LookupObj_DA {
    int *func_0018C160(int a);
};

struct GObjRoot_DA {
    char pad0[0x2ec];
    LookupObj_DA *p2EC;
};

extern GObjRoot_DA *D_002A8490;

extern float D_00275AEC;
extern int D_002786A0;
extern int D_00278690;
extern int D_00278678;

struct ClampObj_DA {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_DA {
    ClampObj_DA *func_0018C070();
};

struct C_001D6600_DA {
    void func_001D6600();
};

struct HudObj_DA {
    char pad0[0x34];
    C_001D6600_DA *f34;
    C_001D6600_DA *arr38[2];
};

extern HudObj_DA *D_002B91AC;
extern float D_00275600;
extern float D_00279B50;
extern float D_0027F718;

struct TextObj_DA {
    void func_001B1980(void);
    void func_001B1A30(float x, float y, float z);
    void func_001B2270(int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_000DB180 {
    char pad0[0x2b4];
    int f2B4;
    int f2B8;
    int f2BC;
    char pad2C0[0x10];
    int f2D0;
    char pad2D4[0x14];
    TextObj_DA *w2E8[11];
    float f314[17];
    void func_000DB180(void);
};

/* BmxUIPageViewVideosTitle */
struct C_000DB0E0 {
    void func_000DB0E0(void);
    void func_001578D0(void);
};

extern char D_002786B0[], D_0027F6F4[], D_0027E328[], D_0027E31C[];
extern char D_0027F6E4[], D_0027F6D8[], D_0027F6CC[], D_0027F6C0[], D_0027F6B0[], D_0027F6A0[], D_0027F694[], D_0027F684[], D_0027F678[], D_0027F66C[], D_0027F65C[];
extern float D_0027F6F0;
extern int D_0028F5E0;
extern "C" void *func_001E8A44(unsigned int size);

struct S_000DA390_Text {
    char pad0[0x184];
    S_000DA390_Text *func_001B12C0(int a);
    void func_001B13A0(const char *a, const char *b, int c, int d);
    void func_001B1A30(float x, float y, int z);
    void func_001B2270(unsigned int color);
    void func_001B19A0(int v);
    void func_001B17D0(const char *s);
};

struct S_000DA390_Obj {
    char pad0[0x14];
    u32 f14;
    u32 f18;
    char pad1C[0xC];
    u32 f28;
    char pad2C[4];
    u32 f30;
    char pad34[4];
    u32 f38;
    float f3C, f40, f44, f48;
    char pad4C[0xC];
    unsigned char b58;
    S_000DA390_Obj *func_001D5760();
    void func_001D5810(const char *name, float x, float y, int z);
    void depth(u32 v) { if (f28 != v) { f28 = v; b58 |= 1; } }
    void color() { f38 = (f38 & 0xffbfa35a) | 0xbfa35a; b58 |= 2; }
    void pos(u32 x, u32 y) { if (f14 != x || f18 != y) { f14 = x; f18 = y; b58 |= 1; } }
    void angle(u32 a) { if (f30 != a) { f30 = a; b58 |= 1; } }
    void coords(float a, float b, float c, float d) { f3C = a; f40 = b; f44 = c; f48 = d; b58 |= 4; }
};

/* BmxUIPageViewVideosTitle */
struct C_000DA390 {
    char pad0[0x2E8];
    S_000DA390_Text *w2E8[11];
    S_000DA390_Obj *w314[4];
    S_000DA390_Obj *w324[2];
    float positions[11];
    C_000DA390 *func_000DA390(int a, int b, int c);
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(void *w, int v);
};

C_000DA390 *C_000DA390::func_000DA390(int a, int b, int c)
{
    int i;
    int j;

    func_001BE4F0(a, b, c);
    D_002A8490->p2EC->func_0018C160((int)&D_00278690);
    D_002A8490->p2EC->func_0018C160((int)&D_002786A0);
    D_002A8490->p2EC->func_0018C160((int)&D_00278678);
    for (i = 0; i < 11; i++) {
        S_000DA390_Text *p = (S_000DA390_Text *)func_001E8A44(0x184);
        p = p ? p->func_001B12C0(1) : 0;
        w2E8[i] = p;
        w2E8[i]->func_001B13A0((const char *)&D_002786A0, D_0027F6F4, 0, 0x28);
        float y = i * D_002757F0 + D_0027F6F0;
        positions[i] = y;
        w2E8[i]->func_001B1A30(320.0f, y, 0);
        w2E8[i]->func_001B2270(0xffcccccc);
        w2E8[i]->func_001B19A0(D_0028F5E0);
        func_001577A0(w2E8[i], -1);
    }
    w2E8[0]->func_001B17D0(D_0027F6E4);
    w2E8[1]->func_001B17D0(D_0027F6D8);
    w2E8[2]->func_001B17D0(D_0027F6CC);
    w2E8[3]->func_001B17D0(D_0027F6C0);
    w2E8[4]->func_001B17D0(D_0027F6B0);
    w2E8[5]->func_001B17D0(D_0027F6A0);
    w2E8[6]->func_001B17D0(D_0027F694);
    w2E8[7]->func_001B17D0(D_0027F684);
    w2E8[8]->func_001B17D0(D_0027F678);
    w2E8[9]->func_001B17D0(D_0027F66C);
    w2E8[10]->func_001B17D0(D_0027F65C);
    for (i = 0; i < 4; i++) {
        S_000DA390_Obj *p = (S_000DA390_Obj *)func_001E8A44(0x64);
        w314[i] = p ? p->func_001D5760() : 0;
    }
    w314[0]->func_001D5810(D_002786B0, 100.0f, 90.0f, 0);
    w314[0]->depth(0x435d0000);
    w314[0]->color();
    w314[1]->func_001D5810(D_002786B0, 321.0f, 90.0f, 0);
    w314[1]->depth(0x435d0000);
    w314[1]->color();
    w314[1]->coords(1.0f, 0.0f, 0.0f, 1.0f);
    w314[2]->func_001D5810(D_002786B0, 321.0f, 361.0f, 0);
    w314[2]->depth(0x435d0000);
    w314[2]->color();
    w314[2]->pos(0x43a08000, 0x43b48000);
    w314[2]->angle(0x40490fd9);
    w314[2]->coords(1.0f, 0.0f, 0.0f, 1.0f);
    w314[3]->func_001D5810(D_002786B0, 542.0f, 361.0f, 0);
    w314[3]->depth(0x435d0000);
    w314[3]->color();
    w314[3]->pos(0x44078000, 0x43b48000);
    w314[3]->angle(0x40490fd9);
    for (j = 0; j < 2; j++) {
        S_000DA390_Obj *p = (S_000DA390_Obj *)func_001E8A44(0x64);
        w324[j] = p ? p->func_001D5760() : 0;
        if (j == 0) {
            w324[j]->func_001D5810(D_0027E328, 309.0f, 82.0f, 0);
        } else {
            w324[j]->func_001D5810(D_0027E31C, 309.0f, 350.0f, 0);
        }
        w324[j]->color();
    }
    return this;
}

int DA_Page::func_000DAAB0(int a, int key) {
 char *o=owner;
 DA_Call *sound=*(DA_Call **)(o+0x24);
 int blocked;
 blocked=(*(DA_Call **)(*(char **)(o+0x25c)+0x74))->func_000301D0() ||
 (((f280 || f284) && !f288)) ||
 !(*(DA_Call **)(o+0x270))->func_000B5870() || !f2a4;
 if(blocked) return 0;
 if(key==(*(DA_Call **)((char*)D_002A8490+8))->func_00136170(2,2,0)) {
 f2b8=f2b4;
 if(f2b4>0) { --f2b4; f2b0=f2b4; }
 if(f2b4!=f2b8) { f2bc=1; sound->func_000B9A80(2,1); }
 int selected=f2b4;
 if(f2c4==selected) {
 f2c4=selected-1; f2c8=0; --f2c0;
 if(!f2cc) { float *p=positions; int n=11; do { double v=*p; *p++ = v+D_002757F0; }while(--n); f2d0=1; }
 if(!f2b4) f2cc=1;
 }
 } else if(key==(*(DA_Call **)((char*)D_002A8490+8))->func_00136170(3,2,0)) {
 f2b8=f2b4;
 if(f2b4<10) { ++f2b4; f2b0=f2b4; }
 if(f2b4!=f2b8) { f2bc=1; sound->func_000B9A80(2,1); }
 if(f2b4>4 && f2b4<=12 && f2c0==f2b4) {
 ++f2c4; f2c0=f2b4+1; f2cc=0;
 if(!f2c8) { float *p=positions; int n=11; while(n) { *p++ -= D_002757F0; --n; } f2d0=1; if(f2b4==12) f2c8=1; }
 }
 } else if(key==(*(DA_Call **)((char*)D_002A8490+8))->func_00136170(4,2,0) ||
 key==(*(DA_Call **)((char*)D_002A8490+8))->func_00136170(23,2,0)) {
 if(!f280) { sound->func_000B9A80(4,1); f2a0=1; }
 if(!f288) { f294=0; f280=1; f28c=key; f290=a; return f288; }
 switch(f2b4) {
case 0: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=28; f2b0=0; *(int*)(o+0x2a8)=0; break;
case 1: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=28; f2b0=1; *(int*)(o+0x2a8)=1; break;
case 2: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=28; f2b0=2; *(int*)(o+0x2a8)=2; break;
case 3: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=28; f2b0=3; *(int*)(o+0x2a8)=3; break;
case 4: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=28; f2b0=4; *(int*)(o+0x2a8)=4; break;
case 5: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=28; f2b0=6; *(int*)(o+0x2a8)=6; break;
case 6: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=28; f2b0=5; *(int*)(o+0x2a8)=5; break;
case 7: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=28; f2b0=9; *(int*)(o+0x2a8)=9; break;
case 8: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=28; f2b0=7; *(int*)(o+0x2a8)=7; break;
case 9: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=28; f2b0=8; *(int*)(o+0x2a8)=8; break;
case 10: *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=29; f2b0=10; break;
 } f280=0; f288=0;
 } else if(key==(*(DA_Call **)((char*)D_002A8490+8))->func_00136170(5,2,0) ||
 key==(*(DA_Call **)((char*)D_002A8490+8))->func_00136170(24,2,0)) {
 if(f284) { sound->func_000B9A80(1,1); (*(DA_Call **)(*(char **)((char*)D_002A8490+0x2e0)+0x2fc))->func_00094E40(2,1,500); f2a0=1; }
 f284=1; f294=0; f28c=key; f290=a;
 if(f288) { *(int*)(owner+0x138)=7; *(int*)(owner+0x134)=24; } else return f288;
 }
 return 1;
}

void C_000DB0E0::func_000DB0E0(void)
{
    int ids[3];
    int i;
    int *r;
    ClampObj_DA *o;
    LookupObj_DA *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((MidObj_DA *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    func_001578D0();
}

void C_000DB180::func_000DB180(void)
{
    int i;

    for (i = 0; i < 2; i++) {
        D_002B91AC->arr38[i]->func_001D6600();
    }
    D_002B91AC->f34->func_001D6600();
    if (f2BC) {
        for (i = 0; i < 11; i++) {
            w2E8[i]->func_001B1980();
            if (f2D0) {
                if (i == f2B4)
                    w2E8[i]->func_001B1A30(320.0f, f314[i + 6] - D_00275600, 0.5f);
                else
                    w2E8[i]->func_001B1A30(320.0f, f314[i + 6], 0.5f);
            } else {
                if (i == f2B4)
                    w2E8[i]->func_001B1A30(320.0f, f314[i + 6] - D_00275600, 0.0f);
                else
                    w2E8[i]->func_001B1A30(320.0f, f314[i + 6], 0.0f);
            }
            if (i == f2B4) {
                w2E8[i]->func_001B2270(0xffbfa35a);
                w2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0xff, 1.45f, 0, 0, 0.2f, 0);
            } else if (i == f2B8) {
                w2E8[i]->func_001B2270(0xffcccccc);
                w2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.45f, 0, 0, 0, 0xff, 1.15f, 0, 0, 0.2f, 0);
            } else {
                w2E8[i]->func_001B2270(0xffcccccc);
                w2E8[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
            }
            if (f314[i + 6] > D_00279B50 || f314[i + 6] < D_0027F718) {
                w2E8[i]->func_001B1980();
            }
        }
        f2BC = 0;
    }
}

