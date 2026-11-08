/* 2 functions from 0x000D28D0 to 0x000D31C0, found by Ghidra. */
#include "common.h"

extern "C" char * __cdecl strcpy(char *, const char *);
extern "C" char * __cdecl strcat(char *, const char *);
int func_001ADCC0(char *, int, const char *, ...);
extern char D_0027D158[], D_002A64D0[];

struct Sub_D28 {
    char pad0[0x34];
    int f34, f38, f3C;
    void func_000BC590();
    void func_000BC4A0(float a, float b);
    void func_000BC4C0(float a, float b);
};
struct Obj_D28 {
    char pad0[0x270];
    Sub_D28 *f270;
    void func_000BB340();
};
struct Rec_D28 {
    char pad0[0x608];
    int f608, f60C, f610, f614, f618, f61C;
};
struct Unlocks_D28 {
    Rec_D28 *func_0005C020(int idx);
};
struct Mgr_D28 {
    int f0, f4;
    char pad8[0x2C0 - 8];
    Unlocks_D28 *f2C0;
    char pad2C4[0x14];
    int f2D8;
    int thresholds[8];
};
struct Root_D28 {
    char pad0[0x2E0];
    Mgr_D28 *f2E0;
};
extern Root_D28 *D_002A8490;

struct C_000D28D0 {
    char pad0[0x124];
    Obj_D28 *f124;
    char pad128[0x2C4 - 0x128];
    char name[0x104];
    char pad3C8[0x3E8 - 0x3C8];
    int flags[8];
    char pad408[0x418 - 0x408];
    int selected;
    int f41C;
    int f420;
    char pad424[0x450 - 0x424];
    int states[8];
    int currentState;
    char pad474[0x1FE4 - 0x474];
    int f1FE4;
    int f1FE8;
    int f1FEC;
    int completed[8];
    int f2010;
    char pad2014[0x2040 - 0x2014];
    int f2040;
    void func_000D28D0();
    void func_000D2BB0();
};

void C_000D28D0::func_000D28D0()
{
    char buf[8];
    Obj_D28 *obj = f124;
    f1FEC = 1;
    f2010 = 1;
    obj->f270->func_000BC590();
    obj->f270->f34 = 0;
    obj->f270->f38 = 0;
    obj->f270->f3C = 1;
    obj->f270->func_000BC4A0(1.0f, 1.0f);
    obj->f270->func_000BC4C0(0.0f, 0.0f);
    switch (f1FE4) {
    case 0: strcpy(buf, "Mat"); break;
    case 2: strcpy(buf, "Joe"); break;
    case 4: strcpy(buf, "Ric"); break;
    case 5: strcpy(buf, "Mik"); break;
    case 7: strcpy(buf, "Sim"); break;
    case 10: strcpy(buf, "Cor"); break;
    case 9: strcpy(buf, "Kev"); break;
    case 14: strcpy(buf, "Nat"); break;
    case 13: strcpy(buf, "Set"); break;
    case 11: strcpy(buf, "Rub"); break;
    }
    switch (f1FE8) {
    case 0: strcat(buf, "Okl"); break;
    case 1: strcat(buf, "Chic"); break;
    case 2: strcat(buf, "LAng"); break;
    case 3: strcat(buf, "LVeg"); break;
    case 4: strcat(buf, "NOrl"); break;
    case 5: strcat(buf, "Port"); break;
    case 6: strcat(buf, "Bost"); break;
    case 7:
        if (D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f608 == 1)
            strcat(buf, "Fin");
        else
            strcat(buf, "Haw");
        break;
    }
    func_001ADCC0(name, 0x104, D_0027D158, D_002A64D0, buf, ".pss");
    f41C = 1;
    f420 = 0;
    obj->func_000BB340();
}

void C_000D28D0::func_000D2BB0()
{
int rank = ((int *)D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8))[1];
for (int i=0; i<8; i++) {
if (i == selected) {
int *cp = &completed[i];
int *fp = &flags[i];
states[i]=2;
if (*cp) currentState=3;
else if (*fp) currentState=1;
else if (D_002A8490->f2E0->f4 == 0 && rank >= D_002A8490->f2E0->thresholds[i]) {
if (i==2 || i==5) currentState = D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f618 == 1 ? 4 : 0;
else if(i==7) currentState = f2040 >= i ? 4 : 0;
else if (i!=6 || D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f610 == 1 || D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f61C == 1) currentState=4;
else goto locked;
} else goto locked;
goto checked;
locked: currentState=0;
checked:;
} else if(completed[i]) states[i]=3;
else if(flags[i]) states[i]=1;
else if(states[i]!=4) states[i]=0;
if (D_002A8490->f2E0->f4 == 0) switch(i) {
case 0:
if(rank>=D_002A8490->f2E0->thresholds[3] && states[3]!=1 && states[3]!=3) states[3]=4;
if (rank >= D_002A8490->f2E0->thresholds[1] && states[1] != 2 && states[1] != 1 && states[1] != 3) states[1] = 4;
if (rank >= D_002A8490->f2E0->thresholds[4] && states[4] != 2 && states[4] != 1 && states[4] != 3) states[4] = 4;
break;
case 3:
if(D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f618==1 && states[3]!=3) { if(rank>=D_002A8490->f2E0->thresholds[2] && states[2]!=2 && states[2]!=1) states[2]=4;
if (rank >= D_002A8490->f2E0->thresholds[5] && states[5] != 2 && states[5] != 1 && states[5] != 3) states[5] = 4;
}break;
case 2:
if(rank>=D_002A8490->f2E0->thresholds[5] && states[5]!=1 && D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f618==1 && states[3]!=3) states[5]=4;
if(rank>=D_002A8490->f2E0->thresholds[7] && states[7]!=1 && f2040>=7 && D_002A8490->f2E0->f4==0 && D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f614==1 && states[2]!=3) states[7]=4;
break;
case 5:
if(D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f618==1 && states[2]!=1 && states[2]!=3 && rank>=D_002A8490->f2E0->thresholds[2] && states[2]!=2) states[2]=4;
break;
case 7:
if (rank >= D_002A8490->f2E0->thresholds[7] && states[7] != 2 && states[7] != 1 && states[7] != 3 && f2040>=7) states[7] = 4;
break;
case 4:
if (rank >= D_002A8490->f2E0->thresholds[1] && states[1] != 2 && states[1] != 1 && states[1] != 3) states[1] = 4;
if(rank>=D_002A8490->f2E0->thresholds[6] && states[6]!=1 && D_002A8490->f2E0->f4==0 && (D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f610==1 || D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f61C==1)) states[6]=4;
break;
case 1:
if (rank >= D_002A8490->f2E0->thresholds[4] && states[4] != 2 && states[4] != 1 && states[4] != 3) states[4] = 4;
if (rank >= D_002A8490->f2E0->thresholds[6] && states[6] != 2 && states[6] != 1 && states[6] != 3 && D_002A8490->f2E0->f4==0 && (D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f610==1 || D_002A8490->f2E0->f2C0->func_0005C020(D_002A8490->f2E0->f2D8)->f61C==1)) states[6] = 4;
break;
case 6:
if (rank >= D_002A8490->f2E0->thresholds[4] && states[4] != 2 && states[4] != 1 && states[4] != 3) states[4] = 4;
if (rank >= D_002A8490->f2E0->thresholds[1] && states[1] != 2 && states[1] != 1 && states[1] != 3) states[1] = 4;
break;

}
}
}

