/* 14 functions from 0x000B21B0 to 0x000B2ED0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
extern char D_002764F0[];
extern char D_00276310[];
extern char D_0027CEF0[];
extern char D_0027D0CC[];
extern char D_002769A8[];
extern char D_0027D0C0[];
extern char D_0027D0AC[];
extern char D_002764EC[];
extern char D_0027D09C[];
extern char D_0027D090[];
extern char D_0027D088[];
extern char D_0027D078[];
extern char D_0027D06C[];
extern char D_002764D8[];
extern char D_0027D060[];
extern char D_0027D050[];
extern char D_0027D044[];
extern char D_0027D030[];
extern char D_0027D020[];
extern char D_0027D008[];
struct S_000B21B0_Stream {
 void func_00168BE0(const char *, const char *, char *, int);
 void func_00168C20(const char *, int, void *);
 void func_00168C50(const char *, float, void *);
};
struct C_000B21B0 {
 char data[0x458];
 void func_001B4B80(S_000B21B0_Stream *);
 void func_000B21B0(S_000B21B0_Stream *);
};
static __forceinline int Min_000B21B0(int a, int b) { return a > b ? b : a; }
int func_001E9040(char *, char *);
char *func_001E8920(char *, const char *, int);


extern float D_002755E8;
extern float D_00275544;
extern char D_0027D0D8[];
extern char D_0027D0E8[];

int __stdcall func_0018C890(int);

struct VehicleV4 {
    u32 x, y, z, w;
};

struct VehicleAIOwner {
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
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
          virtual void v46(int a, int b);
      char pad4[0x454];
      float f458[4];
      char pad468[0x4B8 - 0x468];
      int f4B8;
    int func_0012FCF0(int a, int b);
};

struct C_002B9134 {
    char pad0[0x24];
    float f24;
    char pad28[0x3C - 0x28];
    int f3C;
};

extern C_002B9134 *D_002B9134;

struct VehicleAIIface {
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
    virtual int v17();
};

struct VehicleAIBody {
    char pad0[0x1A0];
    u8 f1A0;
    char pad1A1[0x1B];
    VehicleAIIface *f1BC;
    void func_001A1C70(int a);
};

struct VehicleAIB {
    char pad0[8];
    VehicleAIBody *f8;
};

struct VehicleAIA {
    char pad0[0x28];
    VehicleAIB *f28;
};

struct VehicleAI {
    void *vtbl;
    char pad4[0x38];
    VehicleAIOwner *f3C;
    char pad40[4];
    VehicleAIA *f44;
    char pad48[4];
    s32 f4C;
    s32 f50;
    s32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    char pad64[4];
    u32 f68;
    char pad6C[0xC];
    u32 f78;
    float f7C;
    float f80;
    float f84;
    char pad88[4];
    u32 f8C;
    char pad90[0x111];
    u8 f1A1;
    char pad1A2[0x106];
    u8 f2A8;
    u8 pad2A9;
    u8 f2AA;
    u8 f2AB;
    void SetState(int s) {
        if (f5C != s) {
            f1A1 = 1;
            f58 = s;
        }
    }
    void func_000B2930(void);
    void func_000B2450(float a);
    void func_000B2540(int mode, int a, VehicleV4 *p);
    void func_000B2C20(int a, int b);
    void func_000B1F70(void);
};

/* trigger item of func_000B2930's target list (flag at +0x3e0) */
struct S_000B2930_Item { char pad0[0x3e0]; u8 f3E0; VehicleV4 *func_00011E30(VehicleV4 *out); };
void *func_00011E30(S_000B2930_Item *self);
extern float D_0027CE50;
extern float D_0027CE40;
extern float D_0027CE30;

static __forceinline void sub_000B2930(float *out, VehicleAI *a, VehicleAI *b)
{
    float *pa = (float *)&a->f78;
    float *pb = (float *)&b->f78;
    out[2] = pa[2] - pb[2];
    out[1] = pa[1] - pb[1];
    out[0] = pa[0] - pb[0];
    out[3] = 1.0f;
}

static __forceinline void norm_000B2930(float *out, float *in)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_0027CE50);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_0027CE30)), _mm_sub_ss(_mm_load_ss(&D_0027CE40), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}

struct C_0018C800 {
    void func_0018C800(void);
    void func_0018C890(int a);
};

extern char D_0027CF70[];

struct VehicleAIMgr {
    char pad0[0x34];
    int f34;
    int f38;
    char pad3C[8];
    C_0018C800 **f44;
    VehicleAI **f48;
    void func_000B2D50(int a);
};
extern int D_0027CEFC;
void func_001E891B(void *p);

struct S_000B25D0_Leaf {
    void func_001A2AA0(int a);
    void func_001A2B40(int a);
};

struct S_000B25D0_Mid {
    char pad0[8];
    S_000B25D0_Leaf *f8;
};

struct S_000B25D0_Top {
    char pad0[0x28];
    S_000B25D0_Mid *f28;
};

struct C_000B25D0 {
    char pad0[0x44];
    S_000B25D0_Top *f44;
    char pad48[0x10];
    int f58;
    int f5C;
    char pad60[8];
    float f68;
    char pad6C[0xC];
    int f78;
    char pad7C[0x125];
    u8 f1A1;
    char pad1A2[0x106];
    u8 f2A8;
    void func_000B25D0(void);
};

struct S_000B2E40_Obj {
    virtual void Destroy(int a);
};

struct S_000B2E40_Buf {
    void func_00188720(void);
};

struct C_000B2E40 {
    void *vtbl;
    char pad4[0x3C];
    S_000B2E40_Obj *f40;
    S_000B2E40_Buf *f44;
    void **f48;
    int f4C;
    void func_000B2E40(void);
    void func_0018C7F0(void);
};

struct S_000B2C80_Owner {
    char pad0[0x4B8];
    int f4B8;
};

struct S_000B2C80_Item {
    char pad0[0x3C];
    S_000B2C80_Owner *f3C;
    char pad40[0x30];
    int f70;
    void func_000B2540(int a, int b, int c);
};

struct S_000B2C80_Group {
    int f0;
    int f4;
    int f8;
    S_000B2C80_Item **fC;
};

struct S_000B2C80_Entry {
    int idx;
    float f4;
};

struct S_000B2C80_Arg {
    char pad0[0x48];
    S_000B2C80_Entry **f48;
    int f4C;
    int f50;
};

static inline int IsNear(int v, int c, int r)
{
    if (v == c) {
        return 1;
    }
    if (v < c) {
        if (v >= c - r) {
            return 1;
        }
    } else if (v <= c + r) {
        return 1;
    }
    return 0;
}

struct C_000B2C80 {
    char pad0[0x30];
    int f30;
    char pad34[0x18];
    S_000B2C80_Group **f4C;
    void func_000B2C80(S_000B2C80_Arg *a);
};

struct S_000B2630_Vec {
    float x, y, z, w;
};

struct S_000B2630_Pos {
    S_000B2630_Vec *func_00199B00(S_000B2630_Vec *out, int a);
};

struct S_000B2630_Sub {
    char pad0[4];
    S_000B2630_Pos *f4;
};

struct S_000B2630_Bike {
    char pad0[0xA00];
    S_000B2630_Sub *fA00;
};

struct S_000B2630_List {
    char pad0[0x24];
    int f24;
    char pad28[0x180];
    S_000B2630_Bike *f1A8[1];
};

struct S_000B2630_Game {
    char pad0[0x4E0];
    S_000B2630_List *f4E0;
    char pad4E4[0x578 - 0x4E4];
    int f578;
    void **f57C;
};

extern S_000B2630_Game *D_002B9120;
extern float D_002A2DC4[];
extern float D_00275544;
extern float D_00275548;
extern float D_00278C48;
extern float D_00275800;
extern float D_0027CE50;
extern float D_0027CE40;
extern float D_0027CE30;
extern float D_002756D8;
int func_00011260(int lo, int hi);

static __forceinline float SqrtR_000B2630(const float &x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }

static __forceinline float Sqrt_000B2630(float x)
{
    float r;
    _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x));
    return r;
}

static __forceinline void Normalize_000B2630(float *out, float *in)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_0027CE50);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_0027CE30)), _mm_sub_ss(_mm_load_ss(&D_0027CE40), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}

struct C_000B2630 {
    char pad0[0x3C];
    char *f3C;
    char pad40[4];
    S_000B25D0_Top *f44;
    char pad48[0x10];
    int f58;
    int f5C;
    char pad60[8];
    int f68;
    char pad6C[0xC];
    int f78;
    float f7C;
    float f80;
    float f84;
    char pad88[0x119];
    u8 f1A1;
    char pad1A2[0x108];
    u8 f2AA;
    void func_000B2630(void);
};

struct C_000B2C60 {
    undefined4 func_000B2C60(byte param_1);
};

struct C_000B2510 {
    void func_000B2510(int param_1);
};

struct C_000B2530 {
    undefined4 func_000B2530(void);
};

void VehicleAI::func_000B2930(void)
{
    float v[4];
    float nearv;
    float dx, dy, dz, sq, d;
    float range, thr, dot;
    VehicleV4 t;
    float *pout, *pin;
    int i;

    v[0] = D_002A2DC4[0];
    v[1] = D_002A2DC4[1];
    v[2] = D_002A2DC4[2];
    v[3] = D_002A2DC4[3];
    nearv = 10000.0f;
    for (i = 0; i < D_002B9120->f578; i++) {
        if (*(volatile char *)&((S_000B2930_Item *)D_002B9120->f57C[i])->f3E0 != 0) {
            *(VehicleV4 *)v = *((S_000B2930_Item *)D_002B9120->f57C[i])->func_00011E30(&t);
            dx = v[0] - this->f7C;
            dy = v[1] - this->f80;
            dz = v[2] - this->f84;
            sq = dx * dx + dy * dy + dz * dz;
            d = AsmSqrtF(sq);
            if (d > D_00275544 && d < nearv) {
                nearv = d;
            }
        }
    }
    if (*(float *)((char *)this + 0x64) < D_00278C48) {
        range = *(volatile float *)((char *)D_002B9134 + 0x24) * D_002755E8;
        thr = 0.7f;
    } else {
        range = *(volatile float *)((char *)D_002B9134 + 0x24);
        thr = 0.2f;
    }
    if (nearv < range) {
        pin = &v[0];
        pout = &v[0];
        pout[2] = pin[2] - this->f84,
        pout[1] = pin[1] - this->f80,
        pout[0] = pin[0] - this->f7C,
        pout[3] = 1.0f;
        AsmVec3Normalize(pout, pin);
        *(VehicleV4 *)&t = *(VehicleV4 *)this->f3C->f458;
        {
            float *n = (float *)&t;
            dot = n[1] * pout[1] + n[0] * pout[0] + n[2] * pout[2];
        }
        if (dot >= thr) {
            this->f2AB = 1;
            this->f68 = 0;
            SetState(0x5a);
            return;
        }
    } else if (!(D_00275544 < thr)) {
        if (nearv <= *(volatile float *)((char *)D_002B9134 + 0x24) + D_00275548) {
            return;
        }
    }
    this->f2AB = 0;
    if (this->f2AA == 0) {
        this->f68 = 0x3f800000;
        if (this->f5C) {
            SetState(0);
        }
    }
}

void VehicleAI::func_000B2C20(int a, int b)
{
    if (f54 >= 0 && f54 < D_002B9134->f3C) {
        if (f3C->func_0012FCF0(a, b)) {
            int t = f54;
            f54 = f50;
            f50 = t;
        }
    }
}

undefined4 C_000B2C60::func_000B2C60(byte param_1)
{
  int func_000B1200(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000B1200();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_000B2C80::func_000B2C80(S_000B2C80_Arg *a)
{
    int i;
    int j;

    for (i = 0; i < a->f4C; i++) {
        int idx = a->f48[i]->idx;

        for (j = 0; j < f4C[idx]->f4; j++) {
            S_000B2C80_Item *item = f4C[idx]->fC[j];

            item->f70 = 1;
            if (a->f50 == 2) {
                int range = f30;
                int cur = (int)a->f48[i]->f4;
                int v = item->f3C->f4B8;

                if (IsNear(v, cur, range)) {
                    item->func_000B2540(2, 0, 0);
                }
            }
        }
    }
}

void VehicleAIMgr::func_000B2D50(int a)
{
    int i;
    VehicleAI *ai;

    for (i = 0; i < f38; i++) {
        f48[i]->f3C->f4B8 = 0;
        ai = f48[i];
        if (ai->f50 != ai->f4C) {
            ai->func_000B2C20(0, 0);
        }
        f48[i]->f3C->v46(0, 1);
        f48[i]->func_000B1F70();
        ((C_0018C800 *)f48[i])->func_0018C800();
        if (a == 1) {
            ((C_0018C800 *)f48[i])->func_0018C890((int)D_0027CF70);
        }
    }
    for (i = 0; i < f34; i++) {
        f44[i]->func_0018C800();
        if (a == 1) {
            f44[i]->func_0018C890((int)D_0027CF70);
        }
    }
}

void C_000B2E40::func_000B2E40(void)
{
    int i;
    S_000B2E40_Buf *buf;

    vtbl = &D_0027CEFC;
    if (f48 != 0) {
        for (i = 0; i < f4C; i++) {
            func_001E891B(f48[i]);
        }
        func_001E891B(f48);
        f48 = 0;
        f4C = 0;
    }
    if (f40 != 0) {
        f40->Destroy(1);
        f40 = 0;
    }
    buf = f44;
    if (buf != 0) {
        buf->func_00188720();
        func_001E891B(buf);
    }
    func_0018C7F0();
}
