/* 13 functions from 0x0010DA70 to 0x0010E920, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"

extern int D_00275630;

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() {}
    Vec4(f32 a, f32 b, f32 c, f32 d) { x = a; y = b; z = c; w = d; }
};

extern Vec4 D_002A3A3C;
extern float D_002A3A40, D_002A3A44, D_002A3A48;

struct C_Device {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46();
};

struct C_Button {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual int v7();
};

struct C_ButtonSet {
    C_Button *func_001A2EF0(int index);
    void func_001A2DD0(int index);
};

struct V_Slot4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

struct C_00198330 {
    void func_00199A70(C_00198330 *a0, Vec4 *a1);
};

struct Owner_10DA70_Info {
    char pad0[0x124];
    int f124;
};

struct Owner_10DA70_4DC {
    char pad0[0x4DC];
    Owner_10DA70_Info *f4DC;
};

struct Obj_10DA70_1E0 {
    char pad0[0x22C];
    C_00198330 *f22C;
};

struct Obj_10DA70_1F0 {
    char pad0[0x68];
    int f68;
};

struct Spring_10DA70 {
    void func_001A86D0(int a);
};

struct Obj_10DA70_A00 {
    int f0;
    C_00198330 *f4;
};

struct Blk24_10DA70 {
    int f0, f4, f8, fC;
    float f10;
    int f14;
};

struct BmxVehicle_10DA70 {
    void *vtbl;
    char pad4[0x20];
    Owner_10DA70_4DC *f24;
    char pad28[0x1E0 - 0x28];
    Obj_10DA70_1E0 *f1E0;
    char pad1E4[0x1F0 - 0x1E4];
    Obj_10DA70_1F0 *f1F0;
    Spring_10DA70 *f1F4;
    char pad1F8[0x468 - 0x1F8];
    int f468;
    char pad46C[0x5C8 - 0x46C];
    int f5C8;
    char pad5CC[0x79C - 0x5CC];
    Blk24_10DA70 f79C;
    char pad7B4[0xA00 - 0x7B4];
    Obj_10DA70_A00 *fA00;
    char padA04[4];
    V_Slot4 *fA08;
    V_Slot4 *fA0C;
    V_Slot4 *fA10;
    V_Slot4 *fA14;
    char padA18[0x11AC - 0xA18];
    int f11AC;
    int f11B0;
    int f11B4;
    char pad11B8[0x1244 - 0x11B8];
    C_Device *f1244;
    char pad1248[0x1584 - 0x1248];
    int f1584;
    char pad1588[0x15A4 - 0x1588];
    C_ButtonSet *f15A4;
    int pad15A8;
    float f15AC;
    float f15B0;
    void func_001057A0(void);
    void func_001058F0(void);
    void func_001576C0(void);
    void func_00108510(int *name, Vec4 v);
    void func_0010DA70(Blk24_10DA70 *p);
    int func_0010DAB0(void);
    void func_0010DB70(void);
    void func_0010DC00(void);
    void func_0010DCB0(void);
    void func_0010E2A0(void);
    void func_0002D270(void);
    void func_00028070(void);
};

/* declarations for BmxVehicle_10DA70::func_0010E2A0 (vehicle reset) */
#define MEMBER_10E2A0(T, off) (*(T *)((char *)self + (off)))
extern float D_00275460, D_00275544;
extern int D_002A3A9C, D_002A3A98, D_002B91FC;

__declspec(align(16)) struct Mat44_10E2A0 {
    float m[16];
    void identity(void)
    {
        _mm_store_ps(&m[0], _mm_setzero_ps());
        _mm_store_ps(&m[4], _mm_setzero_ps());
        _mm_store_ps(&m[8], _mm_setzero_ps());
        _mm_store_ps(&m[12], _mm_setzero_ps());
        m[0] = 1.0f;
        m[5] = 1.0f;
        m[10] = 1.0f;
        m[15] = 1.0f;
    }
};

static __forceinline float length_10E2A0(Vec4 *v)
{
    float square = v->x * v->x + v->y * v->y + v->z * v->z;
    float r;
    _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&square));
    return r;
}

static __forceinline void identity_ref_10E2A0(Mat44_10E2A0 * volatile &p)
{
    Mat44_10E2A0 *q = p;
    _mm_store_ps(&q->m[0], _mm_setzero_ps());
    _mm_store_ps(&q->m[4], _mm_setzero_ps());
    _mm_store_ps(&q->m[8], _mm_setzero_ps());
    _mm_store_ps(&q->m[12], _mm_setzero_ps());
    q->m[0] = 1.0f;
    q->m[5] = 1.0f;
    q->m[10] = 1.0f;
    q->m[15] = 1.0f;
}

struct C_10E2A0_Mat { void func_00199BE0(void *m); void func_00199BE0(const Mat44_10E2A0 &m); };
struct C_10E2A0_230 { char pad0[0x174]; C_10E2A0_Mat *f174; };
struct C_10E2A0_950 {
    char pad0[0x88];
    C_00198330 *f88;
    void func_0011CA60(Vec4 v);
    void func_0011C900(Vec4 a, Vec4 b, Vec4 c, float d);
};
struct C_10E2A0_A04 {
    void func_001648E0(int a, float b, int c, int d, int e);
    void func_00164820(int a);
};
struct C_10E2A0_15A8 {
    char pad0[0x1c4];
    int f1C4;
    void func_001A4100(int a, int b, int c);
};
extern "C" int __cdecl func_00011260(int a, int b);
extern "C" void __cdecl func_0001E9E0(Vec4 *out, Vec4 *in);

struct Anim_10DD90 {
    int f0;
    int func_00109580(int);
    void func_001094F0(int, int);
    void func_00109520(int, int);
};
struct C_0010DD90 {
    char pad0[0xA2C]; int fA2C;
    char padA30[8]; int fA38;
    char padA3C[0xA64-0xA3C]; Anim_10DD90 *fA64;
    char padA68[0x1068-0xA68]; int f1068;
    char pad106C[0x120C-0x106C]; int f120C; int f1210;
    char pad1214[0x2010-0x1214]; int f2010;
    void func_0010DD90(float, int, int, int, int, int);
};

struct Rec_10DED0 { char b[0x32]; };
struct Table_10DED0 {
 char pad0[0x20EC]; int flags[70]; int names[70]; int values[70];
 char pad2434[0x3A04-0x2434]; Rec_10DED0 recs[80];
 char pad49A4[0x60C4-0x49A4];
 union { int ids[80]; int ids2[5][16]; };
 union { int keys[80]; int keys2[5][16]; };
   void func_000A4AF0(int, char *);
  int Match(int mode, int slot, int id, int key) { int idx = mode * 16 + slot; return ids[idx] == id && keys[idx] == key; }
};
struct Owner_10DED0 { char pad0[0x52C]; Table_10DED0 *f52C; };
struct Queue_10DED0 { int count; int ids[5]; int modes[5]; int f2C; int f30; int f34; int f38[100]; int f1C8[100]; void func_00109340(int,int); void Push(int slot, int mode) { f38[++f34] = slot; f1C8[f34] = mode; } };
struct Obj_10E030_5F0 { void func_000261F0(int); };
struct C_0010DED0 {
 char pad0[0x24]; Owner_10DED0 *f24;
 char pad28[0x5F0-0x28]; Obj_10E030_5F0 *f5F0;
 char pad5F4[0x604-0x5F4]; int f604;
 char pad608[0x960-0x608]; float f960;
 char pad964[0xCE0-0x964]; int cntCE0[80]; int cntE20[80];
 char padF60[0x1084-0xF60]; Queue_10DED0 *f1084;
 char pad1088[0x111C-0x1088]; int f111C;
 char pad1120[8]; int f1128;
 char pad112C[0x1134-0x112C]; int f1134;
 char pad1138[0x1158-0x1138]; int f1158;
 char pad115C[0x1168-0x115C]; int f1168;
 char pad116C[0x11DC-0x116C]; int f11DC;
 char pad11E0[8]; int f11E8;
 char pad11EC[0x15F4-0x11EC]; int f15F4;
 int func_00108270(int,int);
 void func_00108D10(int,int);
 void func_00108E30(int,int);
 void func_0010DED0(int,int);
   int func_0010E030(int,int);
 };

struct C_0010E260 {
    void func_0010E260(void);
};

struct C_0010E8A0 {
    int f0;
    int f4[5];
    int f18[5];
    int f2C;
    int f30;
    int f34;
    int f38[100];
    int f1C8[100];
    int f358[100];
    C_0010E8A0 *func_0010E8A0(void);
};

struct C_0010E810Slot {
    void func_000848F0(void);
    void func_00083710(int, int);
    void func_000836C0(float, int);
    void func_0008FB80(int, int, int, int, int);
    void func_000836A0(float);
};

struct C_0010E810Arr {
    char pad0[0x170];
    C_0010E810Slot *f170[1];
};

struct C_0010E810Global {
    char pad0[0x2A4];
    C_0010E810Arr *f2A4;
};

extern C_0010E810Global *D_002A8490;

struct C_0010E810Child {
    char pad0[0x24];
    int f24;
};

struct C_0010E810 {
    char pad0[0x1EC];
    C_0010E810Child *f1EC;
    char pad1F0[0x99C - 0x1F0];
    int f99C;
    char pad9A0[4];
    float f9A4;
    char pad9A8[0xA2C - 0x9A8];
    int fA2C;
    char padA30[0x11EC - 0xA30];
    int f11EC;
    int f11F0;
    int f11F4;
    char pad11F8[0x209C - 0x11F8];
    int f209C;
    int f20A0;
    int f20A4;
    int f20A8;
    void func_00108FF0(void);
    void func_0010E810(void);
};

struct C_10E6D0_A64 { void func_001094B0(void); };
struct C_10E6D0_950 { void func_0011CA20(void); };
struct C_10E6D0_1E0 { void **vtbl; };
struct C_10E6D0 {
    void func_00109F80(void);
    void func_0010E6D0(void);
};

void BmxVehicle_10DA70::func_0010DA70(Blk24_10DA70 *p)
{
    f79C = *p;
    f79C.f10 = f79C.f10 * 0.01745329f;
    func_001057A0();
}

int BmxVehicle_10DA70::func_0010DAB0(void)
{
    if (f1584 == -1) {
        Vec4 v;

        v.z = 0.0f;
        v.y = 0.0f;
        v.x = 0.0f;
        v.w = 1.0f;
        f1E0->f22C->func_00199A70(0, &v);
        fA00->f4->func_00199A70(0, &v);
        if (v.y < (float)f24->f4DC->f124) {
            func_00108510(&D_00275630, D_002A3A3C);
        }
    }
    return 0;
}

void BmxVehicle_10DA70::func_0010DB70(void)
{
    if (f15A4->func_001A2EF0(3)->v7()) {
        f15A4->func_001A2DD0(3);
    }
    if (f15A4->func_001A2EF0(2)->v7()) {
        f15A4->func_001A2DD0(2);
    }
    f1244->v46();
    func_001576C0();
    fA08->v4();
    fA0C->v4();
    fA10->v4();
    fA14->v4();
}

void BmxVehicle_10DA70::func_0010DC00(void)
{
    if (f5C8 == 0) {
        f1F0->f68 = 1;
    } else {
        f1F0->f68 = 0;
    }
    if (f468 != 0) {
        f1F4->func_001A86D0(f11B4);
        func_001058F0();
    } else if (f5C8 == 0) {
        f1F4->func_001A86D0(f11B0);
    } else {
        f1F4->func_001A86D0(f11AC);
        func_001058F0();
    }
    f15B0 = f15AC;
}

void BmxVehicle_10DA70::func_0010DCB0() {
    if (*(int *)((char *)this + 0x454)) {
        C_0010E8A0 *p = *(C_0010E8A0 **)((char *)this + 0x1084);
        p->f0 = 0;
        for (int i = 0; i < 5; ++i) { p->f4[i] = -1; p->f18[i] = 0; }
        if (p->f4[0] != -1) ++p->f0;
        if (p->f4[1] != -1) ++p->f0;
        if (p->f4[2] != -1) ++p->f0;
        if (p->f4[3] != -1) ++p->f0;
        if (p->f4[4] != -1) ++p->f0;
        (*(C_0010E8A0 **)((char *)this + 0x1084))->f2C = -1;
        *(int *)((char *)this + 0x1134) = -1;
        *(int *)((char *)this + 0x1158) = -1;
        *(int *)((char *)this + 0x454) = 0;
        *(int *)((char *)this + 0xA30) = 1;
        *(int *)((char *)this + 0x448) = 0;
        *(int *)((char *)this + 0x44C) = 0;
        *(int *)((char *)this + 0x450) = 0;
        *(int *)((char *)this + 0x2084) = 1;
        *(int *)((char *)this + 0x2088) = 0;
        *(float *)((char *)this + 0x45C) = 0.2f;
        fA08->v4(); fA0C->v4(); fA10->v4(); fA14->v4();
        *(int *)((char *)this + 0x1628) = 1;
    }
}

void C_0010DD90::func_0010DD90(float a, int b, int c, int d, int e, int f)
{
 if(f2010 || !fA38) return;
 int index=fA2C*4+0x170;
 int type = -1;
 if(!(*(C_0010E810Slot **)((char *)D_002A8490->f2A4+index))) return;
 if(c) {
  if(fA64->f0 > 0) type = fA64->func_00109580(fA64->f0-1);
  f1210=f;
  if(f) f120C=1;
  if(type==11) {
   (*(C_0010E810Slot **)((char *)D_002A8490->f2A4+index))->func_00083710(c,f);
   D_002A8490->f2A4->f170[fA2C]->func_000836C0(a,b);
   fA64->func_001094F0(d,e);
  } else {
   (*(C_0010E810Slot **)((char *)D_002A8490->f2A4+index))->func_0008FB80(c,(int)a,b,f1068,f);
   fA64->func_00109520(d,e);
  }
 } else (*(C_0010E810Slot **)((char *)D_002A8490->f2A4+index))->func_000836A0(a);
}

void C_0010DED0::func_0010DED0(int a,int b)
{
 char buffer[260];
 if(!f1168) {
  f1128=0;
  int id=func_00108270(a,b);
  if(id!=-1) {
   if(f11DC) return;
   Queue_10DED0 *q=f1084;
   if(q->count<5) { q->ids[q->count]=id; q->modes[q->count]=1; ++q->count; }
   f111C=b; f960=0.25f; return;
  }
  for(int i=0;i<70;++i) {
   if(f24->f52C->names[i]==a && f24->f52C->values[i]==b) {
    f111C=b;
    if(f11DC) {
     if(f24->f52C->flags[i]) { f11E8=1; f1084->func_00109340(i,0); return; }
    } else {
     Queue_10DED0 *q=f1084;
     if(q->count<5) {q->ids[q->count]=i;q->modes[q->count]=0;++q->count;}
     return;
    }
   }
  }
 }
 ((volatile C_0010DED0 *)this)->f24->f52C->func_000A4AF0(a,buffer);
 if(a && (a>>=8)) func_0010DED0(a,b);
}

int C_0010DED0::func_0010E030(int a, int b)
{
    char buffer[260];
    float scale;
    int cur;
    int i;
    int mode;
    int flag;

    f24->f52C->func_000A4AF0(a, buffer);
    cur = f1158;
    if (cur != -1) {
        for (i = 0; i < 16; i++) {
            if (f1134 != -1) break;
            if (f24->f52C->Match(cur, i, a, b)) {
                int *p = &cntE20[(cur << 4) + i];
                f1134 = i;
                f111C = b;
                f1128 = 0;
                f960 = 0.25f;
                ++*p;
                cntCE0[f1158 * 16 + f1134] = cntCE0[f1158 * 16 + f1134] + 1;
                if (cntCE0[f1158 * 16 + f1134] > 2) {
                    scale = 0.0f;
                } else if (cntCE0[f1158 * 16 + f1134] > 1) {
                    scale = 0.5f;
                } else {
                    scale = 1.0f;
                }
                func_00108D10(f1134, f1158);
                func_00108E30(f1134, f1158);
                flag = 0;
                switch (f1158) {
                case 0: mode = 1; break;
                case 1: mode = 2; break;
                case 2: mode = 3; break;
                case 3: mode = 4; flag = 1; break;
                case 4: mode = 5; break;
                }
                ((C_0010DD90 *)this)->func_0010DD90(0.0f, *(int *)&scale, (int)&f24->f52C->recs[f1158 * 16 + f1134], f1134, mode, flag);
                f1084->Push(f1134, f1158);
                f15F4 = 0;
                f5F0->func_000261F0(f604);
                return 1;
            }
        }
    }
    f24->f52C->func_000A4AF0(a, buffer);
    if (a != 0 && (a >>= 8) != 0 && func_0010E030(a, b) != 0) {
        return 1;
    }
    return 0;
}

void C_0010E260::func_0010E260(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(in_ECX + 0x1084);
  puVar2 = (undefined4 *)(iVar1 + 0x1c8);
  iVar3 = 100;
  do {
    puVar2[-100] = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2[100] = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
  return;
}

void BmxVehicle_10DA70::func_0010E2A0(void)
{
    BmxVehicle_10DA70 * volatile self = this;
    Mat44_10E2A0 m2;
    Mat44_10E2A0 m1;
    Mat44_10E2A0 * volatile pm;
    Vec4 a;
    Vec4 b;
    Vec4 c;
    float lenSq;
    float len;
    C_0010E810Slot *slot;
    Vec4 *v;
    int t;
    int r;

    *(int *)((char *)this + 0x2084) = 0;
    MEMBER_10E2A0(int, 0x2088) = -1;
    if (MEMBER_10E2A0(float, 0x11A4) <= D_00275460) {
        func_00108510(0, D_002A3A3C);
    }
    if (MEMBER_10E2A0(int, 0x11F4) == 1) {
        MEMBER_10E2A0(int, 0x11F4) = 2;
    }
    MEMBER_10E2A0(int, 0x964) = 0;
    MEMBER_10E2A0(int, 0x968) = 0;
    MEMBER_10E2A0(int, 0x96C) = 0;
    MEMBER_10E2A0(int, 0x99C) = 0;
    MEMBER_10E2A0(int, 0x9A0) = 0;
    MEMBER_10E2A0(int, 0x9BC) = 0;
    slot = D_002A8490->f2A4->f170[MEMBER_10E2A0(int, 0xA2C)];
    if (slot != 0) {
        slot->func_000848F0();
    }
    self->func_0002D270();
    pm = &m1;
    AsmIdentityMatrix(pm);
    m2 = m1;
    MEMBER_10E2A0(C_10E2A0_230 *, 0x230)->f174->func_00199BE0(&m2);
    self->func_00028070();
    MEMBER_10E2A0(int, 0x5C8) = 1;
    MEMBER_10E2A0(int, 0x8AC) = 0;
    a.z = 0.0f;
    a.y = 0.0f;
    a.x = 0.0f;
    a.w = 1.0f;
    b.z = 0.0f;
    b.y = 0.0f;
    b.x = 0.0f;
    b.w = 1.0f;
    MEMBER_10E2A0(Obj_10DA70_1E0 *, 0x1E0)->f22C->func_00199A70(0, &b);
    MEMBER_10E2A0(C_10E2A0_950 *, 0x950)->f88->func_00199A70(0, &a);
    MEMBER_10E2A0(C_10E2A0_950 *, 0x950)->func_0011CA60(a);
    func_0001E9E0(&c, (Vec4 *)((char *)MEMBER_10E2A0(char *, 0x1E0) + 0x258));
    v = (Vec4 *)((char *)MEMBER_10E2A0(char *, 0x1E0) + 0x258);
    lenSq = v->x * v->x + v->y * v->y + v->z * v->z;
    len = AsmSqrtF(lenSq);
    {
        BmxVehicle_10DA70 *p = self;
        ((C_10E2A0_950 *)*(char **)((char *)p + 0x950))->func_0011C900(b, *(Vec4 *)(*(char **)((char *)p + 0x1E0) + 0x238), c, len);
    }
    {
        BmxVehicle_10DA70 *p = self;
        ((void (__stdcall *)(void *))(*(void ***)*(char **)((char *)p + 0x1E0))[0x74 / 4])((char *)p + 0x8D0);
    }
    *(int *)(MEMBER_10E2A0(char *, 0x1F0) + 0xC8) = D_002A3A9C;
    *(int *)(MEMBER_10E2A0(char *, 0x1F0) + 0xB4) = D_002A3A98;
    t = D_002B91FC;
    *(int *)(MEMBER_10E2A0(char *, 0x1F0) + 0xBC) = t;
    *(int *)(MEMBER_10E2A0(char *, 0x1F0) + 0xC0) = t;
    *(int *)(MEMBER_10E2A0(char *, 0x1F0) + 0xC4) = t;
    *(int *)(MEMBER_10E2A0(char *, 0x1F0) + 0xD0) = 0x3be56042;
    {
        BmxVehicle_10DA70 *p = self;
        *(Vec4 *)(*(char **)((char *)p + 0x1E0) + 0x190) = *(Vec4 *)((char *)p + 0xFC);
    }
    MEMBER_10E2A0(int, 0x11CC) = MEMBER_10E2A0(float, 0x878) < D_00275544;
    {
        BmxVehicle_10DA70 *p = self;
        ((C_10E2A0_A04 *)*(char **)((char *)p + 0xA04))->func_001648E0(*(int *)((char *)p + 0x1800), 1.0f, 0, 0, 0);
    }
    {
        BmxVehicle_10DA70 *p = self;
        ((C_10E2A0_A04 *)*(char **)((char *)p + 0xA04))->func_00164820(*(int *)((char *)p + 0x1800));
    }
    r = func_00011260(1, MEMBER_10E2A0(C_10E2A0_15A8 *, 0x15A8)->f1C4);
    MEMBER_10E2A0(C_10E2A0_15A8 *, 0x15A8)->func_001A4100(r, 0, 0);
}

void C_10E6D0::func_0010E6D0(void)
{
    char *t = (char *)this;
    func_00109F80();
    C_0010E8A0 *p = *(C_0010E8A0 **)(t + 0x1084);
    p->f0 = 0;
    for (int i = 0; i < 5; ++i) { p->f4[i] = -1; p->f18[i] = 0; }
    if (p->f4[0] != -1) ++p->f0;
    if (p->f4[1] != -1) ++p->f0;
    if (p->f4[2] != -1) ++p->f0;
    if (p->f4[3] != -1) ++p->f0;
    if (p->f4[4] != -1) ++p->f0;
    (*(C_0010E8A0 **)(t + 0x1084))->f2C = -1;
    (*(C_10E6D0_A64 **)(t + 0xA64))->func_001094B0();
    C_10E6D0_950 *q = *(C_10E6D0_950 **)(t + 0x950);
    if (q) {
        q->func_0011CA20();
        C_Device *d = *(C_Device **)(t + 0x1E0);
        ((void (__stdcall *)(void *))(*(void ***)d)[0x74 / 4])(t + 0x910);
        char *o = *(char **)(t + 0x1F0);
        *(int *)(o + 0xC8) = 0;
        *(int *)(*(char **)(t + 0x1F0) + 0xB4) = *(int *)(t + 0x8C8);
        *(int *)(*(char **)(t + 0x1F0) + 0xBC) = *(int *)(t + 0x8C0);
        *(int *)(*(char **)(t + 0x1F0) + 0xC0) = *(int *)(t + 0x8C0);
        *(int *)(*(char **)(t + 0x1F0) + 0xC4) = *(int *)(t + 0x8C0);
        *(float *)(*(char **)(t + 0x1F0) + 0xD0) = 0.25f;
        char *e = *(char **)(t + 0x1E0);
        *(int *)(t + 0x5C8) = 0;
        *(Vec4 *)(e + 0x190) = *(Vec4 *)(t + 0xEC);
        *(int *)(*(char **)(t + 0x1E0) + 0x220) = 0x468e6200;
    }
}

void C_0010E810::func_0010E810(void)
{
    f209C = 0;
    f11EC = 0;
    f11F0 = 0;
    f20A8 = 0;
    f20A0 = 0;
    f20A4 = 0;
    f9A4 = 0.5f;
    f99C = 0;
    f1EC->f24 = 0;
    if (D_002A8490->f2A4 != 0) {
        if (D_002A8490->f2A4->f170[fA2C] != 0) {
            D_002A8490->f2A4->f170[fA2C]->func_000848F0();
        }
    }
    if (f11F4 == 1) {
        f11F4 = 2;
    }
    func_00108FF0();
}

C_0010E8A0 *C_0010E8A0::func_0010E8A0(void)
{
    int i;

    f0 = 0;
    for (i = 0; i < 5; i++) {
        f4[i] = -1;
        f18[i] = 0;
    }
    if (f4[0] != -1) {
        f0++;
    }
    if (f4[1] != -1) {
        f0++;
    }
    if (f4[2] != -1) {
        f0++;
    }
    if (f4[3] != -1) {
        f0++;
    }
    if (f4[4] != -1) {
        f0++;
    }
    for (i = 0; i < 100; i++) {
        f38[i] = -1;
        f1C8[i] = -1;
        f358[i] = -1;
    }
    f34 = -1;
    f2C = -1;
    f30 = 0;
    return this;
}

