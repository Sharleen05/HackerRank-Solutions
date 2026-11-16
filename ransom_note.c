/*Input: m n, m magazine words, then n note words. Output: Yes/No. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    int m, n;
    char w[1001][101], x[101];
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) scanf("%100s", w[i]);
    int ok = 1;
    for (int j = 0; j < n; j++) {
        scanf("%100s", x);
        int found = - 1;
        for (int i = 0; i < m; i++) if (w[i][0] &&strcmp(w[i], x) == 0) {
            found = i;
            break;
        }
        if (found < 0) ok = 0;
        else w[found][0] = '\0';
    }
    puts(ok ?"Yes" :"No");
}
