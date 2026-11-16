/*Input: l r. Output: maximum a XOR b for l <= a <= b <= r. */
#include <stdio.h>
int main(void) {
    int l, r;
    scanf("%d%d", &l, &r);
    unsigned x = (unsigned)(l ^ r), mask = 0;
    while (x) {
        mask = (mask << 1) | 1u;
        x >>= 1;
    }
    printf("%u\n", mask);
}
