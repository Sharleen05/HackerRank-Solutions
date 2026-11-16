/*Input: rows cols then binary grid. Output: largest 8-directionally connected region. */
#include <stdio.h>
int a[105][105], R, C;
int dfs(int r, int c) {
    if (r < 0 || c < 0 || r >= R || c >= C || ! a[r][c]) return 0;
    a[r][c] = 0;
    int s = 1;
    for (int dr = - 1; dr <= 1; dr++) for (int dc = - 1; dc <= 1; dc++) if (dr || dc) s += dfs(r + dr, c + dc);
    return s;
}
int main(void) {
    scanf("%d%d", &R, &C);
    for (int i = 0; i < R; i++) for (int j = 0; j < C; j++) scanf("%d", &a[i][j]);
    int best = 0;
    for (int i = 0; i < R; i++) for (int j = 0; j < C; j++) {
        int z = dfs(i, j);
        if (z > best) best = z;
    }
    printf("%d\n", best);
}
