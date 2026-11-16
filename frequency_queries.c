/*Input: q followed by q pairs (1 x insert, 2 x delete one, 3 f test frequency). */
#include <stdio.h>
#include <stdlib.h>
#define SZ 2000001
int main(void) {
    int q, t, x;
    int *freq = calloc(SZ, sizeof(int)), *count = calloc(SZ, sizeof(int));
    scanf("%d", &q);
    while (q--) {
        scanf("%d%d", &t, &x);
        if (x < 0 || x >= SZ) continue;
        if (t == 1) {
            if (freq[x] > 0) count[freq[x]]--;
            freq[x]++;
            count[freq[x]]++;
        } else if (t == 2 &&freq[x] > 0) {
            count[freq[x]]--;
            freq[x]--;
            if (freq[x]) count[freq[x]]++;
        } else if (t == 3) printf("%d\n", count[x] > 0);
    }
    free(freq);
    free(count);
}
