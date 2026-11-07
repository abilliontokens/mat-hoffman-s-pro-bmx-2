/* 1 function from 0x0002D730 to 0x0002EB10, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
struct V4_2D730 {
    float x, y, z, w;
    V4_2D730() { z = y = x = 0.0f; w = 1.0f; }
};
static __forceinline float Abs_2D730(float a)
{
    unsigned int i = *(unsigned int *)&a & 0x7fffffff;
    return *(float *)&i;
}
static __forceinline void Cross_2D730(float *out, float *a, float *b)
{
    float *pa = a, *pb = b;
    _mm_storeu_ps(out, _mm_shuffle_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(pa), _mm_shuffle_ps(_mm_loadu_ps(pb), _mm_loadu_ps(pb), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(pb), _mm_shuffle_ps(_mm_loadu_ps(pa), _mm_loadu_ps(pa), 0xc9))),
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(pa), _mm_shuffle_ps(_mm_loadu_ps(pb), _mm_loadu_ps(pb), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(pb), _mm_shuffle_ps(_mm_loadu_ps(pa), _mm_loadu_ps(pa), 0xc9))), 0xc9));
}
struct S_2D730_Transform {
    void func_00197EC0(void *out, void *in);
    void func_001994C0(int, void *, void *);
    void func_00199110(int, void *, void *, int, int, int);
    float func_00026A10(float, float);
    void func_000269B0(float, float, float);
    void func_0001C5B0(void *);
};
void func_00026340(void *, void *);
float func_00011220(void *, void *);
void func_0001C5E0(void *, void *, float);

struct S_2D730_Component {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void tick(float dt);
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
    virtual void set_speed(float value);
};

struct S_2D730_Mgr {
    void *func_00026500(int a, void *b);
};

struct S_2D730_Sub {
    void func_00025E50(float f);
    void func_00030CE0(float);
    void func_00030E70(float);
    void func_001941F0(float);
    void func_00174550(int, int, int);
    void func_000B8AD0(int, int);
    void func_000B6A70(float);
    void func_00133EF0(void *p);
    void func_00134530(int mask, int *a, int *b, int n, int x, int y);
};

extern int D_002B7EA4;
extern int D_002B7EA0;
extern int D_002B7E9C;
extern int D_002B7E98;
extern int D_002A7CB8;
extern int D_002767AC;
extern int D_002767A4;
extern int D_002A1190;
extern float D_00275460;

struct S_2D730_Node {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
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
    virtual void update();
    char pad4[0x238 - 4];
    float f238, f23C, f240;
};

struct S_2D730_State {
    char pad0[0x24];
    int f24;
    char pad28[0x50 - 0x28];
    int f50, f54, f58;
    char pad5c[0x64 - 0x5c];
    int f64, f68, f6c, f70, f74;
    char pad78[0x8c - 0x78];
    int f8c;
    char pad90[0x1a0 - 0x90];
    int f1a0[4];
    char pad1b0[0x1d8 - 0x1b0];
    S_2D730_State *f1d8, *f1dc, *f1e0;
    int func_00026A70(int);
};

struct C_0002D730 {
    char pad0[0x1e0];
    S_2D730_Node *f1e0;
    void *f1e4;
    S_2D730_State *f1e8;
    void *f1ec, *f1f0, *f1f4, *f1f8, *f1fc, *f200;
    S_2D730_Sub *f204;
    void *f208, *f20c, *f210;
    char pad214[0x230 - 0x214];
    void *f230;
    int f234;
    int f238[4];
    char pad248[0x440 - 0x248];
    int f440;
    char pad444[0x454 - 0x444];
    int f454;
    char pad458[0x468 - 0x458];
    int f468;
    char pad46c[0x5f0 - 0x46c];
    S_2D730_Sub *f5f0;
    char pad5f4[0x69c - 0x5f4];
    int f69c;
    char pad6a0[0x6a8 - 0x6a0];
    int f6a8;
    char pad6ac[0x6c8 - 0x6ac];
    int f6c8;
    char pad6cc[0x6dc - 0x6cc];
    float f6dc, f6e0, f6e4;
    char pad6e8[0x6fc - 0x6e8];
    float f6fc, f700;
    void func_0002D730(float dt);
    void func_00027D60(void);
    void func_0002AF90(void);
    void func_0002A7C0(void);
    void func_00027C50(float);
    void func_0002CBC0(float);
    void func_000298F0(float);
    void func_00029E00(float);
    void func_0002A010(float);
    void func_0002C9A0(float);
    void func_0002CB00(float);
    void func_00027860(float);
    void func_0002A250(float);
};

extern float D_00275AEC;
int func_000292C0(void);

void C_0002D730::func_0002D730(float dt)
{
    int one = 1;

    if (!(D_002B7EA4 & 1)) {
        D_002B7EA4 |= 1;
        D_002B7EA0 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(-1, &D_002767AC);
    }
    if (!(D_002B7EA4 & 2)) {
        D_002B7EA4 |= 2;
        *(float *)&D_002B7E9C = D_00275460 / (float)D_002A1190;
    }
    if (!(D_002B7EA4 & 4)) {
        D_002B7EA4 |= 4;
        D_002B7E98 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(-1, &D_002767A4);
    }
    if (f454 != 0)
        f5f0->func_00025E50(dt);
    func_00027D60();
    if (f69c != 0) {
        f6fc = f6fc + dt;
        if (f6fc > f700) {
            f1e0->f238 = f1e0->f238 + f6dc * D_00275AEC;
            f1e0->f23C = f1e0->f23C + f6e0 * D_00275AEC;
            f1e0->f240 = f1e0->f240 + f6e4 * D_00275AEC;
            if (f1e8->f50 == 0 && f1e8->f54 == 0 && f468 == 0 && one) {
                if (func_000292C0() == 0) {
                    f69c = 0;
                    f6a8 = 0;
                }
            }
        }
    }
    if (f1e8->f68 != 0)
        f6c8 = 0;
}
