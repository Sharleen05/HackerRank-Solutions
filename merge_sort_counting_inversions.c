/*Input: t; each case n then n integers. Output inversion count. */
#include <stdio.h>
#include <stdlib.h>
long long sortCount(long long *a, long long *t, int l, int r) {
    if (r - l <= 1) return 0;
    int m = l + (r - l) / 2;
    long long z = sortCount(a, t, l, m) + sortCount(a, t, m, r);
    int i = l, j = m, k = l;
    while (i < m &&j < r) {
        if (a[i] <= a[j]) t[k++] = a[i++];
        else {
            t[k++] = a[j++];
            z += m - i;
        }
    } while (i < m) t[k++] = a[i++];
    while (j < r) t[k++] = a[j++];
    for (i = l; i < r; i++) a[i] = t[i];
    return z;
}
int main(void) {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        long long *a = malloc((size_t) n * 8), *b = malloc((size_t) n * 8);
        for (int i = 0; i < n; i++) scanf("%lld", a + i);
        printf("%lld\n", sortCount(a, b, 0, n));
        free(a);
        free(b);
    }
}
