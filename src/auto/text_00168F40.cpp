/* 13 functions from 0x00168F40 to 0x00169E10, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
extern "C" unsigned int strlen(const char *s);
#pragma intrinsic(strlen)
extern "C" char *strcpy(char *dst, const char *src);
#pragma intrinsic(strcpy)
extern int D_00288084;
extern char D_0028802C[];
int func_001E9040(const char *, const char *);
void *func_001E8920(void *, const void *, int);
void *func_001E83E8(void *, int);
void *func_001E8AA5(int);
extern char D_0028803C[];
void func_001E891B(void *p);
void func_001E8390(void *p);
void func_00168210(int type, float val, void *p);
float func_001E9649(float x);

struct C_00157660 {
    void func_00157660(void);
};

/* the engine's file wrapper (D_002BEAAC) */
struct C_0013B210 {
    int func_0013C6E0(int h, char *buf, int size);
    void func_0013AF80(int h);
    int func_0013AFD0(int h);
    void func_0013C110(int h);
    void func_0013AFF0(int a, int b, int c);
    void func_0013C8A0(int h, void *buf, int size, int count);
    int func_0013C9F0(int name, const char *mode);
};
extern char D_00288038[];
extern char D_00275FB4[];
extern "C" int strcmp(const char *a, const char *b);
#pragma intrinsic(strcmp)
extern C_0013B210 *D_002BEAAC;

/* table row of C_00168F40::f18 */
struct S_00168F40_Entry {
    int offset;
    int size;
    char pad8[0x408];
};

/* table row of C_00168F40::f4B8 */
struct S_00168F40_Index {
    int offset;
    int unk4;
};

/* slot row of C_00168F40::slots; kind 2 owns ptr */
struct S_00168F40_Slot {
    int kind;
    void *ptr;
};

/* 8-byte string tokenizer state (strtok-like) */
struct S_00168F40_Tokenizer {
    double align;
    void Tokenizer_SetString(const char *str);
    char *func_001B4A70(const char *delims);
};

void func_001681A0(const char *s, void *out);

struct C_00168F40 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    S_00168F40_Entry *f18;
    int f1C;
    void **f20;
    char pad24[0x400];
    int f424;
    int f428;
    int f42C;
    int f430;
    int slotCount;
    S_00168F40_Slot slots[16];
    S_00168F40_Index *f4B8;
    int f4BC;
    void *f4C0;
    unsigned f4C4;
    void *f4C8;
    int func_00169710(char *name);
    void func_001684B0(void);
    void func_001684F0(int count);
    int func_00168300(int id);
    int func_00169490(int name, int flag);
    void func_001692E0(int h);
    int func_00168F40(int id);
    ~C_00168F40();
    void func_001690D0(char *src, char *dst);
    int func_00169A50(char *line);
};

struct S_00169C50_Vec { float x, y, z, w; };

struct ParticleEmitter {
    void *vtbl;
    char pad4[0x1b8];
    void *unk1BC;
    void func_00169DE0(void);
    void func_00157600(int a);
    ParticleEmitter *func_00169C50(int a);
};

struct Entry_00169010 {
    int type;
    float val;
};

struct C_00169010 {
    char pad0[0x434];
    int count;
    Entry_00169010 e[1];
    int func_00169010(int idx, float *out);
    int func_00169090(int idx, void *p);
};

/* virtual slots 6, 30 and 32 of the object func_00169C00 is handed */
struct VT_00169C00 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32();
};

int C_00168F40::func_00168F40(int id)
{
    int idx;
    int buf;

    idx = func_00168300(id);
    if (func_00168300(id) != -1) {
        if (f4 != 0) {
            D_002BEAAC->func_0013AFF0(f0, f4B8[idx].offset, 0);
            buf = 0;
            D_002BEAAC->func_0013C8A0(f0, &buf, 4, 1);
            f430 = 0;
            f424 = 1;
            f42C = buf;
            return buf;
        }
        D_002BEAAC->func_0013AFF0(f0, f18[idx].offset, 0);
        f430 = 0;
        f424 = 1;
        f42C = f18[idx].size;
        return f42C;
    }
    return 0;
}

int C_00169010::func_00169010(int idx, float *out)
{
    Entry_00169010 ent;

    if (idx > count) {
        return 0;
    }
    ent = e[idx];
    switch (ent.type) {
    case 0:
        *out = ent.val;
        return 1;
    case 1:
        *out = ent.val;
        return 1;
    case 2:
        *out = func_001E9649(ent.val);
        return 1;
    }
    return 1;
}

int C_00169010::func_00169090(int idx, void *p)
{
    if (idx >= count) {
        return 0;
    }
    func_00168210(e[idx].type, e[idx].val, p);
    return 1;
}

void __stdcall func_001690D0(char *src, char *dst)
{
    int len;
    int i;
    int j;
    int depth;
    int quote;
    char ch;

    quote = 0;
    depth = 0;
    len = strlen(src);
    i = 0;
    j = 0;
    *dst = 0;
    if (len != 0 && len > 0) {
        do {
            ch = src[i];
            switch (ch) {
            case '[':
                depth++;
                break;
            case '"':
                quote = 1 - quote;
                break;
            case ']':
                depth--;
                break;
            case '\t':
            case '\n':
            case '\r':
            case ' ':
                if (depth <= 0 && quote == 0) {
                    goto next;
                }
                break;
            }
            dst[j] = ch;
            j++;
        next:
            i++;
        } while (i < len);
    }
    dst[j] = 0;
}

C_00168F40::~C_00168F40()
{
    int i;

    if (f0 != -1) {
        D_002BEAAC->func_0013AF80(f0);
        D_002BEAAC->func_0013C110(f0);
        f0 = -1;
    }
    if (f20 != 0) {
        if (*f20 != 0) {
            func_001E8390(*f20);
        }
        func_001E8390(f20);
    }
    f1C = 0;
    f20 = 0;
    if (f18 != 0) {
        func_001E8390(f18);
        f18 = 0;
        f10 = 0;
    }
    for (i = 0; i < slotCount; i++) {
        if (slots[i].kind == 2) {
            func_001E8390(slots[i].ptr);
        }
        slots[i].ptr = 0;
    }
    slotCount = 0;
    if (f4C8 != 0) {
        func_001E8390(f4C8);
        f4C8 = 0;
    }
    if (f4B8 != 0) {
        func_001E8390(f4B8);
        f4B8 = 0;
    }
    if (f4C0 != 0) {
        func_001E8390(f4C0);
    }
}

void C_00168F40::func_001692E0(int h)
{
 char name[0x400];
 char clean[0x400];
 char line[0x400];
 int n=0;
 if (D_002BEAAC->func_0013C6E0(h,line,0x400)) {
  do {
   func_001690D0(line,clean);
   if(clean[0]=='[') {
    int len=func_001E9040(clean+1,D_0028802C);
    func_001E8920(name,clean+1,len);
    name[len]=0;
    if(func_00168300((int)name)==-1) {
     if(f18) {
      if(f10>=f14) {
       f14+=10;
       f18=(S_00168F40_Entry *)func_001E83E8(f18,f14*0x410);
      }
     } else {
      f18=(S_00168F40_Entry *)func_001E8AA5(0x28a0);
      f14=10;
     }
     strcpy(f18[f10].pad8,name);
     f18[f10].offset=D_002BEAAC->func_0013AFD0(h);
     f18[f10].size=n;
     if(f10>0) f18[f10-1].size=n-f18[f10-1].size-1;
     f10++;
    }
   }
   n++;
  } while(D_002BEAAC->func_0013C6E0(h,line,0x400));
 }
 if(f10>0) f18[f10-1].size=n-f18[f10-1].size-1;
}

int C_00168F40::func_00169490(int name, int flag)
{
    char tag[7];
    unsigned int count;
    char *p;
    int i;
    int h;

    if (f18 != 0) {
        func_001E8390(f18);
        f18 = 0;
        f10 = 0;
    }
    if (f0 != -1) {
        D_002BEAAC->func_0013C110(f0);
        f0 = -1;
    }
    if (f4B8 != 0) {
        func_001E8390(f4B8);
        f4B8 = 0;
    }
    if (f4C0 != 0) {
        func_001E8390(f4C0);
        f4C0 = 0;
    }
    if (flag != 0) {
        h = D_002BEAAC->func_0013C9F0(name, D_00288038);
        f0 = h;
        if (h == -1) {
            return 0;
        }
        f8 = 1;
        fC = 1;
        f428 = 0;
        f4 = 0;
        func_001692E0(h);
    } else {
        f0 = D_002BEAAC->func_0013C9F0(name, D_00275FB4);
        if (f0 == -1) {
            return 0;
        }
        f428 = 0;
        f8 = 1;
        fC = 0;
        D_002BEAAC->func_0013C8A0(f0, tag, 7, 1);
        tag[6] = 0;
        if (strcmp(tag, "BINARY") == 0) {
            f4 = 1;
            D_002BEAAC->func_0013C8A0(f0, &flag, 4, 1);
            if (flag != 1) {
                D_002BEAAC->func_0013C110(f0);
                f0 = -1;
                return 0;
            }
            D_002BEAAC->func_0013C8A0(f0, &count, 4, 1);
            if (count < 1) {
                D_002BEAAC->func_0013C110(f0);
                f0 = -1;
                return 0;
            }
            f10 = count;
            f4C8 = func_001E8AA5(count << 10);
            if (f4C8 == 0) {
                D_002BEAAC->func_0013C110(f0);
                f0 = -1;
                return 0;
            }
            p = (char *)f4C8;
            i = 0;
            do {
                name = 0;
                D_002BEAAC->func_0013C8A0(f0, &name, 4, 1);
                D_002BEAAC->func_0013C8A0(f0, p, name, 1);
                p += 0x400;
                i++;
            } while (i != f10);
            f4BC = f10 << 3;
            f4B8 = (S_00168F40_Index *)func_001E8AA5(f4BC);
            D_002BEAAC->func_0013C8A0(f0, f4B8, f4BC, 1);
            return 1;
        }
        f4 = 0;
        D_002BEAAC->func_0013AFF0(f0, 0, 0);
        func_001692E0(f0);
    }
    f424 = 0;
    return 1;
}

int C_00168F40::func_00169710(char * volatile name)
{
    C_00168F40 * volatile self = this;
    C_00168F40 *q;
    struct {
        int tmp;
        volatile int lim;
        volatile int res;
        volatile int len;
    } t;
    int idx;
    int n;
    int count;
    int i;
    int k;
    int r;
    int L;
    char line[0x400];
    char clean[0x400];

    if (((volatile C_00168F40 *)this)->f8 == 0) {
        return 0;
    }
    if (fC != 0) {
        D_002BEAAC->func_0013AF80(f0);
    }
    q = self;
    idx = q->func_00168300((int)name);
    if (idx == -1) {
        return 0;
    }
    q = self;
    if (q->f4 != 0) {
        int off;
        unsigned size;

        t.len = strlen(name);
        t.lim = 0x3ff;
        r = t.lim;
        L = t.len;
        if (r > L) {
            r = L;
        }
        t.res = r;
        n = t.res;
        func_001E8920(self->pad24, name, n);
        self->pad24[n] = 0;
        q = self;
        off = q->f4B8[idx].offset;
        size = q->f4B8[idx].unk4;
        if (q->f4C0 != 0) {
            if (q->f4C4 < size) {
                ((volatile C_00168F40 *)q)->f4C4 = size;
                q = self;
                q->f4C0 = func_001E83E8(q->f4C0, q->f4C4);
            }
        } else {
            ((volatile C_00168F40 *)q)->f4C4 = size;
            q = self;
            q->f4C0 = func_001E8AA5(q->f4C4);
        }
        q = self;
        D_002BEAAC->func_0013AFF0(q->f0, off, 0);
        t.tmp = 0;
        q = self;
        D_002BEAAC->func_0013C8A0(q->f0, &t.tmp, 4, 1);
        self->f1C = t.tmp;
        q = self;
        D_002BEAAC->func_0013C8A0(q->f0, q->f4C0, q->f4C4, 1);
        return 1;
    }
    D_002BEAAC->func_0013AFF0(q->f0, q->f18[idx].offset, 0);
    q = self;
    if (q->f20 != 0) {
        q->func_001684B0();
    }
    q = self;
    count = q->f18[idx].size;
    t.len = strlen(name);
    t.lim = 0x3ff;
    r = t.lim;
    L = t.len;
    if (r > L) {
        r = L;
    }
    t.res = r;
    n = t.res;
    func_001E8920(self->pad24, name, n);
    self->pad24[n] = 0;
    q = self;
    for (i = 0; i < count; i++) {
        D_002BEAAC->func_0013C6E0(q->f0, line, 0x400);
        q = self;
        q->func_001690D0(line, clean);
        if (clean[0] != 0 && clean[0] != ';') {
            q->f1C++;
            q = self;
        }
    }
    D_002BEAAC->func_0013AFF0(q->f0, q->f18[idx].offset, 0);
    q = self;
    q->func_001684F0(q->f1C);
    q = self;
    k = 0;
    for (i = 0; i < count; i++) {
        D_002BEAAC->func_0013C6E0(q->f0, line, 0x400);
        q = self;
        q->func_001690D0(line, clean);
        if (clean[0] != 0 && clean[0] != ';') {
            strcpy((char *)q->f20[k], clean);
            k++;
            q = self;
        }
    }
    q->f424 = 0;
    return 1;
}

int C_00168F40::func_00169A50(char *line)
{
    char clean[0x400];
    char raw[0x400];
    S_00168F40_Tokenizer tok;
    char *s;
    int i;

    if (f8 == 0) {
        return 0;
    } else if (f424 == 0) {
        return 0;
    } else if (f430 > f42C - 1) {
        return 0;
    } else {
        for (i = 0; i < slotCount; i++) {
            if (slots[i].kind == 2) {
                func_001E8390(slots[i].ptr);
            }
            slots[i].ptr = 0;
        }
        D_002BEAAC->func_0013C6E0(f0, raw, 0x400);
        if (line != 0) {
            strcpy(line, raw);
        }
        func_001690D0(raw, clean);
        tok.Tokenizer_SetString(clean);
        s = tok.func_001B4A70(D_0028803C);
        slotCount = 0;
        while (s != 0) {
            func_001681A0(s, &slots[slotCount]);
            s = tok.func_001B4A70(D_0028803C);
            slotCount++;
        }
        f430++;
        return slotCount;
    }
}

void func_00169B90(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void func_00169C00(void *a0, void *a1, VT_00169C00 *obj, int flag)
{
    if (flag != 0) {
        obj->v32();
        obj->v30();
        obj->v6();
    }
}

ParticleEmitter *ParticleEmitter::func_00169C50(int a)
{
 int *u, *p;
 S_00169C50_Vec v;
 func_00157600(a);
 u=(int *)this;
 vtbl=&D_00288084;
p=&u[36/4]; p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
p=&u[52/4]; p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
p=&u[68/4]; p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
p=&u[84/4]; p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
v.w=1.0f; v.x=0; v.y=0; v.z=0;
*(S_00169C50_Vec *)&u[0x24/4]=v;
*(S_00169C50_Vec *)&u[0x34/4]=v;
v.w=1.0f; v.x=0; v.y=0; v.z=0;
*(S_00169C50_Vec *)&u[0x44/4]=v;
v.w=1.0f; v.x=0; v.y=0; v.z=0;
*(S_00169C50_Vec *)&u[0x54/4]=v;
u[100/4]=0;
u[104/4]=0;
u[368/4]=1165623296;
u[372/4]=1086324736;
u[376/4]=1065353216;
u[380/4]=1092616192;
u[384/4]=0;
u[388/4]=0;
u[452/4]=0;
u[456/4]=0;
u[392/4]=0;
((unsigned char *)this)[0x1cc]=(((unsigned char *)this)[0x1cc]&0xf9)|1;
u[396/4]=16777215;
u[400/4]=0;
u[404/4]=0;
u[408/4]=0;
u[424/4]=0;
u[428/4]=0;
u[464/4]=0;
u[468/4]=0;
u[472/4]=0;
u[476/4]=0;
u[480/4]=0;
u[484/4]=0;
u[488/4]=0;
u[492/4]=0;
u[444/4]=0;
u[432/4]=-1;
return this;
}

void ParticleEmitter::func_00169DE0(void)
{
    void *p = unk1BC;

    vtbl = (void *)&D_00288084;
    if (p != 0) {
        func_001E891B(p);
    }
    ((C_00157660 *)this)->func_00157660();
}
