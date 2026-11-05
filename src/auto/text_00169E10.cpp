/* 9 functions from 0x00169E10 to 0x0016AE10, found by Ghidra. */
#include "common.h"

extern char D_00276274[];

int func_0014FDF0(void *a, const void *b);
void func_0014FE50(void *p);

struct C_001D3F50 {
    void func_001D3F50(void);
};

/* local scratch object built on the stack (size 0x4cc) */
struct C_00168280 {
    char data[0x4cc];
    C_00168280 *func_00168280(void);
    int func_00169490(char *buf, int flag);
    void func_001691E0(void);
};

/* virtual slots 34 and 35 of ParticleEmitter */
struct ParticleEmitterVT {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33();
    virtual void v34(void *a);
    virtual void v35(void *a);
};

struct ParticleEmitter {
    void *vtbl;
    char pad4[0x40];
    u32 f44;
    u32 f48;
    u32 f4C;
    u32 f50;
    char pad54[0x10];
    void *f64;
    void *f68;
    u32 f6C;
    ParticleEmitter *func_0016A1D0(void *a, void *b, u32 *c);
    int func_0016A330(char *buf);
    int func_0016A8D0(void);
};

int ParticleEmitter::func_0016A8D0(void) {
    void *p = (void *)func_0014FDF0(&f6C, D_00276274);
    if (p != 0) {
        func_0014FE50(p);
        ((ParticleEmitterVT *)this)->v35(&f6C);
    }
    return 1;
}
