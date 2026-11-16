/*Input: n then n pairs petrol distance. Output starting pump index (0-based). */
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    long long total = 0, cur = 0;
    int start = 0;
    for (int i = 0; i < n; i++) {
        long long p, d;
        scanf("%lld%lld", &p, &d);
        total += p - d;
        cur += p - d;
        if (cur < 0) {
            start = i + 1;
            cur = 0;
        }
    }
    printf("%d\n", total >= 0 ? start : - 1);
}
