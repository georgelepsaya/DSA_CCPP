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

struct Node *Search(struct Node *p, int key) {
    while (p != NULL) {
        if (p->data == key) {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

struct Node *RSearch(struct Node *p, int key) {
    if (p == NULL) return NULL;
    if (p->data == key) return p;
    p = p->next;
    return RSearch(p, key);
}

int main() {
   
    int A[] = {3, 5, 7, 10, 25, 20, 21};
    create(A, 7);
    Display(first);
    printf("\n");
    
    struct Node *p = Search(first, 25);
    struct Node *rp = RSearch(first, 7);
    printf("%d\n", p->data);
    printf("%d\n", rp->data);
    
    
    return 0;
}
