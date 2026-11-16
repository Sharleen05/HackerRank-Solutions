/*Input: one lowercase string. Output: reduced string or Empty String. */
#include <stdio.h>
int main(void) {
    char s[1000001], st[1000001];
    int t = 0;
    if (scanf("%1000000s", s) != 1) return 0;
    for (int i = 0; s[i]; i++) {
        if (t &&st[t - 1] == s[i]) t--;
        else st[t++] = s[i];
    }
    if ( ! t) puts("Empty String");
    else {
        st[t] = '\0';
        puts(st);
    }
}
