/*HackerRank Insertion Sort - Part 1: input n, then n integers. */
#include <stdio.h>
int main(void) {
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int v = a[n - 1], j = n - 2;
    while (j >= 0 &&a[j] > v) {
        a[j + 1] = a[j];
        for (int k = 0; k < n; k++) printf("%d%c", a[k], k == n - 1 ?'\n' :' ');
        j--;
    }
    a[j + 1] = v;
    for (int k = 0; k < n; k++) printf("%d%c", a[k], k == n - 1 ?'\n' :' ');
}
