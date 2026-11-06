/* 7 functions from 0x001D9970 to 0x001DA500, found by Ghidra. */
#include "common.h"
extern int D_002AC724;
extern char D_0028F970[];
int func_001B2910(int);
struct Global_1D9E { void *vtbl; char *p4; };
extern Global_1D9E *D_002EFDB8;
extern char D_002AC63C[], D_002AC64C[], D_002AB85C[], D_002AC61C[], D_002AC62C[], D_002AC65C[];
extern float D_00275460, D_0028F7E8, D_0028F8D4, D_0028F8D0, D_0027A060, D_002F08A4, D_00284758;
extern int D_002F0BDC;
void __fastcall func_001FEC30(int, void *);
void __fastcall func_001FEBD0(int, void *);
void __stdcall func_00201590(int, void *, int);
int __stdcall func_001FEE00(int, void *, int);
void __stdcall func_00202770(void *, int);
struct Vec_1D9E { float x,y,z,w; Vec_1D9E(float a,float b,float c,float d) : x(a),y(b),z(c),w(d) {} };
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void *__stdcall func_001FFE40(int);
void *func_00200210();
void __stdcall func_00201100(void *);
struct XboxWaterDisplacement;
struct DXVSWaterDataItem { void *vtbl; XboxWaterDisplacement *p4; void func_001D9ED0(); };

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);

/* the 18-byte header of an uncompressed true-colour .tga */
struct S_001DA180_Tga {
    unsigned char idLength;
    unsigned char colorMapType;
    unsigned char imageType;
    unsigned char colorMap[5];
    unsigned short xOrigin;
    unsigned short yOrigin;
    unsigned short width;
    unsigned short height;
    unsigned char bitsPerPixel;
    unsigned char descriptor;
};

extern char D_00282960[];
void *func_001E8A44(int size);
void func_001E891B(void *p);
void *func_0014FDF0(const char *name, const char *mode);
int func_0014FE80(const void *buf, int size, int count, void *fp);
int func_0014FE50(void *fp);

extern float D_002756C8,D_0028F874,D_00284ECC,D_002AC5C4;
extern int D_0028F7F0;
extern char D_00020001;
void func_001FFB50();
void* __stdcall func_001FF3C0(unsigned);
void* __stdcall func_001FF410(void*,unsigned);
void __stdcall func_001E285A(void*,unsigned*,int,unsigned,void*);
void* __stdcall func_00202A20(unsigned,unsigned);
void __stdcall func_00201150(void*,void*);
struct XboxWater {
 char pad0[0x48]; float f48,f4C; char pad50[0x228-0x50];
 char f228[0x18],f240[0x18],f258[0x18],f270[0x14],f284[0x14],f298[0x14],f2AC[12],f2B8[12],f2C4[12];
 void* f2D0; unsigned f2D4[5]; unsigned f2E8; void* f2EC; void* f2F0; unsigned f2F4; unsigned short* f2F8; unsigned f2FC,f300,f304,f308;
 XboxWater* func_001D9970(int,int,int,int,int,float,int);
 void func_001C9B10(int,int,int,int,int,float,int);
 void func_001D9760(unsigned,unsigned,unsigned,int,void*,void*,void*);
};
struct WaterDisplacement {
    void *vtbl;
    char pad4[0x38];
    int unk3C;
    int unk40;
    char pad44[4];
    int unk48;
    int unk4C;
    char pad50[0x74];
    WaterDisplacement *func_001CAF20();
};

extern int D_0028F8F4;

struct VCall_1D9970 {
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
};

struct C_00149480_1D9970 {
    void func_00149480();
};

extern C_00149480_1D9970 *D_002F0630;

struct XboxWaterDisplacement {
    WaterDisplacement base;
    char padC4[0x10];
    int unkD4;
    int unkD8;
    int unkDC;
    int unkE0;
    int unkE4;
    int unkE8;
    int unkEC;
    char padF0[0x10];
    int unk100;
    char pad104[0xB4];
    int *unk1B8;
    char pad1BC[0x50];
    int unk20C;
    char pad210[4];
    int unk214;
    int unk218[3];
    int unk224[3];
    int unk230[0x96];
    int unk488[6];
    void *unk4A0;
    float func_001DA250(float x, float y, int *out);
    XboxWaterDisplacement *func_001DA0E0();
    void func_001D9E60(void *a1, void *a2);
    int func_001D9820(void *dest, char *name, int size);
    int func_00182020(int a0, int a1);
};

extern char D_0028F8C0[];
extern char D_0028F8B0[];
extern char D_0028F8A0[];
extern char D_0028F88C[];
extern char D_0028F878[];

struct C_001DA4C0_1D9970 {
    char pad0[0x4C];
    XboxWaterDisplacement **unk4C;
    void func_001DA4C0(int a1);
};

XboxWater* XboxWater::func_001D9970(int a,int b,int c,int d,int e,float f,int mode) {
unsigned width=(int)(f*6.0f); f2FC=width; f300=(int)(f*512.0f);
if(mode==1) f300>>=1; else if(mode==2) f2FC=width>>1;
f304=f2FC*16; f308=f300;
void** item=(void**)func_001E8A44(8);
if(item) {item[0]=&D_0028F7F0;item[1]=0;}
else item=0;
f2F0=item;item[1]=this;
func_001C9B10(a,b,c,d,e,f,mode);
f48*=0.015625f;f4C*=0.015625f;
Vec_1D9E v(0.5f,2.0f,D_002AC5C4,0);
*(Vec_1D9E*)D_002AC63C=v;
v.x=0;v.y=0;v.z=.2f;v.w=.2f;*(Vec_1D9E*)D_002AC64C=v;
func_001FFB50();
func_001D9760(f304,f308,f304*4,0x12,f228,f2AC,f270);
func_001D9760(f304,f308,f304*4,0x12,f240,f2B8,f284);
func_001D9760(f304,f308,f304*4,0x2e,f258,f2C4,f298);
unsigned short* p=(unsigned short*)func_001FF3C0(f304*f308*4);
f2D0=p;p=(unsigned short*)func_001FF410(p,16);
for(unsigned short y=0;y<f308;y++) for(unsigned short x=0;x<f304;x++) {p[0]=x;p[1]=y;p+=2;}
unsigned count=((f304+f2FC*2)*f308+f2FC*16)*2;
p=f2F8=(unsigned short*)func_001E8A44(count+count);
unsigned i,j,k;
for(i=0;i<f2FC/2;i++) {
for(j=i*16;j<i*16+16;j++) {*p++=(unsigned short)j;*p++=(unsigned short)j;}
for(j=0;j<f308-1;j++) {unsigned short x=(unsigned short)f304*j+i*16;unsigned short y=x+(unsigned short)f304;
*p++=x;for(k=0;k<17;k++){*p++=x++;*p++=y++;}*p++=--y;}
}
for(i=f2FC/2;i<f2FC;i++) {
for(j=i*16;j<i*16+16;j++) {*p++=(unsigned short)j;*p++=(unsigned short)j;}
for(j=0;j<f308-1;j++){unsigned short x=(unsigned short)f304*j+i*16;unsigned short y=x+(unsigned short)f304;
*p++=y;if(i==f2FC-1){for(k=0;k<16;k++){*p++=y++;*p++=x++;}}else{for(k=0;k<17;k++){*p++=y++;*p++=x++;}}
*p++=--x;}
}
unsigned handle;f2F4=((unsigned)p-(unsigned)f2F8)/2;handle=0;
func_001E285A(0,&handle,6,f2F4,f2F8);
f2EC=func_00202A20(handle,4);
func_001E285A(f2EC,&handle,6,f2F4,f2F8);
func_001E891B(f2F8);
for(i=0;i<5;i++)f2D4[i]=0;
f2D4[3]=handle; f2D4[4]=handle; f2D4[0]=(unsigned)&D_00020001;
func_00201150(f2D4,f2EC);return this;
}

void XboxWaterDisplacement::func_001D9E60(void *a1, void *a2)
{
    char *p = (char *)this;
    func_001D9820(p + 0x228, D_0028F8C0, 0x20);
    func_001D9820(p + 0x258, D_0028F8B0, 0x20);
    func_001D9820(p + 0x240, D_0028F8A0, 0x20);
    func_001D9820(a1, D_0028F88C, 0x20);
    func_001D9820(a2, D_0028F878, 0x20);
}

void DXVSWaterDataItem::func_001D9ED0() {
volatile float scale;
float v[4];
char *p = D_002EFDB8->p4;
func_001FEC30(0x10,p+0x250);
func_001FEBD0(0x23,(char *)p4+0xf4);
func_001FEBD0(0x24,(char *)p4+0xd4);
func_001FEBD0(0x25,(char *)p4+0xe4);
func_001FEBD0(0x26,p+0x170);
func_001FEBD0(0x2a,D_002AC63C);
func_001FEBD0(0x2b,D_002AC64C);
func_001FEBD0(0x27,D_002AB85C);
scale=D_00275460 / D_0028F7E8;
Vec_1D9E w(0,scale * *(float *)(p+0x200) * D_0027A060,scale * *(float *)(p+0x200) * D_0028F8D0,scale * *(float *)(p+0x200) * D_0028F8D4);
v[0]=0; v[1]=0; v[2]=0;
v[3]=D_00284758*D_002F08A4;
func_00201590(1,v,1);
func_001FEBD0(3,(char *)D_002EFDB8+0x74);
func_001FEBD0(0x20,D_002AC61C);
func_001FEBD0(0x28,&w);
func_001FEBD0(0x29,D_002AC62C);
func_001FEBD0(0x2c,D_002AC65C);
func_001FEE00(0,*(void **)((char *)p4+0x2d0),4);
char *q=(char *)((volatile DXVSWaterDataItem *)this)->p4;
func_001FEE00(1,q+0x2c4,4);
func_001FEE00(2,(char *)p4+0x2ac,4);
func_001FEE00(3,(char *)p4+0x2b8,4);
func_00202770((char *)p4+0x2d4,0);
if(D_002F0BDC) {
D_002F0BDC=0;
void *a=func_001FFE40(0);
void *b=func_00200210();
p4->func_001D9E60(a,b);
func_00201100(a); func_00201100(b);
}
}

XboxWaterDisplacement *XboxWaterDisplacement::func_001DA0E0()
{
    int i;
    base.func_001CAF20();
    base.vtbl = (void *)&D_0028F8F4;
    base.unk48 = 0;
    base.unk3C = 0;
    base.unk40 = 0;
    unkD4 = -1;
    unkD8 = 0;
    unkE0 = unkE4 = unkE8 = 0;
    unkEC = 0;
    unk100 = 0;
    base.unk4C = 0;
    unkDC = 0;
    unk20C = 0;
    unk214 = 0;
    for (i = 0; i < 3; i++) {
        unk218[i] = 0;
        unk224[i] = 0;
    }
    for (i = 0; i < 0x96; i++)
        unk230[i] = 0;
    for (i = 0; i < 6; i++)
        unk488[i] = 0;
    return this;
}

int func_001DA180(void *pixels, const char *path, int bpp, int width, int height)
{
    S_001DA180_Tga hdr;
    void *fp;
    void *buf;

    memset(&hdr, 0, sizeof(hdr));
    hdr.idLength = 0;
    hdr.imageType = 2;
    hdr.width = (unsigned short)width;
    hdr.height = (unsigned short)height;
    hdr.bitsPerPixel = (unsigned char)bpp;
    hdr.descriptor = 0x28;
    fp = func_0014FDF0(path, D_00282960);
    if (fp == 0) {
        return 0x80004005;
    }
    buf = func_001E8A44(width * height * 4);
    memcpy(buf, pixels, width * height * 4);
    func_0014FE80(&hdr, 0x12, 1, fp);
    func_0014FE80(buf, 4, width * height, fp);
    func_001E891B(buf);
    func_0014FE50(fp);
    return 0;
}

float XboxWaterDisplacement::func_001DA250(float x, float y, int *out)
{
 float a=0.0f, b=0.0f;
 if(out) *out=0;
 float scratch;
 int i=0;
 char *s=(*(char ***)((char *)this+0x44))[0];
 while(s) {
  if(!*(int *)(s+0xac)) {
   if(!*(int *)(s+0xa8)) {
    float dx=x-*(float *)(s+0x94);
    scratch=y-*(float *)(s+0x98);
    if(!(dx>=0.0f && dx<=*(float *)(s+0x34) && scratch>=0.0f && scratch<=*(float *)(s+0x38))) goto next;
   }
   {
    char **table=*(char ***)(s+0x100);
    char *t=table[*(int *)(s+0x50)];
    unsigned char *p=*(unsigned char **)(t+0xc0);
    unsigned char *q=*(unsigned char **)(table[*(int *)(s+0x54)]+0xc0);
    int stride=*(int *)(t+0xe8);
    int bytes=func_001B2910(*(int *)(t+0xa4))/8;
    unsigned int n=stride/bytes;
    scratch=(y-*(float *)(s+0x98)) * *(float *)(s+0x40) * n;
    int ix=(unsigned int)((x-*(float *)(s+0x94))* *(float *)(s+0x3c)*n)%n;
    if(ix<0) ix+=n;
    int iy=(unsigned int)scratch%n;
    if(iy<0) iy+=n;
    int offset=ix*bytes+iy*stride;
    if(i==D_002AC724) {
      D_002AC724=-1;
      func_001DA180(p,D_0028F970,32,n,n);
    }
    
    if(*(int *)(s+0xdc)) {
     a+=(float)p[offset]* *(float *)(s+0xd8)* *(float *)(s+0x58);
     b+=(float)q[offset]*(1.0f-*(float *)(s+0x58))* *(float *)(s+0xd8);
    } else {
     a-=(float)p[offset]* *(float *)(s+0xd8)* *(float *)(s+0x58);
     b-=(float)q[offset]*(1.0f-*(float *)(s+0x58))* *(float *)(s+0xd8);
    }
    if(out && *(int *)(s+0xd0)) *out=*(int *)(s+0xd0);
   }
  }
next:
  s=(*(char ***)((char *)this+0x44))[++i];
 }
 return a+b;
}

void C_001DA4C0_1D9970::func_001DA4C0(int a1)
{
    XboxWaterDisplacement **e = unk4C;
    while (e[0] != 0) {
        e[0]->func_00182020(e[0]->unk1B8[0], a1);
        e++;
        ((VCall_1D9970 *)e[-1])->v16();
    }
    D_002F0630->func_00149480();
}
