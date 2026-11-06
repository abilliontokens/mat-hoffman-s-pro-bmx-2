/* 3 functions from 0x00066C90 to 0x00067AA0, found by Ghidra. */
#include "common.h"

extern int D_0027850C;
extern int D_002787FC;
struct PtrObj_66C { void func_001D6410(); };
struct VObj_66C { virtual void v0(int); };
extern "C" void __cdecl func_001E891B(void *);

struct C_00066C90 {
    void *vtbl;
    char pad4[0x14];
    int unk18;
    char pad1C[8];
    int unk24[8];
    int unk44[8];
    int unk64[2];
    int unk6C[2];
    char pad74[4];
    int a78[3];
    int pad84[3];
    int a90[2];
    int unk98[5];
    int unkAC[5];
    int unkC0[6];
    int unkD8[8];
    int unkF8;
    int unkFC;
    int unk100;
    int unk104;
    int unk108;
    int unk10C;
    int unk110;
    char pad114[4];
    int unk118[8];
    int unk138;
    int unk13C[2];
    int unk144[2];
    int unk14C;
    int unk150;
    char pad154[4];
    int unk158;
    int unk15C;
    char pad160[4];
    int unk164;
    int unk168;
    void func_00066DC0();
    void func_00157660();
    void func_00157600(int a0);
    C_00066C90 *func_00066C90(int a0);
    void func_00066FA0(int a0);
};

struct Res_66C { void *func_0018C160(void *name); };
struct Spr_66C {
    char pad0[0x28];
    float x;
    float y;
    char pad30[8];
    unsigned int color;
    float u0, v0, u1, v1;
    float w, h;
    char pad54[4];
    unsigned char flags;
    Spr_66C *func_001D5760();
    void func_001D5810(void *name, float x, float y, int z);
};
struct App_66C { char pad[0x2e8]; void *unk2E8; Res_66C *unk2EC; };
extern App_66C *D_002A8490;
extern char D_002786A0[], D_00278690[], D_00278678[], D_00278658[];
extern int D_00278664, D_00278668, D_0027866C, D_00278670;
extern char D_00278674;
extern int D_002A60B0, D_002A60B4, D_002A60B8, D_002A60BC;
extern char D_002A60C0;
extern float D_00278654, D_00275544, D_0027653C;
extern "C" void *__cdecl func_001E8A44(unsigned int);

C_00066C90 *C_00066C90::func_00066C90(int a0)
{
    int i;

    func_00157600(a0);
    vtbl = &D_0027850C;
    for (i = 0; i < 8; i++) {
        unk24[i] = 0;
        unk44[i] = 0;
    }
    vtbl = &D_002787FC;
    unk168 = 0;
    unk108 = 0;
    unk18 = -1;
    unk100 = 0;
    unkFC = 0;
    unkF8 = 0;
    for (i = 0; i < 2; i++) {
        unk64[i] = 0;
        unk6C[i] = 0;
    }
    for (i = 0; i < 3; i++) {
        a78[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        a90[i] = 0;
    }
    unk10C = 0;
    for (i = 0; i < 2; i++) {
        unk13C[i] = 0;
        unk144[i] = 0;
    }
    unk138 = 0;
    unk110 = 0;
    for (i = 0; i < 8; i++) {
        unk118[i] = 0;
    }
    unk15C = 1;
    unk158 = -1;
    for (i = 0; i < 5; i++) {
        unk98[i] = 0;
        unkAC[i] = 0;
    }
    for (i = 0; i < 6; i++) {
        unkC0[i] = 0;
    }
    unk104 = 0;
    for (i = 0; i < 8; i++) {
        unkD8[i] = 0;
    }
    unk14C = 0;
    unk150 = 0;
    unk164 = 0;
    return this;
}

void C_00066C90::func_00066DC0()
{
 int i;
 vtbl=&D_002787FC;
 for(i=0;i<2;i++) {
 PtrObj_66C *p=(PtrObj_66C*)unk64[i];
 if(p){p->func_001D6410();func_001E891B(p);}
 p=(PtrObj_66C*)unk6C[i];
 if(p){p->func_001D6410();func_001E891B(p);}
 }
 for(i=0;i<3;i++) pad84[i]=0;
 {PtrObj_66C*p=(PtrObj_66C*)unk100;if(p){p->func_001D6410();func_001E891B(p);}}
 {PtrObj_66C*p=(PtrObj_66C*)unkFC;if(p){p->func_001D6410();func_001E891B(p);}}
 for(i=0;i<2;i++){if(a90[i]){((VObj_66C*)a90[i])->v0(1);a90[i]=0;}}
 for(i=0;i<2;i++){
 if(unk13C[i]){((VObj_66C*)unk13C[i])->v0(1);unk13C[i]=0;}
 if(unk144[i]){((VObj_66C*)unk144[i])->v0(1);unk144[i]=0;}
 }
 if(unkF8){((VObj_66C*)unkF8)->v0(1);unkF8=0;}
 for(i=0;i<5;i++){
 if(unk98[i]){((VObj_66C*)unk98[i])->v0(1);unk98[i]=0;}
 if(unkAC[i]){((VObj_66C*)unkAC[i])->v0(1);unkAC[i]=0;}
 }
 for(i=0;i<6;i++){if(unkC0[i]){((VObj_66C*)unkC0[i])->v0(1);unkC0[i]=0;}}
 {PtrObj_66C*p=(PtrObj_66C*)unk104;if(p){p->func_001D6410();func_001E891B(p);unk104=0;}}
 {PtrObj_66C*p=(PtrObj_66C*)unk14C;if(p){p->func_001D6410();func_001E891B(p);unk14C=0;}}
 {PtrObj_66C*p=*(PtrObj_66C**)pad154;if(p){p->func_001D6410();func_001E891B(p);*(int*)pad154=0;}}
 func_00157660();
}

