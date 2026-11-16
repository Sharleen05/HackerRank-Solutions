/*Input: t, then t strings. Output: Funny/Not Funny for each. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    int t;
    char s[10001];
    scanf("%d", &t);
    while (t--) {
        scanf("%10000s", s);
        int n = (int) strlen(s), ok = 1;
        for (int i = 1; i < n; i++) if (abs((unsigned char) s[i] - (unsigned char) s[i - 1]) != abs((unsigned char) s[n - i] - (unsigned char) s[n - i - 1])) ok = 0;
        puts(ok ?"Funny" :"Not Funny");
    }
}
