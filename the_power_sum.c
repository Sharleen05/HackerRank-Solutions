/*Input: X N. Count ways to express X as sum of unique positive integers raised to N. */
#include <stdio.h>
int countWays(int rem, int power, int start) {
    if (rem == 0) return 1;
    int c = 0;
    for (int i = start; ; i++) {
        int v = 1;
        for (int j = 0; j < power; j++) v *= i;
        if (v > rem) break;
        c += countWays(rem - v, power, i + 1);
    }
    return c;
}
int main(void) {
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%d\n", countWays(x, n, 1));
}
