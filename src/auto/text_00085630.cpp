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

C_00086240 *C_00086240::func_00085630(int a, int b) {
 const char *name = D_00278690;
 C_00085630_Manager *manager = *(C_00085630_Manager **)((char *)D_002A8490 + 0x2ec);
 manager->func_0018C780(1, &name, 0);
 int *entry = (*(C_00085630_Manager **)((char *)D_002A8490 + 0x2ec))->func_0018C160(D_00278690);
 int parent = entry ? *entry : 0;
 int i = 0;
 *(int *)padC8 = a; fD0 = b;
 char buf[40];
 for (int y = 54; y < 406; y += 44) {
  C_00086240_Item *p = (C_00086240_Item *)func_001E8A44(0x60);
  a24[i] = p ? p->func_001D5E90() : 0;
  a24[i]->func_001D5FA0(parent, D_00278690, 25, 0);
  a24[i]->SetPos(30.0f, (float)(y-24));
  a24[i]->SetFont(D_0028F5DC); a24[i]->SetZ(5.0f);
  func_001ADCC0(buf,40,D_002796B0,*(int *)((char *)D_002A8490->f2E8->f4+0x1018),++i);
  a24[i-1]->func_0005E840(buf); a24[i-1]->SetArgb(0xff8974f6);
  p=(C_00086240_Item *)func_001E8A44(0x60);
  a44[i-1]=p?p->func_001D5E90():0;
  a44[i-1]->func_001D5FA0(parent,D_00278690,25,0);
  a44[i-1]->SetPos(40.0f,(float)y); a44[i-1]->SetFont(D_0028F5DC);
  a44[i-1]->SetZ(5.0f); a44[i-1]->SetArgb(0xff5eff5e);
  p=(C_00086240_Item *)func_001E8A44(0x60);
  a64[i-1]=p?p->func_001D5E90():0;
  a64[i-1]->func_001D5FA0(parent,D_00278690,25,0);
  a64[i-1]->SetPos(40.0f,(float)y); a64[i-1]->SetFont(D_0028F5DC);
  a64[i-1]->SetZ(6.0f); a64[i-1]->SetArgb(0xff606060); a64[i-1]->SetAlpha(128);
  a64[i-1]->func_0005E840((char *)D_002A8490->f2E0+0x254);
 }
 C_00086240_Item *p=(C_00086240_Item *)func_001E8A44(0x60);
 f94=p?p->func_001D5E90():0;
 f94->func_001D5FA0(parent,D_00278690,40,0); f94->SetPos(500,20); f94->SetArgb(0xffffffff);
 for (int j=0,y=150;y<270;y+=30,++j) {
  p=(C_00086240_Item *)func_001E8A44(0x60);
  a84[j]=p?p->func_001D5E90():0;
  a84[j]->func_001D5FA0(parent,D_00278690,40,0);
  a84[j]->SetPos(320,(float)y); a84[j]->SetArgb(0xffffffff); a84[j]->SetFont(D_0028F5E0);
 }
 p=(C_00086240_Item *)func_001E8A44(0x60);
 f98=p?p->func_001D5E90():0;
 f98->func_001D5FA0(parent,D_00278690,40,0); f98->SetPos(320,20); f98->SetZ(5); f98->SetFont(D_0028F5E0);
 p=(C_00086240_Item *)func_001E8A44(0x60);
 f9C=p?p->func_001D5E90():0;
 f9C->func_001D5FA0(parent,D_00278690,40,0); f9C->SetPos(320,40); f9C->SetZ(5); f9C->SetFont(D_0028F5E0);
 strcpy(fD4,(char *)D_002A8490->f2E0+0x254); fE8=strlen(fD4); return this;
}

void C_00085BD0::func_00085BD0(int a)
{
    char buf[0x104];
    if (a) {
        char *src = *(char **)((char *)D_002A8490->f2E8->f4 + 0x1020);
        char *dst = buf;
        char c;
        do {
            c = *src++;
            *dst++ = c;
        } while (c);
        f84->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00279058, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1018), fD0 + 1);
        f88->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00279058, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1028), *(int *)(fC8[fD0 + 0x6a] + 0x970) + 1);
        f8C->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1030));
        f90->func_0005E840(buf);
    }
    fA0 = a;
}

void C_00085BD0::func_00085D00(int a)
{
    char buf[0x104];
    if (a) {
        func_001ADCC0(buf, 0x104, D_00279058, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1038), fC4);
        f84->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00279058, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1018), fD0 + 1);
        f88->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00279058, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1028), *(int *)(fC8[fD0 + 0x6a] + 0x970) + 1);
        f8C->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1030));
        f90->func_0005E840(buf);
    }
    fA0 = a;
}

void C_00085E50::func_00085E50(int a)
{
    char buf[0x104];
    if (a) {
        char *src = *(char **)((char *)*(void **)((char *)D_002A8490->f2E8 + 4) + 0x1040);
        char *dst = buf;
        char c;
        do {
            c = *src++;
            *dst++ = c;
        } while (c);
        f84->func_0005E840(buf);
        func_001ADCC0(buf,0x104,*(char **)((char *)*(void **)((char *)D_002A8490->f2E8 + 4) + 0x1048));
        f88->func_0005E840(buf);
        func_001ADCC0(buf,0x104,D_00275630);
        f8C->func_0005E840(buf);
        func_001ADCC0(buf,0x104,D_00275630);
        f90->func_0005E840(buf);
    }
    fA0 = a;
}

void C_00085F40::func_00085F40(int a)
{
    char buf[0x104];

    if (a) {
        char *src = D_002A8490->f2E8->f4->f1050;
        char *dst = buf;
        char c;
        do {
            c = *src;
            *dst = c;
            src++;
            dst++;
        } while (c);
        f84->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_002A8490->f2E8->f4->f1048);
        f88->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00275630);
        f8C->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00275630);
        f90->func_0005E840(buf);
    }
    fA0 = a;
}

void C_00086030::func_00086030(int a)
{
    char buf[0x104];
    if (a) {
        func_001ADCC0(buf, 0x104, D_00279058, D_002A8490->f2E8->f4->f1058, fC4);
        f84->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_002A8490->f2E8->f4->f1048);
        f88->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00275630);
        f8C->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00275630);
        f90->func_0005E840(buf);
    }
    fA0 = a;
}

void C_00086130::func_00086130(int a0) {
    unkF0 = a0;
}

void C_00086140::func_00086140(int a0) {
    unkF4 = a0;
}

void C_00086150::func_00086150(int a0) {
    unkC4 = a0;
}

void C_00086160::func_00086160(float a)
{
    unkEC = (int)a;
}

int C_00086180::func_00086180(void) {
    return unkC4;
}

void C_00086190::func_00086190(void) {
    unkC4 = 0;
}

int C_000861A0::func_000861A0(int a0) {
    unkD0 = a0;
    return 1;
}

int C_00086160::func_000861C0(int idx)
{
    int v = unkA4[idx];

    if (v > unkE8)
        return 0;
    v++;
    unkA4[idx] = v;
    return v < unkE8;
}

void C_00086160::func_00086200(void)
{
    int i;

    for (i = 0; i < *(int *)D_002A8490->f2E0; i++)
        unkA4[i] = 0;
}

int C_00086240::func_00086240(void)
{
    char buf[0x104];
    char name[20];
    int i;

    if (D_002A8490->f2E0->f2D4 != 0) {
        return 0;
    }
    if (fF0 != 0) {
        func_001ADCC0(buf, 0x104, D_002A8490->f2E8->f4->f10F0);
        f98->func_0005E840(buf);
        f98->func_001D6600();
        func_001ADCC0(buf, 0x104, D_00277038, fC4);
        f9C->func_0005E840(buf);
        f9C->func_001D6600();
    }
    if (fF4 != 0) {
        func_001ADCC0(buf, 0x104, D_00277038, fEC);
        f94->func_0005E840(buf);
        f94->func_001D6600();
    }
    if (fA0 != 0) {
        for (i = 0; i < 4; i++) {
            a84[i]->func_001D6600();
        }
    }
    for (i = 0; i < D_002A8490->f2E0->count; i++) {
        name[0] = 0;
        func_001E8BF0(name, fD4, aA4[i]);
        a44[i]->func_0005E840(name);
        a44[i]->func_001D6600();
        if (fD0 == i) {
            a24[i]->SetArgb(0xffffffff);
            a44[i]->SetArgb(0xffffffff);
        } else {
            a24[i]->SetArgb(0xff8974f6);
            a44[i]->SetArgb(0xff5eff5e);
        }
        a24[i]->func_001D6600();
        a44[i]->func_001D6600();
        a64[i]->func_001D6600();
    }
    return func_00157960();
}

