/* 1 function from 0x00042840 to 0x00043F00, found by Ghidra. */
#include "common.h"
#include <string.h>

struct V4 {
    float x, y, z, w;
    V4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

struct Obj390 {
    void func_00198390();
};

struct MidD {
    char pad0[4];
    Obj390 *f4;
    char pad8[8];
    int f10;
    void func_00164820(int a);
    void func_001670C0(int a, int b, int c);
    void func_00132D20();
    void func_00194F10(V4 *out);
};

struct Mid2D {
    char pad0[4];
    int f4;
};

struct MgrD {
    char pad0[0x1a4];
    MidD *f1A4;
    char pad1A8[4];
    Mid2D *f1AC;
};

struct Obj44D {
    char pad0[0x5c];
    MidD *f5C;
};

struct GObjD {
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void vf7(int a);
    virtual void vf8();
};

struct S_Text {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    void func_0008B670(char *s);
      void func_0008A970();
};

struct S_Btn {
    void func_001A4100(int a, int b, int c);
};

struct S_Obj {
    virtual void v0(int);
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
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual int v35(const char *,int,int);
      char pad4[0x24];
    int f28;
    void func_001983A0();
      S_Obj *func_00143580(int);
      void func_00199600(V4);
      void func_00198F50(V4 *,V4 *,int,int,int);
      void func_0019ABA0(int,int);
      void func_0019AC50();
      S_Obj *func_001BB680(int);
      int func_001BC040(V4,V4,V4,V4,int,int,int,int);
      void func_001BBAE0(int);
      V4 func_001824E0(int,int,int);
};

struct S_List { void func_001577A0(S_Obj *,int); };
void *func_001E8A44(unsigned int);
void func_001E891B(void *);
void func_0001CB80(char *);
void *func_001E8920(void *,const void *,unsigned int);
extern char D_00276F0C[];
struct S_Entry {
    int type;
    int pad4;
    S_Obj *obj;
    S_Obj *objC;
    int pad10;
    int pad14;
    int pad18;
    S_Entry() { type = -1; pad4 = 0; obj = 0; objC = 0; pad10 = 0; pad14 = 0; pad18 = 0; }
};

struct S_Slot {
    char pad0[0x44];
    int f44;
};

struct S_Item {
    char pad0[0x314];
    char s314[0x32];
    char pad346[0x358 - 0x346];
    int f358;
    int f35c;
    char pad360[0x36c - 0x360];
    int f36c;
};

struct S_Owner {
    char pad0[0x5a4];
    S_Slot *f5A4;
    int f5A8;
    S_Item **f5AC;
    S_Item *GetItem(int k)
    {
        if (f5A8 > 0 && f5AC != 0 && k < f5A8)
            return f5AC[k];
        return 0;
    }
};

extern GObjD *D_002EFDB8;
extern float D_002A14D4;
extern float D_002A14D8;
extern float D_002A14DC;
extern float D_00275AEC;
extern float D_00275548;
extern char D_00276FF4[];
extern char D_00276FD8[];
extern char D_00276F2C[];
extern char D_00276BB4[];
extern char D_00276F58[];
extern char D_002A5870[];
extern char D_002A5EA0[];
extern char D_002A60B0[];
extern char D_002A4C10[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct BmxEventEditor {
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
    virtual void v18(int a);
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    char pad4[0x44 - 4];
    Obj44D *f44;
    char pad48[0x64 - 0x48];
    S_Owner *f64;
    char pad68[0x2cc - 0x68];
    int f2cc;
    int f2d0;
    char pad2d4[4];
    int f2d8;
    char pad2dc[0x428 - 0x2dc];
    int f428;
    int pad42c;
    int f430;
    int f434;
    int pad438;
    int f43c;
    float f440;
    int f444;
    int f448;
    char pad44c[0x47c - 0x44c];
    int f47c;
    int f480;
    int f484;
    char pad488[0x48c - 0x488];
    int f48c;
    int f490;
    char pad494[0x4a0 - 0x494];
    int f4a0;
    char pad4a4[0x51c - 0x4a4];
    V4 f51c;
    char pad52c[0x53c - 0x52c];
    S_Btn *f53c;
    char pad540[0x558 - 0x540];
    S_Text *f558;
    char pad55c[0x564 - 0x55c];
    S_Entry *f564;
    char pad568[0x598 - 0x568];
    MgrD *f598;
    MgrD *f59c;
    int cnt5a0;
    void func_0003D910(int a0);
    int func_00042840();
      int func_0003A990(V4,V4);
      void func_000399A0(int);
      void func_0003AD50();
      void func_00035E80(S_Obj *,char *,S_Entry *);
      void func_00035C10(S_Obj *,int,const char *,V4 *,V4 *,V4 *,int,int);
};

int BmxEventEditor::func_00042840()
{
    V4 position, direction, up, raw;
    int x0=f428,z0=f430,x1=f434,z1=f43c;
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    if(f47c==18) {
        if(f480==0) {
            f598->f1A4->func_00164820(f598->f1AC->f4);
            f598->f1A4->func_001670C0(0,0,0);
            f598->f1A4->f10=1;
            f598->f1A4->func_00132D20();
            f2d0=1; return 1;
        }
        if(f480==1) {
            f59c->f1A4->func_00164820(f59c->f1AC->f4);
            f59c->f1A4->func_001670C0(0,0,0);
            f59c->f1A4->f10=1;
            f59c->f1A4->func_00132D20();
            f2d8=1; return 1;
        }
    }
    if(f2d0==0 && f2d8==0 && cnt5a0-f484>=150) {
        f558->func_0008B670(D_00276FF4); f490=0; f558->v6();
        f53c->func_001A4100(1,1,0); return 0;
    }
    if(f2d0==0 && f2d8==0 && f47c==19 && cnt5a0-f484>=147) {
        f558->func_0008B670(D_00276FD8); f490=0; f558->v6();
        f53c->func_001A4100(1,1,0); return 0;
    }
    f44->f5C->func_00194F10(&raw);
    raw.x=(int)raw.x/10*D_00275AEC;
    raw.z=(int)raw.z/10*D_00275AEC;
    if(f4a0==0) { raw.x+=D_00275548; raw.z+=D_00275548; }
    raw.y=f440;
    if(raw.x==D_002A14D4 && raw.y==D_002A14D8 && raw.z==D_002A14DC) {
        position.x=(float)f444; position.y=f440; position.z=(float)f448;
    } else position=raw;
    direction.x=1; direction.y=0; direction.z=0;
    if(f51c.x==D_002A14D4 && f51c.y==D_002A14D8 && f51c.z==D_002A14DC) f51c=direction;
    else direction=f51c;
    up.x=0; up.y=1; up.z=0;
    S_Entry *entry=new S_Entry;
    int k=f64->f5A4[f47c].f44+f480;
    S_Item *item=f64->GetItem(k);
    if(f4a0) {
        if(!item->f36c) { position.x-=D_00275548; position.z-=D_00275548; f4a0=0; }
    } else if(item->f36c) { position.x-=D_00275548; position.z-=D_00275548; f4a0=1; }
    if(f564) {
        if(f48c>-1) {
            if(f564->type==0) f564->obj->func_001983A0();
            else if(f564->type>=3) {
                f564->obj->func_001983A0();
                if(f564->type==3 || f564->type==5) f564->objC->func_001983A0();
            }
            f48c=-1; f564=0;
        } else func_0003D910(0);
    }
    if(strncmp((const char *)&f64->f5A4[f47c],D_00276F2C,5)!=0) {
        f2cc=0;
        func_001ADCC0(D_002A5EA0,260,D_00276BB4,D_002A5870);
        func_001ADCC0(D_002A60B0,260,D_00276F58,D_002A5870);
        func_001ADCC0(D_002A4C10,260,D_00276BB4,D_002A5870);

        int width=item->f358,depth=item->f35c;
        if(item->f36c) {
            x0=(int)(x0+D_00275548); z0=(int)(z0+D_00275548);
            x1=(int)(x1-D_00275548); z1=(int)(z1-D_00275548);
            if(width==depth) {
                if(width>2) { float m=(width/2-1)*D_00275AEC; x0=(int)(x0+m);z0=(int)(z0+m);x1=(int)(x1-m);z1=(int)(z1-m); }
            } else if(direction.x>0.9f) { if(width>2) {
    if(width%2) { int half=(width-1)/2; z0=(int)(z0+(half)*D_00275AEC); z1=(int)(z1-(half-1)*D_00275AEC); }
    else { float margin=(width/2-1)*D_00275AEC; z0=(int)(z0+margin); z1=(int)(z1-(width/2-1)*D_00275AEC); }
} if(depth>2) { float m=(depth/2-1)*D_00275AEC;x0=(int)(x0+m);x1=(int)(x1-m); } }
            else if(direction.x<-0.9f) { if(width>2) {
    if(width%2) { int half=(width-1)/2; z0=(int)(z0+(half-1)*D_00275AEC); z1=(int)(z1-(half)*D_00275AEC); }
    else { float margin=(width/2-1)*D_00275AEC; z0=(int)(z0+margin); z1=(int)(z1-(width/2-1)*D_00275AEC); }
} if(depth>2) {float m=(depth/2-1)*D_00275AEC;x0=(int)(x0+m);x1=(int)(x1-m);} }
            else if(direction.z>0.9f) { if(width>2) {
    if(width%2) { int half=(width-1)/2; x0=(int)(x0+(half-1)*D_00275AEC); x1=(int)(x1-(half)*D_00275AEC); }
    else { float margin=(width/2-1)*D_00275AEC; x0=(int)(x0+margin); x1=(int)(x1-(width/2-1)*D_00275AEC); }
} if(depth>2) {float m=(depth/2-1)*D_00275AEC;z0=(int)(z0+m);z1=(int)(z1-m);} }
            else if(direction.z<-0.9f) { if(width>2) {
    if(width%2) { int half=(width-1)/2; x0=(int)(x0+(half)*D_00275AEC); x1=(int)(x1-(half-1)*D_00275AEC); }
    else { float margin=(width/2-1)*D_00275AEC; x0=(int)(x0+margin); x1=(int)(x1-(width/2-1)*D_00275AEC); }
} if(depth>2) {float m=(depth/2-1)*D_00275AEC;z0=(int)(z0+m);z1=(int)(z1-m);} }
        } else {
            if(width==depth) { if(width>2) {float m=((width-1)/2)*D_00275AEC;x0=(int)(x0+m);x1=(int)(x1-m);z0=(int)(z0+m);z1=(int)(z1-m);} }
            else if(direction.x>0.9f) {  if(width%2) {float m=((width-1)/2)*D_00275AEC; z0=(int)(z0+m);z1=(int)(z1-m);}
else { int half=width/2; z0=(int)(z0+(half-0)*D_00275AEC); z1=(int)(z1-(half-1)*D_00275AEC); }  if(depth>2) { if(depth%2) {float m=((depth-1)/2)*D_00275AEC; x0=(int)(x0+m);x1=(int)(x1-m);}
else { int half=depth/2; x0=(int)(x0+(half-0)*D_00275AEC); x1=(int)(x1-(half-1)*D_00275AEC); } } }
            else if(direction.x<-0.9f) {  if(width%2) {float m=((width-1)/2)*D_00275AEC; z0=(int)(z0+m);z1=(int)(z1+m);}
else { int half=width/2; z0=(int)(z0+(half-1)*D_00275AEC); z1=(int)(z1-(half-0)*D_00275AEC); }  if(depth>2) { if(depth%2) {float m=((depth-1)/2)*D_00275AEC; x0=(int)(x0+m);x1=(int)(x1-m);}
else { int half=depth/2; x0=(int)(x0+(half-1)*D_00275AEC); x1=(int)(x1-(half-0)*D_00275AEC); } } }
            else if(direction.z>0.9f) {  if(width%2) {float m=((width-1)/2)*D_00275AEC; x0=(int)(x0+m);x1=(int)(x1-m);}
else { int half=width/2; x0=(int)(x0+(half-1)*D_00275AEC); x1=(int)(x1-(half-0)*D_00275AEC); }  if(depth>2) { if(depth%2) {float m=((depth-1)/2)*D_00275AEC; z0=(int)(z0+m);z1=(int)(z1-m);}
else { int half=depth/2; z0=(int)(z0+(half-0)*D_00275AEC); z1=(int)(z1-(half-1)*D_00275AEC); } } }
            else if(direction.z<-0.9f) {  if(width%2) {float m=((width-1)/2)*D_00275AEC; x0=(int)(x0+m);x1=(int)(x1-m);}
else { int half=width/2; x0=(int)(x0+(half-0)*D_00275AEC); x1=(int)(x1-(half-1)*D_00275AEC); }  if(depth>2) { if(depth%2) {float m=((depth-1)/2)*D_00275AEC; z0=(int)(z0+m);z1=(int)(z1-m);}
else { int half=depth/2; z0=(int)(z0+(half-1)*D_00275AEC); z1=(int)(z1-(half-0)*D_00275AEC); } } }
        }
        if(position.x<x0)position.x=(float)x0;
        if(position.x>x1)position.x=(float)x1;
        if(position.z<z0)position.z=(float)z0;
        if(position.z>z1)position.z=(float)z1;
        S_Obj *object=(S_Obj *)func_001E8A44(0x1e0);
        if(object) object=object->func_00143580(1);
        if(!object->v35((const char *)item,0,1)) { object->v0(1); func_001E891B(entry); f564=0; return 0; }
        int n=(int)strlen((const char *)item); if(n>127)n=127;
        func_001E8920((char *)object+0x28,(const char *)item,n); ((char *)object)[0x28+n]=0;
        object->func_00199600(position);
        object->func_00198F50(&direction,&up,1,0,0);
        object->func_0019ABA0(**(int **)((char *)f64+0x4a8),2);
        (**(S_List ***)((char *)f64+0x3a8))->func_001577A0(object,0);
        entry->type=0; entry->obj=object; entry->pad10=0;entry->objC=0;entry->pad4=0;entry->pad14=0;entry->pad18=0;
        f564=entry;
        int height=func_0003A990(position,direction);
        if(height>=0) {position.y=height*D_00275548+f440;entry->obj->func_00199600(position);}
        f564=0;
        const char *child=(const char *)item+0xff;
        if(strlen(child)) {
            V4 childPos=position;
            childPos.x+=*(float *)((char *)item+0x300);
            childPos.y+=*(float *)((char *)item+0x304);
            childPos.z+=*(float *)((char *)item+0x308);
            S_Obj *childObject=(S_Obj *)func_001E8A44(0x1e0);
        if(childObject) childObject=childObject->func_00143580(1);
        if(!childObject->v35(child,0,1)) { childObject->v0(1); func_001E891B(entry); f564=0; return 0; }
        int n=(int)strlen(child); if(n>127)n=127;
        func_001E8920((char *)childObject+0x28,child,n); ((char *)childObject)[0x28+n]=0;
        childObject->func_00199600(childPos);
        childObject->func_00198F50(&direction,&up,1,0,0);
        childObject->func_0019ABA0(**(int **)((char *)f64+0x4a8),2);
        (**(S_List ***)((char *)f64+0x3a8))->func_001577A0(childObject,0);
            entry->type=3;entry->objC=childObject;
            childObject->func_0019AC50();
            func_00035C10(childObject,1,child,&childPos,&direction,&up,1,0);
        }
        const char *third=(const char *)item+0x1fe;
        if(strlen(third)) {
            entry->type=4;
            func_00035C10(object,1,third,&position,&direction,&up,0,1);
        }
        if(*(int *)((char *)this+0x56c) && *(int *)((char *)this+0x570)) {
            entry->type=5; object->func_0019AC50();
        }
        func_00035C10(object,*(int *)((char *)item+0x374),(const char *)item,&position,&direction,&up,0,0);
        if(*(int *)((char *)item+0x364)) {
            char name[260], description[260];
            func_001ADCC0(name,260,(const char *)item);
            func_0001CB80(name);
            func_001ADCC0(description,260,D_00276F0C,D_002A5EA0,name);
            func_00035E80(object,description,entry);
        }
    } else {
        f2cc=1;
        S_Obj *object=(S_Obj *)func_001E8A44(0x1e0);
        if(object) object=object->func_00143580(1);
        S_Obj *trigger=0;
        if(!object->v35((const char *)item,0,1)) { object->v0(1);func_001E891B(entry);f564=0;return 0; }
        int n=(int)strlen((const char *)item);if(n>127)n=127;
        func_001E8920((char *)object+0x28,item,n); ((char *)object)[0x28+n]=0;
        object->func_00199600(position);
        object->func_00198F50(&direction,&up,1,0,0);
        *((unsigned char *)object+0x1a3)&=0xf7;
        object->func_0019ABA0(**(int **)((char *)f64+0x4a8),2);
        (**(S_List ***)((char *)f64+0x3a8))->func_001577A0(object,0);
        entry->obj=object;
        trigger=(S_Obj *)func_001E8A44(0x2f0);
        if(trigger) trigger=trigger->func_001BB680(1);
        position.y+=D_00275548;
        V4 *triggerPosition=(V4 *)((char *)item+0x348);
        if(!trigger->func_001BC040(position,*triggerPosition,direction,up,0,0,100,0)) {
            object->v0(1); if(trigger)trigger->v0(1);func_001E891B(entry);f564=0;return 0;
        }
        trigger->func_001BBAE0(**(int **)((char *)f64+0x4ac));
        ((S_List *)f64)->func_001577A0(trigger,-1);
        *(V4 *)((char *)this+0x4bc)=*triggerPosition;
        *(V4 *)((char *)this+0x4cc)=direction;
        *(V4 *)((char *)this+0x4dc)=up;
        entry->type=1;entry->pad10=(int)trigger;
        if(*(int *)((char *)this+0x474)==3) {
            (*(S_Text **)((char *)this+0x554))->func_0008A970();
            *(int *)((char *)this+0x474)=5;
        } else {
            (*(S_Text **)((char *)this+0x554))->func_0008A970();
            *(int *)((char *)this+0x474)=7;
        }
    }
    f564=entry;
    if(f564->type==0) f564->obj->func_001824E0(0,0,0x40000000);
    else if(f564->type>=3) {
        f564->obj->func_001824E0(0,0,0x40000000);
        if(f564->type==3 || f564->type==5) f564->objC->func_001824E0(0,0,0x40000000);
    }
    func_000399A0(0); func_0003AD50();
    return 1;
}
