/*Input: n m, then n sorted integers and m sorted integers. Output merged sorted list. */
#include <stdio.h>
int main(void) {
    int n, m, a[100000], b[100000];
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    int i = 0, j = 0;
    while (i < n || j < m) {
        if (j == m || (i < n &&a[i] <= b[j])) printf("%d ", a[i++]);
        else printf("%d ", b[j++]);
    }
    puts("");
}
