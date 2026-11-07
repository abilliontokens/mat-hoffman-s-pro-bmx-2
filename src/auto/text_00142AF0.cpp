/* 17 functions from 0x00142180 to 0x00142F30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Particle_00142180 { int x,y,z,a,b,c; float d; int e,f; float g; int h; };
struct Vertex_00142180 { int x,y,z; float a; int b,c,d,e; float f; int g,h,i,j,k,l; };

void __stdcall func_00201100(void *p);
void func_001E8390(void *p);
void *__stdcall func_001FF410(void *buffer, int flags);
extern int D_00285970;

struct C_00142720_Virt {
    virtual void Destroy(int flag);
};

struct C_0014A540 {
    void func_0014A540(void);
};

/* DXParticleSimulation */
struct C_00142720 {
    void *vtbl;
    char pad4[4];
    void **f8;
    void *fC;
    void *f10;
    void *f14;
    void *f18;
    char pad1C[4];
    int f20;
    char pad24[0x9C - 0x24];
    C_0014A540 *f9C;
    char padA0[8];
    int fA8;
    char padAC[0xC8 - 0xAC];
    C_00142720_Virt *fC8;
    C_00142720_Virt *fCC;
    void func_00142720(void);
    void func_0001DFF0(void);
};

struct S_001425B0_V3 {
    int x, y, z;
};

struct S_001425B0_V4 {
    int x, y, z, w;
};

/* DXParticleSimulation constructor view */
struct C_001425B0 {
    void *vtbl;
    char pad4[4];
    int f8, fC, f10, f14, f18, f1C, f20, f24;
    int f28[4];
    int f38[4];
    int f48, f4C, f50, f54, f58, f5C;
    char pad60[4];
    S_001425B0_V3 f64;
    S_001425B0_V3 f70;
    int f7C, f80;
    S_001425B0_V3 f84[2];
    int f9C, fA0;
    char padA4[4];
    int fA8;
    int fAC[4];
    int fBC, fC0, fC4, fC8, fCC, fD0, fD4, fD8;
    S_001425B0_V4 fDC;
    int fEC;
    void func_0001DFE0(void);
    C_001425B0 *func_001425B0(void);
    void func_00142180(int buffer, int dst, int src, int count, int clear);
};

extern int D_002A6D30;

static inline void InitV3_001425B0(S_001425B0_V3 *v)
{
    v->z = 0;
    v->y = 0;
    v->x = 0;
}

struct C_00142BF0 {
    undefined4 func_00142BF0(byte param_1);
};

struct C_00142C70 {
    __declspec(noinline) undefined4 func_00142C70(void);
};

struct C_00142CF0 {
    int unk0;
    C_00142CF0* func_00142CF0(void);
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct C_0013B210 {
    int func_0013C9F0(int param_1, int *param_2);
    void func_0013C8A0(int param_1, void *param_2, int param_3, int param_4);
    void func_0013C110(int param_1);
};

struct C_00142C80 {
    int func_00142C80(int param_1, int param_2);
};

struct C_00142D90_Elem {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
};

struct C_00012140 {
    void func_00012140(void);
};

struct C_00142D90 {
    char pad_0[0x14];
    C_00142D90_Elem *unk14;
    void func_00142D90(int param_1);
    void func_001AC790(int param_1);
};

struct C_00142560_Elem {
    int unk0;
    char pad_4[0x10];
    float unk14;
    char pad_18[0x34 - 0x18];
};

struct C_00142560 {
    char pad_0[0x14];
    C_00142560_Elem *unk14;
    int unk18;
    int unk1C;
    int unk20;
    char pad_24[0xa8 - 0x24];
    int unkA8;
    void func_00142560(void);
};

struct C_00142C10 {
    char pad_0[0x20];
    int unk20;
    int unk24;
    char pad_28[0xa8 - 0x28];
    int unkA8;
    int unkAC;
    int unkB0;
    char pad_B4[0xd4 - 0xb4];
    int unkD4;
    int unkD8;
    int unkDC;
    int unkE0;
    char pad_E4[0xec - 0xe4];
    int unkEC;
};

void func_00142C10(C_00142C10 *param_1);

struct C_00142AF0_Item {
    char pad0[0xb8];
    int fB8;
};

struct C_00142AF0_Slot {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual C_00142AF0_Item *v4(int a);
};

struct C_00142AF0_SlotEntry {
    int f0;
    C_00142AF0_Slot *f4;
    int f8;
    int fC;
};

struct C_00142AF0_SlotMgr {
    char pad0[0x14];
    C_00142AF0_SlotEntry *f14;
};

struct C_00142AF0_Node {
    char pad0[0xd4];
    int fD4;
    void func_001B07A0(void);
};

struct C_00142AF0_NodeEntry {
    int f0;
    C_00142AF0_Node *f4;
    int f8;
    int fC;
};

struct C_00142AF0_NodeMgr {
    char pad0[0x14];
    C_00142AF0_NodeEntry *f14;
};

struct C_00142AF0_Params {
    char pad0[0x18];
    short f18[2];
    int func_001AFF80(int idx);
};

struct C_00142AF0_Track {
    char pad0[8];
    C_00142AF0_Params *f8;
    void func_00149310(int a1, int a2, int a3, int a4);
};

struct C_00142AF0_TrackMgr {
    char pad0[0x10];
    C_00142AF0_Track *f10[1];
};

struct C_00142AF0_Ref {
    int f0;
    int f4;
    char pad8[8];
    int f10;
};

struct S_00142810_In {
    char pad0[0x18];
    float f18;
    float f1C;
    char pad20[0x2C - 0x20];
};

struct S_00142810_Rec {
    float f0;
    S_001425B0_V3 f4;
    S_001425B0_V3 f10;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
    int f30;
};

struct C_00142AF0 {
    char pad0[0x10];
    S_00142810_In *f10;
    S_00142810_Rec *f14;
    S_00142810_Rec *f18;
    char pad1C[4];
    int f20;
    int f24;
    int f28[4];
    int f38[4];
    int f48;
    int f4C;
    int f50;
    int f54;
    float f58;
    char pad5C[4];
    int f60;
    S_001425B0_V3 f64;
    S_001425B0_V3 f70;
    int f7C;
    int f80;
    char pad84[0xa8 - 0x84];
    int fA8;
    int fAC[2];
    char padB4[0xc4 - 0xb4];
    C_00142AF0_Track *fC4;
    C_00142AF0_Ref *fC8;
    int fCC;
    char padD0[0xEC - 0xD0];
    int fEC;
    void func_00142180(int slot, int base, int pos, int count, int flag);
    void func_00142810(void);
    int func_00142AF0(void);
};

extern float D_00275544;

extern int D_002A6D38;
extern C_00142AF0_NodeMgr *D_002A829C;
extern C_00142AF0_SlotMgr *D_002AA6C0;
extern C_00142AF0_TrackMgr *D_002F0630;

void *func_001E8A44(int size);
void __stdcall func_00201350(void *p);
extern int D_002859C4;

extern int D_00285998;
void func_001E891B(void *p);

struct C_00142E60 {
    void *vtbl;
    void func_00142DE0();
    void func_001AC830();
    void *func_00142E60(int flags);
};

struct C_00142DE0 {
    char pad0[0x8];
    int unk8;
    char padC[0x8];
    C_00142D90_Elem *unk14;
    void func_00142DE0();
};

struct C_00142D00 {
    void *unk0;
    void func_00142D00(void *a0);
};

static __forceinline void Assign_142D00(void *src, void **dst)
{
    if (*dst != src) {
        func_00201350(src);
        *dst = src;
    }
}

struct C_00142D20 {
    char pad0[0x8];
    int unk8;
    char padC[0x8];
    C_00142D90_Elem *unk14;
    void func_00142D20();
};

struct F4_142 {
    f32 x, y, z, w;
};

struct C_00142E90 {
    void *vtbl;
    int unk4;
    char pad8[0x148];
    int unk150;
    int unk154;
    int unk158;
    f32 unk15C;
    int unk160;
    int unk164;
    int unk168;
    f32 unk16C;
    int unk170;
    int unk174;
    int unk178;
    f32 unk17C;
    int unk180;
    int unk184;
    int unk188;
    f32 unk18C;
    C_00142E90(int a0);
    void func_00142E90(int a0);
};

int C_00142AF0::func_00142AF0(void)
{
    if (D_002A6D38 == 0 || fA8 == 0) {
        return 1;
    }
    func_00142810();
    C_00142AF0_Node *node = D_002A829C->f14[fC8->f4].f4;
    node->func_001B07A0();
    fC4 = D_002F0630->f10[node->fD4];
    fC8->f10 = fCC;
    fC4->func_00149310((int)fC8, 0, 0, 0);
    C_00142AF0_Params *p = fC4->f8;
    if (p != 0) {
        for (int i = 0; i < 2; i++) {
            C_00142AF0_Slot *slot = D_002AA6C0->f14[p->f18[i]].f4;
            if (slot != 0) {
                int idx = p->func_001AFF80(i);
                C_00142AF0_Item *item = slot->v4(idx);
                if (item != 0) {
                    fAC[i] = item->fB8;
                }
            }
        }
    }
    return 1;
}

undefined4 C_00142BF0::func_00142BF0(byte param_1)
{
  int func_00142720(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00142720();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void func_00142C10(C_00142C10 *param_1)
{
    extern int D_00011101;
    memset(param_1, 0, 0xf0);
    param_1->unkD4 = (int)&D_00011101;
    param_1->unkE0 = 0;
    param_1->unkD8 = 0;
    param_1->unkA8 = 0;
    param_1->unkDC = 0;
    param_1->unkEC = 0x10;
    param_1->unkAC = 0;
    param_1->unkB0 = 0;
    param_1->unk20 = 0x20;
    param_1->unk24 = 0x3000;
}

undefined4 C_00142C70::func_00142C70(void)
{
  int func_00142C10(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00142C10(in_ECX);
  return in_ECX;
}

int C_00142C80::func_00142C80(int param_1, int param_2)
{
    extern C_0013B210 *D_002BEAAC;
    extern int D_00275FB4;
    int id;
    id = D_002BEAAC->func_0013C9F0(param_1, &D_00275FB4);
    if (id == -1) {
        return 0;
    }
    D_002BEAAC->func_0013C8A0(id, &param_1, 4, 1);
    D_002BEAAC->func_0013C8A0(id, this, 0xf0, 1);
    D_002BEAAC->func_0013C110(id);
    return 1;
}

C_00142CF0* C_00142CF0::func_00142CF0(void) {
    unk0 = 0;
    return this;
}

void C_00142D90::func_00142D90(int param_1)
{
    void func_001E891B(int);
    int value;
    func_001AC790(param_1);
    if (unk14[param_1].unkC == 0) {
        value = unk14[param_1].unk4;
        if (value != 0) {
            ((C_00012140 *)value)->func_00012140();
            func_001E891B(value);
            unk14[param_1].unk4 = 0;
        }
    }
}

#pragma optimize("s", on)
void C_00142D00::func_00142D00(void *a0)
{
    if (unk0 != a0) {
        func_00201350(a0);
        unk0 = a0;
    }
}
#pragma optimize("", on)
void C_00142D20::func_00142D20() {
 for (int i=0; i<unk8; i++) {
 if (unk14[i].unkC > 0 && unk14[i].unk4 == 0) {
 void *mem=func_001E8A44(0xf0);
 C_00142C80 *obj=mem ? (C_00142C80 *)((C_00142C70 *)mem)->func_00142C70() : 0;
 obj->func_00142C80(unk14[i].unk0,i);
 unk14[i].unk4=(int)obj;
 }
 }
}

void C_00142DE0::func_00142DE0() {
    void func_001E8390(void *);
    void func_001E891B(void *);
    int i = 0;
    if (i < unk8) {
        do {
            int v = unk14[i].unk4;
            if (v != 0) {
                ((C_00012140 *)v)->func_00012140();
                func_001E891B((void *)v);
                unk14[i].unk4 = 0;
            }
            int w = unk14[i].unk0;
            if (w != 0) {
                func_001E8390((void *)w);
                unk14[i].unk0 = 0;
            }
            unk14[i].unkC = 0;
            i++;
        } while (i < unk8);
    }
    unk8 = 0;
}

void *C_00142E60::func_00142E60(int flags)
{
    vtbl = &D_00285998;
    func_00142DE0();
    func_001AC830();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

C_00142E90::C_00142E90(int a0) {
    vtbl = &D_002859C4;
    u32 *p = (u32 *)&unk150;
    p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
    p = (u32 *)&unk160;
    p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
    p = (u32 *)&unk170;
    p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
    p = (u32 *)&unk180;
    p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
    unk4=a0;
    p=(u32 *)&unk160;
    p[0]=0x3f800000; p[1]=0x3f800000; p[2]=0x3f800000; p[3]=0x3f800000;
}
