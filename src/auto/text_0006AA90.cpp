/* 1 function from 0x0006AA90 to 0x0006B4B0, found by Ghidra. */
#include "common.h"
#include <string.h>

struct Txt_6AA90 { char* str; float x; float y; char pad[0x38]; int frame; char pad2[6]; unsigned char flags; int func_001D6290(); void func_001D6600(); void func_0005E840(char*); void SetPos(float a,float b) { if(x!=a||y!=b){x=a;y=b;flags|=6;} } };
extern int D_0028F5DC;
struct Widget_6AA90 {
 void func_001B1980(); void func_001B17D0(char*);
 void func_001B2270(unsigned int);
 void func_001B19C0(int,void*,int);
 void func_001B1860(int,float,int,float,int,int,int,int,float,int,int,float,int);
};
struct Entry_6AA90 { char *s; int v; };
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
 int unk164; int unk168; char pad3[8]; Txt_6AA90* t174; Txt_6AA90* t178; Txt_6AA90* t17C; int pad180; int unk184;
 char pad188[0x1c0-0x188]; Txt_6AA90 *title; char pad1c4[0x1d8-0x1c4]; int state; char pad1dc[8]; int dirty; char pad1e8[0x1fc-0x1e8]; int unk1fc;
 void func_0006AA90();
};

void S_6AA90::func_0006AA90()
{
    if (unk168) {
        if (strlen(t174->str) < 40) {
            int w = t174->func_001D6290();
            float x = t174->x;
            float y = t174->y;
            x += w / 2;
            if (t178->x != x || t178->y != y) { t178->x = x; t178->y = y; t178->flags |= 6; }
            if (t178->frame != D_0028F5DC) { t178->frame = D_0028F5DC; t178->flags |= 6; }
            if (t17C->x != x || t17C->y != y) { t17C->x = x; t17C->y = y; t17C->flags |= 6; }
            if (t17C->frame != D_0028F5DC) { t17C->frame = D_0028F5DC; t17C->flags |= 6; }
            if (unk184) { t17C->func_001D6600(); t178->func_001D6600(); }
        }
        t174->func_001D6600();
        for (int i = 0; i < 2; ++i) objs[i]->func_001D6600();
    }
}
