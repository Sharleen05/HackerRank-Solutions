/*Input: t then t bracket strings. Output: YES/NO. */
#include <stdio.h>
#include <string.h>
int main(void) {
    int t;
    char s[100001], st[100001];
    scanf("%d", &t);
    while (t--) {
        scanf("%100000s", s);
        int k = 0, ok = 1;
        for (int i = 0; s[i]; i++) {
            char c = s[i];
            if (c == '(' || c == '[' || c == '{') st[k++] = c;
            else {
                if ( ! k) {
                    ok = 0;
                    break;
                }
                char o = st[--k];
                if ( ! ((o == '(' &&c == ')') || (o == '[' &&c == ']') || (o == '{' &&c == '}'))) {
                    ok = 0;
                    break;
                }
            }
        }
        puts(ok &&k == 0 ?"YES" :"NO");
    }
}
