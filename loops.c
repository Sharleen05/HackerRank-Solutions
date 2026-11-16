/*Input: integer n. Output: n x i for i=1..10, one per line. */
#include <stdio.h>
int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    for (int i = 1; i <= 10; i++) printf("%lld x %d = %lld\n", n, i, n *i);
}
