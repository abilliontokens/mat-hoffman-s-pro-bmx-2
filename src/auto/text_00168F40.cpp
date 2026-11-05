/* 13 functions from 0x00168F40 to 0x00169E10, found by Ghidra. */
#include "common.h"
extern int D_00288084;
void func_001E891B(void *p);
void func_00168210(int type, float val, void *p);
float func_001E9649(float x);

struct C_00157660 {
    void func_00157660(void);
};

struct ParticleEmitter {
    void *vtbl;
    char pad4[0x1b8];
    void *unk1BC;
    void func_00169DE0(void);
};

struct Entry_00169010 {
    int type;
    float val;
};

struct C_00169010 {
    char pad0[0x434];
    int count;
    Entry_00169010 e[1];
    int func_00169010(int idx, float *out);
    int func_00169090(int idx, void *p);
};

/* virtual slots 6, 30 and 32 of the object func_00169C00 is handed */
struct VT_00169C00 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32();
};

void ParticleEmitter::func_00169DE0(void)
{
    void *p = unk1BC;

    vtbl = (void *)&D_00288084;
    if (p != 0) {
        func_001E891B(p);
    }
    ((C_00157660 *)this)->func_00157660();
}
