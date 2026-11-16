/*Input: n then n integers. Output: positive, negative, zero fractions. */
#include <stdio.h>
int main(void) {
    int n, x;
    long long p = 0, m = 0, z = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > 0) p++;
        else if (x < 0) m++;
        else z++;
    }
    if (n) {
        printf("%.6f\n%.6f\n%.6f\n", (double) p / n, (double) m / n, (double) z / n);
    }
}
