/* 8 functions from 0x000EC850 to 0x000ED850, found by Ghidra. */
#include "common.h"
struct C_000ECD90 {
    char pad0[0x364];
    int unk364;
    char pad368[0x18];
    int unk380;
    int unk384;
    int unk388;
    int unk38C;
    int unk390;
    void func_000ECD90(void);
};

struct C_001D5AD0 {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1C];
    union {
        unsigned char f58;
        struct {
            unsigned char b0 : 1;
            unsigned char b1 : 1;
            unsigned char rest : 6;
        } f58b;
    };
    void func_001D5AD0(void);
};
static __forceinline void SetColor_000ECC60(C_001D5AD0 *p, unsigned int color) {
    unsigned int c = (p->f38 & 0xff000000) | color;
    unsigned char flags = p->f58 | 2;
    p->f38 = c;
    p->f58 = flags;
}
extern int D_0028F5E0;
struct C_000ECDC0_Obj {
    void func_00093A00(float a, float b, int c, int d, int e, float f);
};
struct C_000ECDC0 {
    char pad0[0x320];
    C_001D5AD0 *f320;
    int f324;
    char pad328[8];
    int f330;
    char pad334[0x10];
    C_000ECDC0_Obj *f344;
    int f348, f34C, f350, f354, f358, f35C;
    int f360, f364, f368, f36C, f370, f374, f378, f37C;
    int f380, f384, f388, f38C, f390, f394, f398, f39C;
    void func_000EC5E0();
    void func_000EC6F0();
    void func_000EC580();
    void func_000EC4A0();
    void func_000EC7E0();
    void func_000ECC60();
    void func_00157960();
    void func_000ECDC0();
};
struct S_000ED170_Obj {
    void func_0005E840(char *s);
};

struct S_002B91AC {
    char pad0[0x24];
    C_001D5AD0 *unk24;
    C_001D5AD0 *unk28;
    C_001D5AD0 *unk2C;
    C_001D5AD0 *unk30;
    S_000ED170_Obj *f34;
    S_000ED170_Obj *f38;
    S_000ED170_Obj *f3c;
    char pad40[0x10];
    void func_000BF860(int a, int b, int c, int d);
    C_001D5AD0 *unk50;
    C_001D5AD0 *unk54;
    char pad58[0x10];
    C_001D5AD0 *unk68;
    C_001D5AD0 *unk6C;
};
extern S_002B91AC *D_002B91AC;
struct C_000ECC60_124 {
    char pad0[0x138];
    int f138;
};
struct C_000ECC60 {
    char pad0[0x124];
    C_000ECC60_124 *f124;
    char pad128[0x178];
    C_001D5AD0 *f2A0[16];
    char pad2E0[0x2C];
    int f30C;
    int f310;
    char pad314[0x10];
    int f324;
    char pad328[8];
    int f330;
    char pad334[8];
    int f33C;
    char pad340[0x1C];
    int f35C;
    char pad360[0x28];
    short f388;
    void func_000ECC60(void);
};

extern void *D_00281C8C;
struct C_000ED0E0_Obj {
    virtual void Destroy(int flags);
};
struct C_000ED0E0 {
    void *vtbl;
    char pad4[0x284];
    C_000ED0E0_Obj *f288;
    char pad28C[0x138];
    int f3C4;
    int f3C8;
    char pad3CC[0xC];
    int f3D8;
    char pad3DC[8];
    int f3E4[11];
    char pad410[0xA8];
    C_000ED0E0_Obj *f4B8[4];
    C_000ED0E0_Obj *f4C8[2];
    void func_001BE3F0(void);
    void func_000ED0E0(void);
};

struct C_000ECF80 {
    void *vtbl;
    char pad4[0x27c];
    int f280, f284, f288, f28C;
    char pad290[4];
    int f294, f298, f29C, f2A0, f2A4, f2A8, f2AC;
    char f2B0;
    char pad2B1[0x103];
    int f3B4, f3B8, f3BC;
    char pad3C0[4];
    int f3C4, f3C8, f3CC, f3D0, f3D4;
    char pad3D8[4];
    int f3DC;
    char pad3E0[0x30];
    int f410, f414, f418, f41C, f420, f424, f428;
    int f42C, f430, f434, f438, f43C;
    char pad440[4];
    int f444, f448, f44C, f450, f454, f458, f45C;
    int f460[11];
    int f48C[11];
    C_000ED0E0_Obj *f4B8[4];
    C_000ED0E0_Obj *f4C8[2];
    int f4D0[11];
    void func_001BE360(int a);
    C_000ECF80 *func_000ECF80(int a);
};

struct S_000ED170_Strings {
    char pad0[0x7C8];
    char *f7C8;
    char pad7CC[0x838 - 0x7CC];
    char *f838;
    char pad83C[0xA58 - 0x83C];
    char *fA58;
};

struct S_000ED170_Mid {
    int f0;
    S_000ED170_Strings *f4;
};

struct S_000ED170_Global {
    char pad0[0x2E8];
    S_000ED170_Mid *f2E8;
    struct E300_Lib *f2EC;
};

struct S_000ED170_Ed {
    char pad0[0x274];
    int f274;
};

extern S_000ED170_Global *D_002A8490;
int func_00092A10(void);

struct C_000ED170 {
    char pad0[0x124];
    S_000ED170_Ed *f124;
    char pad128[0x164];
    int f28C;
    char pad290[4];
    int f294;
    char pad298[4];
    int f29C, f2A0, f2A4, f2A8;
    char pad2AC[0x10c];
    int f3B8;
    char pad3BC[8];
    int f3C4;
    char pad3C8[8];
    int f3D0, f3D4, f3D8, f3DC;
    char pad3E0[4];
    int f3E4[11];
    int f410, f414, f418, f41C, f420, f424, f428;
    int f42C, f430, f434, f438, f43C;
    char pad440[4];
    int f444;
    char pad448[0x14];
    int f45C;
    char pad460[0x70];
    int f4D0[11];
    void func_000ED170(void);
};

extern char D_002786A0[], D_00278690[], D_00278678[];
extern float D_00275AEC;
struct C_000EC850_Range {
    float pad0[4];
    float f10;
    float f14;
    void Clamp() {
        if (D_00275AEC > f10)
            f10 = 10.0f;
        if (D_00275AEC < f14 || f14 > f10)
            f14 = 10.0f;
    }
};
struct C_000EC850_Node {
    C_000EC850_Range *func_0018C070();
};
struct C_000EC850_Lib {
    C_000EC850_Node **func_0018C160(char *name);
};
struct C_000EC850_Glob {
    char pad0[0x2EC];
    C_000EC850_Lib *f2EC;
};
struct C_000EC850_Ctl {
    C_000EC850_Range *func_001D5AA0();
};
struct C_000EC850 {
    char pad0[0x2A0];
    C_000EC850_Ctl *f2A0[16];
    char pad2E0[0x40];
    C_000EC850_Ctl *f320;
    void func_001578D0();
    void func_000EC850();
};

extern float D_00275AEC;
struct S_EC850_Obj {
    char pad0[0x10];
    float f10;
    float f14;
};

struct E300_Spr {
    char pad0[0x28];
    float f28;
    float f2C;
    char pad30[8];
    unsigned int f38;
    float f3C, f40, f44, f48;
    char pad4C[0xC];
    unsigned char f58;
    E300_Spr *func_001D5760();
    void func_001D5810(char *name, float a, float b, int c);
    void SetColor() {
        f38 = (f38 & 0xffbfa35a) | 0xbfa35a;
        f58 |= 2;
    }
};
void *func_001E8A44(unsigned int n);
struct E300_Txt {
    E300_Txt *func_001B12C0(int a);
    void func_001B13A0(char *a, char *b, int c, int d);
    void func_001B1A30(float a, float b, int c);
    void func_001B2270(int c);
    void func_001B19A0(int c);
};
struct E300_Lib {
    void func_0018C160(char *name);
};
extern char D_0027E52C[], D_002786B0[], D_0027E328[], D_0027E31C[];
extern float D_00279F6C, D_0027F978;
struct C_000ED300 {
    char pad0[0x288];
    E300_Spr *f288;
    char pad28C[0x1D4];
    float f460[11];
    E300_Txt *f48C[11];
    E300_Spr *f4B8[4];
    E300_Spr *f4C8[2];
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(E300_Txt *t, int x);
    C_000ED300 *func_000ED300(int a, int b, int c);
};

void C_000EC850::func_000EC850()
{
    char *ids[3];
    int i;
    C_000EC850_Ctl **e;
    ids[0] = D_002786A0;
    ids[1] = D_00278690;
    ids[2] = D_00278678;
    for (i = 0; i < 3; i++) {
        C_000EC850_Lib *lk = ((C_000EC850_Glob *)D_002A8490)->f2EC;
        C_000EC850_Node **r = lk->func_0018C160(ids[i]);
        if (r && *r) {
            C_000EC850_Range *o = (*r)->func_0018C070();
            if (D_00275AEC > o->f10) o->f10 = 10.0f;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f;
        }
    }
    if (f320) {
        C_000EC850_Range *o = f320->func_001D5AA0();
        if (D_00275AEC > o->f10) o->f10 = 10.0f;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f;
    }
    e = f2A0;
    i = 16;
    do {
        if (*e) {
            C_000EC850_Range *o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) o->f10 = 10.0f;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) o->f14 = 10.0f;
        }
        e++;
        i--;
    } while (i);
    func_001578D0();
}

void C_000ECC60::func_000ECC60(void) {
    C_001D5AD0 *p;
    S_002B91AC *s;
    C_001D5AD0 **ptr;
    int i;
    if (f330 != 0) goto skip;
    if (f324 > 0 || f35C != 0) {
        p = f30C ? D_002B91AC->unk68 : D_002B91AC->unk50;
        p->func_001D5AD0();
    }
    if (f35C == 0 && f124->f138 == 0) {
        p = f310 ? D_002B91AC->unk6C : D_002B91AC->unk54;
        p->func_001D5AD0();
    }
skip:
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
    i = 0;
    ptr = f2A0;
    do {
        if (i == f33C * 2 || i == f33C * 2 + 1) {
            p = *ptr;
            p->f38 = (p->f38 & 0xffffff) | (f388 << 24);
            p->f58 |= 2;
            p = *ptr;
            p->f38 = (p->f38 & 0xff000000) | 0xbfa35a;
            p->f58 |= 2;
        } else {
            p = *ptr;
            unsigned int color = (p->f38 & 0xff000000) | 0xcccccc;
            unsigned char flags = p->f58 | 2;
            *(volatile unsigned int *)&p->f38 = color;
            p->f58 = flags;
        }
        (*ptr)->func_001D5AD0();
        i++;
        ptr++;
    } while (i < 16);
}

void C_000ECD90::func_000ECD90(void) {
    unk380 = 0;
    unk384 = 255;
    unk388 = unk364;
    unk38C = 0;
    unk390 = 1048576000;
}

void C_000ECDC0::func_000ECDC0() {
 if (f34C && !f330) {
  f398=0; f39C=1; func_000EC5E0();
  f380=255; f384=0; f388=f364; f38C=0; f390=0x3e800000; f34C=0;
 }
 if(f350) {
  func_000EC6F0();
  f380=255; f384=0; f388=f364; f38C=0; f390=0x3e800000; f350=0;
 }
 if(f354) { if(!f324) func_000EC580(); else func_000EC4A0(); f354=0; }
 if(f374) { f360=178; f364=0; f368=0; f36C=0; f370=0x3e800000; f374=0; }
 if(f378) { f360=0; f364=178; f368=178; f36C=0; f370=0x3f800000; f378=0; }
 if(f330 || f35C) {
  C_001D5AD0 *p = f320;
  unsigned int color = (p->f38 & 0xffffff) | ((short)f368 << 24);
  unsigned char flags = p->f58 | 2;
  p->f38 = color;
  p->f58 = flags;
  f320->func_001D5AD0();
  if(!f394) { f344->func_00093A00(320.0f,80.0f,D_0028F5E0,1,0,0.25f); f394=1; }
 }
 func_000EC7E0(); func_000ECC60(); func_00157960();
}

C_000ECF80 *C_000ECF80::func_000ECF80(int a) {
    int i;
    func_001BE360(a);
    vtbl = &D_00281C8C;
    f280 = 0;
    f284 = 0;
    f288 = 0;
    f28C = 0;
    f298 = 0;
    f29C = 0;
    f2A0 = 0;
    f2A4 = 0;
    f2A8 = 0;
    f2AC = 0;
    f2B0 = 0;
    f294 = 0;
    f3B4 = 0;
    f3BC = 0;
    f3B8 = 0;
    f3C4 = 0;
    f3C8 = 0;
    f3CC = 0;
    f3D0 = 0;
    f3D4 = -1;
    f3DC = 0;
    f418 = 0;
    f41C = 0;
    f420 = 0;
    f424 = 0;
    f428 = 0;
    f414 = 0;
    f410 = 0;
    for (i = 0; i < 4; i++) f4B8[i] = 0;
    for (i = 0; i < 2; i++) f4C8[i] = 0;
    f444 = 0;
    f42C = 0;
    f430 = 0;
    f434 = 0;
    f438 = 0;
    f43C = 0;
    for (i = 0; i < 11; i++) {
        f460[i] = 0;
        f48C[i] = 0;
        f4D0[i] = 0;
    }
    f458 = 0;
    f450 = 0;
    f45C = 0;
    f448 = -1;
    f44C = 7;
    f454 = 1;
    return this;
}

void C_000ED0E0::func_000ED0E0(void) {
    int i;
    vtbl = &D_00281C8C;
    if (f288 != 0) {
        f288->Destroy(1);
        f288 = 0;
    }
    f3C4 = 0;
    f3C8 = 0;
    f3D8 = 0;
    for (i = 0; i < 11; i++) f3E4[i] = 0;
    for (i = 0; i < 4; i++) {
        if (f4B8[i] != 0) {
            f4B8[i]->Destroy(1);
            f4B8[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (f4C8[i] != 0) {
            f4C8[i]->Destroy(1);
            f4C8[i] = 0;
        }
    }
    func_001BE3F0();
}

void C_000ED170::func_000ED170(void)
{
    int i;

    f2A0 = 0;
    f2A4 = 0;
    f2A8 = 0;
    f29C = 3;
    f3B8 = f124->f274;
    if (func_00092A10() != 0) {
        f28C = 1;
        f3C4 = 0;
    } else {
        f294 = 1;
        f3C4 = 1;
    }
    f3D8 = 0;
    f414 = 0;
    f410 = 0;
    f418 = 0;
    f41C = 0;
    f420 = 0;
    f424 = 0;
    f428 = 0;
    f42C = 0;
    f430 = 0;
    f434 = 0;
    f438 = 0;
    f43C = 0;
    f3D0 = 0;
    f3D4 = -1;
    f3DC = 0;
    for (i = 0; i < 11; i++) {
        f3E4[i] = 0;
        f4D0[i] = 0;
    }
    f444 = 0;
    f45C = 0;
    D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4->fA58);
    D_002B91AC->func_000BF860(0, 0x1EB, 0x184, 0);
    D_002B91AC->f38->func_0005E840(D_002A8490->f2E8->f4->f7C8);
    D_002B91AC->func_000BF860(1, 0x17B, 0x184, 0);
    D_002B91AC->f3c->func_0005E840(D_002A8490->f2E8->f4->f838);
}

C_000ED300 *C_000ED300::func_000ED300(int a, int b, int c) {
    int i;
    void *p;
    E300_Spr *s;
    unsigned char fl;
    func_001BE4F0(a, b, c);
    D_002A8490->f2EC->func_0018C160(D_002786A0);
    D_002A8490->f2EC->func_0018C160(D_00278690);
    D_002A8490->f2EC->func_0018C160(D_00278678);
    p = func_001E8A44(0x64);
    f288 = p ? ((E300_Spr *)p)->func_001D5760() : 0;
    f288->func_001D5810(D_0027E52C, 0, 70.0f, 0);
    s = f288;
    if (s->f2C != 308.0f) { s->f2C = 308.0f; s->f58 |= 1; }
    s = f288;
    if (s->f28 != 640.0f) { s->f28 = 640.0f; s->f58 |= 1; }
    s = f288;
    fl = s->f58 | 2;
    *((char *)s + 0x3b) = 0;
    s->f58 = fl;
    for (i = 0; i < 11; i++) {
        p = func_001E8A44(0x184);
        f48C[i] = p ? ((E300_Txt *)p)->func_001B12C0(1) : 0;
        f48C[i]->func_001B13A0(D_002786A0, D_002786A0, 0, 40);
        f460[i] = i * D_00279F6C + D_0027F978;
        f48C[i]->func_001B1A30(320.0f, f460[i], 0);
        f48C[i]->func_001B2270(0xffcccccc);
        f48C[i]->func_001B19A0(D_0028F5E0);
        func_001577A0(f48C[i], -1);
    }
    for (i = 0; i < 4; i++) {
        p = func_001E8A44(0x64);
        f4B8[i] = p ? ((E300_Spr *)p)->func_001D5760() : 0;
    }
    f4B8[0]->func_001D5810(D_002786B0, 100.0f, 90.0f, 0);
    s = f4B8[0];
    if (s->f28 != 221.0f) { fl = s->f58 | 1; s->f28 = 221.0f; s->f58 = fl; }
    f4B8[0]->SetColor();
    f4B8[1]->func_001D5810(D_002786B0, 321.0f, 90.0f, 0);
    s = f4B8[1];
    if (s->f28 != 221.0f) { fl = s->f58 | 1; s->f28 = 221.0f; s->f58 = fl; }
    f4B8[1]->SetColor();
    s = f4B8[1];
    fl = s->f58 | 4;
    s->f3C = 1.0f; s->f40 = 0; s->f44 = 0; s->f48 = 1.0f;
    s->f58 = fl;
    f4B8[2]->func_001D5810(D_002786B0, 100.0f, 325.0f, 0);
    s = f4B8[2];
    if (s->f28 != 221.0f) { fl = s->f58 | 1; s->f28 = 221.0f; s->f58 = fl; }
    f4B8[2]->SetColor();
    s = f4B8[2];
    fl = s->f58 | 4;
    s->f3C = 0; s->f40 = 1.0f; s->f44 = 1.0f; s->f48 = 0;
    s->f58 = fl;
    f4B8[3]->func_001D5810(D_002786B0, 321.0f, 325.0f, 0);
    s = f4B8[3];
    if (s->f28 != 221.0f) { fl = s->f58 | 1; s->f28 = 221.0f; s->f58 = fl; }
    f4B8[3]->SetColor();
    s = f4B8[3];
    fl = s->f58 | 4;
    s->f3C = 1.0f; s->f44 = 1.0f; s->f40 = 0; s->f48 = 0;
    s->f58 = fl;
    i = 0;
    do {
        p = func_001E8A44(0x64);
        f4C8[i] = p ? ((E300_Spr *)p)->func_001D5760() : 0;
        if (i == 0) f4C8[i]->func_001D5810(D_0027E328, 309.0f, 82.0f, 0);
        else f4C8[i]->func_001D5810(D_0027E31C, 309.0f, 350.0f, 0);
        f4C8[i]->SetColor();
    } while (++i < 2);
    return this;
}

