/*Input: t then t integers. Output: Prime or Not prime. */
#include <stdio.h>
int prime(long long n) {
    if (n < 2) return 0;
    if (n % 2 == 0) return n == 2;
    for (long long i = 3; i <= n / i; i += 2) if (n % i == 0) return 0;
    return 1;
}
int main(void) {
    int t;
    long long n;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld", &n);
        puts(prime(n) ?"Prime" :"Not prime");
    }
}
