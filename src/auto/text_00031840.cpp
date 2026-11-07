/* 24 functions from 0x00030A30 to 0x000318A0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
static __forceinline float Max_00030CE0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Min_00030CE0(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static inline float Max2_00030CE0(float a, float b) { _mm_store_ss(&a, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return a; }
static inline float Min2_00030CE0(float a, float b) { _mm_store_ss(&a, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return a; }
extern float D_00275460;
extern float D_00275544;
extern float D_00276A90;
struct Tgt_00030CE0 {
    char pad0[0x28];
    float f28;
};
struct C_00030CE0 {
    char pad0[0x24];
    int f24;
    int f28;
    int f2C;
    float f30;
    char pad34[0x10];
    float f44;
    float f48;
    float f4C;
    float f50;
    float f54;
    char pad58[8];
    float f60;
    char pad64[0x14];
    Tgt_00030CE0 *f78;
    int func_00030CE0(float dt);
};
extern char D_002A47F0[], D_002A5348[], D_00275678[], D_002A48F8[], D_00275630[], D_00276B78[], D_002A5870[];
void func_001ADCC0(void *, int, void *, void *, void *);
extern "C" char *strcpy(char *dst, const char *src);
extern "C" char *strcat(char *dst, const char *src);
#pragma intrinsic(strcpy)
#pragma intrinsic(strcat)
char *func_001E8AC0(const char *s, int c);

extern int D_00276A24;
extern u32 D_002A135C;
extern u32 D_002A1360;
extern u32 D_002A1364;
extern u32 D_002A1368;

/* BmxEngineModel */
struct C_00030C00 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    u32 f40;
    u32 f44;
    u32 f48;
    u32 f4C;
    u32 f50;
    u32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6C;
    u32 f70;
    u32 f74;
    u32 f78;
    C_00030C00 *func_00030C00(int a0);
    void func_00157600(int a0);
};

struct C_00030CD0 {
    char pad0[0x78];
    int unk78;
    void func_00030CD0(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00030F00 {
    void *vtbl;
    void *func_00030F00(unsigned int flags);
};

struct C_00030B20 {
    char pad0[0x170];
    float f170;
    float f174;
    float f178;
    char pad17c[0xBC];
    float f238;
    float f23c;
    float f240;
    void func_00030B20(float x, float y, float z, float w);
};


struct Vec4_00030A30 {
    float x;
    float y;
    float z;
    float w;
};

struct C_00030B90 {
    char pad0[0x180];
    float f180;
    float f184;
    float f188;
    char pad18c[0xdc];
    float f268;
    float f26c;
    float f270;
    void func_00030B90(float x, float y, float z, float w);
};

struct V_00031430 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
};

extern V_00031430 *D_002EFDB8;

struct C_001576C0 {
    void func_001576C0(void);
};

struct C_00031430 {
    void func_00031430(void);
};

struct V4_00030E70 {
    float x;
    float y;
    float z;
    float w;
    V4_00030E70() {}
    V4_00030E70(float x_, float y_, float z_, float w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct S_00030E70_Target {
    char pad0[0x190];
    float f190;
    float f194;
    float f198;
};

struct C_00030E70 {
    char pad0[0x58];
    V4_00030E70 f58;
    float f68;
    float f6c;
    float f70;
    char pad74[4];
    S_00030E70_Target *f78;
    int func_00030E70(int a0);
};

void __stdcall func_0001C750(V4_00030E70 a, V4_00030E70 b);

void *func_001E8A44(int size);
void func_001E891B(void *p);

struct C_0009A290 {
    char pad0[0x194];
    union { int f194; void *p194; };
    C_0009A290 *func_0009A290(void *a0, char *a1, int a2);
    void func_0009C770(void);
};

static __forceinline void Destroy_00031840(C_0009A290 *obj)
{
    if (obj) {
        obj->func_0009C770();
        func_001E891B(obj);
    }
}

struct C_00031840 {
    char pad0[0x64];
    char *f64;
    char pad68[0x158];
    C_0009A290 *f1C0;
    void func_00031840(void);
};

struct VObj_00031450 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct Sound_000314F0;
struct Target_00031610 {
    void func_001A4100(int a0, int a1, int a2);
    Target_00031610 *func_001A2C00(void *, Sound_000314F0 *, int, int);
    void func_001A4640(void *, void *, int);
};

struct Obj_000317B0 {
    char pad0[0x170];
    Vec4_00030A30 f170;
    Vec4_00030A30 f180;
    Vec4_00030A30 f190;
};

struct Inner_000317B0 {
    char pad0[0x238];
    int f238;
};

struct Elem_000317B0 {
    char pad0[0x1e0];
    Inner_000317B0 *f1e0;
};

struct List_000317B0 {
    char pad0[0x1a8];
    Elem_000317B0 *f1a8[1];
};

struct VT_00031260;

struct Holder_000317B0 {
    char pad0[0x4c0];
    VT_00031260 *f4c0;
    char pad4c4[0x1c];
    List_000317B0 *f4e0;
};

struct Sound_000314F0 {
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
    virtual void v30(int a);
    Sound_000314F0 *func_001CD770(void *, int);
};

struct Mgr_000317B0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0xb0];
    Sound_000314F0 *fb4;
    void func_0001CCE0(int id, Vec4_00030A30 *a, Vec4_00030A30 *b, Vec4_00030A30 *c, void *extra);
};

/* BmxEvent's vtable view (45 slots) */
struct VT_00031260 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(int a); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44();
};

static __forceinline void CallV30_00031260(VT_00031260 *o, int a) { o->v30(a); }

struct Inner_00031260 {
    char pad0[0x28];
    VT_00031260 *f28;
    void func_000947F0(int node);
    void func_00095880(void);
};

struct Ctx_00031260 {
    char pad0[4];
    int f4;
    char pad8[8];
    int f10;
    char pad14[0x18 - 0x14];
    int f18;
    int f1c;
    char pad20[0x2fc - 0x20];
    Inner_00031260 *f2fc;
    char pad300[0x468 - 0x300];
    int f468;
};

struct Root_000317B0 {
    void *f0;
    Mgr_000317B0 *f4;
    char pad8[0x124 - 8];
    int f124;
    char pad128[0x2a8 - 0x128];
    int f2a8;
    char pad2ac[0x2e0 - 0x2ac];
    Ctx_00031260 *f2e0;
};

extern Root_000317B0 *D_002A8490;

/* BmxEvent */
struct C_00030F90 {
    void *vtbl;
    C_00030F90 *func_00030F90(int a0);
};
extern int D_00276AB4;
extern u32 D_002A1460;
extern u32 D_002A1464;
extern u32 D_002A1468;
extern u32 D_002A146C;
struct S_001C3D40 {
    void func_001C3D40(int a);
};
extern S_001C3D40 *D_002F07B8;
extern "C" void *memset(void *dst, int c, unsigned int n);
#pragma intrinsic(memset)

static __forceinline void putquad_00030F90(int *d, int a, int b, int c, int e)
{
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
}

struct CreatorObj_00031260 {
    int func_00026500(int a, int b);
};

extern CreatorObj_00031260 *D_002A7CB8;
extern float D_002756DC;
extern int D_002B8F18;
extern int D_002B8F1C;
extern int D_00276B68;

struct Obj_00031260 {
    char pad0[0x19c];
    int f19c;
};

struct BmxEvent_00030A30 : VT_00031260 {
    char pad4[0x20];
    Obj_000317B0 *f24[16];
    Holder_000317B0 *f64;
    char pad68[4];
    int f6c[9];
    int f90;
    char pad94[0x50];
    void *fe4;
    char pade8[0x110 - 0xe8];
    int f110;
    int f114;
    char pad118[0x124 - 0x118];
    float f124;
    float f128;
    char pad12c[0x15c - 0x12c];
    void *f15c;
    void *f160;
    Obj_00031260 *f164;
    void *f168;
    void *f16c;
    VObj_00031450 *f170[10];
    VObj_00031450 *f198;
    void *f19c;
    void *f1a0;
    void *f1a4;
    void *f1a8;
    void *f1ac;
    char pad1b0[4];
    Sound_000314F0 *f1b4;
    char pad1b8[0x18];
    void *f1d0;
    char pad1d4[4];
    Target_00031610 *f1d8;
    char pad1dc[0x1f4 - 0x1dc];
    int f1f4;
    int func_00031260(float dt);
    int func_00157A00(float dt);
    void func_00031640(void);
    void func_000314F0(void);
    void func_001577A0(void *, int);
    void func_00031450(void);
    void func_000314A0(void);
    void func_00031610(int a0, int a1);
    void func_000317B0(int flag);
};

void C_00031840::func_00031840(void)
{
    void *m = func_001E8A44(0x19c);
    C_0009A290 *obj = m ? ((C_0009A290 *)m)->func_0009A290(this, f64 + 0x134, 0) : 0;

    f1C0 = obj;
    if (obj->f194 != 0) {
        if ((unsigned int)obj > 0u) {
            obj->func_0009C770();
            func_001E891B(obj);
        }
        f1C0 = 0;
    }
}
