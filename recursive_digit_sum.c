/*Input: numeric string n and multiplier k. Output: recursive digit sum of n repeated k times. */
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000001];
    long long k, sum = 0;
    scanf("%1000000s%lld", s, &k);
    for (int i = 0; s[i]; i++) sum += s[i] - '0';
    sum *= k;
    while (sum >= 10) {
        long long z = 0;
        while (sum) {
            z += sum % 10;
            sum /= 10;
        }
        sum = z;
    }
    printf("%lld\n", sum);
}
