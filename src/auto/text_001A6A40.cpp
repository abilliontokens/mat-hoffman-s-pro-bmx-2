/* 13 functions from 0x001A6A40 to 0x001A7880, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *, int, const char *, ...);
void *func_001E8A44(int);
extern char D_0028BC44[], D_002A5348[], D_00275678[], D_002769F8[], D_0028B950[], D_0028B94C[], D_002867E8[], D_0028B948[];
struct C_00168280 {
    C_00168280 *func_00168280();
    void func_001691E0();
    int func_00169490(char *, int);
    void func_00169710(char *);
    void func_00168A10(char *, int *);
    void func_00168550(char *, char *, int);
};
struct C_001A7140 {
    char pad0[0x1d0];
    int f1d0;
    char **f1d4;
    int f1d8;
    void func_001A7140();
};

extern int D_0028B9E4;
extern int D_0028B974;

void func_001E891B(void *p);

struct C_Item0 {
    virtual void destroyObject(int flags);
};

struct C_Item8 {
    virtual void vv0();
    virtual void vv1();
    virtual void destroy8();
};

struct C_001A77B0 {
    void *vtbl;
    char pad4[0x24];
    C_Item8 *f28;
    void func_00157660();
    void *func_001A77B0(int flags);
};

struct C_001A77F0 {
    void *vtbl;
    char pad4[0x24];
    C_Item8 *f28;
    void func_00157660();
    void *func_001A77F0(int flags);
};

struct C_GlobalObj {
    virtual void vv0();
    virtual void vv1();
    virtual void vv2();
    virtual void vv3();
    virtual void v4(int a, void *b, int c, int d);
};

extern C_GlobalObj *D_002EFDB8;
extern C_Item0 *D_002F0630;

struct C_001A6B70 {
    char pad0[0x50];
    void *f50;
    void func_00157920();
    void func_001A6B70();
};

struct C_001D6410 {
    void func_001D6410();
};

struct C_00160BF0Obj {
    void func_00160BF0();
};

struct C_Holder24 {
    char pad0[0xb4];
    C_00160BF0Obj *fb4;
};

struct C_0018C120Obj {
    void func_0018C120();
};

struct C_CardStrings { char pad0[0x7a0]; int f7a0; char pad7a4[0x11a0-0x7a4]; int f11a0; char pad11a4[0x1248-0x11a4]; int f1248; };
struct C_CardStringsHolder { char pad0[4]; C_CardStrings *f4; };
struct C_CardText {
    int f0, x, y;
    char padc[0x4e-0xc]; unsigned char flags;
    void setPosition(int a, int b) { if(x != a || y != b) { y=b; x=a; flags |= 6; } }
    void func_0005E840(int);
    void func_0005E7C0(float, float);
    void func_001D6600();
    void func_001D5AD0();
};
struct C_001A6E90_Sub {
    void func_0005CBD0();
};
struct C_001A6E90_Mgr {
    char pad0[0x2c0];
    C_001A6E90_Sub *f2c0;
};
struct C_Global2 {
    char pad0[0x2e0];
    C_001A6E90_Mgr *f2e0;
    char pad2e4[4];
    C_CardStringsHolder *f2e8;
    C_0018C120Obj *f2ec;
};

extern C_Global2 *D_002A8490;

extern int D_0028BB04;

struct C_001A7120 {
    void func_001A5950();
    void *func_001A7120(int flags);
};

struct C_001A7830 {
    void *vtbl;
    void func_00157660();
    void *func_001A7830(int flags);
};

struct C_001A7260 {
    void *vtbl;
    char pad4[0x20];
    C_Holder24 *f24;
    C_Item8 *f28;
    char pad2c[4];
    C_001D6410 *f30;
    C_001D6410 *f34[8];
    void func_00157660();
    void func_001A7260();
};

int func_001361E0(int, int, int, unsigned int);
struct C_CardView {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(int);
    virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(int);
};
struct LoadMemoryCard {
    char pad0[0x5c];
    int f5c, f60, f64;
    char pad68[4];
    int f6c;
    char pad70[0x20];
    C_CardView *f90;
    int f94, f98;
    int func_00157BF0(int, int);
    int func_001A6A40(int, int);
};

struct C_001A7860 {
    void *func_001A7860(unsigned int flags);
};

/* LoadMemoryCard */
struct C_001A6D30_Menu {
    int func_00092A10();
    void func_00093120();
    int func_00092A50(int *p);
    int func_00092AC0();
    int func_00092EF0();
    void func_00093A00(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093970(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00093B80(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00094570(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_000941A0(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
};

struct C_001A6D30_Obj4C {
    char pad0[0x24];
    int f24;
};

extern int D_0028F5E0;

struct C_001A6D30 {
    void *vtbl;
    char pad4[0x30];
    C_CardText *f34, *f38, *f3C, *f40, *f44, *f48;
    C_001A6D30_Obj4C *f4C;
    char pad50[0x5C - 0x50];
    int f5C;
    int f60;
    char pad64[0x6C - 0x64];
    int f6C;
    char pad70[4];
    int f74;
    C_001A6D30_Menu *f78;
    char pad7C[0x88 - 0x7C];
    int f88;
    void func_001A6BA0();
    void func_00157960();
    void func_001A6D30();
};

/* LoadMemoryCard (update, virtual slot 12) */
struct S_001A6E90_Msg {
    int type;
    int f4;
    int code;
    int param;
    char rest[0xBE4];
};

extern "C" void __stdcall func_001DCAFF(int a0, void *a1);
extern float D_002755E8;
extern float D_002EFF78;
extern float D_00275460;
extern float D_00278C48;

struct C_001A6E90 {
    void *vtbl;
    char pad4[0x48];
    C_001A6D30_Obj4C *f4C;
    char pad50[4];
    float f54;
    char pad58[4];
    int f5C;
    int f60;
    float f64;
    int f68;
    int f6C;
    char pad70[4];
    int f74;
    C_001A6D30_Menu *f78;
    int f7C;
    int f80;
    int f84;
    int f88;
    int f8C;
    void func_00157A00(float dt);
    void func_001A6E90(float dt);
};

int LoadMemoryCard::func_001A6A40(int a, int b)
{
    if (f98) return 0;
    if (f6c == 3 || f6c == 9 || f6c == 6) {
        if (func_001361E0(4, 2, a, 0x80000000) || func_001361E0(0x17, 2, a, 0x80000000)) {
            f90->v9(100);
            f90->v5(1);
            f5c = 1;
            f98 = 1;
            f64 = 0;
            f90->v5(1);
            return 0;
        }
        if (f6c == 9 && (func_001361E0(5, 2, a, 0x80000000) || func_001361E0(0x18, 2, a, 0x80000000))) {
            f90->v9(100);
            f90->v5(1);
            f60 = 1;
            f98 = 1;
            f64 = 0;
            f90->v5(1);
            return 0;
        }
    }
    return func_00157BF0(a, b);
}

void C_001A6B70::func_001A6B70()
{
    if (f50 != 0) {
        D_002EFDB8->v4(0, f50, 0, 0);
    }
    func_00157920();
}

void C_001A6D30::func_001A6D30()
{
    func_001A6BA0();
    switch (f6C) {
    case 6:
        if (f88 == 0) {
            f78->func_00094570(0x43a00000, 0x42c80000, D_0028F5E0, 1, 0, 0x3e800000);
            f88 = 1;
        }
        break;
    case 0:
        if (f88 == 0) {
            f78->func_00093B80(0x43a00000, 0x42c80000, D_0028F5E0, 1, 0, 0x3e800000);
            f88 = 1;
        }
        break;
    case 3:
        f78->func_00093970(0x43a00000, 0x431f0000, D_0028F5E0, 0, 0, 0);
        if (f74 != 0) {
            f4C->f24 = 9;
            f5C = 0;
            f74 = 0;
        }
        break;
    case 9:
        f78->func_000941A0(5, 0x43a00000, 0x431f0000, D_0028F5E0, 0, 0, 0);
        f88 = 1;
        break;
    case 4:
        if (f88 == 0) {
            f78->func_00093B80(0x43a00000, 0x42c80000, D_0028F5E0, 0, 0, 0);
            f88 = 1;
        }
        break;
    }
    func_00157960();
}

void *C_001A7120::func_001A7120(int flags)
{
    func_001A5950();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001A7140::func_001A7140()
{
    char path[0x104];
    char key[0x28];
    func_001ADCC0(path, 0x104, D_00275678, D_002A5348, D_0028BC44);
    void *mem = func_001E8A44(0x4cc);
    C_00168280 *obj = mem ? ((C_00168280 *)mem)->func_00168280() : 0;
    if (obj->func_00169490(path, 0)) {
        obj->func_00169710(D_002769F8);
        obj->func_00168A10(D_0028B950, &f1d8);
        f1d4 = (char **)func_001E8A44(f1d0 * 4);
        for (int i = 0; i < f1d8; i++) {
            f1d4[i] = (char *)func_001E8A44(0x104);
            func_001ADCC0(key, 0x28, D_002867E8, D_0028B94C, i + 1);
            obj->func_00169710(key);
            obj->func_00168550(D_0028B948, f1d4[i], -1);
        }
    }
    if (obj) {
        obj->func_001691E0();
        func_001E891B(obj);
    }
}

void C_001A7260::func_001A7260()
{
    vtbl = (void *)&D_0028B974;
    if (D_002F0630 != 0) {
        D_002F0630->destroyObject(1);
        D_002F0630 = 0;
    }
    if (f28) {
        f28->destroy8();
        f28 = 0;
    }
    if (f24->fb4 != 0) {
        C_00160BF0Obj *obj;
        obj = f24->fb4;
        obj->func_00160BF0();
        func_001E891B(obj);
        f24->fb4 = 0;
    }
    {
        C_001D6410 **p;
        int count;
        p = f34;
        count = 8;
        do {
            C_001D6410 *obj;
            obj = *p;
            if (obj != 0) {
                obj->func_001D6410();
                func_001E891B(obj);
                *p = 0;
            }
            p = p + 1;
            count = count - 1;
        } while (count != 0);
    }
    {
        C_001D6410 *obj;
        obj = f30;
        if (obj != 0) {
            obj->func_001D6410();
            func_001E891B(obj);
            f30 = 0;
        }
    }
    D_002A8490->f2ec->func_0018C120();
    func_00157660();
}

void *C_001A77B0::func_001A77B0(int flags)
{
    vtbl = (void *)&D_0028B9E4;
    if (f28) {
        f28->destroy8();
        f28 = 0;
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001A77F0::func_001A77F0(int flags)
{
    extern int D_0028BA74;
    vtbl = (void *)&D_0028BA74;
    if (f28) {
        f28->destroy8();
        f28 = 0;
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001A7830::func_001A7830(int flags)
{
    vtbl = (void *)&D_0028BB04;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001A7860::func_001A7860(unsigned int flags)
{
  int func_001A6260(...);

  func_001A6260();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

