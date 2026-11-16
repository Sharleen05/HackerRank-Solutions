/*Demonstration input: n, then n next-index values (0-based, -1 means NULL), then head index. */
#include <stdio.h>
int main(void) {
    int n, head;
    scanf("%d", &n);
    int next[100005];
    for (int i = 0; i < n; i++) scanf("%d", &next[i]);
    scanf("%d", &head);
    int slow = head, fast = head, cycle = 0;
    while (fast != - 1 &&next[fast] != - 1) {
        slow = next[slow];
        fast = next[next[fast]];
        if (slow == fast) {
            cycle = 1;
            break;
        }
    }
    puts(cycle ?"YES" :"NO");
}
