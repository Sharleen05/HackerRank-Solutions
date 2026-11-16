/*HackerRank Variable Sized Arrays: input n q, n rows (length then values), then q queries i j. */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, q;
    scanf("%d%d", &n, &q);
    int * *a = malloc((size_t) n *sizeof(int * ));
    int *len = malloc((size_t) n *sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &len[i]);
        a[i] = malloc((size_t) len[i] *sizeof(int));
        for (int j = 0; j < len[i]; j++) scanf("%d", &a[i][j]);
    } while (q--) {
        int i, j;
        scanf("%d%d", &i, &j);
        printf("%d\n", a[i][j]);
    }
    for (int i = 0; i < n; i++) free(a[i]);
    free(a);
    free(len);
}
