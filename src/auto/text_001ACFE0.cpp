/* 7 functions from 0x001ACFE0 to 0x001ADFD0, found by Ghidra. */
#include "common.h"
#include <string.h>

extern int D_0028C1D0;
extern int D_0028C1DC;
extern int D_0028C1F0;
extern int D_002AA2D4;
extern int D_002EFFD0;
extern u16 D_001ADCB0;
extern int D_002AA470;
extern int D_0028C1B0;
extern int D_002ABE74;

struct S_001ACFE0_Range {
    char *cur;
    char *end;
};

int func_001ACFE0(const u16 *fmt, S_001ACFE0_Range *range, const char *a, void *b);
int func_001EA23F(int c);
int func_001EA268(int c);
int func_001E8BB0(const char *a, const char *b, int n);
extern char D_0028C17C[];
extern char D_0028C174[];
extern char D_0028C168[];
extern char D_0028C118[];
extern char D_0028C12C[];
char *func_001ACD40(int ndec, char fmt, double value, int alt, int *sign, char *buf, int *outlen);
char *func_001ACB40(double value, int ndec, char *buf, int alt);
char *func_001E9260(const char *s, int c);

static char *func_001ACCF0(int flag, int *sign, unsigned value, char *end, int *len)
{
    char *p = end;
    if (flag) {
        *sign = 0;
    } else {
        int neg = (int)value < 0;
        *sign = neg;
        if (neg)
            value = -value;
    }
    do {
        unsigned q = value / 10;
        p--;
        *p = (char)(value - q * 10) + '0';
        value = q;
    } while (value);
    *len = (int)(end - p);
    return p;
}

struct S_func_001ADD80_arg0 {
    char pad0[0x6c];
    int unk6c;
    int unk70;
    int unk74;
    int unk78;
};

struct C_00144640 {
    C_00144640 *func_00144640();
    virtual void v0();
    virtual void v1(int a, int b);
    int unk4;
    int unk8;
    u8 unkC;
    char padD[3];
    void *unk10;
};

struct C_002A829C_Y {
    char pad0[0x18];
    s16 unk18;
};

struct C_002A829C_X {
    char pad0[0x54];
    C_002A829C_Y *unk54;
};

struct C_002A829C_Entry {
    int unk0;
    C_002A829C_X *unk4;
    char pad8[8];
};

struct C_002A829C {
    void func_00161680(void);
    char pad0[0x14];
    C_002A829C_Entry *unk14;
};

extern C_002A829C *D_002A829C;

struct C_002AA6C0 {
    void func_001B2640(void);
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a, int b);
    virtual int v7(int a, int b);
};

extern C_002AA6C0 *D_002AA6C0;

int __stdcall func_001FCF20(int a, int b, int c, int d, int e, int f, int g);
int __stdcall func_001FCE50(int a, int b);
void *__stdcall func_001FF3C0(int size);
void *func_001E8A44(int size);
int func_0014A7B0(int *entries, int *tokens);

struct C_0014A520 {
    C_0014A520 *func_0014A520(int a);
    void func_0014A560(int a, int b);
};

struct C_00142C70 {
    C_00142C70 *func_00142C70(void);
    void func_00142C80(int a, int b);
};

struct SpriteTweak {
    void *vtbl;
    C_00144640 *unk4;
    int unk8;
    int unkC;
    C_0014A520 *unk10;
    C_00142C70 *unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    float unk3C;
    float unk40;
    int unk44;
    float unk48;
    int unk4C;
    float unk50;
    int unk54;
    int unk58;
    int unk5C;
    int unk60;
    char unk64;
    int unk68;
    SpriteTweak *func_001ADEB0(void);
    void func_001ADDF0(int a);
    void func_001ADF30(int a, int b);
};

int func_001ACFE0(const u16 *callback, S_001ACFE0_Range *range, const char *fmt, void *b)
{
 unsigned int *args=(unsigned int *)b;
 char *end=range->end;
 char *out=range->cur;
 char sign, pad;
 char small[2];
 char buffer[512];
 char *s=0;
 int length,negative;
 int precision=0,width=0;
 unsigned int count=0;
 unsigned int value;
 char c=*fmt;
 if(c) do {
  if(c!='%') {
   if(out>=end) {
    range->cur=out;
    if(((int (*)(S_001ACFE0_Range *))callback)(range)) return -1;
    out=range->cur; end=range->end;
   }
   *out++=*fmt;
   ++count;
   goto next;
  }
  {
   int alternate,plus,space,right,emit,hasWidth,hasPrecision,kind;
   emit=right=1; space=plus=alternate=0; sign=0; pad=' ';
   ++fmt;
   if(!func_001EA23F(*fmt)) {
    for(;;) {
     if(*fmt=='-') right=0;
     else if(*fmt=='+') plus=1;
     else if(*fmt=='#') alternate=1;
     else if(*fmt==' ') space=1;
     else if(*fmt=='0') pad='0';
     else break;
     ++fmt;
    }
    if(func_001EA268(*fmt)) {
     width=*fmt++-'0';
     while(func_001EA268(*fmt)) width=width*10+*fmt++-'0';
     hasWidth=1;
    } else if(*fmt=='*') {
     width=(int)*args++; ++fmt; hasWidth=1;
     if(width<0) {width=-width;right=0;}
    } else hasWidth=0;
    if(*fmt=='.') {
     ++fmt; hasPrecision=1;
     if(func_001EA268(*fmt)) {
      precision=*fmt++-'0';
      while(func_001EA268(*fmt)) precision=precision*10+*fmt++-'0';
     } else if(*fmt=='*') {
      precision=(int)*args++; ++fmt;
      if(precision<0) precision=0;
     } else hasPrecision=0;
    } else hasPrecision=0;
   } else {hasWidth=hasPrecision=0;}
   if(!func_001E8BB0(fmt,D_0028C17C,3)) {fmt+=3;kind=0;}
   else if(*fmt=='q') {++fmt;kind=0;}
   else if(*fmt=='l') {++fmt;kind=1;}
   else if(*fmt=='h') {++fmt;kind=2;}
   else kind=3;
   c=*fmt;
   switch(c) {
   case 'u':
    value=*args++; if(kind==2) value=(unsigned short)value;
    negative=0; s=buffer+512;
    if(kind!=0) {s=func_001ACCF0(1,&negative,value,buffer+512,&length);goto unsigned_precision;}
    if(kind==0 && value>0xffffffffU) {
     int n=(int)value;
     do {int q=n/10;*--s=(char)(n-q*10)+'0';n=q;}while(n);
    } else {
     do {unsigned int q=value/10;--s;*s=(char)(value-q*10)+'0';value=q;} while(value);
    }
    length=buffer+512-s;
unsigned_precision:
    if(hasPrecision && length<precision) {int n=precision-length;length+=n;do {*--s='0';}while(--n);}
    break;
   case 'd': case 'i':
    value=*args++; if(kind==2) value=(short)value;
    if(kind==0) {
     s=buffer+512;
     if((int)value<=0x7fffffff) {
      negative=(int)value<0;if(negative)value=0-value;
      do {unsigned q=value/10;*--s=(char)(value-q*10)+'0';value=q;}while(value);
     } else {
      int n=(int)value;
      negative=n<0;if(negative)n=-n;
      do {int q=n/10;*--s=(char)(n-q*10)+'0';n=q;}while(n);
     }
     length=buffer+512-s;
    } else s=func_001ACCF0(kind<0,&negative,value,buffer+512,&length);
    if(hasPrecision && length<precision) {int n=precision-length;length+=n;do {*--s='0';}while(--n);}
    if(negative)sign='-'; else if(plus)sign='+';else if(space)sign=' ';
    break;
   case 'o': case 'x': case 'X': {
    unsigned int original=value=*args++;
    if(kind==2)value=(unsigned short)value;
    int shift=*fmt=='o'?3:4;
    char *digits=*fmt=='X'?D_0028C12C:D_0028C118;
    s=buffer+512;
    do {unsigned int digit=value&((1<<shift)-1);*--s=digits[digit];value>>=shift;}while(value);
    length=buffer+512-s;
    if(hasPrecision && length<precision) {int n=precision-length;length+=n;do {*--s='0';}while(--n);}
    if(alternate) {
     if(*fmt=='o') {if(*s!='0'){*--s='0';++length;}}
     else if(original) {*--s=*fmt;*--s='0';length+=2;}
    }
    break;
   }
   case 'p':
    ++fmt;
    if(!*fmt) goto done;
    if(*fmt!='p'){s=D_0028C168;length=8;sign=0;break;}
    value=*args++;s=buffer+512;
    do {*--s=D_0028C118[value&15];value>>=4;}while(value);
    length=buffer+512-s;pad=' ';break;
   case 'e': case 'E': case 'f': {
    s=func_001ACD40(hasPrecision?precision:6,*fmt,*(double *)args,alternate,&negative,buffer+1,&length);
    args+=2;
    if(negative)sign='-';else if(plus)sign='+';else if(space)sign=' ';
    break;
   }
   case 'g': case 'G': {
    int p=hasPrecision?precision:6;
    if(!p)precision=p=1;
    s=func_001ACB40(*(double *)args,p,buffer+1,alternate);
    args+=2;
    if(*s=='-'){sign='-';++s;}else if(plus)sign='+';else if(space)sign=' ';
    char *e;
    length=strlen(s);
    if(alternate && !func_001E9260(s,'.')){s[length++]='.';s[length]=0;}
    if(*fmt=='G'){e=func_001E9260(s,'e');if(e)*e='E';}
    break;
   }
   case 's':
    s=(char *)*args++;
    if(s) {length=strlen(s);if(hasPrecision && precision<length)length=precision;}
    else {s=D_0028C174;length=6;}
    pad=' ';break;
   case 'c': small[0]=(char)*args++;s=small;length=1;pad=' ';break;
   case '%': small[0]='%';s=small;length=1;pad=' ';break;
   case 'n':
    if(kind==2) *(short *)*args++=(short)count;
    else *(int *)*args++=count;
    emit=0;break;
   case 0: goto done;
   default: small[0]='%';small[1]=c;s=small;length=2;pad=' ';break;
   }
   if(sign && s!=D_0028C174 && s!=small){*--s=sign;++length;}
   if(hasWidth && right==1 && width>length) {
    if(pad=='0' && sign) {
     if(out>=end){range->cur=out;if(((int (*)(S_001ACFE0_Range *))callback)(range))return -1;out=range->cur;end=range->end;}
     *out++=*s++;++count;--length;--width;
    }
    do {
     if(out>=end){range->cur=out;if(((int (*)(S_001ACFE0_Range *))callback)(range))return -1;out=range->cur;end=range->end;}
     *out++=pad;++count;--width;
    }while(width>length);
   }
   if(emit==1) {
    int n=length;
    while(n) {
     if(out>=end){range->cur=out;if(((int (*)(S_001ACFE0_Range *))callback)(range))return -1;out=range->cur;end=range->end;}
     *out++=*s++;++count;--n;
    }
   }
   if(hasWidth && !right && width>length) {
    do {
     if(out>=end){range->cur=out;if(((int (*)(S_001ACFE0_Range *))callback)(range))return -1;out=range->cur;end=range->end;}
     *out++=pad;++count;--width;
    }while(width>length);
   }
  }
next:
  ++fmt;
  c=*fmt;
 } while(c);
done:
 range->cur=out;
 if(out>=end && ((int (*)(S_001ACFE0_Range *))callback)(range))return -1;
 return count;
}

int func_001ADCC0(char *buf, int count, int a3, int a4)
{
    S_001ACFE0_Range range;
    int n;

    if (count == 0) {
        return 0;
    }
    range.cur = buf;
    range.end = buf + count - 1;
    n = func_001ACFE0(&D_001ADCB0, &range, (const char *)a3, (unsigned int *)&a4);
    *range.cur = 0;
    if (n == -1) {
        n = count;
    }
    return n;
}

int func_001ADD20(char *buf, int count, int a3, void *a4)
{
    S_001ACFE0_Range range;
    int n;

    if (count == 0) {
        return 0;
    }
    range.cur = buf;
    range.end = buf + count - 1;
    n = func_001ACFE0(&D_001ADCB0, &range, (const char *)a3, (unsigned int *)a4);
    *range.cur = 0;
    if (n == -1) {
        n = count;
    }
    return n;
}

void func_001ADD80(S_func_001ADD80_arg0 *r)
{
    if (r == 0) {
        return;
    }
    if (r->unk6c < 0 || r->unk74 < 0) {
        r->unk6c = 0;
        r->unk74 = 0x10;
    }
    if (r->unk6c > 0x280 || r->unk74 > 0x280) {
        r->unk6c = 0x270;
        r->unk74 = 0x280;
    }
    if (r->unk70 < 0 || r->unk78 < 0) {
        r->unk70 = 0;
        r->unk78 = 0x10;
    }
    if (r->unk70 > 0x1c0 || r->unk78 > 0x1c0) {
        r->unk70 = 0x1b0;
        r->unk78 = 0x1c0;
    }
}

void SpriteTweak::func_001ADDF0(int a)
{
    C_00144640 *p = (C_00144640 *)func_001E8A44(0x14);
    C_00144640 *q;
    int saved;

    unk4 = p != 0 ? p->func_00144640() : 0;
    unk4->v1(a, D_002AA470);
    D_002A829C->func_00161680();
    unk8 = D_002A829C->unk14[unk4->unk4].unk4->unk54->unk18;
    unkC = D_002AA6C0->v7((int)&D_0028C1B0, 0);
    D_002AA6C0->v6(unkC, 0);
    saved = D_002ABE74;
    D_002ABE74 = 0;
    D_002AA6C0->func_001B2640();
    D_002ABE74 = saved;
    q = unk4;
    q->unk10 = this;
    q->unkC &= 0xfe;
}

SpriteTweak *SpriteTweak::func_001ADEB0(void)
{
    unk4 = 0;
    vtbl = &D_0028C1D0;
    unk40 = 1.0f;
    unk3C = 1.0f;
    unk50 = 1.0f;
    unk48 = 1.0f;
    unk38 = 0;
    unk34 = 0;
    unk4C = 0;
    unk44 = 0;
    unk68 = 0;
    unk64 = (char)0xff;
    unk60 = 0x80808080;
    unk5C = 0x80808080;
    unk58 = 0x80808080;
    unk54 = 0x80808080;
    unk10 = 0;
    unk14 = 0;
    unk1C = func_001FCF20(0x280, 0x1e0, 1, 1, 1, 0x12, 3);
    unk20 = func_001FCE50(unk1C, 0);
    return this;
}

void SpriteTweak::func_001ADF30(int a, int b)
{
    func_001ADDF0(a);
    unk18 = b;
    unk28 = (int)func_001FF3C0(0x60);
    func_0014A7B0(&D_002EFFD0, &D_002AA2D4);
    C_0014A520 *p = (C_0014A520 *)func_001E8A44(0xc);
    p = p != 0 ? p->func_0014A520((int)&D_002EFFD0) : 0;
    unk10 = p;
    p->func_0014A560((int)&D_0028C1F0, 0);
    C_00142C70 *q = (C_00142C70 *)func_001E8A44(0xf0);
    q = q != 0 ? q->func_00142C70() : 0;
    unk14 = q;
    q->func_00142C80((int)&D_0028C1DC, 0);
}

