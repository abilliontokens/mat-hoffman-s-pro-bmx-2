/* 11 functions from 0x0002EB10 to 0x0002FA80, found by Ghidra. */
#include "common.h"

struct S_0002F1C0_Value { char pad[0x24]; float value; };
struct S_0002F1C0_Vehicle { char pad[0x9e8]; S_0002F1C0_Value *x,*y,*z,*w; char pad9f8[0x820]; int index; };
struct S_0002F1C0_Params { int a,b,c,d,e,f; float x,y,z,w; };
struct S_0002F1C0_Input { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual int query(int,int,int,int); };
struct S_0002F1C0_Camera { void func_00059290(S_0002F1C0_Params,int); void func_0009FE80(S_0002F1C0_Params,int); };
struct S_0002F1C0_Virtual { virtual void v0(); virtual void v1(); virtual void update(S_0002F1C0_Params*); };
extern int D_002768FC;
extern int D_002768E4;
extern int D_002B7EA8;
extern int D_002B7EAC;

struct CreatorObj {
    int func_00026500(int a, int b);
};
extern CreatorObj *D_002A7CB8;

struct S_0002EF70_Item {
    void func_0015B060(int a, float b, float c);
};
struct S_0002EF70_Mgr {
    char pad0[0x14];
    S_0002EF70_Item *items[1];
    void *func_00135E80();
};
extern "C" void *func_001E8A44(int size);
struct S_2EF70_Ent {
    void *func_001362A0(float a, float b, int c, void *d, int e, float f);
};
struct S_2EF70_Sub { char pad[0x3c]; int f3c; };
struct S_2EF70_Obj {
    void func_000559E0(int a, float b, int c);
    void func_0009FAD0(int a, float b, int c);
    void func_0009FAC0(void *a);
    void func_000560A0();
    void func_00195160(int a, float b, float c);
};
struct S_2EF70_Prm { int f0; int f4; };
struct S_2EF70_Veh {
    char pad0[0x1e0];
    int f1e0;
    char pad1e4[8];
    S_2EF70_Sub *f1ec;
    char pad1f0[0x810];
    S_2EF70_Prm *fa00;
};
struct S_2EF70_This {
    char pad0[0x34];
    void *f34;
    char pad38[8];
    void *f40;
    void *f44;
    void *f48;
    void *f4c;
    S_2EF70_Obj *f50;
    S_2EF70_Obj *f54;
    char pad58[8];
    S_2EF70_Obj *f60;
    char pad64[4];
    int f68;
    void func_0002EF70(S_2EF70_Veh *veh, int idx);
};
struct S_0002EE30_Global {
    char pad0[8];
    S_0002EF70_Mgr *f8;
    char padC[0xc];
    int f18;
};
extern S_0002EE30_Global *D_002A8490;

extern int D_002A1194;
extern char D_002768DC[], D_002768C8[], D_002768B8[], D_002768A8[], D_00276898[], D_0027688C[], D_00276880[], D_00276874[];
extern char D_0027686C[], D_00276864[], D_0027685C[], D_00276854[], D_0027684C[], D_00276844[], D_00276830[], D_00276828[], D_00276820[], D_00276810[], D_002767F8[], D_002767E0[], D_002767D0[], D_002767BC[];
extern float D_002768D8;
struct S_2EB10_Cam { void func_00197E70(float *v); };
struct S_2EB10_B { char pad[0x28]; float f28; char pad2c[0x20c]; float f238, f23c, f240; };
struct S_2EB10_C { char pad[0x50]; int f50, f54; };
struct S_2EB10_D { char pad[0x30]; int f30; };
struct S_2EB10_G { char pad[0x1934]; int counter; };
/* local vector: z, y, x = 0 then w = 1, as the compiler initialises it */
struct S_2EB10_V4 {
    float x, y, z, w;
    S_2EB10_V4() { x = y = z = 0.0f; w = 1.0f; }
};
struct S_2EB10_T {
    char pad0[0x1e0]; S_2EB10_B *f1e0; char pad1e4[4]; S_2EB10_C *f1e8; char pad1ec[4]; S_2EB10_D *f1f0;
    char pad1f4[0x3c]; S_2EB10_Cam *f230; char pad234[0x23c]; int f470; char pad474[4]; int f478; char pad47c[4]; unsigned f480;
    char pad484[0x2f4]; float f778; char pad77c[8]; int f784;
};
extern "C" void func_0013E260(void *, int, const void *);
extern "C" void func_0013E1F0(void *, int, const void *, ...);

struct C_000264C0 {
    void func_000264C0(void *src);
};

struct C_000B8AD0 {
    void func_000B8AD0(int a0, int a1);
};

struct S_0002EE30_Child {
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
    virtual void v13(int a0);
};

struct S_0002EE30_Model {
    char pad0[0x174];
    char *f174;
};

/* BmxBaseVehicle */
struct C_0002EE30 {
    void *vtbl;
    char pad4[0x1E4];
    C_000B8AD0 *f1E8;
    char pad1EC[0x30];
    S_0002EE30_Child *f21C;
    char pad220[0x10];
    S_0002EE30_Model *f230;
    char pad234[0x23C];
    int f470;
    char pad474[0x154];
    int f5C8;
    char pad5CC[0x138];
    int f704;
    char pad708[4];
    int f70C;
    void func_0002AAA0(int a0);
    void func_0002A6B0(int a0);
    void func_0002D730(int a0);
    void func_0002EB10();
    int func_0002EE30(int a0);
};

struct S_0002F6C0_Global {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(int); virtual void v8();
};
extern S_0002F6C0_Global *D_002EFDB8;
struct S_0002F6C0_Obj {
    virtual void v0(void *, int);
    virtual void v1(void *);
};
struct S_0002F6C0_Camera {
    void func_0012AC20(void *, void *, void *, void *, void *);
};
struct C_0002F6C0 {
    char pad0[0x30];
    S_0002F6C0_Camera *f30;
    char pad34[0x20];
    S_0002F6C0_Obj *f54;
    char pad58[8];
    S_0002F6C0_Obj *f60;
    S_0002F6C0_Obj *f64;
    char pad68[4];
    int f6c;
    void func_0012B7D0(void *, int, int, int, int);
    void func_0002F6C0();
    void func_0002F7B0();
    void func_0002F990();
};

struct C_0002F450 {
    char pad0[0x30];
    S_0002F6C0_Camera *f30;
    char pad34[0x1c];
    S_0002F6C0_Obj *f50;
    char pad54[4];
    S_0002F6C0_Obj *f58;
    S_0002F6C0_Obj *f5c;
    char pad60[0xc];
    int f6c;
    void func_0012B7D0(void *, int, int, int, int);
    void func_0002F450(int a0);
};

struct C_0002F8A0 {
    char pad0[0x30];
    S_0002F6C0_Camera *f30;
    char pad34[0x1c];
    S_0002F6C0_Obj *f50;
    char pad54[0x18];
    int f6c;
    void func_0012B7D0(void *, int, int, int, int);
    void func_0002F8A0();
};

struct C_0002F190 {
    float m[12];
    C_0002F190 *func_0002F190(void);
};

struct BmxCameraController_0002EF20 {
    void *vtbl;
    char pad4[0x34 - 4];
    int unk34;
    char pad38[4];
    int unk3C;
    int unk40;
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    int unk54;
    int unk58;
    int unk5C;
    int unk60;
    int unk64;
    int unk68;
    int unk6C;
    int unk70;
    int unk74;
    void func_0012B550(int a0);
    void func_0012B5E0(int a0);
    void func_0002F1C0(int a0);
    BmxCameraController_0002EF20 *func_0002EF20(int a0);
};

void C_0002EE30::func_0002EB10()
{
    S_2EB10_T *t = (S_2EB10_T *)this;
    const char *s;

    if (D_002A1194 < 0) {
        S_2EB10_G *g = (S_2EB10_G *)D_002A8490->f18;
        int id = g->counter;
        D_002A1194 = id;
        g->counter = id + 1;
    }
    S_2EB10_V4 v;
    t->f230->func_00197E70(&v.x);
    func_0013E260((void *)D_002A8490->f18, D_002A1194, D_002768DC);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_002768C8, (double)t->f1e0->f28 * D_002768D8);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_002768B8, (double)t->f1e0->f238);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_002768A8, (double)t->f1e0->f23c);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_00276898, (double)t->f1e0->f240);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_0027688C, (double)v.x);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_00276880, (double)v.y);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_00276874, (double)v.z);
    if (t->f470 != 0) {
        switch (t->f480) {
        case 0:
            s = D_0027686C;
            break;
        case 1:
            s = D_00276864;
            break;
        case 2:
            s = D_0027685C;
            break;
        case 3:
            s = D_00276854;
            break;
        default:
            s = D_0027684C;
            break;
        }
    } else {
        s = D_00276844;
    }
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_00276830, s);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_00276810, t->f478 ? D_00276828 : D_00276820);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_002767F8, t->f1e8->f50 ? D_00276828 : D_00276820);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_002767E0, t->f1e8->f54 ? D_00276828 : D_00276820);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_002767D0, t->f1f0->f30 ? D_00276828 : D_00276820);
    func_0013E1F0((void *)D_002A8490->f18, D_002A1194, D_002767BC, (double)(t->f784 * t->f778));
}

int C_0002EE30::func_0002EE30(int a0)
{
    if ((D_002B7EAC & 1) == 0) {
        D_002B7EAC |= 1;
        D_002B7EA8 = D_002A7CB8->func_00026500((int)&D_002768E4, -1);
    }
    ((C_000264C0 *)((char *)this + 0x1a0))->func_000264C0((char *)this + 0x160);
    ((C_000264C0 *)((char *)this + 0x160))->func_000264C0(f230->f174 + 0xb0);
    if (f5C8 != 0) {
        func_0002AAA0(a0);
    } else if (f470 != 0) {
        func_0002A6B0(a0);
    } else if (f704 == 0 && f70C == 0) {
        func_0002D730(a0);
    } else {
        f1E8->func_000B8AD0(0, 0);
        f21C->v13(a0);
    }
    if (D_002A8490->f18 != 0) {
        func_0002EB10();
    }
    return 1;
}

BmxCameraController_0002EF20 *BmxCameraController_0002EF20::func_0002EF20(int a0)
{
    func_0012B550(a0);
    unk70 = 0;
    unk34 = 0;
    unk68 = 0;
    unk50 = 0;
    unk58 = 0;
    unk5C = 0;
    unk60 = 0;
    unk54 = 0;
    unk64 = 0;
    unk6C = 0;
    unk3C = 0;
    unk40 = 0;
    unk44 = 0;
    unk48 = 0;
    unk4C = 0;
    unk74 = 0;
    vtbl = &D_002768FC;
    return this;
}

void S_2EF70_This::func_0002EF70(S_2EF70_Veh *veh, int idx)
{
    if (veh == 0) {
        S_2EF70_Ent *e;
        e = (S_2EF70_Ent *)func_001E8A44(0x3c);
        f40 = e ? e->func_001362A0(-1.0f, 1.0f, 0, D_002A8490->f8->func_00135E80(), 0, 0.2f) : 0;
        e = (S_2EF70_Ent *)func_001E8A44(0x3c);
        f44 = e ? e->func_001362A0(-1.0f, 1.0f, 0, D_002A8490->f8->func_00135E80(), 1, 0.2f) : 0;
        e = (S_2EF70_Ent *)func_001E8A44(0x3c);
        f48 = e ? e->func_001362A0(-2.0f, 2.0f, 0, D_002A8490->f8->func_00135E80(), 2, 0.4f) : 0;
        e = (S_2EF70_Ent *)func_001E8A44(0x3c);
        f4c = e ? e->func_001362A0(-2.0f, 2.0f, 0, D_002A8490->f8->func_00135E80(), 5, 0.4f) : 0;
        if (D_002A8490->f8->items[idx]) {
            D_002A8490->f8->items[idx]->func_0015B060((int)f40, 0.01f, 0.01f);
            D_002A8490->f8->items[idx]->func_0015B060((int)f44, 0.01f, 0.01f);
            D_002A8490->f8->items[idx]->func_0015B060((int)f48, 0.01f, 0.01f);
            D_002A8490->f8->items[idx]->func_0015B060((int)f4c, 0.01f, 0.01f);
        }
    } else {
        f50->func_000559E0(veh->f1e0, 3.0f, veh->f1ec->f3c);
        f54->func_0009FAD0(veh->f1e0, 3.0f, veh->f1ec->f3c);
        f34 = veh;
        f50->func_0009FAC0(veh);
        f50->func_000560A0();
        f54->func_0009FAC0(veh);
        f60->func_00195160(veh->fa00->f4, 3.0f, 70.0f);
        f68 = idx;
    }
}

C_0002F190 *C_0002F190::func_0002F190(void)
{
    unsigned int *p;

    p = (unsigned int *)&m[0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (unsigned int *)&m[4];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (unsigned int *)&m[8];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    return this;
}

extern "C" void* __cdecl memset(void*, int, unsigned int);
void BmxCameraController_0002EF20::func_0002F1C0(int a0) {
 if(unk6C==0) {
 S_0002F1C0_Params p;
 p.a=((S_0002F1C0_Input*)D_002A8490->f8)->query(30,2,63,*(int*)((char*)unk34+0x1218)-1);
 p.b=((S_0002F1C0_Input*)D_002A8490->f8)->query(31,2,63,*(int*)((char*)unk34+0x1218)-1);
 if(p.a!=0 && p.b!=0) p.c=1; else p.c=0;
 p.z=-*(float*)(*(char**)((char*)unk34+0x9f0)+0x24);
 p.w=*(float*)(*(char**)((char*)unk34+0x9f4)+0x24);
 p.w=-p.w;
 ((S_0002F1C0_Camera*)unk50)->func_00059290(p,a0);
 } else if(unk6C==8) {
 S_0002F1C0_Params p;
 p.a=((S_0002F1C0_Input*)D_002A8490->f8)->query(30,2,63,*(int*)((char*)unk34+0x1218)-1);
 p.b=((S_0002F1C0_Input*)D_002A8490->f8)->query(31,2,63,*(int*)((char*)unk34+0x1218)-1);
 if(p.a!=0 && p.b!=0) p.c=1; else p.c=0;
 p.x=-*(float*)(*(char**)((char*)unk34+0x9e8)+0x24); p.y=-*(float*)(*(char**)((char*)unk34+0x9ec)+0x24);
 p.z=*(float*)(*(char**)((char*)unk34+0x9f0)+0x24);
 p.z=-p.z;
 p.w=*(float*)(*(char**)((char*)unk34+0x9f4)+0x24);
 p.w=-p.w;
 ((S_0002F1C0_Camera*)unk54)->func_0009FE80(p,a0);
 } else if(unk6C==2) {
 S_0002F1C0_Params p;
 p.a=((S_0002F1C0_Input*)D_002A8490->f8)->query(30,2,63,0);
 p.b=((S_0002F1C0_Input*)D_002A8490->f8)->query(31,2,63,0);
 p.c=((S_0002F1C0_Input*)D_002A8490->f8)->query(32,2,63,0);
 p.d=((S_0002F1C0_Input*)D_002A8490->f8)->query(33,2,63,0);
 p.e=0;
 if(unk34) {
 p.x=*(float*)(*(char**)((char*)unk34+0x9e8)+0x24); p.y=*(float*)(*(char**)((char*)unk34+0x9ec)+0x24); p.z=*(float*)(*(char**)((char*)unk34+0x9f0)+0x24); p.w=-*(float*)(*(char**)((char*)unk34+0x9f4)+0x24);
 } else {
 p.x=*(float*)(unk40+0x24); p.y=*(float*)(unk44+0x24); p.z=*(float*)(unk48+0x24); p.w=-*(float*)(unk4C+0x24);
 }
 ((S_0002F1C0_Virtual*)unk58)->update(&p);
 } else if(unk6C==7) {
 S_0002F1C0_Params p;
 memset(&p,0,sizeof(p));
 p.e=0;
 if(unk34) {
 p.x=*(float*)(*(char**)((char*)unk34+0x9e8)+0x24); p.y=*(float*)(*(char**)((char*)unk34+0x9ec)+0x24); p.z=*(float*)(*(char**)((char*)unk34+0x9f0)+0x24); p.w=-*(float*)(*(char**)((char*)unk34+0x9f4)+0x24);
 } else {
 p.x=*(float*)(unk40+0x24); p.y=*(float*)(unk44+0x24); p.z=*(float*)(unk48+0x24); p.w=-*(float*)(unk4C+0x24);
 }
 ((S_0002F1C0_Virtual*)unk58)->update(&p);
 }
 func_0012B5E0(a0);
}

void C_0002F450::func_0002F450(int a0)
{
    float m[12];
    float other[12];
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (a0 == 0) {
        f6c = a0;
        func_0012B7D0(f50, 0, 0, 0, 0);
        m[2] = 0.0f; m[1] = 0.0f; m[0] = 0.0f; m[3] = 1.0f;
        m[6] = 0.0f; m[5] = 0.0f; m[4] = 0.0f; m[7] = 1.0f;
        m[10] = 0.0f; m[9] = 0.0f; m[8] = 0.0f; m[11] = 1.0f;
        f50->v1(m);
        f30->func_0012AC20(m, m+4, m+8, other, other+1);
        f50->v0(m, 0);
    } else if (a0 == 6) {
        f6c = a0;
        func_0012B7D0(f5c, 0, 0, 0, 0);
        m[2] = 0.0f; m[1] = 0.0f; m[0] = 0.0f; m[3] = 1.0f;
        m[6] = 0.0f; m[5] = 0.0f; m[4] = 0.0f; m[7] = 1.0f;
        m[10] = 0.0f; m[9] = 0.0f; m[8] = 0.0f; m[11] = 1.0f;
        f5c->v1(m);
        f30->func_0012AC20(m, m+4, m+8, other, other+1);
        f5c->v0(m, 0);
    } else if (a0 == 7) {
        f6c = a0;
        func_0012B7D0(f58, 0, 0, 0, 0);
        m[2] = 0.0f; m[1] = 0.0f; m[0] = 0.0f; m[3] = 1.0f;
        m[6] = 0.0f; m[5] = 0.0f; m[4] = 0.0f; m[7] = 1.0f;
        m[10] = 0.0f; m[9] = 0.0f; m[8] = 0.0f; m[11] = 1.0f;
        f58->v1(m);
        f30->func_0012AC20(m, m+4, m+8, other, other+1);
        f58->v0(m, 0);
    }
}

void C_0002F6C0::func_0002F6C0()
{
    float m[12];
    float other[12];
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (f54) {
        f6c = 8;
        func_0012B7D0(f54, 0, 0, 0, 0);
        m[0] = m[1] = m[2] = 0.0f; m[3] = 1.0f;
        m[4] = m[5] = m[6] = 0.0f; m[7] = 1.0f;
        m[8] = m[9] = m[10] = 0.0f; m[11] = 1.0f;
        f54->v1(m);
        f30->func_0012AC20(m, m+4, m+8, other, other+1);
        f54->v0(m, 0);
    }
}

void C_0002F6C0::func_0002F7B0()
{
    float m[12];
    float other[12];
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (f60) {
        f6c = 9;
        func_0012B7D0(f60, 0, 0, 0, 0);
        m[2] = 0.0f; m[1] = 0.0f; m[0] = 0.0f; m[3] = 1.0f;
        m[6] = 0.0f; m[5] = 0.0f; m[4] = 0.0f; m[7] = 1.0f;
        m[10] = 0.0f; m[9] = 0.0f; m[8] = 0.0f; m[11] = 1.0f;
        f60->v1(m);
        f30->func_0012AC20(m, m + 4, m + 8, other, other + 1);
        f60->v0(m, 0);
    }
}

void C_0002F8A0::func_0002F8A0()
{
    float m[12];
    float other[12];
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (f50) {
        f6c = 0;
        func_0012B7D0(f50, 0, 0, 0, 0);
        m[2] = 0.0f; m[1] = 0.0f; m[0] = 0.0f; m[3] = 1.0f;
        m[6] = 0.0f; m[5] = 0.0f; m[4] = 0.0f; m[7] = 1.0f;
        m[10] = 0.0f; m[9] = 0.0f; m[8] = 0.0f; m[11] = 1.0f;
        f50->v1(m);
        f30->func_0012AC20(m, m+4, m+8, other, other+1);
        f50->v0(m, 0);
    }
}

void C_0002F6C0::func_0002F990()
{
    float m[12];
    float other[12];
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (f64) {
        f6c = 10;
        func_0012B7D0(f64, 0, 0, 0, 0);
        m[2] = 0.0f; m[1] = 0.0f; m[0] = 0.0f; m[3] = 1.0f;
        m[6] = 0.0f; m[5] = 0.0f; m[4] = 0.0f; m[7] = 1.0f;
        m[10] = 0.0f; m[9] = 0.0f; m[8] = 0.0f; m[11] = 1.0f;
        f64->v1(m);
        f30->func_0012AC20(m, m+4, m+8, other, other+1);
        f64->v0(m, 0);
    }
}

