/*Input: n. Output: all primes <= n, space-separated (basic sieve). */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    char *p = calloc((size_t) n + 1, 1);
    for (int i = 2; i <= n; i++) p[i] = 1;
    for (int i = 2; i <= n / i; i++) if (p[i]) for (int j = i *i; j <= n; j += i) p[j] = 0;
    for (int i = 2; i <= n; i++) if (p[i]) printf("%d ", i);
    puts("");
    free(p);
}
