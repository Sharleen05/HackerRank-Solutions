/*HackerRank Restaurant: input t, then l b for each rectangle. Output max number of largest squares. */
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
    int t;
    long long l, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld%lld", &l, &b);
        long long g = gcd(l, b);
        printf("%lld\n", (l / g) * (b / g));
    }
}
