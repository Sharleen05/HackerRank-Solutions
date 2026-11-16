/*Input: two integers a b. Output: sum and difference. */
#include <stdio.h>
int main(void) {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n%lld\n", a + b, a - b);
}
