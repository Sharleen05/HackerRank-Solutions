/*HackerRank 2D Array - DS: input exactly 6 rows x 6 columns. */
#include <stdio.h>
int main(void) {
    int a[6][6], best = - 2147483647;
    for (int i = 0; i < 6; i++) for (int j = 0; j < 6; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) {
        int s = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
        if (s > best) best = s;
    }
    printf("%d\n", best);
}
