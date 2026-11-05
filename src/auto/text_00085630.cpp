/* 18 functions from 0x00085630 to 0x00086530, found by Ghidra. */
#include "common.h"
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
};

struct C_00085F40_Obj2E8 {
    char pad0[4];
    C_00085F40_Obj4 *f4;
};

struct C_00085630_2A8490 {
    char pad0[0x2E0];
    void *f2E0;
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
};

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
