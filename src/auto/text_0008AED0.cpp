/* 13 functions from 0x0008AED0 to 0x0008BCD0, found by Ghidra. */
#include "common.h"
#include <string.h>

extern int *D_002A8490;
extern int D_00278664, D_00278668, D_0027866C, D_00278670;
extern char D_00278674;
extern int D_002A60B0, D_002A60B4, D_002A60B8, D_002A60BC;
extern char D_002A60C0;
extern char D_00279DD0[], D_00279DC0[], D_00279DA8[], D_0027958C[];
extern int D_0028F5E0;
struct Sprite_8AED0 {
    char pad0[0x28];
    int f28;
    int f2c;
    char pad30[4];
    int f34;
    int f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    char pad4c[0xC];
    unsigned char b58;
    Sprite_8AED0 *func_001D5760();
    void func_001D5810(int a0, float a1, float a2, int a3);
};
extern int D_00275630;
extern int D_00279DEC;
extern int D_00279E74;

struct C_0008BA00 {
    char pad0[0x2c];
    int f2C;
    void func_0008BA00(void);
};
struct C_00157600 {
    void func_00157600(int a0);
    void func_001578D0(void);
};
struct S_0008BA00_Rect {
    char pad0[0x10];
    float f10;
    float f14;
};
struct S_0008BA00_Font {
    S_0008BA00_Rect *func_0018C070(void);
};
extern float D_00275AEC;

struct S_0008BB50_Child {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
};

struct C_0008B6F0 {
    char pad0[0x34];
    int f34;
    char pad38[0x1c];
    int f54;
    void func_0008B6F0(void);
};

struct C_0008B820 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 pad28;
    u32 f2C;
    u32 f30;
    u32 f34;
    C_0008B820 *func_0008B820(int unused);
};

struct C_0008BB50 {
    char pad0[0x30];
    int f30;
    S_0008BB50_Child *f34;
    void func_0008BB50(int param_1);
};

struct C_0008BB80 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    u32 f40;
    u32 f44;
    u32 f48;
    u32 f4C;
    u32 f50;
    u32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6C;
    u32 f70;
    u32 pad74;
    u32 f78;
    u32 f7C;
    C_0008BB80 *func_0008BB80(int unused);
};

struct C_0005E840 {
    void func_0005E840(int param_1);
};

struct C_0008B670 {
    char pad0[0x24];
    int f24;
    void func_0008B670(int param_1);
};

struct C_0008B680 {
    char pad0[0x38];
    int f38;
    void func_0008B680(int param_1);
};

struct C_0008B690 {
    char pad0[0x34];
    int f34;
    char pad38[0x1c];
    int f54;
    void func_0008B690(void);
};

struct C_0008B6C0 {
    char pad0[0x34];
    int f34;
    char pad38[0x1c];
    int f54;
    void func_0008B6C0(void);
};

struct PtrObj_0008 {
    void func_001D6410();
};

struct VirtObj_0008 {
    virtual void v0(int a);
};

void func_001E891B(void *p);

struct C_0008BBE0 {
    void *vtbl;
    char pad4[0x20];
    PtrObj_0008 *unk24;
    PtrObj_0008 *unk28;
    PtrObj_0008 *unk2c;
    PtrObj_0008 *unk30;
    PtrObj_0008 *unk34;
    VirtObj_0008 *unk38;
    VirtObj_0008 *unk3c;
    VirtObj_0008 *unk40;
    VirtObj_0008 *unk44;
    VirtObj_0008 *unk48;
    VirtObj_0008 *unk4c;
    VirtObj_0008 *unk50;
    void func_0008BBE0();
    void func_00157660();
};

extern int D_0028F5DC;

extern char D_00278690[];
extern char D_00279E64[];
extern char D_00279E58[];
extern int D_0028F5EC;
extern char D_002A47F0[];
extern char D_002A5870[];
extern char D_00275678[];
extern char D_002A48F8[];

void *func_001E8A44(unsigned int size);
void func_001ADCC0(char *buf, int size, char *fmt, ...);

struct C_0008B850_Res {
    void func_0018C780(int a0, void *a1, int a2);
    int *func_0018C160(void *name);
};

struct C_0008B850_Text {
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
    void SetPos(int nx, int ny) {
        if (x != nx || y != ny) {
            x = nx;
            y = ny;
            flags |= 6;
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
    C_0008B850_Text *func_001D5E90();
    void func_001D5FA0(int a0, char *a1, int a2, char *a3);
};

struct C_0008B850_Menu {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(char *name, int a1, int a2, int a3, int a4);
    C_0008B850_Menu *func_001CF740(int a0, int a1, int a2);
};

struct C_0008B850 {
    void *vtbl;
    char pad4[0x20];
    C_0008B850_Text *unk24;
    char *unk28;
    int unk2c;
    int pad30;
    C_0008B850_Menu *unk34;
    C_0008B850 *func_0008B850(int a1, char *a2);
};

struct V2_0008B710 {
    float x;
    float y;
};

struct C_0008B710_Text {
    char *str;
    float x;
    float y;
    float GetX() { return x; }
    float GetY() { return y; }
    int func_001D6290();
};

struct C_0008B710_Item {
    char pad0[0x44];
    int unk44;
    char pad48[6];
    unsigned char unk4e;
    void __stdcall_unused();
    void func_0005E920(float x, float y);
    void func_001D6600();
    void func_001D5AD0();
};

struct C_0008B710 {
    void *vtbl;
    char pad4[0x20];
    C_0008B710_Text *unk24;
    C_0008B710_Item *unk28;
    C_0008B710_Item *unk2c;
    int pad30;
    C_0008B710_Item *unk34;
    C_0008B710_Item *unk38;
    C_0008B710_Item *unk3c;
    C_0008B710_Item *unk40;
    C_0008B710_Item *unk44;
    int pad48;
    int unk4c;
    int pad50;
    int unk54;
    void func_0008B710();
    void func_00157960();
};

void C_0008B670::func_0008B670(int param_1) {
    ((C_0005E840 *)f24)->func_0005E840(param_1);
}

void C_0008B680::func_0008B680(int param_1) {
    ((C_0005E840 *)f38)->func_0005E840(param_1);
}

void C_0008B690::func_0008B690(void) {
    f54 = 0;
    ((C_0005E840 *)f34)->func_0005E840(*(int *)(*(int *)(*(int *)((char *)D_002A8490 + 0x2e8) + 4) + 0x10d0));
}

void C_0008B6C0::func_0008B6C0(void) {
    f54 = 1;
    ((C_0005E840 *)f34)->func_0005E840(*(int *)(*(int *)(*(int *)((char *)D_002A8490 + 0x2e8) + 4) + 0x10d8));
}

void C_0008B6F0::func_0008B6F0(void) {
    f54 = 2;
    ((C_0005E840 *)f34)->func_0005E840((int)&D_00275630);
}

void C_0008B710::func_0008B710()
{
    int w;
    float x;
    float y;
    float cx;
    if (unk54 == 0) {
        if (unk4c && (int)strlen(unk24->str) < 40) {
            w = unk24->func_001D6290();
            x = unk24->x;
            y = unk24->y;
            cx = x + (float)(w / 2);
            C_0008B710_Item *p = unk28;
            p->func_0005E920(cx, y);
            p = unk28;
            if (p->unk44 != D_0028F5DC) {
                p->unk44 = D_0028F5DC;
                p->unk4e |= 6;
            }
            unk2c->func_0005E920(x + (float)(w / 2), y);
            p = unk2c;
            if (p->unk44 != D_0028F5DC) {
                p->unk44 = D_0028F5DC;
                p->unk4e |= 6;
            }
            unk2c->func_001D6600();
        }
        unk28->func_001D6600();
        ((C_0008B710_Item *)unk24)->func_001D6600();
        unk34->func_001D6600();
        unk3c->func_001D5AD0();
        unk40->func_001D5AD0();
        unk44->func_001D5AD0();
    } else if (unk54 == 1) {
        unk34->func_001D6600();
        unk38->func_001D6600();
        unk3c->func_001D5AD0();
        unk40->func_001D5AD0();
        unk44->func_001D5AD0();
    } else {
        unk38->func_001D6600();
    }
    func_00157960();
}

C_0008B820 *C_0008B820::func_0008B820(int unused) {
    ((C_00157600 *)this)->func_00157600(1);
    f24 = 0;
    f2C = 0;
    f30 = 0;
    f34 = 0;
    vtbl = &D_00279DEC;
    return this;
}

C_0008B850 *C_0008B850::func_0008B850(int a1, char *a2)
{
    unk2c = a1;
    unk28 = a2;
    void *name = D_00278690;
    ((C_0008B850_Res *)((int *)D_002A8490)[0x2ec / 4])->func_0018C780(1, &name, 0);
    int *res = ((C_0008B850_Res *)((int *)D_002A8490)[0x2ec / 4])->func_0018C160(D_00278690);
    int font = res ? *res : 0;
    void *mem = func_001E8A44(0x60);
    unk24 = mem ? ((C_0008B850_Text *)mem)->func_001D5E90() : 0;
    unk24->func_001D5FA0(font, D_00278690, 100, D_00279E64);
    if (*(int *)(((int *)D_002A8490)[0x2e0 / 4] + 8) == 2) {
        if (a1 != 0) {
            unk24->SetPos(0x441b0000, 0x43aa0000);
            unk24->SetColor(D_0028F5EC);
        } else {
            unk24->SetPos(0x41a00000, 0x43aa0000);
            unk24->SetColor(D_0028F5DC);
        }
    } else {
        if (a1 == 0) {
            unk24->SetPos(0x41a00000, 0x433e0000);
        } else {
            unk24->SetPos(0x41a00000, 0x43cf0000);
        }
        unk24->SetColor(D_0028F5DC);
    }
    unk24->SetArgb(0xffcccccc);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    mem = func_001E8A44(0x20c);
    unk34 = mem ? ((C_0008B850_Menu *)mem)->func_001CF740(*(int *)(((int *)D_002A8490)[1] + 0xb4), *(int *)(*(int *)(unk28 + 0x64) + 0x4c0), 1) : 0;
    unk34->v4(D_00279E58, 1, 1, 0, 0);
    return this;
}

void C_0008BB50::func_0008BB50(int param_1) {
    if (param_1 >= 0 && f30 != param_1) {
        f34->v5(0);
    }
    f30 = param_1;
}

C_0008BB80 *C_0008BB80::func_0008BB80(int unused) {
    ((C_00157600 *)this)->func_00157600(1);
    f24 = 0;
    f28 = 0;
    f2C = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3C = 0;
    f40 = 0;
    f48 = 0;
    f4C = 0;
    f44 = 0;
    f64 = 0;
    f68 = 0;
    f6C = 0;
    f70 = 0;
    f78 = 0;
    f54 = 0;
    f58 = 0;
    f7C = 0;
    f50 = 0;
    f60 = 0;
    f5C = 0;
    vtbl = &D_00279E74;
    return this;
}

void C_0008BBE0::func_0008BBE0()
{
    PtrObj_0008 *p = unk24;
    vtbl = &D_00279E74;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unk28;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unk2c;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unk30;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = unk34;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    if (unk38) {
        unk38->v0(1);
    }
    if (unk3c) {
        unk3c->v0(1);
    }
    if (unk40) {
        unk40->v0(1);
    }
    if (unk48) {
        unk48->v0(1);
    }
    if (unk4c) {
        unk4c->v0(1);
    }
    if (unk44) {
        unk44->v0(1);
    }
    if (unk50) {
        unk50->v0(1);
    }
    func_00157660();
}

