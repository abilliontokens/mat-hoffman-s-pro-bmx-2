/* 3 functions from 0x00033680 to 0x000342C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
typedef void (__fastcall *E34090_Fn)(void *self);
struct E34090_Obj { void func_000831E0(); void func_000843C0(); void func_000843E0(int a); void func_00099A60(void *p); };
struct E34090_T { char pad[0x67c]; int f67c; char pad680[0x958 - 0x680]; float f958; };
struct E34090_Sub { void func_000560A0(); };
struct E34090_Hold { char pad[0x50]; E34090_Sub *f50; };
struct E34090_X { void func_0001C240(); };
struct E34090_Z { void func_000A84F0(); };
struct E34090_Y {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(void *a);
};
struct E34090_L { char pad[0x24]; int count; char pad28[0x1a8 - 0x28]; E34090_T *items[1]; };
struct E34090_PP {
    void **vtbl;
    char pad4[0x3b4 - 4]; E34090_Y *f3b4; char pad3b8[0x484 - 0x3b8]; E34090_X *f484;
    char pad488[0x4e0 - 0x488]; E34090_L *f4e0; char pad4e4[0x534 - 0x4e4]; E34090_Z *f534;
    void func_000A2ED0();
};
struct E34090_M { char pad[8]; int f8; char padc[4]; int f10; };
struct E34090_G { char pad[0x124]; int f124; char pad128[0x2e0 - 0x128]; E34090_M *f2e0; };
extern E34090_G *D_002A8490;
extern int D_002AADF8;
extern void __stdcall func_00099A60(void *p);
struct E34090_Ev {
    void **vtbl;
    void func_00032220();
    char pad4[0x44 - 4]; E34090_Hold *f44; E34090_Hold *f48; char pad4c[0x64 - 0x4c]; E34090_PP *f64;
    char pad68[0x90 - 0x68]; int f90; char pad94[0xe4 - 0x94]; char *fe4;
    char padE8[0x11c - 0xe8]; int f11c; char pad120[4]; int f124; int f128; int f12c; int f130; int f134;
    char pad138[0x170 - 0x138]; E34090_Obj *f170[20]; E34090_Obj *f1c0; char pad1c4[4]; int f1c8;
    int func_00034090();
};
struct C_000342A0 {
    undefined4 func_000342A0(byte param_1);
};

#include <string.h>

/* ---- BmxEvent::func_00033680 (event setup) ---- */
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" char *func_00030F30(char *dst, const char *src);
extern "C" void *func_001E8A44(unsigned int size);
extern "C" void func_001DC974(void);
extern "C" int func_001E8AF0(const char *a, const char *b);
extern "C" int func_0001CBF0(void);
extern "C" void func_0001CC00(int h, float a, float b);
extern char D_002A5870[], D_002A5768[], D_00276C40[], D_002A60B0[], D_00275678[], D_002A5348[], D_002A5FA8[];
extern char D_002A48F8[], D_002A47F0[], D_002A4C10[], D_002A4B08[], D_00276C34[], D_00276C28[], D_00276C14[];
extern char D_00276C08[], D_00276C00[], D_00276BF8[], D_00276BF0[], D_00276BE8[], D_00276BE0[];
extern char D_00276BC8[], D_00276BC0[], D_00276BB4[], D_002A5EA0[], D_00276BAC[];
extern char D_001F4240;
extern float D_00276BD4, D_00276BD8, D_00276BDC;
extern int D_002A1448, D_002A1444, D_002AB7F0;

struct E33680_Mgr {
    char pad0[4];
    int f4;
    int f8;
    char padc[0x48 - 0xc];
    int f48;
    char f4c[1];
};
struct E33680_Handles {
    int func_0001CBF0();
    void func_0001CC00(int h, float a, float b);
};
struct E33680_G {
    char pad0[4];
    E33680_Handles *f4;
    char pad8[0x2b8 - 8];
    char f2b8[0x28];
    E33680_Mgr *f2e0;
};
struct E33680_V3 { float x, y, z; };
struct E33680_Rp { void func_001041F0(void *t); };

struct E33680_Loader {
    void func_0013C1D0(int a);
    int func_0013D780(char *name, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    void func_0013B260(int a);
    void func_0013DFF0(char *name, int a);
};
extern E33680_Loader *D_002BEAAC;
struct E33680_Sink { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(char *s); };
extern E33680_Sink *D_002A829C;

struct E33680_Trace {
    virtual void v0();
    virtual void v1();
    virtual void v2(const char *file, int line, int x);
    virtual void v3(const char *file, int line, int x);
};

struct E33680_Track { char pad0[0xa38]; int fA38; };
struct E33680_List {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6();
    char pad4[0x20];
    int f24;
    char pad28[0x1a8 - 0x28];
    E33680_Track *arr1a8[1];
};
struct E33680_Obj388 { char pad0[0x420]; union { float f420[3]; E33680_V3 v420; }; };

struct E33680_Ev;
struct E33680_Level {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(char *a);
    virtual void v30();
    virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual void v37();
    virtual int v38(char *a);
    virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56();
    virtual int v57(char *a);
    virtual void v58();
    virtual void v59(); virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68();
    virtual void v69(float a, float b);
    virtual void v70(); virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78(int a, int b, int c);
    virtual void v79(int a, int b);
    virtual void v80();
    virtual void v81(); virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89(); virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93();
    virtual void v94();
    char pad4[0x134 - 4];
    char f134[0x388 - 0x134];
    E33680_Obj388 *f388;
    char pad38c[0x4e0 - 0x38c];
    E33680_List *f4e0;
    E33680_Level *func_000AC2C0(int a);
    void func_000A0AE0(E33680_Ev *ev);
    void func_000AF0D0();
    void func_000A2620();
    void func_000A25E0();
    void func_000A1E60();
    void func_000A17E0();
    void func_000A10B0(int a);
    void func_000AF080(int a, int b, int c);
    void func_000A0B80();
    void func_000AC6E0();
    void func_000AC730();
    void func_000AC760();
    void func_000ACC40();
    void func_000A3C50();
    void func_000A3170();
    void func_000A1830();
};
struct E33680_Boot { void func_00149380(); };
extern "C" void __stdcall func_001041F0(E33680_Track *t);

struct E33680_Ev {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32();
    char pad4[0x60];
    E33680_Level *f64;
    char pad68[4];
    int f6c[4];
    char pad7c[0x8c - 0x7c];
    int f8c;
    int f90;
    char pad94[0x11c - 0x94];
    int f11c;
    char pad120[0x1c4 - 0x120];
    E33680_Rp *f1c4;
    char pad1c8[0x1d4 - 0x1c8];
    E33680_Trace *f1d4;
    char pad1d8[0x1f8 - 0x1d8];
    int f1f8;
    int f1fc;
    char pad200[4];
    int f204;
    int f208;
    int f20c;
    void func_00031840();
    void func_00031E20();
    int func_00033680();
};


int E33680_Ev::func_00033680()
{
    char buf1[0x104];
    char buf0[0x104];
    char buf2[0x104];
    char buf3[0x104];
    void *p;
    int n;
    int i;

    f8c = 0;
    if (((E33680_G *)D_002A8490)->f2b8[0] != 0) {
        strcpy(buf1, ((E33680_G *)D_002A8490)->f2b8);
    } else {
        strcpy(buf1, ((E33680_G *)D_002A8490)->f2e0->f4c);
    }
    func_001ADCC0(D_002A5870, 0x104, D_00276C40, D_002A5768, buf1);
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    func_001ADCC0(D_002A4C10, 0x104, D_00275678, D_002A5870, D_002A4B08);
    p = func_001E8A44(0x4010);
    if (p) {
        ((E33680_Boot *)p)->func_00149380();
    }
    if (((E33680_G *)D_002A8490)->f2e0->f4 != 10) {
        func_001ADCC0(buf2, 0x104, D_00276C34, D_002A5870, buf1);
    } else {
        func_001ADCC0(buf2, 0x104, D_00276C28, D_002A5870, f90);
    }
    D_002BEAAC->func_0013C1D0((int)&D_001F4240);
    if (D_002BEAAC->func_0013D780(buf2, 1, 0, 0, 0, 0, 0, 0)) {
        D_002BEAAC->func_0013B260(0);
    }
    func_001DC974();
    func_001ADCC0(buf3, 0x104, D_00276C14, D_002A5870, buf1);
    D_002A829C->v4(buf3);
    n = ((E33680_G *)D_002A8490)->f2e0->f4;
    if (n == 4 || n == 9) {
        f11c = 1;
    }
    strcpy(buf0, buf1);
    p = func_001E8A44(0x5c0);
    f64 = p ? ((E33680_Level *)p)->func_000AC2C0(1) : 0;
    f64->func_000A0AE0(this);
    f64->v29(buf1);
    f64->v30();
    f64->v37();
    if (f1d4) {
        f1d4->v3(D_00276C08, 0x28, 0x10);
    }
    if (f1d4) {
        f1d4->v2(D_00276C08, 0x86, 0x187);
    }
    if (f64->v57(buf1)) {
        f64->v58();
        f64->v62();
    }
    if (((E33680_G *)D_002A8490)->f2e0->f4 != 10) {
        if (f64->v38(buf0)) {
            f64->v39();
            f64->v56();
        }
    }
    if (f1f8 != 0 && f20c == 0) {
        func_00030F30(buf0, D_00276C00);
        buf0[strlen(buf0) - 1] = 0;
        if (f64->v38(buf0)) {
            f64->v39();
            f64->v56();
        }
    } else if (f204 != 0) {
        func_00030F30(buf0, D_00276BF8);
        buf0[strlen(buf0) - 1] = 0;
        if (f64->v38(buf0)) {
            f64->v39();
            f64->v56();
        }
    } else if (f208 != 0) {
        func_00030F30(buf0, D_00276BF0);
        buf0[strlen(buf0) - 1] = 0;
        if (f64->v38(buf0)) {
            f64->v39();
            f64->v56();
        }
    } else if (f1fc != 0) {
        func_00030F30(buf0, D_00276BE8);
        buf0[strlen(buf0) - 1] = 0;
        if (f64->v38(buf0)) {
            f64->v39();
            f64->v56();
        }
    } else if (f20c != 0) {
        func_00030F30(buf0, D_00276BE0);
        buf0[strlen(buf0) - 1] = 0;
        if (f64->v38(buf0)) {
            f64->v39();
            f64->v56();
        }
    }
    f64->func_000AF0D0();
    if (f1d4) {
        f1d4->v3(D_00276C08, 0x50, 0x10);
    }
    if (f1d4) {
        f1d4->v2(D_00276C08, 0x9a, 0x187);
    }
    f64->v64();
    f64->v68();
    if (f90 == 1 || f11c != 0) {
        f64->v69(1000.0f, -1.0f);
    } else if (f90 == 2) {
        f64->v69(500.0f, -1.0f);
    } else {
        f64->v69(250.0f, -1.0f);
    }
    if (D_002A1448 != 0) {
        if (((E33680_G *)D_002A8490)->f2e0->f4 == 10) {
            f64->f388->v420 = *(E33680_V3 *)&D_00276BD4;
        }
        n = 0;
        if (((E33680_G *)D_002A8490)->f2e0->f4 != 0) {
            n = 1000;
        }
        if (strcmp(buf1, "lasvegas") == 0 || strcmp(buf1, "hawaii") == 0) {
            n += 2000;
        } else {
            n += 1000;
        }
        f64->func_000A10B0(n);
    }
    if (f1d4) {
        f1d4->v3(D_00276C08, 0x78, 0x10);
    }
    if (f1d4) {
        f1d4->v2(D_00276C08, 0xae, 0x187);
    }
    func_001ADCC0(D_002A5EA0, 0x104, D_00276BB4, D_002A5870);
    f64->v72();
    if (f1d4) {
        f1d4->v3(D_00276C08, 0xa0, 0x10);
    }
    if (f1d4) {
        f1d4->v2(D_00276C08, 0xc2, 0x187);
    }
    f64->v76();
    if (f1d4) {
        f1d4->v3(D_00276C08, 0xc8, 0x10);
    }
    if (f1d4) {
        f1d4->v2(D_00276C08, 0xd6, 0x187);
    }
    f64->v73();
    f64->func_000A2620();
    if (f90 == 1) {
        f64->func_000A25E0();
    }
    if (f64->v57(buf1)) {
        f64->v61();
        f64->v62();
    }
    if (f1d4) {
        f1d4->v3(D_00276C08, 0xfa, 0x10);
    }
    if (f1d4) {
        f1d4->v2(D_00276C08, 0xef, 0x187);
    }
    f64->func_000A1E60();
    if (((E33680_G *)D_002A8490)->f2e0->f4 != 4 || ((E33680_G *)D_002A8490)->f2e0->f48 != 5) {
        f64->func_000A17E0();
    }
    f64->v80();
    if (f1d4) {
        f1d4->v3(D_00276C08, 0x122, 0x10);
    }
    if (f1d4) {
        f1d4->v2(D_00276C08, 0x103, 0x187);
    }
    D_002AB7F0 = 0;
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
    if (((E33680_G *)D_002A8490)->f2e0->f4 == 0) {
        f64->v78(((E33680_G *)D_002A8490)->f2e0->f8, 2, 0);
        f64->v79(((E33680_G *)D_002A8490)->f2e0->f8, 2);
    } else {
        f64->v78(((E33680_G *)D_002A8490)->f2e0->f8, f90, 0);
        f64->v79(((E33680_G *)D_002A8490)->f2e0->f8, f90);
    }
    f64->func_000A0B80();
    if (D_002A1448 != 0) {
        f64->v74();
    }
    f64->v84();
    f64->func_000AC6E0();
    f64->v83();
    f64->func_000AC730();
    f64->func_000AC760();
    f64->func_000ACC40();
    f64->v85();
    f64->v94();
    f64->v87();
    f64->v88();
    f64->func_000A3C50();
    func_00031840();
    D_002BEAAC->func_0013DFF0(buf2, 1);
    if (f1d4) {
        f1d4->v3(D_00276C08, 0x14a, 0x10);
    }
    if (f1d4) {
        f1d4->v2(D_00276C08, 0x117, 0x187);
    }
    v32();
    if (((E33680_G *)D_002A8490)->f2e0->f4 != 10) {
        f64->func_000AF080(f90, f11c, D_002A1444);
        f64->f4e0->v6();
        for (i = 0; i < f64->f4e0->f24; i++) {
            if (f1c4 != 0) {
                f1c4->func_001041F0(f64->f4e0->arr1a8[i]);
            }
            if (func_001E8AF0(f64->f134, D_00276BAC) != 0) {
                f64->f4e0->arr1a8[i]->fA38 = 0;
            }
        }
        func_00031E20();
    }
    f64->v51();
    f64->v52();
    f64->func_000A3170();
    if (((E33680_G *)D_002A8490)->f2e0->f4 != 10) {
        f64->func_000A1830();
    }
    n = f90;
    if (f11c != 0) {
        n = 1;
    }
    for (i = 0; i < n; i++) {
        int h = ((E33680_G *)D_002A8490)->f4->func_0001CBF0();
        f6c[i] = h;
        ((E33680_G *)D_002A8490)->f4->func_0001CC00(h, 1.0f, 1.0f);
    }
    if (f1d4) {
        f1d4->v3(D_00276C08, 0x172, 0x10);
    }
    if (f1d4) {
        f1d4->v2(D_00276C08, 0x12b, 0x187);
    }
    return 1;
}

int E34090_Ev::func_00034090()
{
    int i;
    int j;
    ((E34090_Fn)vtbl[0xa0 / 4])(this);
    func_00032220();
    for (i = 0; i < f64->f4e0->count; i++) {
        f64->f4e0->items[i]->f67c = 0;
    }
    if (f64->f484) {
        f64->f484->func_0001C240();
    }
    ((E34090_Fn)f64->vtbl[0x158 / 4])(f64);
    f64->func_000A2ED0();
    if (f64->f3b4) {
        f64->f3b4->v30(f64);
    }
    if (f64->f534) {
        f64->f534->func_000A84F0();
    }
    if (f1c0) {
        f1c0->func_00099A60(f64->f3b4);
    }
    if (D_002A8490->f124) {
        D_002A8490->f124 = 0;
    }
    for (j = 0; j < f90; j++) {
        if (f170[j]) {
            f170[j]->func_000831E0();
        }
    }
    f128 = D_002A8490->f2e0->f10;
    f124 = 0;
    f12c = 0;
    f130 = 0;
    f134 = -1;
    f1c8 = 0;
    D_002AADF8 = 1;
    f44->f50->func_000560A0();
    if (f90 > 1 && f11c == 0) {
        switch (D_002A8490->f2e0->f8) {
        case 1:
            *(int *)(fe4 + 0xf0) = 0xe0;
            break;
        case 2:
            *(int *)(fe4 + 0xf0) = 0x140;
            break;
        }
        f48->f50->func_000560A0();
    }
    for (i = 0; i < f64->f4e0->count; i++) {
        if (f170[i]) {
            f170[i]->func_000843E0(1);
            f170[i]->func_000843C0();
        }
        f64->f4e0->items[i]->f958 = 0.2f;
    }
    return 1;
}

undefined4 C_000342A0::func_000342A0(byte param_1)
{
  int func_00033220(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00033220();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
