/* 6 functions from 0x000F0DC0 to 0x000F1D90, found by Ghidra. */
#include "common.h"
extern "C" void *func_001E8A44(unsigned int);
extern int D_0027E328, D_0027E31C, D_002786B0, D_00281DB4, D_00281DC0;
extern float D_002757F0, D_0027F978;
struct Elem_000F0DC0 {
 char pad0[0x14]; int x,y; char pad1C[0xc]; int width; int f2C; int angle; int f34; unsigned int color; int m0,m1,m2,m3; char pad4C[0xc]; unsigned char flags;
 Elem_000F0DC0 *func_001D5760();
 void func_001D5810(int,float,float,int);
 void setWidth(int v) { if(width!=v){width=v;flags|=1;} }
 void setColor() { color=(color&0xffbfa35a)|0xbfa35a;flags|=2; }
 void setPos(int a,int b) { if(x!=a||y!=b){x=a;y=b;flags|=1;} }
 void setAngle(int v) {if(angle!=v){angle=v;flags|=1;} }
 void setMatrix(){m0=0x3f800000;m1=0;m2=0;m3=0x3f800000;flags|=4;}
};
struct C_000F0DC0 {
 char pad0[0x3e8];
 Elem_000F0DC0 *a3e8[4], *a3f8[2], *a400[4], *a410[4];
 void func_001BE4F0(int,int,int);
 C_000F0DC0 *func_000F0DC0(int,int,int);
};

extern int D_0028248C;

struct C_001D6600 {
    void func_001D6600(void);
};

struct C_001D5AD0 {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1c];
    unsigned char f58;
    void func_001D5AD0();
};
struct S_002B91AC_000F1B60 {
    char pad0[0x24];
    C_001D5AD0 *unk24, *unk28, *unk2C, *unk30;
    C_001D6600 *f34;
    char pad38[0x18];
    C_001D5AD0 *unk50, *unk54;
    char pad58[0x10];
    C_001D5AD0 *unk68, *unk6C;
};
struct C_000F1BA0 {
    char pad0[0x280];
    int unk280, unk284;
    char pad288[0x144];
    short unk3CC;
    char pad3CE[0xa];
    int arr3D8[4];
    C_001D5AD0 *arr3E8[4], *arr3F8[2], *arr400[4], *arr410[4];
    void func_000F1BA0();
};

extern S_002B91AC_000F1B60 *D_002B91AC;

struct LookupObj_000F1980 {
    int *func_0018C160(int a);
};

/* input mapping object at D_002A8490+8 */
struct S_KeyMap_000F1580 {
    int func_00136170(int a, int b, int c);
};

struct S_Bubble_000F1580 {
    void func_00094E40(int a, int b, int c);
};

struct S_2E0_000F1580 {
    char pad0[0x2fc];
    S_Bubble_000F1580 *f2fc;
    char pad300[0x464 - 0x300];
    int f464;
};

struct GObjRoot_000F1980 {
    char pad0[8];
    S_KeyMap_000F1580 *f8;
    char padC[0x2e0 - 0xC];
    S_2E0_000F1580 *f2E0;
    char pad2E4[0x2ec - 0x2e4];
    LookupObj_000F1980 *p2EC;
};

extern GObjRoot_000F1980 *D_002A8490;

extern float D_00275AEC;
extern int D_00278690;
extern int D_002786A0;
extern int D_00278678;

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

/* BmxUIPageOtherVideos */
struct C_000F1980 {
    char pad0[0x3e8];
    SubElem_000F1980 *a3e8[4];
    SubElem_000F1980 *a3f8[2];
    SubElem_000F1980 *a400[4];
    SubElem_000F1980 *a410[4];
    void func_000F1980(void);
    void func_001578D0(void);
};

struct C_000F1B60 {
    void func_000F1B60(void);
};

struct BmxUIPageHPHChoice_000F1D00 {
    void *vtbl;
    char pad4[0x280 - 4];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    int unk294;
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
    void func_001BE360(int a0);
    BmxUIPageHPHChoice_000F1D00 *func_000F1D00(int a0);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_00275678[];
extern char D_002A64D0[];
extern char D_0027DFE4[];
extern char D_00282478[];
extern char D_0028246C[];
extern char D_0027DFF0[];

struct S_Prompt_000F1580 {
    void func_000B9A80(int a, int b);
};

struct S_Tab_000F1580 {
    char pad0[0x30];
    int f30;
    void func_001BDF00(int a);
    void func_001BDE90(int a);
};

struct S_Sel_000F1580 {
    char pad0[4];
    S_Tab_000F1580 *f4;
};

struct S_Text_000F1580 {
    char pad0[0x34];
    int f34;
    int f38;
    int func_000B5870(void);
    void func_000BC4A0(float a, float b);
    void func_000BC4C0(float a, float b);
    void func_00093280(float v);
    void func_000BC5D0(char *text, int flag);
};

struct S_Busy_000F1580 {
    int func_000301D0(void);
};

struct S_Owner_000F1580 {
    char pad0[0x74];
    S_Busy_000F1580 *f74;
};

struct S_Ctx_000F1580 {
    char pad0[0x24];
    S_Prompt_000F1580 *f24;
    char pad28[0x134 - 0x28];
    int f134;
    int f138;
    char pad13C[0x25c - 0x13c];
    S_Owner_000F1580 *f25c;
    char pad260[0x270 - 0x260];
    S_Text_000F1580 *f270;
};

/* BmxUIPageOtherVideos, slot 28 */
struct C_000F1580 {
    char pad0[0x124];
    S_Ctx_000F1580 *f124;
    char pad128[0x140 - 0x128];
    S_Sel_000F1580 *f140;
    char pad144[0x280 - 0x144];
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    int f294;
    int f298;
    int f29C;
    int f2A0;
    int f2A4;
    char pad2A8[0x2B8 - 0x2A8];
    char f2B8[0x104];
    int f3BC;
    char pad3C0[0x3D4 - 0x3C0];
    int f3D4[4];
    int func_001BF050(int a);
    int func_000F1580(int a1, int a2);
};

#pragma optimize("t", on)
C_000F0DC0 *C_000F0DC0::func_000F0DC0(int a, int b, int c)
{
    Elem_000F0DC0 *p;
    int i, j, k;
    float y;

    func_001BE4F0(a, b, c);
    D_002A8490->p2EC->func_0018C160((int)&D_00278690);
    D_002A8490->p2EC->func_0018C160((int)&D_002786A0);
    D_002A8490->p2EC->func_0018C160((int)&D_00278678);
    for (i = 0; i < 2; i++) {
        p = (Elem_000F0DC0 *)func_001E8A44(100);
        a3f8[i] = p ? p->func_001D5760() : 0;
        if (i == 0)
            a3f8[i]->func_001D5810((int)&D_0027E328, 309.0f, 82.0f, 0);
        else
            a3f8[i]->func_001D5810((int)&D_0027E31C, 309.0f, 350.0f, 0);
        a3f8[i]->setColor();
    }
    for (j = 0; j < 4; j++) {
        p = (Elem_000F0DC0 *)func_001E8A44(100);
        a3e8[j] = p ? p->func_001D5760() : 0;
    }
    a3e8[0]->func_001D5810((int)&D_002786B0, 100.0f, 90.0f, 0);
    a3e8[0]->setWidth(0x435d0000);
    a3e8[0]->setColor();
    a3e8[1]->func_001D5810((int)&D_002786B0, 321.0f, 90.0f, 0);
    a3e8[1]->setWidth(0x435d0000);
    a3e8[1]->setColor();
    a3e8[1]->setMatrix();
    a3e8[2]->func_001D5810((int)&D_002786B0, 321.0f, 361.0f, 0);
    a3e8[2]->setWidth(0x435d0000);
    a3e8[2]->setColor();
    a3e8[2]->setPos(0x43a08000, 0x43b48000);
    a3e8[2]->setAngle(0x40490fd9);
    a3e8[2]->setMatrix();
    a3e8[3]->func_001D5810((int)&D_002786B0, 542.0f, 361.0f, 0);
    a3e8[3]->setWidth(0x435d0000);
    a3e8[3]->setColor();
    a3e8[3]->setPos(0x44078000, 0x43b48000);
    a3e8[3]->setAngle(0x40490fd9);
    for (k = 0; k < 4; k++) {
        p = (Elem_000F0DC0 *)func_001E8A44(100);
        a400[k] = p ? p->func_001D5760() : 0;
        y = k * D_002757F0 + D_0027F978;
        a400[k]->func_001D5810((int)&D_00281DB4, 220.0f, y, 0);
        p = (Elem_000F0DC0 *)func_001E8A44(100);
        a410[k] = p ? p->func_001D5760() : 0;
        a410[k]->func_001D5810((int)&D_00281DC0, 220.0f, y, 0);
    }
    return this;
}
#pragma optimize("", on)
int C_000F1580::func_000F1580(int a1, int a2)
{
    S_Ctx_000F1580 *ctx = f124;
    S_Prompt_000F1580 *q = ctx->f24;

    if (ctx->f25c->f74->func_000301D0() != 0) {
        return 0;
    }
    if ((f280 != 0 || f284 != 0) && f288 == 0) {
        return 0;
    }
    if (ctx->f270->func_000B5870() == 0) {
        return 0;
    }
    if (f2A4 == 0) {
        return 0;
    }
    if (a2 == ((GObjRoot_000F1980 *)D_002A8490)->f8->func_00136170(2, 2, 0)) {
        if (f140->f4->f30 == 1) {
            goto done;
        }
        q->func_000B9A80(2, 1);
        f140->f4->func_001BDF00(0);
        f3BC = f140->f4->f30;
        goto done;
    }
    if (a2 == D_002A8490->f8->func_00136170(3, 2, 0)) {
        if (f140->f4->f30 == 5) {
            goto done;
        }
        q->func_000B9A80(2, 1);
        f140->f4->func_001BDE90(0);
        f3BC = f140->f4->f30;
        goto done;
    }
    if (a2 != D_002A8490->f8->func_00136170(4, 2, 0) &&
        a2 != D_002A8490->f8->func_00136170(0x17, 2, 0)) {
        if (a2 == D_002A8490->f8->func_00136170(5, 2, 0) ||
            a2 == D_002A8490->f8->func_00136170(0x18, 2, 0)) {
            if (f284 != 0) {
                q->func_000B9A80(1, 1);
                D_002A8490->f2E0->f2fc->func_00094E40(2, 1, 500);
                f2A0 = 1;
            }
            f290 = a1;
            f284 = 1;
            f294 = 0;
            f28C = a2;
            if (f288 == 0) {
                return 0;
            }
            f124->f138 = 7;
            f124->f134 = 0xb;
            goto done;
        }
        goto done;
    }
    if (f280 == 0) {
        if (f3D4[func_001BF050(1)] == 0) {
            return 0;
        }
        q->func_000B9A80(4, 1);
        f2A0 = 1;
    }
    f290 = a1;
    f280 = 1;
    f294 = 0;
    f28C = a2;
    f298 = 1;
    if (f288 == 0) {
        return 1;
    }
    switch (func_001BF050(1)) {
    case 1:
        func_001ADCC0(f2B8, 0x104, D_00275678, D_002A64D0, D_0027DFE4);
        break;
    case 2:
        func_001ADCC0(f2B8, 0x104, D_00275678, D_002A64D0, D_00282478);
        break;
    case 3:
        func_001ADCC0(f2B8, 0x104, D_00275678, D_002A64D0, D_0028246C);
        break;
    case 4:
        func_001ADCC0(f2B8, 0x104, D_00275678, D_002A64D0, D_0027DFF0);
        break;
    }
    f280 = 0;
    f288 = 0;
    ctx->f270->f34 = 0;
    ctx->f270->f38 = 1;
    if (func_001BF050(1) != 4 && D_002A8490->f2E0->f464 == 0) {
        ctx->f270->func_000BC4A0(0.592f, 0.5625f);
        ctx->f270->func_000BC4C0(133.0f, 105.0f);
        ctx->f270->func_00093280(1.0f);
    } else {
        ctx->f270->func_000BC4A0(1.0f, 1.0f);
        ctx->f270->func_000BC4C0(0.0f, 0.0f);
        ctx->f270->func_00093280(0.0f);
    }
    ctx->f270->func_000BC5D0(f2B8, 1);
done:
    return 1;
}

void C_000F1980::func_000F1980(void)
{
    int ids[3];
    int i;
    int *r;
    ClampObj_000F1980 *o;
    SubElem_000F1980 **e;
    LookupObj_000F1980 *lk;

    ids[0] = (int)&D_002786A0;
    ids[1] = (int)&D_00278690;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((MidObj_000F1980 *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = a3f8;
    i = 2;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    e = a3e8;
    i = 4;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    e = a410;
    i = 4;
    do {
        if (e[-4] != 0) {
            o = e[-4]->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
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

void C_000F1B60::func_000F1B60(void) {
    int i;

    for (i = 14; i < 16; i++)
        ((C_001D6600 **)D_002B91AC)[i]->func_001D6600();
    D_002B91AC->f34->func_001D6600();
}

void C_000F1BA0::func_000F1BA0() {
    C_001D5AD0 *p;
    S_002B91AC_000F1B60 *s;
    C_001D5AD0 **ptr;
    int count;
    p = unk280 ? D_002B91AC->unk68 : D_002B91AC->unk50;
    p->func_001D5AD0();
    p = unk284 ? D_002B91AC->unk6C : D_002B91AC->unk54;
    p->func_001D5AD0();
    s = D_002B91AC;
    s->unk24->func_001D5AD0();
    s->unk28->func_001D5AD0();
    s->unk2C->func_001D5AD0();
    s->unk30->func_001D5AD0();
    ptr = arr3F8; count = 2;
    do {
        p = *ptr;
        unsigned int color = (p->f38 & 0xffffff) | (unk3CC << 24);
        unsigned char flags = p->f58 | 2;
        p->f38 = color; p->f58 = flags;
        (*ptr)->func_001D5AD0();
        ptr++; count--;
    } while (count != 0);
    ptr = arr3E8; count = 4;
    do {
        p = *ptr;
        unsigned int color = (p->f38 & 0xffffff) | (unk3CC << 24);
        unsigned char flags = p->f58 | 2;
        p->f38 = color; p->f58 = flags;
        (*ptr)->func_001D5AD0();
        ptr++; count--;
    } while (count != 0);
    ptr = arr400; count = 4;
    do {
        p = *ptr;
        p->f38 = (p->f38 & 0xffffff) | (unk3CC << 24);
        p->f58 |= 2;
        p = ptr[4];
        p->f38 = (p->f38 & 0xffffff) | (unk3CC << 24);
        p->f58 |= 2;
        p = ((int *)ptr)[-10] ? *ptr : ptr[4];
        p->func_001D5AD0();
        ptr++; count--;
    } while (count != 0);
}

BmxUIPageHPHChoice_000F1D00 *BmxUIPageHPHChoice_000F1D00::func_000F1D00(int a0) {
    int i;
    int *p;
    func_001BE360(1);
    vtbl = &D_0028248C;
    p = &unk2B4;
    for (i = 0; i < 4; i++)
        p[i] = 0;
    unk284 = 0;
    unk288 = 0;
    unk28C = 0;
    unk298 = 0;
    unk29C = 0;
    unk2A0 = 0;
    unk2A4 = 0;
    unk2A8 = 0;
    unk2AC = 0;
    unk2B0 = 0;
    unk290 = 0;
    unk294 = 0;
    unk280 = 1;
    return this;
}

