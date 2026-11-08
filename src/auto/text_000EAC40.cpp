/* 9 functions from 0x000EAC40 to 0x000EBB70, found by Ghidra. */
#include "common.h"

extern int D_00281B34;

struct C_NumHorse_Lookup { int *func_0018C160(int a); };
/* string table of the settings record */
struct S_000EB460_Strings {
    char pad0[0x7C8];
    char *f7C8;
    char pad7CC[0x900 - 0x7CC];
    char *f900;
    char pad904[0x918 - 0x904];
    char *f918;
    char pad91C[0x978 - 0x91C];
    char *f978;
};

struct S_000EB460_Mid {
    int f0;
    S_000EB460_Strings *f4;
};

struct C_NumHorse_Root { char pad0[0x2E8]; S_000EB460_Mid *p2E8; C_NumHorse_Lookup *p2EC; };
struct C_NumHorse_Clamp { char pad0[0x10]; float f10, f14; };
struct C_NumHorse_Mid { C_NumHorse_Clamp *func_0018C070(); };
struct C_NumHorse_Sub {
    char pad0[0x38];
    int f38;
    char pad3C[0x58 - 0x3C];
    unsigned char b58;
    C_NumHorse_Clamp *func_001D5AA0();
    void func_001D5AD0();
};
struct S_000EB1F0_Svc { int func_000301D0(); };
struct S_000EB1F0_Owner { char pad0[0x74]; S_000EB1F0_Svc *f74; };
struct S_EAC_Action { void func_000B9A80(int, int); };
struct S_EAC_Input { int func_00136170(int, int, int); };
struct S_EAC_Sound { void func_00094E40(int, int, int); };
extern int D_00281B18, D_00281B04;
struct S_000EB1F0_Mgr { char pad0[0x24]; S_EAC_Action *f24; char pad28[0x134-0x28]; int f134, f138; char pad13C[0x25C-0x13C]; S_000EB1F0_Owner *f25C; void func_000BB380(int *); };
struct S_000EB1F0_Page { int f0; int pad4[11]; int f30; void func_001BDE90(int); void func_001BDF00(int); };
struct S_000EB1F0_Sel { int f0; S_000EB1F0_Page *f4; };
extern C_NumHorse_Root *D_002A8490;

/* the HUD: text labels at +0x34/+0x38/+0x80/+0x84, func_000BF860 places one */
struct S_000EB460_Label {
    void func_0005E840(char *s);
};

struct S_000EB460_Hud {
    char pad0[0x24];
    C_NumHorse_Sub *f24, *f28, *f2C, *f30;
    S_000EB460_Label *f34;
    S_000EB460_Label *f38;
    char pad3C[0x50 - 0x3C];
    C_NumHorse_Sub *f50;
    char pad54[0x68 - 0x54];
    C_NumHorse_Sub *f68;
    char pad6C[0x80 - 0x6C];
    S_000EB460_Label *f80;
    S_000EB460_Label *f84;
    C_NumHorse_Sub *f88, *f8C, *f90, *f94;
    void func_000BF860(int a, int b, int c, int d);
};

extern S_000EB460_Hud *D_002B91AC;
extern float D_00275AEC;
extern int D_002786A0, D_00278690, D_00278678;
struct BmxUIPageHOFTitle {
    char pad0[0x124];
    S_000EB1F0_Mgr *f124;
    char pad128[0x140 - 0x128];
    S_000EB1F0_Sel *f140;
    char pad144[0x284 - 0x144];
    int f284, f288, f28C;
    int f290;
    int f294, f298;
    int f29C;
    int f2A0;
    int f2A4, f2A8, f2AC, f2B0;
    char pad2B4[0x2C4 - 0x2B4];
    int func_000EAC40(int a, int b);
    int func_001BF050(int);
    short f2C4;
    char pad2C6[0x2D0 - 0x2C6];
    C_NumHorse_Sub *arr2D0[12];
    void func_000EB0F0();
    void func_001578D0();
    void func_000C5E40(void);
    void func_000EB1F0(void);
    void func_00157960(void);
    void func_000EB350(void);
};

struct S_000EB420_Obj {
    virtual void destroying(int flag);
    char pad4[0x24];
    int f28;
    char pad2C[0x10];
    int f3C;
    int f40;
    int f44;
    int f48;
    char pad4C[0xC];
    unsigned char f58;
    S_000EB420_Obj *func_001D5760(void);
    void func_001D5810(void *a, float b, float c, int d);
};

void *func_001E8A44(int size);
extern int D_002786B0;
extern float D_0027E140;

struct BmxUIPageMedia {
    void *vtbl;
    char pad_4[0x280 - 4];
    S_000EB420_Obj *unk280[4];
    int unk290;
    char pad_294[4];
    int unk298;
    int unk29C;
    int unk2A0;
    int unk2A4;
    int unk2A8;
    int unk2AC;
    int unk2B0;
    int unk2B4;
    int unk2B8;
    int unk2BC;
    int unk2C0;
    int unk2C4;
    int unk2C8;
    int unk2CC;
    int unk2D0;
    int unk2D4;
    int unk2D8;
    BmxUIPageMedia *func_000EB370(void *param_1);
    void func_000EB460(void);
    void func_000EB6B0(void);
    void func_001578D0(void);
    void func_000EB420(void);
    void func_001BE360(void *param_1);
    void func_001BE3F0(void);
    void func_001BE4F0(int a, int b, int c);
    BmxUIPageMedia *func_000EB570(int a, int b, int c);
};

int BmxUIPageHOFTitle::func_000EAC40(int a, int b)
{
 S_000EB1F0_Mgr *mgr = f124;
 S_EAC_Action *action = mgr->f24;
 if (mgr->f25C->f74->func_000301D0() || f124->f138 == 4 || f124->f138 == 3 || !f2B0) return 0;
 if ((f290 || f29C || f2A0) && !f298) return 0;
 if (b == (*(S_EAC_Input **)((char *)D_002A8490+8))->func_00136170(4,2,0) ||
     b == (*(S_EAC_Input **)((char *)D_002A8490+8))->func_00136170(23,2,0)) {
   if (!f290) {
     if (!((BmxUIPageHOFTitle *)mgr)->f2A4) f2A8=1;
     action->func_000B9A80(4,1);
   }
   int ready=f298;
   f290=1; f28C=0; f284=b; f288=a;
   if (!ready) return 0;
   goto confirm;
 } else if (b == (*(S_EAC_Input **)((char *)D_002A8490+8))->func_00136170(3,2,0)) {
   action->func_000B9A80(2,1); f140->f4->func_001BDE90(0); f2AC=f140->f4->f30;
 } else if (b == (*(S_EAC_Input **)((char *)D_002A8490+8))->func_00136170(2,2,0)) {
   action->func_000B9A80(2,1); f140->f4->func_001BDF00(0); f2AC=f140->f4->f30;
 } else if (b == (*(S_EAC_Input **)((char *)D_002A8490+8))->func_00136170(0,2,0)) {
   if (!f29C) { f2A8=1; action->func_000B9A80(2,1); }
   if (!f298) { f29C=1; f28C=0; f284=b; f288=a; return 0; }
   f124->f138=7; f124->f134=12; mgr->func_000BB380(&D_00281B18);
 } else if (b == (*(S_EAC_Input **)((char *)D_002A8490+8))->func_00136170(1,2,0)) {
   if (!f2A0) { f2A8=1; action->func_000B9A80(2,1); }
   if (!f298) { f2A0=1; f28C=0; f284=b; f288=a; return 0; }
   f124->f138=7; f124->f134=4; mgr->func_000BB380(&D_00281B04);
 }
 goto done;
confirm:
   switch(func_001BF050(1)) {
   case 1: f2AC=1; f124->f138=7; f124->f134=6; (*(S_EAC_Sound **)(*(char **)((char *)D_002A8490+0x2E0)+0x2FC))->func_00094E40(2,100,500); break;
   case 2: f2AC=2; f124->f138=7; f124->f134=16; (*(S_EAC_Sound **)(*(char **)((char *)D_002A8490+0x2E0)+0x2FC))->func_00094E40(2,100,500); break;
   case 3: f2AC=3; f124->f138=7; f124->f134=17; (*(S_EAC_Sound **)(*(char **)((char *)D_002A8490+0x2E0)+0x2FC))->func_00094E40(2,100,500); break;
   case 4: f2AC=4; f124->f138=7; f124->f134=18; (*(S_EAC_Sound **)(*(char **)((char *)D_002A8490+0x2E0)+0x2FC))->func_00094E40(2,100,500); break;
   case 5: f2AC=5; f124->f138=7; f124->f134=19; (*(S_EAC_Sound **)(*(char **)((char *)D_002A8490+0x2E0)+0x2FC))->func_00094E40(2,100,500); break;
   case 6: f2AC=6; f124->f138=7; f124->f134=32; (*(S_EAC_Sound **)(*(char **)((char *)D_002A8490+0x2E0)+0x2FC))->func_00094E40(2,100,500); break;
   default: break;
   }
done:
 return 1;
}

void BmxUIPageHOFTitle::func_000EB0F0()
{
    int ids[3];
    int i;
    int *r;
    C_NumHorse_Clamp *o;
    C_NumHorse_Sub **e;
    C_NumHorse_Lookup *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((C_NumHorse_Mid *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = arr2D0;
    i = 12;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    func_001578D0();
}

void BmxUIPageHOFTitle::func_000EB1F0(void)
{
    C_NumHorse_Sub *m;
    C_NumHorse_Sub *e;
    S_000EB460_Hud *s;
    S_000EB1F0_Owner *owner;
    int n;
    int i;

    owner = f124->f25C;
    if (owner->f74->func_000301D0() == 0) {
        if (f290)
            m = D_002B91AC->f68;
        else
            m = D_002B91AC->f50;
        m->func_001D5AD0();
    }
    if (f29C)
        m = D_002B91AC->f90;
    else
        m = D_002B91AC->f88;
    m->func_001D5AD0();
    if (f2A0)
        m = D_002B91AC->f94;
    else
        m = D_002B91AC->f8C;
    m->func_001D5AD0();
    n = f140->f4->f30 - 1;
    for (i = 0; i < 12; i++) {
        e = arr2D0[i];
        e->f38 = ((int)f2C4 << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
        if (i == n * 2 || i == n * 2 + 1) {
            e = arr2D0[i];
            e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
            e->b58 |= 2;
            arr2D0[i]->func_001D5AD0();
        } else {
            e = arr2D0[i];
            e->f38 = (e->f38 & 0xffcccccc) | 0xcccccc;
            e->b58 |= 2;
        }
    }
    s = D_002B91AC;
    s->f24->func_001D5AD0();
    s->f28->func_001D5AD0();
    s->f2C->func_001D5AD0();
    s->f30->func_001D5AD0();
}

void BmxUIPageHOFTitle::func_000EB350(void)
{
    func_000C5E40();
    func_000EB1F0();
    func_00157960();
}

BmxUIPageMedia *BmxUIPageMedia::func_000EB370(void *param_1)
{
    func_001BE360(param_1);
    unk29C = 0;
    unk2B0 = 0;
    unk2AC = 0;
    unk298 = 0;
    unk2A8 = 0;
    unk2A4 = 0;
    unk2A0 = 0;
    unk2B4 = 0;
    unk2B8 = 0;
    unk2BC = 0;
    unk2C4 = 0;
    unk2C0 = 0;
    vtbl = (void *)&D_00281B34;
    unk290 = 1;
    for (int i = 0; i < 4; i++)
        unk280[i] = 0;
    unk2C8 = 0;
    unk2CC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    unk2D8 = 0;
    return this;
}

void BmxUIPageMedia::func_000EB420(void)
{
    int i;
    vtbl = (void *)&D_00281B34;
    for (i = 0; i < 4; i++) {
        if (unk280[i] != 0) {
            unk280[i]->destroying(1);
            unk280[i] = 0;
        }
    }
    func_001BE3F0();
}

void BmxUIPageMedia::func_000EB460(void)
{
    unk2B4 = 1;
    unk29C = 0;
    unk2B0 = 0;
    unk2AC = 0;
    unk298 = 0;
    unk2A0 = 0;
    unk2BC = 0;
    unk2C4 = 0;
    unk2C0 = 0;
    unk2C8 = 0;
    unk2CC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    unk2D8 = 0;
    D_002B91AC->f34->func_0005E840(D_002A8490->p2E8->f4->f918);
    D_002B91AC->func_000BF860(0, 0x1EB, 0x184, 0);
    D_002B91AC->f38->func_0005E840(D_002A8490->p2E8->f4->f7C8);
    D_002B91AC->f80->func_0005E840(D_002A8490->p2E8->f4->f900);
    D_002B91AC->f84->func_0005E840(D_002A8490->p2E8->f4->f978);
}

BmxUIPageMedia *BmxUIPageMedia::func_000EB570(int a, int b, int c)
{
    int i;
    S_000EB420_Obj *p;
    S_000EB420_Obj *o;

    func_001BE4F0(a, b, c);
    D_002A8490->p2EC->func_0018C160((int)&D_00278690);
    D_002A8490->p2EC->func_0018C160((int)&D_002786A0);
    D_002A8490->p2EC->func_0018C160((int)&D_00278678);
    for (i = 0; i < 4; i++) {
        p = (S_000EB420_Obj *)func_001E8A44(0x64);
        p = p != 0 ? p->func_001D5760() : 0;
        unk280[i] = p;
        if (i % 2 == 0) {
            p->func_001D5810(&D_002786B0, 100.0f, (float)(i / 2 * 40) + D_0027E140, 0);
        } else {
            p->func_001D5810(&D_002786B0, 321.0f, (float)(i / 2 * 40) + D_0027E140, 0);
            o = unk280[i];
            o->f3C = 0x3f800000;
            o->f40 = 0;
            o->f44 = 0;
            o->f48 = 0x3f800000;
            o->f58 |= 4;
        }
        o = unk280[i];
        if (o->f28 != 0x435d0000) {
            o->f28 = 0x435d0000;
            o->f58 |= 1;
        }
    }
    return this;
}

void BmxUIPageMedia::func_000EB6B0()
{
 int ids[3]; int i; int *r; C_NumHorse_Clamp *o; S_000EB420_Obj **e; C_NumHorse_Lookup *lk;
 ids[0]=(int)&D_002786A0; ids[1]=(int)&D_00278690; ids[2]=(int)&D_00278678;
 for(i=0;i<3;i++) {
 lk=D_002A8490->p2EC; r=lk->func_0018C160(ids[i]);
 if(r && *r) {
 o=((C_NumHorse_Mid *)*r)->func_0018C070();
 if(D_00275AEC>o->f10) *(int *)&o->f10=0x41200000;
 if(D_00275AEC<o->f14 || o->f14>o->f10) *(int *)&o->f14=0x41200000;
 }
 }
 e=unk280; i=4;
 do { if(*e) {
 o=((C_NumHorse_Sub *)*e)->func_001D5AA0();
 if(D_00275AEC>o->f10) *(int *)&o->f10=0x41200000;
 if(D_00275AEC<o->f14 || o->f14>o->f10) *(int *)&o->f14=0x41200000;
 } e++; i--; }while(i);
 func_001578D0();
}

