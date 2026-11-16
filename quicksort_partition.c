/*HackerRank Quicksort 1 - Partition: input n then n integers; pivot is first item. */
#include <stdio.h>
int main(void) {
    int n, a[1000], l[1000], e[1000], g[1000], nl = 0, ne = 0, ng = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int p = a[0];
    for (int i = 0; i < n; i++) if (a[i] < p) l[nl++] = a[i];
    else if (a[i] == p) e[ne++] = a[i];
    else g[ng++] = a[i];
    for (int i = 0; i < nl; i++) printf("%d ", l[i]);
    for (int i = 0; i < ne; i++) printf("%d ", e[i]);
    for (int i = 0; i < ng; i++) printf("%d ", g[i]);
    puts("");
}
