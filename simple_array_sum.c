/*Input: n followed by n integers. Output: their sum. */
#include <stdio.h>
int main(void) {
    int n;
    long long x, s = 0;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &x);
        s += x;
    }
    printf("%lld\n", s);
}
