/* 4 functions from 0x000DA390 to 0x000DB310, found by Ghidra. */
#include "common.h"

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

/* BmxUIPageViewVideosTitle */
struct C_000DB0E0 {
    void func_000DB0E0(void);
    void func_001578D0(void);
};

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
