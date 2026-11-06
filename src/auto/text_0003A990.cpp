/* 4 functions from 0x0003A990 to 0x0003B0A0, found by Ghidra. */
#include "common.h"
#include <string.h>
#include <xmmintrin.h>
extern float D_00275548;
extern float D_00276E9C, D_00276E98;
void *func_001E8A44(unsigned int size);
void func_001E891B(void *p);
struct S_0003AC20_Vec { float x,y,z,w; };
struct S_3A990_Blk { char pad[0x358]; int width, height; };
struct S_3A990_Owner { char pad[8]; char *object; };
struct C_3A990 {
 char pad[0x450]; int f450; char pad454[8]; int f45C, f460;
 char pad464[0x49c-0x464]; char **f49C;
 char pad4A0[0x564-0x4A0]; S_3A990_Owner *f564;
 void func_00038A70(void *, S_3A990_Blk **);
    int func_00038B10(void *, S_0003AC20_Vec, S_0003AC20_Vec, int *, int *, int *, int);
   __forceinline S_3A990_Blk *Lookup(char *o) { S_3A990_Blk *b = 0; func_00038A70(o + 0x28, &b); return b; }
   int func_0003A990(S_0003AC20_Vec a, S_0003AC20_Vec b);
};
struct S_0003AC20_Data { char pad0[0x34]; S_0003AC20_Vec pos; };
struct S_0003AC20_Owner { char pad0[0xE8]; S_0003AC20_Data *fE8; };
struct S_0003AC20_Entry { int type; S_0003AC20_Owner *owner; };
struct C_0003AC20 {
 char pad0[0x2D4]; int f2D4;
 char pad2D8[0x440-0x2D8]; float f440;
 char pad444[0x450-0x444]; int f450;
 char pad454[8]; int f45C;
 char pad460[0x574-0x460]; S_0003AC20_Entry *f574; int f578;
 char pad57C[0x5A0-0x57C]; int count; S_0003AC20_Entry **items;
 S_0003AC20_Entry *at(int i) { if(count>0 && items && i<count) return items[i]; return 0; }
 int func_00038760(S_0003AC20_Vec pos,int *out);
 int func_0003AC20(S_0003AC20_Vec p);
};
static inline void Round_0003AC20(int *out,float f) { *out = _mm_cvtss_si32(*(__m128 *)&f); }

struct S_3AE40_Obj { void func_00197E70(float *p); void func_00197B40(float *p, void *q); };
extern char D_002A14F4[];
struct C_3AE40 {
    char pad0[0x484]; int f484; char pad488[0x5A0-0x488]; int count; void **items;
    unsigned short func_00038A70(void *p, int *o);
    void func_0003AE40(char *dst);
};
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_00276EEC[];
extern char D_00276ED8[];

struct S_0003AD50_Item {
    char pad0[0x314];
    char f314[4];
};

struct S_0003AD50_Rec {
    char pad0[0x34];
    int f34;
    char pad38[0xC];
    int f44;
};

struct S_0003AD50_Data {
    char pad0[0x5A0];
    int f5A0;
    S_0003AD50_Rec *f5A4;
    int f5A8;
    S_0003AD50_Item **f5AC;
    S_0003AD50_Item *GetItem(int k)
    {
        if (f5A8 > 0 && f5AC != 0 && k < f5A8) {
            return f5AC[k];
        }
        return 0;
    }
};

struct S_0003AD50_Label {
    void func_0008A020(char *s);
    void func_0008A040(char *s);
};

struct C_0003AD50 {
    char pad0[0x64];
    S_0003AD50_Data *f64;
    char pad68[0x388 - 0x68];
    char s388[0x32];
    char s3BA[0x32];
    char pad3EC[0x47C - 0x3EC];
    int f47C;
    int f480;
    char pad484[0x550 - 0x484];
    S_0003AD50_Label *f550;
    void func_0003AD50(void);
};

#pragma optimize("a", on)
int C_3A990::func_0003A990(S_0003AC20_Vec a, S_0003AC20_Vec b)
{
 int width,height;
 int *used;
 int x,y,z;
 {
 S_3A990_Blk *block = Lookup(f564->object);
 width=block->width; height=block->height;
 }
 if(!func_00038B10(f564->object+0x28,a,b,&x,&y,&z,1)) return -1;
 int count=width*height;
 used=(int *)func_001E8A44(count*4);
 int *values=(int *)func_001E8A44(count*4);
 memset(used,0,count*4);
 for(int i=0;i<count;i++) values[i]=0;
 for(int row=0;row<height;row++) {
  for(int col=0;col<width;col++) {
   for(int layer=f450;layer<f45C;layer++) {
    int index;
    if(!(b.x>D_00276E9C) && !(b.x<D_00276E98))
     index=((x+col)*f45C+layer)*f460+row+z;
    else index=((x+row)*f45C+layer)*f460+col+z;
    char *item=f49C[index];
    if(item) {
     S_3A990_Blk *entry=0;
     func_00038A70(item+0x28,&entry);
     if(entry) {
      used[row*width+col]=1;
      if(values[row*width+col]==-1) values[row*width+col]=1;
      else values[row*width+col]++;
     } else values[row*width+col]=0;
    }
   }
  }
 }
 int result=values[0];
 if(result>=0) {
  for(int row=0;row<height;row++)
   for(int col=0;col<width;col++)
    if(result>=0 && values[row*width+col]>result) result=values[row*width+col];
  if(result==0) result=-1;
 }
 func_001E891B(used);
 func_001E891B(values);
 return result;
}
#pragma optimize("", on)

void C_0003AD50::func_0003AD50(void)
{
    if (f64->f5A0 > -1) {
        memset(s3BA, 0, 0x32);
        func_001ADCC0(s3BA, 0x32, D_00276EEC, f47C + 1, f64->f5A0, (char *)&f64->f5A4[f47C]);
        f550->func_0008A020(s3BA);
        memset(s388, 0, 0x32);
        S_0003AD50_Rec *rec = &f64->f5A4[f47C];
        S_0003AD50_Item *item = f64->GetItem(rec->f44 + f480);
        func_001ADCC0(s388, 0x32, D_00276ED8, f480 + 1, rec->f34, item->f314);
        f550->func_0008A040(s388);
    }
}
