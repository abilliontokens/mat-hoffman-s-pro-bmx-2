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

struct S_002A8490_Mgr {
    char pad0[0x2c4];
    int f2c4;
    char pad2c8[0x300 - 0x2c8];
    void *arr300[1];
};

struct S_002A8490_Root {
    char pad0[0x2e0];
    S_002A8490_Mgr *f2e0;
};

extern S_002A8490_Root *D_002A8490;

struct S_00104C80_Obj {
    void func_00104C80(void *a);
};

struct S_BmxEvent_Scene {
    char pad0[0x24];
    int f24;
    char pad28[0x1a8 - 0x28];
    S_00104C80_Obj *arr1a8[1];
};

/* the level object an event works on */
struct S_BmxEvent_Level {
    char pad0[0x4e0];
    S_BmxEvent_Scene *f4e0;
    int func_000AF900(int a);
    void func_000B03A0(int a, int b, int c);
    void *func_000A1990(void *p, int n);
};

struct S_BmxEvent_Hook {
    void func_00099500(int a);
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
    char pad15c[0x1c0 - 0x15c];
    S_BmxEvent_Hook *f1c0;
    void *f1c4;
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

struct C_00032060 {
    char pad0[0x68];
    S_ScoreTable *unk68;
    int func_00032060(int score, char *name);
    int func_000320A0(float value, char *name);
    int func_000320E0(int score, char *name);
    int func_00032120(float value, char *name);
    int func_00032150(float value, char *name);
};


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

void BmxEvent::func_000324C0(int a)
{
    if (f1c0 != 0) {
        f1c0->func_00099500(a);
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
