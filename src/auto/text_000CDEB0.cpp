/* 3 functions from 0x000CDEB0 to 0x000CEA00, found by Ghidra. */
#include "common.h"

struct LookupObj_CDE {
    int *func_0018C160(int a);
};

struct GObjRoot_CDE {
    char pad0[0x2ec];
    LookupObj_CDE *p2EC;
};

extern GObjRoot_CDE *D_002A8490;

extern float D_00275AEC;
extern int D_00278690;
extern int D_002786A0;
extern int D_00278678;

struct ClampObj_CDE {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_CDE {
    ClampObj_CDE *func_0018C070();
};

struct SubElem_CDE {
    ClampObj_CDE *func_001D5AA0();
};

/* BmxUIPageRider */
struct C_000CDEB0 {
    char pad0[0x390];
    SubElem_CDE *a390[8];
    SubElem_CDE *a3b0[8];
    char pad3d0[0x3f8 - 0x3d0];
    SubElem_CDE *a3f8[2];
    SubElem_CDE *a400[16];
    void func_000CDEB0(void);
    void func_001578D0(void);
};

struct C_000CE0A0 {
    char pad0[0x4C4];
    int unk4C4;
    int unk4C8;
    int unk4CC;
    int unk4D0;
    int unk4D4;
    void func_000CE0A0(void);
};


void C_000CDEB0::func_000CDEB0(void)
{
    int ids[3];
    int i;
    int *r;
    ClampObj_CDE *o;
    SubElem_CDE **e;
    LookupObj_CDE *lk;

    ids[0] = (int)&D_00278690;
    ids[1] = (int)&D_002786A0;
    ids[2] = (int)&D_00278678;
    for (i = 0; i < 3; i++) {
        lk = D_002A8490->p2EC;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((MidObj_CDE *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = a390;
    i = 8;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    e = a3b0;
    i = 8;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
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
    e = a400;
    i = 16;
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

extern char D_0027DB54[], D_0027DB44[], D_0027DB68[], D_0027DB80[];
extern char D_0027DB38[], D_0027DB28[], D_0027E914[];
extern char D_0027DB1C[], D_0027DB0C[], D_0027E904[], D_0027E8F8[];
extern char D_0027DB00[], D_0027DAF0[], D_0027E8F0[];
extern char D_0027DAE4[], D_0027DAD4[], D_0027E8E4[], D_0027E8D8[];
extern char D_0027DAC8[], D_0027DAB8[], D_0027E8C8[], D_0027E8BC[];
extern char D_0027DAAC[], D_0027DA9C[], D_0027E8B0[];
extern char D_0027DA90[], D_0027DA80[], D_0027E8A0[], D_0027E894[];
extern char D_0027DA70[], D_0027DA5C[], D_0027E888[];
extern char D_0027DA50[], D_0027DA40[], D_0027E878[], D_0027E86C[];
extern char D_0027DA34[], D_0027DA24[], D_0027E85C[], D_0027E850[];
extern char D_0027DA18[], D_0027DA08[], D_0027E83C[], D_0027E830[];
extern char D_0027D9F8[], D_0027D9E4[], D_0027E824[];
extern char D_0027E818[], D_0027E808[], D_0027E7F8[], D_0027E7EC[];
extern char D_0027D9C0[], D_0027D9B0[], D_0027E7E0[], D_0027E7D4[], D_0027E7C8[];

struct CE_Obj74 {
    void func_00030020(char *s);
    void func_000300C0(char *s);
    void func_00030210();
    void func_000301A0();
};
struct CE_Mid25C {
    char pad0[0x74];
    CE_Obj74 *f74;
};
struct CE_C200 {
    void func_0001C200(char *s, int a, int b, int c);
};
struct CE_Mid150 {
    char pad0[0x484];
    CE_C200 *f484;
};
struct CE_Obj268 {
    void func_001C4D50(int a);
};
struct CE_Sesi {
    char pad0[0x150];
    CE_Mid150 *f150;
    char pad154[0x25C - 0x154];
    CE_Mid25C *f25C;
    char pad260[0x268 - 0x260];
    CE_Obj268 *f268;
    void func_000BBF90(char *s);
};
struct CE_BDF {
    void func_001BDF60(int a);
};
struct CE_Mid140 {
    char pad0[4];
    CE_BDF *f4;
};
struct C_000CE0D0 {
    char pad0[0x124];
    CE_Sesi *f124;
    char pad128[0x140 - 0x128];
    CE_Mid140 *f140;
    char pad144[0x440 - 0x144];
    int a440[16];
    char pad480[0x48C - 0x480];
    int f48C;
    char pad490[0x4C0 - 0x490];
    int f4C0;
    int func_000CE0D0(int a);
};

void C_000CE0A0::func_000CE0A0(void) {
    unk4C4 = 255;
    unk4C8 = 0;
    unk4CC = 0;
    unk4D0 = 0;
    unk4D4 = 1048576000;
}

int C_000CE0D0::func_000CE0D0(int a)
{
    CE_Sesi *s = f124;
    switch (a) {
    default:
        return 0;
    case 0:
        s->f25C->f74->func_00030020(D_0027DB54);
        s->f25C->f74->func_000300C0(D_0027DB44);
        s->func_000BBF90(D_0027DB68);
        f140->f4->func_001BDF60(1);
        s->f150->f484->func_0001C200(D_0027DB68, 0, 1, 1);
        s->f150->f484->func_0001C200(D_0027DB80, 0, 1, 1);
        f48C = 1;
        a440[0] = 0;
        break;
    case 1:
        s->f25C->f74->func_00030020(D_0027DB38);
        s->f25C->f74->func_000300C0(D_0027DB28);
        s->func_000BBF90(D_0027E914);
        f140->f4->func_001BDF60(2);
        s->f150->f484->func_0001C200(D_0027E914, 0, 1, 1);
        f48C = 2;
        a440[1] = 0;
        break;
    case 2:
        s->f25C->f74->func_00030020(D_0027DB1C);
        s->f25C->f74->func_000300C0(D_0027DB0C);
        s->func_000BBF90(D_0027E904);
        f140->f4->func_001BDF60(3);
        s->f150->f484->func_0001C200(D_0027E904, 0, 1, 1);
        s->f150->f484->func_0001C200(D_0027E8F8, 0, 1, 1);
        f48C = 3;
        a440[2] = 0;
        break;
    case 3:
        s->f25C->f74->func_00030020(D_0027DB00);
        s->f25C->f74->func_000300C0(D_0027DAF0);
        s->func_000BBF90(D_0027E8F0);
        f140->f4->func_001BDF60(4);
        s->f150->f484->func_0001C200(D_0027E8F0, 0, 1, 1);
        f48C = 3;
        a440[3] = 0;
        break;
    case 4:
        s->f25C->f74->func_00030020(D_0027DAE4);
        s->f25C->f74->func_000300C0(D_0027DAD4);
        s->func_000BBF90(D_0027E8E4);
        f140->f4->func_001BDF60(5);
        s->f150->f484->func_0001C200(D_0027E8E4, 0, 1, 1);
        s->f150->f484->func_0001C200(D_0027E8D8, 0, 1, 1);
        f48C = 5;
        a440[4] = 0;
        break;
    case 5:
        s->f25C->f74->func_00030020(D_0027DAC8);
        s->f25C->f74->func_000300C0(D_0027DAB8);
        s->func_000BBF90(D_0027E8C8);
        f140->f4->func_001BDF60(6);
        s->f150->f484->func_0001C200(D_0027E8C8, 0, 1, 1);
        s->f150->f484->func_0001C200(D_0027E8BC, 0, 1, 1);
        f48C = 6;
        a440[5] = 0;
        break;
    case 6:
        s->f25C->f74->func_00030020(D_0027DAAC);
        s->f25C->f74->func_000300C0(D_0027DA9C);
        s->func_000BBF90(D_0027E8B0);
        f140->f4->func_001BDF60(7);
        s->f150->f484->func_0001C200(D_0027E8B0, 0, 1, 1);
        f48C = 7;
        a440[6] = 0;
        break;
    case 7:
        s->f25C->f74->func_00030020(D_0027DA90);
        s->f25C->f74->func_000300C0(D_0027DA80);
        s->func_000BBF90(D_0027E8A0);
        f140->f4->func_001BDF60(8);
        s->f150->f484->func_0001C200(D_0027E8A0, 0, 1, 1);
        s->f150->f484->func_0001C200(D_0027E894, 0, 1, 1);
        f48C = 8;
        a440[7] = 0;
        break;
    case 8:
        s->f25C->f74->func_00030020(D_0027DA70);
        s->f25C->f74->func_000300C0(D_0027DA5C);
        s->func_000BBF90(D_0027E888);
        f140->f4->func_001BDF60(9);
        s->f150->f484->func_0001C200(D_0027E888, 0, 1, 1);
        f48C = 9;
        a440[8] = 0;
        break;
    case 9:
        s->f25C->f74->func_00030020(D_0027DA50);
        s->f25C->f74->func_000300C0(D_0027DA40);
        s->func_000BBF90(D_0027E878);
        f140->f4->func_001BDF60(10);
        s->f150->f484->func_0001C200(D_0027E878, 0, 1, 1);
        s->f150->f484->func_0001C200(D_0027E86C, 0, 1, 1);
        f48C = 10;
        a440[9] = 0;
        break;
    case 10:
        s->f25C->f74->func_00030020(D_0027DA34);
        s->f25C->f74->func_000300C0(D_0027DA24);
        s->func_000BBF90(D_0027E85C);
        f140->f4->func_001BDF60(11);
        s->f150->f484->func_0001C200(D_0027E85C, 0, 1, 1);
        s->f150->f484->func_0001C200(D_0027E850, 0, 1, 1);
        f48C = 11;
        a440[10] = 0;
        break;
    case 11:
        s->f25C->f74->func_00030020(D_0027DA18);
        s->f25C->f74->func_000300C0(D_0027DA08);
        s->func_000BBF90(D_0027E83C);
        f140->f4->func_001BDF60(12);
        s->f150->f484->func_0001C200(D_0027E83C, 0, 1, 1);
        s->f150->f484->func_0001C200(D_0027E830, 0, 1, 1);
        f48C = 12;
        a440[11] = 0;
        break;
    case 12:
        s->f25C->f74->func_00030020(D_0027D9F8);
        s->f25C->f74->func_000300C0(D_0027D9E4);
        s->func_000BBF90(D_0027E824);
        f140->f4->func_001BDF60(13);
        s->f150->f484->func_0001C200(D_0027E824, 0, 1, 1);
        f48C = 13;
        a440[12] = 0;
        break;
    case 13:
        s->f25C->f74->func_00030020(D_0027E818);
        s->f25C->f74->func_000300C0(D_0027E808);
        s->func_000BBF90(D_0027E7F8);
        f140->f4->func_001BDF60(14);
        s->f150->f484->func_0001C200(D_0027E7F8, 0, 1, 1);
        s->f150->f484->func_0001C200(D_0027E7EC, 0, 1, 1);
        f48C = 14;
        a440[13] = 0;
        break;
    case 14:
        s->f25C->f74->func_00030020(D_0027D9C0);
        s->f25C->f74->func_000300C0(D_0027D9B0);
        s->func_000BBF90(D_0027E7E0);
        f140->f4->func_001BDF60(15);
        s->f150->f484->func_0001C200(D_0027E7E0, 0, 1, 1);
        s->f150->f484->func_0001C200(D_0027E7D4, 0, 1, 1);
        f48C = 15;
        a440[14] = 0;
        break;
    case 15:
        s->f25C->f74->func_00030020(D_0027D9C0);
        s->f25C->f74->func_000300C0(D_0027D9B0);
        s->func_000BBF90(D_0027E7C8);
        f140->f4->func_001BDF60(16);
        s->f150->f484->func_0001C200(D_0027E7C8, 0, 1, 1);
        f48C = 16;
        a440[15] = 0;
    }
    f4C0 = 1;
    s->f268->func_001C4D50(1000);
    s->f25C->f74->func_00030210();
    s->f25C->f74->func_000301A0();
    return 1;
}

