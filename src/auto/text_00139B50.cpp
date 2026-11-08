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

struct C_00194740o { void *func_00194740(); void func_001947E0(char *,int,int,int); };
struct C_00162B20o { int func_00162B20(char *,int); };
extern void *D_002EF7D0;
extern int func_001EA426(const char *,const char *);
extern void func_00030F30(char *,const char *);
extern char D_00284B7C[],D_00275F04[],D_00284B70[],D_00284B64[],D_00284B5C[],D_00284B54[],D_00284B48[],D_00284B34[],D_00284B20[],D_002A68C4[],D_00284B08[],D_00284AFC[];
struct UIItem { float f0; int f4,f8,fc,f10,f14; void *f18,*f1c,*f20,*f24; int f28; };
struct C_UI {
    void func_00168A10(char *,int *);
    void func_00168CB0(char *,void *,void *);
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
    char b5[0x40];
    char b6[0x104];
    char b8[0x104];
    S_func_00139B50_this * volatile self = this;
    volatile int len;
    int n;
    volatile int limit;
    int i;
    void *p;
    void *obj;
    C_UI *ui;

    self->f24 = -1;
    self->f38 = a12;
    { S_func_00139B50_this *o=self; o->f30=*(float *)&a13+*(float *)&a13; }
    { S_func_00139B50_this *o=self; o->f2c=*(int *)&o->f30; }
    self->f4c = (void *)a3;
    self->f7c = a11;
    int texture;
    texture = *(int *)(*(int *)((char *)self->f4c + 0x4a8) + a15 * 4);
    func_001ADCC0(b1, 0x104, D_00275678, a2, a1);
    ui = (C_UI *)func_001E8A44(0x4cc);
    if (ui) {
        ui = ((C_UIo *)ui)->func_00168280();
    } else {
        ui = 0;
    }
    ui->func_00169490(b1, 0);
    ui->func_00169710(D_00277298);
    ui->func_00168C20(D_00284C30, 0, &self->f3c);
    ui->func_00168C20(D_00284C20, 0, &self->f54);
    ui->func_00168C20(D_00284C14, -1, &self->f64);
    ui->func_00168C20(D_00284C08, 0x64, &self->f68);
    ui->func_00168C20(D_00284BF8, 0, &self->f6c);
    ui->func_00168C20(D_00284BE8, 0, &self->f70);
    self->f78 = a10;
    if (self->f64 == -1) {
        self->f64 = a12;
    }
    len = strlen(D_002A60B0);
    limit=0x103; n=limit>len?len:limit;
    func_001E8920(b2, D_002A60B0, n);
    b2[n] = 0;
    len = strlen(D_002A5EA0);
    limit=0x103; n=limit>len?len:limit;
    func_001E8920(b3, D_002A5EA0, n);
    b3[n] = 0;
    len = strlen(D_002A48F8);
    limit=0x103; n=limit>len?len:limit;
    func_001E8920(b4, D_002A48F8, n);
    b4[n] = 0;
    func_001ADCC0(D_002A60B0, 0x104, D_00276F58, a5);
    D_002A48F8[0] = 0;
    len = strlen((char *)a9);
    limit=0x103; n=limit>len?len:limit;
    func_001E8920(D_002A5EA0, (char *)a2, n);
    D_002A5EA0[n] = 0;
    if (self->f54 > 0) {
        self->f58 = (void **)func_001E8AA5(self->f54 * 4);
        for (i = 0; i < self->f54; i++) {
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
            self->f58[i] = p;
            ((C_001673B0o *)self->f58[i])->func_001673B0(b1, 0, 1, 1, 1);
            ((C_00198390o *)*(void **)((char *)self->f58[i] + 4))->func_00198390();
            *(unsigned char *)(*(int *)((char *)self->f58[i] + 4) + 0x180) |= 8;
            *(unsigned char *)(*(int *)((char *)self->f58[i] + 4) + 0x180) &= 0xef;
            ((C_0019ABA0o *)*(void **)((char *)self->f58[i] + 4))->func_0019ABA0(texture, 2);
            obj = self->f58[i];
            if (obj) {
                p = (void *)(*(int *)(*(int *)obj + 4) + (int)obj);
            } else {
                p = 0;
            }
            func_001577A0(p, -1);
        }
    }

    self->f5c=a8;
    p=func_001E8A44(0x2c);
    self->f60=p?((C_001B82A0o *)p)->func_001B82A0(1):0;
    if (!((V_60 *)self->f60)->v27(ui)) {
        if (!*(int *)((char *)self->f60+0x24)) { ((V_60 *)self->f60)->v2(); self->f60=0; }
    } else {
        if(self->f54>0) ((C_00138950o *)this)->func_00138950();
        func_001577A0(self->f60,-1);
    }
    if(self->f70>0) {
        self->f74=0; self->f80=(void **)func_001E8A44(self->f70*4);
        for(i=0;i<self->f70;++i) {
            func_001ADCC0(b5,0x104,D_00284BCC,i+1);
            ui->func_00169710(b5);
            ui->func_00168BE0(D_00284BC8,D_00275630,b1,0x104);
            p=func_001E8A44(0x20c);
            self->f80[i]=p?((C_001CF740o *)p)->func_001CF740(*(void **)(*(int *)((char *)D_002A8490+4)+0xb4),(void *)a9,1):0;
            ((V_80 *)self->f80[i])->v4(b1,1,1,0,0);
        }
    } else if(self->f6c>0) self->f74=1;
    self->f40=func_001E8AA5(self->f3c*0x2c);

    for(i=0;i<self->f3c;++i) {
        UIItem *item;
        int j,single;
        volatile int index;
        float value,rate;
        char kind[16],name[64];
        item=(UIItem *)self->f40+i;
        func_001ADCC0(b5,0x104,D_00284BBC,i+1);
        ui->func_00169710(b5);
        ui->func_00168BE0(D_0027C18C,D_00275630,b8,0x104);
        ui->func_00168C50(D_00284BB0,30.0f,&rate);
        ui->func_00168C20(D_00284C20,0,&((UIItem *)self->f40)[i].f4);
        ui->func_00168C20(D_00284B9C,0,&((UIItem *)self->f40)[i].f8);
        ui->func_00168C50(D_00284B90,0,&((UIItem *)self->f40)[i].f0);
        ui->func_00168BE0(D_00284B84,D_00275630,kind,16);
        ui->func_00168C20(D_00284B7C,0,&((UIItem *)self->f40)[i].fc);
        ui->func_00168C20(D_00275F04,0,&single);
        ui->func_00168C50(D_00284B70,0,&value);
        ui->func_00168C20(D_00284B64,0,&((UIItem *)self->f40)[i].f10);
        --single;
        ((UIItem *)self->f40)[i].f14=((UIItem *)self->f40)[i].f0!=0;
        ((UIItem *)self->f40)[i].f28=func_001EA426(kind,D_00284B5C)==0;
        func_00030F30(b8,D_00284B54);
        func_001ADCC0(b1,0x104,D_00275678,a2,b8);
        p=func_001E8A44(0x30);
        ((UIItem *)self->f40)[i].f1c=p?((C_00194740o *)p)->func_00194740():0;
        ((C_00194740o *)((UIItem *)self->f40)[i].f1c)->func_001947E0(b1,0,0,1);
        *(float *)((char *)((UIItem *)self->f40)[i].f1c+8)=rate;
        if(((UIItem *)self->f40)[i].f4>0) {
            ((UIItem *)self->f40)[i].f20=func_001E8AA5(((UIItem *)self->f40)[i].f4*28);
            for(j=0;j<((UIItem *)self->f40)[i].f4;++j) {
                char *entry=(char *)((UIItem *)self->f40)[i].f20+j*28;
                func_001ADCC0(b5,64,D_00284B48,j+1);
                ui->func_00168A10(b5,(int *)&index); --index;
                n=self->f54-1; index=index<n?index:n; index=index>0?index:0;
                *(int *)entry=index;
                func_001ADCC0(b5,64,D_00284B34,j+1);
                ui->func_00168BE0(b5,D_00275630,name,64);
                *(int *)(entry+4)=((C_00162B20o *)D_002EF7D0)->func_00162B20(name,1);
                func_001ADCC0(b5,64,D_00284B20,j+1);
                ui->func_00168CB0(b5,D_002A68C4,entry+8);
                func_001ADCC0(b5,64,D_00284B08,j+1);
                ui->func_00168C20(b5,0,entry+24);
            }
        } else ((UIItem *)self->f40)[i].f20=0;
        if(self->f60 && ((UIItem *)self->f40)[i].f8>0) {
            ((UIItem *)self->f40)[i].f24=func_001E8AA5(((UIItem *)self->f40)[i].f8*16);
            for(j=0;j<((UIItem *)self->f40)[i].f8;++j) {
                char *entry=(char *)((UIItem *)self->f40)[i].f24+j*16;
                func_001ADCC0(b5,64,D_00284AFC,j+1);
                ui->func_00168C20(b5,1,(int *)&index); --index;
                n=*(int *)((char *)self->f60+0x24)-1;
                index=index<n?index:n; index=index>0?index:0;
                *(int *)entry=index;
                func_001ADCC0(b5,64,D_00284AE4,j+1); ui->func_00168C50(b5,0,entry+4);
                func_001ADCC0(b5,64,D_00284AD0,j+1); ui->func_00168C50(b5,0,entry+8);
                func_001ADCC0(b5,64,D_00284AB8,j+1); ui->func_00168C20(b5,0,entry+12);
            }
        } else ((UIItem *)self->f40)[i].f24=0;
        if(self->f74==1) {
            if(single>=0) {
                ((UIItem *)self->f40)[i].f18=func_001E8A44(12);
                *(int *)((UIItem *)self->f40)[i].f18=single;
                *(float *)((char *)((UIItem *)self->f40)[i].f18+4)=value;
                *(float *)((char *)((UIItem *)self->f40)[i].f18+8)=value;
            } else ((UIItem *)self->f40)[i].f18=0;
        } else if(((UIItem *)self->f40)[i].f10>0) {
            ((UIItem *)self->f40)[i].f18=func_001E8A44(((UIItem *)self->f40)[i].f10*12);
            for(j=0;j<((UIItem *)self->f40)[i].f10;++j) {
                char *entry=(char *)((UIItem *)self->f40)[i].f18+j*12;
                func_001ADCC0(b5,64,D_00284AB0,j+1);
                ui->func_00168C20(b5,0,(int *)&index); --index;
                n=self->f70-1; index=index<n?index:n; index=index>0?index:0;
                *(int *)entry=index;
                func_001ADCC0(b5,64,D_00284AA0,j+1);
                ui->func_00168C50(b5,0,entry+4);
                *(int *)(entry+8)=*(int *)(entry+4);
            }
        } else ((UIItem *)self->f40)[i].f18=0;
    }
    if(!a7) {
        p=func_001E8A44(0x2d0);
        self->f44=p?((C_0013E4F0o *)p)->func_0013E4F0(1):0;
        ((C_0013E4F0o *)self->f44)->func_0012B410(1.24444449f,640,448);
        func_0012B190(0,0,*(int *)((char *)self->f44+0x204),*(int *)((char *)self->f44+0x208));
        func_001577A0(self->f44,-1);
    } else self->f44=(void *)a7;
    if(!a6) {
        p=func_001E8A44(0x34);
        self->f48=p?((C_0012B550o *)p)->func_0012B550(1):0;
        ((C_0012B550o *)self->f48)->func_0012B5B0(self->f44);
        func_001577A0(self->f48,-1);
    } else self->f48=(void *)a6;
    for(i=0;i<self->f3c;++i) ((C_0012B550o *)self->f48)->func_0012B750(*(int *)((char *)self->f40+i*0x2c+0x1c));
    ((C_0013E4F0o *)self->f44)->func_0012B350();
    ((C_0013E4F0o *)self->f44)->func_0012A770(texture,2);
    len=strlen((char *)a5); limit=0x103; n=limit>len?len:limit;
    func_001E8920(D_002A60B0,(char *)a5,n); D_002A60B0[n]=0;
    if(!a4) {
        p=func_001E8A44(0x70);
        self->f50=p?((C_001C3E50o *)p)->func_001C3E50(1):0;
        ((C_001C3E50o *)self->f50)->func_001C3EA0(1);
        ((C_001C3E50o *)self->f50)->func_001C4D90();
        func_001577A0(self->f50,-1);
    } else {
        self->f50=(void *)a4;
        if(!((C_001C3E50o *)self->f50)->func_001C3F50()) ((C_001C3E50o *)self->f50)->func_001C4D90();
    }
    ((C_00161680o *)D_002A829C)->func_00161680();
    ((C_001B2640o *)D_002AA6C0)->func_001B2640();
    len=strlen(b2); limit=0x103; n=limit>len?len:limit;
    func_001E8920(D_002A60B0,b2,n); D_002A60B0[n]=0;
    len=strlen(b3); limit=0x103; n=limit>len?len:limit;
    func_001E8920(D_002A5EA0,b3,n); D_002A5EA0[n]=0;
    len=strlen(b4); limit=0x103; n=limit>len?len:limit;
    func_001E8920(D_002A48F8,b4,n); D_002A48F8[n]=0;
    if(ui) { ui->func_001691E0(); func_001E891B(ui); }
    ((C_001D3F50o *)this)->func_001D3F50();
}
