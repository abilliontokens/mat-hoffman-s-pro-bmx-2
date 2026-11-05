/* 11 functions from 0x000B1350 to 0x000B21B0, found by Ghidra. */
#include "common.h"

extern int D_0027CF8C;
extern u32 D_002A2DC4;
extern u32 D_002A2DC8;
extern u32 D_002A2DCC;
extern u32 D_002A2DD0;

struct S_000B1660_Arg {
    char pad0[0x54];
    int f54;
};
struct S_000B1660_Item {
    char pad0[0x3B0];
    int f3B0, f3B4;
    char pad3B8[0x24];
    u8 f3DC, f3DD;
    void func_00014850(int a);
};
struct S_000B1660_Entry { int f0, f4, f8; };
struct S_000B1660_Global {
    char pad0[0x578];
    int f578;
    S_000B1660_Item **f57C;
    char pad580[0xC];
    int f58C;
    S_000B1660_Entry **f590;
};
extern S_000B1660_Global *D_002B9120;
struct C_000B1660 {
    char pad0[0x44];
    S_000B1660_Arg **f44;
    void func_000B1660(S_000B1660_Arg *a);
};

struct VehicleV4 {
    u32 x, y, z, w;
};

/* config record reader (func_00168BE0 reads a string, func_00168C20 an int, func_00168CB0 a vec4) */
struct S_000B1A40_Stream {
    void func_00168BE0(const char *key, const char *def, char *dst, int size);
    void func_00168C20(const char *key, int def, void *dst);
    void func_00168CB0(const char *key, void *def, void *dst);
};

struct C_000B1A40 {
    int f0;
    char pad4[4];
    int f8;
    u32 fC[4];
    u32 f1C[4];
    u32 f2C[4];
    char name[0x244 - 0x3C];
    char text[0x104];
    void func_000B1A40(S_000B1A40_Stream *stream);
};

extern char D_002764F0[];
extern char D_00276310[];
extern char D_0027CEF0[];
extern char D_00275AE0[];
extern char D_00275680[];
extern char D_00275AD4[];
extern char D_00275AC8[];
extern char D_0027CEE4[];
extern char D_0027CED8[];
extern u32 D_002A2DF4;
extern u32 D_002A2DE4;
int func_001E9040(char *str, char *control);
char *func_001E8920(char *dst, const char *src, int n);

struct C_0018C7B0 {
    void func_0018C7B0(int a0);
};

struct VehicleAIOwner {
    char pad0[0x4B8];
    int f4B8;
};

/* three levels deep from D_002A8490: +0x2A4 -> +0x1C8 is a mode word */
struct S_000B1740_Mode { char pad0[0x1C8]; int f1C8; };
struct S_000B1740_Root { char pad0[0x2A4]; S_000B1740_Mode *f2A4; };
extern S_000B1740_Root *D_002A8490;

/* a widget whose float lives at +0xC */
struct S_000B1740_Widget { char pad0[0xC]; float fC; };
/* four widget slots at +0xC..+0x18 */
struct S_000B1740_Panel { char pad0[0xC]; S_000B1740_Widget *f0C; S_000B1740_Widget *f10; S_000B1740_Widget *f14; S_000B1740_Widget *f18; };

static __inline int Min_000B1740(int a, int b) { return a > b ? b : a; }
static __inline int Max_000B1740(int a, int b) { return a < b ? b : a; }

struct VehicleAI {
    void *vtbl;
    char pad4[0x38];
    VehicleAIOwner *f3C;
    u32 f40;
    u32 f44;
    u32 f48;
    char pad4C[4];
    s32 f50;
    s32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6C;
    u32 f70;
    u32 f74;
    u32 f78;
    u32 f7C;
    u32 f80;
    u32 f84;
    u32 f88;
    u32 f8C;
    u32 f90;
    u32 f94;
    u32 f98;
    char pad9C[0x104];
    u8 f1A0;
    u8 f1A1;
    u8 f1A2;
    u8 f1A3;
    char pad1A4[0x103];
    u8 f2A7;
    u8 f2A8;
    u8 f2A9;
    u8 f2AA;
    u8 f2AB;
    VehicleAI *func_000B1EE0(int a0);
    void func_000B1F70(void);
};

void C_000B1660::func_000B1660(S_000B1660_Arg *a) {
 for (int i = 0; i < D_002B9120->f578; i++) {
 S_000B1660_Item *item = D_002B9120->f57C[i];
 if (item->f3DD != 1) {
 for (int j = 0; j < D_002B9120->f58C; j++) {
 S_000B1660_Entry *entry = D_002B9120->f590[j];
 if (entry->f0 == item->f3B4 && entry->f4 == item->f3B0 && f44[entry->f8] == a) {
 if (item->f3DC == 0 && a->f54 != 1) item->func_00014850(2);
 else if (item->f3DC == 1 && a->f54 == 1) item->func_00014850(1);
 }
 }
 }
 }
}

int func_000B1740(VehicleAI *ai, S_000B1740_Panel *panel)
{
    if (D_002A8490->f2A4->f1C8 == 1) {
        int hi = 2;
        int lo = 0;
        int v = ai->f50;
        const int &m = (hi < v) ? hi : v;
        const int &r = (m < lo) ? lo : m;
        ai->f50 = r;
    }
    if (panel->f0C != 0) {
        panel->f0C->fC = (float)ai->f50;
    }
    if (panel->f10 != 0) {
        panel->f10->fC = (float)ai->f50;
    }
    if (panel->f14 != 0) {
        panel->f14->fC = (float)ai->f50;
    }
    if (panel->f18 != 0) {
        panel->f18->fC = (float)ai->f50;
    }
    return 0;
}

VehicleAI *VehicleAI::func_000B1EE0(int a0) {
    ((C_0018C7B0 *)this)->func_0018C7B0(a0);
    vtbl = (void *)&D_0027CF8C;
    f7C = f80 = f84 = 0;
    f88 = 0x3f800000;
    f98 = 0x3f800000;
    f8C = f90 = f94 = 0;
    f3C = 0;
    f40 = 0;
    f44 = 0;
    f1A0 = 0;
    f1A2 = 0;
    f64 = 0;
    f48 = 0;
    f78 = 0;
    f1A3 = 0;
    f50 = -1;
    f54 = -1;
    f6C = 0x41100000;
    return this;
}

void VehicleAI::func_000B1F70(void) {
    f70 = 0;
    f2A9 = 0;
    f2AB = 0;
    f2AA = 0;
    f1A1 = 0;
    f5C = 0;
    f58 = 0;
    *(VehicleV4 *)&f8C = *(VehicleV4 *)&D_002A2DC4;
    if (f2A7 == 1) {
        f60 = f3C->f4B8 + 2;
        f2A8 = 1;
        f64 = 0x3f800000;
        f68 = 0;
        f74 = 1;
    } else {
        f60 = 0;
        f2A8 = 0;
        f64 = 0;
        f68 = 0x3f800000;
        f74 = 0;
    }
}

void func_000B2010(void) {
    extern int D_0027CF70;
    int __stdcall func_0018C890(int);
    func_0018C890((int)&D_0027CF70);
}
