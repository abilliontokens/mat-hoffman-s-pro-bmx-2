/* 30 functions from 0x000318A0 to 0x00032860, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

extern char D_002A5870[];
extern char D_00276B9C[];

/* the engine's file-load wrapper (D_002BEAAC) */
struct S_002BEAAC_Loader {
    void func_0013D780(char *name, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    int func_0013DFF0(char *name, int a2);
};

extern S_002BEAAC_Loader *D_002BEAAC;

/* something with a bitmask-style flag set (hint/helper state) */
struct S_0005C1D0_Obj {
    int func_0005C1D0(int flag);
    void func_0005C1E0(int flag);
};

struct S_002A8490_Mgr {
    char pad0[4];
    int f4;
    char pad8[0x2c0 - 8];
    S_0005C1D0_Obj *f2c0;
    int f2c4;
    char pad2c8[0x300 - 0x2c8];
    void *arr300[1];
};

struct S_002A8490_Cam {
    char pad0[0x1240];
    int f1240;
};

struct S_002A8490_Player {
    char pad0[4];
    S_002A8490_Cam *f4;
};

struct S_002A8490_Root {
    char pad0[0x2e0];
    S_002A8490_Mgr *f2e0;
    char pad2e4[4];
    S_002A8490_Player *f2e8;
};

extern S_002A8490_Root *D_002A8490;

struct S_00108510_Vec {
    int x, y, z, w;
};

/* a rider/player object; f11b0 is its id */
struct S_00104C80_Obj {
    char pad0[0x11b0];
    int f11b0;
    void func_00104C80(void *a);
    void func_00108360(void);
    void func_00108510(int a, S_00108510_Vec v);
    void func_00108610(int a, int b);
};

struct S_00083A70_Obj {
    void func_00083A70(int a);
};

struct S_BmxEvent_Scene {
    char pad0[0x24];
    int f24;
    char pad28[0x1a8 - 0x28];
    S_00104C80_Obj *arr1a8[1];
};

/* the level object an event works on */
struct S_BmxEvent_Level {
    char pad0[0x3e4];
    int f3e4;
    char pad3e8[0x4a8 - 0x3e8];
    int *f4a8;
    char pad4ac[0x4e0 - 0x4ac];
    S_BmxEvent_Scene *f4e0;
    int func_000AF900(int a);
    void func_000B03A0(int a, int b, int c);
    void *func_000A1990(void *p, int n);
};

struct S_BmxEvent_Hook {
    void func_00099500(int a);
};

struct C_0002EF70 {
    void func_0002EF70(int a, int b);
};

struct C_00030240 {
    void func_00030240(int a, int b, int c, int d, int e);
};

struct C_0012A770 {
    void func_0012A770(int a, int b);
};

/* BmxEvent: a GameObject (vtable, sibling/child links in the base) */
struct BmxEvent {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0A(); virtual void v0B();
    virtual void v0C(); virtual void v0D(); virtual void v0E(); virtual void v0F();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1A(); virtual void v1B();
    virtual void v1C(); virtual void v1D(); virtual void v1E(); virtual void v1F();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25();
    virtual void v26();
    char pad4[0x20];
    int f24[8];
    void *f44[8];
    S_BmxEvent_Level *f64;
    char pad68[0x90 - 0x68];
    int f90;
    char pad94[0x158 - 0x94];
    void *f158;
    char pad15c[0x170 - 0x15c];
    S_00083A70_Obj *f170;
    char pad174[0x1c0 - 0x174];
    S_BmxEvent_Hook *f1c0;
    void *f1c4;
    void func_00032280(int id, int a1, int a2, int a3, int a4, int a5);
    void func_00032300(void);
    void func_00032360(int id, int a1, int a2);
    void func_000323C0(int id, int a1, int a2, int a3, int a4, int a5);
    void func_000324C0(int a);
    int func_00031D80(void);
    void func_00031E20(void);
    int func_00031E80(void);
    void *func_001577A0(void *child, int b);
};

struct C_00032720 {
    void func_00032720(void);
};

struct C_001041A0 {
    char pad0[0xc0];
    unsigned char fC0;
    void func_001041A0(void);
    void func_001041C0(void);
};

struct C_00032550 {
    char pad0[0x1c4];
    C_001041A0 *unk1C4;
    void func_00032530(void);
    void func_00032550(void);
};

struct C_00031F10 {
    int func_00157B90(int a, int b);
    int func_00031F10(int a, int b);
};

/* score table: type selects one of the ranked lists */
struct S_ScoreTable {
    int func_0005B960(int type, float value);
    int func_0005BA80(int type, float value, char *name);
};

struct C_0010E810 {
    char pad0[0xa40];
    int fA40;
    char padA44[0x1190 - 0xa44];
    int f1190;
    char pad1194[0x11b0 - 0x1194];
    int f11B0;
    void func_0010E810(void);
    void func_001084E0(void);
    void func_00108630(int a);
};

struct C_000A4500 {
    char pad0[0x1a8];
    C_0010E810 *items[1];
    void func_000A4500(int a, int b);
};

struct S_Owner64 {
    char pad0[0x4e0];
    C_000A4500 *f4E0;
};

struct C_000321C0 {
    char pad0[0x64];
    S_Owner64 *unk64;
    char pad68[0x28];
    int unk90;
    void func_000321C0(void);
    void func_000321F0(void);
    void func_00032220(void);
    void func_00032410(int tag, int amount);
    void func_00032460(int tag, int arg);
    void func_000324E0(int tag);
};

struct C_00032060 {
    char pad0[0x68];
    S_ScoreTable *unk68;
    int func_00032180(int score, char *name);
    int func_00032060(int score, char *name);
    int func_000320A0(float value, char *name);
    int func_000320E0(int score, char *name);
    int func_00032120(float value, char *name);
    int func_00032150(float value, char *name);
};


int BmxEvent::func_00031D80(void)
{
    char buf[0x104];

    if (D_002A8490->f2e0->f2c4 != 0) {
        func_001ADCC0(buf, 0x104, D_00276B9C, D_002A5870);
        D_002BEAAC->func_0013D780(buf, 1, 0, 0, 0, 0, 0, 0);
        if (f64->func_000AF900(0) == 0) {
            return 0;
        }
        f64->func_000B03A0(0, 0, 0);
        D_002BEAAC->func_0013DFF0(buf, 1);
    }
    return 1;
}

void BmxEvent::func_00031E20(void)
{
    int i = 0;

    if (f64->f4e0->f24 > 0) {
        do {
            f64->f4e0->arr1a8[i]->func_00104C80(D_002A8490->f2e0->arr300[i]);
            i++;
        } while (i < f64->f4e0->f24);
    }
}

int BmxEvent::func_00031E80(void)
{
    int i;

    v26();
    if (f158 != 0) {
        func_001577A0(f158, 10);
    }
    if (f64 != 0) {
        func_001577A0(f64->func_000A1990(f24, f90), -1);
    }
    for (i = 0; i < f90; i++) {
        func_001577A0(f44[i], -1);
    }
    if (f1c4 != 0) {
        func_001577A0(f1c4, -1);
    }
    return 1;
}

int C_00031F10::func_00031F10(int a, int b)
{
    return func_00157B90(a, b) != 0;
}

int C_00032060::func_00032060(int score, char *name)
{
    if (unk68->func_0005B960(3, (float)score) != 0) {
        unk68->func_0005BA80(3, (float)score, name);
        return 1;
    }
    return 0;
}

int C_00032060::func_000320A0(float value, char *name)
{
    if (unk68->func_0005B960(1, value) != 0) {
        unk68->func_0005BA80(1, value, name);
        return 1;
    }
    return 0;
}

int C_00032060::func_000320E0(int score, char *name)
{
    if (unk68->func_0005B960(4, (float)score) != 0) {
        unk68->func_0005BA80(4, (float)score, name);
    }
    return 0;
}

int C_00032060::func_00032120(float value, char *name)
{
    if (unk68->func_0005B960(2, value) != 0) {
        unk68->func_0005BA80(2, value, name);
    }
    return 0;
}

int C_00032060::func_00032150(float value, char *name)
{
    if (unk68->func_0005B960(0, value) != 0) {
        unk68->func_0005BA80(0, value, name);
    }
    return 0;
}

int C_00032060::func_00032180(int score, char *name)
{
    if (unk68->func_0005B960(5, (float)score) != 0) {
        unk68->func_0005BA80(5, (float)score, name);
        return 1;
    }
    return 0;
}

void C_000321C0::func_000321C0(void)
{
    int i;

    for (i = 0; i < unk90; i++) {
        unk64->f4E0->func_000A4500(0, i);
    }
}

void C_000321C0::func_000321F0(void)
{
    int i;

    for (i = 0; i < unk90; i++) {
        unk64->f4E0->func_000A4500(1, i);
    }
}

void C_000321C0::func_00032220(void)
{
    int i;

    for (i = 0; i < unk90; i++) {
        unk64->f4E0->items[i]->f1190 = 1;
        unk64->f4E0->items[i]->func_0010E810();
    }
}

void BmxEvent::func_00032280(int id, int a1, int a2, int a3, int a4, int a5)
{
    int i;

    for (i = 0; i < f90; i++) {
        S_00104C80_Obj *item = f64->f4e0->arr1a8[i];
        if (item->f11b0 == id) {
            S_00108510_Vec v;
            v.x = a2;
            v.y = a3;
            v.z = a4;
            v.w = a5;
            item->func_00108510(a1, v);
        }
    }
}

void BmxEvent::func_00032300(void)
{
    if (D_002A8490->f2e0->f2c0->func_0005C1D0(0xf) == 0) {
        f170->func_00083A70(D_002A8490->f2e8->f4->f1240);
        D_002A8490->f2e0->f2c0->func_0005C1E0(0xf);
    }
}

void BmxEvent::func_00032360(int id, int a1, int a2)
{
    int i;

    for (i = 0; i < f90; i++) {
        S_00104C80_Obj *item = f64->f4e0->arr1a8[i];
        if (item->f11b0 == id) {
            item->func_00108610(a1, a2);
        }
    }
}

void BmxEvent::func_000323C0(int id, int a1, int a2, int a3, int a4, int a5)
{
    int i;

    for (i = 0; i < f90; i++) {
        S_00104C80_Obj *item = f64->f4e0->arr1a8[i];
        if (item->f11b0 == id) {
            item->func_00108360();
        }
    }
}

void C_000321C0::func_00032410(int tag, int amount)
{
    int i;

    for (i = 0; i < unk90; i++) {
        C_0010E810 *item = unk64->f4E0->items[i];
        if (item->f11B0 == tag) {
            item->fA40 += amount;
        }
    }
}

void C_000321C0::func_00032460(int tag, int arg)
{
    int i;

    for (i = 0; i < unk90; i++) {
        if (unk64->f4E0->items[i]->f11B0 == tag) {
            unk64->f4E0->items[i]->func_00108630(arg);
        }
    }
}

void BmxEvent::func_000324C0(int a)
{
    if (f1c0 != 0) {
        f1c0->func_00099500(a);
    }
}

void C_000321C0::func_000324E0(int tag)
{
    int i;

    for (i = 0; i < unk90; i++) {
        if (unk64->f4E0->items[i]->f11B0 == tag) {
            unk64->f4E0->items[i]->func_001084E0();
        }
    }
}

void C_00032550::func_00032530(void)
{
    if (unk1C4 != 0) {
        unk1C4->fC0 &= ~2;
        unk1C4->func_001041C0();
    }
}

void C_00032550::func_00032550(void)
{
    if (unk1C4 != 0) {
        unk1C4->func_001041A0();
    }
}

void C_00032720::func_00032720(void)
{
  int func_0001BE50(...);
  int in_ECX = (int)this;
  
  if (*(int *)(*(int *)(in_ECX + 100) + 0x484) != 0) {
    func_0001BE50();
    return;
  }
  return;
}
