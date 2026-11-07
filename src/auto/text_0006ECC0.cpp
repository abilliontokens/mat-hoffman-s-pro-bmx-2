/* 1 function from 0x0006ECC0 to 0x0006FBF0, found by Ghidra. */
#include "common.h"

struct W_6ECC0 {
    void func_001B13A0(const char *a, const char *b, int c, int d);
    void func_001B1A30(float w, float h, int e);
    void func_001B19A0(void *p);
    void func_001B2270(unsigned int color);
    void func_001B15F0(void);
    int func_001B1800(void);
    W_6ECC0 *func_001B12C0(int a);
    void func_001B1810(float *out);
};

struct Mgr_6ECC0 {
    char pad0[0x2E0];
    void *f2E0;
    char pad2E4[4];
    void *f2E8;
    void *f2EC;
    void func_0018C780(int count, void *arr, int flags);
    void *func_0018C160(const char *key);
};

struct C_0006ECC0 {
    char pad0[0xD0];
    W_6ECC0 *fD0;
    W_6ECC0 *fD4;
    W_6ECC0 *fD8;
    W_6ECC0 *fDC;
    W_6ECC0 *fE0;
    char padE4[8];
    int fEC;
    void func_001577A0(W_6ECC0 *w, int idx);
    void func_0006ECC0(int a);
};

extern Mgr_6ECC0 *D_002A8490;
extern char D_00278678[];
extern char D_00278690[];
extern float D_0028F5DC;
extern char D_00276228[];
extern void *D_0028F5E0;

void *func_001E8A44(int size);
void *func_001B12C0(void *p, int a);

void C_0006ECC0::func_0006ECC0(int a)
{
    char *keys[2];
    int n;
    int m2;
    W_6ECC0 *w;

    fEC = a;
    keys[0] = D_00278678;
    keys[1] = D_00278690;
    D_002A8490->func_0018C780(2, keys, 0);
    {
        void *p = D_002A8490->func_0018C160(D_00278690);
        n = p ? *(int *)p : 0;
    }
    {
        void *p = D_002A8490->func_0018C160(D_00278678);
        m2 = p ? *(int *)p : 0;
    }
    w = (W_6ECC0 *)func_001E8A44(0x184);
    w = w ? (W_6ECC0 *)func_001B12C0(w, 1) : 0;
    fD0 = w;
    w->func_001B13A0(D_00278690, D_00278690, 0, 0x32);
    w->func_001B1A30(240.0f, 157.0f, 0);
    w->func_001B19A0(&D_0028F5DC);
    w->func_001B2270(0xffbfa35a);
    w->func_001B15F0();
    func_001577A0(w, -1);
}
