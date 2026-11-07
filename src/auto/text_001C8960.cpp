/* 3 functions from 0x001C8960 to 0x001C9920, found by Ghidra. */
#include "common.h"
extern float D_002F0BCC;
extern char D_0028EB7C[];
extern char D_0028EB68[];
extern char D_0028EB5C[];
extern char D_0028EB50[];
extern char D_0028EB44[];
extern float D_002F08D0;
extern char D_0028EB34[];
extern char D_0028EB28[];
extern float D_002F0BD8;
extern char D_0028EB10[];
extern float D_002F0BD4;
extern char D_0028EAF8[];
extern char D_0028EAE4[];
extern char D_0028EACC[];
extern char D_0028EAB8[];
extern char D_0028EAAC[];
extern char D_0028EA9C[];
extern char D_0028EA90[];
extern char D_0028A730[];
extern char D_0028EA84[];
extern float D_002AB800;
extern char D_0028EA78[];
extern float D_002F08A4;
extern char D_0028EA68[];
extern float D_002AB7FC;
extern char D_0028EA58[];
extern float D_002F08B8;
extern char D_0028EA4C[];
extern float D_002F08B4;
extern char D_0028EA3C[];
extern float D_0028E850;
extern float D_00287B68;
extern float D_0027A060;
extern int D_002EFEA0;
extern float D_002AB85C;
extern char D_0028EA28[];
extern char D_00275630[];
extern char D_0028EA1C[];
extern char D_0028EA10[];
extern char D_0028EA04[];
extern char D_0028E9F8[];
extern char D_0028E9F0[];
extern char D_0028E9E8[];
extern char D_0028E9DC[];
extern char D_0028E9D0[];
extern char D_0028E9C4[];
extern char D_0028E9B8[];
extern char D_0028E9B0[];
extern char D_0028E9A8[];
extern char D_0028E9A0[];
extern char D_0028E998[];
extern char D_0028E98C[];
extern char D_0028E984[];
extern char D_00278118[];
extern char D_0028E978[];
extern char D_0028E96C[];
extern char D_0028E964[];
extern char D_0028E95C[];
extern float D_002755E8;
extern char D_0028E950[];
extern char D_0028E944[];
extern char D_0028E93C[];
extern char D_0028E934[];
extern char D_0028E92C[];
extern char D_0028E924[];
extern char D_002A5A80[];
extern char D_0028E918[];
extern float D_00275460;
extern char D_002A60B0[];
extern char D_0028E910[];
extern char D_0028E8F8[];
extern int D_002AA46C;
extern char D_0028E8F0[];
extern char D_00275678[];
extern char D_0028E8E8[];
extern char D_0028E8DC[];
extern void *func_001E8A44(int);
extern int func_001ADCC0(char *, int, const char *, ...);

extern float D_002F0BCC;
extern char D_0028EB7C[];
extern char D_0028EB68[];
extern char D_0028EB5C[];
extern char D_0028EB50[];
extern char D_0028EB44[];
extern float D_002F08D0;
extern char D_0028EB34[];
extern char D_0028EB28[];
extern float D_002F0BD8;
extern char D_0028EB10[];
extern float D_002F0BD4;
extern char D_0028EAF8[];
extern char D_0028EAE4[];
extern char D_0028EACC[];
extern char D_0028EAB8[];
extern char D_0028EAAC[];
extern char D_0028EA9C[];
extern char D_0028EA90[];
extern char D_0028A730[];
extern char D_0028EA84[];
extern float D_002AB800;
extern char D_0028EA78[];
extern float D_002F08A4;
extern char D_0028EA68[];
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
    int func_00169490(char *, int);
    int func_00168C50(char *, float, float *);
    int func_00168C20(char *, int, void *);
    int func_00168BE0(char *, char *, void *, int);
};
struct C_001C8960 {
    int w[0x240];
    int func_001C8960(char *name);
};

extern float D_0028E850;
extern float D_00287B68;
extern float D_0027A060;
extern float D_002F0BCC;
extern float D_002F08D0;
extern float D_002F0BD8;
extern float D_002F0BD4;
extern float D_002AB800;
extern float D_002F08A4;
extern float D_002AB7FC;
extern float D_002F08B8;
extern float D_002F08B4;
extern float D_002AB85C;
extern int D_002EFEA0;
extern char D_0028EBA4[];
extern char D_0028EB94[];
extern char D_0028EB7C[];
extern char D_0028EB68[];
extern char D_0028EB5C[];
extern char D_0028EB50[];
extern char D_0028EB44[];
extern char D_0028EB34[];
extern char D_0028EB28[];
extern char D_0028EB10[];
extern char D_0028EAF8[];
extern char D_0028EAE4[];
extern char D_0028EACC[];
extern char D_0028EAB8[];
extern char D_0028EAAC[];
extern char D_0028EA90[];
extern char D_0028EA9C[];
extern char D_0028A730[];
extern char D_0028EA84[];
extern char D_0028EA78[];
extern char D_0028EA68[];
extern char D_0028EA58[];
extern char D_0028EA4C[];
extern char D_0028EA3C[];
extern char D_0028EA28[];
extern char D_0028EA1C[];
extern char D_00275630[];
extern char D_0028EA10[];
extern char D_0028EA04[];
extern char D_0028E9F8[];
extern char D_0028E9F0[];
extern char D_0028E9E8[];
extern char D_0028E9DC[];
extern char D_0028E9D0[];
extern char D_0028E9C4[];
extern char D_0028E9B8[];
extern char D_0028E9B0[];
extern char D_0028E9A8[];
extern char D_0028E9A0[];
extern char D_0028E998[];
extern char D_0028E98C[];
extern char D_0028E984[];
extern char D_00278118[];
extern char D_0028E978[];
extern char D_0028E96C[];
extern char D_0028E964[];
extern char D_0028E95C[];
int C_001C8960::func_001C8960(char *name)
{
    int func_001ADCC0(char *, int, char *, ...);
    int func_001E8A44(...);
    char pre[0x13c];
    C_001C8960_Ini ini;
    char buf[0x100];
    char secbuf[0x80];
    float loc[32];
    int tmpi;
    int i;
    int count;

    {
        char *dst = (char *)this + 0x110;
        char *src = name;
        char c;
        do {
            c = *src;
            dst[src - name] = c;
            src++;
        } while (c != 0);
    }
    ini.func_00168280();
    if (ini.s8.func_00169490(name, 0) == 0) {
        ini.func_001691E0();
        return 0;
    }
    ini.func_00169710(D_0028EBA4);
    ini.s14.func_00168C50(D_0028EB94, 20.0f, (float *)((char *)this + 0x28));
    D_002AC5CC = *(float *)((char *)this + 0x28);
    ini.s14.func_00168C50(D_0028EB7C, 2304.0f, &D_002F0BCC);
    ini.s14.func_00168C50(D_0028EB68, 40.0f, &D_002F08B0);
    ini.s14.func_00168C50(D_0028EB5C, 32.0f, (float *)((char *)this + 0x48));
    ini.s14.func_00168C50(D_0028EB50, 64.0f, (float *)((char *)this + 0x4c));
    ini.s14.func_00168C50(D_0028EB44, 10.0f, &D_002F08AC);
    ini.s14.func_00168C50(D_0028EB34, 4.0f, &D_002F08D0);
    ini.s14.func_00168C50(D_0028EB28, 100.0f, &D_002F08A8);
    ini.s14.func_00168C50(D_0028EB10, 0.0f, &D_002F0BD8);
    ini.s14.func_00168C50(D_0028EAF8, 5.0f, &D_002F0BD4);
    ini.s14.func_00168C20(D_0028EAE4, 1, &D_002F0BD0);
    ini.s14.func_00168C20(D_0028EACC, 1, (char *)this + 0x210);
    ini.s14.func_00168C20(D_0028EAB8, 0, (char *)this + 0x68);
    ini.s14.func_00168C20(D_0028EAAC, 0, (char *)this + 0x50);
    ini.s18.func_00168BE0(D_0028EA90, D_0028EA9C, &tmpi, -1);
    ini.s14.func_00168C20(D_0028A730, 0x10, (char *)this + 0x104);
    ini.func_00169710(D_0028EA84);
    ini.s14.func_00168C50(D_0028EA78, 0.25f, &D_002AB800);
    ini.s14.func_00168C50(D_0028EA68, 40.0f, &D_002F08A4);
    ini.s14.func_00168C50(D_0028EA58, 0.1f, &D_002AB7FC);
    ini.s14.func_00168C50(D_0028EA4C, 0.0006f, &D_002F08B8);
    ini.s14.func_00168C50(D_0028EA3C, 2.0f, &D_002F08B4);
    {
        float scale = D_0028E850 * D_00287B68;
        D_002F08AC = D_002F08AC * scale;
        D_002F08B0 = D_002F08B0 * scale;
    }
    count = *(int *)((char *)this + 0x68);
    if (count != 0) {
        float v1[4];
        float v2[4];
        int *arr;
        v1[0] = 0.0f;
        v1[1] = 0.0f;
        v1[2] = 0.0f;
        v1[3] = 1.0f;
        v2[0] = 0.0f;
        v2[1] = 0.0f;
        v2[2] = 1.0f;
        v2[3] = 1.0f;
        arr = (int *)func_001E8A44(count * 24 + 4);
        *(int **)((char *)this + 0xd0) = arr;
        *(int *)((char *)this + 0x6c) = 1;
        D_002AB85C = D_002F08AC * D_0027A060;
        D_002EFEA0 = (int)D_002F08AC;
        for (i = 0; i < count; i++) {
            func_001ADCC0(secbuf, 0x80, D_0028EA28, i + 1);
            ini.func_00169710(secbuf);
            ini.s18.func_00168BE0(D_0028EA1C, D_00275630, &tmpi, -1);
            ini.s14.func_00168C50(D_0028EA10, 0.0f, &loc[19]);
            ini.s14.func_00168C50(D_0028EA04, 0.0f, &loc[20]);
            ini.s14.func_00168C50(D_0028E9F8, 0.0f, &loc[21]);
            ini.s14.func_00168C50(D_0028E9F0, 0.0f, &loc[6]);
            ini.s14.func_00168C50(D_0028E9E8, 0.0f, &loc[7]);
            ini.s14.func_00168C20(D_0028E9DC, 0, &loc[1]);
            ini.s14.func_00168C50(D_0028E9D0, 0.0f, &loc[12]);
            ini.s14.func_00168C50(D_0028E9C4, 0.0f, &loc[10]);
            ini.s14.func_00168C50(D_0028E9B8, 0.0f, &loc[9]);
            ini.s14.func_00168C50(D_0028E9B0, 1.0f, &loc[8]);
            ini.s14.func_00168C50(D_0028E9A8, 1.0f, &loc[15]);
            ini.s14.func_00168C20(D_0028E9A0, 1, &loc[11]);
            ini.s14.func_00168C20(D_0028E998, 0, &loc[2]);
            ini.s14.func_00168C20(D_0028E98C, 0, &loc[18]);
            ini.s14.func_00168C50(D_0028E984, 0.0f, &loc[17]);
            ini.s14.func_00168C50(D_00278118, 0.0f, &loc[3]);
            ini.s14.func_00168C20(D_0028E978, 0, &loc[4]);
            ini.s14.func_00168C50(D_0028E96C, 1.0f, &loc[5]);
            ini.s14.func_00168C50(D_0028E964, 0.0f, &loc[13]);
            ini.s14.func_00168C20(D_0028E95C, -0x4b, &loc[14]);
            arr[i] = 0;
        }
    }
    ini.func_001691E0();
    return 1;
}

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
extern char D_0028EBA4[], D_0028EB94[];
