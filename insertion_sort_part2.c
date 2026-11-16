/*HackerRank Insertion Sort - Part 2: input n then n integers; print array after each pass. */
#include <stdio.h>
int main(void) {
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 1; i < n; i++) {
        int v = a[i], j = i - 1;
        while (j >= 0 &&a[j] > v) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
        for (int k = 0; k < n; k++) printf("%d%c", a[k], k == n - 1 ?'\n' :' ');
    }
}
