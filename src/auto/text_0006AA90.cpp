/* 1 function from 0x0006AA90 to 0x0006B4B0, found by Ghidra. */
#include "common.h"
#include <string.h>
#include "asm_helpers.h"

struct Txt_6AA90 { char* str; float x; float y; char pad[0x38]; int frame; char pad2[6]; unsigned char flags; int func_001D6290(); void func_001D6600(); void func_0005E840(char*); void SetPos(float a,float b) { if(x!=a||y!=b){x=a;y=b;flags|=6;} } };
extern int D_0028F5DC;
inline int Min_6AA90(const int &a,const int &b) { return a<b?a:b; }
struct Widget_6AA90 {
 void func_001B1980(); void func_001B17D0(char*);
 void func_001B2270(unsigned int);
 void func_001B19C0(int,void*,int);
 void func_001B1860(int,float,int,float,int,int,float,int,float,int,int,float,int);
};
struct Entry_6AA90 { char *s; int v; };
struct YS_6AA90 { float pad; float y; };
struct Res_6AA90 { int pad; Entry_6AA90 *entries; };
struct Save_6AA90 { char enabled[16]; char names[8][50]; };
struct Player_6AA90 { char pad[0x2c8]; Save_6AA90 *save; };
struct Global_6AA90 { char pad[0x2e0]; Player_6AA90 *player; int pad2; Res_6AA90 *res; };
extern Global_6AA90 *D_002A8490;
extern int D_00278978[];
extern char D_00277038[];
extern "C" int func_001ADCC0(char*,int,char*,...);
extern "C" void func_001AC330(char*,char*,char*);
extern "C" void *func_001E8920(void*,const void*,unsigned int);
struct S_6AA90 {
 char pad[0x64]; Widget_6AA90 *widgets[8];
 Txt_6AA90 *t84; Txt_6AA90 *t88; Txt_6AA90 *t8c; Txt_6AA90* objs[2];
 char pad98[0xbc-0x98]; void *coords[8];
 char paddc[0x154-0xdc]; int selected; int previous; char pad15c[8];
 int unk164; int unk168; int unk16c; int pad170; Txt_6AA90* t174; Txt_6AA90* t178; Txt_6AA90* t17C; int pad180; int unk184;
 char pad188[0x1c0-0x188]; Txt_6AA90 *title; char pad1c4[0x1d8-0x1c4]; int state; char pad1dc[8]; int dirty; char pad1e8[0x1fc-0x1e8]; int unk1fc;
 void func_0006AA90();
};

void S_6AA90::func_0006AA90() {
char buf[260]; char num[24];
if(unk168) {
 if((int)strlen(t174->str)<40) {
 int width=t174->func_001D6290();
    float x=t174->x;
   float y=t174->y;
   x+=width/2;
   t178->SetPos(x,y);
   if(t178->frame!=D_0028F5DC){t178->frame=D_0028F5DC;t178->flags|=6;}
   t17C->SetPos(x,y);
 if(t17C->frame!=D_0028F5DC){t17C->frame=D_0028F5DC;t17C->flags|=6;}
 if(unk184){t17C->func_001D6600();t178->func_001D6600();}
 }
 t174->func_001D6600();
 for(int i=0x90;i<0x98;i+=4)(*(Txt_6AA90**)((char*)this+i))->func_001D6600();
}
if(!unk164&&!unk168) {
 if(state<16){
 int id=D_00278978[state]; if(!id)id=0x118;else if(id>0x11d)id=0x117;
 volatile int len=(int)strlen(D_002A8490->res->entries[id].s);
 int max=259; int n=AsmMinI(max,len);
 func_001E8920(buf,D_002A8490->res->entries[id].s,n);buf[n]=0;
 }else{
 volatile int len=(int)strlen(D_002A8490->res->entries[0x117].s);
 int max=259;int n=AsmMinI(max,len);
 func_001E8920(buf,D_002A8490->res->entries[0x117].s,n);buf[n]=0;
 }
}else{
 if(dirty){
 if(unk164){
 for(int i=0;i<8;i++){
 widgets[i]->func_001B1980();
 if(D_002A8490->player->save->enabled[i]==1)widgets[i]->func_001B17D0(D_002A8490->player->save->names[i]);
 else{func_001ADCC0(num,260,D_00277038,i+1);func_001AC330(buf,D_002A8490->res->entries[0x1da].s,num);widgets[i]->func_001B17D0(buf);}
 }
 for(int j=0;j<8;j++){
 if(j==selected){
 if(unk168){widgets[j]->func_001B1980();continue;}
 widgets[j]->func_001B2270(0xffbfa35a);
 widgets[j]->func_001B19C0(320,(char*)((void**)((char*)this+0xc0))[j]+2,0);
 widgets[j]->func_001B1860(0,-1,255,1.3f,0,0,0,255,1.3f,0,0,0.2f,0);
 }else if(j==previous){
 widgets[j]->func_001B2270(0xffcccccc);
 widgets[j]->func_001B19C0(320,((void**)((char*)this+0xc0))[j],0);
 widgets[j]->func_001B1860(0,-1,255,1.3f,0,0,0,255,1,0,0,0.2f,0);
 }else{
 widgets[j]->func_001B2270(0xffcccccc);
 widgets[j]->func_001B19C0(320,((void**)((char*)this+0xc0))[j],0);
 widgets[j]->func_001B1860(0,-1,255,1,0,0,-1,255,1,0,0,0,0);
 }
 }
 } dirty=0;
 }
 func_001ADCC0(buf,260,D_002A8490->res->entries[0x1db].s);
}
title->func_0005E840(buf);title->func_001D6600();
if(unk168){
 t84->SetPos(540,393);t84->func_0005E840(D_002A8490->res->entries[0xf5].s);t84->func_001D6600();
 t88->func_0005E840(D_002A8490->res->entries[0x101].s);t88->SetPos(416,393);t88->func_001D6600();
}else if(unk164){
 t84->SetPos(530,393);t84->func_0005E840(D_002A8490->res->entries[0xf9].s);t84->func_001D6600();
 t88->func_0005E840(D_002A8490->res->entries[0x107].s);t88->SetPos(410,393);t88->func_001D6600();
}else {
 switch(state){
 case 0:
 t84->SetPos(360,393); t84->func_0005E840(D_002A8490->res->entries[0x225].s);t84->func_001D6600();break;
 case 1:
 t8c->func_0005E840(D_002A8490->res->entries[0xf7].s);t8c->func_001D6600();
 t88->SetPos(400,393);t88->func_0005E840(D_002A8490->res->entries[0xf8].s);t88->func_001D6600();break;
 case 2:case 3:case 13:
 t84->SetPos(530,393);t84->func_0005E840(D_002A8490->res->entries[0xf7].s);t84->func_001D6600();
 t88->SetPos(400,393);t88->func_0005E840(D_002A8490->res->entries[0xf8].s);t88->func_001D6600();break;
 case 4:
 t84->SetPos(530,393);
 if(unk1fc){
 t84->func_0005E840(D_002A8490->res->entries[0xf7].s);t84->func_001D6600();
 t88->SetPos(417,393);t88->func_0005E840(D_002A8490->res->entries[0xf8].s);t88->func_001D6600();
 }else{
 t84->func_0005E840(D_002A8490->res->entries[0x128].s);t84->func_001D6600();
 t88->SetPos(230,393);t88->func_0005E840(D_002A8490->res->entries[0x249].s);t88->func_001D6600();
 }break;
 case 11:case 12:
 t84->SetPos(530,393);t84->func_0005E840(D_002A8490->res->entries[0x128].s);t84->func_001D6600();break;
 }
}
if(unk16c)for(int k=0x64;k<0x84;k+=4)(*(Widget_6AA90**)((char*)this+k))->func_001B1980();
}
