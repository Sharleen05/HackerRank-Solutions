/*Input: n then n integers. Builds a singly linked list and prints it reversed. */
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int v;
    struct Node *n;
}
Node;
int main(void) {
    int n, x;
    scanf("%d", &n);
    Node *h = NULL;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        Node *p = malloc(sizeof(Node));
        p->v = x;
        p->n = h;
        h = p;
    }
    for (Node *p = h; p; p = p->n) printf("%d\n", p->v);
    while (h) {
        Node *t = h;
        h = h->n;
        free(t);
    }
}
