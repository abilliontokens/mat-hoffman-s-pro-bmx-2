/* 2 functions from 0x001458E0 to 0x001467A0, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
char *func_001E8AF0(const char *s, const char *pat);
void *func_001E8A44(unsigned int size);

/* typed accessors for the render-state entries (ctx, name, value, &value) */
extern "C" {
void func_00141340(int ctx, const char *name, int value, int *out);
void func_00140900(int ctx, const char *name, int value, int *out);
void func_001409A0(int ctx, const char *name, int value, int *out);
void func_001414A0(int ctx, const char *name, int value, int *out);
void func_001416E0(int ctx, const char *name, int value, int *out);
void func_00140CD0(int ctx, const char *name, int value, int *out);
void func_00141C10(int ctx, const char *name, int value, int *out);
void func_00141780(int ctx, const char *name, int value, int *out);
void func_001418C0(int ctx, const char *name, int value, int *out);
void func_00140820(int ctx, const char *name, int value, int *out);
void func_00141A00(int ctx, const char *name, int value, int *out);
void func_00141AA0(int ctx, const char *name, int value, int *out);
void func_00141B60(int ctx, const char *name, int value, int *out);
void func_00141D70(int ctx, const char *name, int value, int *out);
void func_00141E10(int ctx, const char *name, int value, int *out);
void func_00141EC0(int ctx, const char *name, int value, int *out);
}

/* object holding the 57 render-state values (0x188..0x268) */
struct S_001458E0_Obj {
    char pad0[0x188];
    int rs[57];
};

/* (0, 0, 0, 1) vector, stored z, y, x, w */
struct V4_00146540 {
    float x, y, z, w;
    V4_00146540() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

/* 0x14-byte element of C_00146540::f34 */
struct S_00146540_Elem {
    int id;
    V4_00146540 v;
    static void *operator new[](unsigned int size) { return func_001E8A44(size); }
};

struct S_00146540_Entry {
    const char *name;
    int value;
    int data;
    int refCount;
};

struct S_00146540_Table {
    void *vtbl;
    int unk4;
    int count;
    int capacity;
    int unk10;
    S_00146540_Entry *entries;
    const char *GetName(int i) { return entries[i].name; }
    int func_001AC7B0(const char *name, int unused);
};
extern S_00146540_Table *D_002A7520;

struct S_00146540_Cfg {
    int func_00168D70(const char *name, float *out, int count);
};

struct C_00146540 {
    char pad0[0x34];
    S_00146540_Elem *f34;
    char pad38[8];
    int f40;
    void func_00146540(S_00146540_Cfg *cfg);
};

void C_00146540::func_00146540(S_00146540_Cfg *cfg)
{
    int i;
    int k;
    int idx;

    f40 = 0;
    V4_00146540 vec;
    char buf[0x104];
    func_001ADCC0(buf, 0x104, "TexGenMatrixRow");
    for (i = 0; i < D_002A7520->count; i++) {
        if (cfg->func_00168D70(D_002A7520->GetName(i), &vec.x, 4)) {
            if (func_001E8AF0(D_002A7520->GetName(i), buf)) {
                if (i == 0) {
                    f40 += 4;
                }
            } else {
                f40++;
            }
        }
    }
    if (f40 > 0) {
        f34 = new S_00146540_Elem[f40];
    }
    if (f40 > 0) {
        func_001ADCC0(buf, 0x104, "TexGenMatrixRow%d", 1);
        if (cfg->func_00168D70(buf, &vec.x, 4)) {
            V4_00146540 rows[4];
            for (k = 0; k < 4; k++) {
                func_001ADCC0(buf, 0x104, "TexGenMatrixRow%d", k + 1);
                idx = D_002A7520->func_001AC7B0(buf, 1);
                f34[k].id = D_002A7520->entries[idx].value;
                f34[k].v = vec;
            }
        }
    }
    for (i = 0; i < D_002A7520->count; i++) {
        if (cfg->func_00168D70(D_002A7520->GetName(i), &vec.x, 4)) {
            f34[i].id = D_002A7520->entries[i].value;
            f34[i].v = vec;
        }
    }
}
