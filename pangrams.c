/*Input: one full line. Output: pangram or not pangram. */
#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[10000];
    int seen[26] = {
        0
    }
    , c = 0;
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i]; i++) if (isalpha((unsigned char) s[i])) {
        int k = tolower((unsigned char) s[i]) - 'a';
        if ( ! seen[k]) seen[k] = 1, c++;
    }
    puts(c == 26 ?"pangram" :"not pangram");
}
