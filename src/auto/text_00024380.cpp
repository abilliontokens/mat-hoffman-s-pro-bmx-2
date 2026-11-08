/* 1 function from 0x00024380 to 0x00025240, found by Ghidra. */
#include "common.h"

struct V4_24380 { float x, y, z, w; };

struct Ini_24380 {
    int func_00169710(const char *name);
    void func_00168C20(const char *key, int def, void *out);
    void func_00168C50(const char *key, float def, void *out);
    void func_00168CB0(const char *key, void *def, void *out);
    void func_00168BE0(const char *key, const char *def, char *out, int size);
};

struct Debris_24380 {
    float f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    V4_24380 f1C;
    unsigned char f2C;
    unsigned char f2D;
    unsigned char f2E;
    unsigned char f2F;
    char f30[0x104];
};

struct Seg_24380 {
    int f0;
    int f4;
    int f8;
    int fC;
    void *f10;
};

struct Obj20C_24380;

struct Obj20C_Vtbl_24380 {
    void *f0;
    void *f4;
    void *f8;
    void *fC;
    void (*v10)(int a, int b, int c, int d, char *buf);
};

struct Obj20C_24380 {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vC();
    virtual void v10(char *, int, int, int, int);
    void *vtbl;
    Obj20C_24380 *func_001CF740(void *a, int b, int c);
};

struct Seg5C_24380 {
    int f0;
    Obj20C_24380 *f4;
};

struct D217F0_24380 {
    void *vtbl;
    char pad4[0x70];
    char f7a;
    char f7b;
    D217F0_24380 *func_000217F0(int a);
    void func_001D3F50();
    void func_00021890(Ini_24380 *stream, int base);
    void func_001578D0();
};

struct Obj138_24380 {
    void *vtbl;
    int f4;
    int f8;
    void **fC;
    int f10;
    int f14;
    void **f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    char f34[0x104];
};

struct AmbientDebris {
    char pad0[0x28];
    Ini_24380 *f28;
    char pad2c[4];
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    char pad48[8];
    int f50;
    char pad54[8];
    Seg5C_24380 **f5C;
    D217F0_24380 **f60;
    Debris_24380 **f64;
    Seg_24380 **f68;
    int (*f6C)[2];
    Obj138_24380 **f70;
    AmbientDebris *func_00024140(int a, int b);
    void func_00024380(Ini_24380 *ini);
    void func_00021600(const char *path, int index);
};

void *func_001E8A44(int size);
void *func_001E83E8(void *p, int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_00011FF0(void *dst, int size, int count, const void *src);

extern char D_00276510[];
extern char D_00276504[];
extern char D_002764F8[];
extern char D_002764F0[];
extern char D_002764EC[];
extern char D_002764DC[];
extern char D_002764D8[];
extern char D_002764C8[];
extern char D_002764B4[];
extern char D_002764A8[];
extern char D_0027649C[];
extern char D_00276490[];
extern char D_00276488[];
extern char D_0027647C[];
extern char D_00276470[];
extern char D_00276464[];
extern char D_00276454[];
extern char D_00276444[];
extern char D_0027643C[];
extern char D_0027642C[];
extern V4_24380 D_002A0FA4;
extern char D_00021290[];

extern char D_0027643C[], D_0027642C[], D_00276424[], D_00276410[];
extern char D_002763F4[], D_002763E4[];
extern char D_002A48F8[], D_002A5348[], D_002A47F0[], D_00275678[];
extern void *D_002A8490;
void __stdcall func_001577A0(void *obj, int a);
char *func_001E8920(char *dst, const char *src, unsigned int n);
extern char D_002763F4[], D_002763E4[], D_002763D0[], D_002763BC[];
extern char D_002763AC[], D_00276388[], D_00276378[], D_00276370[];
extern char D_0027635C[], D_0027634C[], D_00276328[], D_00276314[];
extern char D_00276310[], D_00275630[], D_00276300[], D_00276218[];
extern V4_24380 D_002A0F74;
extern "C" unsigned int __cdecl strlen(const char *);
extern char D_00276410[],D_00276404[],D_002763F4[],D_002763E4[],D_002A48F8[],D_00275678[],D_002A5348[],D_002A47F0[];
extern void *D_002A8490,*D_002B9120;
extern char D_002763D0[];
extern char D_002763BC[];
extern char D_002763AC[];
extern char D_00276398[];
extern char D_00276388[];
extern char D_00276378[];
extern char D_00276370[];
extern char D_0027635C[];
extern char D_0027634C[];
extern char D_00276338[];
extern char D_00276328[];
extern char D_00276314[];
extern char D_00276218[];
extern char D_00276310[];
extern char D_00275630[];
extern char D_00276300[];
extern char D_00276424[];
void AmbientDebris::func_00024380(Ini_24380 * volatile ini)
{
    AmbientDebris * volatile self = this;
    char buf[0x20];
    char key[0x40];
    char path[0x104];
    char saved[0x104];
    int base;
    int cnt;
    int n;
    int start;
    int i;
    int t;
    int idx;
    int toggle;

    base = -1;
    if (ini->func_00169710(D_00276510)) {
    ini->func_00168C20(D_00276504, 0, &cnt);
    if (cnt > 0) {
    if (self->f64 == 0) {
        self->f34 = cnt;
        n = self->f34;
        start = 0;
        base = 0;
        self->f64 = (Debris_24380 **)func_001E8A44(n * 4);
    } else {
        start = self->f34;
        self->f34 = start + cnt;
        n = self->f34;
        self->f64 = (Debris_24380 **)func_001E83E8(self->f64, n * 4);
        base = start;
    }
    
    for (i = start; i < n; i++) {
        void *m = func_001E8A44(0x134);
        Debris_24380 *o;
        if (m) {
            o = (Debris_24380 *)m;
            o->f1C.x = 0.0f;
            o->f1C.y = 0.0f;
            o->f1C.z = 0.0f;
            o->f1C.w = 1.0f;
        } else {
            o = 0;
        }
        self->f64[i] = o;
        func_001ADCC0(buf, 0x20, D_002764F8, i - start + 1);
        ini->func_00169710(buf);
        ini->func_00168BE0(D_002764EC, D_002764F0, self->f64[i]->f30, 0x104);
        ini->func_00168C20(D_002764DC, 1, &idx);
        self->f64[i]->f2C = (unsigned char)idx;
        ini->func_00168C50(D_002764D8, 60.0f, &self->f64[i]->f0);
        ini->func_00168CB0(D_002764C8, &D_002A0FA4, &self->f64[i]->f1C);
        ini->func_00168C20(D_002764B4, 0, &toggle);
        self->f64[i]->f2E = (unsigned char)toggle;
        ini->func_00168C20(D_002764A8, 0, &t);
        self->f64[i]->f8 = t - 1;
        if (self->f64[i]->f8 != -1)
            self->f64[i]->f8 += start;
        ini->func_00168C20(D_0027649C, 0, &t);
        self->f64[i]->fC = t - 1;
        ini->func_00168C20(D_00276490, 0, &t);
        self->f64[i]->f10 = t - 1;
        if (self->f64[i]->f10 != -1)
            self->f64[i]->f10 += start;
        ini->func_00168C20(D_00276488, 0, &t);
        self->f64[i]->f14 = t - 1;
        self->f64[i]->f18 = 0;
        self->f64[i]->f4 = 0;
        self->f64[i]->f2D = 0;
        self->f64[i]->f2F = 0;
    }
    }
    }
    if (ini->func_00169710(D_0027647C)) {
        ini->func_00168C20(D_00276470, 0, &cnt);
        if (cnt > 0 && base != -1) {
            if (!self->f68) { self->f38=cnt; n=self->f38; start=0; self->f68=(Seg_24380**)func_001E8A44(n*4); }
            else { start=self->f38; self->f38=start+cnt; n=self->f38; self->f68=(Seg_24380**)func_001E83E8(self->f68,n*4); }
            for(i=start;i<n;i++) {
                self->f68[i]=(Seg_24380*)func_001E8A44(0x14);
                self->f68[i]->f4=0;
                func_001ADCC0(buf,0x10,D_00276464,i-start+1);
                ini->func_00169710(buf);
                ini->func_00168C20(D_00276454,0,&self->f68[i]->f0);
                ini->func_00168C20(D_002764A8,0,&t);
                self->f68[i]->f8=t-1;
                if(self->f68[i]->f8!=-1) self->f68[i]->f8+=base;
                ini->func_00168C20(D_00276490,0,&t);
                self->f68[i]->fC=t-1;
                if(self->f68[i]->fC!=-1) self->f68[i]->fC+=base;
                self->f64[self->f68[i]->f8]->f2F=1;
                self->f64[self->f68[i]->fC]->f2F=1;
                if(self->f68[i]->f0>0) {
                    int count=self->f68[i]->f0;
                    void *p=func_001E8A44(count*16);
                    if(p) func_00011FF0(p,16,count,D_00021290); else p=0;
                    self->f68[i]->f10=p;
                    for(int j=0;j<self->f68[i]->f0;j++) {
                        func_001ADCC0(key,0x20,D_00276444,i+1,j+1);
                        V4_24380 v; v.z=v.y=v.x=0.0f; v.w=1.0f;
                        ini->func_00168CB0(key,&D_002A0F74,&v);
                        ((V4_24380*)self->f68[i]->f10)[j].x=v.x;
                        ((V4_24380*)self->f68[i]->f10)[j].y=v.y;
                        ((V4_24380*)self->f68[i]->f10)[j].z=v.z;
                        ((V4_24380*)self->f68[i]->f10)[j].w=0.0f;
                    }
                } else self->f68[i]->f10=0;
            }
        }
    }
    if(ini->func_00169710(D_0027643C)) {
        ini->func_00168C20(D_0027642C,0,&cnt);
        if(cnt>0 && base!=-1) {
            if(!self->f60) { self->f30=cnt; n=self->f30; start=0; self->f60=(D217F0_24380**)func_001E8A44(n*4); }
            else { start=self->f30; self->f30=start+cnt; n=self->f30; self->f60=(D217F0_24380**)func_001E83E8(self->f60,n*4); }
            for(i=start;i<n;i++) {
                D217F0_24380 *p=(D217F0_24380*)func_001E8A44(0x7c);
                self->f60[i]=p?p->func_000217F0(1):0;
                func_001ADCC0(buf,0x10,D_00276424,i-start+1);
                ini->func_00169710(buf);
                p=self->f60[i]; p->func_001D3F50(); p->func_00021890(ini,base);
                func_001577A0(self->f60[i],-1);
            }
        }
        ini->func_00168C20(D_00276410,0,&cnt);
        if(cnt>0 && base!=-1) {
            int first;
            if(!self->f5C) { self->f40=cnt;n=self->f40;first=0;self->f5C=(Seg5C_24380**)func_001E8A44(n*4); }
            else { first=self->f30; self->f40+=cnt;n=self->f40;self->f5C=(Seg5C_24380**)func_001E83E8(self->f5C,n*4); }
            int len=strlen(D_002A48F8);
            int size=len<0x103?len:0x103;
            func_001E8920(saved,D_002A48F8,size);saved[size]=0;
            func_001ADCC0(D_002A48F8,0x104,D_00275678,D_002A5348,D_002A47F0);
            ini->func_00169710(D_00276404);
            for(i=first;i<n;i++) {
                self->f5C[i]=(Seg5C_24380*)func_001E8A44(8);
                func_001ADCC0(buf,0x20,D_002763F4,i-first+1);
                ini->func_00168BE0(buf,0,path,-1);
                func_001ADCC0(buf,0x20,D_002763E4,i-first+1);
                ini->func_00168C20(buf,0,&t);
                self->f5C[i]->f0=t-1;
                Obj20C_24380 *p=(Obj20C_24380*)func_001E8A44(0x20c);
                self->f5C[i]->f4=p?p->func_001CF740(*(void**)((char*)*(void**)((char*)D_002A8490+4)+0xb4),*(int*)((char*)D_002B9120+0x4c0),1):0;
                p=self->f5C[i]->f4;
                p->v10(path,1,1,0,0);
            }
            len=strlen(saved);
            size=len<0x103?len:0x103;
            func_001E8920(D_002A48F8,saved,size);D_002A48F8[size]=0;
        }
    }
    if(ini->func_00169710(D_002763D0)) {
        ini->func_00168C20(D_002763BC,0,&cnt);
        if(cnt>0 && base!=-1) {
            if(!self->f6C) { self->f3C=cnt;n=self->f3C;start=0;self->f6C=(int(*)[2])func_001E8A44(n*8); }
            else {start=self->f3C;self->f3C=start+cnt;n=self->f3C;self->f6C=(int(*)[2])func_001E83E8(self->f6C,n*8);}
            int sum=0;
            for(i=start;i<n;i++) {
                func_001ADCC0(key,0x40,D_002763AC,i-start+1);
                ini->func_00169710(key);
                ini->func_00168C20(D_00276398,0,&t);
                ini->func_00168C20(D_00276388,0,&idx);
                t+=base-1; if(t<0)t=0;
                self->f6C[i][0]=t;self->f6C[i][1]=idx;sum+=idx;
            }
            if(sum>0) {
                if(!self->f60) self->f60=(D217F0_24380**)func_001E8A44((self->f30+sum)*4);
                else self->f60=(D217F0_24380**)func_001E83E8(self->f60,(self->f30+sum)*4);
                int k=self->f30;
                for(i=start;i<n;i++) {
                    func_001ADCC0(key,0x20,D_00276378,i-start+1);
                    ini->func_00169710(key);
                    for(int j=0;j<self->f6C[i][1];k++,j++) {
                        D217F0_24380 *p=(D217F0_24380*)func_001E8A44(0x7c);
                        self->f60[k]=p?p->func_000217F0(1):0;
                        *((char*)self->f60[k]+0x7a)=1;
                        p=self->f60[k];p->func_001D3F50();p->func_00021890(ini,base);
                        func_001577A0(self->f60[k],-1);
                    }
                }
                self->f30+=sum;
            }
        }
    }
    if(ini->func_00169710(D_00276370)) {
        ini->func_00168C20(D_0027635C,0,&self->f44);
        if(self->f44>0) {
            self->f70=(Obj138_24380**)func_001E8A44(self->f44*4);
            for(i=0;i<self->f44;i++) {
                func_001ADCC0(buf,0x10,D_0027634C,i+1);
                ini->func_00169710(buf);
                ini->func_00168C20(D_00276338,0,&cnt);
                ini->func_00168C20(D_00276328,0,&idx);
                ini->func_00168C20(D_00276314,0,&self->f50);
                Obj138_24380 *p=(Obj138_24380*)func_001E8A44(0x138);
                if(p) {
                    p->f14=self->f50;p->vtbl=D_00276218;p->f8=cnt;p->f10=idx;
                    p->f18=(void**)func_001E8A44(p->f14*4);
                    p->fC=(void**)func_001E8A44(p->f8*4);
                    p->f4=0;p->f34[0]=0;p->f1C=4.0f;p->f20=1.3f;p->f24=20.0f;
                    p->f2C=p->f30=p->f28=10.0f;
                } else p=0;
                self->f70[i]=p;
                ini->func_00168BE0(D_00276310,D_00275630,self->f70[i]->f34,0x104);
                for(int j=0;j<self->f70[i]->f8;j++) {
                    func_001ADCC0(key,0x20,D_00276300,j+1);
                    ini->func_00168BE0(key,D_00275630,path,0x104);
                    self->func_00021600(path,i+1);
                }
                for(int k=0;k<self->f50;k++) {
                    AmbientDebris *a=(AmbientDebris*)func_001E8A44(0x38);
                    self->f70[i]->f18[k]=a?a->func_00024140(k,self->f50/3):0;
                    func_001577A0(self->f70[i]->f18[k],-1);
                }
            }
        }
    }
}
