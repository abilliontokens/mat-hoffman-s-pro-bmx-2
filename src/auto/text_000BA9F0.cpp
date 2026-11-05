/* 13 functions from 0x000BA9F0 to 0x000BB7C0, found by Ghidra. */
#include "common.h"

struct UIQuad { int x, y, z, w; };
struct UIPositionData { char pad0[0x24]; UIQuad f24; char pad34[0x70]; UIQuad fA4; };
struct UIItemData { char pad0[0x3e4]; int f3E4; char pad3E8[0xc0]; int *f4A8; int *f4AC; char pad4B0[0x2c]; UIPositionData *f4DC; };
struct UIPositionItem { char pad0[0x170]; UIQuad f170, f180; void func_0012A770(int, int); };
extern int D_002A32DC;

struct UIService {
    int func_00030020(const char *name);
    int func_000300C0(const char *name);
    int func_000300F0(const char *name);
    int func_00030120(const char *name);
    void func_00030160();
    int func_000301D0();
};

struct UIOwner {
    void func_0002EF70(int, int);
    void func_00030240(int, int, UIQuad *, UIQuad *, void *);
    void func_000306F0(int a, int b, int c, UIQuad d, const char *e, int f);
    char pad0[0x74];
    UIService *f74;
};

struct UIItem {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    void func_001577A0(void *p, int n);
    void *func_000A1990(void *p, int n);
};

struct C_0012B410 {
    void func_0012B410(int a, int b, int c);
};

struct C_0013E4F0 {
    C_0012B410 *func_0013E4F0(int a);
};

struct C_0002EF20 {
    UIOwner *func_0002EF20(int a);
};

struct UIGlobalSub {
    char pad0[0x324];
    int f324;
};

struct UIGlobal {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15(void *a, int b, int c, int d);
    char pad4[0x2DC];
    UIGlobalSub *f2E0;
};

extern UIGlobal *D_002A8490;
extern char D_0027D934[];
extern char D_0027D91C[];
void *func_001E8A44(int size);

struct C_00157920 {
    void func_00157920();
};

struct ConfigFile {
    void func_00168280();
    void func_001691E0();
    int func_00169490(const char *path, int b);
    void func_00169710(const char *section);
    void func_00168C20(const char *key, int def, int *out);
    void func_00168550(const char *key, char *buf, int size);
    char pad[0x4cc];
};

struct UIScreen {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5();
};

struct BmxUIScreens {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33();
    virtual UIScreen *v34(int index, const char *name);
    virtual void v35();
    char pad4[0x10c];
    UIScreen **f110;
    int f114;
};
void func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8AA5(int size);
extern char D_002A64D0[];
extern char D_0027D998[];
extern char D_0027D98C[];
extern char D_0027D984[];
extern char D_0027D978[];
extern char D_0027D970[];
extern char D_0027D964[];
extern char D_00275678[];

struct BmxUIManager {
    void *vtbl;
    char pad4[0x11c];
    void **f120;
    int f124;
    char pad128[0x28];
    UIItem *f150;
    char pad154[0x104];
    int f258;
    UIOwner *f25c;
    char pad260[8];
    void *f268;
    UIItem *f26c;
    void *f270;
    void *f274;
    int func_000BABF0();
    void func_000BACE0();
    int func_000BB0C0();
    void func_000BB340();
    void func_000BB360();
    void func_000BB380(const char *name);
    void func_000BB3B0(const char *a, const char *b);
    int func_000BB3F0(const char *a, const char *b);
};

int BmxUIManager::func_000BABF0()
{
    C_0013E4F0 *p = (C_0013E4F0 *)func_001E8A44(0x2d0);
    f258 = (int)(p ? p->func_0013E4F0(1) : 0);
    ((C_0012B410 *)f258)->func_0012B410(0x3f9f49f5, 0x280, 0x1c0);
    C_0002EF20 *q = (C_0002EF20 *)func_001E8A44(0x78);
    f25c = q ? q->func_0002EF20(1) : 0;
    int mode = D_002A8490->f2E0->f324;
    f25c->func_000306F0(f258, 0, *((UIItemData *)f150)->f4AC, ((UIItemData *)f150)->f4DC->f24,
                        mode == 0 ? D_0027D934 : D_0027D91C, 0);
    D_002A8490->v15((void *)f258, 0, 0, 0);
    return 1;
}

void BmxUIManager::func_000BACE0()
{
    f25c->func_0002EF70(0, 0);
    ((UIPositionItem *)f258)->f170 = ((UIItemData *)f150)->f4DC->f24;
    ((UIPositionItem *)f258)->f180 = ((UIItemData *)f150)->f4DC->fA4;
    ((UIPositionItem *)f258)->func_0012A770(*((UIItemData *)f150)->f4A8, 2);
    f25c->func_00030240(((UIItemData *)f150)->f3E4, 4, &((UIPositionItem *)f258)->f170, &((UIPositionItem *)f258)->f180, &D_002A32DC);
}

int BmxUIManager::func_000BB0C0()
{
    if (f120 != 0) {
        int i;
        for (i = 0; i < f124; i++) {
            f26c->func_001577A0(f120[i], -1);
        }
        ((UIItem *)this)->func_001577A0(f26c, -1);
    }
    ((UIItem *)this)->func_001577A0(f268, 10);
    if (f150 != 0) {
        ((UIItem *)this)->func_001577A0(f150->func_000A1990(&f258, 1), -1);
    }
    if (f25c != 0) {
        ((UIItem *)this)->func_001577A0(f25c, -1);
    }
    ((UIItem *)this)->func_001577A0(f274, -1);
    ((UIItem *)this)->func_001577A0(f270, -1);
    return 1;
}

void BmxUIManager::func_000BB340()
{
    f150->v4();
    f26c->v4();
}

void BmxUIManager::func_000BB360()
{
    ((C_00157920 *)this)->func_00157920();
}

void BmxUIManager::func_000BB380(const char *name)
{
    f25c->f74->func_000300C0(name);
    f25c->f74->func_00030160();
}

void BmxUIManager::func_000BB3B0(const char *a, const char *b)
{
    f25c->f74->func_00030020(a);
    f25c->f74->func_000300C0(b);
    f25c->f74->func_00030160();
}

int BmxUIManager::func_000BB3F0(const char *a, const char *b)
{
    if (f25c->f74->func_000300F0(a) == 0) {
        return 0;
    }
    if (f25c->f74->func_00030120(b) == 0) {
        return 0;
    }
    return f25c->f74->func_000301D0() != 0 ? 1 : 0;
}

