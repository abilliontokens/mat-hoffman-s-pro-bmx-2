/* 1 function from 0x00062070 to 0x00062CD0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

static __forceinline float Min_00062070(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

struct V4_62070 { float x, y, z, w; };
extern float D_002A1D04;
extern float D_00275460;
extern float D_002755EC;
extern V4_62070 D_002A1D98, D_002A1DA8, D_002A1DB8;
extern V4_62070 D_002A1DE8, D_002A1DF8, D_002A1E08;
struct C_Elem_62070 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x1C];
    float f28;
    float f2C;
    float f30;
    float f34;
    char pad38[0x20];
    unsigned char f58;
    void func_0005E7C0(float, float);
    __forceinline void pos(float x,float y) { if(f4!=x || f8!=y) {f4=x;f8=y;f58|=1;} }
    __forceinline void size(float z) { if(f2C!=z) {f2C=z;f58|=1;} if(f28!=z) {f28=z;f58|=1;} }
    __forceinline void layer(float z) { if(*(int *)&f34!=*(int *)&z) {f34=z;f58|=1;} }
};
extern V4_62070 D_002A1D88, D_002A1DD8, D_002A1D10;
extern float D_002A1E28, D_002A1E2C, D_002A1E30, D_002A1E34, D_002755E8, D_00278650, D_00278788, D_00278784;
struct S_62070_Control { void func_00052C10(int); };
struct C_00062070 {
    char pad0[0x12C];
    C_Elem_62070 *f12C[30];
    C_Elem_62070 *f1A4[32];
    int f224;
    int f228;
    int f22C;
    char pad230[0x234 - 0x230];
    float f234;
    char pad238[0x284 - 0x238];
    int f284;
    float func_0012BAE0(float t, float p0, float p1, float p2, float p3);
    void func_00062070(int a);
};

void C_00062070::func_00062070(int a)
{
    V4_62070 v;
    V4_62070 w;
    float m;
    float inv;

    if (f224 > 1 && f22C != 0) {
        if (f234 == D_002A1D04) {
            f22C = 0;
        }
        inv = D_00275460 / D_002A1D04;
        AsmFloatToInt(inv * f234 * D_002755EC, &f284);
        m = AsmMinF(1.0f, inv * f234);
        if (f224 == 2) {
            w = D_002A1DE8;
            v = D_002A1D98;
        } else if (f224 == 3) {
            w = D_002A1DF8;
            v = D_002A1DA8;
        } else {
            w = D_002A1E08;
            v = D_002A1DB8;
        }
        f228 = (int)(v.x + w.x + m);
    }
}
