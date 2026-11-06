/* 1 function from 0x0007A0F0 to 0x0007BAD0, found by Ghidra. */
#include "common.h"

/* sprite widget (0x64 bytes) */
struct C_0007A0F0_W {
    union {
        int w[0x60 / 4];
        struct {
            char pad0[4];
            int f4;
            int f8;
            char padC[0x28 - 0xc];
            int f28;
            int f2C;
            char pad30[0x3c - 0x30];
            float f3C;
            float f40;
            float f44;
            float f48;
            float f4C;
            float f50;
            char pad54[4];
            unsigned char f58;
        };
    };
    C_0007A0F0_W *func_001D5760(void);
    void func_001D5810(int a, int b, int c, int d);
    void func_001D5810(const char *s, float x, float y, int z);
};

/* label widget (0x60 bytes) */
struct C_0007A0F0_L {
    union {
        int w[0x60 / 4];
        struct {
            char pad0[4];
            int f4;
            int f8;
            char padC[0x44 - 0xc];
            int f44;
            int f48;
            char pad4C[2];
            unsigned char f4E;
        };
    };
    C_0007A0F0_L *func_001D5E90(void);
    void func_001D5FA0(int a, int b, int c, int d);
    void func_001D5FA0(int font, const char *s, int a, int b);
    void func_0005E840(int a);
};

struct C_0007A0F0_Obj {
    int func_0018C780(int a, void *b, int c);
    int *func_0018C160(char *a);
};

struct C_0007A0F0_Sub {
    char pad0[0x9b8];
    int f9B8;
    char pad9bc[0xf08 - 0x9bc];
    int fF08;
};
struct C_0007A0F0_Pair {
    char pad0[4];
    C_0007A0F0_Sub *f4;
};
struct C_0007A0F0_Root {
    char pad0[0x2e8];
    C_0007A0F0_Pair *f2e8;
    C_0007A0F0_Obj *f2ec;
};

struct BmxObjectivesMenu {
    union {
        int w[0x900 / 4];
        struct {
            char pad0[0xfc];
            C_0007A0F0_W *f0FC;
            C_0007A0F0_W *f100;
            char pad104[4];
            C_0007A0F0_W *f108;
            C_0007A0F0_W *f10C;
            C_0007A0F0_W *f110;
            C_0007A0F0_W *f114;
            C_0007A0F0_W *f118;
            C_0007A0F0_W *f11C;
            char pad120[0x17c - 0x120];
            C_0007A0F0_W *f17C[5];
            C_0007A0F0_W *f190[5];
            char pad1a4[0x1b4 - 0x1a4];
            C_0007A0F0_W *f1B4;
            C_0007A0F0_W *f1B8;
            C_0007A0F0_L *f1BC[2];
            C_0007A0F0_L *f1C4;
            char pad1c8[0x1d0 - 0x1c8];
            int f1D0;
            char pad1d4[0x200 - 0x1d4];
            C_0007A0F0_L *f200;
        };
    };
    void *func_0007A0F0(int a);
};

extern C_0007A0F0_Root *D_002A8490;
extern char D_00278648[], D_00278624[], D_00278638[], D_00278608[], D_00279008[];
extern char D_00278FF0[], D_00278FE0[], D_00278FD0[];
void *func_001E8A44(unsigned int size);
extern char D_00278678[];
extern char D_002786A0[];
extern char D_00278690[];
extern char D_00278658[];
extern int D_00279018;
extern int D_0027901C;
extern int D_00279020;
extern int D_00279024;
extern int D_002A60B0;
extern int D_002A60B4;
extern int D_002A60B8;
extern int D_002A60BC;
extern float D_00278654;
extern float D_00275544;
extern float D_0027653C;
extern float D_00278650;
extern int D_0028F5E0;
extern int D_0028F5DC;
void *BmxObjectivesMenu::func_0007A0F0(int a)
{
    int func_001E8A44(...);
    C_0007A0F0_Obj *obj;
    int *found;
    int local[4];
    int counter;
    int i;
    C_0007A0F0_W *wid;
    C_0007A0F0_L *lab;
    int **slot;

    w[0x1d0 / 4] = a;
    obj = (C_0007A0F0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    local[1] = (int)D_00278678;
    obj->func_0018C780(1, &local[1], 0);
    obj = (C_0007A0F0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    obj->func_0018C160(D_002786A0);
    obj = (C_0007A0F0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    found = obj->func_0018C160(D_00278690);
    if (found != 0) {
        local[0] = *found;
    } else {
        local[0] = 0;
    }
    obj = (C_0007A0F0_Obj *)*(int *)((char *)D_002A8490 + 0x2ec);
    found = obj->func_0018C160(D_00278678);
    if (found != 0) {
        local[2] = *found;
    } else {
        local[2] = 0;
    }
    D_002A60B0 = D_00279018;
    D_002A60B4 = D_0027901C;
    D_002A60B8 = D_00279020;
    D_002A60BC = D_00279024;
    wid = (C_0007A0F0_W *)func_001E8A44(0x64);
    if (wid != 0) {
        wid->func_001D5760();
    } else {
        wid = 0;
    }
    w[0xfc / 4] = (int)wid;
    wid->func_001D5810((int)D_00278658, 0, 0, 0);
    {
        float t = *(float *)((char *)wid + 0x4c) * D_00278654;
        *(float *)((char *)wid + 0x3c) = t;
        *(char *)((char *)wid + 0x58) |= 4;
        *(float *)((char *)wid + 0x40) = *(float *)((char *)wid + 0x4c) * D_00275544;
        *(float *)((char *)wid + 0x44) = *(float *)((char *)wid + 0x50) * D_0027653C;
        *(float *)((char *)wid + 0x48) = *(float *)((char *)wid + 0x50) * D_00275544;
    }
    if (wid->w[0x2c / 4] != 0x42480000) {
        wid->w[0x2c / 4] = 0x42480000;
        *((char *)wid + 0x58) |= 1;
    }
    if (wid->w[0x28 / 4] != 0x44200000) {
        wid->w[0x28 / 4] = 0x44200000;
        *((char *)wid + 0x58) |= 1;
    }
    wid = (C_0007A0F0_W *)func_001E8A44(0x64);
    if (wid != 0) {
        wid->func_001D5760();
    } else {
        wid = 0;
    }
    w[0x100 / 4] = (int)wid;
    wid->func_001D5810((int)D_00278658, 0x43c70000, 0, 0);
    {
        float t = *(float *)((char *)wid + 0x4c) * D_00278654;
        *(float *)((char *)wid + 0x3c) = t;
        *(char *)((char *)wid + 0x58) |= 4;
        *(float *)((char *)wid + 0x40) = *(float *)((char *)wid + 0x4c) * D_00275544;
        *(float *)((char *)wid + 0x44) = *(float *)((char *)wid + 0x50) * D_0027653C;
        *(float *)((char *)wid + 0x48) = *(float *)((char *)wid + 0x50) * D_00275544;
    }
    if (wid->w[0x28 / 4] != 0x44200000) {
        wid->w[0x28 / 4] = 0x44200000;
        *((char *)wid + 0x58) |= 1;
    }
    if (wid->w[0x2c / 4] != 0x42480000) {
        wid->w[0x2c / 4] = 0x42480000;
        *((char *)wid + 0x58) |= 1;
    }
    counter = 0;
    slot = (int **)((char *)this + 0x190);
    for (i = 0; i < 5; i++) {
        int ebp;
        float fv;
        wid = (C_0007A0F0_W *)func_001E8A44(0x64);
        if (wid != 0) {
            wid->func_001D5760();
        } else {
            wid = 0;
        }
        fv = (float)counter * D_00278650;
        ebp = *(int *)&fv;
        slot[-5] = (int *)wid;
        wid->func_001D5810((int)D_00278658, 0x42480000, ebp, 0);
        wid = (C_0007A0F0_W *)func_001E8A44(0x64);
        if (wid != 0) {
            wid->func_001D5760();
        } else {
            wid = 0;
        }
        slot[0] = (int *)wid;
        wid->func_001D5810((int)D_00278658, 0x43b70000, ebp, 0);
        wid->w[0x3c / 4] = 0;
        wid->w[0x48 / 4] = 0;
        wid->w[0x40 / 4] = 0x3f800000;
        wid->w[0x44 / 4] = 0x3f7d70a4;
        *((char *)wid + 0x58) |= 4;
        slot++;
        counter += 0x14;
    }
    lab = (C_0007A0F0_L *)func_001E8A44(0x60);
    if (lab != 0) {
        lab->func_001D5E90();
    } else {
        lab = 0;
    }
    w[0x200 / 4] = (int)lab;
    lab->func_001D5FA0(local[2], (int)D_00278678, 0x18, 0);
    if (lab->w[4 / 4] != 0x43a00000 || lab->w[8 / 4] != 0x42200000) {
        lab->w[8 / 4] = 0x42200000;
        lab->w[4 / 4] = 0x43a00000;
        *((char *)lab + 0x4e) |= 6;
    }
    if (lab->w[0x48 / 4] != 0xffcccccc) {
        lab->w[0x48 / 4] = (lab->w[0x48 / 4] & 0xffcccccc) | 0xcccccc;
        *((char *)lab + 0x4e) |= 8;
    }
    if (lab->w[0x44 / 4] != D_0028F5E0) {
        lab->w[0x44 / 4] = D_0028F5E0;
        *((char *)lab + 0x4e) |= 6;
    }
    lab = (C_0007A0F0_L *)func_001E8A44(0x60);
    if (lab != 0) {
        lab->func_001D5E90();
    } else {
        lab = 0;
    }
    w[0x1c4 / 4] = (int)lab;
    lab->func_001D5FA0(local[0], (int)D_00278690, 0x14, 0);
    if (lab->w[4 / 4] != 0x41a00000 || lab->w[8 / 4] != 0x43c48000) {
        lab->w[4 / 4] = 0x41a00000;
        lab->w[8 / 4] = 0x43c48000;
        *((char *)lab + 0x4e) |= 6;
    }
    if (lab->w[0x48 / 4] != 0xff5eff5e) {
        lab->w[0x48 / 4] = (lab->w[0x48 / 4] & 0xff5eff5e) | 0x5eff5e;
        *((char *)lab + 0x4e) |= 8;
    }
    if (lab->w[0x44 / 4] != D_0028F5DC) {
        lab->w[0x44 / 4] = D_0028F5DC;
        *((char *)lab + 0x4e) |= 6;
    }
    return this;
}
