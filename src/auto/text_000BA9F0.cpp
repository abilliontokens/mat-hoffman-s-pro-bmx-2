/* 13 functions from 0x000BA9F0 to 0x000BB7C0, found by Ghidra. */
#include "common.h"

struct UIQuad { int x, y, z, w; };
struct UIPositionData { char pad0[0x24]; UIQuad f24; char pad34[0x70]; UIQuad fA4; };
struct UIItemData { char pad0[0x3e4]; int f3E4; char pad3E8[0xc0]; int *f4A8; char pad4AC[0x30]; UIPositionData *f4DC; };
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

struct C_00157920 {
    void func_00157920();
};

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
    int func_000BB0C0();
    void func_000BB340();
    void func_000BB360();
    void func_000BB380(const char *name);
    void func_000BB3B0(const char *a, const char *b);
    int func_000BB3F0(const char *a, const char *b);
};

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

