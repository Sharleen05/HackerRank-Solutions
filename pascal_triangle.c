/*Input: number of rows n. Output: first n rows of Pascal triangle. */
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        long long v = 1;
        for (int j = 0; j <= i; j++) {
            printf("%lld%c", v, j == i ?'\n' :' ');
            v = v * (i - j) / (j + 1);
        }
    }
}
