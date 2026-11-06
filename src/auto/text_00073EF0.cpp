/* 1 function from 0x00073EF0 to 0x00074EB0, found by Ghidra. */
#include "common.h"
struct Font_73 { float func_0018C210(); };
struct Lookup_73 { Font_73 **func_0018C160(int id); };
struct Data_73 {
    char pad0[0x7C0];
    int f7C0;
    char pad7C4[0x7C8 - 0x7C4];
    int f7C8;
    char pad7CC[0x7D8 - 0x7CC];
    int f7D8;
    char pad7DC[0x7E8 - 0x7DC];
    int f7E8;
    char pad7EC[0xAC8 - 0x7EC];
    int fAC8;
    char padACC[0xE98 - 0xACC];
    int fE98;
    char padE9C[0xF20 - 0xE9C];
    int fF20;
    char padF24[0xFC0 - 0xF24];
    int fFC0;
    char padFC4[0xFD8 - 0xFC4];
    int fFD8;
    char padFDC[0x1158 - 0xFDC];
    int f1158;
};
struct Sub_73 { char pad0[4]; Data_73 *f4; };
struct Root_73 { char pad0[0x2E8]; Sub_73 *f2E8; Lookup_73 *f2EC; };
struct Img_73 {
    char pad0[4];
    char pad4[0x24];
    int width;
    int height;
    char pad30[8];
    unsigned int color;
    float a, b, c, d;
    float w, h;
    char pad54[4];
    unsigned char flags;
    Img_73 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
};
struct Txt_73 {
    int pad0, x, y;
    char padC[0x38];
    int align;
    unsigned int color;
    char pad4c[2];
    unsigned char flags;
    Txt_73 *func_001D5E90();
    void func_001D5FA0(int font, char *name, int size, int z);
    void func_001D6190(int font, int text, char *name);
    void func_0005E840(int str);
};
struct Obj_73 {
    Obj_73 *func_001B12C0(int a);
    void func_001B1580(int a, int b, int c, int d);
    void func_001B1A30(int a, float b, int c);
    void func_001B2270(int a);
    void func_001B19A0(int a);
};
struct C_00073EF0 {
    char pad0[0x64];
    Txt_73 *f64[2];
    char pad6C[4];
    Txt_73 *f70[2];
    char pad78[4];
    Txt_73 *f7C[2];
    char pad84[4];
    Txt_73 *f88[2];
    char pad90[4];
    Obj_73 *f94;
    Obj_73 *f98;
    Obj_73 *f9C;
    int fA0;
    int fA4;
    int fA8;
    Img_73 *fAC;
    Img_73 *fB0;
    Img_73 *fB4[5];
    Img_73 *fC8[5];
    Img_73 *fDC[6];
    Img_73 *fF4;
    Txt_73 *fF8;
    Txt_73 *fFC;
    Txt_73 *f100;
    Txt_73 *f104;
    char pad108[0x10];
    Txt_73 *f118;
    char pad11C[4];
    void *f120;
    char pad124[0x74];
    Img_73 *f198;
    Img_73 *f19C;
    Img_73 *f1A0;
    Img_73 *f1A4;
    char pad1A8[0x14];
    Txt_73 *f1BC;
    C_00073EF0 *func_00073EF0(void *a0);
    void func_001577A0(void *obj, int flags);
};
extern Root_73 *D_002A8490;
extern char D_002786A0[], D_00278690[], D_00278678[], D_00278658[], D_00278648[], D_00278638[], D_00278624[], D_00278608[], D_00278600[], D_002786B0[];
extern char D_002A60B0[], D_002A5FA8[], D_002A5870[], D_00275678[];
extern char D_00278664[];
extern int D_0028F5E0, D_0028F5DC;
extern float D_00278650, D_002757F0, D_00278870, D_0027886C, D_00276DD4, D_002756C8, D_00278DC4, D_00278DC0;
extern "C" void *func_001E8A44(unsigned int size);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);

static __forceinline void pos73(Txt_73 *p, int x, int y) { if (p->x != x || p->y != y) { p->y = y; p->x = x; p->flags |= 6; } }
static __forceinline void align73(Txt_73 *p, int a) { if (p->align != a) { p->align = a; p->flags |= 6; } }
static __forceinline void color73(Txt_73 *p, unsigned int c) { if (p->color != c) { p->flags |= 8; p->color = (p->color & (c | 0xff000000)) | (c & 0xffffff); } }
static __forceinline void uv73(Img_73 *p) { float a = 127.0f * p->w; p->flags |= 4; p->a = a; p->b = 0.0f * p->w; p->c = 15.0f * p->h; p->d = 0.0f * p->h; }
static __forceinline void width73(Img_73 *p, int v) { if (p->width != v) { p->width = v; p->flags |= 1; } }
static __forceinline void height73(Img_73 *p, int v) { if (p->height != v) { p->height = v; p->flags |= 1; } }
