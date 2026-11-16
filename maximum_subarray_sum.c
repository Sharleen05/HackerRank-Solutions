/*HackerRank Maximum Subarray Sum: input t; each case n m then n values. Max subarray sum modulo m. */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, n;
    long long m;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%lld", &n, &m);
        long long *p = malloc((size_t)(n + 1) *sizeof(long long));
        p[0] = 0;
        for (int i = 1; i <= n; i++) {
            long long x;
            scanf("%lld", &x);
            p[i] = (p[i - 1] + x) % m;
        }
        long long best = 0;
        for (int i = 1; i <= n; i++) for (int j = 0; j < i; j++) {
            long long z = (p[i] - p[j] + m) % m;
            if (z > best) best = z;
        }
        printf("%lld\n", best);
        free(p);
    }
}
