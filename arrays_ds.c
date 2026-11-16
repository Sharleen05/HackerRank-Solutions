/*Input: n then n integers. Output: elements in reverse order. */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int *a = malloc((size_t) n *sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = n - 1; i >= 0; i--) printf("%d%c", a[i], i ?' ' :'\n');
    free(a);
}
