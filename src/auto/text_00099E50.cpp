/* 4 functions from 0x00099E50 to 0x0009A290, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0009A0E0 {
    void func_0009A0E0(int param_1);
};

void *func_001E8A44(int size);
void func_001E891B(void *p);

/* string table loader: copies the text for a key into dst (at most size - 1 chars), 0 if not found */
struct C_00168550 {
    int func_00168550(const char *key, char *dst, int size);
};

/* hash table mapping a key to an index */
struct C_000979C0 {
    int func_000979C0(char *key, int *out);
};

struct S_0009A1F0_Entry {
    char *str;
    int pad4;
};

struct S_0009A1F0_Table {
    int f0;
    S_0009A1F0_Entry *f4;
    char pad8[0x24];
    C_000979C0 *f2C;
};

struct S_0009A100_Mid {
    char pad0[0x48];
    int f48;
};

struct S_00099E50_Cfg {
    char pad0[0x124];
    int f124;
};

struct S_0009A1F0_Root {
    char pad0[0x2a4];
    S_00099E50_Cfg *f2a4;
    char pad2a8[0x38];
    S_0009A100_Mid *f2e0;
    char pad2e4[4];
    S_0009A1F0_Table *f2e8;
};

/* one of the objects the three lists hold */
struct S_0009A100_Obj {
    char pad0[0x1A4];
    int f1A4;
    int f1A8;
    char pad1AC[8];
    int f1B4;
    char pad1B8[0x4728];
    int f48E0;
};

struct C_0005C0B0 {
    void func_0005C0B0(int a, int list, int index);
};

struct S_0009A100_Holder {
    char pad0[0x68];
    C_0005C0B0 *f68;
};

/* the block this fills in: three 0x3c-byte records per slot, and one count
   per slot after them */
struct S_0009A100_Rec {
    char pad0[0xC];
    int items[12];
};

struct S_0009A100_Out {
    S_0009A100_Rec recs[24];
    char pad5A0[0xC];
    int counts[8];
};

struct C_0009A100 {
    S_0009A100_Obj **f0;
    S_0009A100_Obj **f4;
    S_0009A100_Obj **f8;
    int fC;
    int f10;
    int f14;
    int f18;
    char pad1C[0x17C];
    S_0009A100_Holder *f198;
    /* the three lists and their lengths, by index */
    S_0009A100_Obj **List(int which) {
        switch (which) {
        case 0:
            return f0;
        case 1:
            return f4;
        case 2:
            return f8;
        }
        return 0;
    }
    int Count(int which) {
        switch (which) {
        case 0:
            return fC;
        case 1:
            return f10;
        case 2:
            return f14;
        }
        return 0;
    }
    void func_00098E80(int which);
    void func_0009A100(S_0009A100_Out *out, int slot);
    void func_00099E50(S_0009A100_Out *out, int slot);
};

extern S_0009A1F0_Root *D_002A8490;


void C_0009A100::func_00099E50(S_0009A100_Out *out, int slot)
{
    int i;
    int j;
    int k;
    volatile int n;
    int ok;
    int last;
    int *fp;
    S_0009A100_Obj **lp;
    S_0009A100_Obj **list;
    S_0009A100_Obj *o;

    last = 0;
    for (i = 0; i < 3; i++) {
        j = 0;
        func_00098E80(i);
        list = List(i);
        n = Count(i);
        ok = 1;
        if (n >= 4) {
            fp = out->recs[slot * 3 + i].items + 1;
            lp = list + 2;
            for (k = 3; k < n; k += 4) {
                o = lp[-2];
                if (fp[-1] != 0) {
                    o->f48E0 = 1;
                    o->f1B4 = 1;
                    if (D_002A8490->f2a4 != 0) {
                        o->f1A4 = D_002A8490->f2a4->f124;
                    }
                } else if (o->f1A8 == 0) {
                    ok = 0;
                }
                o = lp[-1];
                if (fp[0] != 0) {
                    o->f48E0 = 1;
                    o->f1B4 = 1;
                    if (D_002A8490->f2a4 != 0) {
                        o->f1A4 = D_002A8490->f2a4->f124;
                    }
                } else if (o->f1A8 == 0) {
                    ok = 0;
                }
                o = lp[0];
                if (fp[1] != 0) {
                    o->f48E0 = 1;
                    o->f1B4 = 1;
                    if (D_002A8490->f2a4 != 0) {
                        o->f1A4 = D_002A8490->f2a4->f124;
                    }
                } else if (o->f1A8 == 0) {
                    ok = 0;
                }
                o = lp[1];
                if (fp[2] != 0) {
                    o->f48E0 = 1;
                    o->f1B4 = 1;
                    if (D_002A8490->f2a4 != 0) {
                        o->f1A4 = D_002A8490->f2a4->f124;
                    }
                } else if (o->f1A8 == 0) {
                    ok = 0;
                }
                j += 4;
                fp += 4;
                lp += 4;
            }
        }
        if (j < n) {
            fp = (int *)out + ((slot * 3 + i) * 15 + j + 3);
            do {
                if (*fp != 0) {
                    o = list[j];
                    o->f48E0 = 1;
                    o->f1B4 = 1;
                    if (D_002A8490->f2a4 != 0) {
                        o->f1A4 = D_002A8490->f2a4->f124;
                    }
                } else if (list[j]->f1A8 == 0) {
                    ok = 0;
                }
                j++;
                fp++;
            } while (j < n);
        }
        if (ok != 0) {
            last = i + 1;
        }
    }
    f18 = last;
}

void C_0009A0E0::func_0009A0E0(int param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x18) != 3) {
    *(int *)(param_1 + 4) =
         *(int *)(param_1 + 4) + *(int *)(in_ECX + 0x20 + *(int *)(in_ECX + 0x18) * 4);
  }
  return;
}

void C_0009A100::func_0009A100(S_0009A100_Out *out, int slot)
{
    int i;
    int j;
    int count;
    S_0009A100_Obj **list;
    int n;
    S_0009A100_Obj *o;

    count = 0;
    for (i = 0; i < 3; i++) {
        j = 0;
        list = List(i);
        n = Count(i);
        for (j = 0; j < n; j++) {
            o = list[j];
            if (o->f48E0 != 0) {
                f198->f68->func_0005C0B0(D_002A8490->f2e0->f48, i, j);
                o = list[j];
                if (o->f1A8 != 0) {
                    count++;
                }
            }
            out->recs[slot * 3 + i].items[j] = o->f48E0;
        }
        out->counts[slot] = count;
    }
}

void func_0009A1F0(C_00168550 *tbl, const char *key, const char *fallback, char *dst, int size)
{
    int n = size;
    char *buf = (char *)func_001E8A44(n);
    S_0009A1F0_Table *t;
    C_000979C0 *hash;
    char *src;
    char c;

    n--;
    if (tbl->func_00168550(key, buf, n)) {
        t = D_002A8490->f2e8;
        hash = t->f2C;
        size = 0;
        hash->func_000979C0(buf, &size);
        src = t->f4[size].str;
        do {
            c = *src++;
            *dst++ = c;
        } while (c != 0);
    } else {
        tbl->func_00168550(fallback, dst, n);
    }
    func_001E891B(buf);
}

