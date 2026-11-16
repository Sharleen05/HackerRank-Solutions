/*Input: n m, array A (n), array B (m). Count integers divisible by all A and dividing all B. */
#include <stdio.h>
long long gcd(long long a, long long b) {
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
long long lcm(long long a, long long b) {
    return a / gcd(a, b) *b;
}
int main(void) {
    int n, m;
    scanf("%d%d", &n, &m);
    long long a, L = 1, B = 0, x;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a);
        L = lcm(L, a);
    }
    for (int i = 0; i < m; i++) {
        scanf("%lld", &x);
        B = i ? gcd(B, x) : x;
    }
    int ans = 0;
    for (long long k = L; k <= B; k += L) if (B % k == 0) ans++;
    printf("%d\n", ans);
}
