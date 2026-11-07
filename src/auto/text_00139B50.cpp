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
    void func_001691E0();
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
struct C_001673B0o { void func_001673B0(char *buf, int a, int b, int c, int d = 1); };
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
    virtual int v27(void *a);
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
    char b1[0x104];
    char b2[0x104];
    char b3[0x104];
    char b4[0x104];
    char b5[0x104];
    char b6[0x104];
    char b7[0x104];
    int len;
    int n;
    int i;
    int k;
    void *p;
    void *obj;
    int *e;
    C_UI *ui;

    f24 = -1;
    f38 = a12;
    f30 = *(float *)&a13 + *(float *)&a13;
    f2c = *(int *)&f30;
    f4c = (void *)a3;
    f7c = a11;
    f98 = *(int *)(*(int *)(a3 + 0x4a8) + a15 * 4);
    func_001ADCC0(b1, 0x104, D_00275678, a2, a1);
    ui = (C_UI *)func_001E8A44(0x4cc);
    if (ui) {
        ui = ((C_UIo *)ui)->func_00168280();
    } else {
        ui = 0;
    }
    ui->func_00169490(b1 + 4, 0);
    ui->func_00169710(D_00277298);
    ui->func_00168C20(D_00284C30, 0, &f3c);
    ui->func_00168C20(D_00284C20, 0, &f54);
    ui->func_00168C20(D_00284C14, -1, &f64);
    ui->func_00168C20(D_00284C08, 0x64, &f68);
    ui->func_00168C20(D_00284BF8, 0, &f6c);
    ui->func_00168C20(D_00284BE8, 0, &f70);
    f78 = a10;
    if (f64 == -1) {
        f64 = a12;
    }
    len = strlen(D_002A60B0);
    n = 0x103 > len ? len : 0x103;
    func_001E8920(b2, D_002A60B0, n);
    b2[n] = 0;
    len = strlen(D_002A5EA0);
    n = 0x103 > len ? len : 0x103;
    func_001E8920(b3, D_002A5EA0, n);
    b3[n] = 0;
    len = strlen(D_002A48F8);
    n = 0x103 > len ? len : 0x103;
    func_001E8920(b4, D_002A48F8, n);
    b4[n] = 0;
    func_001ADCC0(D_002A60B0, 0x104, D_00276F58, a5);
    D_002A48F8[0] = 0;
    len = strlen((char *)a9);
    n = 0x103 > len ? len : 0x103;
    func_001E8920(D_002A5EA0, (char *)a2, n);
    D_002A5EA0[n] = 0;
    if (f54 > 0) {
        f58 = (void **)func_001E8AA5(f54 * 4);
        for (i = 0; i < f54; i++) {
            func_001ADCC0(b5, 0x104, D_00284BD8, i + 1);
            ui->func_00169710(b5);
            ui->func_00168BE0(D_0027D880, D_00275630, b6, 0x104);
            func_001ADCC0(b1, 0x104, D_00275678, a2, b6);
            p = func_001E8A44(0x244);
            if (p) {
                p = ((C_00164440 *)p)->func_00164440(1, 1);
            } else {
                p = 0;
            }
            f58[i] = p;
            ((C_001673B0o *)f58[i])->func_001673B0(b1 + 4, 0, 1, 1);
            ((C_00198390o *)*(void **)((char *)f58[i] + 4))->func_00198390();
            *(unsigned char *)(*(int *)((char *)f58[i] + 4) + 0x180) |= 8;
            *(unsigned char *)(*(int *)((char *)f58[i] + 4) + 0x180) &= 0xef;
            ((C_0019ABA0o *)*(void **)((char *)f58[i] + 4))->func_0019ABA0(a6, 2);
            obj = f58[i];
            if (obj) {
                p = (void *)(*(int *)(*(int *)obj + 4) + (int)obj);
            } else {
                p = 0;
            }
            func_001577A0(p, -1);
        }
    }
    f5c = a8;
    p = func_001E8A44(0x2c);
    if (p) {
        p = ((C_001B82A0o *)p)->func_001B82A0(1);
    } else {
        p = 0;
    }
    f60 = p;
    if (((V_60 *)f60)->v27(ui) == 0) {
        if (*(int *)((char *)f60 + 0x24) == 0) {
            ((V_60 *)f60)->v2();
            f60 = 0;
        }
    }
    if (f54 > 0) {
        ((C_00138950o *)this)->func_00138950();
    }
    func_001577A0(f60, -1);
    if (f70 > 0) {
        f74 = 0;
        f80 = (void **)func_001E8A44(f70 * 4);
        for (i = 0; i < f70; i++) {
            func_001ADCC0(b5, 0x104, D_00284BCC, i + 1);
            ui->func_00169710(b5);
            ui->func_00168BE0(D_00284BC8, D_00275630, b1 + 4, 0x104);
            p = func_001E8A44(0x20c);
            if (p) {
                p = ((C_001CF740o *)p)->func_001CF740(*(void **)(*(int *)((char *)D_002A8490 + 4) + 0xb4), (void *)a9, 1);
            } else {
                p = 0;
            }
            f80[i] = p;
            ((V_80 *)f80[i])->v4(b1 + 4, 1, 1, 0, 0);
        }
    } else if (f6c > 0) {
        f74 = 1;
    }
    if (f3c > 0) {
        f40 = func_001E8AA5(f3c * 0x2c);
        for (i = 0; i < f3c; i++) {
            e = (int *)((char *)f40 + i * 0x2c);
            func_001ADCC0(b5, 0x104, D_00284BBC, i + 1);
            ui->func_00169710(b5);
            ui->func_00168BE0(D_0027C18C, D_00275630, b7, 0x104);
            ui->func_00168C50(D_00284BB0, 240.0f, &e[7]);
            ui->func_00168C20(D_00284C20, 0, (char *)e + 4);
            ui->func_00168C20(D_00284B9C, 0, (char *)e + 8);
            ui->func_00168C50(D_00284B90, 0.0f, e);
            for (k = 0; k < e[2]; k++) {
                func_001ADCC0(b5, 0x40, D_00284AE4, k + 1);
                ui->func_00168C50(b5, 0.0f, (char *)e[9] + k * 0x10 + 4);
                func_001ADCC0(b5, 0x40, D_00284AD0, k + 1);
                ui->func_00168C50(b5, 0.0f, (char *)e[9] + k * 0x10 + 8);
                func_001ADCC0(b5, 0x40, D_00284AB8, k + 1);
                ui->func_00168C20(b5, 0, (char *)e[9] + k * 0x10 + 0xc);
            }
            if (f74 == 1) {
                if (e[6] >= 0) {
                    e[6] = (int)func_001E8A44(0xc);
                    *(int *)e[6] = a6;
                    *(int *)(e[6] + 4) = a7;
                    *(int *)(e[6] + 8) = a7;
                } else {
                    e[6] = 0;
                }
            } else if (e[4] > 0) {
                e[6] = (int)func_001E8A44(e[4] * 0xc);
                for (k = 0; k < e[4]; k++) {
                    func_001ADCC0(b5, 0x40, D_00284AB0, k + 1);
                    ui->func_00168C20(b5, 0, (char *)e[6] + k * 0xc);
                    func_001ADCC0(b5, 0x40, D_00284AA0, k + 1);
                    ui->func_00168C50(b5, 0.0f, (char *)e[6] + k * 0xc + 4);
                    *(int *)(e[6] + k * 0xc + 8) = *(int *)(e[6] + k * 0xc + 4);
                }
            } else {
                e[6] = 0;
            }
        }
    }
    if (a7 == 0) {
        p = func_001E8A44(0x2d0);
        if (p) {
            p = ((C_0013E4F0o *)p)->func_0013E4F0(1);
        } else {
            p = 0;
        }
        f44 = p;
        ((C_0013E4F0o *)f44)->func_0012B410(1.2469f, 0x280, 0x1c0);
        func_0012B190(0, 0, *(int *)((char *)f44 + 0x204), *(int *)((char *)f44 + 0x208));
        func_001577A0(f44, -1);
    } else {
        f44 = (void *)a7;
    }
    if (a6 == 0) {
        p = func_001E8A44(0x34);
        if (p) {
            p = ((C_0012B550o *)p)->func_0012B550(1);
        } else {
            p = 0;
        }
        f48 = p;
        ((C_0012B550o *)f48)->func_0012B5B0(f44);
        func_001577A0(f48, -1);
    } else {
        f48 = (void *)a6;
    }
    for (i = 0; i < f3c; i++) {
        e = (int *)((char *)f40 + i * 0x2c);
        ((C_0012B550o *)f48)->func_0012B750(e[7]);
    }
    ((C_0013E4F0o *)f44)->func_0012B350();
    ((C_0013E4F0o *)f44)->func_0012A770(a6, 2);
    len = strlen((char *)a5);
    n = 0x103 > len ? len : 0x103;
    func_001E8920(D_002A60B0, (char *)a5, n);
    D_002A60B0[n] = 0;
    if (a7 == 0) {
        p = func_001E8A44(0x70);
        if (p) {
            p = ((C_001C3E50o *)p)->func_001C3E50(1);
        } else {
            p = 0;
        }
        f50 = p;
        ((C_001C3E50o *)f50)->func_001C3EA0(1);
        ((C_001C3E50o *)f50)->func_001C4D90();
        func_001577A0(f50, -1);
    } else {
        f50 = (void *)a7;
    }
    if (((C_001C3E50o *)f50)->func_001C3F50() == 0) {
        ((C_001C3E50o *)f50)->func_001C4D90();
    }
    ((C_00161680o *)D_002A829C)->func_00161680();
    ((C_001B2640o *)D_002AA6C0)->func_001B2640();
    len = strlen(b2);
    n = 0x103 > len ? len : 0x103;
    func_001E8920(D_002A60B0, b2, n);
    D_002A60B0[n] = 0;
    len = strlen(b3);
    n = 0x103 > len ? len : 0x103;
    func_001E8920(D_002A5EA0, b3, n);
    D_002A5EA0[n] = 0;
    len = strlen(b4);
    n = 0x103 > len ? len : 0x103;
    func_001E8920(D_002A48F8, b4, n);
    D_002A48F8[n] = 0;
    if (ui) {
        ((C_UIo *)ui)->func_00168280();
        func_001E891B(ui);
    }
    ((C_001D3F50o *)this)->func_001D3F50();
}
