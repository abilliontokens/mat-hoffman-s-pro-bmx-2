/* 17 functions from 0x00193240 to 0x001941F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Pool_00193240 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    Pool_00193240 *func_0001E740(u32 size, u32 count);
    void func_0001E790(void *p);
    struct Node_00193240 *func_0001E8A0(void);
};

extern Pool_00193240 *D_002EFE70;
extern int D_002EFE74;
void *func_001E8A44(int size);

struct Handler_00193240 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(void *a, int b);
    virtual int v6(void *a, void *b, int c);
    virtual void v7(void *a, int b, void *c, void *d);
    virtual void v8(void *a, int b, void *c, void *d);
    virtual void v9(void *a, int b);
    char pad4[4];
    int f8;
};

struct Node_00193240 {
    Node_00193240 *f0;
    void *f4;
    Handler_00193240 *f8;
    void *fC;
    void *f10;
    int f14;
    float f18;
    float f1C;
    float f20;
    float f24;
    Node_00193240 *func_00193490(void);
    void func_001937F0(void *a1, void *a2, void *a3);
    void func_00193600(void *a1, void *a2, void *a3, void *a4);
    void func_00193950(void *a1, struct S_00193240_V4 *a2, void *a3, void *a4);
    void func_00193870(void *a);
    void func_00193530(void *a1, void *a2, void *a3, void *a4);
    void func_001938C0(void *a1, struct C_00192B50 *a2, int a3, struct S_00193240_V4 *a4,
                       void *a5, void *a6);
};
struct C_00194110 {
    undefined4 func_00194110(byte param_1);
};

extern int D_0028AD14;
extern f32 D_00275BF8;
extern f32 D_002A98DC;
extern u32 D_002A9904;
extern u32 D_002A9908;
extern u32 D_002A990C;
extern u32 D_002A9910;
// 193240 helpers

struct V8_00193240 {
    int p[2];
    void func_001D3F50(void);
};
struct Log_00193240 {
    char pad0[0x1934];
    int f1934;
};
struct Root_00193240 {
    char pad0[0x18];
    Log_00193240 *f18;
};
struct Link_00193240 {
    Link_00193240 *next;
    struct Obj_00193240 *item;
};
struct Obj_00193240 {
    char pad0[0x8];
    struct Sub_00193240 *f8;
};
struct Sub_00193240 {
    int func_00179B40(V8_00193240 *out, int value);
};
struct Dev_00193240 {
    char pad0[4];
    int f4;
};
struct Ent_00193240 {
    char pad0[4];
    struct Tgt_00193240 *f4;
};
struct Tgt_00193240 {
    char pad0[0x3c];
    int f3c;
    void func_00192CC0(V8_00193240 *a);
    void func_001930F0(void);
};
struct Link2_00193240 {
    Link2_00193240 *next;
    Tgt_00193240 *item;
    Sub_00193240 *sub;
};
struct Vt_00193240 {
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
};
struct Stamp_00193240 {
    char pad0[0x90];
    u16 f90;
    char pad92[0x16];
};
struct Owner_00193240 {
    char pad0[0x24];
    Link2_00193240 *f24;
    Vt_00193240 *f28;
    Vt_00193240 *f2c;
    char pad30[8];
    int f38;
    int f3c;
    f32 f40;
    f32 f44;
    f32 f48;
    f32 f4c;
    char f50[0x40];
    u16 f90;
    u16 f92;
    int func_00193240(struct Args_00193240 *arg);
};
struct V4_00193C20 {
    float x, y, z, w;
};

/* camera-path actor: the 0x1e0-byte object kept per segment */
struct Seg_00193C20 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(int a, int b, int c);
    Seg_00193C20 *func_00143580(int flag);
    void func_00199600(V4_00193C20 pos);
    void func_00198F50(void *a, void *b, int c, int d, int e);
    void func_0019ABA0(void *a, int b);
    void func_00199A70(int a, void *b);
};

struct Key_00193C20 {
    Key_00193C20 *func_00135850(void);
    void func_00135870(float t, void *a, void *b, void *c, int flag);
};

struct Path_00193C20 {
    char pad0[0x34];
    char *f34;
    char pad38[0xc];
    void *f44;
    Path_00193C20 *func_00135700(int flag);
    void func_00135A80(int count, int n1, int *p1, int n2, void *p2, void *owner);
};

struct Tgt_00193C20 {
    float *func_00197EC0(float *tmp, V4_00193C20 *in);
    void func_00199A70(int a, void *b);
};

struct Env_00193C20 {
    char pad0[0x4a8];
    int *f4a8;
};

struct Cam_00193C20 {
    char pad0[0x24];
    int f24;
    V4_00193C20 f28;
    V4_00193C20 f38;
    Env_00193C20 *f48;
    Seg_00193C20 **f4c;
    Tgt_00193C20 *f50;
    Key_00193C20 **f54;
    Path_00193C20 *f58;
    void func_001577A0(void *child, int a);
    void func_001D3F50(void);
    void func_00193C20(int count, float dt, int a3, Env_00193C20 *env, int a5, Tgt_00193C20 *tgt,
                       V4_00193C20 v, int last);
};

extern char D_002A9934;
void *func_001E8AA5(int size);
struct S_00193AF0;
void func_00193AF0(S_00193AF0 *p);

struct Args_00193240 {
    char pad0[0x30];
    int *f30;
    int f34;
};
extern Root_00193240 *D_002A8490;
extern int D_002A9868;
extern char D_0028ACB4[];
extern char D_0028AC8C[];
extern f32 D_0028AC88;
extern f32 D_00275460;
extern f32 D_00278788;
extern u16 D_002EFE50;
extern u16 D_002EFE54;
extern int D_002EFE48;
extern Owner_00193240 *D_002EFE4C;
extern char D_002EFD38[];
extern char *D_002EFDB8;
void func_0013E260(Log_00193240 *o, int id, const char *fmt, ...);
void func_0013E1F0(Log_00193240 *o, int id, const char *fmt, ...);
int func_001E8858(float f);
int func_0017C060(void *, void *, void *);
void func_00192C00(float, float, float, float, void *);
void func_001930F0(void);

void func_001E8390(void *p);
#include <xmmintrin.h>
static inline float sqrtf(float x)
{
    float r;
    _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x)));
    return r;
}
static __forceinline float sqrt_193600(const float &x)
{
    return _mm_sqrt_ss(*(__m128 *)&x).m128_f32[0];
}

struct C_00157600 {
    void func_00157600(int a0);
    void func_00157660(void);
};

struct Query_00193530 {
    int func_0017A1D0(void *a, void *b, void **out);
    int func_0017A010(void *a, void *b, int c);
};

struct Link_00193530 {
    Link_00193530 *next;
    C_00192B50 *owner;
    Query_00193530 *query;
    void *fC;
    void *f10;
};

struct C_00192B50 {
    char pad0[0x24];
    Link_00193530 *f24;
    Handler_00193240 *func_00192B50(int a0);
};

struct S_00193240_V4 {
    f32 x;
    f32 y;
    f32 z;
    int w;
};

struct DelObj_00193240 {
    virtual void Destroy(int a0);
};

/* SegmentedCord */
struct C_00193B50 {
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
    void *f4C;
    u32 f50;
    DelObj_00193240 **f54;
    void *f58;
    C_00193B50 *func_00193B50(int a0);
    void func_00193BC0(void);
};

struct S_00193AF0 {
    char pad0[0x2c];
    f32 f2C;
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
};

struct V4_00194130 {
    float x, y, z, w;
};

extern int D_0028AD8C;
extern V4_00194130 D_002A9970;
extern float D_002A9974;
extern float D_002A9978;
extern float D_002A997C;

struct V4_00193EB0 {
    float x, y, z, w;
    V4_00193EB0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    V4_00193EB0 &operator+=(const V4_00193EB0 &o)
    {
        x += o.x;
        y += o.y;
        z += o.z;
        return *this;
    }
};
static inline V4_00193EB0 Sub_00193EB0(const V4_00193EB0 &a, const V4_00193EB0 &b)
{
    V4_00193EB0 r;
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
    r.w = 1.0f;
    return r;
}
struct Seg_00193EB0 {
    char pad0[0xc];
    V4_00193EB0 *fC;
    char *f10;
    char *f14;
};
struct Body_00193EB0 {
    void func_001994C0(int a0, V4_00193EB0 *q, int a2);
    void func_00199790(int a0, void *pos);
    void func_00199110(int a0, V4_00193EB0 *q, V4_00193EB0 *d, int a3, int a4, int a5);
};
struct Phys_00193EB0 {
    void func_00199A70(int a0, void *out);
    V4_00193EB0 *func_00197EC0(V4_00193EB0 *out, void *in);
};
struct List_00193EB0 {
    char pad0[0x3c];
    Seg_00193EB0 **f3c;
};
struct Cord_00193EB0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    V4_00193EB0 f28;
    V4_00193EB0 f38;
    char pad48[4];
    Body_00193EB0 **f4C;
    Phys_00193EB0 *f50;
    char pad54[4];
    List_00193EB0 *f58;
    void func_00193EB0(int a0);
    void func_00157A00(int a0);
};
extern float D_0028AD00;
extern float D_0028ACF0;
extern float D_0028ACE0;
extern float D_002A9924, D_002A9928, D_002A992C, D_002A9930;
static __forceinline __m128 Sq_00193EB0(__m128 x) { return _mm_mul_ps(x, x); }
static __forceinline __m128 Sum_00193EB0(__m128 x)
{
    return _mm_add_ss(_mm_add_ss(_mm_movehl_ps(Sq_00193EB0(x), Sq_00193EB0(x)), Sq_00193EB0(x)),
                      _mm_shuffle_ps(Sq_00193EB0(x), Sq_00193EB0(x), 0xe1));
}
static __forceinline __m128 SumE_00193EB0(__m128 x)
{
    return _mm_add_ss(Sum_00193EB0(x),
                      _mm_and_ps(_mm_cmplt_ss(Sum_00193EB0(x), _mm_load_ss(&D_0028AD00)),
                                 _mm_load_ss(&D_0028AD00)));
}
static __forceinline __m128 Inv_00193EB0(__m128 s)
{
    return _mm_mul_ss(_mm_mul_ss(_mm_rsqrt_ss(s), _mm_load_ss(&D_0028ACE0)),
                      _mm_sub_ss(_mm_load_ss(&D_0028ACF0),
                                 _mm_mul_ss(_mm_mul_ss(s, _mm_rsqrt_ss(s)), _mm_rsqrt_ss(s))));
}
static __forceinline void Normalize_00193EB0(V4_00193EB0 *out, V4_00193EB0 *in)
{
    _mm_storeu_ps(&out->x,
                  _mm_mul_ps(_mm_shuffle_ps(Inv_00193EB0(SumE_00193EB0(_mm_loadu_ps(&in->x))),
                                            Inv_00193EB0(SumE_00193EB0(_mm_loadu_ps(&in->x))), 0),
                             _mm_loadu_ps(&in->x)));
}

/* growable pointer array (3 methods in one Ghidra symbol at 0x194190) */
struct C_00194190 {
    char pad0[0x24];
    int f24;
    int f28;
    int f2c;
    char pad30[0x10];
    int *f40;
    void func_00194190(int a0);
};

/* SelectiveGravityModel */
struct C_00194130 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    float f2c;
    V4_00194130 f30;
    int f40;
    void func_00157600(int a0);
    C_00194130 *func_00194130(int a0);
};

undefined4 C_00194110::func_00194110(byte param_1)
{
  int func_00193BC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00193BC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_00194130 *C_00194130::func_00194130(int a0)
{
    u32 *p;

    func_00157600(a0);
    vtbl = (void *)&D_0028AD8C;
    p = (u32 *)&f30;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f28 = 0;
    f24 = 0;
    f2c = 32.2f;
    f30.x = D_002A9970.x;
    f30.y = D_002A9974;
    f30.z = D_002A9978;
    f30.w = D_002A997C;
    f40 = 0;
    return this;
}

/* 0x194190, setter for f2c. Ghidra merged three __thiscall methods into this
 * symbol; the other two start at 0x1941A0 and 0x1941D0, each separated by
 * alignment NOPs, so only this block belongs here. */
void C_00194190::func_00194190(int a0)
{
    f2c = a0;
}
