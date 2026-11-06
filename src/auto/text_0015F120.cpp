/* 7 functions from 0x0015F120 to 0x0015FF80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <string.h>
extern float D_00275460;
extern float D_00287890;
extern float D_00287880;
extern float D_00287870;
struct V4_0015F120 { float x, y, z, w; };
struct L_0015F120 {
    float f0, f4, f8, fC, f10, f14, f18, f1C;
    char pad20[0x20];
    float f40, f44, f48;
    char pad4C[8];
    float f54, f58, f5C;
};
struct E_0015F120 {
    char pad0[0x28];
    int type;
    L_0015F120 l;
    char pad8C[0x8];
    float px, py, pz;
};
float __stdcall func_0015E4B0(float s, V4_0015F120 v, E_0015F120 *e);
static __forceinline void Normalize_0015F120(float *out, const float *in)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_00287890);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_00287870)), _mm_sub_ss(_mm_load_ss(&D_00287880), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}
struct C_0015F120 {
    char pad0[0x38];
    int *f38;
    char pad3C[0x14];
    V4_0015F120 *f50;
    char pad54[0x28];
    int f7C;
    char pad80[4];
    E_0015F120 **f84;
    void func_0015F120(int a, float x, float y, float z, float *m0, float *m1, float *m2);
};
struct S_0015F470_Row {
    int x, y, z, w;
};

struct S_0015F470_Mat {
    S_0015F470_Row row[4];
};

/* one entry of the table at +0x24; entry size 0xC8 */
struct S_0015F470_Entry {
    int f0;
    int f4;
    S_0015F470_Mat m[3];
};

struct C_0015F470 {
    char pad0[0x24];
    S_0015F470_Entry *f24;
    int f28;
    int f2C;
    int func_0015E5B0(void);
    int func_0015F470(int a, S_0015F470_Mat *m0, S_0015F470_Mat *m1, S_0015F470_Mat *m2);
    int func_0015F640(int a, S_0015F470_Mat *m0, S_0015F470_Mat *m1, S_0015F470_Mat *m2);

    /* index of the entry whose f0 is id, or -1 */
    int FindEntry(int id)
    {
        int i = 0;
        if (0 < f28) {
            S_0015F470_Entry *p = f24;
            do {
                if (p->f0 == id) {
                    return i;
                }
                i++;
                p++;
            } while (i < f28);
        }
        return -1;
    }
};

struct C_0015F860 {
    undefined4 func_0015F860(byte param_1);
};

struct C_0015F840 {
    undefined4 func_0015F840(byte param_1);
};

struct C_0015FF60_vt {
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void slot25();
    virtual void slot26();
    virtual void slot27();
    virtual void slot28();
    virtual void slot29();
    virtual void slot30();
    virtual void slot31();
    virtual void slot32();
    virtual void slot33();
    virtual void slot34();
    virtual void slot35();
    virtual void slot36();
    virtual void slot37(int a);
};

struct C_0015FF60 {
    char unk00[0x78];
    C_0015FF60_vt *unk78;
    void func_0015FF60(int *a);
};


static __forceinline float Sqrt_15F880(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }
extern float D_002A8060, D_002A805C, D_002A8064;
extern unsigned char D_002A8010;
extern float D_002A80A8;
struct Iter_15F880 {
 char data[0x40];
 void func_001A46F0();
 void func_001A4790(void*, int, V4_0015F120*, V4_0015F120*, V4_0015F120*, V4_0015F120*, int);
 char *func_001A4840();
 void func_001A4A20();
};
struct Query_15F880 {
 int data[10];
 void func_00193490();
 void func_00193500();
};
struct C_15F880 {
 char pad[0x34]; E_0015F120 *f34; int *f38; char pad3c[0x14];
 V4_0015F120 *f50; char pad54[0x18]; int *f6c; char pad70[8];
 int f78, f7c; char pad80[12]; C_0015F470 *f8c;
 void func_0015F880(void*, V4_0015F120, float, float*, float*, float*);
 void func_0015F120(int, V4_0015F120, float*, float*, float*);
 void func_0015E130(void*, V4_0015F120*, float, float*, float*);
};
void func_0015CD90(V4_0015F120*, V4_0015F120*);

int C_0015F470::func_0015F470(int a, S_0015F470_Mat *m0, S_0015F470_Mat *m1, S_0015F470_Mat *m2)
{
    int i = func_0015E5B0();
    f24[i].m[0].row[0] = m0->row[0];
    f24[i].m[1].row[0] = m1->row[0];
    f24[i].m[2].row[0] = m2->row[0];
    f24[i].m[0].row[1] = m0->row[1];
    f24[i].m[1].row[1] = m1->row[1];
    f24[i].m[2].row[1] = m2->row[1];
    f24[i].m[0].row[2] = m0->row[2];
    f24[i].m[1].row[2] = m1->row[2];
    f24[i].m[2].row[2] = m2->row[2];
    f24[i].m[0].row[3] = m0->row[3];
    f24[i].m[1].row[3] = m1->row[3];
    f24[i].m[2].row[3] = m2->row[3];
    f24[i].f4 = f2C;
    f24[i].f0 = a;
    return 1;
}

int C_0015F470::func_0015F640(int a, S_0015F470_Mat *m0, S_0015F470_Mat *m1, S_0015F470_Mat *m2)
{
    int i = FindEntry(a);
    if (i < 0) {
        return 0;
    }
    m0->row[0] = f24[i].m[0].row[0];
    m1->row[0] = f24[i].m[1].row[0];
    m2->row[0] = f24[i].m[2].row[0];
    m0->row[1] = f24[i].m[0].row[1];
    m1->row[1] = f24[i].m[1].row[1];
    m2->row[1] = f24[i].m[2].row[1];
    m0->row[2] = f24[i].m[0].row[2];
    m1->row[2] = f24[i].m[1].row[2];
    m2->row[2] = f24[i].m[2].row[2];
    m0->row[3] = f24[i].m[0].row[3];
    m1->row[3] = f24[i].m[1].row[3];
    m2->row[3] = f24[i].m[2].row[3];
    f24[i].f4 = f2C;
    return 1;
}

undefined4 C_0015F840::func_0015F840(byte param_1)
{
  int func_0015E600(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015E600();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0015F860::func_0015F860(byte param_1)
{
  int func_0015F080(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015F080();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_0015FF60::func_0015FF60(int *a)
{
  unk78->slot37(*a);
}

