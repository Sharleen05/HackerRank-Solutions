/*Input: t pairs of strings. Output: YES if they share a character, else NO. */
#include <stdio.h>
#include <string.h>
int main(void) {
    int t;
    char a[100001], b[100001];
    scanf("%d", &t);
    while (t--) {
        int f[256] = {
            0
        }
        , ok = 0;
        scanf("%100000s%100000s", a, b);
        for (int i = 0; a[i]; i++) f[(unsigned char) a[i]] = 1;
        for (int i = 0; b[i]; i++) if (f[(unsigned char) b[i]]) ok = 1;
        puts(ok ?"YES" :"NO");
    }
}
