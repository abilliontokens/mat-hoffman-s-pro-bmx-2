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
float func_0001C870(float a, float b, float c, float d, float e);
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
    void func_00027850(int f);
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

#pragma warning(disable: 4700)
extern "C" int __cdecl strcmp(const char *, const char *);
#pragma warning(disable: 4700)
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
                float av = Abs_00117160(RF(0x968));
                RF(0x968) = func_0001C870(*(int *)&av, 0, RI(0x4d8), 0x3f800000, 0x3f800000) * sign;
            }
        } else {
            int sign = -1;
            if (!(RF(0x964) < D_00275544))
                sign = 1;
            float av = Abs_00117160(RF(0x964));
            RF(0x964) = func_0001C870(*(int *)&av, 0, RI(0x4d8), 0x3f800000, 0x3f800000) * sign;
            RF(0x968) = 0;
        }
    }
    float amax = dt * RF(0x4d0);
    float bmax = dt * RF(0x4d4);
    float amin = -amax;
    float d1 = RF(0x964) - RF(0x9f8);
    d1 = AsmMaxF(d1, amin);
    d1 = AsmMinF(d1, amax);
    RF(0x9f8) += d1;
    float bmin = -bmax;
    float d2 = RF(0x968) - RF(0x9fc);
    d2 = AsmMaxF(d2, bmin);
    d2 = AsmMinF(d2, bmax);
    RF(0x9fc) += d2;
    RI(0x458) = RI(0x454);
    RI(0x11d4) = RI(0x69c);
    if (RI(0x1190) == 0) {
        *(int *)(RP(0x1ec) + 0x24) = 0;
        func_00027850(0x3f800000);
        float av1 = Abs_00117160(RF(0x760));
        RF(0x1248) = func_0001C870(*(int *)&av1, RI(0x4b8), RI(0x4c0), RI(0x4bc), RI(0x4c4));
        RF(0x4b0) = RF(0x9f8) * D_00276094;
        RF(0x4b4) = RF(0x1248) * RF(0x4b0);
        *(int *)(RP(0x208) + 0x2c) = 0;
        return;
    }
    if (RI(0x5c8) != 0) {
        ((VSlot10_00117160 *)RP(0xa08))->Slot10();
        ((VSlot10_00117160 *)RP(0xa0c))->Slot10();
        ((VSlot10_00117160 *)RP(0xa10))->Slot10();
        ((VSlot10_00117160 *)RP(0xa14))->Slot10();
        *(int *)(RP(0x1ec) + 0x24) = 0;
        RI(0x9cc) = 0;
        func_00027850(0);
        *(int *)(RP(0x208) + 0x2c) = 0;
        *(int *)(RP(0x1e0) + 0x198) = 0;
        *(int *)(RP(0x1e0) + 0x190) = 0;
        float e1 = -RF(0x4b4);
        e1 = AsmMinF(e1, amax);
        e1 = AsmMaxF(e1, amin);
        RF(0x4b4) += e1;
        float e2 = -RF(0x4b0);
        e2 = AsmMinF(e2, amax);
        e2 = AsmMaxF(e2, amin);
        RF(0x4b0) += e2;
        return;
    }
    if (RF(0x9a0) == D_00275544) {
        *(int *)(RP(0x1ec) + 0x24) = 0;
        func_00027850(RI(0x9a0));
        RI(0x9cc) = 0;
    } else if (RF(0x99c) == D_00275544) {
        *(int *)(RP(0x1ec) + 0x24) = 1;
        *(int *)(RP(0x1ec) + 0x28) = 0;
        *(float *)(RP(0x1ec) + 0x30) = *(float *)(RP(0x1ec) + 0x3c) * RF(0x20c0);
        func_00027850(0);
        RI(0x9cc) = 1;
    } else if (RI(0x454) != 0) {
        *(int *)(RP(0x1ec) + 0x24) = 1;
        *(int *)(RP(0x1ec) + 0x28) = (RI(0x20ac) != 0);
        *(float *)(RP(0x1ec) + 0x30) = *(float *)(RP(0x1ec) + 0x40) * RF(0x20c0);
        func_00027850(0);
    } else if (RF(0x760) < D_00275544) {
        *(int *)(RP(0x1ec) + 0x24) = 0;
        *(int *)(RP(0x1ec) + 0x28) = 0;
        func_00027850(0);
    } else {
        char *lec = RP(0x1ec);
        float t34 = *(float *)(lec + 0x34) * D_002755E8;
        if (t34 > RF(0x760) && RI(0x9cc) == 0) {
            *(int *)(lec + 0x24) = 0;
            func_00027850(0x3f800000);
        } else {
            float sum = (*(float *)(lec + 0x38) + *(float *)(lec + 0x34)) * D_002755E8;
            *(int *)(lec + 0x24) = 1;
            if (sum > RF(0x760)) {
                *(int *)(lec + 0x28) = 0;
                *(float *)(lec + 0x30) = *(float *)(lec + 0x34) * RF(0x20c0);
            } else {
                *(int *)(lec + 0x28) = 0;
                *(float *)(lec + 0x30) = *(float *)(lec + 0x38) * RF(0x20c0);
            }
            func_00027850(0);
        }
    }
    RI(0x62c) = RI(0x964);
    *(int *)(RP(0x208) + 0x2c) = 1;
    *(int *)(RP(0x208) + 0x40) = (int)RF(0x9a8);
    *(int *)(RP(0x208) + 0x44) = (int)RF(0x9ac);
    *(int *)(RP(0x208) + 0x3c) = (RF(0x9bc) == D_00275544) ? 1 : 0;
    int garbage;
    ((VSlot74_00117160 *)RP(0x208))->Slot74(RI(0x964), RI(0x968), garbage);
    if (RI(0x9d4) != 0 && *(int *)(RP(0x1e8) + 0x68) != 0
        && ((Obj1E8_00117160 *)RP(0x1e8))->func_00026A70(D_002B9108) == 0
        && ((Obj1E8_00117160 *)RP(0x1e8))->func_00026A70(D_002B911C) == 0)
        *(int *)(RP(0x20c) + 0x30) = 1;
    else
        *(int *)(RP(0x20c) + 0x30) = 0;
    if (RI(0x11f4) == 1)
        RF(0x4b0) = RF(0x4b0) * D_002755F4;
    else
        RF(0x4b0) = RF(0x9f8) * D_00276094;
    {
        float av760 = Abs_00117160(RF(0x760));
        RF(0x1248) = func_0001C870(*(int *)&av760, RI(0x4b8), RI(0x4c0), RI(0x4bc), RI(0x4c4));
    }
    if (Abs_00117160(RF(0x9f8)) < D_00275460) {
        RF(0x1250) += dt;
        RF(0x4b4) = func_0001C870(RI(0x1250), 0, RI(0x1254), RI(0x124c), RI(0x1258)) * RF(0x1248) * RF(0x9f8);
    } else {
        RF(0x4b4) = RF(0x1254) * RF(0x1248) * RF(0x9f8);
        RI(0x1250) = 0;
    }
    int matched = 0;
    int flag = 1;
    int l18;
    int l1c = 0;
    if (func_00028130(&l1c, 1, &l18) != 0) {
        func_00028CD0(*(void **)(RP(0x210) + 0x30));
        if (RI(0x470) == 0) {
            int kind = (l1c != 0) + 2;
            if (func_00028130(&kind, 0, &l18) == 0)
                goto trickReset;
        }
        if (strcmp(*(char **)(*(char **)(RP(0x210) + 0x30) + 0x14),
                   *(char **)(*(char **)(RP(0x210) + 0x34) + 0x14)) == 0) {
            RI(0x71c) = RI(0x718);
            func_00109090();
            func_00027E40();
            func_0010DCB0();
            goto scoring;
        }
    }
trickReset:
    func_00028070();
    if (RI(0x704) == 0 && RI(0x70c) == 0 && RI(0x69c) == 0 && l18 == 0) {
        func_000292C0();
        if (RI(0x69c) == 0)
            func_000295D0(1);
    }
scoring:
    if (RI(0x11dc) == 0) {
        int trickId = *(int *)(RP(0x1084) + 0x2c);
        if (trickId == -1 || trickId >= 0x3e8)
            return;
        switch (RI(0x9d8)) {
        case 0:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + trickId * 4 + 0x2434) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + trickId * 4 + 0x254c) != 0)
                    flag = 0;
            }
            break;
        case 2:
            matched = *(int *)((char *)*(int **)(RP(0x24) + 0x52c) + trickId * 4 + 0x2664);
            flag = 0;
            break;
        case 3:
            matched = *(int *)((char *)*(int **)(RP(0x24) + 0x52c) + trickId * 4 + 0x277c);
            flag = 0;
            break;
        case 5:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + trickId * 4 + 0x29ac) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + trickId * 4 + 0x2894) != 0)
                    flag = 0;
            }
            break;
        case 6:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + trickId * 4 + 0x2ac4) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + trickId * 4 + 0x2bdc) != 0)
                    flag = 0;
            }
            break;
        }
    } else if (RI(0x470) == 0) {
        switch (RI(0x9d8)) {
        case 0:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x6a28) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x6a48) != 0)
                    flag = 0;
            }
            break;
        case 2:
            matched = *(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x6a68);
            flag = 0;
            break;
        case 3:
            matched = *(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x6a88);
            flag = 0;
            break;
        case 5:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x6ac8) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x6aa8) != 0)
                    flag = 0;
            }
            break;
        case 6:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x6ae8) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x6b08) != 0)
                    flag = 0;
            }
            break;
        }
    } else if (RI(0x480) != 0) {
        switch (RI(0x9d8)) {
        case 0:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7808) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7828) != 0)
                    flag = 0;
            }
            break;
        case 2:
            matched = *(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7848);
            flag = 0;
            break;
        case 3:
            matched = *(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7868);
            flag = 0;
            break;
        case 5:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x78a8) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7888) != 0)
                    flag = 0;
            }
            break;
        case 6:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x78c8) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x78e8) != 0)
                    flag = 0;
            }
            break;
        }
    } else {
        switch (RI(0x9d8)) {
        case 0:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7968) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7988) != 0)
                    flag = 0;
            }
            break;
        case 2:
            matched = *(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7988);
            flag = 0;
            break;
        case 3:
            matched = *(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x79a8);
            flag = 0;
            break;
        case 5:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7a08) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x79e8) != 0)
                    flag = 0;
            }
            break;
        case 6:
            if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7a28) != 0) {
                matched = 1;
                if (*(int *)((char *)*(int **)(RP(0x24) + 0x52c) + RI(0x718) * 4 + 0x7a48) != 0)
                    flag = 0;
            }
            break;
        }
    }
    if (matched == 0)
        return;
    if (RI(0x9d8) != -1) {
        if (RI(0x454) == 0) {
            if (RI(0x11dc) != 0)
                ((Obj5xx_00117160 *)RP(0x5ec))->func_000261F0(RI(0x600));
        } else {
            ((Obj5xx_00117160 *)RP(0x5f0))->func_000261F0(RI(0x608));
        }
    }
    switch (RI(0x9d8)) {
    case 0:
        RI(0x1614) = 0; RI(0x1618) = 0; RI(0x161c) = 0; RI(0x1e64) = 0; RI(0x113c) = 0;
        RI(0xa44) = (flag == 0);
        break;
    case 2:
        RI(0x1614) = 0; RI(0x1618) = 0; RI(0x161c) = 0; RI(0x1e64) = 0; RI(0x113c) = 0;
        RI(0xa44) = 2;
        break;
    case 3:
        RI(0x1614) = 0; RI(0x1618) = 0; RI(0x161c) = 0; RI(0x1e64) = 0; RI(0x113c) = 0;
        RI(0xa44) = 4 - (flag != 0);
        break;
    case 5:
        RI(0x1614) = 0; RI(0x1618) = 0; RI(0x161c) = 0; RI(0x1e64) = 0; RI(0x113c) = 0;
        RI(0xa44) = 5;
        break;
    case 6:
        RI(0x1614) = 0; RI(0x1618) = 0; RI(0x161c) = 0; RI(0x1e64) = 0; RI(0x113c) = 0;
        RI(0xa44) = 7 - (flag != 0);
        break;
    }
    RI(0x1624) = 1;
    RF(0x1620) = D_00275460 / (D_00275460 - RF(0x15f4));
}
