#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int data;
    struct Node *next;
} *first=NULL;

void create(int A[], int n) {
    
    struct Node *t, *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->next = NULL;
    first->data = A[0];
    last = first;
    
    for (int i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p) {
    if (p != NULL) {
        printf("%d ", p->data);
        Display(p->next);
    }
}

int count(struct Node *p) {
    if (p == NULL) return 0;
    return count(p->next) + 1;
}

int sum(struct Node *p) {
    if (p == NULL) return 0;
    return sum(p->next) + p->data;
}

int max(struct Node *p) {
    if (p != NULL)
        return (max(p->next) > p->data) ? max(p->next) : p->data;
    return INT_MIN;
}

int main() {
   
    int A[] = {3, 5, 7, 10, 25, 20, 21};
    create(A, 7);
    Display(first);
    printf("\n");
    printf("%d\n", count(first));
    printf("%d\n", sum(first));
    printf("%d\n", max(first));
    
    return 0;
}
