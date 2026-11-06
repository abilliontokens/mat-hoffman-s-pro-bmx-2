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
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(char *name); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual void v37(); virtual int v38(char *name); virtual void v39(); virtual void v40();
    virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
    virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52();
    virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56();
    virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60();
    virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64();
    virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68();
    virtual void v69(float a, float b); virtual void v70(); virtual void v71(); virtual void v72();
    virtual void v73();
    void func_001577A0(void *p, int n);
    void *func_000A1990(void *p, int n);
    void func_000A0AE0(int a);
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

struct UnlockRecord { char pad0[0x638]; int flags[1]; };
struct UnlockService {
    UnlockRecord *func_0005C020(int index);
    void func_0005C1B0(int type, int index);
    void func_0005C170(int type, int index);
};
struct GoalRecord { char pad0[0x62c]; int flags[1]; };
struct GoalLevel { char pad0[0x11c]; int count; char pad120[0xc]; int *flags; char pad130[0x78]; };
struct GoalOwner { char pad0[0x27c]; GoalLevel *f27c; };
struct UnlockData { char pad0[0x110]; int count; int unk114; int *flags; char pad11c[0x8c]; };
struct UIGlobalSub {
    char pad0[0x2c0];
    UnlockService *f2c0;
    char pad2c4[0x60];
    int f324;
};

struct UIGlobalSub2 {
    char pad0[0x1dc];
    int f1DC;
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
    char pad2E4[0xc];
    UIGlobalSub2 *f2F0;
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

extern char D_00276F28[], D_002A5348[], D_002A47F0[], D_002A48F8[], D_00276C34[], D_00276C08[], D_0027D948[];
struct UILoader {
    int func_0013D780(char *name, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    void func_0013B260(int a);
    int func_0013DFF0(char *name, int a2);
};
extern UILoader *D_002BEAAC;
struct UISingleton { virtual void v0(int a); };
extern UISingleton *D_002F0630;
struct C_00149380 { void func_00149380(); };
struct C_000AC2C0 { UIItem *func_000AC2C0(int a); };
struct UIStringHost {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(const char *path);
};
extern UIStringHost *D_002A829C;
struct UIProgress {
    virtual void v0(); virtual void v1();
    virtual void v2(const char *name, int a, int b);
    virtual void v3(const char *name, int a, int b);
};
extern char D_002A5FA8[], D_002A5870[], D_002A60B0[], D_002A5D98[], D_002A5EA0[];
extern char D_0027D90C[], D_002769F8[], D_0027D8FC[], D_0027D8F0[], D_0027A604[], D_0027D8D8[];
struct BmxMenuItem {
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
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    char pad4[0x40];
    int f44[8];
};
struct BmxManagerView {
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
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual BmxMenuItem *v38(ConfigFile *, char *);
};
struct BmxUIManager {
    void *vtbl;
    char pad4[0x11c];
    void **f120;
    int f124;
    char pad128[0x28];
    UIItem *f150;
    char f154[0x104];
    int f258;
    UIOwner *f25c;
    char pad260[8];
    void *f268;
    UIItem *f26c;
    void *f270;
    void *f274;
    int f278;
    UnlockData *f27c;
    char pad280[0x2c];
    UIProgress *f2AC;
    int func_000BADB0();
    void func_000BB440(int type);
    int func_000BA9F0();
    int func_000BABF0();
    void func_000BACE0();
    int func_000BB0C0();
    int func_000BB180();
    void func_000BB600(int type);
    void func_000BB340();
    void func_000BB360();
    void func_000BB380(const char *name);
    void func_000BB3B0(const char *a, const char *b);
    int func_000BB3F0(const char *a, const char *b);
};

int BmxUIManager::func_000BA9F0()
{
    ConfigFile parser;
    int result = 1;
    int i, j, tmp;
    char buf[0x104];
    BmxMenuItem *obj;
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A5D98);
    func_001ADCC0(buf, 0x104, D_0027D90C, D_002A64D0);
    parser.func_00168280();
    if (!parser.func_00169490(buf, 0)) {
        parser.func_001691E0();
        return 0;
    }
    parser.func_00169710(D_002769F8);
    parser.func_00168C20(D_0027D8FC, 0, &f124);
    f120 = (void **)func_001E8AA5(f124 * 4);
    for (i = 0; i < f124; i++) {
        func_001ADCC0(buf, 0x104, D_0027D8F0, i + 1);
        parser.func_00169710(buf);
        parser.func_00168550(D_0027A604, buf, 0x104);
        obj = ((BmxManagerView *)this)->v38(&parser, buf);
        j = 0;
        if (obj) {
            int *p = obj->f44;
            do {
                func_001ADCC0(buf, 0x104, D_0027D8D8, j + 1);
                parser.func_00168C20(buf, 0, &tmp);
                *p = tmp;
                j++;
                p++;
            } while (j < 8);
            obj->v34();
            obj->v5();
            f120[i] = obj;
        } else {
            f120[i] = 0;
            result = 0;
        }
    }
    parser.func_001691E0();
    return result;
}

int BmxUIManager::func_000BABF0()
{
    C_0013E4F0 *p = (C_0013E4F0 *)func_001E8A44(0x2d0);
    f258 = (int)(p ? p->func_0013E4F0(1) : 0);
    ((C_0012B410 *)f258)->func_0012B410(0x3f9f49f5, 0x280, 0x1c0);
    C_0002EF20 *q = (C_0002EF20 *)func_001E8A44(0x78);
    f25c = q ? q->func_0002EF20(1) : 0;
    f25c->func_000306F0(f258, 0, *((UIItemData *)f150)->f4AC, ((UIItemData *)f150)->f4DC->f24,
                        D_002A8490->f2E0->f324 == 0 ? D_0027D934 : D_0027D91C, 0);
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

int BmxUIManager::func_000BADB0()
{
    char buf[0x104];
    char name[0x104];
    char *s;
    char *d;

    func_001ADCC0(D_002A5870, 0x104, D_00276F28, D_002A64D0);
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    func_001ADCC0(buf, 0x104, D_00276C34, D_002A64D0, f154);
    if (D_002BEAAC->func_0013D780(buf, 1, 0, 0, 0, 0, 0, 0)) {
        D_002BEAAC->func_0013B260(1);
    }
    if (D_002F0630) {
        D_002F0630->v0(1);
        D_002F0630 = 0;
    }
    C_00149380 *mem = (C_00149380 *)func_001E8A44(0x4010);
    if (mem) {
        mem->func_00149380();
    }
    if (D_002A8490->f2E0->f324 == 0) {
        D_002A829C->v4(D_0027D948);
    } else {
        D_002A829C->v4(D_0027D948);
    }
    s = f154;
    d = name;
    while ((*d++ = *s++) != 0)
        ;
    C_000AC2C0 *p = (C_000AC2C0 *)func_001E8A44(0x5c0);
    f150 = p ? p->func_000AC2C0(1) : 0;
    f150->func_000A0AE0(0);
    f150->v29(f154);
    f150->v30();
    f150->v37();
    if (f150->v38(name)) {
        f150->v39();
        f150->v56();
    }
    f150->v64();
    f150->v68();
    f150->v69(-1.0f, -1.0f);
    if (D_002A8490->f2F0->f1DC != 0) {
        if (f2AC) {
            f2AC->v3(D_00276C08, 0x28, 0x10);
        }
        if (f2AC) {
            f2AC->v2(D_00276C08, 0x86, 0x187);
        }
    }
    f150->v72();
    if (D_002A8490->f2F0->f1DC != 0) {
        if (f2AC) {
            f2AC->v3(D_00276C08, 0x50, 0x10);
        }
        if (f2AC) {
            f2AC->v2(D_00276C08, 0x9a, 0x187);
        }
    }
    f150->v73();
    if (D_002A8490->f2F0->f1DC != 0) {
        if (f2AC) {
            f2AC->v3(D_00276C08, 0xa0, 0x10);
        }
        if (f2AC) {
            f2AC->v2(D_00276C08, 0xc2, 0x187);
        }
    }
    D_002BEAAC->func_0013DFF0(buf, 1);
    return 1;
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

int BmxUIManager::func_000BB180()
{
    BmxUIScreens *self = (BmxUIScreens *)this;
    char path[0x100];
    char section[0x100];
    char name[0x100];
    ConfigFile cfg;
    int i;
    cfg.func_00168280();
    func_001ADCC0(path, 0x100, D_0027D998, D_002A64D0);
    if (cfg.func_00169490(path, 0) == 0) {
        func_001ADCC0(path, 0x100, D_0027D98C, D_002A64D0);
        if (cfg.func_00169490(path, 0) == 0) {
            cfg.func_001691E0();
            return 0;
        }
    }
    cfg.func_00169710(D_0027D984);
    cfg.func_00168C20(D_0027D978, 0, &self->f114);
    self->f110 = (UIScreen **)func_001E8AA5(self->f114 << 2);
    self->v35();
    for (i = 0; i < self->f114; i++) {
        func_001ADCC0(section, 0x100, D_0027D970, i + 1);
        cfg.func_00169710(section);
        cfg.func_00168550(D_0027D964, name, 0x100);
        func_001ADCC0(path, 0x100, D_00275678, D_002A64D0, name);
        self->f110[i] = self->v34(i + 1, path);
        self->f110[i]->v5();
    }
    cfg.func_001691E0();
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
    if (!f25c->f74->func_000300F0(a)) {
        return 0;
    }
    if (!f25c->f74->func_00030120(b)) {
        return 0;
    }
    if (!f25c->f74->func_000301D0()) {
        return 0;
    }
    return 1;
}

void BmxUIManager::func_000BB440(int type)
{
    int idx;
    int count = 0;
    int i;
    switch (type) {
    case 0: idx = 0; break;
    case 2: idx = 1; break;
    case 4: idx = 2; break;
    case 5: idx = 3; break;
    case 7: idx = 4; break;
    case 9: idx = 5; break;
    case 10: idx = 6; break;
    case 11: idx = 7; break;
    case 13: idx = 8; break;
    case 14: idx = 9; break;
    default: return;
    }
    for (i = 0; i < f27c[type].count; ++i) {
        if (D_002A8490->f2E0->f2c0->func_0005C020(idx)->flags[i] == 0)
            ++count;
    }
    if (count == f27c[type].count) {
        for (i = 0; i < f27c[type].count; ++i) {
            D_002A8490->f2E0->f2c0->func_0005C020(idx)->flags[i] = f27c[type].flags[i] == 0;
            if (f27c[type].flags[i] == 0)
                D_002A8490->f2E0->f2c0->func_0005C1B0(type, i);
        }
    }
}

void BmxUIManager::func_000BB600(int type)
{
    int idx = 0;
    int count = 0;
    int i;
    switch (type) {
    case 0: idx = 0; break;
    case 2: idx = 1; break;
    case 4: idx = 2; break;
    case 5: idx = 3; break;
    case 7: idx = 4; break;
    case 9: idx = 5; break;
    case 10: idx = 6; break;
    case 11: idx = 7; break;
    case 13: idx = 8; break;
    case 14: idx = 9; break;
    default: return;
    }
    for (i = 0; i < ((GoalOwner *)this)->f27c[type].count; i++) {
        if (((GoalRecord *)D_002A8490->f2E0->f2c0->func_0005C020(idx))->flags[i] == 0)
            count++;
    }
    if (count == ((GoalOwner *)this)->f27c[type].count) {
        for (i = 0; i < ((GoalOwner *)this)->f27c[type].count; i++) {
            ((GoalRecord *)D_002A8490->f2E0->f2c0->func_0005C020(idx))->flags[i] = ((GoalOwner *)this)->f27c[type].flags[i] == 0;
            if (((GoalOwner *)this)->f27c[type].flags[i] == 0)
                D_002A8490->f2E0->f2c0->func_0005C170(type, i);
        }
    }
}

