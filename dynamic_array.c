/*HackerRank Dynamic Array: input n q, then q queries (type x y). */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, q;
    scanf("%d%d", &n, &q);
    int * *a = calloc((size_t) n, sizeof(int * )), *sz = calloc((size_t) n, sizeof(int)), *cap = calloc((size_t) n, sizeof(int));
    int last = 0;
    while (q--) {
        int t, x, y;
        scanf("%d%d%d", &t, &x, &y);
        int idx = (x ^ last) % n;
        if (t == 1) {
            if (sz[idx] == cap[idx]) {
                cap[idx] = cap[idx] ? cap[idx] * 2 :4;
                a[idx] = realloc(a[idx], (size_t) cap[idx] *sizeof(int));
            }
            a[idx][sz[idx]++] = y;
        } else if (sz[idx]) {
            last = a[idx][y % sz[idx]];
            printf("%d\n", last);
        }
    }
    for (int i = 0; i < n; i++) free(a[i]);
    free(a);
    free(sz);
    free(cap);
}
