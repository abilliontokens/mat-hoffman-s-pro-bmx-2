/* 1 function from 0x000395A0 to 0x000399A0, found by Ghidra. */
#include "grid_000392B0.h"
extern float D_002A14D4, D_002A14D8, D_002A14DC, D_00276E9C, D_00276E98;
struct C_000395A0 {
char pad0[0x450]; int f450; char pad454[8]; int f45C,f460; char pad464[0x38]; S_000392B0_Obj **f49C; char pad4a0[0xc4]; S_000392B0_Slot *f564;
int func_00038A70(void*,void**);
int func_00038B10(void*,S_000392B0_Vec4,S_000392B0_Vec4,int*,int*,int*,int);
int func_000395A0(S_000392B0_Vec4 pos);
};

int C_000395A0::func_000395A0(S_000392B0_Vec4 pos) {
S_000392B0_Vec4 a,b,c;
int px,py,pz;
S_000392B0_Block *blk;
int w,h,d,i,j,k,idx,idx2;
S_000392B0_Obj **grid;
if(!f564) return 0;
if(f564->type==0 || f564->type>=3) {
if(pos.x==D_002A14D4 && pos.y==D_002A14D8 && pos.z==D_002A14DC) f564->obj->func_00197E70(&a); else a=pos;
f564->obj->func_00197B40(&b,&c);
if(!func_00038B10(&f564->obj->f28,a,b,&px,&py,&pz,1))return 0;
S_000392B0_Obj *obj=f564->obj; blk=0;func_00038A70(&obj->f28,(void**)&blk);
w=blk->w;h=blk->h;d=blk->d;
if(d>f45C)d=f45C;
if(d<0)d=1;
if(py>0 && (py>f45C || d+py>f45C))return 0;
for(i=0;i<h;i++)for(j=0;j<w;j++)for(k=0;k<d;k++){
if(b.x>D_00276E9C || b.x<D_00276E98) {
idx=((i+px)*f45C+k+py)*f460+j+pz;
idx2=((i+px)*f45C+k+py-1)*f460+j+pz;
}else{
idx=((j+px)*f45C+k+py)*f460+i+pz;
idx2=((j+px)*f45C+k+py-1)*f460+i+pz;
}
grid=f49C;
if(grid[idx])return 0;
if(py!=f450 && k==0 && !grid[idx2])return 0;
}
if(py>0)for(i=0;i<h;i++)for(j=0;j<w;j++){
if(b.x>D_00276E9C || b.x<D_00276E98)idx=((i+px)*f45C+py-1)*f460+j+pz;
else idx=((j+px)*f45C+py-1)*f460+i+pz;
S_000392B0_Obj *obj=f49C[idx];
if(obj){func_00038A70(&obj->f28,(void**)&blk);if(!*(int*)((char*)blk+0x368))return 0;}
}
}
return 1;
}
