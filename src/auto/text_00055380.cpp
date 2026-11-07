/* 8 functions from 0x00055380 to 0x000562C0, found by Ghidra. */
#include "common.h"

extern const float D_00277D04;

extern int D_00277CF4;

struct C_00168B90 {
    int func_00168B90(const char *name, float *out);
    void func_00169710(const char *name);
};
extern char D_00277F24[], D_00277F20[], D_002769F8[], D_00277F10[], D_00277EFC[], D_00277EE0[], D_00277ED4[], D_00277EC8[], D_00277EB8[], D_00277EAC[], D_00277E98[], D_00277E88[], D_00277E80[], D_00277E6C[], D_00277E58[], D_00277E48[], D_00277E38[], D_00277E20[], D_00277E14[], D_00277E04[], D_00277DF0[], D_00277DDC[], D_00277DCC[], D_00277DBC[], D_00277DA8[], D_00277D94[], D_00277D80[], D_00277D70[], D_00277D5C[], D_00277D40[], D_00277D2C[], D_00277D18[], D_00277D08[];
extern float D_00275998, D_00277EA8;

struct C_00055D10 {
    char pad0[0x44];
    float unk44;
    char pad48[0x14];
    float unk5C, unk60;
    char pad64[0xDC];
    float unk140, unk144, unk148, unk14C, unk150, unk154, unk158, unk15C, unk160, unk164, unk168, unk16C, unk170, unk174, unk178;
    char pad17C[4];
    float unk180;
    char pad184[4];
    float unk188;
    char pad18C[8];
    float unk194;
    char pad198[4];
    float unk19C, unk1A0, unk1A4, unk1A8, unk1AC, unk1B0, unk1B4, unk1B8, unk1BC, unk1C0, unk1C4;
    void func_00055D10(C_00168B90 *c);
};

/* base class: CameraBehavior */
struct C_0012B540 {
    int unk0;
    void func_0012B540(void);
};

struct S_00055910_Part {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_00055910 : C_0012B540 {
    char pad4[0x10];
    S_00055910_Part *unk14;
    S_00055910_Part *unk18;
    char pad1C[0x30];
    char *unk4C;
    char pad50[0xE0];
    char *unk130;
    char *unk134;
    char pad138[0xD4];
    S_00055910_Part *unk20C;
    S_00055910_Part *unk210;
    S_00055910_Part *unk214;
    S_00055910_Part *unk218;
    void func_00055910(void);
};

struct S_000560A0_Inner {
    char pad0[0x3C];
    float unk3C;
};

struct S_000560A0_Owner {
    char pad0[0x1E0];
    int unk1E0;
    char pad1E4[8];
    S_000560A0_Inner *unk1EC;
};

struct C_000560A0 {
    char pad0[4];
    S_000560A0_Owner *unk4;
    char pad8[4];
    int unkC;
    int unk10;
    char pad14[0x2C];
    int unk40;
    char pad44[0x20];
    float unk64;
    int unk68;
    char pad6C[0x15C];
    int unk1C8;
    int unk1CC;
    int unk1D0;
    int unk1D4;
    int unk1D8;
    char pad1DC[8];
    int unk1E4;
    int unk1E8;
    void func_000559E0(int a0, int a1, float a2);
    void func_000560A0();
};

struct C_00056080 {
    char pad0[0x18C];
    int unk18C;
    int unk190;
    char pad194[0x48];
    int unk1DC;
    void func_00056080(void);
};

struct S_00056100_Quat {
    float x, y, z, w;
    S_00056100_Quat() { z = 0; y = 0; x = 0; w = 1.0f; }
 S_00056100_Quat operator*(float s) const { S_00056100_Quat r; r.x=x*s;r.y=y*s;r.z=z*s;return r; }
 S_00056100_Quat operator+(const S_00056100_Quat &b) const { S_00056100_Quat r; r.x=x+b.x;r.y=y+b.y;r.z=z+b.z;return r; }
 S_00056100_Quat operator-(const S_00056100_Quat &b) const { S_00056100_Quat r; r.x=x-b.x;r.y=y-b.y;r.z=z-b.z;return r; }
};
static inline S_00056100_Quat operator*(float s, const S_00056100_Quat &v) { S_00056100_Quat r; r.x=s*v.x;r.y=s*v.y;r.z=s*v.z;return r; }

struct S_00056100_Node {
    char pad0[0x60];
    void *unk60;
    char pad64[0x38];
    void *unk9C;
    char padA0[7];
    unsigned char unkA7;
    S_00056100_Node *func_001A4A50(int a0);
    S_00056100_Node *func_0014AB30(int a0);
    void func_00129920(int a0);
    void func_001334E0(int a0);
    void func_00133ED0(void);
    void func_001332A0(void);
    void func_00133140(int a0, int a1);
    void func_001A57E0(S_00056100_Quat a0, int a1, int a2);
    void func_0014C1C0(int a0, int a1, int a2);
    void func_0014AC30(S_00056100_Quat *a0, int a1);
 void func_001A4AE0(S_00056100_Quat *,int);
 float func_00133F10(int);
};

struct C_00056100 {
    char pad0[0x14];
    S_00056100_Node *unk14;
    S_00056100_Node *unk18;
    char pad1C[0x200];
    int unk21C;
    void func_00056100(S_00056100_Quat a0, int a1);
};

extern "C" void *func_001E8A44(unsigned int size);
void func_000551B0();
extern char D_00055290;
extern S_00056100_Quat D_002A1A64;
extern S_00056100_Quat D_002A1A84;
extern u32 D_002A1A68, D_002A1A6C, D_002A1A70, D_002A1A88, D_002A1A8C, D_002A1A90;

static __forceinline void InitQuat_00055380(S_00056100_Quat *q, int zero)
{
    u32 *p = (u32 *)q;
    p[2] = zero;
    p[1] = zero;
    p[0] = zero;
    p[3] = 0x3f800000;
}

static __forceinline void InitQuatF_00055380(S_00056100_Quat *q)
{
    q->z = 0;
    q->y = 0;
    q->x = 0;
    q->w = 1.0f;
}

static __forceinline void SetU32_00055380(u32 *p, u32 v)
{
    *p = v;
}

static __forceinline void InitTail_00055380(volatile u32 *p)
{
    p[0x5e] = 0x44c80000;
    p[0x60] = 0x44c80000;
    p[0x52] = 0x44c80000;
    p[0x10] = 0;
    p[0x11] = 0x42a00000;
    p[0x12] = 0x42a00000;
    p[0x13] = 0;
    p[0x14] = 0;
    p[0x19] = 0;
    p[0x1a] = 0;
    p[0x15] = 0;
    p[0x16] = 0;
    p[0x2] = 0;
    p[0x4f] = 0;
    p[0x18] = 0x3f800000;
    *(volatile float *)&p[0x53] = 0.34906581f;
    *(volatile float *)&p[0x54] = 0.34906581f;
    p[0x50] = 0x3f860a91;
    p[0x56] = 0x40400000;
    p[0x55] = 0x3f800000;
    p[0x57] = 0x3e32b8c1;
    p[0x58] = 0;
    p[0x4e] = 0;
    p[0x59] = 0x3f800000;
    p[0x5a] = 0x3f800000;
    p[0x5b] = 0;
    p[0x5c] = 0;
    p[0x5d] = 0x3f800000;
    p[0x5f] = 0;
    p[0x61] = 0;
    p[0x62] = 0;
    p[0x63] = 0;
    p[0x64] = 0;
    p[0x51] = 0x44480000;
    p[0x67] = 0x459c4000;
    p[0x65] = 0x3f5f66f1;
    p[0x66] = 0;
    p[0x6a] = 0;
    p[0x6b] = 0;
    p[0x6c] = 0x3fbde44d;
    p[0x6d] = 0x3eb2b8c1;
    p[0x6e] = 0x42700000;
    p[0x6f] = 0x42a00000;
    p[0x70] = 0x3f490fd9;
    p[0x71] = 0x3f800000;
    p[0x72] = 0;
    p[0x73] = 0;
    p[0x74] = 0;
    p[0x75] = 0;
    p[0x76] = 0;
    p[0x77] = 0;
    p[0x78] = 0;
    p[0x79] = 0;
    p[0x7a] = 0;
    p[0x68] = 0x3f000000;
    p[0x69] = 0x3f000000;
}

/* BmxFollowCamera (base class CameraBehavior) */
struct C_00055380 {
    u32 unk0;
    char pad4[4];
    u32 unk8, unkC, unk10, unk14, unk18;
    S_00056100_Quat q1C;
    S_00056100_Quat q2C;
    u32 unk3C, unk40, unk44, unk48, unk4C, unk50, unk54, unk58;
    char pad5C[4];
    u32 unk60, unk64, unk68;
    S_00056100_Quat q6C;
    S_00056100_Quat q7C;
    S_00056100_Quat q8C;
    S_00056100_Quat q9C;
    S_00056100_Quat qAC;
    S_00056100_Quat qBC;
    S_00056100_Quat qCC;
    S_00056100_Quat qDC;
    S_00056100_Quat qEC;
    S_00056100_Quat qFC;
    S_00056100_Quat q10C;
    S_00056100_Quat q11C;
    char pad12C[12];
    u32 unk138, unk13C, unk140, unk144, unk148, unk14C, unk150, unk154, unk158, unk15C;
    u32 unk160, unk164, unk168, unk16C, unk170, unk174, unk178, unk17C, unk180, unk184;
    u32 unk188, unk18C, unk190, unk194, unk198, unk19C, unk1A0, unk1A4, unk1A8, unk1AC;
    u32 unk1B0, unk1B4, unk1B8, unk1BC, unk1C0, unk1C4, unk1C8, unk1CC, unk1D0, unk1D4;
    u32 unk1D8, unk1DC, unk1E0, unk1E4, unk1E8;
    S_00056100_Quat q1EC;
    S_00056100_Quat q1FC;
    u32 unk20C, unk210, unk214, unk218, unk21C;
    C_00055380 *func_0012B510(void);
    C_00055380 *func_00055380(void);
 int func_00055A10(S_00056100_Quat,S_00056100_Quat,S_00056100_Quat,S_00056100_Quat,float);
};

static __forceinline void CopyQ_00055380(S_00056100_Quat *q, const void *src, u32 y, u32 z, u32 w)
{
    u32 *p = (u32 *)q;
    const u32 *s = (const u32 *)src;
    p[0] = s[0];
    p[1] = y;
    p[2] = z;
    p[3] = w;
}

struct VtblStore_00055380 {
    void * volatile p;
    VtblStore_00055380() { p = &D_00277CF4; }
};

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct CameraBehavior_00055380 {
    __forceinline CameraBehavior_00055380() { ((C_00055380 *)this)->func_0012B510(); }
};

static __forceinline void G2_00055380(u32 *a, u32 *b, u32 va, u32 vb)
{
    *a = va;
    *b = vb;
}

static __forceinline void G3_00055380(u32 *a, u32 *b, u32 *c, u32 va, u32 vb, u32 vc)
{
    *a = va;
    *b = vb;
    *c = vc;
}

struct QuatV_00055380 : S_00056100_Quat {
    __forceinline QuatV_00055380() { *(void * volatile *)((char *)this - 0x1c) = &D_00277CF4; z = 0; y = 0; x = 0; w = 1.0f; }
};

struct S_00055380_PodQuat { float x, y, z, w; };

struct Quat_00055380 : S_00056100_Quat {
    Quat_00055380() { z = 0; y = 0; x = 0; w = 1.0f; }
    void operator=(const S_00056100_Quat &q) { *(S_00056100_Quat *)this = q; }
};

struct func_00055380 : CameraBehavior_00055380 {
    void *vtbl_dummy_unused_pad;
    char pad4[4];
    u32 unk8, unkC, unk10, unk14, unk18;
    Quat_00055380 q1C;
    Quat_00055380 q2C;
    u32 unk3C, unk40, unk44, unk48, unk4C, unk50, unk54, unk58;
    char pad5C[4];
    u32 unk60; u32 unk64, unk68;
    Quat_00055380 q6C, q7C, q8C, q9C, qAC, qBC, qCC, qDC, qEC, qFC, q10C, q11C;
    char pad12C[12];
    u32 unk138, unk13C, unk140, unk144, unk148, unk14C, unk150, unk154, unk158, unk15C;
    u32 unk160, unk164, unk168, unk16C, unk170, unk174, unk178, unk17C, unk180, unk184;
    u32 unk188, unk18C, unk190, unk194, unk198, unk19C, unk1A0, unk1A4, unk1A8, unk1AC;
    u32 unk1B0, unk1B4, unk1B8, unk1BC, unk1C0, unk1C4, unk1C8, unk1CC, unk1D0, unk1D4;
    u32 unk1D8, unk1DC, unk1E0, unk1E4, unk1E8;
    Quat_00055380 q1EC, q1FC;
    u32 unk20C, unk210, unk214, unk218, unk21C;
    func_00055380();
};

#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"
struct C_00055A10_Filter { float func_00026A10(float,float); void func_000269B0(float,float,float); };
void func_00055140(S_00056100_Quat *,S_00056100_Quat *);
void C_000559E0_unused();
func_00055380::func_00055380()
{
    vtbl_dummy_unused_pad = &D_00277CF4;
    unkC = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    *(u32 *)&q1C.x = *(u32 *)&D_002A1A64;
    *(u32 *)&q1C.y = D_002A1A68;
    *(u32 *)&q1C.z = D_002A1A6C;
    *(u32 *)&q1C.w = D_002A1A70;
    *(u32 *)&q2C.x = *(u32 *)&D_002A1A64;
    *(u32 *)&q2C.y = D_002A1A68;
    *(u32 *)&q2C.z = D_002A1A6C;
    *(u32 *)&q2C.w = D_002A1A70;
    unk178 = 0x44c80000;
    unk180 = 0x44c80000;
    unk148 = 0x44c80000;
    unk40 = 0;
    unk44 = 0x42a00000;
    unk48 = 0x42a00000;
    unk4C = 0;
    unk50 = 0;
    unk64 = 0;
    unk68 = 0;
    unk54 = 0;
    unk58 = 0;
    unk8 = 0;
    unk13C = 0;
    unk60 = 0x3f800000;
    unk14C = 0x3eb2b8c1;
    unk150 = 0x3eb2b8c1;
    unk140 = 0x3f860a91;
    unk158 = 0x40400000;
    unk154 = 0x3f800000;
    unk15C = 0x3e32b8c1;
    unk160 = 0;
    unk138 = 0;
    unk164 = 0x3f800000;
    unk168 = 0x3f800000;
    unk16C = 0;
    unk170 = 0;
    unk174 = 0x3f800000;
    unk17C = 0;
    unk184 = 0;
    unk188 = 0;
    unk18C = 0;
    unk190 = 0;
    unk144 = 0x44480000;
    unk19C = 0x459c4000;
    unk194 = 0x3f5f66f1;
    unk198 = 0;
    unk1A8 = 0;
    unk1AC = 0;
    unk1B0 = 0x3fbde44d;
    unk1B4 = 0x3eb2b8c1;
    unk1B8 = 0x42700000;
    unk1BC = 0x42a00000;
    unk1C0 = 0x3f490fd9;
    unk1C4 = 0x3f800000;
    unk1C8 = 0;
    unk1CC = 0;
    unk1D0 = 0;
    unk1D4 = 0;
    unk1D8 = 0;
    unk1DC = 0;
    unk1E0 = 0;
    unk1E4 = 0;
    unk1E8 = 0;
    unk1A0 = 0x3f000000;
    unk1A4 = 0x3f000000;
    *(u32 *)&q1EC.x = *(u32 *)&D_002A1A64;
    *(u32 *)&q1EC.y = D_002A1A68;
    *(u32 *)&q1EC.z = D_002A1A6C;
    *(u32 *)&q1EC.w = D_002A1A70;
    *(u32 *)&q6C.x = *(u32 *)&D_002A1A64;
    *(u32 *)&q6C.y = D_002A1A68;
    *(u32 *)&q6C.z = D_002A1A6C;
    *(u32 *)&q6C.w = D_002A1A70;
    *(u32 *)&q7C.x = *(u32 *)&D_002A1A64;
    *(u32 *)&q7C.y = D_002A1A68;
    *(u32 *)&q7C.z = D_002A1A6C;
    *(u32 *)&q7C.w = D_002A1A70;
    *(u32 *)&q8C.x = *(u32 *)&D_002A1A84;
    *(u32 *)&q8C.y = D_002A1A88;
    *(u32 *)&q8C.z = D_002A1A8C;
    *(u32 *)&q8C.w = D_002A1A90;
    *(u32 *)&q9C.x = *(u32 *)&D_002A1A64;
    *(u32 *)&q9C.y = D_002A1A68;
    *(u32 *)&q9C.z = D_002A1A6C;
    *(u32 *)&q9C.w = D_002A1A70;
    *(u32 *)&qBC.x = *(u32 *)&D_002A1A84;
    *(u32 *)&qBC.y = D_002A1A88;
    *(u32 *)&qBC.z = D_002A1A8C;
    *(u32 *)&qBC.w = D_002A1A90;
    *(u32 *)&qAC.x = *(u32 *)&D_002A1A64;
    *(u32 *)&qAC.y = D_002A1A68;
    *(u32 *)&qAC.z = D_002A1A6C;
    *(u32 *)&qAC.w = D_002A1A70;
    unk3C = 0;
    *(u32 *)&qDC.x = *(u32 *)&D_002A1A64;
    *(u32 *)&qDC.y = D_002A1A68;
    *(u32 *)&qDC.z = D_002A1A6C;
    *(u32 *)&qDC.w = D_002A1A70;
    *(u32 *)&qEC.x = *(u32 *)&D_002A1A64;
    *(u32 *)&qEC.y = D_002A1A68;
    *(u32 *)&qEC.z = D_002A1A6C;
    *(u32 *)&qEC.w = D_002A1A70;
    *(u32 *)&q1FC.x = *(u32 *)&D_002A1A64;
    *(u32 *)&q1FC.y = D_002A1A68;
    *(u32 *)&q1FC.z = D_002A1A6C;
    *(u32 *)&q1FC.w = D_002A1A70;
    unk20C = 0;
    unk210 = 0;
    unk214 = 0;
    unk218 = 0;
    unk21C = 0x3f400000;
    *(u32 *)&qCC.x = *(u32 *)&D_002A1A64;
    *(u32 *)&qCC.y = D_002A1A68;
    *(u32 *)&qCC.z = D_002A1A6C;
    *(u32 *)&qCC.w = D_002A1A70;
    *(u32 *)&qFC.x = *(u32 *)&D_002A1A64;
    *(u32 *)&qFC.y = D_002A1A68;
    *(u32 *)&qFC.z = D_002A1A6C;
    *(u32 *)&qFC.w = D_002A1A70;
}

void C_00055910::func_00055910(void)
{
    unk0 = (int)&D_00277CF4;
    if (unk130 != 0) {
        delete unk130;
        unk130 = 0;
    }
    if (unk134 != 0) {
        delete unk134;
        unk134 = 0;
    }
    if (unk14 != 0) {
        unk14->v2();
        unk14 = 0;
    }
    if (unk18 != 0) {
        unk18->v2();
        unk18 = 0;
    }
    if (unk20C != 0) {
        unk20C->v2();
        unk20C = 0;
    }
    if (unk210 != 0) {
        unk210->v2();
        unk210 = 0;
    }
    if (unk214 != 0) {
        unk214->v2();
        unk214 = 0;
    }
    if (unk218 != 0) {
        unk218->v2();
        unk218 = 0;
    }
    if (unk4C != 0) {
        delete unk4C;
        unk4C = 0;
    }
    func_0012B540();
}

void C_000560A0::func_000559E0(int a0, int a1, float a2)
{
    unkC = a0;
    unk10 = 0;
    unk64 = a2 * 1.46666f;
    unk68 = a1;
}

int C_00055380::func_00055A10(S_00056100_Quat a,S_00056100_Quat b,S_00056100_Quat c,S_00056100_Quat d,float dt)
{
 S_00056100_Quat points[2];
 points[0]=b;
 S_00056100_Quat dir;
 points[1]=this->q6C;
 *(int*)this->pad12C=0;
 ((S_00056100_Node*)this->unk14)->func_001A4AE0(&this->q6C,0);
 ((S_00056100_Node*)this->unk14)->func_00133ED0();
 ((S_00056100_Node*)this->unk18)->func_0014AC30(points,0);
 ((S_00056100_Node*)this->unk18)->func_00133ED0();
 ((S_00056100_Node*)this->unk18)->func_00133F10(0);
 if(!*(int*)this->pad12C) ((S_00056100_Node*)this->unk14)->func_00133F10(0);
 if(*(int*)this->pad12C) {
  float t=*(float*)&this->unk21C;
  S_00056100_Quat hit;
  hit=this->q10C+this->q11C*t;
  this->q6C=hit;
 }
 dir=b-this->q6C;
 float squared=dir.z*dir.z;
 squared+=dir.y*dir.y;
 squared+=dir.x*dir.x;
 float distance=AsmSqrtF(squared);
 func_00055140(&dir,&dir);
 if(*(int*)this->pad12C) {
 distance=((C_00055A10_Filter*)*(int*)(this->pad12C+4))->func_00026A10(distance,dt);
 ((C_00055A10_Filter*)*(int*)(this->pad12C+8))->func_000269B0(distance,3.402823466e38f,3.402823466e38f);
 } else {
 distance=((C_00055A10_Filter*)*(int*)(this->pad12C+8))->func_00026A10(distance,dt);
 ((C_00055A10_Filter*)*(int*)(this->pad12C+4))->func_000269B0(distance,3.402823466e38f,3.402823466e38f);
 }
 this->q6C=b-dir*distance;
 return 1;
}

void C_00055D10::func_00055D10(C_00168B90 *c)
{
    c->func_00168B90(D_00277F24, &unk5C);
    c->func_00168B90(D_00277F20, &unk44);
    c->func_00169710(D_002769F8);
    c->func_00168B90(D_00277F10, &unk180);
    unk180 = unk180 * 0.0174532905f;
    c->func_00168B90(D_00277EFC, &unk144);
    unk144 = unk144 * 0.0174532905f;
    c->func_00168B90(D_00277EE0, &unk148);
    unk148 = unk148 * 0.0174532905f;
    c->func_00168B90(D_00277ED4, &unk14C);
    unk14C = unk14C * 0.0174532905f;
    c->func_00168B90(D_00277EC8, &unk150);
    unk150 = unk150 * 0.0174532905f;
    c->func_00168B90(D_00277EB8, &unk140);
    unk140 = unk140 * 0.0174532905f;
    c->func_00168B90(D_00277EAC, &unk154);
    unk154 = unk154 * 59.999996f;
    c->func_00168B90(D_00277E98, &unk160);
    unk160 = unk160 * 0.0174532905f;
    c->func_00168B90(D_00277E88, &unk164);
    unk164 = unk164 * 59.999996f;
    c->func_00168B90(D_00277E80, &unk60);
    unk60 = unk60 * 59.999996f;
    c->func_00168B90(D_00277E6C, &unk158);
    c->func_00168B90(D_00277E58, &unk15C);
    unk15C = unk15C * 0.0174532905f;
    c->func_00168B90(D_00277E48, &unk188);
    c->func_00168B90(D_00277E38, &unk168);
    unk168 = unk168 * 59.999996f;
    c->func_00168B90(D_00277E20, &unk16C);
    c->func_00168B90(D_00277E14, &unk174);
    c->func_00168B90(D_00277E04, &unk170);
    unk174 = unk174 * 59.999996f;
    c->func_00168B90(D_00277DF0, &unk178);
    unk178 = unk178 * 0.0174532905f;
    c->func_00168B90(D_00277DDC, &unk19C);
    unk19C = unk19C * 0.0174532905f;
    c->func_00168B90(D_00277DCC, &unk194);
    unk194 = unk194 * 0.0174532905f;
    c->func_00168B90(D_00277DBC, &unk1A0);
    unk1A0 = unk1A0 * 59.999996f;
    c->func_00168B90(D_00277DA8, &unk1A4);
    unk1A4 = unk1A4 * 59.999996f;
    c->func_00168B90(D_00277D94, &unk1A8);
    unk1A8 = unk1A8 * 0.0174532905f;
    c->func_00168B90(D_00277D80, &unk1AC);
    unk1AC = unk1AC * 0.0174532905f;
    c->func_00168B90(D_00277D70, &unk1B8);
    c->func_00168B90(D_00277D5C, &unk1BC);
    unk1BC = unk1BC * 59.999996f;
    c->func_00168B90(D_00277D40, &unk1C0);
    unk1C0 = unk1C0 * 0.0174532905f;
    c->func_00168B90(D_00277D2C, &unk1B0);
    unk1B0 = unk1B0 * 0.0174532905f;
    c->func_00168B90(D_00277D18, &unk1B4);
    unk1B4 = unk1B4 * 0.0174532905f;
    c->func_00168B90(D_00277D08, &unk1C4);
}

void C_00056080::func_00056080(void) {
    unk18C = 0;
    unk190 = 0;
    unk1DC = 0;
}

void C_000560A0::func_000560A0()
{
    float f;
    unk40 = 1;
    unk1C8 = 0;
    unk1CC = 0;
    unk1D0 = 0;
    unk1D4 = 0;
    unk1D8 = 0;
    unk1E4 = 0;
    unk1E8 = 0;
    f = unk4->unk1EC->unk3C * 1.46666f;
    unkC = unk4->unk1E0;
    unk10 = 0;
    unk68 = 0x40400000;
    unk64 = f;
}

void C_00056100::func_00056100(S_00056100_Quat a0, int a1)
{
    if (unk14 == 0) {
        void *m = func_001E8A44(0x120);
        unk14 = m ? ((S_00056100_Node *)m)->func_001A4A50(1) : 0;
        unk14->func_00129920(2);
        unk14->unk60 = this;
        unk14->unk9C = (void *)func_000551B0;
        unk14->func_001334E0(1);
        unk14->unkA7 |= 1;
        unk14->func_001A57E0(D_002A1A64, unk21C, 0);
        unk14->func_00133ED0();
        unk14->func_001332A0();
        unk14->func_00133140(a1, 2);
    }
    if (unk18 == 0) {
        void *m = func_001E8A44(0xf4);
        unk18 = m ? ((S_00056100_Node *)m)->func_0014AB30(1) : 0;
        unk18->func_00129920(2);
        unk18->unk60 = this;
        unk18->unk9C = &D_00055290;
        unk18->func_001334E0(1);
        unk18->unkA7 |= 1;
        unk18->func_0014C1C0(1, 0, 0);
        S_00056100_Quat q[2];
        q[1] = a0;
        q[0] = a0;
        unk18->func_0014AC30(q, 0);
        unk18->func_00133ED0();
        unk18->func_001332A0();
        unk18->func_00133140(a1, 2);
    }
}

