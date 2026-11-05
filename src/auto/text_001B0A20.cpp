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
    char pad1C[0x28];
    int unk44;                        /* 0x44 */
    char pad48[0x6];
    u8 unk4E;                         /* 0x4E */
    void func_0005E840(const char *s);
    void func_001D6440();
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
    char pad28[0x4];
    int unk2C;                        /* 0x2C */
    int unk30;                        /* 0x30 */
    char pad34[0x34];
    int unk68;                        /* 0x68 */
    char pad6C[0x54];
    int unkC0;                        /* 0xC0 */
    void func_001B13A0(int a, int b, int c, int len);
    C_001B1580 *func_001B1580(int a, int b, const char *s, int c);
    void func_001B15F0();
    void func_001B17D0(const char *s);
    void func_001B1810(S_001B1810_Out *out);
};

struct C_001B0E40 {
    undefined4 func_001B0E40(byte param_1);
};

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
        if (obj != 0) {
            unkC = ((C_001AFCC0 *)obj)->func_001AFCC0(arr, a, b, param_1);
            return;
        }
    }
    unkC = 0;
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
    func_00157600(a0);
    vtbl = (void *)&D_0028C70C;
    unk24 = unk28 = unk2C = 0;
    unk30 = 1.0f;
    unk34 = unk38 = unk3C = 0;
    unk40 = 1.0f;
    unk44 = unk48 = unk4C = 0;
    unk50 = 1.0f;
    unk54 = unk58 = unk5C = 0;
    unk60 = 1.0f;
    unk64 = unk68 = unk6C = 0;
    unk70 = 1.0f;
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

