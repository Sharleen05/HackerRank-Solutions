/*Input: n then n integers where every value but one occurs twice. */
#include <stdio.h>
int main(void) {
    int n, x, r = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        r ^=x;
    }
    printf("%d\n", r);
}
