/* 2 functions from 0x0008BCD0 to 0x0008CC50, found by Ghidra. */
#include "common.h"
#include <string.h>
extern int D_0028F5DC;
extern char D_00279EE0[];
extern int *D_002A8490;
extern int *D_002F07B8;
extern int D_0028F5E0;
extern int D_0028F5EC;
extern char D_00278690[];
extern char D_0027958C[];
extern char D_002786B0[];
extern char D_00279F28[];
extern char D_00279F18[];
extern char D_00279F10[];
extern char D_00279F08[];
extern char D_00279EFC[];
extern char D_00279EE8[];
extern char D_00279F3C[];
extern char D_00279F34[];
extern char D_00279F44[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct Str_0008BCD0 {
    int a[4];
    char c;
};
extern Str_0008BCD0 D_00278664;
extern Str_0008BCD0 D_002A60B0;

void *func_001E8A44(unsigned int size);

struct Elem_0008BCD0 {
    char pad0[0x28];
    int x;
    int y;
    char pad30[4];
    float f34;
    unsigned int argb;
    float m3c;
    float m40;
    float m44;
    float m48;
    char pad4c[0xc];
    unsigned char flags;
    Elem_0008BCD0 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
    void SetArgbRaw(unsigned int c) {
        argb = (argb & c) | (c & 0xffffff);
        flags |= 2;
    }
    void SetY(int ny) {
        if (y != ny) {
            y = ny;
            flags |= 1;
        }
    }
    void SetX(int nx) {
        if (x != nx) {
            x = nx;
            flags |= 1;
        }
    }
    void SetF34(float v) {
        if (f34 != v) {
            f34 = v;
            flags |= 1;
        }
    }
    void SetIdentity() {
        m40 = 0;
        m44 = 0;
        flags |= 4;
        m3c = 1.0f;
        m48 = 1.0f;
    }
    void SetIdentity2() {
        m48 = m3c = 1.0f;
        flags |= 4;
        m44 = m40 = 0;
    }
    void SetAlpha(unsigned char a) {
        ((unsigned char *)&argb)[3] = a;
        flags |= 2;
    }
};

struct Text_0008BCD0 {
    char pad0[4];
    int x;
    int y;
    char pad0c[0x30];
    int f3c;
    char pad40[4];
    int color;
    unsigned int argb;
    char pad4c[2];
    unsigned char flags;
    Text_0008BCD0 *func_001D5E90();
    void func_001D5FA0(int font, char *name, int size, int z);
    void func_0005E840(int a);
    void SetPos(int nx, int ny) {
        if (x != nx || y != ny) {
            x = nx;
            y = ny;
            flags |= 6;
        }
    }
    void SetPos2(int nx, int ny) {
        if (x != nx || y != ny) {
            flags |= 6;
            y = ny;
            x = nx;
        }
    }
    void SetColor(int c) {
        if (color != c) {
            color = c;
            flags |= 6;
        }
    }
    void SetArgb(unsigned int c) {
        if (argb != c) {
            flags |= 8;
            argb = (argb & c) | (c & 0xffffff);
        }
    }
    void Set3C(int v) {
        if (f3c != v) {
            f3c = v;
            flags |= 4;
        }
    }
};

struct Win_0008BCD0 {
    Win_0008BCD0 *func_001B12C0(int a);
    void func_001B13A0(char *a, char *b, int c, int d);
    void func_001B19C0(int a, int b, int c);
    void func_001B2270(unsigned int c);
    void func_001B19A0(int a);
    void func_001B1AB0(int a, int b);
    void func_001B17D0(int a);
};

struct Res_0008BCD0 {
    void func_0018C780(int n, void *names, int a);
    int *func_0018C160(char *name);
};

struct C_0008BCD0 {
    void *vtbl;
    char pad4[0x20];
    Text_0008BCD0 *unk24;
    Text_0008BCD0 *unk28;
    Text_0008BCD0 *unk2c;
    Text_0008BCD0 *unk30;
    Text_0008BCD0 *unk34;
    Elem_0008BCD0 *unk38;
    Elem_0008BCD0 *unk3c;
    Elem_0008BCD0 *unk40;
    Elem_0008BCD0 *unk44;
    Elem_0008BCD0 *unk48;
    Elem_0008BCD0 *unk4c;
    Elem_0008BCD0 *unk50;
    Win_0008BCD0 *unk54;
    char pad58[0x24];
    int unk7c;
    void func_0008BCD0();
    void func_0008C480();
    void func_001577A0(Win_0008BCD0 *w, int a);
};

void C_0008BCD0::func_0008BCD0()
{
    strcpy((char *)&D_002A60B0, "global\\textures\\");
    void *mem;
    mem = func_001E8A44(100);
    unk3c = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk40 = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk48 = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk4c = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk44 = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk38 = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk50 = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    unk50->func_001D5810(D_00279F28, 0, 0, 0);
    unk50->SetArgbRaw(0xffb73614);
    unk50->SetAlpha(0);
    unk50->SetX(0x44200000);
    unk50->SetY(0x43e00000);
    mem = func_001E8A44(0x184);
    unk54 = mem ? ((Win_0008BCD0 *)mem)->func_001B12C0(1) : 0;
    unk54->func_001B13A0(D_00279F18, D_00279F18, 0, 0x3c);
    unk54->func_001B19C0(0x140, 0xa0, 0);
    unk54->func_001B2270(0xffcccccc);
    unk54->func_001B19A0(D_0028F5E0);
    unk54->func_001B1AB0(0, 0);
    unk54->func_001B17D0(*(int *)(*(int *)(((int *)D_002A8490)[0x2e8 / 4] + 4) + 0x10e0));
    func_001577A0(unk54, -1);
    unk40->func_001D5810(D_00279F10, 288.0f, 188.0f, 0);
    unk48->func_001D5810(D_00279F08, 524.0f, 60.0f, 0);
    unk48->SetX(0x42000000);
    unk48->SetY(0x42000000);
    unk4c->func_001D5810(D_00279EFC, 524.0f, 35.0f, 0);
    unk4c->SetX(0x42000000);
    unk4c->SetY(0x42000000);
    unk44->func_001D5810(D_00279EE8, 324.0f, 252.0f, 0);
    unk44->SetX(0x439e0000);
    unk44->SetY(0x43800000);
    unk38->func_001D5810(D_002786B0, 524.0f, 27.0f, 0);
    unk38->SetX(0x42c00000);
    unk38->SetY(0x42800000);
    unk38->SetIdentity();
    unk38->SetF34(5.0f);
    unk3c->func_001D5810(D_002786B0, 41.0f, 47.0f, 0);
    unk3c->SetX(0x42c00000);
    unk3c->SetIdentity();
    unk3c->SetF34(5.0f);
    unk44->SetF34((float)D_002F07B8[0x6b4 / 4]);
    unk44->SetAlpha(0);
    char *names[2];
    names[0] = D_00278690;
    names[1] = D_0027958C;
    ((Res_0008BCD0 *)((int *)D_002A8490)[0x2ec / 4])->func_0018C780(2, names, 0);
    int *r = ((Res_0008BCD0 *)((int *)D_002A8490)[0x2ec / 4])->func_0018C160(D_00278690);
    int fontA = r ? *r : 0;
    r = ((Res_0008BCD0 *)((int *)D_002A8490)[0x2ec / 4])->func_0018C160(D_0027958C);
    int fontB = r ? *r : 0;
    mem = func_001E8A44(0x60);
    unk24 = mem ? ((Text_0008BCD0 *)mem)->func_001D5E90() : 0;
    unk24->func_001D5FA0(fontA, D_00278690, 0x28, 0);
    unk24->SetPos(0x441b0000, 0x41880000);
    unk24->SetArgb(0xffcccccc);
    unk24->SetColor(D_0028F5EC);
    unk24->func_0005E840(*(int *)(*(int *)(((int *)D_002A8490)[0x2e8 / 4] + 4) + 0x10e8));
    unk24->Set3C(0x40a00000);
    mem = func_001E8A44(0x60);
    unk28 = mem ? ((Text_0008BCD0 *)mem)->func_001D5E90() : 0;
    unk28->func_001D5FA0(fontB, D_0027958C, 0x28, 0);
    unk28->SetPos(0x441b0000, 0x421c0000);
    unk28->SetColor(D_0028F5EC);
    unk28->SetArgb(0xffbfa35a);
    unk28->Set3C(0x40a00000);
    mem = func_001E8A44(0x60);
    unk2c = mem ? ((Text_0008BCD0 *)mem)->func_001D5E90() : 0;
    unk2c->func_001D5FA0(fontB, D_0027958C, 0x28, 0);
    unk2c->SetPos(0x441b0000, 0x427c0000);
    unk2c->SetColor(D_0028F5EC);
    unk2c->SetArgb(0xffbfa35a);
    unk2c->Set3C(0x40a00000);
    mem = func_001E8A44(0x60);
    unk30 = mem ? ((Text_0008BCD0 *)mem)->func_001D5E90() : 0;
    unk30->func_001D5FA0(fontA, D_00278690, 0x28, 0);
    unk30->SetPos(0x42240000, 0x41d80000);
    unk30->SetArgb(0xffcccccc);
    unk30->SetColor(D_0028F5DC);
    unk30->func_0005E840((int)D_00279EE0);
    unk30->Set3C(0x40a00000);
    mem = func_001E8A44(0x60);
    unk34 = mem ? ((Text_0008BCD0 *)mem)->func_001D5E90() : 0;
    unk34->func_001D5FA0(fontB, D_0027958C, 0x28, 0);
    unk34->SetPos(0x42240000, 0x424c0000);
    unk34->SetColor(D_0028F5EC);
    unk34->SetArgb(0xffbfa35a);
    unk34->Set3C(0x40a00000);
}

void C_0008BCD0::func_0008C480()
{
    void *mem;
    char *names[2];
    char buf[0x38];
    int *r;
    int fontA;
    int fontB;
    int px;

    D_002A60B0.a[0] = D_00278664.a[0];
    D_002A60B0.a[1] = D_00278664.a[1];
    D_002A60B0.a[2] = D_00278664.a[2];
    D_002A60B0.a[3] = D_00278664.a[3];
    D_002A60B0.c = D_00278664.c;
    mem = func_001E8A44(100);
    unk40 = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk48 = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk4c = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk44 = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk38 = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(100);
    unk50 = mem ? ((Elem_0008BCD0 *)mem)->func_001D5760() : 0;
    mem = func_001E8A44(0x184);
    unk54 = mem ? ((Win_0008BCD0 *)mem)->func_001B12C0(1) : 0;
    unk54->func_001B13A0(D_00279F18, D_00279F18, 0, 0x1e);
    unk54->func_001B2270(0xffcccccc);
    unk54->func_001B19A0(D_0028F5E0);
    unk54->func_001B1AB0(0, 0);
    if (unk7c == 1) {
        unk50->func_001D5810(D_00279F28, 0, 0, 0);
        unk50->SetArgbRaw(0xffb73614);
        unk50->SetAlpha(0);
        unk54->func_001B19C0(0x1e0, 0xf0, 0);
        unk44->func_001D5810(D_00279F44, 0, 252.0f, 0);
        unk44->SetX(0x43a00000);
        unk44->SetY(0x43800000);
        unk40->func_001D5810(D_00279F10, 448.0f, 188.0f, 0);
        unk38->func_001D5810(D_002786B0, 524.0f, 27.0f, 0);
        unk48->func_001D5810(D_00279F08, 524.0f, 60.0f, 0);
        unk4c->func_001D5810(D_00279EFC, 524.0f, 35.0f, 0);
    } else {
        unk50->func_001D5810(D_00279F28, 0, 0, 0);
        unk50->SetArgbRaw(0xffb73614);
        unk50->SetAlpha(0);
        unk54->func_001B19C0(0xa0, 0xf0, 0);
        unk44->func_001D5810(D_00279F44, 0, 252.0f, 0);
        unk44->SetX(0x43a00000);
        unk44->SetY(0x43800000);
        unk40->func_001D5810(D_00279F10, 128.0f, 188.0f, 0);
        unk38->func_001D5810(D_002786B0, 20.0f, 27.0f, 0);
        unk48->func_001D5810(D_00279F08, 20.0f, 60.0f, 0);
        unk4c->func_001D5810(D_00279EFC, 20.0f, 35.0f, 0);
    }
    unk50->SetX(0x43a00000);
    unk50->SetY(0x43e00000);
    unk54->func_001B17D0(*(int *)(*(int *)(((int *)D_002A8490)[0x2e8 / 4] + 4) + 0x10e0));
    func_001577A0(unk54, -1);
    unk38->SetX(0x42c00000);
    unk38->SetY(0x42800000);
    unk38->SetIdentity2();
    unk38->SetF34(5.0f);
    unk4c->SetX(0x42000000);
    unk4c->SetY(0x42000000);
    unk48->SetX(0x42000000);
    unk48->SetY(0x42000000);
    unk44->SetF34((float)D_002F07B8[0x6b4 / 4]);
    unk44->SetAlpha(0);
    names[0] = D_00278690;
    names[1] = D_0027958C;
    ((Res_0008BCD0 *)((int *)D_002A8490)[0x2ec / 4])->func_0018C780(2, names, 0);
    r = ((Res_0008BCD0 *)((int *)D_002A8490)[0x2ec / 4])->func_0018C160(D_00278690);
    fontA = r ? *r : 0;
    r = ((Res_0008BCD0 *)((int *)D_002A8490)[0x2ec / 4])->func_0018C160(D_0027958C);
    fontB = r ? *r : 0;
    mem = func_001E8A44(0x60);
    unk24 = mem ? ((Text_0008BCD0 *)mem)->func_001D5E90() : 0;
    unk24->func_001D5FA0(fontA, D_00278690, 0x28, 0);
    mem = func_001E8A44(0x60);
    unk28 = mem ? ((Text_0008BCD0 *)mem)->func_001D5E90() : 0;
    unk28->func_001D5FA0(fontB, D_0027958C, 0x28, 0);
    mem = func_001E8A44(0x60);
    unk2c = mem ? ((Text_0008BCD0 *)mem)->func_001D5E90() : 0;
    unk2c->func_001D5FA0(fontB, D_0027958C, 0x28, 0);
    if (unk7c == 1) {
        px = 0x441b0000;
        unk24->SetPos(px, 0x41d80000);
        unk24->SetArgb(0xffcccccc);
        unk24->SetColor(D_0028F5EC);
        func_001ADCC0(buf, 0x38, D_00279F3C, *(int *)(*(int *)(((int *)D_002A8490)[0x2e8 / 4] + 4) + 0x1018));
        unk24->func_0005E840((int)buf);
        unk28->SetColor(D_0028F5EC);
    } else {
        unk24->SetPos(0x41a00000, 0x41d80000);
        unk24->SetArgb(0xffcccccc);
        unk24->SetColor(D_0028F5DC);
        func_001ADCC0(buf, 0x38, D_00279F34, *(int *)(*(int *)(((int *)D_002A8490)[0x2e8 / 4] + 4) + 0x1018));
        unk24->func_0005E840((int)buf);
        unk28->SetColor(D_0028F5EC);
        px = 0x42e80000;
    }
    unk28->SetPos2(px, 0x421c0000);
    unk2c->SetColor(D_0028F5EC);
    unk2c->SetPos(px, 0x427c0000);
    unk24->Set3C(0x40a00000);
    unk28->SetArgb(0xffbfa35a);
    unk28->Set3C(0x40a00000);
    unk2c->SetArgb(0xffbfa35a);
    unk2c->Set3C(0x40a00000);
}

