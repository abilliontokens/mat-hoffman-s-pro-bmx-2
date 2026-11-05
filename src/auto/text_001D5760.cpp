/* 15 functions from 0x001D5760 to 0x001D6600, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern int D_0028F600;
extern char D_002A60B0[];
extern char D_002A5240[];
extern int D_002AA470;
void *func_001E8A44(int size);
extern "C" char *strcpy(char *, const char *);

struct Vec4_001D5760 {
    float x, y, z, w;
    Vec4_001D5760() {
        x = y = z = 0;
        w = 1.0f;
    }
};

struct C_001D5760_Obj {
    virtual void v0(int flags);
};

/* XboxScreenIcon */
struct C_001D5760 {
    void *vtbl;
    Vec4_001D5760 v4;
    Vec4_001D5760 v14;
    float f24;
    float f28;
    float f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    float f40;
    int f44;
    float f48;
    float f4c;
    float f50;
    int f54;
    unsigned char f58;
    char pad59[3];
    C_001D5760_Obj *f5c;
    C_001D5760_Obj *f60;
    C_001D5760();
    void func_001D57E0();
};

struct DXVSStreams_001D5760 {
    virtual void v0(int flags);
    virtual void v1(int arg, int d);
    DXVSStreams_001D5760 *func_00144640();
};

struct C_001D5E90 {
    char *f0;
    Vec4_001D5760 v4;
    Vec4_001D5760 v14;
    Vec4_001D5760 v24;
    float f34;
    int f38;
    int f3c;
    void *f40;
    int f44;
    int f48;
    unsigned short f4c;
    unsigned char f4e;
    unsigned char f4f;
    unsigned char f50;
    char pad51[3];
    int f54;
    int f58;
    DXVSStreams_001D5760 *f5c;
    C_001D5E90();
    void func_001D5F00(int param);
};
#include <string.h>
extern int D_0028F5F4;
extern int D_00284E94;

void func_001E891B(void *p);
void __stdcall func_00201100(void *p);

struct C_001D5AA0 {
    undefined4 func_001D5AA0(void);
};

struct C_001D6410Obj {
    virtual void destroy(int flags);
};

struct C_001D6410 {
    void *unk0;
    char pad4[0x54];
    C_001D6410Obj *unk58;
    C_001D6410Obj *unk5C;
    void func_001D6410(void);
};

extern int D_0028F600;

struct C_001D63D0 {
    void *vtbl;
    char pad4[0x58];
    C_001D6410Obj *unk5C;
    C_001D6410Obj *unk60;
    C_001D63D0 *func_001D63D0(unsigned int flags);
};

struct C_001D6380 {
    void *vtbl;
    char pad4[0x10];
    void *unk14;
    char pad18[0x4C];
    void *unk64;
    C_001D6380 *func_001D6380(unsigned int flags);
};

struct C_001D61E0Entry {
    char pad0[0xC];
    float fC;
    float f10;
    char pad14[6];
    short s1A;
    int f1C;
};

struct C_001D61E0Scale {
    char pad0[0xC];
    int fC;
};

struct C_001D61E0Owner {
    char pad0[0x58];
    C_001D61E0Entry *tbl[1];
    C_001D61E0Scale *func_0018C070(void);
};

struct C_001D61E0 {
    unsigned char *unk0;
    char pad4[0x30];
    float unk34;
    char pad38[8];
    C_001D61E0Owner *unk40;
    int func_001D61E0(void);
};

struct C_001D6190 {
    void func_001D5FA0(int a, int b, int c, int d);
    void func_001D6190(int a, const char *s, int b);
};

extern float D_00275544;

static inline void FloatToInt(int *out, float f)
{
    int * volatile p = out;

    *p = _mm_cvttss_si32(*(__m128 *)&f);
}

struct C_001D6290Sub {
    short s0;
    short pad2;
    short s4;
    short pad6;
    int f8;
};

struct C_001D6290Entry {
    char pad0[4];
    float f4;
    float f8;
    char padC[8];
    C_001D6290Sub f14;
};

struct C_001D6290Scale {
    char pad0[8];
    int f8;
};

struct C_001D6290Owner {
    char pad0[0x58];
    C_001D6290Entry *tbl[1];
    C_001D6290Scale *func_0018C070(void);
};

struct C_001D6290 {
    unsigned char *unk0;
    char pad4[0x30];
    float unk34;
    char pad38[8];
    C_001D6290Owner *unk40;
    char pad44[0xc];
    unsigned char unk50;
    int func_001D6290(void);
};


C_001D5760::C_001D5760() : vtbl(&D_0028F600)
{
    v4.x = 0;
    v4.y = 0;
    v4.z = 1.0f;
    v4.w = 1.0f;
    v14.x = 0;
    v14.y = 0;
    v14.z = 1.0f;
    v14.w = 1.0f;
    f24 = 1.0f;
    f28 = 1.0f;
    f2c = 1.0f;
    f30 = 0;
    f34 = 0;
    f38 = -1;
    f3c = 0;
    f40 = 1.0f;
    f44 = 0;
    f48 = 1.0f;
    f4c = 1.0f;
    f50 = 1.0f;
    f5c = 0;
    f60 = 0;
    f58 = (f58 & 0xf7) | 7;
}

void C_001D5760::func_001D57E0()
{
    vtbl = &D_0028F600;
    if (f5c != 0) {
        f5c->v0(1);
    }
    if (f60 != 0) {
        f60->v0(1);
    }
}

undefined4 C_001D5AA0::func_001D5AA0(void)
{
  extern undefined4 D_002A829C;
  extern undefined4 D_002AA6C0;
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(short *)(*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x5c) + 4) * 0x10 + 4 +
                                       *(int *)(D_002A829C + 0x14)) + 0x54) + 0x18) * 0x10 + 4 +
          *(int *)(D_002AA6C0 + 0x14));
}

void C_001D5E90::func_001D5F00(int param)
{
    char buf[260];
    DXVSStreams_001D5760 *m;

    f0 = (char *)func_001E8A44(f4f + 1);
    strcpy(buf, D_002A60B0);
    strcpy(D_002A60B0, D_002A5240);
    m = (DXVSStreams_001D5760 *)func_001E8A44(0x14);
    f5c = m ? m->func_00144640() : 0;
    f5c->v1(param, D_002AA470);
    strcpy(D_002A60B0, buf);
}

C_001D5E90::C_001D5E90()
{
    f34 = 1.0f;
    f0 = 0;
    f38 = 0;
    f3c = 0;
    f40 = 0;
    f44 = 0;
    f48 = -1;
    f4c = 0xff;
    f4e &= 0xc0;
    f4f = 0;
    f50 = 0;
    f54 = 0;
    f5c = 0;
    f58 = 0;
}


void C_001D6190::func_001D6190(int a, const char *s, int b)
{
    if (s != 0) {
        func_001D5FA0(a, b, strlen(s), (int)s);
    } else {
        func_001D5FA0(a, b, 0x28, 0);
    }
}

int C_001D61E0::func_001D61E0(void)
{
    int result = 0;
    C_001D61E0Entry *e = unk40->tbl[*unk0];

    if (e == 0) {
        C_001D61E0Entry **p = unk40->tbl;
        do {
            e = *p++;
        } while (e == 0);
    }
    if (e->f1C == 0) {
        float d = e->f10 - e->fC;
        result = (int)((float)unk40->func_0018C070()->fC * unk34 * d);
    } else {
        result = (int)((float)(e->s1A + 1) * unk34);
    }
    return result;
}

C_001D6380 *C_001D6380::func_001D6380(unsigned int flags)
{
    vtbl = (void *)&D_0028F5F4;
    if (unk64 != 0) {
        func_001E891B(unk64);
    }
    if (unk14 != 0) {
        func_00201100(unk14);
    }
    vtbl = (void *)&D_00284E94;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_001D63D0 *C_001D63D0::func_001D63D0(unsigned int flags)
{
    vtbl = (void *)&D_0028F600;
    if (unk5C != 0) {
        unk5C->destroy(1);
    }
    if (unk60 != 0) {
        unk60->destroy(1);
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001D6410::func_001D6410(void)
{
    if (unk0 != 0) {
        func_001E891B(unk0);
    }
    if (unk5C != 0) {
        unk5C->destroy(1);
    }
    if (unk58 != 0) {
        unk58->destroy(1);
    }
}

