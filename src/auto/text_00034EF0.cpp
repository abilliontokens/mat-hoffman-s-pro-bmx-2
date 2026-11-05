/* 15 functions from 0x00034EF0 to 0x00035E80, found by Ghidra. */
#include "common.h"
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" unsigned __int64 func_001E8858(double x);

extern char D_00276D5C;
extern float D_00276CA0;

struct I_002A8490 {
    virtual void slot_00(void) = 0;
    virtual void slot_04(void) = 0;
    virtual void slot_08(void) = 0;
    virtual void slot_0c(void) = 0;
    virtual void slot_10(void) = 0;
    virtual void slot_14(void) = 0;
    virtual void slot_18(void) = 0;
    virtual void slot_1c(void) = 0;
    virtual void slot_20(void) = 0;
    virtual void slot_24(void) = 0;
    virtual void slot_28(void) = 0;
    virtual void slot_2c(void) = 0;
    virtual void slot_30(void) = 0;
    virtual void slot_34(void) = 0;
    virtual void slot_38(void) = 0;
    virtual void slot_3c(void *a, void *b, int c, int d) = 0;
};

extern I_002A8490 *D_002A8490;

struct C_00035BE0 {
    char pad0[0x1a0];
    void *f1a0;
    char pad1a4[0x2c];
    void *f1d0;
    void func_001577A0(void *p, int n);
    void func_00035BE0(void);
};

struct S_35300_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    void func_0008B6F0(void);
    void func_0008B680(char *p);
};

struct C_00035300 {
    char pad0[0x494];
    int f494;
    char pad498[0xc8];
    S_35300_Obj *f560;
    void func_00035300(char *name, int n);
};

struct S_35360_Item {
    char pad0[0x67c];
    int f67c;
    void func_0010C090(void *a, void *b, void *c, int d);
};

struct S_35360_Tbl {
    char pad0[0x24];
    int count;
    char pad28[0x180];
    S_35360_Item *objs[1];
};

struct S_35360_Mgr {
    char pad0[0x4e0];
    S_35360_Tbl *f4e0;
};

struct C_00035360 {
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
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
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
    char pad4[0x60];
    S_35360_Mgr *f64;
    char pad68[0x22c];
    char f294[0x10];
    char f2a4[0x10];
    char f2b4[0x10];
    void func_00032220(void);
    void func_00035360(void);
};

struct S_35680_Screen {
    char pad0[0x1e0];
    u32 f1e0;
    char pad1e4[0x20];
    int f204;
    int f208;
    void func_0012B190(int x, int y, int w, int h);
};

struct C_00035680 {
    char pad0[0x24];
    S_35680_Screen *f24;
    S_35680_Screen *f28;
    char pad2c[0x1b0];
    char f1dc[4];
    u32 f1e0;
    void func_00035680(void);
};
