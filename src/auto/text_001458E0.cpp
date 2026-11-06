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
void func_00140820(int ctx, const char *name, float value, void *out);
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

void __stdcall func_001458E0(int ctx, S_001458E0_Obj *obj, int *out, int *count)
{
    int v;

    v = obj->rs[0];
    if (ctx) func_00141340(ctx, "ZFUNC", v, &v);
    out[0] = 0x39; out[1] = v; out += 2; ++*count;

    v = obj->rs[1];
    if (ctx) func_00141340(ctx, "ALPHAFUNC", v, &v);
    out[0] = 0x3a; out[1] = v; out += 2; ++*count;

    v = obj->rs[2];
    if (ctx) func_00140900(ctx, "ALPHABLENDENABLE", v, &v);
    out[0] = 0x3b; out[1] = v; out += 2; ++*count;

    v = obj->rs[3];
    if (ctx) func_00140900(ctx, "ALPHATESTENABLE", v, &v);
    out[0] = 0x3c; out[1] = v; out += 2; ++*count;

    v = obj->rs[4];
    if (ctx) func_001409A0(ctx, "ALPHAREF", v, &v);
    out[0] = 0x3d; out[1] = v; out += 2; ++*count;

    v = obj->rs[5];
    if (ctx) func_001414A0(ctx, "SRCBLEND", v, &v);
    out[0] = 0x3e; out[1] = v; out += 2; ++*count;

    v = obj->rs[6];
    if (ctx) func_001414A0(ctx, "DESTBLEND", v, &v);
    out[0] = 0x3f; out[1] = v; out += 2; ++*count;

    v = obj->rs[7];
    if (ctx) func_00140900(ctx, "ZWRITEENABLE", v, &v);
    out[0] = 0x40; out[1] = v; out += 2; ++*count;

    v = obj->rs[8];
    if (ctx) func_001416E0(ctx, "SHADEMODE", v, &v);
    out[0] = 0x42; out[1] = v; out += 2; ++*count;

    v = obj->rs[9];
    if (ctx) func_00140CD0(ctx, "COLORWRITEENABLE", v, &v);
    out[0] = 0x43; out[1] = v; out += 2; ++*count;

    v = obj->rs[10];
    if (ctx) func_00141C10(ctx, "STENCILZFAIL", v, &v);
    out[0] = 0x44; out[1] = v; out += 2; ++*count;

    v = obj->rs[11];
    if (ctx) func_00141C10(ctx, "STENCILPASS", v, &v);
    out[0] = 0x45; out[1] = v; out += 2; ++*count;

    v = obj->rs[12];
    if (ctx) func_00141340(ctx, "STENCILFUNC", v, &v);
    out[0] = 0x46; out[1] = v; out += 2; ++*count;

    v = obj->rs[13];
    if (ctx) func_001409A0(ctx, "STENCILREF", v, &v);
    out[0] = 0x47; out[1] = v; out += 2; ++*count;

    v = obj->rs[14];
    if (ctx) func_001409A0(ctx, "STENCILMASK", v, &v);
    out[0] = 0x48; out[1] = v; out += 2; ++*count;

    v = obj->rs[15];
    if (ctx) func_001409A0(ctx, "STENCILWRITEMASK", v, &v);
    out[0] = 0x49; out[1] = v; out += 2; ++*count;

    v = obj->rs[16];
    if (ctx) func_00141780(ctx, "BLENDOP", v, &v);
    out[0] = 0x4a; out[1] = v; out += 2; ++*count;

    v = obj->rs[17];
    if (ctx) func_001409A0(ctx, "BLENDCOLOR", v, &v);
    out[0] = 0x4b; out[1] = v; out += 2; ++*count;

    v = obj->rs[18];
    if (ctx) func_001418C0(ctx, "SWATHWIDTH", v, &v);
    out[0] = 0x4c; out[1] = v; out += 2; ++*count;

    v = obj->rs[19];
    if (ctx) func_00140820(ctx, "POLYGONOFFSETZSLOPESCALE", v, &v);
    out[0] = 0x4d; out[1] = v; out += 2; ++*count;

    v = obj->rs[20];
    if (ctx) func_00140820(ctx, "POLYGONOFFSETZOFFSET", v, &v);
    out[0] = 0x4e; out[1] = v; out += 2; ++*count;

    v = obj->rs[21];
    if (ctx) func_00140900(ctx, "POINTOFFSETENABLE", v, &v);
    out[0] = 0x4f; out[1] = v; out += 2; ++*count;

    v = obj->rs[22];
    if (ctx) func_00140900(ctx, "WIREFRAMEOFFSETENABLE", v, &v);
    out[0] = 0x50; out[1] = v; out += 2; ++*count;

    v = obj->rs[23];
    if (ctx) func_00140900(ctx, "SOLIDOFFSETENABLE", v, &v);
    out[0] = 0x51; out[1] = v; out += 2; ++*count;

    v = obj->rs[24];
    if (ctx) func_00140900(ctx, "FOGENABLE", v, &v);
    out[0] = 0x5c; out[1] = v; out += 2; ++*count;

    v = obj->rs[25];
    if (ctx) func_00140900(ctx, "SPECULARENABLE", v, &v);
    out[0] = 0x67; out[1] = v; out += 2; ++*count;

    v = obj->rs[26];
    if (ctx) func_00141A00(ctx, "PATCHEDGESTYLE", v, &v);
    out[0] = 0x7c; out[1] = v; out += 2; ++*count;

    v = obj->rs[27];
    if (ctx) func_00140820(ctx, "PATCHSEGMENTS", v, &v);
    out[0] = 0x7d; out[1] = v; out += 2; ++*count;

    v = obj->rs[28];
    if (ctx) func_00141AA0(ctx, "FILLMODE", v, &v);
    out[0] = 0x8b; out[1] = v; out += 2; ++*count;

    v = obj->rs[29];
    if (ctx) func_00141AA0(ctx, "BACKFILLMODE", v, &v);
    out[0] = 0x8c; out[1] = v; out += 2; ++*count;

    v = obj->rs[30];
    if (ctx) func_00141B60(ctx, "ZENABLE", v, &v);
    out[0] = 0x8f; out[1] = v; out += 2; ++*count;

    v = obj->rs[31];
    if (ctx) func_00140900(ctx, "STENCILENABLE", v, &v);
    out[0] = 0x90; out[1] = v; out += 2; ++*count;

    v = obj->rs[32];
    if (ctx) func_00141C10(ctx, "STENCILFAIL", v, &v);
    out[0] = 0x91; out[1] = v; out += 2; ++*count;

    v = obj->rs[33];
    if (ctx) func_00141D70(ctx, "FRONTFACE", v, &v);
    out[0] = 0x92; out[1] = v; out += 2; ++*count;

    v = obj->rs[34];
    if (ctx) func_00141E10(ctx, "CULLMODE", v, &v);
    out[0] = 0x93; out[1] = v; out += 2; ++*count;

    v = obj->rs[35];
    if (ctx) func_001409A0(ctx, "ZBIAS", v, &v);
    out[0] = 0x95; out[1] = v; out += 2; ++*count;

    v = obj->rs[36];
    if (ctx) func_00141EC0(ctx, "LOGICOP", v, &v);
    out[0] = 0x96; out[1] = v; out += 2; ++*count;

    v = obj->rs[37];
    if (ctx) func_00141340(ctx, "SHADOWFUNC", v, &v);
    out[0] = 0x9c; out[1] = v; out += 2; ++*count;

    v = obj->rs[38];
    if (ctx) func_00140820(ctx, "LINEWIDTH", v, &v);
    out[0] = 0x9d; out[1] = v; out += 2; ++*count;

    v = obj->rs[39];
    if (ctx) func_001409A0(ctx, "PSCONSTANT0_0", v, &v);
    out[0] = 10; out[1] = v; out += 2; ++*count;

    v = obj->rs[40];
    if (ctx) func_001409A0(ctx, "PSCONSTANT0_1", v, &v);
    out[0] = 11; out[1] = v; out += 2; ++*count;

    v = obj->rs[41];
    if (ctx) func_001409A0(ctx, "PSCONSTANT0_2", v, &v);
    out[0] = 12; out[1] = v; out += 2; ++*count;

    v = obj->rs[42];
    if (ctx) func_001409A0(ctx, "PSCONSTANT0_3", v, &v);
    out[0] = 13; out[1] = v; out += 2; ++*count;

    v = obj->rs[43];
    if (ctx) func_001409A0(ctx, "PSCONSTANT0_4", v, &v);
    out[0] = 14; out[1] = v; out += 2; ++*count;

    v = obj->rs[44];
    if (ctx) func_001409A0(ctx, "PSCONSTANT0_5", v, &v);
    out[0] = 15; out[1] = v; out += 2; ++*count;

    v = obj->rs[45];
    if (ctx) func_001409A0(ctx, "PSCONSTANT0_6", v, &v);
    out[0] = 16; out[1] = v; out += 2; ++*count;

    v = obj->rs[46];
    if (ctx) func_001409A0(ctx, "PSCONSTANT0_7", v, &v);
    out[0] = 17; out[1] = v; out += 2; ++*count;

    v = obj->rs[47];
    if (ctx) func_001409A0(ctx, "PSCONSTANT1_0", v, &v);
    out[0] = 18; out[1] = v; out += 2; ++*count;

    v = obj->rs[48];
    if (ctx) func_001409A0(ctx, "PSCONSTANT1_1", v, &v);
    out[0] = 19; out[1] = v; out += 2; ++*count;

    v = obj->rs[49];
    if (ctx) func_001409A0(ctx, "PSCONSTANT1_2", v, &v);
    out[0] = 20; out[1] = v; out += 2; ++*count;

    v = obj->rs[50];
    if (ctx) func_001409A0(ctx, "PSCONSTANT1_3", v, &v);
    out[0] = 21; out[1] = v; out += 2; ++*count;

    v = obj->rs[51];
    if (ctx) func_001409A0(ctx, "PSCONSTANT1_4", v, &v);
    out[0] = 22; out[1] = v; out += 2; ++*count;

    v = obj->rs[52];
    if (ctx) func_001409A0(ctx, "PSCONSTANT1_5", v, &v);
    out[0] = 23; out[1] = v; out += 2; ++*count;

    v = obj->rs[53];
    if (ctx) func_001409A0(ctx, "PSCONSTANT1_6", v, &v);
    out[0] = 24; out[1] = v; out += 2; ++*count;

    v = obj->rs[54];
    if (ctx) func_001409A0(ctx, "PSCONSTANT1_7", v, &v);
    out[0] = 25; out[1] = v; out += 2; ++*count;

    v = obj->rs[55];
    if (ctx) func_001409A0(ctx, "PSFINALCOMBINERCONSTANT0", v, &v);
    out[0] = 0x2b; out[1] = v; out += 2; ++*count;

    v = obj->rs[56];
    if (ctx) func_001409A0(ctx, "PSFINALCOMBINERCONSTANT1", v, &v);
    out[0] = 0x2c; out[1] = v; out += 2; ++*count;
}

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
