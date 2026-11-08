/* 12 functions from 0x000B9AD0 to 0x000BA9F0, found by Ghidra. */
#include "common.h"
#include <string.h>
struct BA440_Reader { int func_00168C20(const char *, int, int *); void func_00168550(const char *, char *, int); };
struct BA440_Obj {
virtual void vf0();
virtual void vf1();
virtual void vf2();
virtual void vf3();
virtual void vf4();
virtual void vf5();
virtual void vf6();
virtual void vf7();
virtual void vf8();
virtual void vf9();
virtual void vf10();
virtual void vf11();
virtual void vf12();
virtual void vf13();
virtual void vf14();
virtual void vf15();
virtual void vf16();
virtual void vf17();
virtual void vf18();
virtual void vf19();
virtual void vf20();
virtual void vf21();
virtual void vf22();
virtual void vf23();
virtual void vf24();
virtual void vf25();
virtual void vf26();
virtual void vf27();
virtual void vf28();
virtual void vf29();
virtual void vf30();
virtual void vf31();
virtual void vf32();
virtual void vf33();
virtual void vf34();
virtual void vf35();
virtual void vf36();
virtual void vf37();
virtual void *vf38(int, char *, BA440_Reader *);
BA440_Obj *func_001BF6F0(void *, int); void *func_001BF7C0(int, char *, BA440_Reader *);
BA440_Obj *func_001BFA70(void *, int); void *func_001BFB40(int, char *, BA440_Reader *);
BA440_Obj *func_00102B30(void *, int); void *func_00103B60(int, BA440_Reader *);
BA440_Obj *func_001033D0(void *, int); void *func_00103450(int, BA440_Reader *);
BA440_Obj *func_001C0110(void *, int); void *func_001C26B0(int, BA440_Reader *);
BA440_Obj *func_001C14D0(void *, int); void *func_001C1520(int, BA440_Reader *, void *);
BA440_Obj *func_001C0C50(void *, int); void *func_001C0CB0(int, BA440_Reader *, void *);
BA440_Obj *func_001C0EC0(void *, int); void *func_001C0F20(int, BA440_Reader *, void *);
BA440_Obj *func_001C1150(void *, int); void *func_001C11E0(int, char *, BA440_Reader *);
BA440_Obj *func_001C0730(void *, int); void *func_001C0820(int, char *, BA440_Reader *);
BA440_Obj *func_001BFDB0(void *, int);
};
struct BA440_Manager { char pad[0x24]; char *f24; void *func_000BA440(BA440_Reader *, const char *); };
extern char D_0027D8D0[], D_0027D8BC[], D_0027D8B0[], D_00276310[], D_0027D898[], D_0027D884[], D_0027D880[], D_002A46E8[], D_0027D86C[], D_0027D854[], D_0027D844[], D_0027D83C[], D_0027D828[], D_0027D818[], D_0027D80C[], D_0027D800[];
#include "ghidra.h"
#include "ghidra.h"
struct Block36 { int v[9]; };
struct Block16 { int v[4]; };
struct C_B9AD0_Object {
    void *func_000BE640(const char *, int, void *);
    C_B9AD0_Object *func_001A2C00(void *, void *, int, int);
    void func_001A23F0(Block36, Block16, Block16, int, float, float, int, int);
    void func_001A4640(const char *, const char *, int);
};
struct BmxUIGlobalManager {
    char pad0[0x24];
    void *f24;
    char pad28[8];
    C_B9AD0_Object *f30;
    int func_000B9AD0(int, int);
    void *func_001577A0(void *, int);
};
struct V_B9AD0 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18();
    virtual void vf19();
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual void vf23();
    virtual void vf24();
    virtual void vf25();
    virtual void vf26();
    virtual void vf27();
    virtual void vf28();
    virtual void vf29();
    virtual void vf30(int);
};
extern int D_0027D694, D_0027D698;
extern short D_0027D69C;
extern char D_0027D69E;
extern int D_002A64D0, D_002A64D4;
extern short D_002A64D8;
extern char D_002A64DA;
extern char D_0027D68C[], D_0027D684[], D_002A47F0[], D_002A5348[], D_00275678[], D_002A48F8[], D_00275630[], D_0027D674[];
extern char *D_002A8490;
extern Block16 D_002A3138;
extern int D_002A313C, D_002A3140, D_002A3144;
void func_001ADCC0(void *, int, const char *, const void *, const void *);
struct C_000BA9D0 {
    undefined4 func_000BA9D0(int param_1);
};

struct C_000BA9B0 {
    undefined4 func_000BA9B0(int param_1);
};

extern int D_0027D6AC;
void func_001E891B(void *p);
void *func_001E8A44(unsigned int size);

struct V_000B9D50 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
};

struct C_000BEDC0 {
    V_000B9D50 *func_000BEDC0(int a);
};

extern int D_0027D75C;

struct C_001BD870 {
    void func_001BD870(int a);
};

struct C_001C3D60 {
    void func_001C3D60(int a);
};
extern C_001C3D60 *D_002F07B8;

struct BmxUIMain {
    void *vtbl;
    char pad4[0x13C];
    int f140;
    char pad144[0xC];
    int f150;
    u8 f154;
    char pad155[0x103];
    int f258;
    int pad25C;
    int f260;
    int f264;
    int f268;
    int f26C;
    int f270;
    int pad274;
    int f278;
    int f27C;
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    int f294;
    int f298;
    int f29C;
    int f2A0;
    int f2A4;
    int f2A8;
    int f2AC;
    int f2B0[8];
    int f2D0[8];
    BmxUIMain *func_000BA360(int a);
    void func_000BE540();
    void *func_001577A0(void *obj, int flags);
    BmxUIMain *func_000B9D30(int a);
    void func_000B9D50();
    void *func_000BA2A0(unsigned int flags);
    void func_000B9D90(int type, int a2);
};

struct V_B9D90 {
    virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3();
    virtual void vf4(); virtual void vf5(); virtual void vf6(); virtual void vf7();
    virtual void vf8(); virtual void vf9(); virtual void vf10(); virtual void vf11();
    virtual void vf12(); virtual void vf13(); virtual void vf14(); virtual void vf15();
    virtual void vf16(); virtual void vf17(); virtual void vf18(); virtual void vf19();
    virtual void vf20(); virtual void vf21(); virtual void vf22(); virtual void vf23();
    virtual void vf24(); virtual void vf25(); virtual void vf26(); virtual void vf27();
    virtual void vf28(); virtual void vf29(); virtual void vf30();
    virtual V_000B9D50 *vf31(void *, int, void *);
};
#define MK_CTOR(a) struct C_##a { void *func_##a(int); };
MK_CTOR(000C44C0) MK_CTOR(000D0E00) MK_CTOR(000CC700) MK_CTOR(000C85B0)
MK_CTOR(000C8F30) MK_CTOR(000D4D20) MK_CTOR(000CB480) MK_CTOR(000C58E0)
MK_CTOR(000C6620) MK_CTOR(000C77D0) MK_CTOR(000DA210) MK_CTOR(000DB5B0)
MK_CTOR(000DD030) MK_CTOR(000DE4D0) MK_CTOR(000E0D50) MK_CTOR(000D5D40)
MK_CTOR(000D6C90) MK_CTOR(000D7AB0) MK_CTOR(000D8C70) MK_CTOR(000E1770)
MK_CTOR(000E2030) MK_CTOR(000EA910) MK_CTOR(000E4830) MK_CTOR(000EB370)
MK_CTOR(000EBCF0) MK_CTOR(000ECF80) MK_CTOR(000BFE90) MK_CTOR(000EE230)
MK_CTOR(000F0C40) MK_CTOR(000BFB70) MK_CTOR(000F1D00) MK_CTOR(000D9820)
#define UI_CASE(n, sz, a) case n: m = func_001E8A44(sz); obj = m ? ((C_##a *)m)->func_##a(1) : 0; break;
struct C_000BA2D0 {
    char pad0[0x110];
    int count;
    void **items;
    void *unk118;
    int pad11C;
    void *unk120;
    char pad124[0x8];
    void *unk12C;
    void func_000BA2D0();
};


int BmxUIGlobalManager::func_000B9AD0(int mode, int arg)
{
    Block36 local;
    void *m;
    BmxUIMain *obj;
    switch (mode) {
    case 3:
        D_002A64D0 = D_0027D694;
        D_002A64D4 = D_0027D698;
        D_002A64D8 = D_0027D69C;
        D_002A64DA = D_0027D69E;
        m = func_001E8A44(0x31c);
        obj = m ? ((BmxUIMain *)m)->func_000B9D30(1) : 0;
        f24 = func_001577A0(((C_B9AD0_Object *)obj)->func_000BE640(D_0027D68C, arg, this), -1);
        break;
    case 2:
        D_002A64D0 = D_0027D694;
        D_002A64D4 = D_0027D698;
        D_002A64D8 = D_0027D69C;
        D_002A64DA = D_0027D69E;
        m = func_001E8A44(0x31c);
        obj = m ? ((BmxUIMain *)m)->func_000B9D30(1) : 0;
        f24 = func_001577A0(((C_B9AD0_Object *)obj)->func_000BE640(D_0027D684, arg, this), -1);
        break;
    }
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
    char *p = *(char **)(D_002A8490 + 0x2e0);
    ((V_B9AD0 *)*(void **)(*(char **)(p+0x2fc)+0x28))->vf30(*(int *)(p+0x18));
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, &D_002A64D0, D_002A47F0);
    m = func_001E8A44(0x1f0);
    f30 = m ? ((C_B9AD0_Object *)m)->func_001A2C00(*(void **)(D_002A8490+4), *(void **)(*(char **)((char *)f24+0x150)+0x4c0), 6, 1) : 0;
    func_001577A0(f30, -1);
    Block16 color = { D_002A3138.v[0], D_002A313C, D_002A3140, D_002A3144 };
    f30->func_001A23F0(local, color, color, 2, 20.0f, 100.0f, 0, 1);
    f30->func_001A4640(D_0027D674, D_00275630, -1);
    ((V_B9AD0 *)*(void **)(*(char **)(D_002A8490+4)+0xb4))->vf6();
    ((V_B9AD0 *)*(void **)(D_002A8490+4))->vf6();
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
    return f24 != 0;
}

__declspec(noinline) BmxUIMain *BmxUIMain::func_000B9D30(int a)
{
    func_000BA360(a);
    vtbl = (void *)&D_0027D6AC;
    return this;
}

void BmxUIMain::func_000B9D50()
{
    void *m = func_001E8A44(0x98);
    V_000B9D50 *obj = m ? ((C_000BEDC0 *)m)->func_000BEDC0(1) : 0;
    obj->vf28();
    func_001577A0(obj, 0x1000);
}

void BmxUIMain::func_000B9D90(int type, int a2)
{
    void *m;
    void *obj = 0;
    unsigned k = type - 1;
    V_B9D90 *v;
    if (k > 0x1f) {
        return;
    }
    switch (k) {
    UI_CASE(0, 0x368, 000C44C0)
    UI_CASE(1, 0x20b8, 000D0E00)
    UI_CASE(2, 0x5b8, 000CC700)
    UI_CASE(3, 0x2e8, 000C85B0)
    UI_CASE(4, 0x364, 000C8F30)
    UI_CASE(5, 0x318, 000D4D20)
    UI_CASE(6, 0x3b4, 000CB480)
    UI_CASE(7, 0x2e0, 000C58E0)
    UI_CASE(8, 0x308, 000C6620)
    UI_CASE(9, 0x38c, 000C77D0)
    UI_CASE(10, 0x358, 000DA210)
    UI_CASE(11, 0x388, 000DB5B0)
    UI_CASE(12, 0x348, 000DD030)
    UI_CASE(13, 0xaec, 000DE4D0)
    UI_CASE(14, 0x2f0, 000E0D50)
    UI_CASE(15, 0x318, 000D5D40)
    UI_CASE(16, 0x318, 000D6C90)
    UI_CASE(17, 0x320, 000D7AB0)
    UI_CASE(18, 0x318, 000D8C70)
    UI_CASE(19, 0x2dc, 000E1770)
    UI_CASE(20, 0x468, 000E2030)
    UI_CASE(21, 0x300, 000EA910)
    UI_CASE(22, 0x790, 000E4830)
    UI_CASE(23, 0x2e4, 000EB370)
    UI_CASE(24, 0x3a4, 000EBCF0)
    UI_CASE(25, 0x4fc, 000ECF80)
    UI_CASE(26, 0x2e8, 000BFE90)
    UI_CASE(27, 0x704, 000EE230)
    UI_CASE(28, 0x420, 000F0C40)
    UI_CASE(29, 0x288, 000BFB70)
    UI_CASE(30, 0x2c4, 000F1D00)
    UI_CASE(31, 0x318, 000D9820)
    }
    v = (V_B9D90 *)obj;
    func_001577A0(v->vf31(&f154, a2, this), -1);
}

void func_000BA290(void) {
    int func_000BC7B0(...);
    func_000BC7B0();
}

void *BmxUIMain::func_000BA2A0(unsigned int flags)
{
    vtbl = (void *)&D_0027D6AC;
    func_000BE540();
    if (flags & 1) func_001E891B(this);
    return this;
}

void C_000BA2D0::func_000BA2D0()
{
    if (items) {
        for (int i = 0; i < count; i++) {
            func_001E891B(items[i]);
        }
        func_001E891B(items);
    }
    if (unk120) func_001E891B(unk120);
    if (unk118) func_001E891B(unk118);
    if (unk12C) func_001E891B(unk12C);
}

BmxUIMain *BmxUIMain::func_000BA360(int a)
{
    int i;
    ((C_001BD870 *)this)->func_001BD870(a);
    vtbl = (void *)&D_0027D75C;
    f26C = 0;
    f150 = 0;
    f154 = 0;
    f258 = 0;
    f260 = 0;
    f264 = 0;
    f268 = 0;
    f270 = 0;
    f278 = 0;
    f27C = 0;
    f280 = 0;
    f284 = 0;
    f288 = 0;
    f28C = 0;
    f290 = 0;
    f294 = 0;
    f140 = 0;
    f298 = 0;
    f29C = 0;
    f2A0 = 0;
    for (i = 0; i < 8; i++) {
        f2B0[i] = 0;
        f2D0[i] = 0;
    }
    f2A4 = 0;
    f2A8 = 0;
    f2AC = 0;
    D_002F07B8->func_001C3D60(0);
    return this;
}

void __stdcall func_000BA430(int a0, int a1, int a2, int a3) {
}

void *BA440_Manager::func_000BA440(BA440_Reader *reader, const char *name) {
 int flag, index; char path[260], full[260]; void *m; BA440_Obj *obj;
 if (!strcmp(name,"Global")) { if(reader->func_00168C20(D_0027D8BC,0,&index)) return (*(void ***)(f24+0x2c))[index-1]; return 0; }
if(!strcmp(name,"Soultree")){reader->func_00168550(D_00276310,path,260);m=func_001E8A44(364); obj=m ? ((BA440_Obj *)m)->func_001BF6F0(this,1):0; return obj->func_001BF7C0(1,path,reader);}
if(!strcmp(name,"Soultree_Lightweight")){reader->func_00168550(D_00276310,path,260);m=func_001E8A44(364); obj=m ? ((BA440_Obj *)m)->func_001BFA70(this,1):0; return obj->func_001BFB40(2,path,reader);}
if(!strcmp(name,"Soultree_Character")){ reader->func_00168550(D_0027D880,path,260); func_001ADCC0(full,260,D_00275678,D_002A46E8,path); m=func_001E8A44(0x3a4); obj=m?((BA440_Obj*)m)->func_001BFDB0(this,1):0; return obj->vf38(3,full,reader); }
if(!strcmp(name,"Bmx_Overlay_Text")){m=func_001E8A44(1280); obj=m ? ((BA440_Obj *)m)->func_00102B30(this,1):0; return obj->func_00103B60(4,reader);}
if(!strcmp(name,"BmxRotate_Overlay_Text")){m=func_001E8A44(1016); obj=m ? ((BA440_Obj *)m)->func_001033D0(this,1):0; return obj->func_00103450(4,reader);}
if(!strcmp(name,"Overlay_Text")){m=func_001E8A44(432); obj=m ? ((BA440_Obj *)m)->func_001C0110(this,1):0; return obj->func_001C26B0(4,reader);}
if(!strcmp(name,"Icon")){m=func_001E8A44(112); obj=m ? ((BA440_Obj *)m)->func_001C14D0(this,1):0; return obj->func_001C1520(5,reader,this);}
if(!strcmp(name,"Movement_Control")){m=func_001E8A44(172); obj=m ? ((BA440_Obj *)m)->func_001C0C50(this,1):0; return obj->func_001C0CB0(9,reader,this);}
if(!strcmp(name,"Movement_Group")){m=func_001E8A44(168); obj=m ? ((BA440_Obj *)m)->func_001C0EC0(this,1):0; return obj->func_001C0F20(10,reader,this);}
if(!strcmp(name,"User_Rotate")){reader->func_00168C20(D_0027D800,0,&flag); reader->func_00168550(D_00276310,path,260); if(flag){m=func_001E8A44(592); obj=m ? ((BA440_Obj *)m)->func_001C1150(this,1):0; return obj->func_001C11E0(11,path,reader);} else {m=func_001E8A44(184); obj=m ? ((BA440_Obj *)m)->func_001C0730(this,1):0; return obj->func_001C0820(11,path,reader);} } return 0; }

undefined4 C_000BA9B0::func_000BA9B0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x120) + -4 + param_1 * 4);
}

undefined4 C_000BA9D0::func_000BA9D0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x110) + -4 + param_1 * 4);
}

