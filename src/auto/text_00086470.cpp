/* 18 functions from 0x00085630 to 0x00086530, found by Ghidra. */
#include "common.h"
struct C_00085630_Manager {
 void func_0018C780(int, const char **, int);
 int *func_0018C160(const char *);
};
extern char D_00278690[], D_002796B0[];
extern int D_0028F5DC, D_0028F5E0;
void *func_001E8A44(unsigned int);
extern "C" char *strcpy(char *, const char *);
extern "C" unsigned int strlen(const char *);
struct C_0005E840 { void func_0005E840(const char *s); };
struct C_00085E50 {
    char pad0[0x84];
    C_0005E840 *f84, *f88, *f8C, *f90;
    char pad94[0xC];
    int fA0;
    void func_00085E50(int a);
};
extern char D_00275630[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct C_000861A0 {
    char pad0[0xD0];
    int unkD0;
    int func_000861A0(int a0);
};

struct C_00086150 {
    char pad0[0xC4];
    int unkC4;
    void func_00086150(int a0);
};

struct C_00086140 {
    char pad0[0xF4];
    int unkF4;
    void func_00086140(int a0);
};

struct C_00086130 {
    char pad0[0xF0];
    int unkF0;
    void func_00086130(int a0);
};

struct C_00086190 {
    char pad0[0xC4];
    int unkC4;
    void func_00086190(void);
};

struct C_00086180 {
    char pad0[0xC4];
    int unkC4;
    int func_00086180(void);
};

struct C_00085F40_Obj4 {
    char pad0[0x1048];
    char *f1048;
    char pad104C[4];
    char *f1050;
    char pad1054[4];
    char *f1058;
    char pad105C[0x94];
    char *f10F0;
};

struct C_00085F40_Obj2E8 {
    char pad0[4];
    C_00085F40_Obj4 *f4;
};

struct C_00085630_2E0 {
    int count;
    char pad4[0x2D0];
    int f2D4;
};

struct C_00085630_2A8490 {
    char pad0[0x2E0];
    C_00085630_2E0 *f2E0;
    char pad2E4[4];
    C_00085F40_Obj2E8 *f2E8;
};

struct C_00085F40 {
    char pad0[0x84];
    C_0005E840 *f84, *f88, *f8C, *f90;
    char pad94[0xC];
    int fA0;
    void func_00085F40(int a);
};

extern C_00085630_2A8490 *D_002A8490;
extern char D_00279058[];

struct C_00086030 {
    char pad0[0x84];
    C_0005E840 *f84, *f88, *f8C, *f90;
    char pad94[0xC];
    int fA0;
    char padA4[0x20];
    int fC4;
    void func_00086030(int a);
};

extern int D_002796BC;

struct C_00086160 {
    char pad0[0xA4];
    int unkA4[17];
    int unkE8;
    int unkEC;
    void func_00086160(float a);
    int func_000861C0(int idx);
    void func_00086200(void);
};

void func_001E891B(void *p);

struct S_000864D0_Obj {
    void func_001D6410(void);
};

struct C_00157660 {
    void func_00157660(void);
};

struct MountVertOverlay {
    void *vtbl;
    char pad4[0x24];
    int unk28;
    int unk2C;
    float unk30;
    float unk34;
    float unk38;
    float unk3C;
    int unk40;
    int unk44;
    int unk48;
    char pad4C[4];
    int unk50[8];
    int unk70;
    u8 unk74;
    char pad75[0xB];
    int unk80;
    int unk84;
    int unk88;
    int unk8C;
    void func_00157600(int a);
    MountVertOverlay *func_00086470(int a);
    void func_000864D0(void);
};


struct C_00086240_Item {
    char pad0[4];
    float x, y;
    char padC[0x30];
    float z;
    int pad40;
    int font;
    unsigned int argb;
    char pad4C[2];
    unsigned char flags;
    void func_0005E840(const char *s);
    void func_001D6600(void);
    C_00086240_Item *func_001D5E90();
    void func_001D5FA0(int parent, const char *name, int size, int flags);
    void SetPos(float a, float b) {
        if (x != a || y != b) { x = a; y = b; flags |= 6; }
    }
    void SetFont(int a) { if (font != a) { font = a; flags |= 6; } }
    void SetZ(float a) { if (z != a) { z = a; flags |= 4; } }
    void SetAlpha(unsigned short a) { if (*(unsigned short *)pad4C != a) { flags |= 8; *(unsigned short *)pad4C = a; ((char *)&argb)[3] = (char)a; } }
    void SetArgb(unsigned int c) {
        if (argb != c) {
            flags |= 8;
            argb = (argb & c) | (c & 0xffffff);
        }
    }
};

extern char D_00277038[];
char *func_001E8BF0(char *dst, const char *src, int n);

/* HorseOverlay (vtable 0x00279644) */
struct C_00086240 {
    void *vtbl;
    char pad4[0x20];
    C_00086240_Item *a24[8];
    C_00086240_Item *a44[8];
    C_00086240_Item *a64[8];
    C_00086240_Item *a84[4];
    C_00086240_Item *f94, *f98, *f9C;
    int fA0;
    int aA4[8];
    int fC4;
    char padC8[8];
    int fD0;
    char fD4[20];
    int fE8;
    int fEC;
    int fF0;
    int fF4;
    C_00086240 *func_00085630(int a, int b);
    int func_00086240(void);
    int func_00157960(void);
};

struct C_00085BD0 {
    char pad0[0x84];
    C_0005E840 *f84, *f88, *f8C, *f90;
    char pad94[0xC];
    int fA0;
    char padA4[0x20];
    int fC4;
    char **fC8;
    int fCC;
    int fD0;
    void func_00085BD0(int a);
    void func_00085D00(int a);
};

MountVertOverlay *MountVertOverlay::func_00086470(int a)
{
    float *p;
    int i;

    func_00157600(1);
    vtbl = (void *)&D_002796BC;
    unk28 = 0;
    unk2C = 0;
    unk48 = 0;
    p = &unk30;
    for (i = 0; i < 4; i++)
        p[i] = 0.0f;
    unk70 = 0;
    unk74 = 0;
    for (i = 0; i < 8; i++)
        unk50[i] = 0;
    unk80 = 0;
    unk44 = 0;
    unk84 = 0;
    unk40 = 0;
    unk88 = 0;
    unk8C = 0;
    return this;
}

void MountVertOverlay::func_000864D0(void)
{
    S_000864D0_Obj *p = (S_000864D0_Obj *)unk28;
    int i;

    vtbl = (void *)&D_002796BC;
    if (p != 0) {
        p->func_001D6410();
        func_001E891B(p);
    }
    S_000864D0_Obj **a = (S_000864D0_Obj **)&unk30;
    for (i = 4; i != 0; i--) {
        p = *a;
        if (p != 0) {
            p->func_001D6410();
            func_001E891B(p);
        }
        a++;
    }
    ((C_00157660 *)this)->func_00157660();
}
