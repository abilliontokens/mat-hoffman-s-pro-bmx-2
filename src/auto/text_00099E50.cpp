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

struct S_0009A1F0_Root {
    char pad0[0x2e0];
    S_0009A100_Mid *f2e0;
    char pad2e4[4];
    S_0009A1F0_Table *f2e8;
};

/* one of the objects the three lists hold */
struct S_0009A100_Obj {
    char pad0[0x1A8];
    int f1A8;
    char pad1AC[0x4734];
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
    char pad18[0x180];
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
    void func_0009A100(S_0009A100_Out *out, int slot);
};

extern S_0009A1F0_Root *D_002A8490;


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
    int *dst;
    S_0009A100_Obj **list;
    int n;
    S_0009A100_Obj *o;

    count = 0;
    for (i = 0; i < 3; i++) {
        j = 0;
        switch (i) {
        case 0:
            list = f0;
            break;
        case 1:
            list = f4;
            break;
        case 2:
            list = f8;
            break;
        default:
            list = 0;
            break;
        }
        switch (i) {
        case 0:
            n = fC;
            break;
        case 1:
            n = f10;
            break;
        case 2:
            n = f14;
            break;
        default:
            n = j;
            break;
        }
        if (n > j) {
            dst = out->recs[slot * 3 + i].items;
            do {
                o = list[j];
                if (o->f48E0 != 0) {
                    f198->f68->func_0005C0B0(D_002A8490->f2e0->f48, i, j);
                    o = list[j];
                    if (o->f1A8 != 0) {
                        count++;
                    }
                }
                *dst = o->f48E0;
                j++;
                dst++;
            } while (j < n);
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

