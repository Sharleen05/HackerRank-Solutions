/*HackerRank Fraudulent Activity Notifications. Input: n d then n expenditures (0..200). */
#include <stdio.h>
int main(void) {
    int n, d, a[200000], f[201] = {
        0
    }
    , ans = 0;
    scanf("%d%d", &n, &d);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (i >= d) {
            int target;
            if (d % 2) {
                int c = 0;
                for (int x = 0; x <= 200; x++) {
                    c += f[x];
                    if (c > (d / 2)) {
                        target = 2 *x;
                        break;
                    }
                }
            } else {
                int c = 0, x1 = 0, x2 = 0;
                for (int x = 0; x <= 200; x++) {
                    c += f[x];
                    if (c >= d / 2 &&x1 == 0) x1 = x;
                    if (c >= d / 2 + 1) {
                        x2 = x;
                        break;
                    }
                }
                target = x1 + x2;
            }
            if (a[i] >= target) ans++;
            f[a[i - d]]--;
        }
        f[a[i]]++;
    }
    printf("%d\n", ans);
}
