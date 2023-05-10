#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

int main(int argc, const char * argv[]) {
    
    // Stack memory
    struct Rectangle r1 = {10, 5};
    struct Rectangle *p = &r1;
    printf("Length: %d (stack)\n", p->length);
    printf("Breadth: %d (stack)\n", p->breadth);
    
    // Heap memory
    struct Rectangle *r2;
    r2 = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    r2->length = 15;
    r2->breadth = 10;
    printf("\nLength: %d (heap)\n", r2->length);
    printf("Length: %d (heap)\n\n", r2->breadth);
    
    return 0;
}
