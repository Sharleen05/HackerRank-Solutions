/*Input: n then n integers. Output: sorted array and swap count. */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int *a = malloc((size_t) n *sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long swaps = 0;
    for (int i = 0; i < n; i++) {
        int changed = 0;
        for (int j = 0; j < n - i - 1; j++) if (a[j] > a[j + 1]) {
            int t = a[j];
            a[j] = a[j + 1];
            a[j + 1] = t;
            swaps++;
            changed = 1;
        }
        if ( ! changed) break;
    }
    for (int i = 0; i < n; i++) printf("%d%c", a[i], i == n - 1 ?'\n' :' ');
    printf("Array is sorted in %lld swaps.\n", swaps);
    free(a);
}
