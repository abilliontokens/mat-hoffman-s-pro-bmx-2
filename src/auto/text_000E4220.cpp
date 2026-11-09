/* 6 functions from 0x000E4220 to 0x000E51B0, found by Ghidra. */
#include "common.h"
#include "string.h"

extern int D_0027FC74;
void func_001E891B(void *p);

/* anything the page owns and frees through its virtual destructor */
struct S_000E4AB0_Obj {
    virtual ~S_000E4AB0_Obj();
};

/* owned object destroyed with an explicit call, then freed */
struct S_000E4AB0_Raw {
    void func_001D6410();
};

/* BmxUIPageRiderOps */
struct C_000E4AB0 {
    void *vtbl;
    char pad4[0x50C];
    S_000E4AB0_Obj *f510;
    S_000E4AB0_Obj *a514[5];
    S_000E4AB0_Obj *a528[5];
    S_000E4AB0_Obj *a53C[5];
    S_000E4AB0_Obj *a550[5];
    S_000E4AB0_Raw *a564[5];
    char pad578[0x6B8 - 0x578];
    S_000E4AB0_Obj *a6B8[6];
    S_000E4AB0_Obj *a6D0[4];
    S_000E4AB0_Obj *a6E0[4];
    C_000E4AB0 *func_000E4830(int a0);
    void func_001BE360(int a0);
    void func_000E4AB0();
    void func_001BE3F0();
};

struct C_000E5150_Slots {
    char pad0[0x62C];
    int f62C[3];
    int f638[8];
};

struct C_0005C020 {
    C_000E5150_Slots *func_0005C020(int param);
    void func_0005C1B0(int a, int b);
    void func_0005C170(int a, int b);
};

struct C_000E5150_Mgr {
    char pad0[4];
    int f4;
    char pad8[0x190 - 8];
    int a190[(0x2C0 - 0x190) / 4];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
};

/* the strings of the text table the root holds at +0x2E8 (+4) */
struct S_000E4BC0_Strings {
    char pad0[0x800];
    char *f800;
    char pad804[0x838 - 0x804];
    char *f838;
    char pad83C[0x950 - 0x83C];
    char *f950;
    char pad954[0xF50 - 0x954];
    char *fF50;
};

struct S_000E4BC0_Text {
    int f0;
    S_000E4BC0_Strings *f4;
};

/* lookup of named UI nodes, held by the root at +0x2EC */
struct S_000E4BC0_Lookup {
    int *func_0018C160(int name);
};

struct S_000E4220_Input {
    int func_000301D0();
    int func_00136170(int a, int b, int c);
};

struct S_000E4220_Ui {
    void func_000B9A80(int a, int b);
};

struct S_000E4220_Obj {
    char pad0[0x304];
    int f304;
    char pad308[0x59C - 0x308];
    int f59C;
    int f5A0;
};

struct S_000E4220_Pad {
    char pad0[0x74];
    S_000E4220_Input *f74;
};

struct S_000E4220_Mgr {
    char pad0[0x24];
    S_000E4220_Ui *f24;
    char pad28[0x134 - 0x28];
    int f134;
    int f138;
    char pad13C[0x25C - 0x13C];
    S_000E4220_Pad *f25C;
    S_000E4220_Obj *func_000BA9D0(int a);
    void func_000BB7C0(int a);
};

struct C_000E5150_Global {
    char pad0[8];
    S_000E4220_Input *f8;
    char pad0C[0x2E0 - 0xC];
    C_000E5150_Mgr *f2E0;
    char pad2E4[4];
    S_000E4BC0_Text *f2E8;
    S_000E4BC0_Lookup *f2EC;
};

extern C_000E5150_Global *D_002A8490;

struct S_000E4BC0_Widget {
    void func_001B1980();
};

/* the manager a page holds at +0x124 */
struct S_000E4BC0_Mgr {
    char pad0[0x264];
    int f264;
    char pad268[0x284 - 0x268];
    int f284;
    int f288;
    int f28C;
    void func_000BBF90(char *name);
    int func_000BC0B0();
    int func_000BC1C0();
};

struct S_000E4BC0_Label {
    void func_0005E840(char *s);
};

struct S_000E4BC0_Hud {
    char pad0[0x34];
    S_000E4BC0_Label *f34;
    S_000E4BC0_Label *f38;
    S_000E4BC0_Label *f3C;
    S_000E4BC0_Label *f40;
    void func_000BF860(int a, int b, int c, int d);
};

extern S_000E4BC0_Hud *D_002B91AC;
extern int D_002786A0;
extern char D_0027DB68[], D_0027E914[], D_0027E904[], D_0027E8F0[], D_0027E8E4[], D_0027E8C8[];
extern char D_0027E8B0[], D_0027E8A0[], D_0027E888[], D_0027E878[], D_0027E85C[], D_0027E83C[];
extern char D_0027E824[], D_0027E7E0[], D_0027E7F8[], D_0027E7C8[];

/* BmxUIPageRiderOps, virtual slot 27 */
struct C_000E4BC0 {
    char pad0[0x124];
    S_000E4BC0_Mgr *f124;
    char pad128[0x280 - 0x128];
    int f280;
    int f284;
    char pad288[0x29C - 0x288];
    int f29C;
    int f2A0;
    int f2A4;
    int f2A8;
    int f2AC;
    char pad2B0[0x2B4 - 0x2B0];
    int a2B4[35];
    S_000E4BC0_Widget *f340;
    S_000E4BC0_Widget *f344;
    S_000E4BC0_Widget *f348;
    char pad34C[0x358 - 0x34C];
    int a358[35];
    char pad3E4[0x3E8 - 0x3E4];
    int a3E8[16];
    int a428[16];
    int f468;
    char pad46C[0x47C - 0x46C];
    int f47C;
    int f480;
    int f484;
    char pad488[0x490 - 0x488];
    int f490;
    int f494;
    int f498;
    int f49C;
    char pad4A0[0x4A4 - 0x4A0];
    int f4A4;
    int f4A8;
    int f4AC;
    int f4B0;
    int f4B4;
    int f4B8;
    char pad4BC[0x4C4 - 0x4BC];
    int f4C4;
    int f4C8;
    int f4CC;
    int f4D0;
    int f4D4;
    int f4D8;
    int f4DC;
    int f4E0;
    int f4E4;
    int f4E8;
    int f4EC;
    char pad4F0[0x500 - 0x4F0];
    S_000E4BC0_Widget *f500;
    char pad504[0x508 - 0x504];
    int f508;
    int f50C;
    char pad510[0x578 - 0x510];
    S_000E4BC0_Widget *a578[5];
    char pad58C[0x5A0 - 0x58C];
    S_000E4BC0_Widget *a5A0[35];
    S_000E4BC0_Widget *a62C[35];
    char pad6B8[0x6F0 - 0x6B8];
    int a6F0[35];
    char pad77C[0x788 - 0x77C];
    int f788;
    int f78C;
    void func_000E4BC0();
};

/* BmxUIPageHorseController, virtual slot 28 */
struct C_000E4220 {
    char pad0[0x124];
    S_000E4220_Mgr *f124;
    char pad128[0x280 - 0x128];
    int f280;
    int f284;
    char pad288[0x28C - 0x288];
    int f28C;
    char pad290[0x298 - 0x290];
    int f298;
    int f29C;
    int f2A0;
    int f2A4;
    int f2A8;
    int f2AC;
    char pad2B0[0x2B4 - 0x2B0];
    int f2B4;
    int f2B8;
    int f2BC;
    int f2C0;
    char pad2C4[0x420 - 0x2C4];
    int a420[8];
    int func_000E4220(int a, int b);
    void func_000E40F0();
    void func_000E3FC0();
};

extern int D_002A3398, D_002A339C, D_002A33A0, D_002A33A4;
void func_0005B3F0();
int C_000E4220::func_000E4220(int a, int b)
{
    S_000E4220_Mgr *mgr = f124;
    S_000E4220_Ui *ui = mgr->f24;
    int i;
    if (mgr->f25C->f74->func_000301D0() || f124->f138 == 4 || f124->f138 == 3 || !f2BC)
        return 0;
    if ((f2A4 || f2A8) && !f2AC)
        return 0;
    if (b == D_002A8490->f8->func_00136170(4, 2, 0) || b == D_002A8490->f8->func_00136170(0x17, 2, 0))
        goto confirm;
    if (b == D_002A8490->f8->func_00136170(2, 2, 0)) {
        f2B8 = 1;
        ui->func_000B9A80(2, 1);
        f2C0 = f284;
        if (--f284 < 0)
            f284 = f280 - 1;
    } else if (b == D_002A8490->f8->func_00136170(3, 2, 0)) {
        f2B8 = 1;
        ui->func_000B9A80(2, 1);
        f2C0 = f284;
        if (++f284 > f280 - 1)
            f284 = 0;
    } else if (b == D_002A8490->f8->func_00136170(0, 2, 0)) {
        ui->func_000B9A80(2, 1);
        if (--a420[f284] < 0)
            a420[f284] = 7;
        f28C = 1;
        func_000E40F0();
    } else if (b == D_002A8490->f8->func_00136170(1, 2, 0)) {
        ui->func_000B9A80(2, 1);
        if (++a420[f284] > 7)
            a420[f284] = 0;
        f28C = 1;
        func_000E3FC0();
    } else if (b == D_002A8490->f8->func_00136170(5, 2, 0) || b == D_002A8490->f8->func_00136170(0x18, 2, 0)) {
        if (!f2A8) {
            ui->func_000B9A80(1, 1);
            f2B4 = 1;
        }
        f2A8 = 1;
        f2A0 = 0;
        f298 = b;
        f29C = a;
        if (!f2AC)
            return 0;
        f124->f138 = 7;
        mgr->func_000BA9D0(10)->f304 = 0x3f800000;
        f124->f134 = 10;
    }
    goto done;
confirm:
    if (!f2A4) {
        ui->func_000B9A80(4, 1);
        f2B4 = 1;
    }
    if (f2AC == 0) {
        f2A4 = 1;
        f2A0 = 0;
        f298 = b;
        f29C = a;
        return 0;
    }
    for (i = 0; i < f280; i++)
        ((int *)D_002A8490->f2E0)[0xC0 + i] = a420[i];
    {
        C_000E5150_Mgr *m = D_002A8490->f2E0;
        if (m->f4 == 10) {
            func_0005B3F0();
            f124->f138 = 8;
            return 1;
        }
        f124->f138 = 7;
        f124->f134 = 3;
        S_000E4220_Obj *o = mgr->func_000BA9D0(3);
        o->f59C = 1;
        o->f5A0 = 0;
        mgr->func_000BB7C0(m->a190[0x0]);
    }
done:
    return 1;
}

C_000E4AB0 *C_000E4AB0::func_000E4830(int a0)
{
 int *w = (int *)this;
 int *p; int i;
 func_001BE360(a0);
 ((volatile int *)w)[0]=(int)&D_0027FC74;
 ((volatile int *)w)[318]=0;
 ((volatile int *)w)[317]=0;
 ((volatile int *)w)[316]=0;
 ((volatile int *)w)[319]=0x3f800000;
 ((volatile int *)w)[208]=0;
 ((volatile int *)w)[209]=0;
 ((volatile int *)w)[210]=0;
 w[160]=0;
 w[161]=0;
 w[481]=0;
 w[482]=0;
 w[483]=0;
 w[163]=-1;
 w[162]=-1;
 w[168]=0;
 w[169]=0;
 w[166]=0;
 w[170]=0;
 w[164]=0;
 w[165]=0;
 p=&w[0x62c/4]; i=35;
 do { p[-0x8c/4]=0; p[0]=0; p[-0x378/4]=0; p[-0x2d4/4]=0; p[0xc4/4]=255; ++p; } while(--i);
 w[0x50c/4]=0;
 p=&w[0x528/4]; i=5;
 do { p[-5]=0; p[0]=0; p[5]=0; p[10]=0; p[15]=0; ++p; } while(--i);
 p=&w[0x428/4]; i=16;
 do { p[-16]=0; p[0]=0; ++p; } while(--i);
 w[308]=-1;
 w[309]=-1;
 w[294]=0;
 w[293]=0;
 w[295]=0;
 w[292]=0;
 w[249]=0;
 w[213]=0;
 w[167]=0;
 w[282]=0;
 w[283]=0;
 w[284]=0;
 w[296]=0;
 w[287]=0;
 w[288]=0;
 w[289]=0;
 w[290]=0;
 w[291]=0;
 w[285]=0;
 w[305]=0;
 w[310]=0;
 ((volatile int *)w)[306]=1;
 ((volatile int *)w)[307]=1;
 memset(&w[0x6b8/4],0,24);
 for(i=0;i<4;i++) a6E0[i]=0;
 for(i=0;i<4;i++) a6D0[i]=0;
 w[311]=0;
 w[312]=0;
 w[314]=0;
 w[313]=0;
 w[315]=0;
 w[297]=0;
 w[298]=0;
 w[299]=0;
 w[300]=0;
 w[301]=0;
 w[302]=0;
 w[0x4f0/4]=D_002A3398;
 w[0x4f4/4]=D_002A339C;
 w[0x4f8/4]=D_002A33A0;
 w[0x4fc/4]=D_002A33A4;
 w[211]=0;
 w[212]=0;
 w[320]=0;
 w[321]=0;
 w[322]=0;
 w[324]=0;
 return this;
}

void C_000E4AB0::func_000E4AB0()
{
    int i;
    S_000E4AB0_Raw *p;

    vtbl = (void *)&D_0027FC74;
    for (i = 0; i < 5; i++) {
        if (a514[i]) {
            delete a514[i];
            a514[i] = 0;
        }
        if (a528[i]) {
            delete a528[i];
            a528[i] = 0;
        }
        if (a53C[i]) {
            delete a53C[i];
            a53C[i] = 0;
        }
        if (a550[i]) {
            delete a550[i];
            a550[i] = 0;
        }
        p = a564[i];
        if (p) {
            p->func_001D6410();
            func_001E891B(p);
            a564[i] = 0;
        }
    }
    for (i = 0; i < 6; i++) {
        if (a6B8[i]) {
            delete a6B8[i];
            a6B8[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (a6E0[i]) {
            delete a6E0[i];
            a6E0[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (a6D0[i]) {
            delete a6D0[i];
            a6D0[i] = 0;
        }
    }
    if (f510) {
        delete f510;
        f510 = 0;
    }
    func_001BE3F0();
}

void C_000E4BC0::func_000E4BC0()
{
    S_000E4BC0_Mgr *mgr = f124;
    int i;
    int j;
    int t;
    int v;

    D_002A8490->f2EC->func_0018C160((int)&D_002786A0);
    for (i = 0; i < 5; i++) {
        a578[i]->func_001B1980();
    }
    f344->func_001B1980();
    f348->func_001B1980();
    f340->func_001B1980();
    v = mgr->f264;
    if (v != 0 && v != 1) {
        if (v == 2) {
            f280 = 1;
        } else if (v == 3) {
            f280 = 2;
        } else if (v == 4) {
            f280 = 3;
        } else if (v == 5) {
            f280 = 4;
        } else if (v == 6) {
            f280 = 5;
        } else if (v == 7) {
            f280 = 6;
        } else if (v == 8) {
            f280 = 7;
        }
    } else {
        f280 = 0;
    }
    f284 = D_002A8490->f2E0->a190[f280] + 1;
    f2A0 = 0;
    f2A4 = 0;
    f29C = 0;
    f2AC = 0;
    for (i = 0; i < 35; i++) {
        a2B4[i] = 0;
        a6F0[i] = 0xff;
    }
    f47C = 0;
    f480 = 0;
    f484 = 0;
    f468 = 0;
    f498 = 0;
    f494 = 0;
    f49C = 0;
    f490 = 0;
    f2A8 = 0;
    f78C = 0;
    f4D8 = 0;
    f788 = 0;
    f4DC = 0;
    f4E0 = 0;
    f4E8 = 0;
    f4E4 = 0;
    f4EC = 0;
    f4A4 = 0;
    f4A8 = 0;
    f4AC = 0;
    f4B0 = 0;
    f4B4 = 0;
    f4B8 = 0;
    f50C = 0;
    f4C8 = 0;
    f4CC = 0;
    f4C4 = 0;
    switch (f284) {
    case 1:
        mgr->func_000BBF90(D_0027DB68);
        break;
    case 2:
        mgr->func_000BBF90(D_0027E914);
        break;
    case 3:
        mgr->func_000BBF90(D_0027E904);
        break;
    case 4:
        mgr->func_000BBF90(D_0027E8F0);
        break;
    case 5:
        mgr->func_000BBF90(D_0027E8E4);
        break;
    case 6:
        mgr->func_000BBF90(D_0027E8C8);
        break;
    case 7:
        mgr->func_000BBF90(D_0027E8B0);
        break;
    case 8:
        mgr->func_000BBF90(D_0027E8A0);
        break;
    case 9:
        mgr->func_000BBF90(D_0027E888);
        break;
    case 10:
        mgr->func_000BBF90(D_0027E878);
        break;
    case 11:
        mgr->func_000BBF90(D_0027E85C);
        break;
    case 12:
        mgr->func_000BBF90(D_0027E83C);
        break;
    case 13:
        mgr->func_000BBF90(D_0027E824);
        break;
    case 15:
        mgr->func_000BBF90(D_0027E7E0);
        break;
    case 14:
        mgr->func_000BBF90(D_0027E7F8);
        break;
    case 16:
        mgr->func_000BBF90(D_0027E7C8);
        break;
    }
    a3E8[mgr->f284] = mgr->func_000BC0B0();
    a428[mgr->f284] = mgr->func_000BC1C0();
    switch (mgr->f284) {
    case 0:
        t = 0;
        break;
    case 2:
        t = 1;
        break;
    case 4:
        t = 2;
        break;
    case 5:
        t = 3;
        break;
    case 7:
        t = 4;
        break;
    case 9:
        t = 5;
        break;
    case 10:
        t = 6;
        break;
    case 11:
        t = 7;
        break;
    case 13:
        t = 8;
        break;
    case 14:
        t = 9;
        break;
    default:
        goto tail;
    }
    for (j = 0; j < 8; j++) {
        if (D_002A8490->f2E0->f2C0->func_0005C020(t)->f638[j] != 0) {
            D_002A8490->f2E0->f2C0->func_0005C1B0(mgr->f284, j);
        }
    }
    for (j = 0; j < 3; j++) {
        if (D_002A8490->f2E0->f2C0->func_0005C020(t)->f62C[j] != 0) {
            D_002A8490->f2E0->f2C0->func_0005C170(mgr->f284, j);
        }
    }
tail:
    f4D0 = mgr->f28C;
    f4D4 = mgr->f288;
    D_002B91AC->f34->func_0005E840(D_002A8490->f2E8->f4->f950);
    D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
    D_002B91AC->f38->func_0005E840(D_002A8490->f2E8->f4->f800);
    D_002B91AC->func_000BF860(1, 0x17b, 0x184, 0);
    D_002B91AC->f3C->func_0005E840(D_002A8490->f2E8->f4->f838);
    D_002B91AC->func_000BF860(2, 0xc2, 0x184, 0);
    D_002B91AC->f40->func_0005E840(D_002A8490->f2E8->f4->fF50);
    f508 = 0;
    f2AC = 0;
    for (i = 0; i < 35; i++) {
        a5A0[i]->func_001B1980();
        a62C[i]->func_001B1980();
        a2B4[i] = 0;
        a358[i] = 0;
        a6F0[i] = 0xff;
    }
    f500->func_001B1980();
    f50C = 0;
}

int __stdcall func_000E5150(int index)
{
    C_000E5150_Mgr *mgr = D_002A8490->f2E0;
    return mgr->f2C0->func_0005C020(mgr->f2D8)->f638[index];
}

int __stdcall func_000E5180(int index)
{
    C_000E5150_Mgr *mgr = D_002A8490->f2E0;
    return mgr->f2C0->func_0005C020(mgr->f2D8)->f62C[index];
}

