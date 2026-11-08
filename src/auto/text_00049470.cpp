/* 10 functions from 0x00049470 to 0x0004A360, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern int D_0027718C;
extern char D_00277160[], D_00277150[], D_00277140[];
struct S_00049470_This {
    void *vtbl;
    char pad4[0x60];
    void *f64;
    char pad68[0x3d8];
    int f440;
    char pad444[0x30];
    int f474, f478, f47c, f480;
    char pad484[0xb8];
    int f53c, f540;
    char pad544[0xc];
    int f550, f554;
    char pad558[0xc];
    int f564;
    char pad568[0x60];
    int f5c8, f5cc;
    void func_0003AD50();
    int func_00042840();
    void func_00049470();
};

struct V4_49470 { float x, y, z, w; };
struct C_00198390;

struct S_49470_Table {
    char pad0[0x38];
    int f38;
    int f3c;
    int f40;
    int f44;
};

struct S_49470_Elem {
    char pad0[0x358];
    int f358;
    int f35c;
    int f360;
};

struct S_49470_F64 {
    char pad0[0x5a4];
    S_49470_Table *f5a4;
    int f5a8;
    S_49470_Elem **f5ac;
};

struct S_49470_F5C {
    char pad0[4];
    int f4;
    void func_00194E60(V4_49470 v);
    void func_00194EB0(V4_49470 v);
    void func_00194F60(V4_49470 v);
    void func_00194F90(float f);
};

struct S_49470_F34 { char pad0[0x5c]; S_49470_F5C *f5c; };
struct S_49470_F1A4 { char pad0[4]; C_00198390 *f4; };
struct S_49470_F28 { char pad0[0x1a4]; S_49470_F1A4 *f1a4; };

struct S_49470_F540 {
    char pad0[0x24];
    C_00198390 *f24;
    S_49470_F28 *f28;
    C_00198390 *f2c;
    char pad30[4];
    S_49470_F34 *f34;
    int f38;
};

struct S_49470_F564 { int f0; };
struct S_49470_Obj { void func_0008A920(); void func_0008A0A0(); void func_001A4100(int a, int b, int c); };

struct S_49470_Dev {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(int a);
    virtual void v8();
};
extern S_49470_Dev *D_002EFDB8;
extern char D_00276D54[];
extern float D_00275AEC, D_0027653C, D_00276220, D_00276D50;
extern double D_002766C8;
extern V4_49470 D_002A14E4;
int func_001E8AF0(void *a, char *b);
void func_00034820(V4_49470 *a, V4_49470 *b);
void __stdcall func_000361F0(int a);
static __forceinline S_49470_Elem *get49470(S_49470_Elem **arr, int count, int i)
{
    if (count > 0 && arr != 0 && i < count)
        return arr[i];
    return 0;
}
struct C_00162B20 { int func_00162B20(const char *, int); };
extern C_00162B20 *D_002EF7D0;
struct S_00049A50_Global {
 void **vtbl;
 char pad4[0x4a4];
 int *f4A8;
};
extern S_00049A50_Global *D_002B9120;

struct C_00198390 {
    char pad0[0x28];
    void func_00198390(void);
    void func_001983A0(void);
    void func_00198E60(void);
    void func_0019ABA0(int, int);
    void func_0019A8C0(V4_49470 *a, V4_49470 *b);
};

struct S_00049A20_Inner {
    int unk0;
    C_00198390 *f4;
    void func_00164820(int);
};

struct S_00049A20_Holder {
    S_00049A20_Inner *f0;
};

struct S_00049A20_Arg {
    char pad0[0x2e4];
    S_00049A20_Holder *f2E4;
    S_00049A20_Holder *f2E8;
};

struct C_00030F90 {
    void func_00030F90(int param_1);
};

struct C_00049C00 {
    void *vtbl;
    char pad4[0x2c4];
    u32 f2C8;
    u32 f2CC;
    u32 f2D0;
    u32 f2D4;
    u32 f2D8;
    u32 f2DC;
    u32 f2E0;
    u32 f2E4;
    u32 f2E8;
    C_00049C00 *func_00049C00(int param_1);
};

struct BmxEventFPS : C_00049C00 {
 void func_00049F30();
 void func_00032A60();
};

struct C_00049C60_Obj1C0 {
    void func_00099D40(int a);
};

struct C_00049C60 {
    char pad0[0x1C0];
    C_00049C60_Obj1C0 *f1C0;   /* 0x1C0 */
    char pad1C4[0x48];         /* 0x1C4 */
    int f20C;                  /* 0x20C */
    C_00049C60 *func_00049C60(void);
    void func_000342C0(void);
};

struct S_4A1A0_Mgr { int f0; int pad4; void *f8; };
struct S_4A1A0_Global {
    char pad0[0x124];
    int f124;
    char pad128[0x2e0 - 0x128];
    S_4A1A0_Mgr *f2e0;
};
extern S_4A1A0_Global *D_002A8490;

struct E49Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10();
    E49Obj *func_00092890(int);
    E49Obj *func_00088530(int);
    E49Obj *func_00088570(void *);
    E49Obj *func_0005ECA0(int);
    void func_0005EDC0(void *);
    E49Obj *func_00075B20(int);
    void func_00075F30(void *);
    E49Obj *func_00073AE0(int);
    void func_00073EF0(void *);
    E49Obj *func_000715B0(int);
    void func_00071880(void *);
    E49Obj *func_000777A0(int);
    void func_000779C0(void *);
    E49Obj *func_0008BB80(int);
    void func_00092810(void *, int, void *, void *);
    E49Obj *func_000888D0(int);
    void func_00088950(void *, int);
};
struct E49Glob { char pad0[0x4e4]; void *f4E4[1]; char pad4e8[0x40]; void *f528; };
struct E49Fps {
    char pad0[0xe4];
    E49Obj *fE4;
    char padE8[0x74];
    E49Obj *f15C;
    char pad160[8];
    E49Obj *f168;
    char pad16c[0x34];
    E49Obj *f1A0;
    char pad1a4[4];
    E49Obj *f1A8;
    E49Obj *f1AC;
    char pad1b0[0x20];
    E49Obj *f1D0;
    char pad1d4[0xb0];
    E49Obj *f284[1];
    char pad288[0x1c];
    E49Obj *f2A4[1];
    void func_00031630();
    void func_00049C90();
};
void *func_001E8A44(unsigned int);

struct S_4A1A0_V5C0 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5(int a);
};
struct S_4A1A0_Rider {
    char pad0[0x578];
    int f578;
    char pad57c[0x5c0 - 0x57c];
    S_4A1A0_V5C0 *f5c0;
    char pad5c4[0x6d0 - 0x5c4];
    int f6d0, f6d4, f6d8;
    void func_00150F80(void);
};
struct S_4A1A0_Bike {
    char pad0[0x770];
    int f770, f774, f778;
    void func_00018EB0(void);
};
struct S_4A1A0_Obj488 { void func_0016F7B0(void); };
struct S_4A1A0_PartBase {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
};
struct S_4A1A0_Part : virtual S_4A1A0_PartBase {
    C_00198390 *f4;
};
struct S_4A1A0_Obj4 { char pad0[0x1a4]; S_4A1A0_Part *f1a4; };
struct S_4A1A0_Item {
    char pad0[4];
    S_4A1A0_Obj4 *f4;
    char pad8[0x80 - 8];
    S_4A1A0_PartBase *f80;
    int f84;
};
struct S_4A1A0_List {
    char pad0[0x488];
    S_4A1A0_Obj488 *f488;
    char pad48c[0x4e4 - 0x48c];
    S_4A1A0_Rider *f4e4[16];
    S_4A1A0_Item **f524;
    S_4A1A0_Bike *f528;
    char pad52c[0x560 - 0x52c];
    int f560;
};
struct C_0004A1A0 {
    char pad0[0x64];
    S_4A1A0_List *f64;
    char pad68[0x1c0 - 0x68];
    C_00049C60_Obj1C0 *f1C0;
    char pad1c4[0x2c4 - 0x1c4];
    int f2C4;
    char pad2c8[0x2e0 - 0x2c8];
    int f2E0;
    int func_0004A1A0(void);
};

struct C_00049BD0 {
    int unk0;
    int unk4;
    char pad8[0x78];
    int unk80;
    int unk84;
    int unk88;
    int unk8C;
    C_00049BD0* func_00049BD0(void);
};


extern "C" float sqrtf(float);
void S_00049470_This::func_00049470()
{
    S_49470_F64 *f;
    S_49470_F540 *sub;
    S_49470_Table *tab;
    S_49470_Elem *a, *b, *c, *d;
    int idx, i;

    this->f47c = 15;
    this->f480 = 0;
    this->f478 = 3;
    this->f474 = 3;
    this->func_0003AD50();

    f = (S_49470_F64 *)this->f64;
    i = this->f47c;
    tab = &f->f5a4[i];
    idx = tab->f44 + this->f480;
    a = get49470(f->f5ac, f->f5a8, idx);
    b = get49470(f->f5ac, f->f5a8, idx);
    c = get49470(f->f5ac, f->f5a8, idx);
    d = get49470((S_49470_Elem **)this->f5cc, this->f5c8, idx);

    if (d != 0) {
        V4_49470 v30 = {0,0,0,1}, v40 = {0,0,0,1}, v60 = {0,0,0,1}, v70 = {0,0,0,1}, v80 = {0,0,0,1};
        V4_49470 v50;
        int m, n;
        float t, len, fy;

        sub = (S_49470_F540 *)this->f540;
        fy = *(float *)&this->f440;
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();

        if (sub->f24 != 0) {
            sub->f24->func_00198390();
            if (sub->f2c != 0)
                sub->f2c->func_00198390();
            sub->f24 = 0;
        } else if (sub->f28 != 0) {
            sub->f28->f1a4->f4->func_00198390();
            sub->f28 = 0;
        }
        sub->f24 = (C_00198390 *)d;
        sub->f24->func_001983A0();
        sub->f24->func_0019A8C0(&v40, &v80);

        if (func_001E8AF0(&sub->f24[1], D_00276D54))
            v40.z -= D_00275AEC;
        sub->f2c = 0;

        if (c->f360 <= b->f358) {
            if (b->f358 > a->f35c) m = b->f358;
            else if (a->f35c > c->f360) m = a->f35c;
            else m = c->f360;
        } else {
            m = a->f35c;
        }
        if (tab->f3c <= tab->f40) {
            if (tab->f40 <= tab->f38) n = tab->f38;
            else n = (m > tab->f40) ? m : tab->f40;
        } else {
            if (tab->f3c <= tab->f38) n = tab->f38;
            else n = (m > tab->f3c) ? m : tab->f3c;
        }
        t = (float)n * D_0027653C;
        v50.x = 0.0f;
        v40.w = fy;
        v60.x = v40.x;
        v60.w = 1.0f;
        v60.y = D_00276220 * (t * (float)D_002766C8) + fy;
        v60.z = v40.z - t * D_00276D50;
        v30.x = v50.x;
        v30.w = v60.w;
        v30.y = fy - v60.y;
        v30.z = v40.z - v60.z;
        t = v30.z * v30.z + v30.y * v30.y + v50.x * v50.x;
        len = AsmSqrtF(t);
        *(float *)&sub->f38 = len;
        func_00034820(&v30, &v30);
        AsmVec3Cross(&v70.x, &v30.x, &D_002A14E4.x);

        sub->f34->f5c->func_00194E60(v60);
        sub->f34->f5c->f4 = 0;
        sub->f34->f5c->func_00194F90(60.0f);
        sub->f34->f5c->func_00194EB0(v40);
        sub->f34->f5c->func_00194F60(v70);

        if (!this->func_00042840()) {
            func_000361F0(1);
            return;
        }
    }
    if (this->f564 != 0 && ((S_49470_F564 *)this->f564)->f0 != 0) {
        if (((S_49470_F564 *)this->f564)->f0 >= 3)
            ((S_49470_Obj *)this->f554)->func_0008A920();
        ((S_49470_Obj *)this->f550)->func_0008A0A0();
    }
    ((S_49470_Obj *)this->f53c)->func_001A4100(2, 1, 0);
}

void func_000499B0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void func_00049A20(S_00049A20_Arg *arg) {
    arg->f2E4->f0->f4->func_00198390();
    arg->f2E8->f0->f4->func_00198390();
}

void func_00049A50(S_00049A20_Arg *arg, int index) {
 int func_001ADCC0(char *, int, const char *, ...);
 char name[32];
 S_00049A20_Inner *a=arg->f2E4->f0;
 S_00049A20_Inner *b=arg->f2E8->f0;
 ++index;
 func_001ADCC0(name,32,D_00277160,index);
 a->f4->func_001983A0();
 a->func_00164820(D_002EF7D0->func_00162B20(name,1));
 a->f4->func_00198E60();
 a->f4->func_0019ABA0(*D_002B9120->f4A8,2);
 func_001ADCC0(name,32,D_00277150,index);
 b->f4->func_001983A0();
 b->func_00164820(D_002EF7D0->func_00162B20(name,1));
 b->f4->func_00198E60();
 b->f4->func_0019ABA0(*D_002B9120->f4A8,2);
 if (index==2) {
 typedef C_00198390 *(S_00049A50_Global::*Lookup)(const char *);
 C_00198390 *p=(D_002B9120->**(Lookup *)&D_002B9120->vtbl[0x180/4])(D_00277140);
 if (p) p->func_00198390();
 }
}

C_00049BD0* C_00049BD0::func_00049BD0(void) {
    extern int D_00277184;
    unk0 = (int)&D_00277184;
    unk4 = 0;
    unk80 = 0;
    unk84 = 0;
    unk88 = 0;
    unk8C = 0;
    return this;
}

C_00049C00 *C_00049C00::func_00049C00(int param_1) {
    ((C_00030F90 *)this)->func_00030F90(param_1);
    f2CC = 0;
    f2D0 = 0;
    f2D4 = 0;
    f2D8 = 0;
    f2DC = 0;
    f2E4 = 0;
    f2E8 = 0;
    f2C8 = 0;
    vtbl = &D_0027718C;
    f2E0 = 1;
    return this;
}

C_00049C60 *C_00049C60::func_00049C60(void)
{
    f20C = 1;
    func_000342C0();
    if (f1C0 != 0)
        f1C0->func_00099D40(-1);
    return this;
}

void E49Fps::func_00049C90() {
    E49Obj *p;
    int i;
    func_00031630();
    p = (E49Obj *)func_001E8A44(0x358);
    f1D0 = p ? p->func_00092890(1) : 0;
    f1D0->v10();
    p = (E49Obj *)func_001E8A44(0xf4);
    fE4 = p ? p->func_00088530(1) : 0;
    fE4 = fE4->func_00088570(D_002A8490->f2e0->f8);
    p = (E49Obj *)func_001E8A44(0x134);
    f15C = p ? p->func_0005ECA0(1) : 0;
    f15C->func_0005EDC0(this);
    f15C->v4();
    if (D_002A8490->f2e0->f0 > 1) {
        p = (E49Obj *)func_001E8A44(0x1c4);
        f1A8 = p ? p->func_00075B20(1) : 0;
        f1A8->func_00075F30(this);
        f1A8->v4();
    } else {
        p = (E49Obj *)func_001E8A44(0x1c4);
        f1AC = p ? p->func_00073AE0(1) : 0;
        f1AC->func_00073EF0(this);
        f1AC->v4();
    }
    p = (E49Obj *)func_001E8A44(0x140);
    f1A0 = p ? p->func_000715B0(1) : 0;
    f1A0->func_00071880(this);
    f1A0->v4();
    p = (E49Obj *)func_001E8A44(0xf8);
    f168 = p ? p->func_000777A0(1) : 0;
    f168->func_000779C0(this);
    f168->v4();
    for (i = 0; i < D_002A8490->f2e0->f0; i++) {
        p = (E49Obj *)func_001E8A44(0x80);
        f284[i] = p ? p->func_0008BB80(1) : 0;
        f284[i]->func_00092810(((E49Glob *)D_002B9120)->f4E4[i], i, ((E49Glob *)D_002B9120)->f528, D_002A8490->f2e0->f8);
        f284[i]->v6();
    }
    if (D_002A8490->f2e0->f0 > 1) {
        for (i = 0; i < D_002A8490->f2e0->f0; i++) {
            p = (E49Obj *)func_001E8A44(0x54);
            f2A4[i] = p ? p->func_000888D0(1) : 0;
            f2A4[i]->func_00088950(D_002A8490->f2e0->f8, i);
            *(float *)((char *)f2A4[i] + 0x4c) = 50.0f;
        }
    }
}

void BmxEventFPS::func_00049F30()
{
 bool active = f2D4 != 0;
 if(!active) { active = f2D8 != 0; }
 if(!active) func_00032A60();
}

int C_0004A1A0::func_0004A1A0(void)
{
    int i;
    S_4A1A0_List *g;

    f2C4 = 0;
    D_002A8490->f124 = 0;
    f2E0 = 1;
    f64->f4e4[0]->f5c0->dummy5(0);
    for (i = 0; i < D_002A8490->f2e0->f0; i++) {
        f64->f4e4[i]->func_00150F80();
        f64->f4e4[i]->f6d4 = 0;
        f64->f4e4[i]->f6d0 = 0;
        f64->f4e4[i]->f6d8 = 0;
        if (D_002A8490->f2e0->f0 == 1)
            f64->f4e4[i]->f578 = 0;
    }
    if (((S_4A1A0_List *)D_002B9120)->f528 != 0) {
        ((S_4A1A0_List *)D_002B9120)->f528->func_00018EB0();
        f64->f528->f774 = 0;
        f64->f528->f770 = 0;
        f64->f528->f778 = 0;
    }
    if (((S_4A1A0_List *)D_002B9120)->f488 != 0)
        ((S_4A1A0_List *)D_002B9120)->f488->func_0016F7B0();
    for (i = 0; i < ((S_4A1A0_List *)D_002B9120)->f560; i++) {
        ((S_4A1A0_List *)D_002B9120)->f524[i]->f84 = 0;
        ((S_4A1A0_List *)D_002B9120)->f524[i]->f80->dummy6();
        ((S_4A1A0_List *)D_002B9120)->f524[i]->f4->f1a4->dummy6();
        ((S_4A1A0_List *)D_002B9120)->f524[i]->f4->f1a4->f4->func_001983A0();
    }
    if (f1C0 != 0)
        f1C0->func_00099D40(-1);
    return 1;
}

