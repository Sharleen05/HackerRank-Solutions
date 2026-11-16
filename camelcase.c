/*Input: one CamelCase word (no spaces). Output: number of words. */
#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[1000001];
    if (scanf("%1000000s", s) != 1) return 0;
    int n = 1;
    for (int i = 0; s[i]; i++) if (isupper((unsigned char) s[i])) n++;
    printf("%d\n", n);
}
