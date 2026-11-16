/*Input: t then n. Number of ways to climb n steps taking 1, 2, or 3 steps. */
#include <stdio.h>
int main(void) {
    int t, n;
    long long dp[38] = {
        0
    }
    ;
    dp[0] = 1;
    for (int i = 1; i <= 37; i++) dp[i] = dp[i - 1] + (i >= 2 ? dp[i - 2] :0) + (i >= 3 ? dp[i - 3] :0);
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%lld\n", dp[n]);
    }
}
