/*HackerRank Queue using Two Stacks: q operations, 1 x enqueue, 2 dequeue, 3 print front. */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int q, t;
    long long x;
    long long *a = malloc(2000001 *sizeof(long long)), *b = malloc(2000001 *sizeof(long long));
    int na = 0, nb = 0;
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &t);
        if (t == 1) {
            scanf("%lld", &x);
            a[na++] = x;
        } else {
            if ( ! nb) while (na) b[nb++] = a[--na];
            if (t == 2) {
                if (nb) nb--;
            } else if (t == 3 &&nb) printf("%lld\n", b[nb - 1]);
        }
    }
    free(a);
    free(b);
}
