/*Input: n then house prices by year. Find minimum positive loss when buying earlier, selling later. */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    long long v;
    int i;
}
P;
int cmp(const void *a, const void *b) {
    long long x = ((P * ) a)->v, y = ((P * ) b)->v;
    return(x > y) - (x < y);
}
int main(void) {
    int n;
    scanf("%d", &n);
    P *a = malloc((size_t) n *sizeof(P));
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i].v);
        a[i].i = i;
    }
    qsort(a, n, sizeof(P), cmp);
    long long best = LLONG_MAX;
    for (int i = 1; i < n; i++) if (a[i].i < a[i - 1].i) {
        long long d = a[i].v - a[i - 1].v;
        if (d < best) best = d;
    }
    printf("%lld\n", best);
    free(a);
}
