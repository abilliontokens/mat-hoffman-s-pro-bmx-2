/* 3 functions from 0x001DB4D0 to 0x001DC010, found by Ghidra. */
#include "common.h"
#include <string.h>
#include <new>
struct WaterConfig {
 char pad0[0x54]; int f54; char pad58[0x10]; int f68;
 char pad6C[0x64]; void *fD0;
};
struct WaterItem {
 char pad0[0x54]; void *f54; void *f58; void *f5C;
 void func_001B0560(void *,void *);
};
struct WaterTable { char pad0[0x14]; char *f14; };
extern WaterTable *D_002A829C;
extern char D_001DB560[],D_001DB700[];
extern char D_0028FA04[],D_0028F9F4[],D_0028F9E4[],D_0028F9D4[];
extern int D_002ABE74;
extern char D_002A5A80[],D_0028F9C0[];
extern char D_002AC6D8[],D_002AC6EC[],D_002AC6FC[],D_002AC710[];
extern char D_002F0D08[],D_002F0E08[],D_002F0F08[],D_002F0C08[];
extern char D_0028F9AC[],D_0028F994[],D_0028F980[];
void *func_001E8A44(int);
struct WEnt { float x, z, a; int pad; int f10; };
struct I_Release;
I_Release *func_001D6E20(const char *,int,int);
void func_001ADCC0(char *,int,const char *,...);
void func_0014A7B0(char *,const char *);
struct WaterTexture {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
 virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
 virtual void create(int,int,int,int,int,int,int,int,int);
 virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
 virtual void v13(); virtual void v14(); virtual void v15();
 virtual void *lock(int,int,int); virtual void unlock(int);
 WaterTexture *func_001D6AD0(int);
};
struct WaterEntry {
 int a,b,c,d,e;
 WaterEntry() { a=b=c=d=e=0; }
 void initialize() { a=b=c=d=e=0; }
};
void func_001E891B(void *p);
void __stdcall func_00201100(void *p);
extern int D_0028F8F4;
struct C_00012140 { void func_00012140(void); C_00012140 *func_00142C70(); void func_00142C80(const char *,int); };
struct C_0014A540 { void func_0014A540(void); C_0014A540 *func_0014A520(char *); void func_0014A560(const char *,int); };
struct I_Release { virtual void v0(); virtual void v1(); virtual void Release(); };
struct XboxWaterDisplacement {
    void *vtbl;
    char pad04[0x24];
    I_Release *f28;
    char pad2C[0x1C];
    void *f48;
    char pad4C[0x94];
    C_0014A540 *fE0;
    C_0014A540 *fE4;
    C_0014A540 *fE8;
    C_0014A540 *fEC;
    C_00012140 *fF0;
    C_00012140 *fF4;
    C_00012140 *fF8;
    C_00012140 *fFC;
    char pad100[0x108];
    I_Release *f208;
    void *f20C;
    char pad210[0x8];
    void *f218[3];
    void *f224[3];
    void *f230[0x96];
    void *f488[6];
    I_Release *f4A0;
    void func_001DB4D0(float *,float,float *);
    void func_001DBA40(void);
    void func_001CA1C0(void);
    void func_001CA1D0(WaterConfig *,const char *,int,int,int,unsigned int);
    XboxWaterDisplacement *func_001DBBF0(WaterConfig *,const char *,int,int,int,unsigned int);
};

extern int D_002AB7F0;
extern float D_002AB800, D_002F08B8, D_002F08B4;
void XboxWaterDisplacement::func_001DB4D0(float *pos, float scale, float *v)
{
    if (D_002AB7F0 && *(int *)((char *)this + 0x214) < 50) {
        int n = *(int *)((char *)this + 0x214);
        float s = (v[0] * v[0] + v[1] * v[1] + v[2] * v[2]) * scale;
        if (s >= D_002AB800) {
            WEnt *e = &((WEnt *)f20C)[n];
            *(int *)((char *)this + 0x214) = n + 1;
            e->x = pos[0];
            e->z = pos[2];
            e->a = s * D_002F08B8 + D_002F08B4;
            e->f10 = *(int *)((char *)this + 0x38);
        }
    }
}

void XboxWaterDisplacement::func_001DBA40(void)
{
    int i;
    vtbl = &D_0028F8F4;
    C_00012140 *p;
    if ((p = fF0) != 0) { p->func_00012140(); func_001E891B(p); }
    if ((p = fF4) != 0) { p->func_00012140(); func_001E891B(p); }
    if ((p = fF8) != 0) { p->func_00012140(); func_001E891B(p); }
    if ((p = fFC) != 0) { p->func_00012140(); func_001E891B(p); }
    if (f4A0) f4A0->Release();
    if (f48) func_001E891B(f48);
    if (f28) f28->Release();
    C_0014A540 *q;
    if ((q = fE8) != 0) { q->func_0014A540(); func_001E891B(q); }
    if ((q = fE0) != 0) { q->func_0014A540(); func_001E891B(q); }
    if ((q = fE4) != 0) { q->func_0014A540(); func_001E891B(q); }
    if ((q = fEC) != 0) { q->func_0014A540(); func_001E891B(q); }
    if (f208) f208->Release();
    if (f20C) {
        func_001E891B(f20C);
        f20C = 0;
    }
    for (i = 0; i < 3; i++) {
        if (f218[i]) func_00201100(f218[i]);
        if (f224[i]) func_00201100(f224[i]);
    }
    for (i = 0; i < 0x96; i++) {
        if (f230[i]) func_00201100(f230[i]);
    }
    for (i = 0; i < 6; i++) {
        if (f488[i]) func_00201100(f488[i]);
    }
    func_001CA1C0();
}

XboxWaterDisplacement *XboxWaterDisplacement::func_001DBBF0(WaterConfig *config,const char *name,int a,int b,int c,unsigned int count)
{
 func_001CA1D0(config,name,a,b,c,count);
 *(WaterConfig**)((char*)this+0x100)=config;
 f48=func_001E8A44(config->f68*4+4);
 C_00012140 *p=(C_00012140*)func_001E8A44(0xf0);
 fF0=p?p->func_00142C70():0;
 p=(C_00012140*)func_001E8A44(0xf0);
 fF4=p?p->func_00142C70():0;
 p=(C_00012140*)func_001E8A44(0xf0);
 fF8=p?p->func_00142C70():0;
 p=(C_00012140*)func_001E8A44(0xf0);
 fFC=p?p->func_00142C70():0;
 fF0->func_00142C80(D_0028FA04,0);
 fF4->func_00142C80(D_0028F9F4,0);
 fF8->func_00142C80(D_0028F9E4,0);
 fFC->func_00142C80(D_0028F9D4,0);
 *(void**)((char*)this+0x44)=config->fD0;
 if(name && *name) {
 int saved=D_002ABE74;D_002ABE74=0;
 f28=func_001D6E20(name,8888,0);D_002ABE74=saved;
 }
 WaterTexture *tex=(WaterTexture*)func_001E8A44(0x110);
 tex=tex?tex->func_001D6AD0(1):0;
 f4A0=(I_Release*)tex;
 tex->create(0,16,16,16,16,0,0,0,0);
 tex=(WaterTexture*)f4A0;
 memset(tex->lock(0,0,0),0x80,0x100);
 ((WaterTexture*)f4A0)->unlock(0);
 *(int*)((char*)this+0x4c)=config->f54;
 char *path=(char*)this+0x104;
 func_001ADCC0(path,0x104,D_0028F9C0,D_002A5A80);
 f208=func_001D6E20(path,8888,0);
 *(unsigned int*)((char*)this+0x210)=(unsigned int)c;
 WaterEntry *entries=(WaterEntry*)func_001E8A44(1000);
 if(entries) { for(int j=0;j<50;j++) entries[j].initialize(); } else entries=0;
 f20C=entries;
 if(*(int*)((char*)this+0x4c)) {
 for(unsigned int i=0;i<*(unsigned int*)((char*)this+0x210);i++) {
 WaterConfig *cfg=*(WaterConfig**)((char*)this+0x100);
 int index=*(int*)((char*)cfg+0x58+i*4);
 WaterItem *item=*(WaterItem**)(D_002A829C->f14+index*16+4);
 item->func_001B0560(D_001DB560,this);
 *(void**)((char*)this+0x4c4+i*4)=item->f54;
 cfg=*(WaterConfig**)((char*)this+0x100);
 index=*(int*)((char*)cfg+0x60+i*4);
 item=*(WaterItem**)(D_002A829C->f14+index*16+4);
 item->func_001B0560(D_001DB700,this);
 *(void**)((char*)this+0x4cc+i*4)=item->f54;
 *(void**)((char*)this+0x4b4+i*4)=item->f58;
 *(void**)((char*)this+0x4bc+i*4)=item->f5C;
 }
 }
 if(!fE8) {
 func_0014A7B0(D_002F0D08,D_002AC6D8);
 C_0014A540 *q=(C_0014A540*)func_001E8A44(12);
 fE8=q?q->func_0014A520(D_002F0D08):0;
 fE8->func_0014A560(D_0028F9AC,0);
 }
 if(!fE0) {
 func_0014A7B0(D_002F0E08,D_002AC6EC);
 C_0014A540 *q=(C_0014A540*)func_001E8A44(12);
 fE0=q?q->func_0014A520(D_002F0E08):0;
 fE0->func_0014A560(D_0028F994,0);
 }
 if(!fE4) {
 func_0014A7B0(D_002F0F08,D_002AC6FC);
 C_0014A540 *q=(C_0014A540*)func_001E8A44(12);
 fE4=q?q->func_0014A520(D_002F0F08):0;
 fE4->func_0014A560(D_0028F994,0);
 }
 if(!fEC) {
 func_0014A7B0(D_002F0C08,D_002AC710);
 C_0014A540 *q=(C_0014A540*)func_001E8A44(12);
 fEC=q?q->func_0014A520(D_002F0C08):0;
 fEC->func_0014A560(D_0028F980,0);
 }
 return this;
}

