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

struct S_0009A1F0_Root {
    char pad0[0x2e8];
    S_0009A1F0_Table *f2e8;
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

