/* 1 function from 0x00111C60 to 0x00112A80, found by Ghidra. */
#include "common.h"

struct V4 { float x, y, z, w; };

extern void __fastcall func_001059E0(void *,int);
extern int __fastcall func_001093B0(void *,int,int,int);
extern void __fastcall func_000261F0(void *,int,float);
extern void __fastcall func_000838F0(void *,int,char *,int);
extern void __fastcall func_00109400(void *,int,int);
extern float __fastcall func_00108CE0(void *,int,int);
extern float __fastcall func_00108CB0(void *,int,int,float,float);
extern void __fastcall func_0010DD90(void *,int,float,char *,int,int,int);
extern float D_00283CE8;
extern void __fastcall func_00083850(void *,int);
extern void __fastcall func_00083950(void *,int);
extern void __fastcall func_00083960(void *,int);
extern void __fastcall func_00109550(void *,int,int);
extern float *func_0001C5E0(float *,float,float *);
extern float func_0014F7E0(float);
extern float D_00283CF0;
extern float D_00277240;
extern float D_002757F4;
extern float D_00275AE8;
extern char *D_002A8490;
extern float D_002782A8;
extern float D_002755E8;
extern float D_00283CEC;
extern float D_002756DC;
extern float D_00275460;
extern float D_00275F64;
extern void __fastcall func_0010E2A0(void *,int);
extern void func_00104A90(float *,float *);
extern void __fastcall func_000A7530(void *,int);
extern void __fastcall func_001092E0(void *,int,int);
extern void __fastcall func_00105970(void *,int);
extern void __fastcall func_00105A40(void *,int);
extern void __fastcall func_0010DCB0(void *,int);
extern float D_00275548;
extern float D_00275544;
extern int D_002A3A3C;
extern int D_002A3A40;
extern int D_002A3A44;
extern int D_002A3A48;
extern float *func_00011110(float *,float *,float *);
extern float func_00011170(float *);
void __fastcall func_00111C60(char *self,int unused,float dt)
{
 float a[4],b[4],c[4];
 char **pself = &self;
 if((*(float *)(self+0x11a4))<D_00275548)(*(float *)(self+0x11a4))+=dt;
 if((*(float *)(self+0x1064))>D_00275544){
 (*(float *)(self+0x1064))-=dt;
 if((*(float *)(self+0x1064))<=D_00275544){
 if(!(*(int *)(self+0x5c8))){
 if((*(int *)(self+0x1060))){
 if((*(float *)(self+0x105c))>(*(float *)(self+0x1058)))(*(float *)(self+0x1058))=(*(float *)(self+0x105c));
 }else{
 float height=(*(int *)(self+0x2024))?(*(float *)(self+0x2048))-(*(float *)(self+0x202c)):D_00275544;
 if(height>(*(float *)(self+0xa4c)))(*(float *)(self+0xa4c))=height;
 if((*(int *)(self+0x1054))){
 ((int *)a)[0]=*(int *)(self+8232);((int *)b)[0]=*(int *)(self+8248);
((int *)a)[1]=*(int *)(self+8236);((int *)b)[1]=*(int *)(self+8252);
((int *)a)[2]=*(int *)(self+8240);((int *)b)[2]=*(int *)(self+8256);
((int *)a)[3]=*(int *)(self+8244);((int *)b)[3]=*(int *)(self+8260);
 a[1]=0;b[1]=0;
 float length=func_00011170(func_00011110(c,b,a));
 if(length>(*(float *)(self+0xa54)))(*(float *)(self+0xa54))=length;
 }
 }
 }
 (*(int *)(self+0x2024))=0;
 (*(int *)(self+0x2028))=D_002A3A3C;(*(int *)(self+0x202c))=D_002A3A40;(*(int *)(self+0x2030))=D_002A3A44;(*(int *)(self+0x2034))=D_002A3A48;
 (*(int *)(self+0x2038))=D_002A3A3C;(*(int *)(self+0x203c))=D_002A3A40;(*(int *)(self+0x2040))=D_002A3A44;(*(int *)(self+0x2044))=D_002A3A48;
 (*(int *)(self+0x2048))=0;
 }
 }else if((*(float *)(self+0x48c))>(*(float *)(self+0x105c)))(*(float *)(self+0x105c))=(*(float *)(self+0x48c));
 if(!(*(int *)(self+0x1168))&&(*(int *)(self+0x116c))&&!(*(int *)(self+0x454))){(*(int *)(self+0x1184))=0;(*(float *)(self+0x1188))=0.5f;}
 if(!(*(int *)(self+0x1184))&&!(*(int *)(self+0x1178))){(*(int *)(self+0x1184))=1;(*(int *)(self+0x1188))=0;}

 if(!(*(int *)(self+0x1178))){
 if((*(int *)(self+0x117c))){
 (*(int *)(self+0x2024))=1;
 *(int *)(self+8232)=*(int *)(self+2100);
*(int *)(self+8236)=*(int *)(self+2104);
*(int *)(self+8240)=*(int *)(self+2108);
*(int *)(self+8244)=*(int *)(self+2112);
 if((*(int *)(self+0xa50)))(*(int *)(self+0x2048))=(*(int *)(self+0x838));
 (*(int *)(self+0x1054))=0;(*(int *)(self+0x1060))=0;(*(int *)(self+0x1174))=0;(*(int *)(self+0x11c8))=1;
 b[0]=b[1]=b[2]=0;b[3]=1.0f;
 func_00104A90(b,(float *)(self+0x748));
 func_000A7530(*(void **)(self+0x954),0);
 }
 func_001092E0(*(void **)(self+0x1084),0,0);
 }
 if((*(int *)(self+0x1178))&&!(*(int *)(self+0x117c))){
 (*(int *)(self+0x978))=0;
 *(int *)(self+8248)=*(int *)(self+2100);
*(int *)(self+8252)=*(int *)(self+2104);
*(int *)(self+8256)=*(int *)(self+2108);
*(int *)(self+8260)=*(int *)(self+2112);
 (*(int *)(self+0x97c))=0;(*(int *)(self+0x1188))=0;(*(int *)(self+0x1184))=1;(*(float *)(self+0x1064))=0.2f;(*(float *)(self+0x1648))=0.9f;(*(int *)(self+0x11c8))=0;
 if(*(int *)(*(char **)(self+0x1084)+0x2c)>=1000){func_00105970(self,0);(*(float *)(self+0x1140))=0.35f;}
 else func_00105A40(self,0);
 (*(int *)(self+0x1128))=0;

 int special=0;
 if(!(*(int *)(self+0x5c8))&&(*(float *)(self+0x760))<D_00283CF0){
 special=1;
 char *rider=*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170);
 if(rider&&(*(float *)(self+0x858))>=(*(float *)(self+0x1f98))){
 if(*(int *)(rider+0xd4)>0){func_00083850(rider,0);func_00109550(*(void **)(self+0xa64),0,7);(*(int *)(self+0x1208))=1;}
 }
 }else (*(int *)(self+0x1208))=0;
 char *rider=*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170);
 if(rider&&*(int *)(rider+0xd4)>0){
 float dot=(*(float *)(self+0x748))*(*(float *)(self+0x874))+(*(float *)(self+0x74c))*(*(float *)(self+0x878))+(*(float *)(self+0x750))*(*(float *)(self+0x87c));
 func_00011110(a,(float *)(self+0x748),func_0001C5E0(c,dot,(float *)(self+0x874)));
 func_00104A90(a,a);
 float angle=func_0014F7E0(a[0]*(*(float *)(self+0x854))+a[1]*(*(float *)(self+0x858))+a[2]*(*(float *)(self+0x85c)))*D_00277240;
 *(unsigned int *)&angle&=0x7fffffff;
 if(special)angle=D_002757F4-angle;
 (*(int *)(self+0x1174))=0;
 if(angle>D_00275AE8){
 func_00083950(rider,0);
 int *record=*(int **)(self+0xa64);if(record[0]>=1)record[record[0]+0xf0/4]=1;
 (*(int *)(self+0x1174))=1;
 }else if(angle<D_00275548){
 func_00083960(rider,0);
 int *record=*(int **)(self+0xa64);if(record[0]>=1)record[record[0]+0xf0/4]=2;
 (*(int *)(self+0x1128))=1;
 }
 }
 if((*(int *)(self+0x1074))){
 (*(int *)(self+0x1070))=*(int *)(*(char **)(*(char **)(self+0x24)+0x52c)+0xc);
 (*(int *)(self+0x1074))=0;
 }
 }

 if((*(float *)(self+0x894))>D_00275544){
 float amount=((*(float *)(self+0x894))>D_002782A8?D_002782A8:(*(float *)(self+0x894)))*D_002755E8*D_00283CEC;
 if(amount<D_002756DC)amount=0.1f;
 char *pad=*(char **)(*(char **)(D_002A8490+8)+(*(int *)(self+0x970))*4+0x14);
 ((void (__fastcall *)(void *,int,int,float,int))(*(void ***)(pad))[15])(pad,0,0,amount,200);
 }
 if((*(int *)(self+0x20b4))&&!(*(int *)(self+0x5c8))&&(*(float *)(self+0x744))>(*(float *)(self+0x20b8))&&(*(float *)(self+0x20bc))<=D_00275544){
 float amount=0.1f;
 char *pad=*(char **)(*(char **)(D_002A8490+8)+(*(int *)(self+0x970))*4+0x14);
 ((void (__fastcall *)(void *,int,int,float,int))(*(void ***)(pad))[15])(pad,0,0,amount,200);
 (*(float *)(self+0x20bc))=(D_00275460-(*(float *)(self+0x744))/(*(float *)(*(char **)(self+0x1ec)+0x3c)))*D_00275F64;
 }
 if((*(float *)(self+0x20bc))>=D_00275544)(*(float *)(self+0x20bc))-=dt;
 if((*(float *)(self+0x45c))>D_00275544){(*(float *)(self+0x45c))-=dt;if((*(float *)(self+0x45c))<=D_00275544)(*(int *)(self+0x45c))=0;}
 if((*(int *)(self+0x11c8))){
 if((*(float *)(self+0x838))>(*(float *)(self+0x2048))&&(*(int *)(self+0xa50)))(*(int *)(self+0x2048))=(*(int *)(self+0x838));
 if((*(float *)(self+0xa34))>D_00275544){(*(float *)(self+0xa34))-=dt;if((*(float *)(self+0xa34))<=D_00275544){(*(int *)(self+0xa34))=0;func_0010DCB0(self,0);(*(int *)(self+0x1608))=1;(*(int *)(self+0x1610))=1;}}
 if((*(int *)(self+0x680)))(*(int *)(self+0x1074))=1;
 }else{
 (*(int *)(self+0x1200))=0;
 if((*(int *)(self+0x1178))&&(*(int *)(self+0x117c))&&!(*(int *)(self+0xa50)))(*(int *)(self+0xa50))=1;
 if(!(*(int *)(self+0x1184))&&(*(float *)(self+0x1188))>D_00275544){(*(float *)(self+0x1188))-=dt;if((*(float *)(self+0x1188))<=D_00275544)(*(int *)(self+0x1188))=0;}
 if((*(int *)(self+0x11f4))==1&&!(*(int *)(self+0x454)))func_0010E2A0(self,0);
 if((*(int *)(self+0x11f4))==1){
 int ready=(*(int *)(self+0x1184))!=0;
 if((*(float *)(self+0x1070))>D_00275544)ready=0;
 if((*(float *)(self+0x106c))>D_00275544)ready=0;
 if((*(float *)(self+0x45c))>D_00275544)ready=0;
 if(!(*(int *)(self+0x454))&&ready)(*(int *)(self+0x9dc))=1;
 }
 if((*(int *)(self+0x454))){
 if(!(*(int *)(self+0x5c8))&&(*(int *)(self+0xa30))){(*(int *)(self+0x108c))=1;(*(int *)(self+0xa30))=0;(*(int *)(self+0xa34))=0;}
 }
 if(!(*(int *)(self+0x454)))func_001059E0(self,0);
 }

 if((*(int *)(self+0x162c))){
 (*(int *)(self+0x162c))=0;(*(int *)(self+0x1630))=1;
 int repeat=!func_001093B0(*(void **)(self+0x1084),0,*(int *)(*(char **)(self+0x1084)+0x2c),(*(int *)(self+0xa44)));
 if(!repeat)func_000261F0(*(void **)(self+0x5f0),0,(*(float *)(self+0x608))*D_00283CE8);
 switch((*(int *)(self+0xa44))){
case 0:case 1:{
 char *rider=*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170);
 if(rider)func_000838F0(rider,0,*(char **)(*(char **)(self+0x24)+0x52c)+11508,repeat);
 break;}
case 2:{
 char *rider=*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170);
 if(rider)func_000838F0(rider,0,*(char **)(*(char **)(self+0x24)+0x52c)+11558,repeat);
 break;}
case 3:case 4:{
 char *rider=*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170);
 if(rider)func_000838F0(rider,0,*(char **)(*(char **)(self+0x24)+0x52c)+11608,repeat);
 break;}
case 5:{
 char *rider=*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170);
 if(rider)func_000838F0(rider,0,*(char **)(*(char **)(self+0x24)+0x52c)+11658,repeat);
 break;}
case 6:case 7:{
 char *rider=*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170);
 if(rider)func_000838F0(rider,0,*(char **)(*(char **)(self+0x24)+0x52c)+11708,repeat);
 break;}
}
 if((unsigned int)(*(int *)(self+0xa44))<=7){
 int *record=*(int **)(self+0xa64);if(record[0]>=1)record[record[0]+0x140/4]=(*(int *)(self+0xa44));
 if(!(*(int *)(self+0x11dc))&&!(*(int *)(self+0x454)))func_00109400(*(void **)(self+0x1084),0,(*(int *)(self+0xa44)));
 }
 }
 if((*(int *)(self+0x108c))){
 (*(int *)(self+0x108c))=0;
 switch((*(int *)(self+0x1158))){
case 4:{
 if(*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170)){
 ++(*(int *)(self+3956));int count=(*(int *)(self+3956));++(*(int *)(self+3952));
 char *settings=*(char **)(*(char **)(self+0x24)+0x52c);
 float first=func_00108CE0(self,0,(*(int *)(self+3952)));
 float value=func_00108CB0(self,0,count,(float)*(int *)(settings+26064),first);
 func_0010DD90(self,0,value,settings+26012,-1,5,0);
 }break;}
case 3:{
 if(*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170)){
 ++(*(int *)(self+3964));int count=(*(int *)(self+3964));++(*(int *)(self+3960));
 char *settings=*(char **)(*(char **)(self+0x24)+0x52c);
 float first=func_00108CE0(self,0,(*(int *)(self+3960)));
 float value=func_00108CB0(self,0,count,(float)*(int *)(settings+26124),first);
 func_0010DD90(self,0,value,settings+26072,-1,4,1);
 }break;}
case 2:{
 if(*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170)){
 ++(*(int *)(self+3948));int count=(*(int *)(self+3948));++(*(int *)(self+3944));
 char *settings=*(char **)(*(char **)(self+0x24)+0x52c);
 float first=func_00108CE0(self,0,(*(int *)(self+3944)));
 float value=func_00108CB0(self,0,count,(float)*(int *)(settings+26004),first);
 func_0010DD90(self,0,value,settings+25952,-1,3,0);
 }break;}
case 0:{
 if(*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170)){
 ++(*(int *)(self+3940));int count=(*(int *)(self+3940));++(*(int *)(self+3936));
 char *settings=*(char **)(*(char **)(self+0x24)+0x52c);
 float first=func_00108CE0(self,0,(*(int *)(self+3936)));
 float value=func_00108CB0(self,0,count,(float)*(int *)(settings+25944),first);
 func_0010DD90(self,0,value,settings+25892,-1,1,0);
 }break;}
case 1:{
 if(*(char **)(*(char **)(D_002A8490+0x2a4)+(*(int *)(self+0xa2c))*4+0x170)){
 ++(*(int *)(self+3972));int count=(*(int *)(self+3972));++(*(int *)(self+3968));
 char *settings=*(char **)(*(char **)(self+0x24)+0x52c);
 float first=func_00108CE0(self,0,(*(int *)(self+3968)));
 float value=func_00108CB0(self,0,count,(float)*(int *)(settings+26184),first);
 func_0010DD90(self,0,value,settings+26132,-1,2,0);
 }break;}
}
 }
}
