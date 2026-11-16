/*Input: n then n integers. Output: all adjacent pairs with minimum difference. */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    int x = * (const int * ) a, y = * (const int * ) b;
    return(x > y) - (x < y);
}
int main(void) {
    int n;
    scanf("%d", &n);
    int *a = malloc((size_t) n *sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    long long d = LLONG_MAX;
    for (int i = 1; i < n; i++) {
        long long z = (long long) a[i] - a[i - 1];
        if (z < d) d = z;
    }
    for (int i = 1; i < n; i++) if ((long long) a[i] - a[i - 1] == d) printf("%d %d ", a[i - 1], a[i]);
    puts("");
    free(a);
}
