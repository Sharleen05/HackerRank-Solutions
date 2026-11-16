/*Input: n then an n x n matrix. Output: absolute diagonal difference. */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, x;
    long long a = 0, b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        scanf("%d", &x);
        if (i == j) a += x;
        if (i + j == n - 1) b += x;
    }
    printf("%lld\n", llabs(a - b));
}
