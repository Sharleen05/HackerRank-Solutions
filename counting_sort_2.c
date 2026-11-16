/*Input: n then n integers in [0,99]. Output: sorted values. */
#include <stdio.h>
int main(void) {
    int n, x, f[100] = {
        0
    }
    ;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        f[x]++;
    }
    for (int i = 0; i < 100; i++) while (f[i]--) printf("%d ", i);
    puts("");
}
