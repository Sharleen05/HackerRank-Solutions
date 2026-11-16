/*Input: n then n histogram heights. Output: largest rectangle area. */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    long long *h = malloc((size_t) n *sizeof(long long));
    int *st = malloc((size_t)(n + 1) *sizeof(int));
    for (int i = 0; i < n; i++) scanf("%lld", &h[i]);
    int top = - 1;
    long long best = 0;
    for (int i = 0; i <= n; i++) {
        long long cur = i == n ?0 : h[i];
        while (top >= 0 &&h[st[top]] > cur) {
            int idx = st[top--];
            long long width = top < 0 ? i : i - st[top] - 1;
            long long area = h[idx] *width;
            if (area > best) best = area;
        }
        st[++top] = i;
    }
    printf("%lld\n", best);
    free(h);
    free(st);
}
