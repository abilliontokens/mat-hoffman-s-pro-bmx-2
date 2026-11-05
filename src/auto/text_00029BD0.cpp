/* 6 functions from 0x00029BD0 to 0x0002AAA0, found by Ghidra. */
#include "common.h"
struct V4_00029BD0 { union { struct { float x,y,z,w; }; int i[4]; }; };
struct __declspec(align(16)) M4_00029BD0 { float m[16]; };
struct Sub_00029BD0 { char pad[0x1a0]; V4_00029BD0 v; };
struct Data_00029BD0 { char pad[0x78]; V4_00029BD0 *v; };
struct Obj_00029BD0 {
 char pad[0x54]; Data_00029BD0 *data;
 char pad58[0xa7-0x58]; unsigned char flags;
 void func_00086C20(int);
 void func_00133700();
 void func_00133660(int);
 void func_00133EF0(M4_00029BD0 *);
 float func_00133F10(int);
};
struct World_00029BD0 {
 char pad[0xf0]; M4_00029BD0 mat;
 V4_00029BD0 *func_00198120(V4_00029BD0 *,V4_00029BD0 *);
};
struct Manager_00029BD0 { int func_00132E20(const char *); };
extern float D_002766A4, D_00275544, D_002755E8;
extern V4_00029BD0 D_002A1110;
extern int D_002BA154;
extern Manager_00029BD0 *D_002A4334;
extern char D_00276688[];
V4_00029BD0 *func_0001E9E0(V4_00029BD0 *,V4_00029BD0 *);
V4_00029BD0 *func_0001C610(V4_00029BD0 *,V4_00029BD0 *,V4_00029BD0 *);
struct C_00029BD0 {
 char pad[0x10c]; float x,y,z;
 char pad118[0x1e8-0x118]; Sub_00029BD0 *f1e8;
 char pad1ec[0x10]; Obj_00029BD0 *f1fc;
 char pad200[0x30]; World_00029BD0 *f230;
 char pad234[0x464-0x234]; float f464;
 int func_00029BD0();
};

struct F4_0002A010 { float x, y, z, w; };
extern F4_0002A010 D_002A1110_f4;
struct Sub_0002A010 { char pad[0x68]; int f68; char pad6c[0xf0-0x6c]; F4_0002A010 vf0; };
struct World_0002A010 { void func_00199E50(F4_0002A010 a, F4_0002A010 b, float c); };
struct C_0002A010 {
 char pad[0x1e8]; Sub_0002A010 *f1e8;
 char pad1ec[0x230-0x1ec]; World_0002A010 *f230;
 char pad234[0x454-0x234]; int f454;
 char pad458[0x468-0x458]; int f468;
 char pad46c[0x5c8-0x46c]; int f5c8;
 char pad5cc[0x62c-0x5cc]; float f62c;
 char pad630[4]; int f634; float f638; float f63c; int f640;
 char pad644[0x744-0x644]; float f744;
 void func_0002A010(float dt);
};
extern float D_002766C0, D_002766B0, D_002A1160, D_00275548, D_002A115C, D_002A1158;
extern double D_002766B8, D_002766A8;
static inline float Abs_0002A010(float f)
{
    int i = *(int *)&f & 0x7fffffff;
    return *(float *)&i;
}
extern int D_002B7E40;
extern float D_002B7E3C, D_002B7E38;

struct S_Cb_0002A6B0 {
    char pad0[0x7c];
    void (__cdecl *f7c)(int, void *, int, int);
    int f80;
};

struct S_Vt_0002A6B0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13(float dt);
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual S_Cb_0002A6B0 *v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual S_Cb_0002A6B0 *v103();
};

struct S_Sub_0002A6B0 {
    void func_000B8AD0(int a, int b);
};

struct S_Sub2_0002A6B0 {
    void func_00025E50(float dt);
};

extern int D_002A10F0, D_002A10F4, D_002A10F8, D_002A10FC;

struct V4i_0002A6B0 {
    int a, b, c, d;
    void Set(int x, int y, int z, int w) { a = x; b = y; c = z; d = w; }
};

struct C_0002A6B0 {
    char pad0[0x13c];
    V4i_0002A6B0 f13c;
    char pad14c[0x1e8 - 0x14c];
    S_Sub_0002A6B0 *f1e8;
    char pad1ec[0x1f4 - 0x1ec];
    char *f1f4;
    char pad1f8[0x214 - 0x1f8];
    S_Vt_0002A6B0 *f214;
    S_Vt_0002A6B0 *f218;
    char pad21c[0x47c - 0x21c];
    int f47c;
    int f480;
    float f484;
    char pad488[0x5f4 - 0x488];
    S_Sub2_0002A6B0 *f5f4;
    char pad5f8[0x734 - 0x5f8];
    float f734;
    float f738;
    int f73c;
    int f740;
    void func_00027D60(void);
    void func_0002A6B0(float dt);
};
