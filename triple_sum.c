/*Input: n m p, arrays A B C. Count distinct triplets a<=b and c<=b. */
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *x, const void *y) {
    long long a = * (const long long * ) x, b = * (const long long * ) y;
    return(a > b) - (a < b);
}
int main(void) {
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    long long *a = malloc((size_t) n * 8), *b = malloc((size_t) m * 8), *c = malloc((size_t) p * 8);
    for (int i = 0; i < n; i++) scanf("%lld", a + i);
    for (int i = 0; i < m; i++) scanf("%lld", b + i);
    for (int i = 0; i < p; i++) scanf("%lld", c + i);
    qsort(a, n, 8, cmp);
    qsort(b, m, 8, cmp);
    qsort(c, p, 8, cmp);
    long long ans = 0;
    int i = 0, j = 0;
    for (int k = 0; k < m; k++) {
        while (i < n &&a[i] <= b[k]) {
            if (i == 0 || a[i] != a[i - 1]) i++;
            else i++;
        } while (j < p &&c[j] <= b[k]) j++;
        int u = 0, v = 0;
        for (int z = 0; z < i; z++) if (z == 0 || a[z] != a[z - 1]) u++;
        for (int z = 0; z < j; z++) if (z == 0 || c[z] != c[z - 1]) v++;
        if (k == 0 || b[k] != b[k - 1]) ans += (long long) u *v;
    }
    printf("%lld\n", ans);
    free(a);
    free(b);
    free(c);
}
