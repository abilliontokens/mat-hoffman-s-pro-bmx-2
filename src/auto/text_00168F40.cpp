/* 13 functions from 0x00168F40 to 0x00169E10, found by Ghidra. */
#include "common.h"
extern int D_00288084;
void func_001E891B(void *p);
void func_00168210(int type, float val, void *p);
float func_001E9649(float x);

struct C_00157660 {
    void func_00157660(void);
};

/* the engine's file wrapper (D_002BEAAC) */
struct C_0013B210 {
    void func_0013AFF0(int a, int b, int c);
    void func_0013C8A0(int h, void *buf, int size, int count);
};
extern C_0013B210 *D_002BEAAC;

/* table row of C_00168F40::f18 */
struct S_00168F40_Entry {
    int offset;
    int size;
    char pad8[0x408];
};

/* table row of C_00168F40::f4B8 */
struct S_00168F40_Index {
    int offset;
    int unk4;
};

struct C_00168F40 {
    int f0;
    int f4;
    char pad8[0x10];
    S_00168F40_Entry *f18;
    char pad1C[0x408];
    int f424;
    char pad428[4];
    int f42C;
    int f430;
    char pad434[0x84];
    S_00168F40_Index *f4B8;
    int func_00168300(int id);
    int lookup(int k)
    {
        return func_00168300(k);
    }
    int func_00168F40(int id);
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

int C_00168F40::func_00168F40(int id)
{
    int idx;
    int key;

    key = id;
    idx = func_00168300(key);
    if (func_00168300(key) != -1) {
        if (f4 != 0) {
            D_002BEAAC->func_0013AFF0(f0, f4B8[idx].offset, 0);
            id = 0;
            D_002BEAAC->func_0013C8A0(f0, &id, 4, 1);
            f430 = 0;
            f424 = 1;
            f42C = id;
            return id;
        }
        D_002BEAAC->func_0013AFF0(f0, f18[idx].offset, 0);
        f430 = 0;
        f424 = 1;
        f42C = f18[idx].size;
        return f42C;
    }
    return 0;
}

int C_00169010::func_00169010(int idx, float *out)
{
    Entry_00169010 ent;

    if (idx > count) {
        return 0;
    }
    ent = e[idx];
    switch (ent.type) {
    case 0:
        *out = ent.val;
        return 1;
    case 1:
        *out = ent.val;
        return 1;
    case 2:
        *out = func_001E9649(ent.val);
        return 1;
    }
    return 1;
}

int C_00169010::func_00169090(int idx, void *p)
{
    if (idx >= count) {
        return 0;
    }
    func_00168210(e[idx].type, e[idx].val, p);
    return 1;
}

void func_00169C00(void *a0, void *a1, VT_00169C00 *obj, int flag)
{
    if (flag != 0) {
        obj->v32();
        obj->v30();
        obj->v6();
    }
}

void ParticleEmitter::func_00169DE0(void)
{
    void *p = unk1BC;

    vtbl = (void *)&D_00288084;
    if (p != 0) {
        func_001E891B(p);
    }
    ((C_00157660 *)this)->func_00157660();
}
