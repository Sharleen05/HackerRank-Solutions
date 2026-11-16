/*Input: n, sorted array of n integers, then target. Output: zero-based index or -1. */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, x, t;
    scanf("%d", &n);
    int *a = malloc((size_t) n *sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &t);
    int l = 0, r = n - 1, ans = - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == t) {
            ans = m;
            break;
        }
        if (a[m] < t) l = m + 1;
        else r = m - 1;
    }
    printf("%d\n", ans);
    free(a);
}
