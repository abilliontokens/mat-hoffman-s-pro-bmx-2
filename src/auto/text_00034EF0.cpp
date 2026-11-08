/* 15 functions from 0x00034EF0 to 0x00035E80, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline int MinT_34EF0(volatile int *a, volatile int *b) { return AsmMinI(*(int *)a, *(int *)b); }

/* PreviewPane (vtable 0x276CE4), virtual slot 12: swings the page's light around its anchor. */
struct S_34EF0_V4 {
    float x, y, z, w;
    S_34EF0_V4() { x = y = z = 0.0f; w = 1.0f; }
    S_34EF0_V4(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};
struct S_34EF0_Cam { void func_0019A8C0(S_34EF0_V4 *a, S_34EF0_V4 *b); };
struct S_34EF0_Hold {
    char pad0[4];
    S_34EF0_Cam *f4;
    char pad8[8];
    int f10;
    void func_00164820(void *node);
};
struct S_34EF0_Y { char pad0[4]; void *f4; };
struct S_34EF0_Own {
    char pad0[0x1a4];
    S_34EF0_Hold *f1a4;
    char pad1a8[4];
    S_34EF0_Y *f1ac;
};
struct S_34EF0_Gfx {
    void func_00194E90(S_34EF0_V4 *out);
    void func_00194EB0(S_34EF0_V4 v);
    void func_00194F60(S_34EF0_V4 v);
    void func_00194E60(S_34EF0_V4 v);
};
struct S_34EF0_Owner { char pad0[0x5c]; S_34EF0_Gfx *f5c; };
struct S_34EF0_Mgr { void func_0001B440(void *obj, int r); };
struct S_34EF0_Global { char pad0[0x484]; S_34EF0_Mgr *f484; };
extern S_34EF0_Global *D_002B9120;
extern S_34EF0_V4 D_002A14F4;
extern float D_00275548;
int func_00011260(int lo, int hi);
void func_00034820(float *out, const float *in);
void func_00158390(float angle, S_34EF0_V4 axis, S_34EF0_V4 v, S_34EF0_V4 *out);

static __forceinline void Cross_34EF0(S_34EF0_V4 *out, const S_34EF0_V4 *a, const S_34EF0_V4 *b)
{
    AsmVec3Cross(&out->x, &a->x, &b->x);
}

struct PreviewPane {
    char pad0[0x24];
    S_34EF0_Cam *f24;
    S_34EF0_Own *f28;
    char pad2c[8];
    S_34EF0_Owner *f34;
    float f38;
    char pad3c[4];
    float f40;
    void func_00157A00(float dt);
    void func_00034EF0(float dt);
};
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" unsigned __int64 __ftol2(double x);

extern char D_00276D5C;
extern float D_00276CA0;

struct I_002A8490 {
    char pad4[0xc];
    int f10;
    virtual void slot_00(void) = 0;
    virtual void slot_04(void) = 0;
    virtual void slot_08(void) = 0;
    virtual void slot_0c(void) = 0;
    virtual void slot_10(void) = 0;
    virtual void slot_14(void) = 0;
    virtual void slot_18(void) = 0;
    virtual void slot_1c(void) = 0;
    virtual void slot_20(void) = 0;
    virtual void slot_24(void) = 0;
    virtual void slot_28(void) = 0;
    virtual void slot_2c(void) = 0;
    virtual void slot_30(void) = 0;
    virtual void slot_34(void) = 0;
    virtual void slot_38(void) = 0;
    virtual void slot_3c(void *a, void *b, int c, int d) = 0;
};

extern I_002A8490 *D_002A8490;

struct S_35980_A {
    void func_00069BB0(void);
    void func_00069BA0(void);
};

struct S_35980_B {
    void func_0006BB90(void);
    void func_0006BBF0(void);
};

struct C_00035980 {
    char pad0[0x2c4];
    S_35980_A *f2c4;
    char pad2c8[0x2c0];
    S_35980_B *f588;
    void func_00035980(int enable);
};

struct C_00035BE0 {
    char pad0[0x1a0];
    void *f1a0;
    char pad1a4[0x2c];
    void *f1d0;
    void func_001577A0(void *p, int n);
    void func_00035BE0(void);
};

struct S_35300_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    void func_0008B6F0(void);
    void func_0008B680(char *p);
};

struct C_00035300 {
    char pad0[0x494];
    int f494;
    char pad498[0xc8];
    S_35300_Obj *f560;
    void func_00035300(char *name, int n);
};

struct S_35360_Item {
    char pad0[0x67c];
    int f67c;
    void func_0010C090(void *a, void *b, void *c, int d);
};

struct S_35360_Tbl {
    char pad0[0x24];
    int count;
    char pad28[0x180];
    S_35360_Item *objs[1];
};

struct S_35360_Mgr {
    char pad0[0x3e4];
    int f3e4;
    char pad3e8[0xc0];
    int *f4a8;
    char pad4ac[0x34];
    S_35360_Tbl *f4e0;
};

struct UIQuad { int x, y, z, w; void copy1514(); void copy1524(); };
struct UIPositionItem { char pad0[0x170]; UIQuad f170, f180; void func_0012A770(int, int); };
struct UIOwner {
    void func_0002EF70(int, int);
    void func_00030240(int, int, UIQuad *, UIQuad *, void *);
};
struct S_35560_State {
    char pad0[0x24]; int f24;
    char pad28[8]; UIPositionItem *f30; UIOwner *f34;
    int f38; int f3c;
    void init(UIOwner *owner, UIPositionItem *item, int id) {
        f24=0; f30=item; f34=owner; f3c=id;
    }
};
extern UIQuad D_002A1514, D_002A1524;
extern int D_002A1518, D_002A151C, D_002A1520;
extern int D_002A1528, D_002A152C, D_002A1530;
inline void UIQuad::copy1514() { x=D_002A1514.x; y=D_002A1518; z=D_002A151C; w=D_002A1520; }
inline void UIQuad::copy1524() { x=D_002A1524.x; y=D_002A1528; z=D_002A152C; w=D_002A1530; }

struct C_00035360 {
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
    virtual void v38();
    virtual void v39();
    virtual void v40();
    char pad4[0x20];
    UIPositionItem *f24, *f28;
    char pad2c[0x18];
    UIOwner *f44, *f48;
    char pad4c[0x18];
    S_35360_Mgr *f64;
    char pad68[0x22c];
    char f294[0x10];
    char f2a4[0x10];
    char f2b4[0x10];
    char pad2c4[0x27c];
    S_35560_State *f540;
    char pad544[8];
    int f54c;
    void func_00035560(void);
    void func_00032220(void);
    void func_00035360(void);
};

struct S_35680_Screen {
    char pad0[0x1e0];
    u32 f1e0;
    char pad1e4[0x20];
    int f204;
    int f208;
    void func_0012B190(int x, int y, int w, int h);
};

struct C_00035680 {
    char pad0[0x24];
    S_35680_Screen *f24;
    S_35680_Screen *f28;
    char pad2c[0x1b0];
    char f1dc[4];
    u32 f1e0;
    void func_00035680(void);
};

struct S_35860_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    void func_0008A910(void);
    void func_0008A080(void);
};

struct S_002EFDB8 {
    char pad0[0x2c];
    unsigned int f2c;
    int f30;
};
extern S_002EFDB8 *D_002EFDB8;
extern unsigned int D_002B8F24;
extern unsigned int D_002B8F20;

struct C_000353F0 {
    char pad0[0x64];
    S_35860_Obj *f64;
    char pad68[0x21c];
    int f284;
    char pad288[0x40];
    int f2c8;
    char pad2cc[0x274];
    S_35860_Obj *f540;
    void func_001578D0(void);
    void func_000353F0(void);
};

struct C_00035720 {
    char pad0[0x24];
    S_35680_Screen *f24;
    S_35680_Screen *f28;
    char pad2c[0x1b0];
    int f1dc;
    int f1e0;
    int f1e4;
    int f1e8;
    char pad1ec[0x98];
    int f284;
    char pad288[0x40];
    int f2c8;
    char pad2cc[0x1a8];
    int f474;
    char pad478[0xc8];
    S_35860_Obj *f540;
    char pad544[0xc];
    S_35860_Obj *f550;
    S_35860_Obj *f554;
    S_35860_Obj *f558;
    char pad55c[4];
    S_35860_Obj *f560;
    void func_001577A0(void *p, int n);
    void func_00031E80(void);
    int func_00035780(void);
    void func_00035720(void);
    void func_00035860(void);
    void func_000358E0(void);
    void func_00035940(void);
};

void *func_001E8A44(int size);
extern char D_002A60B0[];
extern char D_00275678[];
extern char D_002A5870[];
extern char D_002A5FA8[];

struct S_359C0_Obj {
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
    virtual int v10();
};
struct S_359C0_1D0 : S_359C0_Obj {
    S_359C0_1D0 *func_00092890(int a);
};
struct S_359C0_2C4 : S_359C0_Obj {
    S_359C0_2C4 *func_000687B0(int a);
    S_359C0_2C4 *func_0007CA00(void *a);
};
struct S_359C0_588 : S_359C0_Obj {
    S_359C0_588 *func_00069FF0(int a);
    S_359C0_588 *func_0007D6F0(void *a);
};
struct S_359C0_1A0 : S_359C0_Obj {
    S_359C0_1A0 *func_000715B0(int a);
    S_359C0_1A0 *func_00071880(void *a);
};
struct S_359C0_550 : S_359C0_Obj {
    S_359C0_550 *func_000891A0(int a);
    void func_0008A000(void *a);
};
struct S_359C0_554 : S_359C0_Obj {
    S_359C0_554 *func_0008A2E0(int a);
    void func_0008A8F0(void *a);
};
struct S_359C0_558 : S_359C0_Obj {
    S_359C0_558 *func_0008AAB0(int a);
    void func_0008AB90(void *a);
};
struct S_359C0_55C : S_359C0_Obj {
    S_359C0_55C *func_0008ABF0(int a);
    void func_0008AB90(void *a);
};
struct S_359C0_560 : S_359C0_Obj {
    S_359C0_560 *func_0008ADB0(int a);
};

struct C_000359C0 {
    void *vtbl;
    char pad4[0x19c];
    S_359C0_1A0 *f1a0;
    char pad1a4[0x2c];
    S_359C0_1D0 *f1d0;
    char pad1d4[0xf0];
    S_359C0_2C4 *f2c4;
    char pad2c8[0x288];
    S_359C0_550 *f550;
    S_359C0_554 *f554;
    S_359C0_558 *f558;
    S_359C0_55C *f55c;
    S_359C0_560 *f560;
    char pad564[0x24];
    S_359C0_588 *f588;
    void func_00031630(void);
    void func_000359C0(void);
};

extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);
int func_001E8D25(int c);
int func_001E8AF0(const char *s, const char *pat);
extern char D_00276D84[];
extern char D_00276D7C[];
extern char D_00276D74[];
extern char D_00276D6C[];
extern char D_00276D64[];
extern int D_002B9118;
extern int D_002B9108;
extern int D_002B910C;
extern int D_002B911C;
extern int D_002B9114;
extern int D_002BA160;

template <class T> inline const T &min_35C10(const T &a, const T &b) { return a > b ? b : a; }
struct __declspec(align(16)) S_35C10_Mat { float m[16]; };
void func_000265C0(S_35C10_Mat *out, void *a, void *b, void *c, int d, int e);

struct S_35C10_Holder {
    void func_001577A0(void *p, int n);
};
struct S_35C10_Mgr {
    char pad0[0x3a8];
    S_35C10_Holder **f3a8;
    char pad3ac[0x100];
    int *f4ac;
};
struct S_35C10_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad4[0x64];
    int f68;
    char pad6c[1];
    char f6d;
    S_35C10_Obj *func_0019B700(int a);
    int func_00129920(int a);
    int func_0019D7B0(void *a, char *name);
    void func_00133EF0(S_35C10_Mat *m);
    void func_00133140(int a, int b);
    void func_00133210(void);
};
struct C_00035C10 {
    void *vtbl;
    char pad4[0x60];
    S_35C10_Mgr *f64;
    char pad68[0x500];
    S_35C10_Obj *f568;
    S_35C10_Obj *f56c;
    S_35C10_Obj *f570;
    int func_00035C10(void *a1, char a2, char *name, void *a4, void *a5, void *a6, int a7, int a8);
};

void PreviewPane::func_00034EF0(float dt)
{
    S_34EF0_V4 pos, tmp, from, dir, side;

    if (f24 != 0) {
        f24->func_0019A8C0(&from, &tmp);
    } else if (f28 != 0) {
        f40 += dt;
        f28->f1a4->f4->func_0019A8C0(&from, &tmp);
        if (f28->f1a4->f10 == 0) {
            D_002B9120->f484->func_0001B440(f28, func_00011260(0, 100));
        }
        if (f28->f1a4->f10 != 0 && f40 >= D_00275548) {
            f28->f1a4->func_00164820(f28->f1ac->f4);
            f40 = 0.0f;
        }
    }
    f34->f5c->func_00194E90(&pos);
    dir = S_34EF0_V4(pos.x - from.x, pos.y - from.y, pos.z - from.z, 1.0f);
    func_00034820(&dir.x, &dir.x);
    func_00158390(0.025f, D_002A14F4, dir, &dir);
    f34->f5c->func_00194EB0(S_34EF0_V4(-dir.x, -dir.y, -dir.z, 1.0f));
    S_34EF0_V4 p(dir.x * f38 + from.x, dir.y * f38 + from.y, dir.z * f38 + from.z, 1.0f);
    Cross_34EF0(&side, &dir, &D_002A14F4);
    func_00034820(&side.x, &side.x);
    Cross_34EF0(&side, &side, &dir);
    func_00034820(&side.x, &side.x);
    f34->f5c->func_00194F60(side);
    f34->f5c->func_00194E60(p);
    func_00157A00(dt);
}

void C_00035300::func_00035300(char *name, int n)
{
    char buf[0x34];

    func_001ADCC0(buf, 0x32, &D_00276D5C, name, n);
    f494 = 0;
    f560->func_0008B6F0();
    f560->func_0008B680(buf);
    f560->v6();
}

void C_00035360::func_00035360(void)
{
    int i;

    v40();
    f64->f4e0->objs[0]->func_0010C090(f294, f2a4, f2b4, 1);
    func_00032220();
    for (i = 0; i < f64->f4e0->count; i++) {
        f64->f4e0->objs[i]->f67c = 0;
    }
}

void C_000353F0::func_000353F0(void)
{
    if (!(D_002B8F24 & 1)) {
        D_002B8F24 |= 1;
        D_002B8F20 = D_002EFDB8->f2c;
    }
    if (f284 == 0 && D_002A8490->f10 != 0) {
        if (f2c8 == 0) {
            f540->v6();
            f64->v4();
            D_002EFDB8->f2c = 0xffc8c8c8;
            func_001578D0();
            return;
        }
    } else {
        f540->v4();
        f64->v6();
        D_002EFDB8->f2c = D_002B8F20;
        D_002EFDB8->f30 = 1;
    }
    func_001578D0();
}

void C_00035360::func_00035560(void)
{
    f44->func_0002EF70((int)f64->f4e0->objs[0],0);
    f44->func_00030240(f64->f3e4,6,&f24->f170,&f24->f180,0);
    f24->func_0012A770(*f64->f4a8,2);
    f48->func_0002EF70(0,0);
    f28->f170 = D_002A1514;
    f28->f180 = D_002A1524;
    f48->func_00030240(f64->f3e4,5,&f28->f170,&f28->f180,0);
    f28->func_0012A770(f54c,2);
    f540->init(f48,f28,f54c);
}

void C_00035680::func_00035680(void)
{
    D_002A8490->slot_3c(f24, f28, 0, 0);
    f24->func_0012B190(0, 0, f24->f204, f24->f208);
    memcpy(f1dc, &f24->f1e0, 0x18);
    f1e0 = (int)((float)f1e0 - D_00276CA0);
    if (f28 != 0) {
        f28->func_0012B190(0x1c3, 0x14, 0xa0, 0x59);
    }
}

void C_00035720::func_00035720(void)
{
    f2c8 = 0;
    if (f284 != 0) {
        f24->func_0012B190(f1dc, f1e0, f1e4, f1e8);
    } else {
        f24->func_0012B190(0, 0, f24->f204, f24->f208);
    }
}

int C_00035720::func_00035780()
{
    if (f540) {
        func_001577A0(f540, -1);
        ((C_00035720 *)f540)->func_001577A0(f28, -1);
    }
    void *p = *(void **)((char *)this + 0x48);
    if (p) func_001577A0(p, -1);
    func_00031E80();
    p = *(void **)((char *)this + 0x2c4);
    if (p) func_001577A0(p, -1);
    p = *(void **)((char *)this + 0x588);
    if (p) func_001577A0(p, -1);
    if (f550) func_001577A0(f550, -1);
    if (f554) func_001577A0(f554, -1);
    if (f558) func_001577A0(f558, -1);
    p = *(void **)((char *)this + 0x55c);
    if (p) func_001577A0(p, -1);
    if (f560) func_001577A0(f560, -1);
    return 1;
}

void C_00035720::func_00035860(void)
{
    if (f284 == 0) {
        f540->v6();
        D_002A8490->slot_3c(f24, f28, 0, 0);
    } else {
        D_002A8490->slot_3c(f24, 0, 0, 0);
    }
    if (f550 != 0) {
        f550->v6();
    }
    if (f554 != 0) {
        f554->v6();
    }
    f554->func_0008A910();
    f474 = 2;
    f550->func_0008A080();
}

void C_00035720::func_000358E0(void)
{
    D_002A8490->slot_3c(f24, 0, 0, 0);
    if (f550 != 0) {
        f550->v4();
    }
    if (f558 != 0) {
        f558->v4();
    }
    if (f554 != 0) {
        f554->v4();
    }
    if (f560 != 0) {
        f560->v4();
    }
}

void C_00035720::func_00035940(void)
{
    f540->v6();
    D_002A8490->slot_3c(f24, f28, 0, 0);
    if (f550 != 0) {
        f550->v6();
    }
}

void C_00035980::func_00035980(int enable)
{
    if (enable != 0) {
        f588->func_0006BB90();
        f2c4->func_00069BB0();
    } else {
        f2c4->func_00069BA0();
        f588->func_0006BBF0();
    }
}

void C_000359C0::func_000359C0(void)
{
    void *p;

    func_00031630();
    p = func_001E8A44(0x358);
    f1d0 = p ? ((S_359C0_1D0 *)p)->func_00092890(1) : 0;
    f1d0->v10();
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    p = func_001E8A44(0x180);
    f2c4 = p ? ((S_359C0_2C4 *)p)->func_000687B0(1) : 0;
    f2c4->func_0007CA00(this);
    f2c4->v4();
    p = func_001E8A44(0x200);
    f588 = p ? ((S_359C0_588 *)p)->func_00069FF0(1) : 0;
    f588->func_0007D6F0(this);
    f588->v4();
    p = func_001E8A44(0x140);
    f1a0 = p ? ((S_359C0_1A0 *)p)->func_000715B0(1) : 0;
    f1a0->func_00071880(this);
    f1a0->v4();
    p = func_001E8A44(0x130);
    f550 = p ? ((S_359C0_550 *)p)->func_000891A0(1) : 0;
    if (f550->v10() != 0) {
        f550->func_0008A000(this);
    }
    p = func_001E8A44(0x4e0);
    f554 = p ? ((S_359C0_554 *)p)->func_0008A2E0(1) : 0;
    if (f554->v10() != 0) {
        f554->func_0008A8F0(this);
    }
    p = func_001E8A44(0x2c);
    f558 = p ? ((S_359C0_558 *)p)->func_0008AAB0(1) : 0;
    if (f558->v10() != 0) {
        f558->func_0008AB90(this);
    }
    p = func_001E8A44(0x2c);
    f55c = p ? ((S_359C0_55C *)p)->func_0008ABF0(1) : 0;
    if (f55c->v10() != 0) {
        f55c->func_0008AB90(this);
    }
    p = func_001E8A44(0x58);
    f560 = p ? ((S_359C0_560 *)p)->func_0008ADB0(1) : 0;
    if (f560->v10() != 0) {
        f560->v4();
    }
}

void C_00035BE0::func_00035BE0(void)
{
    if (f1d0 != 0) {
        func_001577A0(f1d0, -1);
    }
    if (f1a0 != 0) {
        func_001577A0(f1a0, -1);
    }
}

int C_00035C10::func_00035C10(void *a1, char a2, char * volatile name, void *a4, void *a5, void *a6, int a7, int volatile a8)
{
    char buf[0x34];
    S_35C10_Mat mat;
    struct { C_00035C10 * volatile self; volatile int limit; volatile int cnt; volatile int len; } t;
    char *p;
    S_35C10_Obj *o;
    void *mem;
    int mode;

    t.self = this;
    t.len = strlen(name);
    t.limit = 0x31;
    int a = t.limit, b = t.len;
    t.cnt = a > b ? b : a;
    int cnt = t.cnt;
    func_001E8920(buf, name, cnt);
    buf[cnt] = 0;
    for (p = buf; *p != 0; p++) {
        *p = (char)func_001E8D25(*p);
    }
    mem = func_001E8A44(0x1e0);
    o = mem ? ((S_35C10_Obj *)mem)->func_0019B700(1) : 0;
    if (o->func_00129920(5) != 0) {
        if (func_001E8AF0(buf, D_00276D84) != 0) {
            o->f68 = D_002B9118;
        } else if (func_001E8AF0(buf, D_00276D7C) != 0) {
            o->f68 = D_002B9108;
        } else if (func_001E8AF0(buf, D_00276D74) != 0) {
            o->f68 = D_002B910C;
        } else if (func_001E8AF0(buf, D_00276D6C) != 0) {
            o->f68 = D_002B911C;
        } else if (func_001E8AF0(buf, D_00276D64) != 0) {
            o->f68 = D_002B9114;
        } else {
            o->f68 = D_002BA160;
        }
        if (a8 == 0) {
            if (o->func_0019D7B0(a1, name) == 0) {
                o->v2();
                return 1;
            }
        } else {
            if (o->func_0019D7B0(0, name) == 0) {
                o->v2();
                return 1;
            }
        }
    }
    if (o != 0) {
        o->f6d = a2;
        if (a8) (*t.self->f64->f3a8)->func_001577A0(o, 2);
        else (*t.self->f64->f3a8)->func_001577A0(o, 0);
        func_000265C0(&mat, a4, a5, a6, 0, 1);
        o->func_00133EF0(&mat);
        o->func_00133140(*t.self->f64->f4ac, 2);
        o->func_00133210();
        if (a7 == 0) {
            if (a8 == 0) {
                t.self->f568 = o;
                return 1;
            }
        } else if (a8 == 0) {
            t.self->f56c = o;
            return 1;
        }
        t.self->f570 = o;
    }
    return 1;
}

