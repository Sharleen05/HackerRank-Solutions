/*Input: n then n integers in [0,99]. Output: 100 frequencies. */
#include <stdio.h>
int main(void) {
    int n, x, f[100] = {
        0
    }
    ;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        if (x >= 0 &&x < 100) f[x]++;
    }
    for (int i = 0; i < 100; i++) printf("%d%c", f[i], i == 99 ?'\n' :' ');
}
