/* 35 functions from 0x001B0A20 to 0x001B19C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
struct C_001B1580_24 {
    char pad0[0x4];
    float unk4;                       /* 0x04 */
    float unk8;                       /* 0x08 */
    char padC[0x8];
    u32 unk14;                        /* 0x14 */
    float unk18;                      /* 0x18 */
    char pad1C[0x18];
    float unk34;
    float unk38;
    char pad3C[8];
    int unk44;                        /* 0x44 */
    int unk48;
    short unk4C;
    u8 unk4E;                         /* 0x4E */
    void func_0005E840(const char *s);
    void func_001D6440();
    void func_0005E9A0(int);
    void func_00082400(int);
    void func_0005E960(int, int);
    void func_001D6600();
    char pad4F[0x11];
    C_001B1580_24();
    void func_001D5FA0(int, int, int, const char *);
    void setColour(int x) { if (unk48 != x) { unk4E |= 8; unk48 = (unk48 & 0xFF000000) | (x & 0xFFFFFF); } }
    void setAlpha(short x) { if (unk4C != x) { unk4E |= 8; unk4C = x; unk48 = (unk48 & 0xFFFFFF) | (x << 24); } }
    void set34(float x) { if (x != unk34) { unk34 = x; unk4E |= 6; } }
    void set38(float x) { if (x != unk38) unk38 = x; }
    void set44(int x) { if (unk44 != x) { unk44 = x; unk4E |= 6; } }
};

struct S_001B1810_Out {
    u32 x;
    float y;
    float z;
    float w;
};

struct C_001B1580 {
    char pad0[0x24];
    C_001B1580_24 *unk24;             /* 0x24 */
    int unk28;
    int unk2C;                        /* 0x2C */
    int unk30;                        /* 0x30 */
    int unk34, unk38;
    char pad3C[0x28];
    int unk64;
    int unk68;                        /* 0x68 */
    char pad6C[8];
    int unk74;
    char pad78[8];
    int unk80;
    int unk84, unk88;
    char pad8C[0xC];
    float unk98, unk9C;
    char padA0[8];
    float unkA8, unkAC;
    char padB0[8];
    float unkB8, unkBC;
    int unkC0;                        /* 0xC0 */
    C_001B1580 *func_001B13A0(int a, int b, int c, int len);
    void func_001D3F50();
    C_001B1580 *func_001B1580(int a, int b, const char *s, int c);
    void func_001B15F0();
    int unkC4, unkC8;
    float unkCC, unkD0;
    char padD4[0x90];
    int unk164;
    float unk168, unk16C, unk170;
    int func_001B1640();
    void func_00157960();
    void func_001B17D0(const char *s);
    void func_001B1810(S_001B1810_Out *out);
};

struct C_001B0E40 {
    undefined4 func_001B0E40(byte param_1);
};

struct C_001B1860 {
    char pad0[0x64];
    int f64;
    char pad68[4];
    int f6C;
    int f70;
    int f74;
    float f78;
    int f7C;
    char pad80[8];
    int f88;
    char pad8C[8];
    float f94;
    char pad98[4];
    float f9C;
    char padA0[4];
    float fA4;
    int fA8;
    char padAC[8];
    int fB4;
    char padB8[8];
    int fC0;
    float fC4;
    int fC8;
    float fCC;
    int fD0;
    char padD4[0x94];
    float f168;
    float f16C;
    int f170;
    char pad174[4];
    int f178;
    int f17C;
    int f180;
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_001B13A0_View { void func_0012B210(int *); };
struct C_001B13A0_Manager {
    void func_0018C780(int, int *, int);
    int *func_0018C160(int);
};
struct C_002A8490 { char pad0[0x2EC]; C_001B13A0_Manager *manager; };
extern C_002A8490 *D_002A8490;
extern float D_00277A00, D_002779FC, D_0028C85C, D_0028C858;
extern char D_00275630[];
extern int *D_002EFDB8;
extern char D_0004035C;
void __fastcall func_001FD020(void *, int);
void __stdcall func_001FE490(int);
extern const float D_00275544;
extern const float D_00275F58;

struct C_001B1840 {
    char pad0[0x64];
    int unk64;
    char pad68[0xC];
    int unk74;
    char pad78[0x48];
    int unkC0;
    void func_001B1840(int a0, int a1, int a2);
};

struct C_001B19A0 {
    void func_001B19A0(undefined4 param_1);
};

struct C_001B1980 {
    char pad0[0x64];
    int unk64;
    char pad68[0x10];
    int unk78;
    int unk7C;
    char pad80[0x40];
    int unkC0;
    void func_001B1980(void);
};

struct C_001B10D0 {
    void func_001B10D0(undefined4 param_1, int param_2);
};

struct C_001B10B0 {
    void func_001B10B0(undefined4 param_1, int param_2);
};

struct C_001B17F0 {
    undefined4 func_001B17F0(void);
};

struct C_001B15E0 {
    char pad0[0x9C];
    float unk9C;
    float func_001B15E0(void);
};

struct C_001B0E90 {
    int unk0;
    void func_001B0E90(void);
};

extern int D_0028C5BC;
extern int D_0028C6E8;
extern int D_0028C70C;

void func_001B0F70(void);
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_001B1110 {
    void *func_001B1110(unsigned int flags);
};

struct Obj_001B0FC0 {
    virtual void v0(int a);
    void func_0001E860();
};

struct C_001B0FC0 {
    char pad0[0x4];
    int count;
    char pad8[0x4];
    Obj_001B0FC0 *unkC;
    Obj_001B0FC0 *arr[1];
    void func_001B0FC0(void);
};

struct C_001B1010_Obj {
    char pad0[0x8];
    void *unk8;
    char padC[0x10];
    C_001B1010_Obj *unk1C;
    int unk20;
    C_001B1010_Obj *func_00149280(int a0);
};

struct C_001B1010_Arg {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(void *a);
    char pad4[0x10];
    int unk14;
};

struct C_001B1010 {
    char pad0[0x4];
    int count;
    char pad8[0x8];
    C_001B1010_Obj *arr[1];
    int func_001B1010(C_001B1010_Arg *arg0, int arg1);
};

struct C_001B1130 {
    void *vtbl;
    char pad4[0x20];
    float unk24;
    float unk28;
    float unk2C;
    float unk30;
    float unk34;
    float unk38;
    float unk3C;
    float unk40;
    float unk44;
    float unk48;
    float unk4C;
    float unk50;
    float unk54;
    float unk58;
    float unk5C;
    float unk60;
    float unk64;
    float unk68;
    float unk6C;
    float unk70;
    void *func_001B1130(int a0);
    void func_00157600(int a0);
};

extern int D_0028C7EC;
extern int D_0028F5E8;

struct C_001B12C0 {
    void *vtbl;                  /* 0x00 */
    char pad04[0x20];
    int f24;                     /* 0x24 */
    int f28;                     /* 0x28 */
    char pad2C[0x30];
    int f5C;                     /* 0x5C */
    int f60;
    int f64;
    int f68;
    int f6C;
    int f70;
    int f74;
    float f78;
    int f7C;
    int f80;
    char pad84[8];
    int f8C;
    int f90;
    int f94;
    char pad98[8];
    int fA0;
    int fA4;
    char padA8[8];
    int fB0;
    int fB4;
    float fB8;
    float fBC;
    int fC0;
    float fC4;
    char padC8[0xC];
    int fD4;
    int fD8;
    int fDC;
    int fE0;
    u8 fE4;
    char padE5[0x3F];
    u8 f124;
    char pad125[0x4F];
    int f174;
    int f178;
    int f17C;
    int f180;
    void func_00157600(int a0);
    void *func_001B12C0(int a0);
};

struct C_001D6290 {
    void func_001D6290(int param_1);
};

struct C_001B1800 {
    char pad0[0x24];
    int f24;
    void func_001B1800(int param_1);
};

struct ShaderNode {
    ShaderNode *next;
    int value;
};

struct ShaderNodePool {
    virtual void vv0();
    virtual void vv1();
    virtual void release();
    ShaderNodePool *func_0001E740(int size, int count);
    ShaderNode *func_0001E8A0();
};

struct C_001B0E60 {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    ShaderNode *unk10;
    ShaderNode *unk14;
    int unk18;
    C_001B0E60 *unk1C;
    u32 unk20;
    u32 unk24;
    C_001B0E60(int param_1);
    void func_001B0E60(int param_1);
    void func_001B0EA0(int value, C_001B0E60 **first);
    void *func_001B10F0(int flags);
};

struct SurfaceShaderObj {
    virtual void destroy(int flags);
};

struct SurfaceShaderList {
    void *vtbl;
    int count;
    int frame;
    ShaderNodePool *pool;
    SurfaceShaderObj *shaders[0x1000];
    SurfaceShaderList *func_001B0F10();
    void func_001B0F70();
};

extern SurfaceShaderList *D_002F0630;
extern int D_0028C6F8;
void *func_001E8A44(unsigned int size);
void func_001E891B(void *p);

struct Elem_001B0DC0 {
    void func_001B0970(void);
};

struct Arr_001B0DC0 {
    int count;
    int unk4;
    Elem_001B0DC0 *elems[1];
};

struct C_001B0DC0 {
    void *vtbl;
    char pad4[8];
    Elem_001B0DC0 *unkC;
    Arr_001B0DC0 *unk10;
    void func_001B0DC0(void);
    void func_0001DFF0(void);
};

extern int D_0028C784;

struct TextureMap;

struct TexMgr_002F0670 {
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
    virtual void v28(TextureMap *t);
    virtual void v29(TextureMap *t);
};
extern TexMgr_002F0670 *D_002F0670;

struct C_002BEAAC {
    void func_0013B210(TextureMap *t);
};
extern C_002BEAAC *D_002BEAAC;

struct TextureMap {
    void *vtbl;
    char pad4[0x14];
    char unk18;
    char pad19[0x7F];
    int unk98;
    int unk9C;
    int unkA0;
    int unkA4;
    int unkA8;
    int unkAC;
    int unkB0;
    int unkB4;
    void func_001B11D0();
    TextureMap *func_001B1200(int a0);
    void *func_001B1270(int flags);
    void func_0001E050();
    void func_0001DFF0();
};

struct Terrain {
    void *vtbl;
    void *func_001B11A0(int flags);
    void func_00157660();
};

struct C_001AFCC0 {
    C_001AFCC0 *func_001AFCC0(void *a0, int a1, int a2, int a3);
};

/* config file reader, 0x4CC bytes */
struct C_00168280 {
    int state;
    char pad4[0x4C8];
    C_00168280 *func_00168280(void);
    int func_00169490(const char *path, int flags);
    int func_00169710(const char *name);
    void func_00168C20(const char *key, int def, int *dst);
    void func_001691E0(void);
};

struct C_00146E20 {
    virtual void v0();
    virtual void v1(C_00168280 *s);
    C_00146E20 *func_00146E20(void);
};

struct C_00145230 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(const char *name);
    C_00145230 *func_00145230(void);
    void func_00148910(const char *dir, C_00168280 *s, int a, int b, int c);
};

struct C_00147280 {
    virtual void v0();
    virtual void v1(C_00168280 *s);
    C_00147280 *func_00147280(void);
};

struct C_001B0A20;

struct S_002A829C_Entry {
    int f0;
    C_001B0A20 *f4;
    int f8;
    int fC;
};

struct S_002A829C {
    char pad0[0x14];
    S_002A829C_Entry *f14;
    int func_001617F0(const char *name, int flag);
};
extern S_002A829C *D_002A829C;
extern char D_00286764[], D_0028C6D0[], D_002769F8[], D_0028C6BC[];
extern char D_0028C6A8[], D_0028C690[], D_0028C684[];
int func_001E8D25(int c);
char *func_001E8AC0(const char *s, int c);
void func_00030F30(char *dst, const char *src);

struct C_001B0A20 {
    char pad0[0x8];
    char name[0x40];
    int f48;
    C_00146E20 *f4C;
    int f50;
    C_00145230 *f54[0x40];
    C_00147280 *f154;
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    int func_001B0A20(const char *arg);
};

struct C_001B0D00 {
    char pad0[0xA];
    u8 unkA;
    char padB[1];
    C_001AFCC0 *unkC;
    int func_001B0280(int a0, int a1);
    int func_001B03A0(int a0);
    int func_001B0460(int a0);
    void func_001B0D00(int param_1);
};


int C_001B0A20::func_001B0A20(const char *arg)
{
    char buf2[0x80];
    char buf[0x104];
    int tmp;
    int k;
    const char *s;
    char *d;
    char *p;
    char c;
    int i;
    C_00168280 *stream;
    void *mem;
    int *pCount;

    s = arg;
    do {
        c = *s;
        buf[s - arg] = c;
        s++;
    } while (c);
    for (p = buf; *p != 0; p++) {
        *p = (char)func_001E8D25(*p);
    }
    f48 = D_002A829C->func_001617F0(buf, 1);
    func_00030F30(buf, D_00286764);
    s = buf;
    d = name;
    do {
        c = *s;
        *d = c;
        s++;
        d++;
    } while (c);
    mem = func_001E8A44(0x4cc);
    stream = mem ? ((C_00168280 *)mem)->func_00168280() : 0;
    stream->func_00169490(buf, 0);
    if (stream->state == -1) {
        p = func_001E8AC0(buf, '.');
        if (p) {
            memset(p, 0, strlen(p));
        }
        f50 = 1;
        mem = func_001E8A44(0x4c);
        C_00145230 *o = mem ? ((C_00145230 *)mem)->func_00145230() : 0;
        f54[0] = o;
        o->v4(buf);
    } else {
        if (stream->func_00169710(D_0028C6D0)) {
            mem = func_001E8A44(0x34);
            C_00146E20 *o = mem ? ((C_00146E20 *)mem)->func_00146E20() : 0;
            f4C = o;
            o->v1(stream);
        }
        stream->func_00169710(D_002769F8);
        pCount = &f50;
        stream->func_00168C20(D_0028C6BC, 0, pCount);
        stream->func_00168C20(D_0028C6A8, 1, &tmp);
        b0 = tmp;
        stream->func_00168C20(D_0028C690, 0, &tmp);
        b1 = tmp;
        i = 0;
        do {
            buf2[i] = buf[i];
        } while (buf[i++]);
        p = func_001E8AC0(buf2, '\\');
        if (p) {
            p[1] = 0;
        } else {
            buf2[0] = 0;
        }
        for (i = 0; i < *pCount; i++) {
            mem = func_001E8A44(0x4c);
            C_00145230 *o = mem ? ((C_00145230 *)mem)->func_00145230() : 0;
            f54[i] = o;
            o->func_00148910(buf2, stream, f48, i, *pCount);
        }
        if (stream->func_00169710(D_0028C684)) {
            mem = func_001E8A44(0xc);
            C_00147280 *o = mem ? ((C_00147280 *)mem)->func_00147280() : 0;
            f154 = o;
            o->v1(stream);
        }
    }
    D_002A829C->f14[f48].f4 = this;
    stream->func_001691E0();
    func_001E891B(stream);
    return 1;
}

void C_001B0D00::func_001B0D00(int param_1)
{
    void *func_001E8A44(int);
    int arr[4];
    int flag = 0;
    int i = 0;
    if (unkA > 0) {
        do {
            arr[i] = func_001B0280(param_1, i);
            if (arr[i] != 0) {
                flag = 1;
            }
            i++;
        } while (i < unkA);
    }
    for (; i < 4; i++) {
        arr[i] = 0;
    }
    int a = func_001B03A0(param_1);
    int b = func_001B0460(param_1);
    if (flag != 0 || a != 0 || b != 0) {
        void *obj = func_001E8A44(0x2c);
        unkC = obj ? ((C_001AFCC0 *)obj)->func_001AFCC0(arr, a, b, param_1) : 0;
    }
}

void C_001B0DC0::func_001B0DC0(void)
{
    void func_001E891B(void *);
    void func_001E8390(void *);
    Elem_001B0DC0 *e;
    vtbl = &D_0028C5BC;
    if (unk10 != 0) {
        for (int i = 0; i < unk10->count; i++) {
            e = ((Elem_001B0DC0 **)unk10)[i * 2 + 2];
            if (e != 0) {
                e->func_001B0970();
                func_001E891B(e);
            }
        }
        func_001E8390(unk10);
    }
    e = unkC;
    if (e != 0) {
        e->func_001B0970();
        func_001E891B(e);
    }
    func_0001DFF0();
}

undefined4 C_001B0E40::func_001B0E40(byte param_1)
{
  int func_001B0DC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001B0DC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001B0E60::C_001B0E60(int param_1)
{
    unk4 = 0;
    unkC = 0;
    unk8 = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    unk1C = 0;
    vtbl = &D_0028C6E8;
    unk20 = 0x7fffffff;
    unk24 = param_1;
}

void C_001B0E90::func_001B0E90(void) {
    extern int D_0028C6E8;
    unk0 = (int)&D_0028C6E8;
}

void C_001B0E60::func_001B0EA0(int value, C_001B0E60 **first)
{
    ShaderNode *node;
    if (unk1C != 0) {
        if (*first == 0) {
            *first = this;
        }
        unk1C->func_001B0EA0(value, first);
        return;
    }
    node = D_002F0630->pool->func_0001E8A0();
    node->next = 0;
    node->value = value;
    if (unk18 != D_002F0630->frame) {
        unk18 = D_002F0630->frame;
        unk10 = node;
        unk14 = node;
    } else {
        unk14->next = node;
        unk14 = node;
    }
}

SurfaceShaderList *SurfaceShaderList::func_001B0F10()
{
    ShaderNodePool *p;
    vtbl = (void *)&D_0028C6F8;
    memset(shaders, 0, sizeof(shaders));
    count = 0;
    p = (ShaderNodePool *)func_001E8A44(0x30);
    if (p)
        p = p->func_0001E740(0x14, 0x1000);
    else
        p = 0;
    pool = p;
    frame = 1;
    if (D_002F0630 == 0) {
        D_002F0630 = this;
    }
    return this;
}

void SurfaceShaderList::func_001B0F70()
{
    int i;
    vtbl = (void *)&D_0028C6F8;
    if (pool != 0) {
        pool->release();
    }
    if (D_002F0630 == this) {
        D_002F0630 = 0;
    }
    for (i = 0; i < count; i++) {
        if (shaders[i] != 0) {
            shaders[i]->destroy(1);
        }
    }
}

void C_001B0FC0::func_001B0FC0(void)
{
    int i;

    if (unkC != 0) {
        unkC->func_0001E860();
    }
    for (i = 0; i < count; i++) {
        if (arr[i] != 0) {
            arr[i]->v0(1);
        }
        arr[i] = 0;
    }
    count = 0;
}

int C_001B1010::func_001B1010(C_001B1010_Arg *arg0, int arg1)
{
    int index = count;

    count = index + 1;
    if (arr[index] == 0) {
        C_001B1010_Obj *p = (C_001B1010_Obj *)func_001E8A44(0x28);
        arr[index] = p != 0 ? p->func_00149280(arg0->unk14) : 0;
    }
    arr[index]->unk8 = arg0;
    for (int i = 0; i < count - 1; i++) {
        if (arr[i] != 0 && arr[i]->unk8 != 0) {
            if (arg0->v5(arr[i]->unk8) != 0 && arr[i]->unk20 > index) {
                arr[i]->unk1C = arr[index];
            }
        }
    }
    return index;
}

void C_001B10B0::func_001B10B0(undefined4 param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x10 + param_2 * 4) + 4) = param_1;
  return;
}

void C_001B10D0::func_001B10D0(undefined4 param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x10 + param_2 * 4) + 0xc) = param_1;
  return;
}

void *C_001B0E60::func_001B10F0(int flags)
{
    vtbl = (void *)&D_0028C6E8;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001B1110::func_001B1110(unsigned int flags)
{
    func_001B0F70();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001B1130::func_001B1130(int a0)
{
    u32 *p;

    func_00157600(a0);
    vtbl = (void *)&D_0028C70C;
    p = (u32 *)&unk24;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&unk34;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&unk44;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&unk54;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&unk64;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    return this;
}

int __stdcall func_001B1190(int a0, int a1, int a2, int a3, int a4, int a5, int a6) {
    return 0;
}

void *Terrain::func_001B11A0(int flags)
{
    vtbl = (void *)&D_0028C70C;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void TextureMap::func_001B11D0()
{
    vtbl = (void *)&D_0028C784;
    if (D_002F0670) {
        D_002F0670->v29(this);
    }
    D_002BEAAC->func_0013B210(this);
    func_0001DFF0();
}

TextureMap *TextureMap::func_001B1200(int a0)
{
    func_0001E050();
    vtbl = (void *)&D_0028C784;
    unk98 = 0;
    unk9C = 0;
    unkA0 = 1;
    unkA4 = -1;
    unkA8 = 0;
    unkAC = 0;
    unkB0 = 0;
    unkB4 = 0;
    unk18 = 0;
    if (a0 && D_002F0670) {
        D_002F0670->v28(this);
    }
    return this;
}

void *TextureMap::func_001B1270(int flags)
{
    vtbl = (void *)&D_0028C784;
    if (D_002F0670) {
        D_002F0670->v29(this);
    }
    D_002BEAAC->func_0013B210(this);
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001B12C0::func_001B12C0(int a0)
{
    func_00157600(a0);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028C7EC;
    f68 = D_0028F5E8;
    f74 = 1;
    f78 = -1.0f;
    fB8 = 1.0f;
    fBC = 1.0f;
    fC4 = -1.0f;
    f64 = 0;
    f70 = 0;
    f6C = 0;
    f7C = 0;
    f80 = 0;
    f5C = 0;
    f90 = 0;
    fA0 = 0;
    fB0 = 0;
    f60 = 0;
    f8C = 0;
    f94 = 0;
    fA4 = 0;
    fB4 = 0;
    fC0 = 0;
    fD8 = 0;
    fDC = 0;
    fE0 = 0;
    fD4 = 0;
    fE4 = 0;
    f124 = 0;
    f174 = 0;
    f178 = 0;
    f17C = 0;
    f180 = 0;
    return this;
}

C_001B1580 *C_001B1580::func_001B13A0(int a, int b, int c, int len) {
    int rect[4];
    unk80 = c;
    if (c) {
        ((C_001B13A0_View *)c)->func_0012B210(rect);
        c = rect[2] - rect[0];
        unkB8 = D_00277A00 / c;
        c = rect[3] - rect[1];
        unkBC = D_002779FC / c;
    } else { unkB8 = 1.0f; unkBC = 1.0f; }
    int x = (int)(D_0028C85C / unkB8);
    float y = D_0028C858 / unkBC;
    unk2C = x;
    unk34 = x + 128;
    unk30 = (int)y;
    unk38 = unk30 + 16;
    c = a;
    D_002A8490->manager->func_0018C780(1, &c, 0);
    int *resource = D_002A8490->manager->func_0018C160(a);
    unk28 = resource ? *resource : 0;
    C_001B1580_24 *text = new C_001B1580_24;
    unk24 = text;
    text->func_001D5FA0(unk28, b, len, D_00275630);
    unk24->setColour(-1);
    unk24->setAlpha(255);
    unkC8 = unk84 = unk88 = unk24->unk4C;
    unk24->set34(1.0f);
    unkCC = unk98 = unk9C = unk24->unk34;
    if (unk24->unk38 != 0.0f) unk24->unk38 = 0.0f;
    unkD0 = unkAC = unkA8 = unk24->unk38;
    func_001D3F50();
    return this;
}

C_001B1580 *C_001B1580::func_001B1580(int a, int b, const char *s, int c)
{
    if (s != 0) {
        func_001B13A0(a, b, c, strlen(s));
        unk24->func_0005E840(s);
    } else {
        func_001B13A0(a, b, c, 0x28);
    }
    return this;
}

float C_001B15E0::func_001B15E0(void) {
    return unk9C;
}

void C_001B1580::func_001B15F0()
{
    C_001B1580_24 *p = unk24;
    float h = (float)unk30;
    float w = (float)unk2C;
    if (!(p->unk4 == w && p->unk8 == h)) {
        p->unk4 = w;
        p->unk8 = h;
        p->unk4E |= 6;
    }
    p = unk24;
    if (p->unk44 != unk68) {
        p->unk44 = unk68;
        p->unk4E |= 6;
    }
    unk24->func_001D6440();
}

int C_001B1580::func_001B1640() {
    if (unk80) {
        if (unk80 == D_002EFDB8[1] && unk64 && unk74) {
        unk24->func_0005E9A0(unk164);
        unk24->func_00082400((int)unk168);
        unk24->set34(unk16C);
        unk24->set38(unk170);
        unk24->func_0005E960(unk2C, unk30);
        unk24->set44(unk68);
        unk24->func_001D6600();
        }
    } else if (unk64 && unk74) {
        unk24->func_0005E9A0(unk164);
        unk24->func_00082400((int)unk168);
        unk24->set34(unk16C);
        unk24->set38(unk170);
        unk24->func_0005E960(unk2C, unk30);
        unk24->set44(unk68);
        unk24->func_001D6600();
        func_001FD020(&D_0004035C, 1);
        func_001FE490(1);
    }
    func_00157960();
    return 1;
}

void C_001B1580::func_001B17D0(const char *s)
{
    if (unkC0 == 0) {
        unk24->func_0005E840(s);
    }
}

undefined4 C_001B17F0::func_001B17F0(void)
{
  int in_ECX = (int)this;
  
  return **(undefined4 **)(in_ECX + 0x24);
}

void C_001B1800::func_001B1800(int param_1) {
    ((C_001D6290 *)f24)->func_001D6290(param_1);
}

void C_001B1580::func_001B1810(S_001B1810_Out *out)
{
    C_001B1580_24 *p = unk24;
    float y = p->unk18;
    u32 x = p->unk14;
    out->y = y;
    out->x = x;
    out->z = 0.0f;
    out->w = 1.0f;
}

void C_001B1840::func_001B1840(int a0, int a1, int a2) {
    unkC0 = a2;
    unk64 = a0;
    unk74 = a1;
}

void C_001B1860::func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13)
{
    if (fC0 != 0) return;
    fC0 = a6;
    f6C = a1;
    f70 = a1;
    f64 = 1;
    f74 = 1;
    if (a2 >= D_00275544) {
        f78 = *(int *)&a2;
        f7C = 0;
    } else {
        f7C = 1;
    }
    f168 = (float)a3;
    f9C = *(int *)&a4;
    f16C = *(int *)&a4;
    fA8 = a5;
    f170 = a5;
    fC4 = *(int *)&a7;
    f88 = a3;
    f178 = 1;
    f17C = 1;
    f180 = 1;
    if (a7 > D_00275F58) {
        fC8 = a8;
        f94 = *(int *)&a11;
        fCC = *(int *)&a9;
        fA4 = *(int *)&a12;
        fD0 = a10;
        fB4 = a13;
        fC0 = 1;
    } else {
        fC8 = a3;
        fCC = *(volatile int *)&a4;
        fD0 = *(volatile int *)&a5;
    }
}

void C_001B1980::func_001B1980(void) {
    unk64 = 0;
    unk7C = 0;
    unk78 = -1082130432;
    unkC0 = 0;
}

void C_001B19A0::func_001B19A0(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0xc0) == 0) {
    *(undefined4 *)(in_ECX + 0x68) = param_1;
  }
  return;
}

