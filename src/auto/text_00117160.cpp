/* 1 function from 0x00117160 to 0x00118380, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern float D_00275544;
extern float D_00276094;
extern float D_002755E8;
extern float D_002755F4;
extern float D_00275460;
extern int D_002B9108;
extern int D_002B911C;
extern char *D_002A8490;

int func_001E8858(double x);
float func_0001C870(float a, int b, float c, float d, float e);
void __stdcall func_00028CD0(void *a);

struct VSlot10_00117160 {
    virtual void pad0(); virtual void pad1(); virtual void pad2(); virtual void pad3();
    virtual void Slot10();
};
struct VSlot74_00117160 {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4();
    virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9();
    virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14();
    virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24();
    virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28();
    virtual void Slot74(int a, int b, int c);
};
struct Obj1E8_00117160 {
    int func_00026A70(int a);
};
struct Obj5xx_00117160 {
    float func_000260F0();
    void func_000261F0(int a);
};
struct Rider_00117160 {
    void func_00117160(float dt);
    void func_00027850(float f);
    void func_00028070();
    void func_000292C0();
    void func_000295D0(int a);
    void func_00107A40(int a);
    void func_00107AB0();
    void func_00109090();
    void func_00027E40();
    void func_0010DCB0();
    void func_0010E2A0();
    int func_00028130(int *a, int b, int *c);
};

static inline float Abs_00117160(float f)
{
    int i = *(int *)&f & 0x7fffffff;
    return *(float *)&i;
}

#define RF(o) (*(float*)((char*)this + (o)))
#define RI(o) (*(int*)((char*)this + (o)))
#define RP(o) (*(char**)((char*)this + (o)))

void Rider_00117160::func_00117160(float dt)
{
    if (RI(0x680)) {
        if (Abs_00117160(RF(0x964)) < RF(0x4d8)) {
            RF(0x964) = 0;
            if (Abs_00117160(RF(0x968)) < RF(0x4d8)) {
                RF(0x968) = 0;
            } else {
                int sign = -1;
                if (!(RF(0x968) < D_00275544))
                    sign = 1;
                RF(0x968) = func_0001C870(Abs_00117160(RF(0x968)), 0, RF(0x4d8), 1.0f, 1.0f) * sign;
            }
        } else {
            int sign = -1;
            if (!(RF(0x964) < D_00275544))
                sign = 1;
            RF(0x964) = func_0001C870(Abs_00117160(RF(0x964)), 0, RF(0x4d8), 1.0f, 1.0f) * sign;
            RF(0x968) = 0;
        }
        float a = dt * RF(0x4d0);
        float b = dt * RF(0x4d4);
        float na = -a;
        float d = RF(0x964) - RF(0x9f8);
        d = d > na ? d : na;
        d = d < a ? d : a;
        RF(0x9f8) += d;
        float nb = -b;
        d = RF(0x968) - RF(0x9fc);
        d = d > nb ? d : nb;
        d = d < b ? d : b;
        RF(0x9fc) += d;
        RI(0x458) = RI(0x454);
        RI(0x11d4) = RI(0x69c);
        if (RI(0x1190) == 0) {
            *(int*)(RP(0x1ec) + 0x24) = 0;
            func_00027850(1.0f);
            RF(0x1248) = func_0001C870(Abs_00117160(RF(0x760)), RI(0x4b8), RF(0x4c0), RF(0x4bc), RF(0x4c4));
            RF(0x4b0) = RF(0x9f8) * D_00276094;
            RF(0x4b4) = RF(0x1248) * RF(0x4b0);
            *(int*)(RP(0x208) + 0x2c) = 0;
            return;
        }
    }
}
