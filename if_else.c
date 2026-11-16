/*HackerRank Python If-Else logic expressed in C. Input: integer n. */
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    if (n % 2) puts("Weird");
    else if (n >= 2 &&n <= 5) puts("Not Weird");
    else if (n >= 6 &&n <= 20) puts("Weird");
    else puts("Not Weird");
}
