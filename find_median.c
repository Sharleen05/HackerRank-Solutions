/*Input: odd n then n integers. Output median. */
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
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    qsort(a, n, sizeof(int), cmp);
    printf("%d\n", a[n / 2]);
    free(a);
}
