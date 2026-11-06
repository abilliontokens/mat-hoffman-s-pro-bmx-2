/* 3 functions from 0x001C8960 to 0x001C9920, found by Ghidra. */
#include "common.h"
extern float D_00275544, D_002F08AC, D_0028E858, D_002F08B0, D_0028E854, D_002AC5CC, D_002F08A8;
extern int D_002AB7F0, D_002F0BD0;
struct S_1C9760_Vec { float x,y,z; };
struct S_1C9760_Cell { float height; int f4; };
struct S_1C9760_Layer {
    int f0; float scale, x, fC, z;
    char pad14[0x14]; int index; char pad2c[0x14];
    S_1C9760_Cell *data[2];
};
struct S_1C9760_Query {
    virtual void v0(); virtual void v4(); virtual void v8(); virtual void vC();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    virtual void v70(); virtual float v74(float, float, int);
};
struct C_001C9760 {
    char pad0[0x28]; float height;
    S_1C9760_Layer *layers; char pad30[8]; int count;
    char pad3c[8]; unsigned char *map; char pad48[0x70];
    int size, dimension; int fC0; float scale; int fC8;
    S_1C9760_Query *query; char padD0[0x14c]; int bits;
    void func_001C9760(S_1C9760_Vec *, int, int);
};
struct C_001C96E0_Node {
    char pad0[0xd4];
    int fD4;
    void func_001B07A0(void);
};

struct C_001C96E0_Entry {
    int f0;
    C_001C96E0_Node *f4;
    int f8;
    int fC;
};

struct C_001C96E0_Mgr {
    char pad0[0x14];
    C_001C96E0_Entry *f14;
};

struct C_001C96E0_Tbl {
    char pad0[0x10];
    int f10[1];
};

struct C_001C96E0_Cfg {
    char pad0[0x3c];
    int f3c;
};

struct C_001C96E0_Ctx {
    char pad0[0x2c];
    C_001C96E0_Cfg *f2c;
};

struct C_001C96E0_Global {
    char pad0[4];
    C_001C96E0_Ctx *f4;
};

struct C_001C96E0_Slot {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
};

extern C_001C96E0_Global *D_002EFDB8;
extern C_001C96E0_Mgr *D_002A829C;
extern C_001C96E0_Tbl *D_002F0630;

struct C_001C96E0 {
    char pad0[0x108];
    int *f108;
    int f10C;
    char pad110[0x110];
    C_001C96E0_Slot *f220;
    int f224;
    void func_001578D0(void);
    void func_001C96E0(void);
};

struct C_001C8960_Ini8 {
    int func_00169490(char *name, int zero);
};
struct C_001C8960_Ini14 {
    int func_00168C50(char *key, float def, float *out);
    int func_00168C20(char *key, int def, void *out);
};
struct C_001C8960_Ini18 {
    int func_00168BE0(char *key, char *fmt, int *out, int def);
};
struct C_001C8960_Ini {
    char pad0[8];
    C_001C8960_Ini8 s8;
    char padC[4];
    C_001C8960_Ini14 s14;
    C_001C8960_Ini18 s18;
    char rest[0x4a0];
    void func_00168280();
    void func_001691E0();
    int func_00169710(char *name);
};
struct C_001C8960 {
    int w[0x240];
    int func_001C8960(char *name);
};

void C_001C96E0::func_001C96E0(void) {
    int idx = D_002EFDB8->f4->f2c->f3c;
    C_001C96E0_Node *node;

    if (f108[idx] == 0) {
        f10C = 0;
        func_001578D0();
        return;
    }
    f10C = 1;
    node = D_002A829C->f14[f220[idx].f4].f4;
    node->func_001B07A0();
    f224 = D_002F0630->f10[node->fD4];
    func_001578D0();
}

void C_001C9760::func_001C9760(S_1C9760_Vec *pos, int arg1, int arg2) {
    float total = D_00275544;
    float x = pos->x, z = pos->z;
    if (D_002AB7F0) {
        for (int i=0; i<count; ++i) {
            S_1C9760_Layer *layer = &layers[i];
            int ix = (int)((x-layer->x)*layer->scale);
            int iz = (int)((z-layer->z)*layer->scale);
            if (ix>=0 && ix<dimension && iz>=0 && iz<dimension)
                total += D_0028E858 * layer->data[layer->index][iz*dimension+ix].height * D_002F08AC;
        }
    }
    float value;
    if (map) {
        int iz = (int)(z*scale) % size;
        int ix = (int)(x*scale) % size;
        value = map[((iz*size+ix)*bits)>>3]*D_002F08B0;
    } else value=0.0f;
    if (!D_002F0BD0 && value==D_00275544) { pos->y=0.0f; return; }
    float h = (query->v74(x,z,arg1)+value+total)*D_0028E854;
    if (value==D_00275544) h+=height;
    else h+=D_002AC5CC;
    if (!arg2 && !(h-pos->y>D_002F08A8)) pos->y=h;
    else pos->y=height;
}

