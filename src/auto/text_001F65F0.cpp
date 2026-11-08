/* 1 function from 0x001F65F0 to 0x001F6651, found by Ghidra. */
#include "common.h"

int func_001F65F0(const unsigned char *first, const unsigned char *last, int count)
{
    unsigned char f = 0;
    unsigned char l = 0;
    if (count) {
        do {
            f = *first;
            l = *last;
            if (f == 0 || l == 0) {
                break;
            }
            first++;
            last++;
            if (f >= 'A' && f <= 'Z') {
                f += 'a' - 'A';
            }
            if (l >= 'A' && l <= 'Z') {
                l += 'a' - 'A';
            }
            if (f != l) {
                goto diff;
            }
        } while (--count);
        f = l;
diff:
        if (f != l) {
            return f < l ? -1 : 1;
        }
    }
    return 0;
}
