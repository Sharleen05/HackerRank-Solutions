/*Input: t then a b m. Output: a^b mod m for each case. */
#include <stdio.h>
long long mpow(long long a, long long b, long long m) {
    long long r = 1 % m;
    a %= m;
    while (b) {
        if (b & 1) r = (__int128) r *a % m;
        a = (__int128) a *a % m;
        b >>= 1;
    }
    return r;
}
int main(void) {
    int t;
    long long a, b, m;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld%lld%lld", &a, &b, &m);
        printf("%lld\n", mpow(a, b, m));
    }
}
