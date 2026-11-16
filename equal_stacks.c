/*Input: n1 n2 n3, then each stack heights top-to-bottom. */
#include <stdio.h>
int main(void) {
    int n[3];
    scanf("%d%d%d", &n[0], &n[1], &n[2]);
    int a[3][100000];
    long long s[3] = {
        0
    }
    ;
    int p[3] = {
        0
    }
    ;
    for (int k = 0; k < 3; k++) for (int i = 0; i < n[k]; i++) {
        scanf("%d", &a[k][i]);
        s[k] += a[k][i];
    } while ( ! (s[0] == s[1] &&s[1] == s[2])) {
        int k = 0;
        if (s[1] > s[k]) k = 1;
        if (s[2] > s[k]) k = 2;
        if (p[k] < n[k]) s[k] -= a[k][p[k]++];
        else {
            s[k] = 0;
        }
    }
    printf("%lld\n", s[0]);
}
