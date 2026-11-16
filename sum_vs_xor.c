/*Input: non-negative integer n. Output: count of x where n+x == n XOR x. */
#include <stdio.h>
int main(void) {
    unsigned long long n;
    scanf("%llu", &n);
    int zeros = 0;
    while (n) {
        if ( ! (n & 1)) zeros++;
        n >>= 1;
    }
    printf("%llu\n", 1ULL << zeros);
}
