/* 11 functions from 0x000B1350 to 0x000B21B0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

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
    char pad0[0x348];
    int f348;
    char pad34C[0x160];
    int *f4AC;
    char pad4B0[0xC8];
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

extern char D_0027CED0[];
extern u32 D_002A2DE8, D_002A2DEC, D_002A2DF0, D_002A2DF8, D_002A2DFC, D_002A2E00;
struct C_000B1860 {
    int f0, f4, f8;
    u32 fC[4];
    u32 f1C[4];
    u32 f2C[4];
    char f3C[0x104];
    char f140[0x104];
    char f244[0x104];
    char f348[0x3C];
    C_000B1860 *func_000B1860(void);
};

struct C_0018C7B0 {
    void func_0018C7B0(int a0);
};

/* DynamicModelTempData */
struct C_001B4AF0 {
    void func_001B4AF0(void);
};

/* ProceduralTempDataExtended */
extern int D_0027D004;
struct C_000B2020 {
    void * volatile vtbl;
    char pad4[0x110];
    int f114, f118, f11C, f120, f124, f128, f12C, f130, f134, f138, f13C, f140, f144, f148;
    char f14C[0x104];
    char f250[0x104];
    char f354[0x104];
    C_000B2020 *func_000B2020(void);
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
static __inline const int &MinRef_000B2020(const int &a, const int &b) { return (b < a) ? b : a; }

struct S_000B1DA0_Res { void func_00181DB0(int h); void func_001820B0(void *cb, void *ctx, int h); };
struct S_000B1DA0_Obj { char pad0[8]; S_000B1DA0_Res *f8; };
struct S_000B1DA0_Mgr { int func_001617F0(void *p, int a); };
struct S_000B1DA0_Root { char pad0[0x124]; int f124; };
extern S_000B1DA0_Mgr *D_002A829C;
extern char D_000B17D0[];
struct VehicleAI {
    void *vtbl;
    char pad4[0x38];
    VehicleAIOwner *f3C;
    int func_0018C900(int a);
    int func_000B1DA0(int a);
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

extern "C" int strlen(const char *s);
extern "C" int func_001EA426(const char *a, const char *b);
extern "C" int __cdecl func_001ADCC0(char *buf, int size, const char *fmt, const char *a, const char *b);
void *func_001E8A44(int size);
extern char D_002A4C10[];
extern char D_002A45E0[];
extern char D_002A5348[];
extern char D_002A5870[];
extern char D_00275678[];
extern int D_002BA160;

struct __declspec(align(16)) S_000B1B80_Mat { float m[16]; };
void func_000265C0(S_000B1B80_Mat *out, void *a, void *b, void *c, int d, int e);
void __stdcall func_001577A0(void *p, int flag);

struct S_000B1B80_Obj {
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
    virtual void v31(S_000B1B80_Mat *m);
    char pad4[0x64];
    int f68;
    S_000B1B80_Obj *func_0019B700(int a);
    int func_00133020(int a);
    int func_0019D7B0(void *a, char *name);
    void func_00133140(int a, int b);
};
struct S_000B1B80_Cfg {
    char pad0[8];
    int f8;
    u32 fC[4];
    u32 f1C[4];
    u32 f2C[4];
};
struct S_000B1B80_Slot {
    char pad0[8];
    S_000B1B80_Obj *f8;
};
struct C_000B1B80 {
    char pad0[0x3C];
    S_000B1B80_Cfg *f3C;
    char pad40[4];
    S_000B1B80_Slot *f44;
    char pad48[0x224];
    char name[0x104];
    void func_000B1B80(void);
};

struct V4_000B1350 {
    float x, y, z, w;
    V4_000B1350() {}
    V4_000B1350(float a, float b, float c)
    {
        x = a;
        y = b;
        z = c;
        w = 1.0f;
    }
    V4_000B1350 operator+(const V4_000B1350 &o) const { return V4_000B1350(x + o.x, y + o.y, z + o.z); }
    V4_000B1350 operator-(const V4_000B1350 &o) const { return V4_000B1350(x - o.x, y - o.y, z - o.z); }
    V4_000B1350 operator*(float s) const { return V4_000B1350(x * s, y * s, z * s); }
};

struct S_000B1350_Key {
    char pad0[8];
    float x, y, z;
    char pad14[0x14];
};

struct S_000B1350_Tbl {
    unsigned int count;
    int f4;
    S_000B1350_Key *f8;
};

struct S_000B1350_Owner {
    char pad0[0x518];
    S_000B1350_Tbl *f518;
};

struct S_000B1350_B {
    char pad0[0x3C];
    S_000B1350_Owner *f3C;
    char pad40[8];
    S_000B1350_B *f48;
    char pad4C[4];
    int f50;
    int f54;
};

struct S_000B1350_Sub {
    int f0;
    float f4;
    V4_000B1350 f8;
};

struct S_000B1350_A {
    char pad0[0x48];
    S_000B1350_Sub **f48;
    int f4C;
};

struct S_000B1350_Node {
    int f0;
    int f4;
    S_000B1350_A **f8;
    S_000B1350_B **fC;
};

struct C_000B1350 {
    char pad0[0x34];
    int f34;
    int f38;
    int f3C;
    char pad40[4];
    S_000B1350_A **f44;
    S_000B1350_B **f48;
    S_000B1350_Node **f4C;
    void func_000B1350(void);
};

void C_000B1350::func_000B1350(void)
{
    int n;
    int i;
    int k;
    int idx;

    for (n = 0; n < f3C; n++) {
        {
            int cnt = 0;
            for (i = 0; i < f38; i++) {
                if (f48[i]->f50 == n) {
                    cnt++;
                } else if (f48[i]->f54 == n) {
                    cnt++;
                }
            }
            if (cnt > 0) {
                f4C[n]->fC = (S_000B1350_B **)func_001E8A44(cnt * 4);
                idx = 0;
                for (i = 0; i < f38; i++) {
                    if (f48[i]->f50 == n || f48[i]->f54 == n) {
                        f4C[n]->fC[idx] = f48[i];
                        idx++;
                    }
                }
                f4C[n]->f4 = idx;
            }
        }
        {
            int cnt = 0;
            for (i = 0; i < f34; i++) {
                for (k = 0; k < f44[i]->f4C; k++) {
                    if (f44[i]->f48[k]->f0 == n) {
                        cnt++;
                    }
                }
            }
            if (cnt > 0) {
                f4C[n]->f8 = (S_000B1350_A **)func_001E8A44(cnt * 4);
                idx = 0;
                for (i = 0; i < f34; i++) {
                    for (k = 0; k < f44[i]->f4C; k++) {
                        if (f44[i]->f48[k]->f0 == n) {
                            f4C[n]->f8[idx] = f44[i];
                            idx++;
                        }
                    }
                }
                f4C[n]->f0 = idx;
            }
        }
    }
    for (n = 0; n < f3C; n++) {
        if (f4C[n]->f4 > 1) {
            for (k = 0; k < f4C[n]->f4; k++) {
                idx = k - 1;
                if (idx < 0) {
                    idx = f4C[n]->f4 + idx;
                }
                f4C[n]->fC[k]->f48 = f4C[n]->fC[idx];
            }
        } else if (f4C[n]->f4 == 1) {
            f4C[n]->fC[0]->f48 = 0;
        }
    }
    for (i = 0; i < f34; i++) {
        for (k = 0; k < f44[i]->f4C; k++) {
            S_000B1350_Sub *s = f44[i]->f48[k];
            int cur = (int)s->f4;
            unsigned int ni = s->f0;
            S_000B1350_Node *node = f4C[ni];
            if (node->f4 > 0) {
                float t = s->f4 - (float)cur;
                S_000B1350_Tbl *tbl = node->fC[0]->f3C->f518;
                unsigned int next = cur + 1;
                if (next >= tbl->count) {
                    next = 0;
                }
                V4_000B1350 *p0 = (V4_000B1350 *)&tbl->f8[cur].x;
                V4_000B1350 *p1 = (V4_000B1350 *)&tbl->f8[next].x;
                s->f8 = *p0 + (*p1 - *p0) * t;
            }
        }
    }
}

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
    volatile int a;
    volatile int r;
    if (D_002A8490->f2A4->f1C8 == 1) {
        a = ai->f50;
        r = Min_000B1740(a, 2);
        a = r;
        r = Max_000B1740(0, a);
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

C_000B1860 *C_000B1860::func_000B1860(void)
{
    C_000B1860 * volatile self = this;
    u32 *v = self->fC;
    v[2] = 0; v[1] = 0; v[0] = 0; v[3] = 0x3f800000;
    v = self->f1C;
    v[2] = 0; v[1] = 0; v[0] = 0; v[3] = 0x3f800000;
    v = self->f2C;
    v[2] = 0; v[1] = 0; v[0] = 0; v[3] = 0x3f800000;
    {
        volatile int limit = sizeof(f3C) - 1;
        int l = limit;
        volatile int count = l > 4 ? 4 : l;
        int n = count;
        func_001E8920(self->f3C, (const char *)&D_002764F0, n);
        self->f3C[n] = 0;
    }
    {
        volatile int limit = sizeof(f140) - 1;
        int l = limit;
        volatile int count = l > 4 ? 4 : l;
        int n = count;
        func_001E8920(self->f140, (const char *)&D_002764F0, n);
        self->f140[n] = 0;
    }
    {
        volatile int limit = sizeof(f244) - 1;
        int l = limit;
        volatile int count = l > 4 ? 4 : l;
        int n = count;
        func_001E8920(self->f244, (const char *)&D_002764F0, n);
        self->f244[n] = 0;
    }
    {
        volatile int limit = 0x3b;
        int l = limit;
        volatile int count = l > 6 ? 6 : l;
        int n = count;
        func_001E8920(self->f348, (const char *)&D_0027CED0, n);
        self->f348[n] = 0;
    }
    *(VehicleV4 *)self->fC = *(VehicleV4 *)&D_002A2DC4;
    *(VehicleV4 *)self->f1C = *(VehicleV4 *)&D_002A2DF4;
    *(VehicleV4 *)self->f2C = *(VehicleV4 *)&D_002A2DE4;
    self->f0 = 1;
    self->f4 = 0;
    self->f8 = 0;
    return self;
}

#pragma optimize("g", on)
void C_000B1A40::func_000B1A40(S_000B1A40_Stream * volatile stream)
{
    char buf[0x104];
    int len;
    int mb;
    struct { C_000B1A40 * volatile self; volatile int a; volatile int cnt; } t;

    t.self = this;
    stream->func_00168BE0(D_00276310, D_002764F0, buf, 0x104);
    t.a = func_001E9040(buf, D_0027CEF0);
    mb = 0x32;
    t.cnt = t.a > mb ? mb : t.a;
    len = t.cnt;
    func_001E8920(t.self->name, buf, len);
    t.self->name[len] = 0;
    stream->func_00168BE0(D_00275AE0, D_002764F0, t.self->text, 0x104);
    stream->func_00168C20(D_00275680, 0, &t.self->f8);
    stream->func_00168CB0(D_00275AD4, &D_002A2DC4, t.self->fC);
    stream->func_00168CB0(D_00275AC8, &D_002A2DF4, t.self->f1C);
    stream->func_00168CB0(D_0027CEE4, &D_002A2DE4, t.self->f2C);
    stream->func_00168C20(D_0027CED8, 1, &t.self->f0);
}
void C_000B1B80::func_000B1B80(void)
{
    char buf[0x104];
    S_000B1B80_Mat mat;
    struct { int limit; int cnt; int len; } t;
    int n;

    if (func_001EA426(name, D_002764F0) != 0) {
        t.len = strlen(D_002A4C10);
        t.limit = 0x103;
        t.cnt = AsmMinI(t.limit, t.len);
        n = t.cnt;
        func_001E8920(buf, D_002A4C10, n);
        buf[n] = 0;
        func_001ADCC0(D_002A4C10, 0x104, D_00275678, (this->f3C->f8 == 0) ? D_002A5870 : D_002A5348, D_002A45E0);
        {
            void *mem = func_001E8A44(0x1e0);
            this->f44->f8 = mem ? ((S_000B1B80_Obj *)mem)->func_0019B700(1) : 0;
        }
        if (this->f44->f8->func_00133020(0xd) != 0) {
            this->f44->f8->f68 = D_002BA160;
            if (this->f44->f8->func_0019D7B0(0, this->name) == 0) {
                this->f44->f8->v2();
                this->f44->f8 = 0;
            }
        }
        if (this->f44->f8 != 0) {
            func_001577A0(this->f44->f8, 0);
            func_000265C0(&mat, this->f3C->fC, this->f3C->f1C, this->f3C->f2C, 0, 1);
            this->f44->f8->v31(&mat);
            this->f44->f8->v31(&mat);
            this->f44->f8->func_00133140(D_002B9120->f4AC[D_002B9120->f348], 1);
        }
        t.cnt = strlen(buf);
        t.limit = 0x103;
        t.len = AsmMinI(t.limit, t.cnt);
        n = t.len;
        func_001E8920(D_002A4C10, buf, n);
        D_002A4C10[n] = 0;
    }
}

#pragma optimize("g", on)
int VehicleAI::func_000B1DA0(int a) {
    if (((S_000B1DA0_Root *)D_002A8490)->f124 == 0) {
        if (f5C == 0) {
            int h = D_002A829C->func_001617F0(&f64, 1);
            ((S_000B1DA0_Obj *)f40)->f8->func_00181DB0(h);
            ((S_000B1DA0_Obj *)f40)->f8->func_001820B0((void *)func_000B1740, this, h);
            f5C = 1;
        }
        if (f60 == 0) {
            int h = D_002A829C->func_001617F0((char *)this + 0x168, 1);
            ((S_000B1DA0_Obj *)f40)->f8->func_00181DB0(h);
            ((S_000B1DA0_Obj *)f40)->f8->func_001820B0((void *)D_000B17D0, this, h);
            f60 = 1;
        }
        func_0018C900(a);
    }
    return 1;
}

#pragma optimize("g", on)
VehicleAI *VehicleAI::func_000B1EE0(int a0) {
    u32 *p;

    ((C_0018C7B0 *)this)->func_0018C7B0(a0);
    vtbl = (void *)&D_0027CF8C;
    p = (u32 *)&f7C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f8C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f50 = -1;
    f54 = -1;
    f3C = 0;
    f40 = 0;
    f44 = 0;
    f1A0 = 0;
    f1A2 = 0;
    f64 = 0;
    f48 = 0;
    f78 = 0;
    f1A3 = 0;
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

C_000B2020 *C_000B2020::func_000B2020(void) {
    C_000B2020 * volatile self = this;
    volatile int limit;
    int count;
    ((C_001B4AF0 *)this)->func_001B4AF0();
    self->vtbl = (void *)&D_0027D004;
    limit = sizeof(f250) - 1;
    count = Min_000B1740(limit, 4);
    func_001E8920(self->f250, (const char *)&D_002764F0, count);
    self->f250[count] = 0;
    limit = sizeof(f14C) - 1;
    count = Min_000B1740(limit, 4);
    func_001E8920(self->f14C, (const char *)&D_002764F0, count);
    self->f14C[count] = 0;
    limit = sizeof(f354) - 1;
    count = Min_000B1740(limit, 4);
    func_001E8920(self->f354, (const char *)&D_002764F0, count);
    self->f354[count] = 0;
    self->f13C = 1;
    self->f140 = 1;
    self->f11C = -1;
    self->f120 = -1;
    self->f144 = 0;
    self->f148 = 0;
    self->f118 = 0x41100000;
    self->f114 = 0;
    self->f124 = 0;
    self->f12C = 0;
    self->f130 = 1;
    self->f134 = 0;
    self->f128 = 0;
    self->f138 = 0;
    return self;
}

