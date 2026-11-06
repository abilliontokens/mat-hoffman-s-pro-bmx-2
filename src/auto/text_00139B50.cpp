/* 1 function from 0x00139B50 to 0x0013AB60, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" int strlen(const char *s);
extern void *func_001E8A44(int size);
extern void *func_001E8AA5(int size);
extern char *func_001E8920(char *dst, const char *src, int n);
extern void func_001E891B(void *p);
extern "C" void __stdcall func_001577A0(void *p, int f);
extern "C" void __stdcall func_001673B0(void *p, char *buf, int a, int b, int c);
extern "C" void __stdcall func_0019ABA0(void *p, int a, int b);
extern "C" void __stdcall func_0012B410(void *p, float a, int b, int c);
extern "C" void __stdcall func_0012B190(int a, int b, int c, int d);
extern "C" void __stdcall func_0012A770(void *p, int a, int b);

extern char D_00275678[];
extern char D_00277298[];
extern char D_00284C30[];
extern char D_00284C20[];
extern char D_00284C14[];
extern char D_00284C08[];
extern char D_00284BF8[];
extern char D_00284BE8[];
extern char D_002A60B0[];
extern char D_002A5EA0[];
extern char D_002A48F8[];
extern char D_00276F58[];
extern char D_00284BD8[];
extern char D_00275630[];
extern char D_0027D880[];
extern char D_00284BCC[];
extern char D_00284BC8[];
extern char D_00284BBC[];
extern char D_0027C18C[];
extern char D_00284BB0[];
extern char D_00284B9C[];
extern char D_00284B90[];
extern char D_00284B84[];
extern char D_00284AE4[];
extern char D_00284AD0[];
extern char D_00284AB8[];
extern char D_00284AB0[];
extern char D_00284AA0[];
extern void *D_002A8490;
extern void *D_002A829C;
extern void *D_002AA6C0;

struct C_UI {
    void func_00169490(void *p, int a);
    void func_00169710(char *s);
    void func_00168C20(char *name, int a, void *dst);
    void func_00168C50(char *name, float a, void *dst);
    void func_00168BE0(char *a, char *b, char *dst, int n);
};
struct C_UIo { C_UI *func_00168280(); };
struct C_00164440 { void *func_00164440(int a, int b, ...); };
struct C_001B82A0o { void *func_001B82A0(int a); };
struct C_0013E4F0o {
    void *func_0013E4F0(int a);
    void func_0012B410(float a, int b, int c);
    void func_0012B350();
    void func_0012A770(int a, int b);
};
struct C_0012B550o {
    void *func_0012B550(int a);
    void func_0012B5B0(void *p);
    void func_0012B750(int a);
};
struct C_001C3E50o {
    void *func_001C3E50(int a);
    void func_001C3EA0(int a);
    void func_001C4D90();
    int func_001C3F50();
};
struct C_001CF740o { void *func_001CF740(void *a, void *b, int c); };
struct C_00161680o { void func_00161680(); };
struct C_001B2640o { void func_001B2640(); };
struct C_001D3F50o { void func_001D3F50(); };
struct C_00138950o { void func_00138950(); };
struct C_00198390o { void func_00198390(); };
struct C_001673B0o { void func_001673B0(char *buf, int a, int b, int c); };
struct C_0019ABA0o { void func_0019ABA0(int a, int b); };

struct V_60 {
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
    virtual void v27(void *a);
};

struct V_80 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *a, int b, int c, int d, int e);
};

struct S_func_00139B50_this {
    char pad_0x0[0x24];
    int f24;
    int f28;
    int f2c;
    float f30;
    int f34;
    int f38;
    int f3c;
    void *f40;
    void *f44;
    void *f48;
    void *f4c;
    void *f50;
    int f54;
    void **f58;
    int f5c;
    void *f60;
    int f64;
    int f68;
    int f6c;
    int f70;
    int f74;
    int f78;
    int f7c;
    void **f80;
    char pad_0x84[0x14];
    int f98;
    void func_00139B50(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15);
};

void S_func_00139B50_this::func_00139B50(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15)
{
}
