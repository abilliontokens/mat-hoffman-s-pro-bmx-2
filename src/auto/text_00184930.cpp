/* 15 functions from 0x00184930 to 0x001858A0, found by Ghidra. */
#include "common.h"

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
extern "C" int strcmp(const char *a, const char *b);
void *func_001E8A44(int size);
extern char D_002895F4[];
extern char D_002895EC[];

struct S_00184BB0_Elem {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(void *scene);
    int f4;
};

struct S_00184BB0_List {
    char pad0[0x24];
    int f24;
    S_00184BB0_Elem **f28;
};

struct S_00184C00_Obj {
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
    virtual void v28(void *scene);
    virtual void v29(void *scene);
};

struct S_00184C00_Mgr {
    S_00184C00_Mgr *func_0001B380(int a);
    void func_0001B3B0(S_00184C00_Obj *o);
};

/* element of the list at BasicScene+0x3b0, notified through vtable slot 28 */
struct S_00184CC0_Item {
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
    virtual void v28(void *scene);
    char pad4[0x20];
    int f24;
};

struct S_00184D10_Info {
    int f0;
    int f4;
    char **f8;
    int fc;
    char name[0x31c - 0x10];
    char f31c[0x104];
    char pad420[0x538 - 0x420];
    unsigned int f538;
    unsigned int f53c;
    unsigned int f540;
    unsigned int f544;
    char pad548[4];
    unsigned int f54c;
    unsigned int f550;
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_00030F30(char *s, void *p);
extern char D_00275678[];
extern char D_00289580[];

struct C_0013B210 {
    int func_0013B1A0(char *name);
};

extern C_0013B210 *D_002BEAAC;

struct C_001B1130 {
    C_001B1130 *func_001B1130(int a);
    C_001B1130 *func_001B1190(char *a, int b, int c, int d, int e, int f, int g);
};

struct S_00184EF0_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    virtual void v30(void *holder, char *name, void *mgr, void *d, int a1, int a0);
    S_00184EF0_Obj *func_001DA0E0(void);
};

struct S_00184EF0_Holder {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(char *name, void *mgr, int a1, int n, float f0, float f1, int z);
    void func_001C9920(S_00184EF0_Obj *o);
    S_00184EF0_Holder *func_001D8B40(int a);
};

/* the scene's own vtable, slot 65 */
struct S_00184DD0_Vt {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65();
};

/* 0x2208-byte renderer object created by the scene's loader */
struct C_0014E3E0 {
    C_0014E3E0 *func_0014E3E0(int a);
    int func_0014ECD0(void *a, void *b, int c, int d, int e, unsigned int f, unsigned int g, int h);
};

/* 0x8b8-byte global singleton */
struct C_001C4F40 {
    C_001C4F40 *func_001C4F40(void);
    void func_001C4F70(unsigned int a, unsigned int b, unsigned int c, unsigned int d,
                       unsigned int e, unsigned int f, unsigned int g);
    void func_001C4FA0(int a);
};

extern C_001C4F40 *D_002F07E8;
extern char D_002895A0[];

extern char D_002764F0[];
extern char D_002A5A80[];
extern char D_00289588[];
extern char D_002A5870[];
extern void *D_002E2930;

struct S_00185110_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    S_00185110_Obj *func_00197680(int a);
    int func_001976A0(char *name, float f);
};

struct S_00184930_Col { void *vtbl; float f4; float f8; float fC; float f10; int f14; int f18; };
struct S_00184930_Fx { virtual void v0(); virtual void v1(); virtual void v2(); S_00184930_Fx *func_00150360(int a); };
extern float D_00275F58, D_0028937C, D_00289380;
int func_001E8858(float f);
void func_001E891B(void *p);
int __stdcall func_00150810(int a, int b, int c, float d, float e, float f);

/* BasicScene */
struct C_00184930 {
    void *vtbl;
    char pad4[0x2c];
    char f30[0x104];
    char f134[0x104];
    char pad238[0x340 - 0x238];
    int f340;
    char pad344[4];
    int f348;
    char pad34c[0x350 - 0x34c];
    int f350;
    char pad354[0x388 - 0x354];
    S_00184D10_Info *f388;
    char pad38c[4];
    S_00184930_Col *f390;
    char pad394[0x3a8 - 0x394];
    S_00184BB0_List **f3a8;
    S_00184C00_Obj *f3ac;
    S_00184CC0_Item **f3b0;
    S_00184C00_Obj *f3b4;
    char pad3b8[0x3c0 - 0x3b8];
    S_00184C00_Obj *f3c0;
    char pad3c4[0x3dc - 0x3c4];
    S_00184930_Fx *f3dc;
    S_00185110_Obj **f3e0;
    C_001B1130 *f3e4;
    S_00184EF0_Holder *f3e8;
    S_00184EF0_Obj *f3ec;
    C_0014E3E0 *f3f0;
    char pad3f4[0x484 - 0x3f4];
    S_00184C00_Mgr *f484;
    int func_00184EF0(int a0, int a1);
    void func_00184BB0(void);
    int func_00184C00(void);
    int func_00184C60(void);
    int func_00185200(void);
    int func_00184CC0(void);
    int func_00184D10(void);
    int func_00185110(int a);
    int func_00184DD0(int a0, int a1, int a2);
    int func_00184FC0(void);
    int func_00184930(float a, float b);
};

struct S_00185610_Vec4 {
    float x, y, z, w;
};

struct S_00185610_Elem {
    char pad0[0x134];
    S_00185610_Vec4 f134;
    float f144;
    float f148;
    char pad14c[0x160 - 0x14c];
};

struct S_00185610_Link;

struct S_00185610_Node {
    char pad0[0x24];
    S_00185610_Link *f24;
    char pad28[0x3c - 0x28];
    int f3c;
};

struct S_00185610_Test {
    int func_0017A1D0(void *pos, float range, float *dist);
};

struct S_00185610_Link {
    S_00185610_Link *next;
    S_00185610_Node *node;
    S_00185610_Test *test;
};

struct S_00185610_Cam {
    char pad0[0x28];
    struct { char pad0[4]; S_00185610_Node *node; } *f28;
    char pad2c[0x170 - 0x2c];
    char f170[1];
};

struct S_00185610_Global {
    char pad0[4];
    S_00185610_Cam *f4;
};

struct S_00185610_Out {
    char pad0[4];
    float f4, f8, fC;
    char pad10[4];
    float f14, f18;
};

extern S_00185610_Global *D_002EFDB8;
extern float D_002A9118;
extern float D_00275460;

struct S_00185610_Scene {
    char pad0[0x344];
    S_00185610_Elem *f344;
    void func_00185610(S_00185610_Out *out);
};

/* PlayerStart */
struct S_Stream {
    int func_00169710(char *name);
    void func_00168CB0(void *key, void *def, void *dst);
};

extern char D_0027B1FC[];
extern char D_002895CC[];
extern char D_002895B4[];
extern float D_002A90B4;
extern float D_002A90B8;
extern float D_002A90BC;
extern float D_002A90C0;
extern float D_002A90E4;
extern float D_002A90E8;
extern float D_002A90EC;
extern float D_002A90F0;
extern char D_002895B0;

struct C_00185790 {
    void *vtbl;
    float f4;
    float f8;
    float fC;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    C_00185790 *func_00185790(void);
    int func_00185800(S_Stream *stream);
};

int C_00184930::func_00184930(float a, float b)
{
    S_00184930_Col *p = f390;
    if (p) {
        int c = (int)p->f4 & 0xff;
        c = (c | ((int)p->f10 << 8)) << 8;
        c = (c | ((int)p->f8 & 0xff)) << 8;
        c |= (int)p->fC & 0xff;
        S_00184930_Fx *o = (S_00184930_Fx *)func_001E8A44(0x54);
        S_00184930_Fx *r;
        if (o)
            r = o->func_00150360(1);
        else
            r = 0;
        f3dc = r;
        float x = a, y = b;
        if (a == D_00275F58) x = D_0028937C;
        if (b == D_00275F58) y = D_00289380;
        if (!func_00150810(c, f390->f14, f390->f18, x, y, 64.0f)) {
            f3dc->v2();
            f3dc = 0;
            return 0;
        }
        func_001E891B(f390);
        f390 = 0;
    }
    return 1;
}

void C_00184930::func_00184BB0(void)
{
    int i;

    for (i = 0; i < f3a8[f348]->f24; i++) {
        S_00184BB0_Elem *e = f3a8[f348]->f28[i];
        if (e->f4 == 2) {
            e->v3(this);
        }
    }
}

int C_00184930::func_00184C00(void)
{
    if (f3ac != 0) {
        void *mem = func_001E8A44(0x30);
        f484 = mem != 0 ? ((S_00184C00_Mgr *)mem)->func_0001B380(1) : 0;
        f3ac->v29(this);
        f484->func_0001B3B0(f3ac);
    }
    return 1;
}

int C_00184930::func_00184C60(void)
{
    S_00184C00_Obj *p = f3c0;

    if (p != 0) {
        p->v28(this);
    }
    return 1;
}

int C_00184930::func_00184CC0(void)
{
    int i;

    if (f3b0 != 0) {
        for (i = 0; i < f340; i++) {
            f348 = i;
            S_00184CC0_Item *item = f3b0[i];
            if (item->f24 > 0) {
                item->v28(this);
            }
        }
        return 1;
    }
    return 1;
}

int C_00184930::func_00184D10(void)
{
    char buf[0x104];

    if (f388 != 0) {
        func_001ADCC0(buf, 0x104, D_00275678, f30, f388->name);
        func_00030F30(buf, D_00289580);
        if (D_002BEAAC->func_0013B1A0(buf) != 0) {
            void *mem = func_001E8A44(0xe00);
            C_001B1130 *obj = mem != 0 ? ((C_001B1130 *)mem)->func_001B1130(1) : 0;
            f3e4 = obj;
            f3e4 = obj->func_001B1190(buf, 1, 8, 0, 0, 0, 0);
            return 1;
        }
        return 0;
    }
    return 1;
}

int C_00184930::func_00184DD0(int a0, int a1, int a2)
{
 char buf[0x104]; char *name; int n;
 if (!f388) return 1;
 name=(char*)f388+0x114;
 if (strcmp(name,"none")==0) return 1;
 n=0x5a; switch((unsigned)a0) { case 0: n=0x78; break; case 1u: n=0x5a; break; }
 func_001ADCC0(buf,0x104,D_00275678,f30,name);
 if(D_002BEAAC->func_0013B1A0(buf)) {
 if(!D_002F07E8) { f350=1; ((S_00184DD0_Vt*)this)->v65(); }
 void *mem=func_001E8A44(0x30c);
 f3e8=mem ? ((S_00184EF0_Holder*)mem)->func_001D8B40(1):0;
 f3e8->v27(buf,D_002E2930,a1,n,2.0f,1.0f,0);
 }
 return f3e8!=0;
}

int C_00184930::func_00184EF0(int a0, int a1)
{
    char buf[0x80];
    S_00184EF0_Obj *obj;
    void *mem;

    if (strcmp((char *)f388 + 0x114, "none") == 0) {
        return 1;
    }
    func_001ADCC0(buf, 0x80, D_00289588, D_002A5A80);
    mem = func_001E8A44(0x4d4);
    obj = mem != 0 ? ((S_00184EF0_Obj *)mem)->func_001DA0E0() : 0;
    obj->v30(f3e8, buf, D_002E2930, D_002A5870, a1, a0);
    f3ec = obj;
    f3e8->func_001C9920(obj);
    return f3ec != 0;
}

#pragma intrinsic(memcmp)
static __forceinline int Cmp5_00185110(const char *a, const char *b)
{
    return memcmp(a, b, 5);
}
static __forceinline int CmpN_00185110(const char *a, const char *b, int n)
{
    return memcmp(a, b, n);
}
extern "C" int strcmp(const char *a, const char *b);
int C_00184930::func_00184FC0(void)
{
    S_00184D10_Info *info = f388;
    void *mem;
    C_0014E3E0 *obj;

    if (info == 0) {
        return 1;
    }
    if (strcmp(info->f31c, "none") == 0) {
        func_001ADCC0(info->f31c, 0x104, D_002895A0, f30, f134);
    }
    mem = func_001E8A44(0x2208);
    if (mem != 0) {
        obj = ((C_0014E3E0 *)mem)->func_0014E3E0(1);
    } else {
        obj = 0;
    }
    f3f0 = obj;
    if (D_002F07E8 == 0) {
        if (f340 == 1) {
            mem = func_001E8A44(0x8b8);
            if (mem != 0) {
                D_002F07E8 = ((C_001C4F40 *)mem)->func_001C4F40();
            } else {
                D_002F07E8 = 0;
            }
            info = f388;
            D_002F07E8->func_001C4F70(info->f538, 0xff7fffff, info->f540, info->f53c,
                                      0x7f7fffff, info->f544, 0x42c00000);
            D_002F07E8->func_001C4FA0(5000);
        } else {
            f350 = 1;
            ((S_00184DD0_Vt *)this)->v65();
        }
    }
    info = f388;
    if (f3f0->func_0014ECD0(f3e4, info->f31c, 0x115c, 1, 9, info->f54c, info->f550, 0) == 0) {
        f3f0 = 0;
        return 0;
    }
    return 1;
}

int C_00184930::func_00185110(int a)
{
    if (!f388) return 1;
    if (!f388->f4) return 1;
    f3e0 = (S_00185110_Obj **)func_001E8A44(f388->f4 * 4);
    int i = 0;
    while (i < f388->f4) {
        if (strcmp(f388->f8[i], "none") != 0) {
            S_00185110_Obj *p = (S_00185110_Obj *)func_001E8A44(0x7e0);
            f3e0[i] = p ? p->func_00197680(1) : 0;
            if (!f3e0[i]->func_001976A0(f388->f8[i], 1024.0f)) {
                f3e0[i]->v2();
                f3e0[i] = 0;
                return 0;
            }
        }
        ++i;
    }
    return 1;
}

int C_00184930::func_00185200(void)
{
    if (f3b4 != 0) {
        f3b4->v29(this);
    }
    return 1;
}

void S_00185610_Scene::func_00185610(S_00185610_Out *out)
{
    S_00185610_Cam *cam = D_002EFDB8->f4;
    S_00185610_Node *node = cam->f28->node;
    void *pos = cam->f170;
    S_00185610_Elem *e = &f344[node->f3c];
    S_00185610_Vec4 v = e->f134;
    float px = e->f144;
    float py = e->f148;
    float total = 1.0f;
    S_00185610_Link *l = node->f24;
    float dist;
    float inv;

    for (; l != 0; l = l->next) {
        if (l->test->func_0017A1D0(pos, D_002A9118, &dist) != 0) {
            float w = (D_002A9118 - dist) / D_002A9118;
            S_00185610_Elem *o = &f344[l->node->f3c];
            S_00185610_Vec4 q = o->f134;
            total += w;
            v.x += q.x * w;
            v.y += q.y * w;
            v.z += q.z * w;
            px += w * o->f144;
            py += w * o->f148;
        }
    }
    inv = D_00275460 / total;
    out->f4 = v.x * inv;
    out->f8 = v.y * inv;
    out->fC = v.z * inv;
    out->f14 = px * inv;
    out->f18 = py * inv;
}

C_00185790 *C_00185790::func_00185790(void)
{
    u32 *p;

    vtbl = &D_002895B0;
    p = (u32 *)&f4;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f14;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f4 = D_002A90B4;
    f8 = D_002A90B8;
    fC = D_002A90BC;
    f10 = D_002A90C0;
    f14 = D_002A90E4;
    f18 = D_002A90E8;
    f1C = D_002A90EC;
    f20 = D_002A90F0;
    return this;
}

int C_00185790::func_00185800(S_Stream *stream)
{
    if (stream->func_00169710(D_0027B1FC) == 0) {
        return 0;
    }
    stream->func_00168CB0(D_002895CC, &D_002A90B4, &f4);
    stream->func_00168CB0(D_002895B4, &D_002A90E4, &f14);
    return 1;
}

int __stdcall func_00185860(char *name)
{
    if (strcmp(name, "QuadTree") == 0) {
        return 2;
    }
    return strcmp(name, "List") == 0;
}
