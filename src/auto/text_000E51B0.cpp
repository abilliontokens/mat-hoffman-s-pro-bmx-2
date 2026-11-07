/* 1 function from 0x000E51B0 to 0x000E5FF0, found by Ghidra. */
#include "common.h"

struct C_000E51B0_W {
    int w[0x60 / 4];
    C_000E51B0_W *func_001D5760();
    void func_001D5810(int a, int b, int c, int d);
};

struct C_000E51B0_G {
    char pad0[0x2ec];
    int *f2ec;
    char pad2f0[0x10];
    int *f300;
};

struct C_000E51B0_Obj {
    int func_0018C780(int a, void *b, int c);
    int *func_0018C160(char *a);
};

struct C_000E51B0_Y {
    void func_001B17D0(char *a);
};

struct BmxUIPageRiderOps {
    int w[0x900 / 4];
    void func_001BE4F0(int a, int b, int c);
    void func_001577A0(void *p,int n);
    void *func_000E51B0(int a1, int a2, int a3);
};

extern C_000E51B0_G *D_002A8490;
extern char D_0027958C[];
extern char D_00278690[];
extern char D_002786A0[];
extern char D_00278678[];
extern char D_0027FD50[];
extern char D_0027FD48[];
extern char D_0027FD40[];
extern char D_0027FD38[];
extern char D_0027FD28[];
extern char D_0027FD18[];
extern float D_00275AE8;
extern float D_0027FD58;
extern float D_00276228;
void *BmxUIPageRiderOps::func_000E51B0(int a1, int a2, int a3)
{
    int func_001E8A44(...);
    C_000E51B0_Obj *obj;
    int *found;
    int local[3];
    int counter;
    int i;
    int **slot;
    C_000E51B0_W *wid;

    func_001BE4F0(a1, a2, a3);
    obj = (C_000E51B0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    local[0] = 0;
    local[1] = 0;
    local[2] = (int)D_0027958C;
    obj->func_0018C780(1, local, 0);
    obj = (C_000E51B0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    obj->func_0018C160(D_00278690);
    obj = (C_000E51B0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    found = obj->func_0018C160(D_002786A0);
    counter = 0;
    if (found != 0) {
        local[0] = *found;
    } else {
        local[0] = 0;
    }
    obj = (C_000E51B0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    obj->func_0018C160(D_00278678);
    obj = (C_000E51B0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    obj->func_0018C160(D_0027958C);
    i = 0;
    slot = (int **)((char *)this + 0x528);
    for (counter = 0; counter < 0x64; counter += 0x14) {
        int ebp;
        float fv;
        wid = (C_000E51B0_W *)func_001E8A44(0x64);
        if (wid != 0) {
            wid->func_001D5760();
        } else {
            wid = 0;
        }
        slot[-5] = (int *)wid;
        fv = (float)counter * D_00275AE8 + D_0027FD58;
        ebp = *(int *)&fv;
        wid->func_001D5810((int)D_0027FD50, 0x43250000, ebp, 0);
        if (wid->w[0x34 / 4] != 0x3f800000) {
            wid->w[0x34 / 4] = 0x3f800000;
            *((char *)wid + 0x58) |= 1;
        }
        if (wid->w[0x2c / 4] != 0x41600000) {
            wid->w[0x2c / 4] = 0x41600000;
            *((char *)wid + 0x58) |= 1;
        }
        wid->w[0x38 / 4] = (wid->w[0x38 / 4] & 0xff5a648b) | 0x5a648b;
        *((char *)wid + 0x58) |= 2;
        wid = (C_000E51B0_W *)func_001E8A44(0x64);
        if (wid != 0) {
            wid->func_001D5760();
        } else {
            wid = 0;
        }
        slot[0] = (int *)wid;
        wid->func_001D5810((int)D_0027FD50, 0x43240000, 0, 0);
        if (wid->w[0x2c / 4] != 0x41800000) {
            wid->w[0x2c / 4] = 0x41800000;
            *((char *)wid + 0x58) |= 1;
        }
        if (wid->w[0x28 / 4] != 0x42fe0000) {
            wid->w[0x28 / 4] = 0x42fe0000;
            *((char *)wid + 0x58) |= 1;
        }
        wid->w[0x38 / 4] = (wid->w[0x38 / 4] & 0xff141414) | 0x141414;
        *((char *)wid + 0x58) |= 2;
        if (wid->w[0x34 / 4] != 0x40a00000) {
            wid->w[0x34 / 4] = 0x40a00000;
            *((char *)wid + 0x58) |= 1;
        }
        slot++;
        i++;
    }
    ((C_000E51B0_Y *)w[0x578 / 4])->func_001B17D0(D_0027FD48);
    ((C_000E51B0_Y *)w[0x57c / 4])->func_001B17D0(D_0027FD40);
    ((C_000E51B0_Y *)w[0x580 / 4])->func_001B17D0(D_0027FD38);
    ((C_000E51B0_Y *)w[0x584 / 4])->func_001B17D0(D_0027FD28);
    ((C_000E51B0_Y *)w[0x588 / 4])->func_001B17D0(D_0027FD18);
    return this;
}
extern C_000E51B0_G *D_002A8490;
extern char D_0027958C[],D_00278690[],D_002786A0[],D_00278678[],D_0027FD50[];
extern char D_0027FD48[],D_0027FD40[],D_0027FD38[],D_0027FD28[],D_0027FD18[];
extern char D_00279AF0[],D_00279AD0[],D_00279B00[],D_00279AE0[];
extern float D_00275AE8,D_0027FD58,D_00276228,D_0027FD4C;
extern int D_0028F5EC;
extern "C" void * __cdecl func_001E8A44(int);
struct RiderText {
int w[0x184/4];
RiderText *func_001B12C0(int);
void func_001B13A0(char*,char*,int,int);
void func_001B1A30(float,float,int);
void func_001B2270(int);
void func_001B19A0(int);
};
struct RiderLabel {
int w[0x60/4];
RiderLabel *func_001D5E90();
void func_001D5FA0(int,char*,int,int);
};
