/*HackerRank Maximum Element: q operations: 1 x push, 2 pop, 3 print maximum. */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int q, type;
    long long x;
    long long *s = malloc(2000001 *sizeof(long long)), *mx = malloc(2000001 *sizeof(long long));
    int n = 0;
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &type);
        if (type == 1) {
            scanf("%lld", &x);
            s[n] = x;
            mx[n] = (n &&mx[n - 1] > x) ? mx[n - 1] : x;
            n++;
        } else if (type == 2) {
            if (n) n--;
        } else if (type == 3 &&n) printf("%lld\n", mx[n - 1]);
    }
    free(s);
    free(mx);
}
