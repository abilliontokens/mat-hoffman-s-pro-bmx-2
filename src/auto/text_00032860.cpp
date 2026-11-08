/* 12 functions from 0x00032860 to 0x00033680, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <string.h>
#include "asm_helpers.h"
struct O_B { void func_0018C120(); void func_0001CC80(void *p); };
struct S_002A8490 {
    char pad0[4];
    O_B *f4;
    char pad8[0x11C];
    int f124;
    char pad128[0x11C];
    float f244;
    char pad248[0xA4];
    O_B *f2ec;
};
struct O_A { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int a); virtual void v8(); };
struct O_D { virtual void v0(int a); };
struct O_E { void func_0013B340(); };
struct O_F { void func_0009C770(); };
struct O_G { virtual void v0(); virtual void v1(); virtual void v2(); };
struct O_H { void *vtbl; char pad[0x68]; void *f6c[1]; char pad2[0x20]; int f90; char pad3[0x88]; int f11c; char pad4[0xa0]; O_F *f1c0; char pad5[0x14]; O_G *f1d8; void func_00157660(); void func_00033220(); };
extern O_A *D_002EFDB8;
extern float D_002A8F40;
extern O_D *D_002F0630;
extern O_E *D_002BEAAC;
extern int D_00276AB4;
extern void func_001E891B(void *p);
extern S_002A8490 *D_002A8490;
extern int D_002F08BC;
extern float D_00275544;
extern float D_00275600;

struct V4_00032E50 {
    float x, y, z, w;
    void Set(float a, float b, float c, float d) {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct C_00032A20 {
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
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18(int a);
    void func_00032A20(void);
    void func_00032A40(void);
};

static inline void SetV4(V4_00032E50 *v, float a, float b, float c, float d)
{
    v->x = a;
    v->y = b;
    v->z = c;
    v->w = d;
}

struct C_00032E50 {
    char pad0[0x210];
    V4_00032E50 f210;
    char pad220[0x10];
    float f230;
    void func_00032E50(V4_00032E50 v);
};

float func_0001C870(float a, int b, float c, float d, float e);

struct C_00032E90 {
    char pad0[0x210];
    float f210;
    float f214;
    float f218;
    char pad21C[4];
    float f220;
    char pad224[0xC];
    float f230;
    void func_00032E90(void);
};

struct V4_00032E50;
struct O_Cam32F50 {
    char pad0[0x28];
    char name[0x198];
    float f1c0;
    float f1c4;
    float f1c8;
    V4_00032E50 func_001824E0(float x, float y, float z);
};
struct O_Obj32F50 { char pad0[8]; O_Cam32F50 *f8; };
extern V4_00032E50 D_002A1460;

struct S_00033090_List {
    char pad0[0x24];
    int count;
    O_Obj32F50 **items;     /* +0x28 */
};

struct S_00033090_Level {
    char pad0[0x3a8];
    S_00033090_List **f3a8;
};

extern "C" char *func_001E8AC0(const char *s, int c);
extern "C" int func_001EA426(const char *a, const char *b);

struct BmxEvent {
    char pad0[0x64];
    S_00033090_Level *f64;
    char pad68[0x234 - 0x68];
    O_Obj32F50 *f234[2];
    V4_00032E50 f23C[2];
    V4_00032E50 f25C[2];
    float f27C[2];
    void func_00033090(const char *name, float x, float y, float z, float w, int flag);
    void func_00032E90();
    void func_00032F50();
    void func_00157920();
    int func_00033300();
    int func_00033320(void *a, int b);
    int func_00157BF0(void *a, int b);
    void func_00032A60(void);
};

struct O_33320 {
 void func_000602B0();
 void func_00060350(int);
 int func_00094EE0();
 void func_00087D20();
 void func_00082790();
 void func_00161760();
 void func_001B2640();
};
struct V_33320 {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
 virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
 virtual void v16(); virtual void v17(); virtual void v18(int);
 virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(int,int);
};
struct V_32A60 {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
 virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
 virtual int v16(); virtual void v17(); virtual void v18(int);
 virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(int,int);
};
extern O_33320 *D_002A829C;
extern O_33320 *D_002AA6C0;
int func_001361E0(int, int, void *, unsigned int);
int func_00135C70(int, int, void *, int);
struct O_32860Ctl { void func_0001C240(); };
struct O_32860Vt { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(void *p); };
struct S_00032860_Level {
    char pad0[0x3a8];
    S_00033090_List **f3a8;
    char pad3ac[8];
    O_32860Vt *f3b4;
    char pad3b8[0xcc];
    O_32860Ctl *f484;
    char pad488[0xac];
    int f534;
};
struct O_32860Sk {
    void func_00098EE0(O_32860Vt *a, int b);
    void func_00099A60(O_32860Vt *a);
    void func_000981D0(O_32860Vt *a, int b, int c);
};
struct O_32860Rp { void func_001041E0(); void func_00104190(); };
struct O_32860B { void func_000B2D50(int a); };
struct O_32860C { void func_00022B70(); };
struct O_32860It { void func_00012420(); };
struct S_002B9120 { char pad0[0x578]; int count; O_32860It **items; };
extern O_32860B *D_002B9134;
extern O_32860C *D_002B7E18;
extern S_002B9120 *D_002B9120;
extern int D_002AADF8;

struct C_00032860 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    char pad4[0x60];
    S_00032860_Level *f64;
    char pad68[0x158];
    O_32860Sk *f1c0;
    O_32860Rp *f1c4;
    int f1c8;
    void func_00032860(void);
};

struct C_00032A00 {
    char pad0[0x1C8];
    int unk1C8;
    void func_00032A00(void);
};


void C_00032860::func_00032860(void)
{
    int i;

    f1c8 = 1;
    if (f64->f484 != 0) {
        f64->f484->func_0001C240();
    }
    if (f64->f3b4 != 0) {
        f64->f3b4->v30(f64);
    }
    for (i = 0; i < (*f64->f3a8)->count; i++) {
        O_Obj32F50 *o = (*f64->f3a8)->items[i];
        if (o->f8 != 0) {
            o->f8->func_001824E0(1.0f, 1.0f, 1.0f);
        }
    }
    if (f1c0 != 0) {
        if ((*(int **)((char *)D_002A8490 + 0x2e0))[1] == 0) {
            f1c0->func_00098EE0(f64->f3b4, f64->f534);
        }
        f1c0->func_00099A60(f64->f3b4);
        if ((*(int **)((char *)D_002A8490 + 0x2e0))[1] == 0) {
            f1c0->func_000981D0(f64->f3b4, f64->f534, f1c8);
        }
    }
    v40();
    if (f1c4 != 0) {
        f1c4->func_001041E0();
        f1c4->func_00104190();
    }
    D_002AADF8 = 0;
    if (D_002B9134 != 0) {
        D_002B9134->func_000B2D50(0);
    }
    if (D_002B7E18 != 0) {
        D_002B7E18->func_00022B70();
    }
    for (i = 0; i < D_002B9120->count; i++) {
        D_002B9120->items[i]->func_00012420();
    }
}

void C_00032A00::func_00032A00(void) {
    extern int D_002AADF8;
    unk1C8 = 0;
    D_002AADF8 = 1;
}

void C_00032A20::func_00032A20(void)
{
    v18(1);
    D_002A8490->f124 = 1;
}

void C_00032A20::func_00032A40(void)
{
    v18(0);
    D_002A8490->f124 = 0;
}

void BmxEvent::func_00032A60(void)
{
#define GLOB ((char *)D_002A8490)
#define MGR (*(char **)(GLOB + 0x2e0))
    char *self = (char *)this;
    volatile int n = *(int *)(self + 0x90);
    int i = 0;
    const float half = 0.5f;

    if (*(int *)(self + 0x11c) != 0) {
        char *obj = *(char **)(*(char **)(GLOB + 0x8) + 0x14 + *(int *)(MGR + 0x300 + *(int *)(self + 0x120) * 4) * 4);
        if (((V_32A60 *)obj)->v16() == 0) {
            if (*(int *)(*(char **)(self + 0x15c) + 0xfc) == 0) {
                if (*(int *)(*(char **)(self + 0x190) + 0x168) == 0) {
                    ((V_32A60 *)self)->v18(1);
                    *(int *)(GLOB + 0x124) = 1;
                    ((V_32A60 *)*(char **)(*(char **)(self + 0x64) + 0x4c0))->v31(1, 1);
                    ((V_32A60 *)*(char **)(MGR + 0x2fc))->v18(1);
                    {
                        int k;
                        for (k = 0; k < *(int *)(self + 0x90); k++) {
                            char *a = *(char **)(*(char **)(self + 0x64) + 0x4e0);
                            *(float *)(*(char **)(a + 0x1a8 + k * 4) + 0x958) = half;
                        }
                    }
                    ((O_33320 *)*(char **)(self + 0x15c))->func_000602B0();
                    ((O_33320 *)*(char **)(self + 0x15c))->func_00060350(*(int *)(MGR + 0x300 + *(int *)(self + 0x120) * 4));
                }
            }
        }
    }
    for (; i < n; i++) {
        char *arr = *(char **)(GLOB + 0x8);
        int id = *(int *)(MGR + 0x300 + i * 4);
        char *obj = *(char **)(arr + 0x14 + id * 4);
        int mode;
        if (((V_32A60 *)obj)->v16() != 0) {
            continue;
        }
        mode = *(int *)(MGR + 0x4);
        if (mode == 10) {
            if (*(int *)(self + 0x90) == 1) {
                char *o = *(char **)(self + 0x1ac);
                if (o == 0) {
                    continue;
                }
                if (*(int *)(*(char **)(self + 0x15c) + 0xfc) != 0) {
                    continue;
                }
                if (*(int *)(o + 0x1c0) != 0) {
                    continue;
                }
                ((V_32A60 *)self)->v18(1);
                *(int *)(GLOB + 0x124) = 1;
                ((V_32A60 *)*(char **)(*(char **)(self + 0x64) + 0x4c0))->v31(1, 1);
                ((V_32A60 *)*(char **)(MGR + 0x2fc))->v18(1);
                ((O_33320 *)*(char **)(self + 0x15c))->func_000602B0();
                ((O_33320 *)*(char **)(self + 0x15c))->func_00060350(0);
            } else if (*(int *)(self + 0x90) == 2) {
                char *o = *(char **)(self + 0x1a8);
                if (o == 0) {
                    continue;
                }
                if (*(int *)(*(char **)(self + 0x15c) + 0xfc) != 0) {
                    continue;
                }
                if (*(int *)(o + 0x1c0) != 0) {
                    continue;
                }
                ((V_32A60 *)self)->v18(1);
                *(int *)(GLOB + 0x124) = 1;
                ((V_32A60 *)*(char **)(*(char **)(self + 0x64) + 0x4c0))->v31(1, 1);
                ((V_32A60 *)*(char **)(MGR + 0x2fc))->v18(1);
                ((O_33320 *)*(char **)(self + 0x15c))->func_000602B0();
                ((O_33320 *)*(char **)(self + 0x15c))->func_00060350(0);
            }
        } else if (mode != 0) {
            if (*(int *)(*(char **)(self + 0x15c) + 0xfc) != 0) {
                continue;
            }
            if (*(int *)(*(char **)(self + 0x190) + 0x168) != 0) {
                continue;
            }
            ((V_32A60 *)self)->v18(1);
            *(int *)(GLOB + 0x124) = 1;
            ((V_32A60 *)*(char **)(*(char **)(self + 0x64) + 0x4c0))->v31(1, 1);
            ((V_32A60 *)*(char **)(MGR + 0x2fc))->v18(1);
            {
                int k;
                for (k = 0; k < *(int *)(self + 0x90); k++) {
                    char *a = *(char **)(*(char **)(self + 0x64) + 0x4e0);
                    *(float *)(*(char **)(a + 0x1a8 + k * 4) + 0x958) = half;
                }
            }
            ((O_33320 *)*(char **)(self + 0x15c))->func_000602B0();
            ((O_33320 *)*(char **)(self + 0x15c))->func_00060350(id);
        } else {
            char *o = *(char **)(self + 0x16c);
            if (*(int *)(o + 0x1c8) != 0) {
                continue;
            }
            ((V_32A60 *)self)->v18(1);
            *(int *)(GLOB + 0x124) = 1;
            ((V_32A60 *)*(char **)(*(char **)(self + 0x64) + 0x4c0))->v31(1, 1);
            ((V_32A60 *)*(char **)(MGR + 0x2fc))->v18(1);
            {
                int k;
                for (k = 0; k < *(int *)(self + 0x90); k++) {
                    char *a = *(char **)(*(char **)(self + 0x64) + 0x4e0);
                    *(float *)(*(char **)(a + 0x1a8 + k * 4) + 0x958) = half;
                }
            }
            ((O_33320 *)*(char **)(self + 0x160))->func_000602B0();
            ((O_33320 *)*(char **)(self + 0x160))->func_00060350(id);
        }
    }
#undef GLOB
#undef MGR
}

void C_00032E50::func_00032E50(V4_00032E50 v)
{
    if (D_002F08BC != 0) {
        f210 = v;
        f230 = 0.0f;
    }
}

void C_00032E90::func_00032E90(void)
{
    int v;

    if (D_002F08BC != 0 && (f210 != D_00275544 || f214 != D_00275544 || f218 != D_00275544) && f230 < D_00275600) {
        f230 = D_002A8490->f244 + f230;
        AsmFloatToIntRound(func_0001C870(f230, 0, f220, 2.0f, f210), &v);
    }
}

void BmxEvent::func_00032F50()
{
    float t;
    O_Obj32F50 *o;
    int i;

    for (i = 0; i < 2; i++) {
        o = f234[i];
        if (o) {
            if (f27C[i] < D_00275600) {
                t = D_002A8490->f244 + f27C[i];
                f27C[i] = t;
                o->f8->func_001824E0(
                    func_0001C870(t, 0, f25C[i].x, 2.0f, f23C[i].x),
                    func_0001C870(t, 0, f25C[i].y, 2.0f, f23C[i].y),
                    func_0001C870(t, 0, f25C[i].z, 2.0f, f23C[i].z));
            } else {
                o->f8->func_001824E0(f23C[i].x, f23C[i].y, f23C[i].z);
                f234[i] = 0;
                f23C[i] = D_002A1460;
                f25C[i] = D_002A1460;
                f27C[i] = 0.0f;
            }
        }
    }
}

void BmxEvent::func_00033090(const char *name, float x, float y, float z, float w, int flag)
{
    char buf[0x104];
    int i;
    bool found;
    int j;
    O_Obj32F50 *obj;
    char *dot;
    char *s;
    int delta;
    char c;
    for (i = 0; i < (*f64->f3a8)->count; i++) {
        obj = (*f64->f3a8)->items[i];
        if (obj->f8) {
            s = obj->f8->name;
            delta = buf - s;
            do {
                c = *s;
                s[delta] = c;
                s++;
            } while (c);
            dot = func_001E8AC0(buf, '.');
            if (dot) {
                memset(dot, 0, strlen(dot));
            }
            if (!func_001EA426(buf, name)) {
                found = false;
                if (flag) {
                    obj->f8->func_001824E0(x, y, z);
                } else {
                    for (j = 0; j < 2; j++) {
                        if (found) break;
                        if (f234[j] == 0) {
                            f23C[j].Set(x, y, z, w);
                            f234[j] = obj;
                            f25C[j].x = obj->f8->f1c0;
                            f25C[j].y = obj->f8->f1c4;
                            f25C[j].z = obj->f8->f1c8;
                            found = true;
                            f27C[j] = 0.0f;
                        }
                    }
                }
            }
        }
    }
}

void O_H::func_00033220()
{
    vtbl = &D_00276AB4;
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    D_002A8F40 = 1.0f;
    D_002A8490->f2ec->func_0018C120();
    int n = f90;
    if (f11c)
        n = 1;
    for (int i = 0; i < n; i++)
        D_002A8490->f4->func_0001CC80(f6c[i]);
    if (D_002F0630) {
        D_002F0630->v0(1);
        D_002F0630 = 0;
    }
    O_F *p = f1c0;
    if (p) {
        p->func_0009C770();
        func_001E891B(p);
        f1c0 = 0;
    }
    D_002BEAAC->func_0013B340();
    if (f1d8)
        f1d8->v2();
    func_00157660();
}

int BmxEvent::func_00033300(void)
{
    func_00032E90();
    func_00032F50();
    func_00157920();
    return 1;
}

int BmxEvent::func_00033320(void *a, int b)
{
 if(*(int*)((char*)this+0x1f4)) return func_00157BF0(a,b);
 if(func_001361E0(0x17,2,a,0x80000000)) {
 if((*(int**)((char*)D_002A8490+0x2e0))[1] && (*(int*)((char*)this+0x90)!=1 || *(int*)((char*)a+8)==(*(int**)((char*)D_002A8490+0x2e0))[0xc0])) {
 if(*(int*)(*(int*)((char*)this+0x15c)+0xfc) || (*(int*)((char*)this+0x190) && *(int*)(*(int*)((char*)this+0x190)+0x168)) || (*(int*)((char*)this+0x1a8) && *(int*)(*(int*)((char*)this+0x1a8)+0x1c0)) || (*(int*)((char*)this+0x1ac) && *(int*)(*(int*)((char*)this+0x1ac)+0x1c0)) || (*(int*)((char*)this+0x164) && *(int*)(*(int*)((char*)this+0x164)+0x19c))) goto reject;
 ((C_00032A20*)this)->func_00032A20();
 (*(V_33320**)((char*)f64+0x4c0))->v31(1,1);
 (*(V_33320**)(*(int**)((char*)D_002A8490+0x2e0)+0xbf))->v18(1);
 if((*(int**)((char*)D_002A8490+0x2e0))[1]!=10) {
 for(int i=0;i<*(int*)((char*)this+0x90);i++) *(float*)(*(int*)(*(int*)((char*)f64+0x4e0)+0x1a8+i*4)+0x958)=0.5f;
}
 (*(O_33320**)((char*)this+0x15c))->func_000602B0();
 (*(O_33320**)((char*)this+0x15c))->func_00060350(*(int*)((char*)a+8));
 return 1;
 } else {
 if(*(int*)((char*)a+8)!=(*(int**)((char*)D_002A8490+0x2e0))[0xc0] || (*(int*)((char*)this+0x16c) && *(int*)(*(int*)((char*)this+0x16c)+0x1c8)) || (*(int*)((char*)this+0x190) && *(int*)(*(int*)((char*)this+0x190)+0x168))) goto reject;
 ((C_00032A20*)this)->func_00032A20();
 if(*(int*)((char*)f64+0x594)) {
 if(((O_33320*)(*(V_33320**)(*(int**)((char*)D_002A8490+0x2e0)+0xbf)))->func_00094EE0() && !*(int*)((char*)(*(V_33320**)(*(int**)((char*)D_002A8490+0x2e0)+0xbf))+0x24)) *(int*)((char*)this+0x118)=1;
 else { *(int*)((char*)this+0x118)=0; (*(V_33320**)(*(int**)((char*)D_002A8490+0x2e0)+0xbf))->v18(1); }
 } else (*(V_33320**)(*(int**)((char*)D_002A8490+0x2e0)+0xbf))->v18(1);
 (*(V_33320**)((char*)f64+0x4c0))->v31(1,1);
 if((*(int**)((char*)D_002A8490+0x2e0))[1]!=10) {
 for(int i=0;i<*(int*)((char*)this+0x90);i++) *(float*)(*(int*)(*(int*)((char*)f64+0x4e0)+0x1a8+i*4)+0x958)=0.5f;
}
 (*(O_33320**)((char*)this+0x160))->func_000602B0();
 (*(O_33320**)((char*)this+0x160))->func_00060350(*(int*)((char*)a+8));
 return 1;
 }
reject:;
 }
 if(func_00135C70(0x16,0,a,0x30)) {
 if(*(int*)((char*)this+0x198)) (*(O_33320**)((char*)this+0x198))->func_00087D20();
 for(int i=0;i<*(int*)((char*)this+0x90);i++) {
 O_33320 *p=*(O_33320**)((char*)this+0x170+i*4);
 if(p) p->func_00082790();
 }
 }
 if(func_00135C70(0x13,0,a,0x80)) {
 D_002A829C->func_00161760();
 D_002AA6C0->func_001B2640();
 }
 if(func_00135C70(0x14,0,a,1)) *(int*)((char*)this+0x110)=!*(int*)((char*)this+0x110);
 return func_00157BF0(a,b);
}

struct O_60350 { void func_000602B0(); void func_00060350(int a); };
struct O_Obj60 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual int v16(); };
struct O_Dev60 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(int a); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(int a, int b); };
struct O_Pl60 { char pad0[0x958]; float f958; };
struct O_Arr60 { char pad0[0x4e0]; };
struct S_Sub60 { char pad0[0x14]; O_Obj60 *items[1]; };
struct S_Cur60 { int pad0; int f4; char pad8[0x2f4]; O_Dev60 *f2fc; int f300[1]; };
struct S_Gm60 { char pad0[8]; S_Sub60 *f8; char pad0c[0x118]; int f124; char pad128[0x1b8]; S_Cur60 *f2e0; };
struct S_Lv60 { char pad0[0x4c0]; O_Dev60 *f4c0; char pad4c4[0x1c]; O_Pl60 ***f4e0; };
struct O_A60 { char pad0[0x1c0]; int f1c0; };
struct O_B60 { char pad0[0xfc]; int ffc; };
struct O_C60 { char pad0[0x168]; int f168; };
struct O_D60 { char pad0[0x1c8]; int f1c8; };
struct C_00032A60 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(int a);
    char pad4[0x5c];
    S_Lv60 *f64;
    char pad68[0x28];
    int f90;
    char pad94[0x88];
    int f11c;
    int f120;
    char pad124[0x38];
    O_60350 *f15c;
    O_60350 *f160;
    char pad164[8];
    O_D60 *f16c;
    char pad170[0x20];
    O_C60 *f190;
    char pad194[0x14];
    O_A60 *f1a8;
    O_A60 *f1ac;
    void func_00032A60(void);
};
