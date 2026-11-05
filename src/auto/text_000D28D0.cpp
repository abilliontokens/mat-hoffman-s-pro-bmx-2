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
    int f608;
};
struct Unlocks_D28 {
    Rec_D28 *func_0005C020(int idx);
};
struct Mgr_D28 {
    char pad0[0x2C0];
    Unlocks_D28 *f2C0;
    char pad2C4[0x14];
    int f2D8;
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
    char pad3C8[0x41C - 0x3C8];
    int f41C;
    int f420;
    char pad424[0x1FE4 - 0x424];
    int f1FE4;
    int f1FE8;
    int f1FEC;
    char pad1FF0[0x2010 - 0x1FF0];
    int f2010;
    void func_000D28D0();
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
