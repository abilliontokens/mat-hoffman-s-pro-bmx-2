/* 1 function from 0x0010C210 to 0x0010DA70, found by Ghidra. */
#include "common.h"
#include <string.h>

struct Cfg10 {
    Cfg10 *func_00168280();
    void func_00169490(void *a, int b);
    void func_00169710(const char *name);
    int func_00168B90(const char *name, void *out);
    int func_00168CB0(const char *name, void *out, void *a);
    int func_00168A10(const char *name, void *out);
    void func_001691E0();
};
struct Mgr10 {
    void func_0013B1A0(void *a);
};
struct VObj10 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(float a);
    virtual void v29(void *a);
};
struct Node230 {
    void func_0019A680(void *a, void *b);
    void func_00198B70(void *a, void *b);
};
struct Mat10 {
    void func_000264C0(void *src);
};
struct Sub261 {
    void func_00026170(Cfg10 *cfg);
    float func_00026110();
};
struct C_0010C210 {
    void func_0010C210();
};
struct Q10C { float x, y, z, w; Q10C() { z = 0; y = 0; x = 0; w = 1.0f; } };
struct M44C { float m[16]; };
struct Owner10C {
    void func_0010C210();
};
extern Mgr10 *D_002BEAAC;
extern "C" void *func_001E8A44(unsigned int size);
extern int func_001E891B(void *p);
extern float D_00275BF8;
extern float D_00283A7C;
extern float D_00283A78;
extern float D_00275998;
extern char D_00283B28[], D_00283B20[], D_00283B18[], D_00283B08[], D_00283AF4[], D_00283AE0[], D_00283AD0[], D_00283ABC[], D_00283AB4[], D_00283AAC[], D_00283AA4[], D_00283A98[], D_00283A8C[], D_00283A80[];
extern char D_00283A68[], D_00283A5C[], D_00283A4C[], D_00283A38[], D_00283A2C[], D_00283A20[], D_00283A10[], D_00283A00[], D_002839F4[], D_002839E0[], D_002839D0[], D_002839C0[], D_002839B8[], D_002839A8[], D_0028399C[], D_0028398C[], D_00283978[], D_00283964[], D_00283950[], D_00283940[], D_00283930[], D_0028391C[], D_00283904[], D_002838F4[], D_002838E4[], D_002838D0[], D_002838B8[], D_002838B0[];

void Owner10C::func_0010C210()
{
    char *s = (char *)this;
    D_002BEAAC->func_0013B1A0(s + 0x33c);
    Cfg10 *cfg;
    void *mem = func_001E8A44(0x4cc);
    if (mem != 0) {
        cfg = ((Cfg10 *)mem)->func_00168280();
    } else {
        cfg = 0;
    }
    cfg->func_00169490(s + 0x33c, 0);
    cfg->func_00169710(D_00283B28);
    float v3c;
    float v38;
    cfg->func_00168B90(D_00283B20, &v38);
    cfg->func_00168B90(D_00283B18, &v3c);
    cfg->func_00168B90(D_00283B08, s + 0x4a8);
    cfg->func_00168B90(D_00283AF4, s + 0x1198);
    cfg->func_00168B90(D_00283AE0, s + 0x119c);
    cfg->func_00168B90(D_00283AD0, s + 0x11a0);
    cfg->func_00168B90(D_00283ABC, s + 0x1654);
    cfg->func_00168B90(D_00283AB4, s + 0xec);
    cfg->func_00168B90(D_00283AAC, s + 0xf0);
    cfg->func_00168B90(D_00283AA4, s + 0xf4);
    cfg->func_00168B90(D_00283A98, s + 0xfc);
    cfg->func_00168B90(D_00283A8C, s + 0x100);
    cfg->func_00168B90(D_00283A80, s + 0x104);
    *(float *)(s + 0x28) = v3c * D_00275BF8;
    VObj10 *obj = *(VObj10 **)(s + 0x1e0);
    *(float *)((char *)obj + 0x190) = *(float *)(s + 0xec);
    *(float *)((char *)obj + 0x194) = *(float *)(s + 0xf0);
    *(float *)((char *)obj + 0x198) = *(float *)(s + 0xf4);
    *(float *)((char *)obj + 0x19c) = *(float *)(s + 0xf8);
    obj->v28(v38 * D_00283A7C);
    Q10C q2;
    Q10C q1;
    Node230 *node = *(Node230 **)(s + 0x230);
    node->func_0019A680(&q1, s + 0x7c);
    M44C matA;
    M44C matB;
    float *pm = matA.m;
    memset(pm, 0, 0x40);
    matB = matA;
    ((Mat10 *)(s + 0x8d0))->func_000264C0(&matB);
    float f7c = *(float *)(s + 0x7c);
    float f80 = *(float *)(s + 0x80);
    float f84 = *(float *)(s + 0x84);
    float obj210 = *(float *)((char *)(*(void **)(s + 0x1e0)) + 0x210);
    *(float *)(s + 0x8d0) = (f80 * f80 + f84 * f84) * (obj210 * D_00283A78) * *(float *)(s + 0x119c);
    *(float *)(s + 0x8e4) = (f7c * f7c + f84 * f84) * (obj210 * D_00283A78) * *(float *)(s + 0x11a0);
    *(float *)(s + 0x8f8) = (f7c * f7c + f80 * f80) * (obj210 * D_00283A78) * *(float *)(s + 0x1198);
    *(float *)(s + 0x90c) = 1.0f;
    *(unsigned char *)((char *)node + 0x180) &= 0xbf;
    *(unsigned char *)((char *)node + 0x180) |= 0x10;
    node->func_00198B70(&q1, &q2);
    M44C matC;
    M44C matD;
    float *pm2 = matC.m;
    memset(pm2, 0, 0x40);
    matD = matC;
    ((Mat10 *)(s + 0x910))->func_000264C0(&matD);
    *(float *)(s + 0x910) = (q1.y * q1.y + q1.z * q1.z) * (obj210 * D_00283A78) * *(float *)(s + 0x119c);
    *(float *)(s + 0x924) = (q1.x * q1.x + q1.y * q1.y) * (obj210 * D_00283A78) * *(float *)(s + 0x11a0);
    *(float *)(s + 0x938) = (q1.x * q1.x + q1.z * q1.z) * (obj210 * D_00283A78) * *(float *)(s + 0x1198);
    *(float *)(s + 0x94c) = 1.0f;
    (*(VObj10 **)(s + 0x1e0))->v29(s + 0x910);
    cfg->func_00169710(D_00283A68);
    char *o208 = *(char **)(s + 0x208);
    cfg->func_00168B90(D_00283A5C, o208 + 0x64);
    *(int *)(s + 0x7a4) = *(int *)(o208 + 0x64);
    cfg->func_00168B90(D_00283A4C, o208 + 0x68);
    *(int *)(s + 0x7a8) = *(int *)(o208 + 0x68);
    cfg->func_00168B90(D_00283A38, s + 0x7bc);
    *(int *)(s + 0x7c0) = *(int *)(s + 0x7bc);
    cfg->func_00168B90(D_00283A2C, o208 + 0x6c);
    cfg->func_00168B90(D_00283A20, o208 + 0x70);
    cfg->func_00168B90(D_00283A10, o208 + 0x74);
    cfg->func_00168B90(D_00283A00, o208 + 0x90);
    cfg->func_00168B90(D_002839F4, o208 + 0x78);
    cfg->func_00168B90(D_002839E0, o208 + 0x7c);
    cfg->func_00168B90(D_002839D0, o208 + 0x88);
    cfg->func_00168B90(D_002839C0, o208 + 0x8c);
    cfg->func_00169710(D_002839B8);
    cfg->func_00168B90(D_002839A8, s + 0x658);
    cfg->func_00168B90(D_0028399C, s + 0x660);
    *(float *)(s + 0x658) = *(float *)(s + 0x658) * D_00275998;
    *(float *)(s + 0x660) = *(float *)(s + 0x660) * D_00275998;
    cfg->func_00169710(D_0028398C);
    (*(Sub261 **)(s + 0x5ec))->func_00026170(cfg);
    cfg->func_00168B90(D_00283978, s + 0x5f8);
    cfg->func_00168B90(D_00283964, s + 0x5fc);
    cfg->func_00168B90(D_00283950, s + 0x600);
    cfg->func_00168B90(D_00283940, s + 0x7b4);
    *(float *)(s + 0x79c) = (*(Sub261 **)(s + 0x5ec))->func_00026110();
    cfg->func_00169710(D_00283930);
    (*(Sub261 **)(s + 0x5f0))->func_00026170(cfg);
    cfg->func_00168B90(D_0028391C, s + 0x604);
    cfg->func_00168B90(D_00283904, s + 0x608);
    cfg->func_00168B90(D_00283940, s + 0x7b8);
    *(float *)(s + 0x7a0) = (*(Sub261 **)(s + 0x5f0))->func_00026110();
    cfg->func_00169710(D_002838F4);
    (*(Sub261 **)(s + 0x5f4))->func_00026170(cfg);
    cfg->func_00169710(D_002838E4);
    cfg->func_00168B90(D_002838D0, o208 + 0x84);
    cfg->func_00168B90(D_002838B8, o208 + 0x80);
    cfg->func_00169710(D_002838B0);
    if (cfg != 0) {
        cfg->func_001691E0();
        func_001E891B(cfg);
    }
}
