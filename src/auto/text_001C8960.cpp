/* 3 functions from 0x001C8960 to 0x001C9920, found by Ghidra. */
#include "common.h"

struct C_001C8960_Slot;
struct C_001C8960_Manager {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual void v10();
    virtual void v14();
    virtual void attach(int,int);
    int func_001617F0(char *, int);
};
struct C_001C8960_Model {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void v6c();
    virtual void v70();
    virtual void v74();
    virtual void v78();
    virtual void v7c();
    virtual void v80();
    virtual void v84();
    virtual void v88();
    virtual C_001C8960_Model *load(char *, int, int);
    C_001C8960_Model *func_001CAFD0(int);
    void func_001995B0(float,float,float);
    void func_00182020(int,int);
};
struct C_001C8960_SlotView {
    virtual void v0();
    virtual void load(char *,int);
};
struct C_001C8960_View {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void v6c();
    virtual void v70();
    virtual void attach(C_001C8960_Slot *);
};
extern int func_0014FF00(char *,int,char *,int,int);

struct C_001C8960_Layer {
    char pad0[0xac]; int type;
    C_001C8960_Layer *func_00143940(float *, float *, int, float, float, float, float, float, float, float, int, int, int, float, float, int, int, float);
    void func_00143A40(char *, char *);
    void func_00194310(float, float);
};
struct C_001C8960_Slot {
    char data[20];
    void func_00144640();
};
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
    char rest[0x4bd];
    void func_00168280();
    void func_001691E0();
    int func_00169710(char *name);
    int func_00169490(char *, int);
    int func_00168C50(char *, float, float *);
    int func_00168C20(char *, int, void *);
    int func_00168BE0(char *, char *, void *, int);
};
struct C_001C8960_Faces { int flags[6]; char *suffix[6]; };
struct C_001C8960_Tables { int axis[6], flags[6]; char *suffix[6]; };
struct C_001C8960_LayerParameters {
    int kind,mode;
    float offset;
    int special;
    float amount,sx,sy,rate,angle,rz;
    int enabled;
    float rx,frequency;
    int param;
    float gain,speed;
    int extra;
    float value;
};
static void AddLayerCount(int *total, int count) { *total += count; }
struct C_001C8960_Parameters {
    int total,kind,mode;
    float offset;
    int special;
    float amount,sx,sy,rate,angle,rz;
    int enabled;
    float rx,frequency;
    int param;
    float gain,speed;
    int extra;
    float value;
};
struct C_001C8960_Storage {
    char section[128];
    C_001C8960_Ini ini;
    char texture[132],path[260],resolved[260],fallback[256],saved[260],model[260],item[256];
};
struct C_001C8960_Frame {
    int total,kind,mode;
    float offset;
    int special;
    float amount,sx,sy,rate,angle,rz;
    int enabled;
    float rx,frequency;
    int param;
    float gain,speed;
    int extra;
    float value,v[8];
    int axis[6],flags[6];
    char *suffix[6];
    char section[128];
    C_001C8960_Ini ini;
    char texture[132],path[260],resolved[260],fallback[256],saved[260],model[260],item[256];
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
    C_001C8960_Parameters parameters;
    float v[8];
    int axis[6];
    C_001C8960_Faces faces;
    C_001C8960_Storage storage;
    char *src = name, *dst = (char *)this + 0x110;
    while ((*dst++ = *src++) != 0) {}
    storage.ini.func_00168280();
    if (!storage.ini.func_00169490(name, 0)) { storage.ini.func_001691E0(); return 0; }
    storage.ini.func_00169710(D_0028EBA4);
    storage.ini.func_00168C50(D_0028EB94, 20.0f, (float *)&w[0x28/4]);
    D_002AC5CC = *(float *)&w[0x28/4];
    storage.ini.func_00168C50(D_0028EB7C, 2304.0f, &D_002F0BCC);
    storage.ini.func_00168C50(D_0028EB68, 40.0f, &D_002F08B0);
    storage.ini.func_00168C50(D_0028EB5C, 32.0f, (float *)&w[0x48/4]);
    storage.ini.func_00168C50(D_0028EB50, 64.0f, (float *)&w[0x4c/4]);
    storage.ini.func_00168C50(D_0028EB44, 10.0f, &D_002F08AC);
    storage.ini.func_00168C50(D_0028EB34, 4.0f, &D_002F08D0);
    storage.ini.func_00168C50(D_0028EB28, 100.0f, &D_002F08A8);
    storage.ini.func_00168C50(D_0028EB10, 0.0f, &D_002F0BD8);
    storage.ini.func_00168C50(D_0028EAF8, 5.0f, &D_002F0BD4);
    storage.ini.func_00168C20(D_0028EAE4, 1, &D_002F0BD0);
    storage.ini.func_00168C20(D_0028EACC, 1, &w[0x210/4]);
    storage.ini.func_00168C20(D_0028EAB8, 0, &w[0x68/4]);
    storage.ini.func_00168C20(D_0028EAAC, 0, &w[0x50/4]);
    storage.ini.func_00168BE0(D_0028EA90, D_0028EA9C, storage.fallback, -1);
    storage.ini.func_00168C20(D_0028A730, 16, &w[0x104/4]);
    storage.ini.func_00169710(D_0028EA84);
    storage.ini.func_00168C50(D_0028EA78, 0.25f, &D_002AB800);
    storage.ini.func_00168C50(D_0028EA68, 40.0f, &D_002F08A4);
    storage.ini.func_00168C50(D_0028EA58, 0.1f, &D_002AB7FC);
    storage.ini.func_00168C50(D_0028EA4C, 0.0003f, &D_002F08B8);
    storage.ini.func_00168C50(D_0028EA3C, 2.0f, &D_002F08B4);
    D_002F08AC = (D_0028E850 * D_00287B68) * D_002F08AC;
    D_002F08B0 = (D_0028E850 * D_00287B68) * D_002F08B0;
    parameters.total = 0;
    if (w[0x68/4]) {
        v[0]=0; v[1]=0; v[2]=0; v[3]=1; v[4]=0; v[5]=0; v[6]=1; v[7]=1;
        w[0xd0/4] = (int)func_001E8A44(w[0x68/4]*24+4);
        w[0x6c/4] = 1;
        D_002AB85C = D_002F08AC * D_0027A060;
        D_002EFEA0 = *(int *)&D_002F08AC;
        int index = 0;
        for (int i=0; i<w[0x68/4]; ++i) {
            func_001ADCC0(storage.section,128,D_0028EA28,i+1);
            storage.ini.func_00169710(storage.section);
            storage.ini.func_00168BE0(D_0028EA1C,D_00275630,storage.texture,-1);
    storage.ini.func_00168C50(D_0028EA10, 0.0f, &v[0]);
    storage.ini.func_00168C50(D_0028EA04, 0.0f, &v[1]);
    storage.ini.func_00168C50(D_0028E9F8, 0.0f, &v[2]);
    storage.ini.func_00168C50(D_0028E9F0, 0.0f, &parameters.sx);
    storage.ini.func_00168C50(D_0028E9E8, 0.0f, &parameters.sy);
    storage.ini.func_00168C20(D_0028E9DC, 0, &parameters.kind);
    storage.ini.func_00168C50(D_0028E9D0, 0.0f, &parameters.rx);
    storage.ini.func_00168C50(D_0028E9C4, 0.0f, &parameters.rz);
    storage.ini.func_00168C50(D_0028E9B8, 0.0f, &parameters.angle);
    storage.ini.func_00168C50(D_0028E9B0, 1.0f, &parameters.rate);
    storage.ini.func_00168C50(D_0028E9A8, 1.0f, &parameters.gain);
    storage.ini.func_00168C20(D_0028E9A0, 1, &parameters.enabled);
    storage.ini.func_00168C20(D_0028E998, 0, &parameters.mode);
    storage.ini.func_00168C20(D_0028E98C, 0, &parameters.extra);
    storage.ini.func_00168C50(D_0028E984, 0.0f, &parameters.speed);
    storage.ini.func_00168C50(D_00278118, 0.0f, &parameters.offset);
    storage.ini.func_00168C20(D_0028E978, 0, &parameters.special);
    storage.ini.func_00168C50(D_0028E96C, 1.0f, &parameters.amount);
    storage.ini.func_00168C50(D_0028E964, 0.0f, &parameters.frequency);
    storage.ini.func_00168C20(D_0028E95C, -75, &parameters.param);
            v[4]=*(volatile float *)&parameters.sx*D_002755E8; v[6]=*(volatile float *)&parameters.sy*D_002755E8;
            if (!parameters.mode) {
                if (parameters.offset == D_00275544) {
                    ++w[0x84/4]; ++w[0x88/4]; ++w[0x8c/4];
                } else {
                    w[0x84/4]+=2; w[0x88/4]+=2; w[0x8c/4]+=2;
                }
                ++w[0x6c/4];
                faces.suffix[0]=D_0028E950;faces.suffix[1]=D_0028E944;faces.suffix[2]=D_0028E93C;
                faces.suffix[3]=D_0028E934;faces.suffix[4]=D_0028E92C;faces.suffix[5]=D_0028E924;
                axis[0]=0;axis[1]=0;axis[2]=1;axis[3]=1;axis[4]=2;axis[5]=2;
                faces.flags[0]=0;faces.flags[1]=1;faces.flags[2]=0;faces.flags[3]=1;faces.flags[4]=0;faces.flags[5]=1;
                int first=parameters.special ? 2 : 0;
                if (first < 6) {
                parameters.total -= first - 6;
                for(int j=first;j<6;++j) {
                    if (!axis[j]) { float speed = D_0028E850*D_00287B68; speed *= parameters.speed; parameters.value = speed; }
                    else parameters.value = parameters.amount;
                    C_001C8960_Layer *layer=(C_001C8960_Layer *)func_001E8A44(0x104);
                    ((C_001C8960_Layer **)w[0xd0/4])[index]=layer ? layer->func_00143940(v,v+4,parameters.kind,parameters.sx,parameters.sy,parameters.rx,parameters.rz,parameters.angle,parameters.rate,parameters.gain,parameters.enabled,axis[j],parameters.extra,parameters.value,parameters.offset,faces.flags[j],parameters.param,parameters.frequency) : 0;
                    func_001ADCC0(storage.resolved,256,D_0028E918,D_002A5A80,storage.texture);
                    ((C_001C8960_Layer **)w[0xd0/4])[index]->func_00143A40(storage.resolved,faces.suffix[j]);
                    ++index;
                }
                }
            } else {
                parameters.mode+=2; ++parameters.total;
                if (parameters.offset == D_00275544) ++w[0x84/4+parameters.mode]; else w[0x84/4+parameters.mode]+=2;
                ++w[0x6c/4+parameters.mode];
                C_001C8960_Layer *layer=(C_001C8960_Layer *)func_001E8A44(0x104);
                ((C_001C8960_Layer **)w[0xd0/4])[index]=layer ? layer->func_00143940(v,v+4,parameters.kind,parameters.sx,parameters.sy,parameters.rx,parameters.rz,parameters.angle,parameters.rate,parameters.gain,parameters.enabled,parameters.mode,parameters.extra,parameters.speed,parameters.offset,1,parameters.param,parameters.frequency) : 0;
                func_001ADCC0(storage.path,256,D_0028E918,D_002A5A80,storage.texture);
                ((C_001C8960_Layer **)w[0xd0/4])[index]->func_00143A40(storage.path,D_00275630);
                ++index;
            }
        }
        ((C_001C8960_Layer **)w[0xd0/4])[index]=0;
        for(int j=0;j<index;++j) {
            C_001C8960_Layer *layer=((C_001C8960_Layer **)w[0xd0/4])[j];
            layer->func_00194310(D_00275460/w[0x6c/4+layer->type],D_00275460/w[0x84/4+layer->type]);
        }
    }
    w[0x68/4]=parameters.total;
    if (w[0x50/4]) {
        func_0014FF00(name,0,storage.resolved,0,0);
        char *src=D_002A60B0, *dst=storage.saved;
        while ((*dst++=*src++)!=0) {}
        func_001ADCC0(D_002A60B0,260,D_0028E910,storage.resolved);
        for(int i=0;i<w[0x38/4];++i) {
            func_001ADCC0(storage.path,260,D_0028E8F8,D_002A60B0,i*2);
            int object=((C_001C8960_Manager *)D_002A829C)->func_001617F0(storage.path,1);
            w[0x58/4+i]=object;
            ((C_001C8960_Manager *)D_002A829C)->attach(object,D_002AA46C);
            func_001ADCC0(storage.path,260,D_0028E8F8,D_002A60B0,i*2+1);
            object=((C_001C8960_Manager *)D_002A829C)->func_001617F0(storage.path,1);
            w[0x60/4+i]=object;
            ((C_001C8960_Manager *)D_002A829C)->attach(object,D_002AA46C);
        }
        w[0x54/4]=(int)func_001E8A44(w[0x50/4]*4+4);
        int i;
        for(i=0;i<w[0x50/4];++i) {
            func_001ADCC0(storage.section,260,D_0028E8F0,i+1);
            storage.ini.func_00169710(storage.section);
            storage.ini.func_00168BE0(D_0028EA1C,D_00275630,storage.texture,-1);
            storage.ini.func_00168C50(D_0028EA10,0.0f,(float *)&parameters.kind);
            storage.ini.func_00168C50(D_0028EA04,0.0f,(float *)&parameters.special);
            storage.ini.func_00168C50(D_0028E9F8,0.0f,&parameters.amount);
            func_001ADCC0(storage.model,260,D_00275678,D_002A5A80,storage.texture,i+4);
            C_001C8960_Model *object=(C_001C8960_Model *)func_001E8A44(0x1f0);
            object=object ? object->func_001CAFD0(1) : 0;
            object=object->load(storage.model,1,1);
            ((C_001C8960_Model **)w[0x54/4])[i]=object;
            ((C_001C8960_Model **)w[0x54/4])[i]->func_001995B0(*(float *)&parameters.kind,*(float *)&parameters.special,parameters.amount);
            object=((C_001C8960_Model **)w[0x54/4])[i];
            object->func_00182020(**(int **)((char *)object+0x1b8),w[0x58/4]);
        }
        ((C_001C8960_Model **)w[0x54/4])[i]=0;
        src=storage.saved;dst=D_002A60B0;
        while ((*dst++=*src++)!=0) {}
    }
    int count=w[0x104/4];
    int *allocation=(int *)func_001E8A44(count*20+4);
    C_001C8960_Slot *slots;
    if (allocation) {
        slots=(C_001C8960_Slot *)(allocation+1);
        *allocation=count;
        C_001C8960_Slot *p = slots;
        for(int i=count-1;i>=0;--i) { p->func_00144640(); ++p; }
    } else slots = 0;
    w[0x220/4]=(int)slots;
    w[0x108/4]=(int)func_001E8A44(w[0x104/4]*4);
    for(int i=0;i<w[0x104/4];++i) {
        func_001ADCC0(storage.section,128,D_0028E8E8,i+1);
        if (storage.ini.func_00169710(storage.section)) {
            storage.ini.func_00168BE0(D_0028EA90,storage.fallback,storage.item,-1);
            storage.ini.func_00168C20(D_0028E8DC,1,&((int *)w[0x108/4])[i]);
            ((C_001C8960_SlotView *)&((C_001C8960_Slot *)w[0x220/4])[i])->load(storage.item,D_002AA46C);
        } else {
            ((int *)w[0x108/4])[i]=1;
            ((C_001C8960_SlotView *)&((C_001C8960_Slot *)w[0x220/4])[i])->load(storage.fallback,D_002AA46C);
        }
        ((C_001C8960_View *)this)->attach(&((C_001C8960_Slot *)w[0x220/4])[i]);
    }
    storage.ini.func_001691E0();
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

