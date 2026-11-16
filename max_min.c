/*HackerRank Max Min: input n k then n integers. Output min unfairness among windows of k. */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    int x = * (const int * ) a, y = * (const int * ) b;
    return(x > y) - (x < y);
}
int main(void) {
    int n, k;
    scanf("%d%d", &n, &k);
    int *a = malloc((size_t) n *sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    qsort(a, n, sizeof(int), cmp);
    long long best = LLONG_MAX;
    for (int i = 0; i + k <= n; i++) {
        long long d = (long long) a[i + k - 1] - a[i];
        if (d < best) best = d;
    }
    printf("%lld\n", best);
    free(a);
}
