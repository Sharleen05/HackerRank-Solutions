/*Input: two non-negative integers. Output: GCD then LCM. */
#include <stdio.h>
long long gcd(long long a, long long b) {
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main(void) {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    long long g = gcd(a, b);
    printf("%lld\n%lld\n", g, g ? (a / g) *b :0);
}
