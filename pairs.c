/*Input: n k then n integers. Count pairs with absolute difference k. */
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
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    int i = 0, j = 1, ans = 0;
    while (i < n &&j < n) {
        long long d = (long long) a[j] - a[i];
        if (d == k) {
            ans++;
            i++;
            j++;
        } else if (d < k) j++;
        else i++;
        if (i == j) j++;
    }
    printf("%d\n", ans);
    free(a);
}
