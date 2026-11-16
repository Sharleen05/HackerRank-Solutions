/*Input: n ranked scores (descending), m, then m player scores. Output player ranks. */
#include <stdio.h>
int main(void) {
    int n, m, a[200000], u = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (i == 0 || x != a[u - 1]) a[u++] = x;
    }
    scanf("%d", &m);
    int p = u - 1;
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        while (p >= 0 &&x >= a[p]) p--;
        printf("%d\n", p + 2);
    }
}
