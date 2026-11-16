/*Input: n m, then m queries a b k (1-based inclusive). Output: maximum value after all range additions. */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m;
    scanf("%d%d", &n, &m);
    long long *d = calloc((size_t) n + 2, sizeof(long long));
    while (m--) {
        int a, b;
        long long k;
        scanf("%d%d%lld", &a, &b, &k);
        d[a] += k;
        d[b + 1] -= k;
    }
    long long cur = 0, best = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i];
        if (cur > best) best = cur;
    }
    printf("%lld\n", best);
    free(d);
}
