/*Alias solution: see Unit3/sherlock_and_array.c. */
#include <stdio.h>
int main(void) {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        long long a[100000], s = 0, l = 0;
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
            s += a[i];
        }
        int ok = 0;
        for (int i = 0; i < n; i++) {
            if (l == s - l - a[i]) ok = 1;
            l += a[i];
        }
        puts(ok ?"YES" :"NO");
    }
}
