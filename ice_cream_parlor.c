/*Input: t; each case money m, n, then n costs. Output 1-based pair of indices. */
#include <stdio.h>
int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m, n, a[100000];
        scanf("%d%d", &m, &n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        int done = 0;
        for (int i = 0; i < n && ! done; i++) for (int j = i + 1; j < n; j++) if (a[i] + a[j] == m) {
            printf("%d %d\n", i + 1, j + 1);
            done = 1;
            break;
        }
    }
}
