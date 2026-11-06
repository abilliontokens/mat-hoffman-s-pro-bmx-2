/* 9 functions from 0x00155890 to 0x00156880, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001567E0 {
    undefined4 func_001567E0(byte param_1);
};

extern int D_00286F6C;
extern int D_00286DD4;
extern int D_002754B8;
extern int D_00150D30;

extern "C" void __stdcall func_001C6DA0(int param_1, int param_2);
void func_001E891B(void *ptr);

struct C_001B59E0 {
    void func_001B59E0(void);
};

struct C_00156800 {
    void *vtbl;
    C_00156800 *func_00156800(void);
};

struct S_00156030_A {
    char pad_0[0x108];
    int unk108;
};

struct S_00156030_B {
    char pad_0[0x10];
    int unk10;
};

struct S_00156030_C {
    void func_0008AB90(int param_1);
};

struct S_00156030_Player {
    char pad_0[0x3c];
    S_00156030_B *unk3C;
    char pad_40[0xc4 - 0x40];
    int unkC4;
    char pad_C8[0x384 - 0xc8];
    S_00156030_C *unk384;
    int unk388;
    char pad_38C[0x39c - 0x38c];
    S_00156030_A *unk39C;
    char pad_3A0[0x3bc - 0x3a0];
    int unk3BC;
    int unk3C0;
    char pad_3C4[0x3d4 - 0x3c4];
    int unk3D4;
    int unk3D8;
    void func_001C6DA0(int param_1, int param_2);
    void Flinch(void)
    {
        if (unk39C->unk108 != 0) {
            func_001C6DA0(unk3D8, 1);
        } else {
            func_001C6DA0(unk3D4, 1);
        }
    }
    void Land(void)
    {
        if (unk39C->unk108 != 0) {
            if (unk3C->unk10 != 0) {
                unk384->func_0008AB90(unk388);
            } else if (unkC4 != unk3C0) {
                func_001C6DA0(unk3C0, 1);
            }
        }
    }
    void Settle(void)
    {
        if (unk3C->unk10 != 0) {
            func_001C6DA0(unk3BC, 1);
        }
    }
};

struct TikiPlayerFlinchState {
    char pad_0[8];
    S_00156030_Player *unk8;
    void func_001560A0(void);
};

struct TikiPlayerAirborneState {
    char pad_0[8];
    S_00156030_Player *unk8;
    S_00156030_Player *GetPlayer(void) { return unk8; }
    int func_00156030(int param_1);
};

struct C_002754B8 {
    void *vtbl;
    ~C_002754B8() { vtbl = (void *)&D_002754B8; }
    static void operator delete(void *ptr) { func_001E891B(ptr); }
};

struct S_00156740_Sub {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
};

struct C_00156740 {
    void *vtbl;
    char pad_4[0x384 - 4];
    S_00156740_Sub *unk384;
    void *unk388;
    void *unk38C;
    void *unk390;
    void *unk394;
    void *unk398;
    void func_00156740(void);
    void func_001C75A0(void);
};

struct S_00156820_Base {
    void func_001BBAA0(void *param_1, int *param_2);
};

struct C_00156840 {
    void *vtbl;
    char pad4[4];
    void *unk8;
    int func_00156840(void);
};

struct C_001D0C30 {
    virtual void dummy0();
    virtual int dummy1();
    C_001D0C30 *func_001D0C30(void);
};

void *func_001E8A44(int size);

#include <string.h>
int func_001ADCC0(char *dst, int size, const char *fmt, ...);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
extern char D_00275630[], D_00275AE4[], D_00275678[];
extern char D_002A5EA0[], D_002A60B0[], D_002A45E0[], D_002A5870[], D_002A5FA8[];
extern char D_00286F50[], D_00286F40[], D_00286F30[], D_00286F18[], D_00286F00[];
extern char D_00286EEC[], D_00286ED0[], D_00286EB0[], D_00286EA0[], D_0027AEEC[];
extern int D_00286E50, D_00286E60, D_00286E74, D_00286E84, D_00286E94;
struct S_1561_V4 { float x, y, z, w; };
struct S_1561_Vec4 : S_1561_V4 { S_1561_Vec4() { x = y = z = 0; w = 1; } };
extern S_1561_V4 D_002A79B8;
extern S_1561_V4 D_002A79C8;
extern S_1561_V4 D_002A79D8;
struct S_1561_Obj99 { S_1561_V4 func_00199B00(int a); };
struct S_1561_1A4 { char pad0[4]; S_1561_Obj99 *unk4; };
struct S_1561_Arg1Sub { char pad0[0x1a4]; S_1561_1A4 *unk1A4; };
struct S_1561_Arg1 {
    char pad0[0x2c];
    S_1561_Arg1Sub *unk2C;
    void func_00150900(S_1561_V4 *a, S_1561_V4 *b);
};
struct S_1561_Stream { void func_00168BE0(const char *key, const char *def, char *dst, int size); };
struct S_1561_Cam { void func_00199110(int a, void *pos, void *dir, int b, int c, int d); };
struct S_1561_F3C { char pad0[4]; S_1561_Cam *unk4; };
struct S_1561_Anim { char pad0[0x54]; volatile int unk54; };
struct S_1561_Machine { S_1561_Machine *func_001AC080(void); void func_001AC0A0(void *a, const char *name); };
struct S_1561_State { void *vtbl; int kind; void *owner; };
static __forceinline S_1561_State *Init1561A(void *p) { S_1561_State *s = (S_1561_State *)p; s->vtbl = &D_00286E50; s->kind = 0; s->owner = 0; return s; }
static __forceinline S_1561_State *Init1561B(void *p) { S_1561_State *s = (S_1561_State *)p; s->vtbl = &D_00286E60; s->kind = 1; s->owner = 0; return s; }
static __forceinline S_1561_State *Init1561C(void *p) { S_1561_State *s = (S_1561_State *)p; s->vtbl = &D_00286E74; s->kind = 3; s->owner = 0; return s; }
static __forceinline S_1561_State *Init1561D(void *p) { S_1561_State *s = (S_1561_State *)p; s->vtbl = &D_00286E84; s->kind = 4; s->owner = 0; return s; }
static __forceinline S_1561_State *Init1561E(void *p) { S_1561_State *s = (S_1561_State *)p; s->vtbl = &D_00286E94; s->kind = 5; s->owner = 0; return s; }
template <class T> inline T min_1561(T a, T b) { return a > b ? b : a; }
#define CopyPath1561(dst, src, len, lim, res) { int ma, mb, n; len = strlen(src); lim = 0x103; ma = lim; mb = len; res = ma > mb ? mb : ma; n = res; func_001E8920(dst, src, n); (dst)[n] = 0; }
struct C_1561 {
    char pad0[0x3c];
    S_1561_F3C *unk3C;
    char pad40[0xc0 - 0x40];
    S_1561_Anim *unkC0;
    char padC4[0x384 - 0xc4];
    S_1561_Machine * volatile unk384;
    S_1561_State * volatile unk388;
    S_1561_State * volatile unk38C;
    S_1561_State * volatile unk390;
    S_1561_State * volatile unk394;
    S_1561_State * volatile unk398;
    S_1561_Arg1 *unk39C;
    char pad3A0[0x3bc - 0x3a0];
    volatile int unk3BC[9];
    void func_001C76B0(char *buf, int a, S_1561_V4 *pos, int b, int c, S_1561_V4 v1, S_1561_V4 v2);
    int func_001C6E30(const char *name);
    void func_001561A0(S_1561_Stream * volatile stream, S_1561_Arg1 * volatile arg1);
};

struct C_00156820 {
    int func_00156820(int param_1, void *param_2);
};


int TikiPlayerAirborneState::func_00156030(int param_1)
{
    S_00156030_Player *p = GetPlayer();
    if (p->unk39C->unk108 != 0) {
        if (p->unk3C->unk10 != 0) {
            p->unk384->func_0008AB90(p->unk388);
        } else if (p->unkC4 != p->unk3C0) {
            func_001C6DA0(p->unk3C0, 1);
        }
    }
    p = GetPlayer();
    if (p->unk3C->unk10 != 0) {
        func_001C6DA0(p->unk3BC, 1);
    }
    return 1;
}

void TikiPlayerFlinchState::func_001560A0(void)
{
    unk8->Flinch();
}

void C_1561::func_001561A0(S_1561_Stream *stream, S_1561_Arg1 *arg1)
{
    struct { char save1[0x104]; char save2[0x104]; char buf[0x104]; } L;
    S_1561_Vec4 vA;
    S_1561_V4 vC;
    S_1561_Vec4 vB;
    struct { C_1561 * volatile self; volatile int s0; volatile int s1; volatile int s2; } t;
    void *mem;
    t.self = this;
    arg1->func_00150900(&vA, &vB);
    if (arg1->unk2C == 0) {
        vC = D_002A79B8;
    } else {
        vC = arg1->unk2C->unk1A4->unk4->func_00199B00(0);
    }
    stream->func_00168BE0(D_00275AE4, D_00275630, L.buf, 0x104);
    t.self->unk39C = arg1;
    CopyPath1561(L.save1, D_002A5EA0, t.s0, t.s1, t.s2);
    CopyPath1561(L.save2, D_002A60B0, t.s2, t.s1, t.s0);
    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5870, D_002A45E0);
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    t.self->func_001C76B0(L.buf, 0, &vB, 0, 0, D_002A79C8, D_002A79C8);
    t.self->unk3C->unk4->func_00199110(0, &vA, &D_002A79D8, 0, 1, 0);
    mem = func_001E8A44(0x6c);
    t.self->unk384 = mem ? ((S_1561_Machine *)mem)->func_001AC080() : 0;
    mem = func_001E8A44(0x10);
    t.self->unk388 = mem ? Init1561A(mem) : 0;
    t.self->unk388->owner = t.self;
    mem = func_001E8A44(0xc);
    t.self->unk38C = mem ? Init1561B(mem) : 0;
    t.self->unk38C->owner = t.self;
    mem = func_001E8A44(0xc);
    t.self->unk390 = mem ? Init1561C(mem) : 0;
    t.self->unk390->owner = t.self;
    mem = func_001E8A44(0xc);
    t.self->unk394 = mem ? Init1561D(mem) : 0;
    t.self->unk394->owner = t.self;
    mem = func_001E8A44(0xc);
    t.self->unk398 = mem ? Init1561E(mem) : 0;
    t.self->unk398->owner = t.self;
    t.self->unk384->func_001AC0A0(t.self->unk388, D_0027AEEC);
    t.self->unk3BC[0] = t.self->func_001C6E30(D_00286F50);
    t.self->unkC0[0].unk54 = 1;
    t.self->unk3BC[1] = t.self->func_001C6E30(D_00286F40);
    t.self->unkC0[1].unk54 = 1;
    t.self->unk3BC[2] = t.self->func_001C6E30(D_00286F30);
    t.self->unkC0[2].unk54 = 0;
    t.self->unk3BC[3] = t.self->func_001C6E30(D_00286F18);
    t.self->unkC0[3].unk54 = 0;
    t.self->unk3BC[4] = t.self->func_001C6E30(D_00286F00);
    t.self->unkC0[4].unk54 = 0;
    t.self->unk3BC[5] = t.self->func_001C6E30(D_00286EEC);
    t.self->unkC0[5].unk54 = 1;
    t.self->unk3BC[6] = t.self->func_001C6E30(D_00286ED0);
    t.self->unkC0[6].unk54 = 0;
    t.self->unk3BC[7] = t.self->func_001C6E30(D_00286EB0);
    t.self->unkC0[7].unk54 = 1;
    t.self->unk3BC[8] = t.self->func_001C6E30(D_00286EA0);
    t.self->unkC0[8].unk54 = 0;
    CopyPath1561(D_002A5EA0, L.save1, t.s2, t.s1, t.s0);
    CopyPath1561(D_002A60B0, L.save2, t.s2, t.s1, t.s0);
}

void C_00156740::func_00156740(void)
{
    vtbl = (void *)&D_00286DD4;
    if (unk384 != 0) {
        unk384->dummy2();
    }
    if (unk388 != 0) {
        delete (C_002754B8 *)unk388;
    }
    if (unk38C != 0) {
        delete (C_002754B8 *)unk38C;
    }
    if (unk390 != 0) {
        delete (C_002754B8 *)unk390;
    }
    if (unk394 != 0) {
        delete (C_002754B8 *)unk394;
    }
    if (unk398 != 0) {
        delete (C_002754B8 *)unk398;
    }
    func_001C75A0();
}

undefined4 C_001567E0::func_001567E0(byte param_1)
{
  int func_00156740(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00156740();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_00156800 *C_00156800::func_00156800(void)
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_00286F6C;
    return this;
}

int C_00156820::func_00156820(int param_1, void *param_2)
{
    ((S_00156820_Base *)param_2)->func_001BBAA0((char *)this + 0x10c, &D_00150D30);
    return 1;
}

int C_00156840::func_00156840(void)
{
    if (unk8 == 0) {
        C_001D0C30 *p = (C_001D0C30 *)func_001E8A44(0xd1c);
        p = p != 0 ? p->func_001D0C30() : 0;
        unk8 = p;
        if (p->dummy1() == 0) {
            return 0;
        }
    }
    return 1;
}

